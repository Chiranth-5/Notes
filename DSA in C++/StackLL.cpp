#include <iostream>
#include <stdio.h>

class Node
{
    public:
        int data;
        Node* next;
};

class Stack
{
    private:
        Node* top;
    
    public:
        Stack();
        void display(Node *p);
        void push(int x);
        int pop();
        int peek(int pos);
        Node* getTop();

};

Stack::Stack()
{
    top = NULL;  
}

Node* Stack::getTop()
{
    return top;
}

void Stack::display(Node *p)
{
    if(p == NULL)
    {
        std::cout << "Stack is Empty" << std::endl;
    }
    else
    {
        while(p !=NULL)
        {
            std::cout << p->data << std::endl;
            p = p->next;
        }
    }
}

void Stack::push(int x)
{
    Node *t = new Node;
    if( t == NULL) // old c++ will assign it to null when it no longer can create new heap node.
    {
        std::cout << "Stack Overflow" << std::endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{   
    int x = -1;
    if( top == NULL)
    {
        std::cout << "Stack Underflow" << std::endl;
    }
    else
    {
        x = top->data;
        top= top->next;
    }
    return x;
}

int Stack::peek (int pos)
{
    int x = -1;
    Node *p = top;
    for ( int i = 0; i<pos-1 && p!=NULL; i++)
    {
        p = p->next;
    }
    x = p->data;
    return x;
}

// int main()
// {
//     int x = 0 ;
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     std::cout << std::endl;
//     st.display(st.getTop());
//     std::cout << std::endl;
//     x = st.pop();
//     std::cout <<x<< std::endl;
//     st.display(st.getTop());
//     std::cout << std::endl;
//     x = st.peek(1);
//     std::cout <<x<< std::endl;

// }