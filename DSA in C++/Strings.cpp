// #include <iostream>
// #include <string>
// using namespace std;

// // -------------------- Character Array Functions --------------------

// // Calculate length of char array
// void length(char A[])
// {
//     int i = 0;
//     while(A[i] != '\0') i++;
//     cout << "Length: " << i << endl;
// }

// // Change case: uppercase <-> lowercase
// void changingCase(char C[])
// {
//     for(int i = 0; C[i] != '\0'; i++)
//     {
//         if(C[i] >= 'A' && C[i] <= 'Z')
//             C[i] = C[i] + 32;
//         else if(C[i] >= 'a' && C[i] <= 'z')
//             C[i] = C[i] - 32;
//     }
//     cout << "After changing case: " << C << endl;
// }

// // Count vowels and consonants
// void vowelsAndConsonants(char C[])
// {
//     int vowels = 0, consonants = 0;
//     for(int i = 0; C[i] != '\0'; i++)
//     {
//         char ch = C[i];
//         if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         {
//             if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//                 vowels++;
//             else
//                 consonants++;
//         }
//     }
//     cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
// }

// // Count number of words
// void countWords(char C[])
// {
//     int count = 0;
//     for(int i=0; C[i]!='\0'; i++)
//     {
//         if(C[i]==' ' && C[i-1]!=' ')
//             count++;
//     }
//     cout << "Number of words: " << count + 1 << endl;
// }

// // Reverse string using extra array and in-place
// void reverseString(char C[])
// {
//     // Extra array
//     int len = 0;
//     while(C[len] != '\0') len++;
//     char B[len+1];
//     for(int i=0; i<len; i++)
//         B[i] = C[len-1-i];
//     B[len] = '\0';
//     cout << "Reversed (extra array): " << B << endl;

//     // In-place
//     for(int i=0, j=len-1; i<j; i++, j--)
//     {
//         char temp = C[i];
//         C[i] = C[j];
//         C[j] = temp;
//     }
//     cout << "Reversed (in-place): " << C << endl;
// }

// // -------------------- std::string append() Examples --------------------
// void stringAppendExamples()
// {
//     cout << "\n--- std::string append() Examples ---\n";

//     string s;

//     // 1. append(count, char)
//     s = "A";
//     s.append(3, 'x');   // "Axxx"
//     cout << "1. append(count, char): " << s << endl;

//     // 2. append(const char* cstring)
//     s = "hi ";
//     s.append("there");  // "hi there"
//     cout << "2. append(cstring): " << s << endl;

//     // 3. append(const char* cstring, size_t count)
//     s = "start ";
//     s.append("abcdef", 3);  // "start abc"
//     cout << "3. append(cstring, count): " << s << endl;

//     // 4. append(const string& str)
//     string A = "new";
//     string B = "new";
//     A.append(B);   // "newnew"
//     cout << "4. append(string): " << A << endl;

//     // 5. append(const string& str, size_t pos)
//     A = "new";
//     A.append(B, 2);  // append B.substr(2) -> "w" => "neww"
//     cout << "5. append(string, pos): " << A << endl;

//     // 6. append(const string& str, size_t pos, size_t count)
//     A = "new";
//     A.append(B, 0, 2);  // append first 2 chars -> "ne" => "newne"
//     cout << "6. append(string, pos, count): " << A << endl;
// }

// // -------------------- Main --------------------
// int main()
// {
//     // Character array examples
//     char arr[] = "Hello World";

//     cout << "--- Character Array Examples ---\n";
//     length(arr);
//     changingCase(arr);
//     vowelsAndConsonants(arr);
//     countWords(arr);
//     reverseString(arr);

//     // String append examples
//     stringAppendExamples();

//     return 0;
// }
