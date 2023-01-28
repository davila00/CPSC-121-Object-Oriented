#include <iostream>
using namespace std;

//LAB 9 CODE*** breaking it down

struct ListNode
{
    double value;
    //Constructor has same name as struct
    ListNode* nextPtr;
    //Overloaded constructor
    ListNode(double value1, ListNode* nextNode = nullptr)
    {                                  //raw pointer = default argument
        value = value1;
        nextPtr = nextNode;
    }
};
/* 
DRAWING
===============
ptr ----> nullPtr
head  = new Object = nullPtr
new head = head = new Object = nullPtr
*/
int main()
{
    //BUILDING A LIST with a loop 
    ListNode* head = nullptr;
    //rawptr head; the head of the list
    int number, input;
    cout << "How many numbers are in the list?" << endl;
    cin >> number;

    //BUILDS THE LIST from the head then makes the new node the head!
    for (int i = 0; i < number; i++)
    {
        cout << "Enter a num " << endl;
        cin >> input;
        head = new ListNode(input, head);
        //                                      rawptr
    }

    //TRAVERSE THROUGH A LIST with a loop to print the values
    ListNode* myCurrentNode = head; //Keeps track of current node to iterate through list

    int counter = 0;
    double sum1 = 0;
    cout << "Traverse the list of nodes!" << endl;

    while (myCurrentNode != nullptr)
    {
        counter++;
        cout << "Node " << counter << "'s Value is " << myCurrentNode->value << endl;
        sum1 += myCurrentNode->value;//adds to the head
        myCurrentNode = myCurrentNode->nextPtr;//set current to value of that node
    }
    cout << endl << "The Sum of the First values is " << sum1 << endl;
    //first in last out
    system("pause>nul");
    return 0;
}