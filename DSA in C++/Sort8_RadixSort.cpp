// // /*
// // Counting sort

// // This reque lot of space because of new array of the size of maximum element present in the given unsorted array.
// // Time complexity = O(n+n+n) = O(n);

// // */

// // #include <iostream>
// // #include <cmath>

// // struct Node
// // {
// //     int data;
// //     struct Node *next;
// // };

// // void display(int A[], int n) // (array, number of elements in array A)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         std::cout << A[i] << std::endl;
// //     }
// // }

// // int findMax(int A[], int n)
// // {
// //     int i = 0, max = A[0];

// //     for (i = 1; i < n; i++)
// //     {
// //         if (A[i] > max)
// //         {
// //             max = A[i];
// //         }
// //     }

// //     return max;
// // }

// // void radixSort(int A[], int n)
// // {
// //     // 2, 5, 8, 12, 3, 6, 7, 10
// //     int max = findMax(A, n);

// //     Node *B[10]; // array of 10 Node pointers

// //     for (int b = 0; b < 10; b++) 
// //     {
// //         B[b] = nullptr;
// //     }

// //     int d = 0; // Numbmber of digits in the max number.

// //     while (max > 0)
// //     {
// //         max = max / 10;
// //         d++;
// //     }

// //     int loop;

// //     for (loop = 0; loop <= d; loop++)
// //     {

// //         int j = 0;

// //         // Input to Radix bucket
// //         for (int i = 0; i < n; i++)
// //         {
// //             j = (A[i] / (int)pow(10, loop)) % 10;

// //             Node *temp;
// //             temp = new Node;
// //             temp->data = A[i];
// //             temp->next = nullptr;

// //             if (B[j] == nullptr)
// //             {
// //                 B[j] = temp;
// //             }
// //             else
// //             {
// //                 Node *current = B[j];
// //                 while (current->next != nullptr)
// //                 {
// //                     current = current->next;
// //                 }
// //                 current->next = temp;
// //             }
// //         }

// //         // Output from Radix bucket
// //         int i = 0;
// //         for (int k = 0; k < 10; k++)
// //         {
// //             Node* current = B[k];
// //             while (current != nullptr)
// //             {
// //                 A[i++] = current->data;
// //                 Node* temp = current;
// //                 current = current->next;
// //                 delete temp; // optional: free memory
// //             }
// //         }
// //     }
// // }

// // int main()
// // {
// //     int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
// //     display(A, 8);

// //     std::cout << std::endl;

// //     radixSort(A, 8);
// //     display(A, 8);
// // }


// #include <iostream>
// #include <cmath>

// struct Node
// {
//     int data;
//     Node* next;
// };

// int findMax(int A[], int n)
// {
//     int max = A[0];
//     for (int i = 1; i < n; i++)
//         if (A[i] > max)
//             max = A[i];
//     return max;
// }

// void radixSort(int A[], int n)
// {
//     int max = findMax(A, n);
//     int d = 0;
//     while (max > 0)
//     {
//         max /= 10;
//         d++;
//     }

//     for (int loop = 0; loop < d; loop++)
//     {
//         Node* B[10] = {nullptr};  // reset buckets for each digit

//         // Input to buckets
//         for (int i = 0; i < n; i++)
//         {
//             int j = (A[i] / (int)pow(10, loop)) % 10;

//             Node* temp = new Node;
//             temp->data = A[i];
//             temp->next = nullptr;

//             if (B[j] == nullptr)
//             {
//                 B[j] = temp;
//             }
//             else
//             {
//                 Node* current = B[j];
//                 while (current->next != nullptr)
//                 {
//                     current = current->next;
//                 }
//                 current->next = temp;
//             }
//         }

//         // Output from buckets
//         int i = 0;
//         for (int k = 0; k < 10; k++)
//         {
//             Node* current = B[k];
//             while (current != nullptr)
//             {
//                 A[i++] = current->data;
//                 Node* temp = current;
//                 current = current->next;
//                 delete temp; // optional: free memory
//             }
//         }
//     }
// }

// void display(int A[], int n) // (array, number of elements in array A)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << A[i] << std::endl;
//     }
// }

// int main()
// {
//     int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
//     display(A, 8);

//     std::cout << std::endl;

//     radixSort(A, 8);
//     display(A, 8);
// }