/*

Tree : Is a collection of nodes where one of the node is taken as root node. Rest of the node is disjoint subset.Each subset is a tree or subtree. 
Tree : Collections of nodes and edges.

Edges (E) = Nodes (N) - 1;

levels : Root node is assigned level 1. All the nodes in next level as assigned 2.
height(h) : Root node has hieght 0. All the nodes in next level are at height 1.alignas


Binary Tree :  All the nodes in the tree have maximum 2 children.
Binary Tree : Degree of any tree is less than or equal to 2.


Given number of nodes is, n ;

Total number of unlabbeled binary trees that can be generated for n nodes is:
Catalan Number = 2nCn / n+1;
T(n) = 2ncn / n+1;
Total number of unlabbeled binary trees with maximum hieght = 2^(n-1);

Total number of labbeled binary trees that can be generated for n nodes is: 
(2nCn / n+1) * n!;


Formulas for Binary tree:

Hieght (h)
Nodes (n)

Min Nodes : n = h+1
Max Nodes : n = (2^(h+1)) - 1
Min Hieght: h = log(n+1) - 1
Max Hieght: h = n-1

Number of nodes with: deg(0) = deg(2) + 1;


Strict Binary tree:
All the nodes in the tree either has degree 0 or degree 2.

Min Nodes : n = 2h+1
Max Nodes : n = (2^(h+1)) - 1
Min Hieght: h = log(n+1) - 1
Max Hieght: h = (n-1)/2

Number of nodes with: deg(0) = deg(2) + 1

Internal nodes = i
External nodes = e
e = i+1;

m-ary trees
Maximum degree of any node is not greater than m.

Min Nodes : n = mh+1
Max Nodes : n = ((m^(h+1)) - 1) / (m-1)
Min height : h = (log base m (n(m-1)+1))-1
Max hieght : h = (n-1)/m

e = (m-1)i + 1;



Representation of Binary Tree:

1.Array Representation 

1.Array index starts with 1
2.Index of element  is i
3.Left child of element i: 2i;
4.Right child of element i: 2i + 1;
5.parent of element i: i/2(Floor value);

2.Linked list Representaion

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

Number of Nodes + 1 = Number of NUlls



Full vs Complete Binary Tree

1. FUll Bunary tree: Binary tree wwith hieght h having maximum number of nodes.(All nodes have either 0 or 2 degrees)
 n = (2^(h+1)) - 1

2. Complete Binary Tree: Binary tree when replresented in Array has no blank space between the elements.


Tree Traversal

PreOrder: visit(node) , PreOrder(Left Subtree) , PreOrder(Right SubTree)
InOrder: InOrder(Left Subtree) , visit (node) , Inorder(Right SubTree)
PostOrder: PostOrder(Left Subtree) , PostOrder(Right SubTree) , visit (node)
Level Order : level by level.

Short cut:

mark - small line :
1. Preorder = left
2. Inorder = vertically down
3. PostOrder = right

Later start traversing along the boundary and write the nodes which are being cut.




*/

#ifndef DS_H
#define DS_H

#include<iostream>

struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;// pointer to pointer of nodes.
    
};

struct Stack
{
    int size;
    int top;
    Node **Q;// pointer to pointer of nodes
};

// Fucntions for Queue
void createQ(struct Queue *q, int size)
{
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->Q = new Node*[q->size];
}

void enqueue(struct Queue *q , Node *x)
{
    
    if( ((q->rear+1) % q->size) == q->front)
    {
        std::cout << "Queue is Full" << std::endl;
        return;
    }
    else
    {
        q->rear = ((q->rear+1) % q->size);
        q->Q[q->rear] = x;
        return;
    }
}

Node* dequeue(struct Queue *q)
{
    
    Node *x = NULL;
    if(q->front == q->rear)
    {
        std::cout << "Queue is Empty" << std::endl;
    }
    else
    {
        q->front = ((q->front+1) % q->size);
        x= q->Q[q->front];
        q->Q[q->front] == 0;
    }
    return x;

}

int isEmptyQ(struct Queue q)
{
    return q.front == q.rear;
}

//Functions on Stack
void createS(struct Stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->Q = new Node*[s->size];
}

void pushS(struct Stack *s , Node *x)
{
    
    if( ((s->top+1)  == s->size))
    {
        std::cout << "Stack Overflow" << std::endl;
        return;
    }
    else
    {
        s->top = (s->top+1);
        s->Q[s->top] = x;
        return;
    }
}

Node* popS(struct Stack *s)
{
    
    Node *x = NULL;
    if(s->top == -1)
    {
        std::cout << "Stack UnderFlow" << std::endl;
    }
    else
    {
        x = s->Q[s->top];
        s->Q[s->top] == 0;
        s->top = (s->top-1);
    }
    return x;

}

int isEmptyS(struct Stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



#endif