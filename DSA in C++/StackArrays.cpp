// Dot (.) operator: Used for direct access to members of a struct or class instance.

// Arrow (->) operator: Used for accessing members of a struct or class through a pointer. It combines dereferencing and member access into one operation.

// arrow is eqaul to (*st).

#include <iostream>
#include <cstring>

struct Stack
{
    int size;
    int top;
    char *s;
};

// void create(struct Stack *st)
// {
//     std::cout << "Enter the size of the stack" << std::endl;
//     std::cin >> st->size;
//     st->top = -1;
//     st->s = new [st->size];
// }

void display(struct Stack st)
{
    if(st.top == -1)
    {
        std::cout << "Stack is Empty" << std::endl;
    }
    else
    {
        for ( int i = st.top; i > -1; i--)
        {
            std::cout << st.s[i] << std::endl;

        }
    }
}

void push(struct Stack *st ,char x)
{
    if(st->top == st->size-1)
    {
        std::cout << "Stack Overflow" << std::endl;
        return;
    } 
    else
    {
        st->s[st->top+1] = x;
        st->top++;
        return;
    }
}
char pop(struct Stack *st)
{
    char x = -1;
    if(st->top == -1)
    {
        std::cout << "Stack Underflow" << std::endl;
    } 
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st ,int pos)
{
    int x = -1;
    if (pos <= st.top+1)
    {
        x = st.top - pos + 1;
    }
    return x;
    
}

int stackTop(struct Stack st)
{
    int x = -1;
    if(st.top==-1)
    {
        std::cout << "Stack is Empty" << std::endl;
    }
    else
    {
        x = st.top;
    }
    return x;

}

bool isEmpty(struct Stack st)
{
    if(st.top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return true;
    }
    return false;
}

bool isBalanced(char *exp)
{   
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;
    st.s = new char[st.size];
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if ( exp[i] == '(')
        {
            push(&st,exp[i]);
        }
        else if( exp[i]==')')
            {
                if(isEmpty(st))
                {
                    return false;
                }
                else
                {
                    pop(&st);
                }
            }
    }
    return isEmpty(st);
}

int main()
{
    // struct Stack st;

    // create(&st);
    
    // push(&st,1);
    // push(&st,2);
    // push(&st,3);
    // push(&st,4);
    // push(&st,5);
    // display(st);

    // int x = peek(st,3);
    // std::cout << std::endl;
    // std::cout << x << std::endl;


    char *exp = "((a+b) * (c-d))";
    bool A = isBalanced(exp);
    std::cout << A << std::endl;


}