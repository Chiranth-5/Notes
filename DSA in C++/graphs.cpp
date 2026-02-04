// /*
// Graphs: Graphs are collection of Edges and Vertices.

// Representation of Grapghs:
// 1. Adjecency matrix.
// 2. Adjecency List.
// 3. Compact List.


// */


// #include <iostream>
// #include <vector>

// struct Queue
// {
//     int data;
//     struct Queue *next;
// } *front = NULL, *rear = NULL;

// void display(struct Queue *p)
// {
//     while (p != NULL)
//     {
//         std::cout << p->data << std::endl;
//         p = p->next;
//     }
// }

// void enqueue(int x)
// {
//     Queue *t = new Queue;
//     if (t == NULL)
//     {
//         std::cout << "Queue is Full" << std::endl;
//     }
//     else
//     {
//         t->data = x;
//         t->next = NULL;

//         if (front == NULL)
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
//     int x = -1;
//     if (front == NULL)
//     {
//         std::cout << "The Queue is Empty and there is nothing to delete " << std::endl;
//     }
//     else
//     {
//         x = front->data;
//         Queue *temp = front;
//         front = front->next;
//         delete temp;
//         if (front == NULL) rear = NULL;
//     }
//     return x;
// }

// int isEmpty()
// {
//     return front == nullptr;
// }

// void BFS(int G[][7], int start, int n)
// {
//     std::vector<int> V(n, 0);
//     std::cout << start << std::endl;
//     V[start] = 1;
//     enqueue(start);

//     while (!isEmpty())
//     {
//         int i = dequeue();
//         for (int v = 1; v < n; v++)
//         {
//             if (V[v] == 0 && G[i][v] == 1)
//             {
//                 std::cout << v << std::endl;
//                 enqueue(v);
//                 V[v] = 1;
//             }
//         }
//     }
// }

// int Visited[8] ={0}; //global Visited Array

// void DFS(int G[][7], int start, int n)
// {
//     if(Visited[start]==0)
//     {
//         std::cout << start <<std::endl;
//         Visited[start] =1;
//         for (int i =1; i<n; i++)
//         {
//             if(Visited[i]==0 && G[start][i] ==1)
//             {
//                 DFS(G,i,n);
//             }
//         }
//     }
// }

// int main()
// {
//     int G[7][7] = {
//         {0, 0, 0, 0, 0, 0, 0},
//         {0, 0, 1, 1, 0, 0, 0},
//         {0, 1, 0, 0, 1, 0, 0},
//         {0, 1, 0, 0, 1, 0, 0},
//         {0, 0, 1, 1, 0, 1, 1},
//         {0, 0, 0, 0, 1, 0, 0},
//         {0, 0, 0, 0, 1, 0, 0}};

//     BFS(G,1,7);// ✅ BFS traversal from node 1
//     std::cout<<std::endl;
//     DFS(G,1,7);
//     std::cout<<std::endl;



//     return 0;
// }
