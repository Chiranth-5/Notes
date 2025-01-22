#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL , *second = NULL , *third = NULL;

void createF(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new struct Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void createS(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = new struct Node;
    second->data = A[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; i++)
    {
        t = new struct Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        std::cout << p->data <<std::endl;
        p = p->next;
    }
}
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}
int count(struct Node *p)
{
    int count = 0 ;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    return count;
}

int sum(struct Node *p)
{
    int sum = 0 ;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }

    return sum;

}

int max(struct Node *p)
{
    int max = INT32_MIN ;//keep the smallest value of the integers.
    while (p != NULL)
    {
        if(max < p->data)
        {
            max = p->data;
        }
        p = p->next;
    }

    return max;

}

Node* search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if( p->data == key)
        {
            std::cout << "Key found" << std::endl;
            return (p);
        }
        p = p->next;
    }
    std::cout << "Key Not found" << std::endl;
    return NULL;
}

Node* impSearch(struct Node *p, int key)
{
    struct Node* q = NULL;
    // struct Node* f = p;
    while (p != NULL)
    {
        if( p->data == key)
        {
            q->next = p->next;
            p->next = first ;
            first = p;
            return(first);
        }
        q = p;
        p = p->next;
    }
    std::cout << "Key Not found" << std::endl;
    return NULL;
}

void insert(int pos, int key)
{
    struct Node *p, *t;
    
    t = new Node;
    t->data = key;
    t->next = NULL;

    p = first;

    if( pos == 0)
    {
        t->next = p;
        first = t;
        return;
    } 
    else
    {
        int count = 1;
        while (p != NULL)
        {
            if ( count == pos)
            {
                t->next = p->next;
                p->next = t;
                return;
            }
            count++;
            p = p->next;
        }
        std::cout << "Invalid position" << std::endl;
    }
}
void insertInSortedLL(int key)
{
    struct Node *p, *t, *q;
    
    t = new Node;
    t->data = key;
    t->next = NULL;

    p = first;
    q = NULL;

    while (p != NULL)
    {
        if ( p->data > key)
        {
            if (q == NULL)
            {
                t->next = p;
                first = t;
                return;
            }
            else
            {
                t->next = q->next;
                q->next = t;
                return; 
            }
        }
        q = p;
        p = p->next;
    }
    q->next = t;

}

int deletee(int key)
{
    struct Node *p, *q;

    p = first;
    q = NULL;
    int x;

    while (p != NULL)
    {
        if ( p->data == key)
        {
            if (q == NULL)
            {
                first = p->next;
                x = p->data;
                delete p;
                return x;
            }
            else
            {
                q->next = p->next;
                x = p->data;
                delete p;
                return x; 
            }
        }
        q = p;
        p = p->next;
    }
    std::cout << "Key Not Found" << std::endl;
    return -1;

}

void checkSorted(struct Node *p)
{
    int x = INT32_MIN;

    while (p != NULL)
    {
        if (x > p->data)
        {
            std::cout << "Not Sorted" << std::endl;
            return;
        }
        x = p->data;
        p = p->next;
    }
    std::cout << "Sorted" << std::endl;
    return;
}

void removeDupicatesInSorted(struct Node *p)
{
    struct Node *q;
    q = p->next; 
    while (q != NULL)
    {
        if ( p->data != q->data)
        {
            p = q;
            q = q->next;        
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }

}

void reversingLLElements(struct Node *p)
{
    int A[10];
    int i = 0;

    while(p != NULL)
    {
        A[i] = p->data;
        p = p->next;
        i++;
    }
    i = i-1;
    p = first;
    while(p != NULL)
    {
        p->data = A[i];
        p = p->next;
        i--;
    }
}

void reversingLLLinks(struct Node *q)
{
    struct Node *p = NULL , *r = NULL ;

    while (q != NULL)
    {
        r = p;
        p = q;
        q = q->next;
        p->next = r;
    }
    first = p;
}

struct Node* concatinating2LL(struct Node *p,struct Node *q)
{
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
    q = NULL;
    return (first);
}

struct Node* merge2LL(struct Node *p,struct Node *q)
{
    struct Node* last = NULL;
    third = NULL;
    if( p->data <= q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
        
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
        
    }
    
    while(p != NULL && q != NULL )
    {
        if ( p->data <= q->data)
        {
            last->next = p;
            p = p->next;
            last = last->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            q = q->next;
            last = last->next;
            last->next = NULL;
        }
    }

    if( p == NULL)
    {
        last->next = q;
        q = NULL;
    }
    else
    {
        last->next = p;
        p = NULL;
    }

    return (third);
}

int isLoop(struct Node *p)
{
    struct Node *q = p;
    do
    {
        p = p->next;
        q = q->next;
        if (q != NULL)
        {
            q = q->next;
        }
        else
        {
            q = NULL;
        }
    } while (p && q && p!=q);

    if ( p == q)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

void cDisplay(struct Node *p)
{
    do
    {
        std::cout << p->data << std::endl;
        p = p->next;
    } while ( p!=first );
    
}

void rCDisplay(struct Node *p)
{
    static int flag = 0;
    if( p!=first || flag == 0)
    {
        flag = 1;
        std::cout << p->data << std::endl;
        rCDisplay( p->next);
    }
}

void insertCLL( struct Node *p, int index, int x)
{
    struct Node *t;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if( index != 0)
    {
        for(int i = 0; i<index-1 ; i++)
        { 
           p = p->next;
        }
        t->next = p->next;
        p->next = t;
        t = NULL;
    }
    else
    {
        while( p->next != first)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        first = t;
        t = NULL;
    }

}

int cDeletee( int pos)
{
    struct Node *q ,*p;
    int x ;
    if (pos ==1)
    {
        p = first;
        while (p->next != first)
        {
            p = p->next;
        }

        x = first->data;
        
        if( p==first)
        {
            delete first;
            first = NULL;
        }
        else
        {
            p->next = first->next;
            delete first;
        }
        
        return x; 
    }
    else
    {
        p = first->next;
        q = first;
        for (int i=2; i<pos; i++)
        {
            q=p;
            p=p->next;
        }
        x = p->data;
        q->next = p->next;
        delete p;
        p = NULL;

        return x;
    }
}


// int main()
// {
//     // struct Node *temp;
   

//     // Display(first);
//     // std::cout << std::endl;

//     // RDisplay(first);
//     // std::cout << std::endl;
//     // std::cout << first->next << std::endl;

//     // std::cout << "The number of elements in the linked list are " << count(first) << std::endl;

//     // std::cout << first->next << std::endl;

//     // std::cout << "The sum of elements in the linked list are " << sum(first) << std::endl;
//     // std::cout << "The maximum of the given elements in our linked list is " << max(first) << std::endl;
//     // std::cout << std::endl;
//     // Node* result = search(first,32);
//     // std::cout << result->data << std::endl;
//     // Node* result = impSearch(first,32);
//     // std::cout << result->data << std::endl;
//     // std::cout << std::endl;

//     // Display(first);
//     // std::cout << std::endl;
//     // insert(3,26);
//     // std::cout << std::endl;
//     // Display(first);


//     // Display(first);
//     // std::cout << std::endl;
//     // insertInSortedLL(26);
//     // std::cout << std::endl;
//     // Display(first);

//     // Display(first);
//     // std::cout << std::endl;
//     // std::cout << deletee(88)<< std::endl;
//     // std::cout << std::endl;
//     // Display(first);

//     // checkSorted(first);
//     // Display(first);
//     // std::cout << std::endl;

//     // removeDupicatesInSorted(first);
//     // Display(first);
//     // std::cout << std::endl;

//     // reversingLLElements(first);
//     // Display(first);
//     // std::cout << std::endl;

//     // reversingLLLinks(first);
//     // Display(first);
//     // std::cout << std::endl;

//     int A[] = {3, 5, 6, 8, 10};
//     int B[] = {2, 4, 5, 8, 11, 18};
//     createF(A, 5);
//     // createS(B, 6);

//     struct Node *temp;

//     // Display(first);
//     // std::cout << std::endl;
//     // Display(second);
//     // std::cout << std::endl;

//     // temp = concatinating2LL(first,second);
//     // Display(temp);
//     // std::cout << std::endl;

//     // temp = merge2LL(first,second);
//     // Display(temp);
//     // std::cout << std::endl;

//     // t1 = first->next->next;
//     temp = first->next->next->next->next;

//     temp->next = first;

//     int a = isLoop(first);
//     std::cout << " Loop will have return value as 0 ,if its not a loop it will have return value as 1 : " << a << std::endl;

//     cDisplay(first);
//     std::cout << std::endl;
//     // rCDisplay(first);
//     // std::cout << std::endl;

//     // insertCLL(first, 0, 1);
//     // cDisplay(first);
//     // std::cout << std::endl;

//     // insertCLL(first, 4, 7);
//     // cDisplay(first);
//     // std::cout << std::endl;

//     int b = cDeletee(2);
//     std::cout << b << std::endl;
//     std::cout << std::endl;

//     a = isLoop(first);
//     std::cout << " Loop will have return value as 0 ,if its not a loop it will have return value as 1 : " << a << std::endl;

//     cDisplay(first);
//     // std::cout << std::endl;



//     return 0;

// } 

#endif