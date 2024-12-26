#include"Matrix.h"

Diagonal::Diagonal(int n)
{
    this->n = n;
    A = new int[n];
}

void Diagonal::setMatrix(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}

int Diagonal::getMatrix(int i, int j)
{
    if(i==j) return A[i-1];
    else return 0;
}

void Diagonal::display()
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                std::cout<< A[i]<<" "; 
            }
            else
            {
                std::cout<< "0 ";
            }
        }
        std::cout<< std::endl;
    }
}

Diagonal::~Diagonal()
{
    delete [] A;
}


LowerDiagonal::LowerDiagonal(int n)
{
    this->n = n;
    A = new int[(n*(n+1))/2];
}

void LowerDiagonal::setLMatrix(int i, int j, int x)
{
    if(i>=j)
    {
        A[((i-1)*i/2)+(j-1)]=x;
    }
}

int LowerDiagonal::getLMatrix(int i, int j)
{
    if(i>=j) return A[((i-1)*i/2)+(j-1)];
    else return 0;
}

void LowerDiagonal::display()
{

    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            if(i>=j)
            {
                std::cout<< A[((i-1)*i/2)+(j-1)]<<" "; 
            }
            else
            {
                std::cout<< "0 ";
            }
        }
        std::cout<< std::endl;
    }
}

LowerDiagonal::~LowerDiagonal()
{
    delete [] A;
}

