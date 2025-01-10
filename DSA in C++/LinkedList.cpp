#include <iostream>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
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


int main()
{
    struct Node *temp;
    int A[] = {3, 5, 5, 5, 5};
    create(A, 5);

    // Display(first);
    // std::cout << std::endl;

    // RDisplay(first);
    // std::cout << std::endl;
    // std::cout << first->next << std::endl;

    // std::cout << "The number of elements in the linked list are " << count(first) << std::endl;

    // std::cout << first->next << std::endl;

    // std::cout << "The sum of elements in the linked list are " << sum(first) << std::endl;
    // std::cout << "The maximum of the given elements in our linked list is " << max(first) << std::endl;
    // std::cout << std::endl;
    // Node* result = search(first,32);
    // std::cout << result->data << std::endl;
    // Node* result = impSearch(first,32);
    // std::cout << result->data << std::endl;
    // std::cout << std::endl;

    // Display(first);
    // std::cout << std::endl;
    // insert(3,26);
    // std::cout << std::endl;
    // Display(first);


    // Display(first);
    // std::cout << std::endl;
    // insertInSortedLL(26);
    // std::cout << std::endl;
    // Display(first);

    Display(first);
    std::cout << std::endl;
    // std::cout << deletee(88)<< std::endl;
    // std::cout << std::endl;
    // Display(first);

    // checkSorted(first);
    // Display(first);
    // std::cout << std::endl;

    removeDupicatesInSorted(first);
    Display(first);
    std::cout << std::endl;

    return 0;

} 