// /*
// Merging two list into single list
// We always need extra list to store the merged values.

// */

// #include <iostream>

// void display(int A[], int n) // (array, number of elements in array A)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << A[i] << std::endl;
//     }
// }


// void Merge( int A[], int l, int mid, int h)
// {
//     //2, 5, 8, 12, 3, 6, 7, 10
//     int i , j , k;
//     i = l; 
//     j = mid + 1;
//     k = l ;
//     int B[h+1];

//     while(i<=mid && j<=h)
//     {
//         if( A[i] < A[j])
//         {
//             B[k++] = A[i++];
//         }
//         else
//         {
//             B[k++] = A[j++];
//         }
//     }

//     for( ; i <=mid; i++)
//     {
//         B[k++] = A[i];
//     }
//     for( ; j <=h; j++)
//     {
//         B[k++] = A[j];
//     }

//     for( i =l ; i<=h; i++)
//     {
//         A[i] = B[i];
//     }

// }

// //iterative mergesort

// void iMergeSort(int A[] , int n)
// {
//     int p ,l ,h, mid, i;

//     for ( p =2; p<=n; p=p*2)
//     {
//         for (i=0; i+p-1 < n; i = i+p)
//         {
//             l=i;
//             h=i+p-1;
//             mid = (l+h)/2;
//             Merge(A,l,mid,h);

//         }
//     }

//     if(p/2 < n)
//     {
//         Merge(A,0,p/2,n-1);
//     }

// }

// void rMergeSort(int A[], int l, int h)
// {
//     int mid = ((l+h)/2);

//     if( l<h)
//     {
//         rMergeSort(A,l,mid);
//         rMergeSort(A,mid+1,h);
//         Merge(A,l,mid,h);
//     }

// }


// int main()
// {
//     int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
//     display(A, 8);

//     std::cout << std::endl;

//     rMergeSort(A,0,7);
//     display(A, 8);
// }

