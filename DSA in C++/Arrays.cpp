#include <stdlib.h>
#include <iostream>
 using namespace std;

void static1DArray()
{
int A[3] = {1,2,3};
int B[3];
int C[3] = {1,2};//Rest of the values will be considered 0 if there is not input.
int D[3] = {0};
int E[] = {1,2,3};

for (int i=0; i<3; i++)
{
    cout << A[i] << endl;
}
}

void Dynamic1DArray()
{

//Now ill create Dynamic Array which is allocated memory in Heap block

int *p;// P is a pointer  of type int 
int *q;// Q is a pointer of type int

p = new int[10];
q = (int*)malloc(10*sizeof(int));

/* Notes:malloc (C): The memory is not initialized, meaning it contains garbage (random) values.
calloc (C): The memory is initialized to zero.
new (C++):
If you allocate basic types (e.g., int* p = new int;), the value is uninitialized (garbage).
If you use new with value initialization (e.g., int* p = new int();), it is initialized to zero.*/
cout << p[2] << "," << q[2] << endl;

for (int i=0; i<10; i++)
{
    p[i]=i;
    q[i]=i;
}

for (int i=0; i<10; i++)
{
    cout << p[0] << " "<< q[0] << endl;
}

delete []p;
free(q);

cout << p[0] << endl;
cout << q[0] << endl;
/* After you call delete [] p; or free(q);, the pointers p and q still hold the address of the memory block that was freed. 
This is known as a dangling pointer.
The actual contents of the memory block are not immediately overwritten unless another allocation or
system process happens to reuse it. This is why you might still see the old values temporarily.*/

// After deallocating memory, always set the pointer to nullptr (or NULL in C) to stop unexpected behavior;

p = nullptr;
q = nullptr;

// Increasing the size of an array in heap.
//just create one more memroy allocation for new pointer A and then copy data from old memory 
//to new array and later assign pointer p to pointer A

p = new int[10];
for (int i=0; i<10; i++)
    {
        p[i]=i;
    }

int *a;
a = new int[15];
for (int i=0; i<10; i++)
    {
        a[i]=p[i];
    }
for (int i=10; i<15; i++)
    {
        a[i]=i;
    }

delete [] p;
p=a;
a=nullptr;

for (int i=0; i<15; i++)
    {
        cout << p[i] << endl;
    }
}

void _2DArray()
{
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    for ( int i=0; i<3; i++)
    {
        for ( int j=0; j<4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    for ( int i=0; i<3; i++)
    {
        for ( int j=0; j<4; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    int **C;
    C = new int*[3];
    C[0] = new int [4];
    C[1] = new int [4];
    C[2] = new int [4];
    for ( int i=0; i<3; i++)
    {
        for ( int j=0; j<4; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory for B (no need to free B itself as it's stack allocated)
    delete[] B[0];
    delete[] B[1];
    delete[] B[2];

    // Free memory for C
    delete[] C[0];
    delete[] C[1];
    delete[] C[2];
    delete[] C; // Free the array of pointers itself


    return;
}

// int main()
// {
//     static1DArray();
//     Dynamic1DArray();

//     _2DArray();
//     return 0;
    
// }


