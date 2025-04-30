// #include <iostream>


// void display(int A[], int n)// (array, number of elements in array A)
// {
//     for ( int i = 0 ; i<n ; i++)
//     {
//         std::cout << A[i] << std::endl;
//     } 
// }


// void insertionSort( int A[], int n)// (array, number of elements in array A)
// {
//     for ( int i = 1 ; i<n ; i++)
//     {
//         int x = A[i];
//         int j = i-1;
        
//         while ( A[j] > x  && j>-1 )
//         {
//             A[j+1] = A[j];
//             j--;
//         } 

//         A[j+1] = x;
//     }
// }


// int main()
// {
//     int A[] = {4, 3, 2, 5, 1};
//     display(A,5);

//     std::cout << std::endl;

//     insertionSort(A,5);
//     display(A,5);

// }