// C code to implement IP forwarding table lookup

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 15
#define N 150

// Declaration of structure of linked list
// to store ip address in each node
struct node {
	char* data;
	struct node* next;
} * head[15];

// This function fetch data from file
// and store them into different arrays
void storeData(FILE* fp,
			char buf[M][N],
			char net[M][N],
			char mask[M][N],
			char gateway[M][N],
			char port[M][N])
{

	char line[200];
	int c, i = 0, j, k = 0, m = 0;

	// Read data from the file line by line
	// and each line is stored in array separately.
	while (fgets(line, sizeof(line), fp)) {
		j = 0;
		for (int l = 0; l < strlen(line); l++) {
			buf[i][j] = line[l];
			j++;
		}
		i++;
	}

	// From each lines stored in buf,
	// network id, subnet mask, gateway
	// and port are extracted
	// and stored into individual arrays.
	for (i = 0; i < 15; i++) {
		k = 0;
		for (j = 0; buf[i][j] != ','; j++) {
			net[i][k] = buf[i][j];
			k++;
		}
		m = j + 2;
		k = 0;
		for (j = m; buf[i][j] != ','; j++) {
			mask[i][k] = buf[i][j];
			k++;
		}
		m = j + 2;
		k = 0;
		for (j = m; buf[i][j] != ','; j++) {
			gateway[i][k] = buf[i][j];
			k++;
		}
		m = j + 2;
		k = 0;
		for (j = m; buf[i][j] != '\0'; j++) {
			port[i][k] = buf[i][j];
			k++;
		}
	}
}

// Function to create routing table
// using arrays created by storeData() function
// using linked list data structure
void insert(char net[M][N], char mask[M][N],
			char gateway[M][N], char port[M][N],
			char buf[M][N])
{
	char *temp1, *temp2, *temp3, *temp4;
	struct node* new;

	for (int i = 0; i < M; i++) {

		// Initialize head of each
		// linked list with NULL.
		head[i] = NULL;
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 4; j++) {

			// If head is null
			// then first create new node
			// and store network id into it.
			if (head[i] == NULL) {

				new = (struct node*)malloc(
					sizeof(struct node));
				new->data = net[i];
				new->next = NULL;
				head[i] = new;
			}

			// If head is not null
			// and value of j is 1 then create new node
			// which is pointed by head and it
			// will contain subnet mask
			else if (j == 1) {

				new->next = (struct node*)malloc(
					sizeof(struct node));
				new = new->next;
				new->data = mask[i];
				new->next = NULL;
			}

			// If head is not null and value of j is 2
			// then create new node
			// which is pointed by subnet mask
			// and it will contain gateway
			else if (j == 2) {

				new->next = (struct node*)malloc(
					sizeof(struct node));
				new = new->next;
				new->data = gateway[i];
			}

			// If head is not null and value of j is 3
			// then create new node
			// which is pointed by gateway and
			// it will contain port
			else if (j == 3) {

				new->next = (struct node*)malloc(
					sizeof(struct node));
				new = new->next;
				new->data = port[i];
			}
		}
	}

	// Perform sorting on the basis
	// of longest prefix of subnet mask
	for (int i = 0; i < M; i++) {
		for (int j = i; j < M; j++) {

			// Longest prefix has been compared
			// by using inet_addr() system call
			// which gives decimal value of an ip address.
			if (inet_addr(head[i]->next->data)
				< inet_addr(head[j]->next->data)) {

				struct node* temp = head[i];
				head[i] = head[j];
				head[j] = temp;
			}
		}
	}
}

// This function will search for gateway ip
// and port number in routing table
// through which packet has been sent
// to next node/destination
void search(FILE* fp1, FILE* fp2)
{

	char str[100];
	struct in_addr addr;
	unsigned int val;
	fprintf(fp2, "%c", ' ');

	// Read file 'input.txt' line by line
	// and perform bitwise AND between subnet mask
	// and input(destination) ip coming from file.
	while (fgets(str, sizeof(str), fp1)) {

		for (int i = 0; i < M; i++) {

			// Perform bitwise AND operation on result
			// (i.e. Decimal value of an ip address)
			// coming from inet_addr() system call
			val = inet_addr(str) & inet_addr(head[i]->next->data);
			addr.s_addr = val;
			char* str1 = inet_ntoa(addr);
			char* str2 = head[i]->data;
			int count = 0;

			// Compare the network id string with result
			// coming after performing AND operation
			// and if they are same then increment count.
			for (int i = 0; str1[i] != '\0'; i++) {

				if (str1[i] == str2[i]) {
					count++;
				}
			}

			// If count is same as the string length
			// of network id then find gateway ip
			// and port number of that respective network id
			// and write it into 'output.txt' file.
			if (count == strlen(str1)) {

				struct node* ptr = head[i]->next;
				struct node* temp = ptr->next;
				while (temp != NULL) {

					fprintf(fp2, "%s ", temp->data);
					temp = temp->next;
				}
				break;
			}
		}
	}
}

// Driver code
int main(int argc, char* argv[])
{

	FILE *fin, *fout, *fp;
	char buf[M][N] = { { 0 } };
	char net[M][N] = { { 0 } };
	char mask[M][N] = { { 0 } };
	char gateway[M][N] = { { 0 } };
	char port[M][N] = { { 0 } };

	// if command line argument is less than 3
	// then it will show standard error.
	if (argc < 3) {

		fprintf(stderr, "File name:%s\n", argv[0]);
		return 1;
	}

	// If 3 arguments are given then input
	// and routing.txt files will be opened in read mode
	// while output.txt file is opened in write mode.
	else {

		fin = fopen(argv[1], "r");
		fout = fopen(argv[2], "w");
		fp = fopen(argv[3], "r");
	}

	// If any of the file is not present
	// then it will give an error.
	if (fp == NULL || fin == NULL || fout == NULL) {

		printf("Error");
		return 0;
	}

	// This function will read the data
	// of a file 'routing.txt' line by line
	// and store them into one array named 'buf',
	// after that the coma separated values in buf
	// are stored into their respective array.
	storeData(fp, buf, net, mask, gateway, port);

	// It will create routing table using linked list
	insert(net, mask, gateway, port, buf);

	// It will take input from input.txt files
	// which contains only destination ip address
	// and search about the route through which
	// packet has been sent in network
	// and output is stored in to an output.txt file
	search(fin, fout);

	printf("Forwarding table has been implemented successfully");
	printf("See the output in %s file\n", argv[2]);

	/*Closes all the files*/
	fclose(fin);
	fclose(fp);
	fclose(fout);

	return 0;
}
