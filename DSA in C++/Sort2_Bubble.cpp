// #include <iostream>


// void display(int A[], int n)// (array, number of elements in array A)
// {
//     for ( int i = 0 ; i<n ; i++)
//     {
//         std::cout << A[i] << std::endl;
//     } 
// }


// void bubbleSort( int A[], int n)// (array, number of elements in array A)
// {
//     for ( int i = 0 ; i<n-1 ; i++)
//     {
//         int flag = 0; 
//         for ( int j = 0; j<n-i-1 ; j++)
//         {
//             if( A[j] > A[j+1] )
//             {
//                 int temp = A[j];
//                 A[j] = A[j+1];
//                 A[j+1] = temp;
//                 flag = 1 ;
//             }
//         }

//         if (flag==0) break;

//     }
// }


// int main()
// {
//     int A[] = {4, 3, 2, 5, 1};
//     display(A,5);

//     std::cout << std::endl;

//     bubbleSort(A,5);
//     display(A,5);

// }