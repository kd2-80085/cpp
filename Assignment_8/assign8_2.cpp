// /*Q2. Modify Stack class from previous assignment to implement copy constructor and overload =
// operator.*/

#include <iostream>
using namespace std;

class stack
{
private:
    int size;
    int *elements;
    int top; // Initialize top to -1 to indicate an empty stack

public:
    stack(int size)
    {
        this->size = size;
        elements = new int[size];
        top = -1; // Initialize top to -1 for an empty stack
    }

    // Copy Constructor
    stack(const stack &source)
    {
        this->size = source.size;
        this->top = source.top;
        this->elements = new int[this->size];

        // Copy elements from the source stack to the new stack
        for (int i = this->top; i >= 0; i--)
        {
            this->elements[i] = source.elements[i];
        }
    }

    // Assignment Operator Overload
    stack &operator=(const stack &source)
    {
        if (this == &source)
            return *this;

        // Deallocate existing resources
        delete[] this->elements;

        // Copy elements from the source stack to the current stack
        this->size = source.size;
        this->top = source.top;
        this->elements = new int[this->size];

        for (int i = 0; i <= this->top; i++)
        {
            this->elements[i] = source.elements[i];
        }

        return *this;
    }

    void push(int element)
    {
        if (!isFull())
        {
            top++;
            elements[top] = element;
        }
        else
            cout << "Stack is full." << endl;
    }

    void pop()
    {
        if (!isEmpty())
        {
            cout << "Popped element: " << elements[top] << "\n";
            top--;
        }
        else
            cout << "Stack is empty." << endl;
    }

    int peek()
    {
        if (!isEmpty())
            return elements[top];
        else
            return -1; // Return -1 to indicate an empty stack
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void print()
    {
        if (!isEmpty())
        {
            cout << "Elements in the stack are : ";
            for (int i = 0; i <= top; i++)
            {
                cout << elements[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "Stack is empty." << endl;
    }

    ~stack()
    {
        delete[] elements;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    stack s1(size);

    cout << "Push elements into the stack:\n";
    for (int i = 1; i <= size; i++)
    {
        int element;
        cin >> element;
        s1.push(element);
    }

    cout << "Peek Element is: " << s1.peek() << endl;
    s1.print();

    stack s3 = s1;
    cout << "Copy of s1:\n";
    s3.print();

    stack s4(size);
    s4 = s1;
    cout << "Assignment to s4:\n";
    s4.print();

    return 0;
}
