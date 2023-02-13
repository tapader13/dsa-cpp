#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int d)
    {
        next = NULL;
        data = d;
    }
};
class Stack
{
public:
    Node *head;
    Stack()
    {
        head = NULL;
    }
    void push(int element)
    {
        Node *temp = new Node(element);
        if (!temp)
        {
            cout << "over flow" << endl;
        }
        temp->data = element;
        temp->next = head;
        head = temp;
    }
    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "under flow" << endl;
        }
        else
        {
            return head->data;
        }
    }
    void pop()
    {
        Node *temp;
        if (head == NULL)
        {
            cout << "no element present in stack" << endl;
        }
        temp = head;
        head = head->next;
        delete temp;
    }
    void result()
    {
        Node *temp;
        if (head == NULL)
        {
            cout << "no element present in stack" << endl;
        }
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    cout << st.peek() << endl;
    st.result();
}
