#include <iostream>
using namespace std;

class NumberList
{
    protected:
    //declare a class fore the list node
    struct ListNode{
        double value;
        ListNode *next;
        ListNode(double value1, ListNode *next1 = NULL)
        {
            value = value1;
            next = next1;
        }
    };
    ListNode *head;

    public:
    NumberList() {head = NULL;}
    ~NumberList();
    void add(double number);
    void remove (double number);
    void displayList() const;
};