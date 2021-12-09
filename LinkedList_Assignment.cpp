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

int main()
{
    
// 1.	Cons: creates the linked list of students (new list)
  
// 2.	Is_Empty: checks whether the linked list (students) is empty or not 
// 3.	Head: returns the first element of the linked list (first student)
// 4.	Tail: returns the original linked list without the head element (rest of the students)
// 5.	First_Insert: inserts a new element (new student) at the beginning of your linked list
// 6.	Sort_gpa: sorts the linked list in ascending order according to students ‘s_gpa’
// 7.	Sort_age: sorts the linked list in ascending order according to their ‘s_age’
// 8.	Sort_Insert: inserts a new element in your sorted linked list, its order is preserved (either gpa or age depending which one is worked out)
// 9.	Append: inserts an element (student) at the end of the linked list
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

  
  
  
    return 0;
}
