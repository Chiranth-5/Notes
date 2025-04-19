// /*
// Implementation using while iteration: 
// 1.Preorder
// 2.Inorder
// 3.Postorder
// */

// #include "Trees-1.h"
// using namespace std;

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

// // Itereative Preorder

// void preOrderI(Node *t)
// {
//     struct Stack st;

//     createS(&st, 10);
//     while ( t != nullptr  ||  st.top != -1)
//     {
//         if (t)
//         {
//             cout << t->data << endl;
//             pushS(&st,t);
//             t = t->lchild;
//         }
//         else
//         {
//             t = popS(&st);
//             t = t->rchild;
//         }
//     }
// }

// // Itereative inorder

// void inOrderI(Node *t)
// {
//     struct Stack st;

//     createS(&st, 10);
//     while ( t != nullptr  ||  st.top != -1)
//     {
//         if (t)
//         {
//             pushS(&st,t);
//             t = t->lchild;
//         }
//         else
//         {
//             t = popS(&st);
//             cout << t->data << endl;
//             t = t->rchild;
//         }
//     }
// }


// // Itereative Postorder

// // void PostOrderI(Node *t)
// // {
// //     struct Stack st;

// //     createS(&st, 10);
// //     while ( t != nullptr  ||  st.top != -1)
// //     {
// //         if (t)
// //         {
// //             pushS(&st,t);
// //             t = t->lchild;
// //         }
// //         else
// //         {
// //             t = popS(&st);
// //             //pass negative value of the address.
// //             if( t > 0)
// //             {
// //                 pushS(&st , -t);

// //             }
// //             cout << t->data << endl;
// //             t = t->rchild;
// //         }
// //     }
// // }

// int main()
// {
    
//     createTree();
//     std::cout << "This is preorder traversal" << std::endl;
//     preOrderI(root);
//     std::cout << "This is inorder traversal" << std::endl;
//     inOrderI(root);
// }