// /*
// Counting sort

// This reque lot of space because of new array of the size of maximum element present in the given unsorted array.
// Time complexity = O(n+n+n) = O(n);

// */

// #include <iostream>

// void display(int A[], int n) // (array, number of elements in array A)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << A[i] << std::endl;
//     }
// }

// int findMax( int A[], int n )
// {
//     int i = 0 ,  max=A[0];
    
//     for(i=1; i<n; i++)
//     {
//         if( A[i] > max)
//         {
//             max = A[i];
//         }
//     }

//     return max;
// }




// void countSort (int A[], int n)
// {
//     //2, 5, 8, 12, 3, 6, 7, 10
//     int max = findMax(A,n);
   
//     int C[max+1];

//     int i=0;

//     for (i = 0; i<=max; i++)
//     {
//         C[i] = 0;//initialied all the lementsin array C to 0;
//     }

//     for( i=0 ; i<=n-1; i++)
//     {
//         C[A[i]] = C[A[i]] + 1;
//     }

//     int j = 0;
//     i = 0;

//     while( i<=max)
//     {
//         if(C[i]>0)
//         {
//             A[j] = i;
//             j++;
//             C[i]--;
//         }
//         else
//         {
//             i++;
//         }
//     }
// }


// int main()
// {
//     int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
//     display(A, 8);

//     std::cout << std::endl;

//     countSort(A,8);
//     display(A, 8);
// }
