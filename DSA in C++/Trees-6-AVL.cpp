/*
1.As there is no control on the hieght while inserting elements in BST we are using the concept of AVL too balnce it.

2. AVL trees have Balnce factor
3. BF of a node  = Hieht(lchild)-hieght(rchild)
4. If BF is {-1,0,1} then its callled balanced
5. If BF is not Balnced then its called imbalanced

6. Inorder balance a tree we do rotation on that node.alignas

7. LL Rotation
8. LR Rotation
9. RR Rotation
10.RL Rotation

*/

// #include <iostream>

// struct Node
// {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// } *root;

// void inOrderAVL(struct Node *q)
// {
//     if (q)
//     {
//         inOrderAVL(q->lchild);
//         std::cout << q->data << std::endl;
//         inOrderAVL(q->rchild);
//     }
// }

// Node *RinsertBST(Node *p, int key)
// {
//     if (p == nullptr)
//     {
//         Node *temp = nullptr;

//         temp->data = key;
//         temp->lchild = temp->rchild = nullptr;

//         return temp;
//     }

//     if (key < p->data)
//     {
//         p->lchild = RinsertBST(p->lchild, key);
//     }
//     else
//     {
//         p->rchild = RinsertBST(p->rchild, key);
//     }
//     // else
//     // {
//     //     std::cout << "Dupliate key" << std::endl;
//     //     return p;
//     // }

//     return p;
// }

// int main()
// {
//     root = RinsertBST(root, 5);
//     std::cout << root->data << std::endl;
//     root = RinsertBST(root, 4);
//     std::cout << root->lchild->data << std::endl
//               << std::endl;

//     root = RinsertBST(root, 2);
//     root = RinsertBST(root, 1);
//     root = RinsertBST(root, 8);
//     root = RinsertBST(root, 6);

//     std::cout << std::endl
//               << std::endl;
//     inOrderAVL(root);
// }



#include <iostream>

using namespace std;
 
class Node {
public:
    Node* lchild;
    int data;
    Node* rchild;
    int height;
};
 
class AVL{
public:
    Node* root;
 
    AVL(){ root = nullptr; }
 
    // Helper methods for inserting
    int NodeHeight(Node* p);
    int BalanceFactor(Node* p);
    Node* LLRotation(Node* p);
    Node* RRRotation(Node* p);
    Node* LRRotation(Node* p);
    Node* RLRotation(Node* p);
 
    // Insert
    Node* rInsert(Node* p, int key);
 
    // Traversal
    void Inorder(Node* p);
    void Inorder(){ Inorder(root); }
    Node* getRoot(){ return root; }
};
 
int AVL::NodeHeight(Node *p) {
    int hl;
    int hr;
 
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;
 
    return hl > hr ? hl + 1 : hr + 1;
}
 
int AVL::BalanceFactor(Node *p) {
    int hl;
    int hr;
 
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;
 
    return hl - hr;
}
 
Node* AVL::LLRotation(Node *p) {
    Node* pl = p->lchild;
    Node* plr = pl->rchild;
 
    pl->rchild = p;
    p->lchild = plr;
 
    // Update height
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
 
    // Update root
    if (root == p){
        root = pl;
    }
    return pl;
}
 
Node* AVL::RRRotation(Node *p) {
    Node* pr = p->rchild;
    Node* prl = pr->lchild;
 
    pr->lchild = p;
    p->rchild = prl;
 
    // Update height
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
 
    // Update root
    if (root == p){
        root = pr;
    }
    return pr;
}
 
Node* AVL::LRRotation(Node *p) {
    return nullptr;
}
 
Node* AVL::RLRotation(Node *p) {
    return nullptr;
}
 
Node* AVL::rInsert(Node *p, int key) {
    Node* t;
    if (p == nullptr){
        t = new Node;
        t->data = key;
        t->lchild = nullptr;
        t->rchild = nullptr;
        t->height = 1;  // Starting height from 1 onwards instead of 0
        return t;
    }
 
    if (key < p->data){
        p->lchild = rInsert(p->lchild, key);
    } else if (key > p->data){
        p->rchild = rInsert(p->rchild, key);
    }
 
    // Update height
    p->height = NodeHeight(p);
 
    // Balance Factor and Rotation
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1) {
        return LLRotation(p);
    } else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1){
        return LRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1){
        return RRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1){
        return RLRotation(p);
    }
 
    return p;
}
 
void AVL::Inorder(Node *p) {
    if (p){
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}
 
 
int main() {
 
    // // LL Rotation
    // AVL tll;
    // tll.root = tll.rInsert(tll.root, 30);
    // tll.root = tll.rInsert(tll.root, 20);
    // tll.root = tll.rInsert(tll.root, 10);
 
    // tll.Inorder();
    // cout << endl;
 
    // // RR Rotation
    // AVL trr;
    // trr.root = trr.rInsert(trr.root, 10);
    // trr.root = trr.rInsert(trr.root, 20);
    // trr.root = trr.rInsert(trr.root, 30);
 
    // trr.Inorder();
    // cout << endl;


 
    return 0;
}