#include <iostream>
using namespace std;

struct ListNode
{
    double value;
    ListNode* nextPtr;
    //Constructor
    ListNode(double value1, ListNode* nextNode = nullptr)
    {
        value = value1;
        nextPtr = nextNode;
    }
};

int main() 
{
    //BUILDING A LIST with a loop 
    ListNode* head = nullptr;
    int number, input;
    cout << "How many numbers are in the list?" << endl;
    cin >> number;

    //BUILDS THE LIST from the head then makes the new node the head!
    for (int i = 0; i < number; i++)
    {
        cout << "Enter a num " << endl;
        cin >> input;
        head = new ListNode(input, head);
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
        sum1 += myCurrentNode->value;
        myCurrentNode = myCurrentNode->nextPtr;
    }
    cout << endl << "The Sum of the First values is " << sum1 << endl;

    system("pause>nul");
    return 0;
} 