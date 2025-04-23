// #include "Trees-1.h"

// struct Node *root;

// void createTree()
// {
//     struct Node *p, *t;
//     int x;

//     struct Queue q;
//     createQ(&q,100);

//     std::cout <<"Enter the root value"<<std::endl;
//     std:: cin >> x;
//     root = new Node;// if i dont do this then we are not initilizing dedicated space in heap for root . 
//     //Without this root will be randomly assigned (Also called as dangling pointer).

//     root->data = x;
//     root->lchild = root->rchild = 0;

//     enqueue(&q,root);

//     while (!isEmptyQ(q)) 
//     {
//         p = dequeue(&q);
//         std::cout << "Enter left child of " << p->data << " (-1 for no child): ";
//         std::cin >> x;
//         if (x != -1) {
//             t = new Node;
//             t->data = x;
//             t->lchild = t->rchild = nullptr;
//             p->lchild = t;
//             enqueue(&q, t);
//         }

//         std::cout << "Enter right child of " << p->data << " (-1 for no child): ";
//         std::cin >> x;
//         if (x != -1) {
//             t = new Node;
//             t->data = x;
//             t->lchild = t->rchild = nullptr;
//             p->rchild = t;
//             enqueue(&q, t);
//         }

//     }
// }

// void levelOrder(Node *t)
// {
//     if(t)
//     {   struct Queue q;
//         createQ(&q,100);
//         enqueue(&q,t);

//         while ( q.front != q.rear)
//         {
//             Node *temp = dequeue(&q);
//             std::cout << temp->data << std::endl;
//             if (temp->lchild)
//             {
                
//                 enqueue(&q,temp->lchild);
//             }
//             if (temp->rchild)
//             {
                
//                 enqueue(&q,temp->rchild);
//             }
            
//         }
//     }
//     else
//     {
//         std::cout << "Tree is empty" << std::endl;
//     }

// }

// int countT(struct Node * p)
// {
//     int x,y;
//     if ( p != nullptr)
//     {
//         x = countT(p->lchild); 
//         y = countT(p->rchild);
//         return x+y+1;
//     }
//     return 0; 
// }

// int hieghtT(struct Node * p)
// {
//     int x,y;
//     if ( p != nullptr)
//     {
//         x = hieghtT(p->lchild); 
//         y = hieghtT(p->rchild);
//         if(x>y)
//         {
//             return x+1;
//         }
//         else
//         {
//             return y+1;
//         }
        
//     }
//     return 0; 
// }


// // int main()
// // {
    
// //     createTree();
// //     // std::cout << "This is level order traversal" << std::endl;
// //     // levelOrder(root);

// //     int numberOfNodes, heightOfTree;

// //     numberOfNodes = countT(root);
// //     heightOfTree = hieghtT(root);

// //     std::cout << "Number of nodes " << numberOfNodes << std::endl;
// //     std::cout << "Hieght of the tree " << heightOfTree << std::endl;


// // }