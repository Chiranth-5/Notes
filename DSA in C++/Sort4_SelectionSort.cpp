// #include <iostream>


// // intermideiate passes will give usefull result
// // minimum number of swaps
// // Not adaptive.(No swap after 1 pass does not mean the array is sorted)
// // Not stable.


// void display(int A[], int n)// (array, number of elements in array A)
// {
//     for ( int i = 0 ; i<n ; i++)
//     {
//         std::cout << A[i] << std::endl;
//     } 
// }


// void selectionSort( int A[], int n)// (array, number of elements in array A)
// {
//     int i = 0, j = 0, k = 0 ;
//     for ( int i = 0 ; i<n-1 ; i++)
//     {
//         j = i;
//         k = j+1;
        
//         while ( k <= n-1 )
//         {
//             if (A[k] < A[j])
//             {
//                 j = k;
//             }
//             k++;
//         } 

//         //swap A[i],A[j]
//         int temp = A[i];
//         A[i] = A[j];
//         A[j] = temp;
//     }
// }


// int main()
// {
//     int A[] = {4, 3, 2, 5, 1};
//     display(A,5);

//     std::cout << std::endl;

//     selectionSort(A,5);
//     display(A,5);

// }