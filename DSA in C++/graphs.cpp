/*
Graphs: Graphs are collection of Edges and Vertices.

Representation of Grapghs:alignas
1. Adjecency matrix.
2. Adjecency List.
3. Compact List.


*/

#include <iostream>

struct Queue
{
    int data;
    struct Queue *next;
}*front=NULL, *rear=NULL;

void display(struct Queue *p)
{
    while ( p != NULL)
    {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}

void enqueue (int x)
{
    Queue *t = new Queue;
    if(t==NULL)
    {
        std::cout << "Queue is Full" <<std::endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;

        if(front == NULL && rear == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t; 
        }
    }
}

int dequeue()
{
    struct Queue *p = front;
    int x =-1;

    if( p==NULL)
    {
        std::cout << "The Queue is Empty and there is nothing to delete " << std::endl;
    }
    else if(p->next == NULL)
        {
            x =front->data;
            delete front;
            front = rear = NULL;
        }
        else
        {   
            x = front->data;
            delete front;
            front = NULL;
            front = p->next;
        }
    
    return x;

}

int isEmpty()
{
    return front == nullptr;
}



//Type	Internally treated as	OK to omit size?
// int A[]	    int*	    ✅ Yes (1D array)
// int G[][]	int (*)[?]	❌ No (must know #columns)
void BFS( int G[][7],int start, int n)
{
    
    std::vector<int> V(n, 0);

    int i =  start;
    int  u =0; int v=0;
    std::cout<< i << std::endl;
    V[i] = 1;
    enqueue(i);

    while( (!isEmpty()))
    {
        i = dequeue();
        for( v = 1; v < n; v++ )  // if n == 7, loop runs v = 1 to 6
        {
            if(V[v]==0 && G[i][v] == 1)
            {
                std::cout << v << std::endl;
                enqueue(v);
                V[v] = 1;
            }
        }
    }

}

int main()
{
    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};

    BFS(G,1,7);



    
    return 0;
}