
#include <iostream>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*f = NULL;

void createFirst(int A[], int n)
{
    int i;
    struct Node *t, *last;
    f = new struct Node;
    f->prev = NULL;
    f->data = A[0];
    f->next = NULL;
    last = f;
    for (i = 1; i < n; i++)
    {
        t = new struct Node;
        t->prev = last;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void DisplayDDL(struct Node *p)
{
    while (p != NULL)
    {
        std::cout << p->data <<std::endl;
        p = p->next;
    }
}

int countDLL(struct Node *p)
{   
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}

void insertDDL ( int pos, int key )
{
    struct Node *t=NULL , *p=f;

    t = new Node;
    t->prev = NULL;
    t->data = key;
    t->next = NULL;

    if( pos==0)
    {
        t->next = f;
        f->prev = t;
        f = t;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        if (p->next)
        {
            p->next->prev = t;
        }
        p->next = t ;

    }
}

int deleteDLL( int pos)
{
    struct Node *p=f;
    int x = 0;
    if( pos ==1 )
    {
        x = p->data;
        f = p->next;
        delete p;
        p = NULL;
        if(f)
        {
            f->prev = NULL;
        }
        return x;
    }
    else
    {
        for(int i=0; i<pos-1 ; i++ )
        {
            p=p->next;
        }
        x=p->data;
        p->prev->next = p->next;
        if(p->next)
        {
            p->next->prev = p->prev;
        }
        delete p;
        p=NULL;
        return x;
    }
}

void reversingDDL(struct Node *p)
{
    struct Node *temp;
    while(p!=NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p=p->prev;
        if(p!=NULL && p->next == NULL)
        {
            f = p;
        }
    }
}

int main()
{
    int A[] ={2,3,4,5,6,7};
    createFirst(A,6);
    DisplayDDL(f);
    std::cout<<std::endl;
    // insertDDL(6,1);
    // DisplayDDL(f);
    // std::cout<<std::endl;

    // int count = countDLL(f);
    // std::cout << std::endl;
    // std::cout << count << std::endl;
    // int deletednumber = 0;
    // if(count)
    // {
    //     deletednumber = deleteDLL(3);
    //     std::cout << deletednumber << std::endl;
    //     std::cout << std::endl;

    //     DisplayDDL(f);
    // }

    reversingDDL(f);
    std::cout<<std::endl;
    DisplayDDL(f);
    std::cout<<std::endl;

}

