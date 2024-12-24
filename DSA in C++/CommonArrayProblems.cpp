#include<iostream>

void missingElements( int* A)
{
    //Finding Missing Elements.
    int d = A[0]-0;

    for( int i=0; i<10; i++)
    {
        if( d!=A[i]-i)
        {
            while( d<A[i]-i )
            {
                std::cout<< i+d << std::endl;
                d++;
            }
            
        }
    }
}

void duplicates(int*A)
{   
    int duplicate = -1;
    for( int i=0; i<10; i++)
    {
        if(( A[i]==A[i+1]) && (A[i]!= duplicate))
        {
            std::cout<< A[i] << std::endl;
            duplicate=A[i];
        }
    }
}

void duplicatesUsingHash(int* A)
{
    int H[12] = {0};
    for( int i=0; i<10; i++)
    {
        H[A[i]]++;
    }
    for(int i=0; i<12; i++)
    {
        if(H[i]>1)
        {
            std::cout << i << std::endl;
        }
    }
}

void duplicatesUnsortedArray(int *A)
{
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(A[i]==A[j])
            {
                std::cout << A[i] << std::endl;
            }
        }
    }
}

void sumOfK(int *A)
{
    int i=0;
    int j=9;
    while( i<j )
    {
        if( A[i]+A[j]>10)
        {
            j--;
        }
        else if( A[i]+A[j]<10)
        {
            i++;
        }
        else
        {
            std::cout<< A[i] << " " << A[j] << std::endl;
            i++;
            j--;
        }
    } 
}


// int main()
// {
//     int A[10] ={1,2,3,4,4,8,9,10,11,12};
//     // missingElements(A);
//     // duplicates(A);
//     // duplicatesUsingHash(A);
//     // duplicatesUnsortedArray(A);
//     sumOfK(A);


   
// }