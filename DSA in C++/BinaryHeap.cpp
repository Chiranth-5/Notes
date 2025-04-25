#include <iostream>

void insert(int H[], int n)
{
    int i = n;
    int temp = H[n];

    while ( i > 1 && temp > H[i/2])
    {
        H[i] = H[i/2];
        i = i/2;
    }
    H[i] = temp;
}

void deleteBH(int A[],int n)
{
    // n is the last element of the BH;

    int x , i , j;
    x = A[n];
    A[n] = A[1];
    A[1] = x;
    
    i = 1;
    j = 2*i;

    while (j < n-1)
    {   
        if(A[j+1] > A[j])
        {
            j++;
        }

        if(A[i] < A[j])
        {
            int temp;
            
            //swap parent with child
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;

            // update our pointers
            i = j;
            j = 2*i;

        }
        else
        {
            break;
        }
    }

   
}


int main()
{
    int H[] = {0,10,20,30,25,5,40,35};
    std::cout << std::endl;

    for ( int i =1 ; i<=7; i++) //Last index is 7
    {
        std::cout << H[i] << std::endl;
    }

    std::cout << std::endl;

    for ( int i =2 ; i<=7; i++) //Last index is 7
    {
        insert(H,i);
    }

    std::cout << std::endl;

    for ( int i =1 ; i<=7; i++) //Last index is 7
    {
        std::cout << H[i] << std::endl;
    }
    std::cout << std::endl;

    for ( int i = 7 ; i>1; i--) //Last index is 7
    {
        deleteBH(H,i);
    }
    std::cout << std::endl;

    for ( int i =1 ; i<=7; i++) //Last index is 7
    {
        std::cout << H[i] << std::endl;
    }

   // proprity Que is implemenetd using Binary heap because both insertion and deletion takes place in order of log(n)

}