// #include <iostream>

// /*

// Selecting an element and finisding its location

// performs at O(n2) if the array is already in ascending or decscending order
// if we assume that partitioning is happening at the center of the array everysingle time then O(n(logn)) will be the time complexity



// */

// void display(int A[], int n) // (array, number of elements in array A)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << A[i] << std::endl;
//     }
// }

// int partition(int A[], int l, int h)
// {
//     //4,3,2,5,1,588
//     int pivot = A[l];
//     int i = l;
//     int j = h;

//     do
//     {
//         do
//         {
//             i++;
//         } while (i <= h && A[i] <= pivot);  // avoid going out of bounds

//         do
//         {
//             j--;
//         } while (j >= l && A[j] > pivot);

//         if (i < j)
//         {
//             // swap A[i] and A[j]
//             int temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // swap pivot A[l] with A[j]
//     int temp = A[l];
//     A[l] = A[j];
//     A[j] = temp;

//     return j; // pivot's final position
// }


// void quickSort(int A[], int l, int h) // (array, number of elements in array A)
// {
//     int j;

//     if (l < h)
//     {
//         j = partition(A, l, h);
//         quickSort(A, l, j);
//         quickSort(A, j + 1, h);
//     }
// }

// int main()
// {
//     int A[] = {4, 3, 2, 5, 1, 588};
//     display(A, 6);

//     std::cout << std::endl;

//     quickSort(A, 0, 5);
//     display(A, 6);
// }