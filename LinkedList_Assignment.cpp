#include <iostream>
using namespace std;

struct FU_Student
    {
char S_surn[15];
char S_name[14];
int S_reg_no;
float S_gpa;
int S_age;
char S_addr[25];
FU_Student *next;
    };

// Implement the following functions of the above application (a menu is preferable):

// 1.	Cons: creates the linked list of students (new list)

 FU_Student* head = new FU_Student();

// 2.	Is_Empty: checks whether the linked list (students) is empty or not 

bool Is_Empty()
{
    if (head == NULL)
        return false;
    else
        return true;
}

// 3.	Head: returns the first element of the linked list (first student)

FU_Student* Head(){
    FU_Student* p = head;
    if (p == NULL) {
        cout << "No Record "
             << "Available\n";
             return -1;
    }
    else {
        cout << "Registration Number\tName\tSurname"
             << "\tAddress\tAge\tGPA\n";
             
            //  cout << p->S_reg_no << "    \t"
            //      << p->S_name << "\t"
            //      << p->S_surn << "\t"
            //      << p->S_addr << "\t"
            //      << p->S_age << "\t"
            //      << p->S_gpa << "\t" endl;
             
            return p;
    }
}

// 4.	Tail: returns the original linked list without the head element (rest of the students)

void printNthFromLast(struct FU_Student* head, int n)
{
    int len = 0, i;
    struct FU_Student* temp = head;
  
    // count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
  
    // check if value of n is not
    // more than length of the linked list
    if (len < n)
        return;
  
    temp = head;
  
    // get the (len-n+1)th node from the beginning
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
  
    cout << temp->data;
  
    return;
}

// 5.	First_Insert: inserts a new element (new student) at the beginning of your linked list

void Insert_Record(char S_surn[15,char S_name[14],int S_reg_no,float S_gpa,int S_age,char S_addr[25])
{
    // if Record Already Exist
    if (check(S_reg_no)) {
        cout << "Student with this "
             << "record Already Exists\n";
        return;
    }
 
    // Create new FU_Student to Insert Record
    FU_Student* t = new FU_Student();
    t->S_surn = S_surn;
    t->S_name = S_name;
    t->S_reg_no = S_reg_no;
    t->S_gpa = S_gpa;
    t->S_age = S_age;
    t->S_addr = S_addr;
    t->next = NULL;
 
    // Insert at Begin
    if (head == NULL
        || (head->S_reg_no >= t->S_reg_no)) {
        t->next = head;
        head = t;
    }
 
    // Insert at middle or End
    else {
        FU_Student* c = head;
        while (c->next != NULL
               && c->next->S_reg_no < t->S_reg_no) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }
 
    cout << "Record Inserted "
         << "Successfully\n";
}


// 6.	Sort_gpa: sorts the linked list in ascending order according to students ‘s_gpa’

class LinkedlistIS {
 
public:
    // FU_Student* head;
    FU_Student* sorted;
 
void insertionSort(FU_Student* headref)
    {
        // Initialize sorted linked list
        sorted = NULL;
        FU_Student* current = headref;
        // Traverse the given linked list and insert every
        // node to sorted
        while (current != NULL) {
            // Store next for next iteration
            FU_Student* next = current->next;
            // insert current in sorted linked list
            sortGPA(current);
            // Update current
            current = next;
        }
        // Update head_ref to point to sorted linked list
        head = sorted;
    }
    void sortGPA(FU_Student* newnode)
    {
        /* Special case for the head end */
        if (sorted == NULL || sorted->S_gpa >= newnode->S_gpa) {
            newnode->next = sorted;
            sorted = newnode;
        }
        else {
            FU_Student* current = sorted;
            /* Locate the node before the point of insertion
             */
            while (current->next != NULL
                   && current->next->S_gpa < newnode->S_gpa) {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }
};
// 7.	Sort_age: sorts the linked list in ascending order according to their ‘s_age’

void sortGPA(FU_Student* newnode)
    {
        /* Special case for the head end */
        if (sorted == NULL || sorted->S_gpa >= newnode->S_gpa) {
            newnode->next = sorted;
            sorted = newnode;
        }
        else {
            FU_Student* current = sorted;
            /* Locate the node before the point of insertion
             */
            while (current->next != NULL
                   && current->next->S_gpa < newnode->S_gpa) {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }

// 8.	Sort_Insert: inserts a new element in your sorted linked list, its order is preserved (either gpa or age depending which one is worked out)
// I am sorting with age.
void sortedInsert(struct FU_Student** head, struct FU_Student* newNode)//function to insert data in sorted position
{   
	//If linked list is empty
	if (*head == NULL || (*head)->S_age >= newNode->S_age)
	{
		newNode->next = *head;
		*head = newNode;
		return;
	}

	//Locate the node before insertion
	struct node* current = *head;
	while (current->next != NULL && current->next->S_age < newNode->S_age)
		current = current->next;

	newNode->next = current->next;
	current->next = newNode;
}

// 9.	Append: inserts an element (student) at the end of the linked list

void addLast(struct FU_Student **head,char S_surn[15,char S_name[14],int S_reg_no,float S_gpa,int S_age,char S_addr[25])
{
    //create a new node
    struct FU_Student *t = malloc(sizeof(struct FU_Student));
    t->S_surn = S_surn;
    t->S_name = S_name;
    t->S_reg_no = S_reg_no;
    t->S_gpa = S_gpa;
    t->S_age = S_age;
    t->S_addr = S_addr;
    t->next = NULL;

    //if head is NULL, it is an empty list
    if(*head == NULL)
         *head = t;
    //Otherwise, find the last node and add the newNode
    else
    {
        struct FU_Student *lastNode = *head;

        //last node's next address will be NULL.
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        //add the newNode at the end of the linked list
        lastNode->next = t;
    }
}

// 10.	Length: gives the number of elements of your linked list (no. of students)



// 11.	Print_List: prints the contents of the linked list (all students)
// 12.	Copy_List: takes the linked list and returns a complete 2nd copy of this list
// 13.	Get_Nth: given the linked list and a number, returns the data, i.e. the student’s name etc, contained in the nth node of the list
// 14.	Delete_List: takes the linked list, deallocates all of its memory and sets its head pointer to NULL (the empty list)
// 15.	Delete_Element: deletes a specific element of the linked list given the name or the registration number of the student
// 16.	List_Append: takes two lists, ‘a’ and ‘b’, appends ‘b’ onto the end of ‘a’, and then sets ‘b’ to NULL
// 17.	Split_list: given a list, splits it into two sublists; one for the front half and one for the back half. If the number of its elements is odd, the extra element should go in the front list
// 18.	Remove_dublicate: takes a sorted linked list in increasing order in terms of ‘s_gpa’ and deletes any duplicate nodes from the list; i.e. same name and same gpa. Ideally, the list should be traversed only once
// 19.	Reverse: reverses a linked list by rearranging all the elements (iterative reverse is preferred; extra bonus will be given for this)
// 20.	Average: finds the great point average (gpa) of the whole class
// 21.	Best_student: finds and prints the name of the best student in the class 
// 22.	Young_student: finds and prints the name of the youngest student in the class
// 23.	Same_housing checks whether two or more students stay in the same address/house



void Search_Record(int S_reg_no)
{
    // if head is NULL
    if (!head) {
        cout << "No such Record "
             << "Available\n";
        return;
    }
 
    // Otherwise
    else {
        Node* p = head;
        while (p) {
            if (p->S_reg_no == S_reg_no) {
                cout << "Student Registration Number\t"
                     << p->S_reg_no << endl;
                cout << "Name\t\t"
                     << p->S_name << endl;
                cout << "SurName\t\t"
                     << p->S_surn << endl;
                cout << "Address\t\t"
                     << p->S_addr << endl;
                cout << "Age\t"
                     << p->S_age << endl;
                cout << "GPA\t\t"
                     << p->S_gpa << endl;
                return;
            }
            p = p->next;
        }
 
        if (p == NULL)
            cout << "No such Record "
                 << "Available\n";
    }
}
 
int Delete_Record(int S_reg_no)
{
    FU_Student* t = head;
    FU_Student* p = NULL;
 
    // Deletion at Begin
    if (t != NULL
        && t->S_reg_no == S_reg_no) {
        head = t->next;
        delete t;
 
        cout << "Record Deleted "
             << "Successfully\n";
        return 0;
    }
 
    // Deletion Other than Begin
    while (t != NULL && t->S_reg_no != S_reg_no) {
        p = t;
        t = t->next;
    }
    if (t == NULL) {
        cout << "Record does not Exist\n";
        return -1;
        p->next = t->next;
 
        delete t;
        cout << "Record Deleted "
             << "Successfully\n";
 
        return 0;
    }
}
 
void Show_Record()
{
    FU_Student* p = head;
    if (p == NULL) {
        cout << "No Record "
             << "Available\n";
    }
    else {
        cout << "Registration Number\tName\tSurname"
             << "\tAddress\tAge\tGPA\n";
 
        // Until p is not NULL
        while (p != NULL) {
            cout << p->S_reg_no << "    \t"
                 << p->S_name << "\t"
                 << p->S_surn << "\t"
                 << p->S_addr << "\t"
                 << p->S_age << "\t"
                 << p->S_gpa << "\t" endl;
            p = p->next;
        }
    }
}

int main()
{
    head = NULL;
    char[15] S_surn,
    char[14] S_name, 
    int S_reg_no;
    float S_gpa;
    int S_age;
    char S_addr[25];
    
     
    // Menu-driven program
    while (true) {
        cout << "\n\t\tWelcome to Student Record "
                "Management System\n\n\tPress\n\t1 to "
                "create a new Record\n\t2 to delete a "
                "student record\n\t3 to Search a Student "
                "Record\n\t4 to view all students "
                "record\n\t5 to Exit\n";
        cout << "\nEnter your Choice\n";
        int Choice;
 
        // Enter Choice
        cin >> Choice;
        if (Choice == 1) {
            cout << "Enter SurName of Student\n";
            cin >> S_surn;
            cout << "Enter Name of Student\n";
            cin >> S_name;
            cout << "Enter Registration Number of Student\n";
            cin >> S_reg_no;
            cout << "Enter GPA of Student \n";
            cin >> S_gpa;
            cout << "Enter Age of Student\n";
            cin >> S_age;
            cout << "Enter Address of Student\n";
            cin >> S_addr;
            Insert_Record(S_surn,S_name,S_reg_no,S_gpa,S_age,S_addr);
        }
        else if (Choice == 2) {
            cout << "Enter Registration Number of Student whose "
                    "record is to be deleted\n";
            cin >> S_reg_no;
            Delete_Record(S_reg_no);
        }
        else if (Choice == 3) {
            cout << "Enter Registration Number of Student whose "
                    "record you want to Search\n";
            cin >> S_reg_no;
            Search_Record(S_reg_no);
        }
        else if (Choice == 4) {
            Show_Record();
        }
        else if (Choice == 5) {
            exit(0);
        }
        else {
            cout << "Invalid Choice "
                 << "Try Again\n";
        }
    } 
  

  
  
  
    return 0;
}
