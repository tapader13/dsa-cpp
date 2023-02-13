#include <iostream>
using namespace std;
class Stack
{
    int top;
    int size;
    int *arr;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Peek is underflow" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    void show()
    {
        while (top >= 0)
        {
            cout << arr[top] << " ";
            top--;
        }
    }
};
int main()
{
    Stack res(5);
    res.push(1);
    res.push(2);
    res.push(3);
    res.push(4);
    // cout << res.peek() << endl;
    // res.pop();
    // cout << res.peek() << endl;
    // cout << res.isEmpty() << endl;
    res.show();
}