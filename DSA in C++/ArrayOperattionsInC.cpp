/*
Format specifiers:
%d or %i	Integer (decimal)	42
%f	Float (decimal)	3.14
%c	Character	'A'
%s	String of characters	"Hello"
%u	Unsigned integer	12345
%ld	Long integer	123456789
%x or %X	Hexadecimal (lower/upper case)	2a / 2A
%o	Octal	52
%p	Pointer address	0x7ffee2f
%%	Print a literal % symbol	%
*/

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i,n;
    n = arr.length;
    printf("The numbers in array are ");
    for ( i = 0 ; i<n ; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Append(struct Array *arr , int x)
{
    if ( arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
        
    }   
}

void Insert(struct Array *arr , int x, int pos)
{   
    int i;
    if ( arr->length < arr->size && pos>0 )
    {
        for ( i = arr->length; i>pos; i--)
        {
            arr->A[i] = arr->A[i-1];
        }  
        arr->A[pos] = x;
        arr->length++;
    }   
}

int Delete(struct Array *arr , int index)
{   
    int i,x;
    x = arr->A[index];
    if ( arr->length>0 && index>=0 && index<=arr->length)
    {
        for ( i = index; i<arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }  
        arr->A[i] = 0;
        arr->length--;
    }

    return x;  
}


int main()
{
    // struct Array arr;
    // int n,i;

    // printf("Enter the size of an Array");
    // scanf("%d",&arr.size);

    // arr.A = (int *)malloc((sizeof(int))* arr.size);

    // arr.length = 0;

    // printf("Enter the number of numbers");
    // scanf("%d", &n);

    // printf("Enter the numbers");
    // for ( i = 0 ; i<n ; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }
    // arr.length = n;

    // display(arr);

    // delete[] arr.A;
    // arr.A = nullptr;

    struct Array arr = { {1,2,3,4,5},20,5};

    // Display(arr);

    // Append(&arr , 6);
    // Display(arr);

    // Insert(&arr ,7,6);
    // Display(arr);

    printf("%d\n",Delete(&arr , 4));
    Display(arr);

    return 0;
}
