// /*
// Control Charachters c,s,d

// Format Specifiers for printf and scanf:
// %d: Integer
// %f: Float
// %c: Character
// %s: String
// %x: Hexadecimal (lowercase)
// %X: Hexadecimal (uppercase)
// %o: Octal
// %e or %E: Scientific Notation
// %p: Pointer Address


// Char temp;
// temp = ‘A’;
// temp = “A”;
// temp = ‘AB’;
// temp = A;
// printf( “%c” , temp ); // in C language
// Cout<<temp; // in c++ langage
// • A character Array can be define and initialise as follows
// char x[ 5 ] ;
// char x[ 5 ] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
// char x[ ] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
// char x[5] = { 65,66,67,68,69};
// char x[5] = {‘A’ , ‘B’};
// • An array of characters are nothing but strings
// • \0 is used to define the end of string or end of character , it is also
// know as string delimiter, end of string char , NULL char or string
// terminator
// • Creating and initialising of string can be done as follows
// char name[ 10 ] = {‘J’, ‘O’, ‘H’, ‘N’, ‘\0’};
// char name[ ] = {‘J’, ‘O’, ‘H’, ‘N’, ‘\0’};
// char name[ ] = {‘’John”};

// */

// #include<iostream>
// #include<string>


// void length(char A[])
// {
//     int i=0;
//     for( i=0; A[i]!='\0' ; i++)
//     {
    
//     }
//     std::cout << i << std::endl;
// }

// void changingCase(char C[])
// {
//     for(int i=0; C[i]!='\0'; i++)
//     {
//         if(C[i]>=65 && C[i]<=90)
//         {
//             C[i] = C[i] + 32;
//         }
//         else if (C[i]>=97 && C[i]<=122)
//         {
//             C[i] = C[i] - 32;
//         }
//     }
//     std::cout << C << std::endl;
// }

// void vowelsandConsonant(char C[])
// {
//     int count=0;
//     int i=0;
//     for( i=0; C[i]!='\0'; i++)
//     {
//         if(C[i] == 'a' || C[i] == 'e' || C[i] == 'i' || C[i] == 'o' || C[i] == 'u' ||
//            C[i] == 'A' || C[i] == 'E' || C[i] == 'I' || C[i] == 'O' || C[i] == 'U')
//         {
//             count++;
//         }
//     } 
//     std::cout << "Number of Vowels : " << count << std::endl;

//     int whitespace = 0;
//     for( int j=0; C[j]!='\0'; j++)
//     {
//         if( !((C[j]>=65 && C[j]<=90) || (C[j]>=97 && C[j]<=122)))
//         {
//             whitespace++;
//         }
//     }
//     std::cout << "Number of Consonantes : " << i - count - whitespace << std::endl;

// }

// void countingNumberOfWords(char C[])
// {
//     int count=0;
//     for( int i=0; C[i]!='\0'; i++)
//     {
//         if(C[i]==' ' && C[i-1]!=' ')
//         {
//             count++;
//         }
//     }
//     std::cout << "Number of words : " << count+1 << std::endl;
// }

// void reverseingString2methods(char C[])
// {
//     int i=0;
//     for( i=0; C[i]!='\0' ; i++)
//     {
    
//     }
//     char B[i+1];
//     i--;
//     int j;
//     for( j=0; i>=0 ; i--,j++)
//     {
//         B[j] = C[i];
//     }
//     B[j] ='\0';
//     std::cout << "Reversed string using extra ArrayOfStrings : " << B << std::endl;

//     int k=0;
//     for( ; C[k]!='\0' ; k++)
//     {
    
//     }
//     int l = k-1;
//     for( int m=0; m<l ; l--,m++)
//     {
//         char temp;
//         temp = C[m];
//         C[m] = C[l];
//         C[l] = temp;
//     }
//     std::cout << "Reversed string without extra ArrayOfStrings : " << C << std::endl;

// }

// void duplicatesUsingBitWiseOperator(char A[])
// {
//     //size of int is 4 bytes
//     int x=0;
//     int y=0;

//     for (int i=0; A[i]!='\0'; i++)
//     {
//         x=1;
//         x = x<<(A[i]-97);
//         if ((x&y) >0)
//         {
//             std::cout << A[i] << std::endl;
//         }
//         else
//         {
//             y = (x|y);
//         }
//     }
// }

// void isAnagram(char A[],char B[])
// {
//     char H[26] = {};

//     for(int i=0; A[i]!='\0'; i++)
//     {
//         H[A[i]-97]++;
//     }
//     int i=0;
//     for( ; B[i]!='\0'; i++)
//     {
//         H[B[i]-97]--;
//         if(H[B[i]-97] < 0)
//         {
//             std::cout << "Its not Anagram" << std::endl;
//             break;
//         }
//     }
//     if(B[i]=='\0')
//     {
//         std::cout << "Its Anagram" << std::endl;
//     }
// }

// void perm(char D[], int k)
// {
//     static int A[10] ={0};
//     static char Res[10] ;
//     int i;

//     if (D[k] == '\0')
//     {
//         Res[k] = '\0';
//         std::cout << Res << std::endl;
//     }
//     else
//     {
//         for(int i=0; D[i]!='\0'; i++)
//         {
//             if(A[i]==0)
//             {
//                 Res[k] = D[i];
//                 A[i]=1;
//                 perm(D,k+1);
//                 A[i]=0;
//             }
//         }
//     }
// }

// int main()
// {
//     // // char A[4] ={'A','B','C','\0'};
//     // // printf( "%s", A);
//     // // std::cout << A << std::endl;
//     // char C[] = "Chiranth is good";
//     // char A[] = "medical";
//     // char B[] = "decimal";
//     // char D[] = "ABC";
//     // int k=0;
 
//     // // printf( "%s\n", C);
//     // // std::cout << C << std::endl;
//     // // char B = 'B';
//     // // printf( "%c", B);
//     // // std::cout << B << std::endl;

//     // // length(C);
//     // // changingCase(C);
//     // // vowelsandConsonant(C);
//     // // countingNumberOfWords(C);
//     // // reverseingString2methods(C);
//     // // comparingStrings();
//     // // duplicatesInString();Using hastable of length 0-25
//     // // duplicatesUsingBitWiseOperator(A);
//     // // isAnagram(A,B);
//     // perm(D,k);
    
//     std::string A;
//     std::cout << A.size() << std::endl;
// }