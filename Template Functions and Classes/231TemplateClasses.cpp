#include<iostream>
#include<stdlib.h>
using namespace std;

template <class T> 
class Stack
{
    private:
    T *stk;
    int top;
    int size;

    public :
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }

    void push(T x);
    T pop();
};
template<class T>
void Stack<T>::push(T x)
{
    if(top == size - 1)
    {
        cout<<"Stack is full\n";
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T Stack<T> ::pop()
{
    {
        T x = 0;
        if(top == -1)
        cout<<"Stack is Empty\n";
        else
        {
            x = stk[top];
            top--;
        }
        return x;
    }
}
int main()
{
    Stack<float> s(10);
    Stack<float> s1(5);
 
return 0;
}