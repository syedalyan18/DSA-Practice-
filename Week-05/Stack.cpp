#include <iostream>
using namespace std;

const int SIZE = 5;

int arr[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        top++;
        arr[top] = value;
        cout << value << " pushed\n";
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << arr[top] << " popped\n";
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Top element: " << arr[top] << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack: ";

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}