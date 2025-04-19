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

// // PreOrder: visit(node) , PreOrder(Left Subtree) , PreOrder(Right SubTree)
// void preOrder(struct Node *q)
// {   
    
//     if (q)
//     {
//         std::cout << q->data << std::endl;
//         preOrder(q->lchild);
//         preOrder(q->rchild);
//     }
// }

// void inOrder(struct Node *q)
// {   
    
//     if (q)
//     {
//         inOrder(q->lchild);
//         std::cout << q->data << std::endl;
//         inOrder(q->rchild);
//     }
// }

// void postOrder(struct Node *q)
// {   
    
//     if (q)
//     {
//         postOrder(q->lchild);
//         postOrder(q->rchild);
//         std::cout << q->data << std::endl;   
//     }
// }

// // int main()
// // {
    
// //     createTree();
// //     std::cout << "This is preorder traversal" << std::endl;
// //     preOrder(root);
// //     std::cout << "This is inorder traversal" << std::endl;
// //     inOrder(root);
// //     std::cout << "This is postorder traversal" << std::endl;
// //     postOrder(root);
// // }
