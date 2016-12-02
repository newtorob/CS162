//this program illustractes recursion on linked list operations

#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
{
    double value;
    ListNode *next;
    //constructor
    ListNode (double value1, ListNode *next1 = NULL)
    {
        value = value1;
        next = next1;
    }
};

//function prototypes
int size(ListNode *);
void displayList(ListNode *);

int main() 
{
    ListNode *numberList = NULL;
    double number;

    ifstream numberFile("numberFIle.dat");
    if (!numberFIle)
    {
        cout << "Error in opening the file of numbers.";
        exit(1);
    }

    //read the file into a linked list
    while (numberFile >> number)
    {
        //create a node to hold this number
        numberList = new ListNode(number, numberList);
    }

    //print the list
    cout << endl << "The contents of the list are: " << endl;
    displayList(numberList);

    //print the size of the list
    cout << endl << "The number of items in the list is: " << size(numberList);

    return 0;
}

//length computer the number of nodes in a linked list
int size(ListNode *ptr)
{
    if (ptr == NULL)
    return 0;
    else
    return 1 + size(ptr->next);
}

//display prints all the values stored in the list
void displayList(ListNode *ptr)
{
    if (ptr != NULL)
    {
        cout << ptr->value << " ";
        displayList(ptr->next);
    }
}