// #include <stdio.h>
// #include <stdlib.h>

// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct Array arr)
// {
//     int i,n;
//     n = arr.length;
//     printf("The numbers in array are ");
//     for ( i = 0 ; i<n ; i++)
//     {
//         printf("%d ", arr.A[i]);
//     }
// }
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp; 
// }

// int LinearSearch( struct Array *arr, int key)
// {
//     int i;
//     for ( i=0; i<arr->length; i++)
//     {
//         if( arr->A[i] == key && i==0)
//         {
//             return i;
//         }
//         else if( arr->A[i] == key )
//             {
//                 swap(&arr->A[i],&arr->A[i-1]);
//                 return i-1;
//             }
//     }
//     return -1;
// }

// int BinarySearch(struct Array arr, int key)
// {
//     //Time O(hight of the binary tree ie logn)
//     //for unsuccessful search its logn+1 ie again O(logn)
    
//     int l,h,mid;
//     l=0;
//     h=arr.length-1;
    
//     while (l<h)
//     {
//         mid = l+h/2;

//         if( key == arr.A[mid])
//         {
//             return mid;
//         }
//         else if( key < arr.A[mid])
//         {
//             h = mid-1;
//         }
//         else
//         {
//             l = mid+1;
//         }
//     }
//     return -1;
// }

// void Reverse(struct Array *arr)
// {
//     int i,j,temp;
//     for (i=0,j=arr->length-1; i<j; i++,j--)
//     {
//         swap(&arr->A[i],&arr->A[j]);
//     }
// }

// struct Array * Merge(struct Array *arr1, struct Array *arr2)
// {
//     struct Array *arr3 = new struct Array;

//     int i,j,k,m,n;
//     m = arr1->length;
//     n = arr2->length;
//     i = j = k = 0;//Value of the right most is assigned to all the varibles in the left

//     while ( i<m && j<n)
//     {
//         if (arr1->A[i] <= arr2->A[j] )
//         {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else
//         {
//             arr3->A[k++]=arr2->A[j++];
//         }
//     }
//     for(; i<m; i++)
//     {
//         arr3->A[k++]=arr1->A[i];
//     }
//     for(; j<n; j++)
//     {
//         arr3->A[k++]=arr2->A[j];
//     }
//     arr3->length = m+n;
//     arr3->size = 20;

//     return arr3;
// }


// //similarly difference, intersection, can be done.
// //Importatnt NNote the arrays must be sorted
// struct Array * Union(struct Array *arr1, struct Array *arr2)
// {
//     struct Array *arr3 = new struct Array;

//     int i,j,k,m,n;
//     m = arr1->length;
//     n = arr2->length;
//     i = j = k = 0;//Value of the right most is assigned to all the varibles in the left

//     while ( i<m && j<n)
//     {
//         if (arr1->A[i] < arr2->A[j] )
//         {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else if( arr1->A[i] > arr2->A[j])
//         {
//             arr3->A[k++]=arr2->A[j++];
//         }
//         else
//         {
//            arr3->A[k++]=arr2->A[j++];
//            i++; 
//         }
//     }
//     for(; i<m; i++)
//     {
//         arr3->A[k++]=arr1->A[i];
//     }
//     for(; j<n; j++)
//     {
//         arr3->A[k++]=arr2->A[j];
//     }
//     arr3->length = k;
//     arr3->size = 20;

//     return arr3;
// }



// // int main()
// // {
// //     struct Array arr1 = { {1,2,3,4,5},10,5};
// //     struct Array arr2 = { {2,7,8,9,10},10,5};
// //     struct Array *arr3;
// //     int n,i;

// //     // printf("%d\n",LinearSearch(&arr , 1));
// //     // Display(arr);

// //     // printf("%d\n",BinarySearch( arr , 3));
// //     // Display(arr);

// //     // Reverse(&arr1);
// //     // Display(arr1);

// //     arr3 = Merge(&arr1, &arr2);
// //     Display(*arr3);

// //     arr3 = Union(&arr1, &arr2);
// //     Display(*arr3); 

// // }
    