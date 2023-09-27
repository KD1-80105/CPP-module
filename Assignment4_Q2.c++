#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int size = 5;
    int *Array;
    int element;

public:
    stack()
    {
        this->top = -1;
        Array = new int[size];
    }
    void push()
    {
        if (top == this->size - 1)
        {
            cout << "overflow" << endl;
        }
        else
        {
            cout << "push the element :" << endl;
            cin >> element;
            this->Array[top+1] = element;
            top=top+1;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout<<"cannot pop element"<<endl;
            
        }
        else
        {
            this->Array[top] = 0;
            top = top - 1;
            cout<<"element popped"<<endl;
        }
    }
        
        
        // if (top < size - 1 && top == top - 1)
        // {
        //     cout << "underflow" << endl;
        // }
        // else
        // {
        //     this->Array[top] = 0;
        //     top == top - 1;
        //     cout<<"element popped"<<endl;
        // // }
   // }
    void peek()
    {
        cout << "top =" << this->Array[top] << endl;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        for ( int i = 0; i <size; i++)
        {
        
            cout<<"element = "<<Array[i]<<endl;
        }
        
    }
    ~stack()
    {
        delete[] Array;
    }
};

int main()
{
    stack T;
    T.push();
    T.push();
    T.push();
    T.push();
    T.push();
    T.push();
    T.pop();
    T.peek();
    T.print();

    return 0;
}