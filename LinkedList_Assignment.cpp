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

void Tail(struct FU_Student* head, int n)
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

void First_Insert(char S_surn[15],char S_name[14],int S_reg_no,float S_gpa,int S_age,char S_addr[25])
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

void sortAge(FU_Student* newnode)
    {
        /* Special case for the head end */
        if (sorted == NULL || sorted->S_age >= newnode->S_age) {
            newnode->next = sorted;
            sorted = newnode;
        }
        else {
            FU_Student* current = sorted;
            /* Locate the node before the point of insertion
             */
            while (current->next != NULL
                   && current->next->S_age < newnode->S_age) {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }

// 8.	Sort_Insert: inserts a new element in your sorted linked list, its order is preserved (either gpa or age depending which one is worked out)
// I am sorting with age.
void Sort_Insert(struct FU_Student** head, struct FU_Student* newNode)//function to insert data in sorted position
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

void Append(struct FU_Student **head,char S_surn[15,char S_name[14],int S_reg_no,float S_gpa,int S_age,char S_addr[25])
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

int Length(){
    struct node* temp = head;
    int count=0;
    /* Traverse the linked list and maintain the count. */
    while(temp != NULL){
       temp = temp->next;
       count++;
    }
    return count;
}

// 11.	Print_List: prints the contents of the linked list (all students)

void Print_List()
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

// 12.	Copy_List: takes the linked list and returns a complete 2nd copy of this list

struct FU_Student* Copy_List(struct FU_Student* h)
{
    if (h == NULL) {
        return NULL;
    }
    else {
        // Allocate the memory for new Node
        // in the heap and set its data
        struct FU_Student* newNode
            = (struct FU_Student*)malloc(
                sizeof(struct FU_Student));
        newNode->data = h->data;
        // Recursively set the next pointer of
        // the new Node by recurring for the
        // remaining nodes
        newNode->next = Copy_List(h->next);
        return newNode;
    }
}

// 13.	Get_Nth: given the linked list and a number, returns the data, i.e. the student’s name etc, contained in the nth node of the list

FU_Student* Get_Nth(int S_reg_no)
{
    // if head is NULL
    if (!head) {
        cout << "No such Record "
             << "Available\n";
        return -1;
    }
 
    // Otherwise
    else {
        FU_Student* p = head;
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

// 14.	Delete_List: takes the linked list, deallocates all of its memory and sets its head pointer to NULL (the empty list)

void Delete_List(FU_Student** head_ref)
{
    /* deref head_ref to get the real head */
    FU_Student* current = *head_ref;
    FU_Student* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    /* deref head_ref to affect the real head back
        in the caller. */
    *head_ref = NULL;
}

// 15.	Delete_Element: deletes a specific element of the linked list given the name or the registration number of the student
// I am deleting element with Registration Number
void Delete_Element(int S_reg_no)
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
    }
}

// 16.	List_Append: takes two lists, ‘a’ and ‘b’, appends ‘b’ onto the end of ‘a’, and then sets ‘b’ to NULL

void List_Append(FU_Student *list1, FU_Student **list2)
{
    FU_Student *list1_curr = list1, *list2_curr = *list2;
    FU_Student *list1_next, *list2_next;
    // While there are available positions in p
    while (list1_curr != NULL && list2_curr != NULL)
    {
        // Save next pointers
        list1_next = list1_curr->next;
        list2_next = list2_curr->next;
 
        // Make list2_curr as next of list1_curr
        list2_curr->next = list1_next; // Change next pointer of list2_curr
        list1_curr->next = list2_curr; // Change next pointer of list1_curr
 
        // Update current pointers for next iteration
        list1_curr = list1_next;
        list2_curr = list2_next;
    }
    *list2 = NULL; // Update head pointer of second list
}

// 17.	Split_list: given a list, splits it into two sublists; one for the front half and one for the back half. If the number of its elements is odd, the extra element should go in the front list

void Split_list(FU_Student *head, FU_Student **head1_ref,
                           FU_Student **head2_ref)
{
    FU_Student *slow_ptr = head;
    FU_Student *fast_ptr = head;
     
    if(head == NULL)
        return;
     
    /* If there are odd nodes in the circular list then
       fast_ptr->next becomes head and for even nodes
       fast_ptr->next->next becomes head */
    while(fast_ptr->next != head &&
          fast_ptr->next->next != head)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
     
    /* If there are even elements in list
       then move fast_ptr */
    if(fast_ptr->next->next == head)
        fast_ptr = fast_ptr->next;
         
    /* Set the head pointer of first half */
    *head1_ref = head;
         
    /* Set the head pointer of second half */
    if(head->next != head)
        *head2_ref = slow_ptr->next;
         
    /* Make second half circular */
    fast_ptr->next = slow_ptr->next;
         
    /* Make first half circular */
    slow_ptr->next = head;
}

// 18.	Remove_dublicate: takes a sorted linked list in increasing order in terms of ‘s_gpa’ and deletes any duplicate nodes from the list; i.e. same name and same gpa. Ideally, the list should be traversed only once

void Remove_dublicate(struct FU_Student* start)
{
    struct FU_Student *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->S_reg_no == ptr2->next->S_reg_no) {
                /* sequence of steps is important here */
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

// 19.	Reverse: reverses a linked list by rearranging all the elements (iterative reverse is preferred; extra bonus will be given for this)

void Reverse()
    {
        // Initialize current, previous and
        // next pointers
        FU_Student* current = head;
        FU_Student *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }

// 20.	Average: finds the great point average (gpa) of the whole class

float Average(struct FU_Student* head)
{
    // if head = NULL
    if (!head)
        return -1;
  
    int count = 0; // Initialize count
    int sum = 0;
    float avg = 0.0;
  
    struct Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        sum += current->S_gpa;
        current = current->next;
    }
  
    // calculate average
    avg = (double)sum / count;
  
    return avg;
}

// 21.	Best_student: finds and prints the name of the best student in the class 

void Best_student(struct FU_Student* head)
{
    // Declare a max variable and initialize
    // it with INT_MIN value.
    // INT_MIN is integer type and its value
    // is -32767 or less.
    int max = INT_MIN;
  
    // Check loop while head not equal to NULL
    while (head != NULL) {
  
        // If max is less then head->data then
        // assign value of head->data to max
        // otherwise node point to next node.
        if (max < head->S_gpa)
            max = head->S_gpa;
        head = head->next;
    }
    FU_Student* p = head;
        while (p) {
            if (p->S_gpa == S_gpa) {
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
            }
            p = p->next;
        }
}

// 22.	Young_student: finds and prints the name of the youngest student in the class

void Young_student(struct FU_Student* head)
{
    // Declare a min variable and initialize
    // it with INT_MAX value.
    // INT_MAX is integer type and its value
    // is 32767 or greater.
    int min = INT_MAX;
  
    // Check loop while head not equal to NULL
    while (head != NULL) {
  
        // If min is greater then head->data then
        // assign value of head->data to min
        // otherwise node point to next node.
        if (min > head->S_age)
            min = head->S_age;
  
        head = head->next;
    }
    FU_Student* p = head;
        while (p) {
            if (p->S_age == S_age) {
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
            }
            p = p->next;
        }
}

// 23.	Same_housing checks whether two or more students stay in the same address/house

void Same_housing(struct FU_Student* start)
{
    struct FU_Student *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->S_addr == ptr2->next->S_addr) {
                /* sequence of steps is important here */
                // ptr2->next = ptr2->next->next;
                cout<<"Same_housing";
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
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
            First_Insert(S_surn,S_name,S_reg_no,S_gpa,S_age,S_addr);
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
