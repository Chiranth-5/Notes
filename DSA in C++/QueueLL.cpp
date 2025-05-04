// #include<iostream>

// struct Node
// {
//     int data;
//     struct Node *next;
// }*front=NULL, *rear=NULL;

// void display(struct Node *p)
// {
//     while ( p != NULL)
//     {
//         std::cout << p->data << std::endl;
//         p = p->next;
//     }
// }

// void enqueue (int x)
// {
//     Node *t = new Node;
//     if(t==NULL)
//     {
//         std::cout << "Queue is Full" <<std::endl;
//     }
//     else
//     {
//         t->data = x;
//         t->next = NULL;

//         if(front == NULL && rear == NULL)
//         {
//             front = rear = t;
//         }
//         else
//         {
//             rear->next = t;
//             rear = t; 
//         }
//     }
// }

// int dequeue()
// {
//     struct Node *p = front;
//     int x =-1;

//     if( p==NULL)
//     {
//         std::cout << "The Queue is Empty and there is nothing to delete " << std::endl;
//     }
//     else if(p->next == NULL)
//         {
//             x =front->data;
//             delete front;
//             front = rear = NULL;
//         }
//         else
//         {   
//             x = front->data;
//             delete front;
//             front = NULL;
//             front = p->next;
//         }
    
//     return x;

// }

// int main()
// {
//     enqueue(1);
//     enqueue(2);
//     enqueue(3);
//     display(front);
//     int x = dequeue();
//     std::cout<<std::endl;
//     std::cout << x << std::endl;
//     std::cout<<std::endl;
//     display(front);
// }