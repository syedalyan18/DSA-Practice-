#include <iostream>
using namespace std;

const int SIZE = 5;

int arr[SIZE];

int front = 0;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        rear++;
        arr[rear] = value;
        cout << value << " inserted\n";
    }
}

void dequeue()
{
    if (front > rear)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        cout << arr[front] << " removed\n";
        front++;
    }
}

void peek()
{
    if (front > rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Front element: " << arr[front] << endl;
    }
}

void display()
{
    if (front > rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();

    display();

    return 0;
}