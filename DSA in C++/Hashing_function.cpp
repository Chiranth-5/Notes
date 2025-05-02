
#include <iostream>

/*

Hashing functions:

Key Space and ahstable

its one to one hashing or many to one hashing.

If two values are hasehed to same hashtable value then there is collision.alignas

Collision can be resloved by:
1 Open Hashing : Hash table size is considered as unlimited. 
    1.chaining.
2.Closed Hashing: Hash table size is considered as unlimited.
    1.Open addressing: Fill in any vacant place of the hash table.alignas
        1.Linear Probing
        2.Quadratic Probing
        3.Double hashing.

Analysis of hash function:

L = Loading factor = number of elements/Size of the hash table
For closed Hashing  : L<=0.5



*/

struct Node
{

    int data;
    struct Node *next;

} *first = NULL ;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        std::cout << p->data <<std::endl;
        p = p->next;
    }
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

void insertInSortedLL(Node* &head, int key)
{
    Node *t = new Node;
    t->data = key;
    t->next = NULL;

    // Insertion at the beginning or when list is empty
    if (head == NULL || head->data >= key)
    {
        t->next = head;
        head = t;
        return;
    }

    Node *p = head;
    while (p->next != NULL && p->next->data < key)
    {
        p = p->next;
    }

    // Insert after p
    t->next = p->next;
    p->next = t;
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

int hash(int key)
{   
    return key%10;
}

void insertH(struct Node* H[] , int key)
{
    int index = hash(key);
    insertInSortedLL( H[index],key);
}


int main()
{
    //Create an hashtable for given hash function: h(x) = x;

    Node* H[10]; 
    // int keySpace[] = {16,12,25,39,6,122,5,68,75};

    for ( int i=0; i< 10; i++)
    {
        H[i] = nullptr;
    }
   
    insertH(H,16);

    Node* temp = search(H[hash(16)],16);

    std::cout << temp->data << std::endl;

    insertH(H,6);

    temp = search(H[hash(16)],6);

    std::cout << temp->data << std::endl;

}