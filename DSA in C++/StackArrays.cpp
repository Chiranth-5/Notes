// // Dot (.) operator: Used for direct access to members of a struct or class instance.

// // Arrow (->) operator: Used for accessing members of a struct or class through a pointer. It combines dereferencing and member access into one operation.

// // arrow is eqaul to (*st).

// #include <iostream>
// #include <cstring>
// #include <string>


// struct Stack
// {
//     int size;
//     int top;
//     char *s;
// };

// // void create(struct Stack *st)
// // {
// //     std::cout << "Enter the size of the stack" << std::endl;
// //     std::cin >> st->size;
// //     st->top = -1;
// //     st->s = new char[st->size];
// // }

// void display(struct Stack st)
// {
//     if(st.top == -1)
//     {
//         std::cout << "Stack is Empty" << std::endl;
//     }
//     else
//     {
//         for ( int i = st.top; i > -1; i--)
//         {
//             std::cout << st.s[i] << std::endl;

//         }
//     }
// }

// void push(struct Stack *st ,char x)
// {
//     if(st->top == st->size-1)
//     {
//         std::cout << "Stack Overflow" << std::endl;
//         return;
//     } 
//     else
//     {
//         st->s[st->top+1] = x;
//         st->top++;
//         return;
//     }
// }
// char pop(struct Stack *st)
// {
//     char x = '\0';
//     if(st->top == -1)
//     {
//         std::cout << "Stack Underflow" << std::endl;
//     } 
//     else
//     {
//         x = st->s[st->top];
//         st->top--;
//     }
//     return x;
// }

// int peek(struct Stack st ,int pos)
// {
//     int x = -1;
//     if (pos <= st.top+1)
//     {
//         x = st.top - pos + 1;
//     }
//     return x;
    
// }

// char stackTop(struct Stack st)
// {
//     char x = '\0';
//     if(st.top==-1)
//     {
//         std::cout << "Stack is Empty" << std::endl;
//     }
//     else
//     {
//         x = st.s[st.top];
//     }
//     return x;

// }

// bool isEmpty(struct Stack st)
// {
//     if(st.top == -1)
//     {
//         return true;
//     }
//     return false;
// }

// bool isFull(struct Stack st)
// {
//     if(st.top==st.size-1)
//     {
//         return true;
//     }
//     return false;
// }

// bool isBalanced(char *exp)
// {   
//     struct Stack st;
//     st.size = strlen(exp);
//     st.top = -1;
//     st.s = new char[st.size];
//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if ( exp[i] == '(')
//         {
//             push(&st,exp[i]);
//         }
//         else if( exp[i]==')')
//             {
//                 if(isEmpty(st))
//                 {
//                     return false;
//                 }
//                 else
//                 {
//                     pop(&st);
//                 }
//             }
//     }
//     return isEmpty(st);
// }

// int isOperand(char x)
// {
//     if( x=='+' || x=='-' || x=='*' || x=='/' )
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int pre(char c)
// {
//     if( c=='+' || c=='-')
//     {
//         return 1;
//     }
//     else if( c=='*' || c=='/')
//         {
//             return 2;
//         }
//         else
//         {
//             return 0;
//         }
// }

// char * convert (char *inFix)
// {
//     struct Stack st;
//     st.size = strlen(inFix);
//     st.top = -1;
//     st.s = new char[st.size];

//     char *postFix;
//     postFix = new char[strlen(inFix)+1];

//     int i=0,j=0;
//     while (inFix[i]!='\0')
//     {
//         if(isOperand(inFix[i]))
//         {
//             postFix[j++] = inFix[i++];
//         }
//         else
//         {
//             if(pre(inFix[i])>pre(stackTop(st)))
//             {
//                 push(&st,inFix[i++]);
//             }
//             else
//             {
//                 postFix[j++] = pop(&st);
//             }
//         }
//     }
//     while (!isEmpty(st))
//     {
//         postFix[j++] = pop(&st);
//     }

//     postFix[j]='\0';
//     return postFix;

// }

// int evalPostFix(char *postFix)
// {
//     struct Stack st;
//     int i=0, x1=0, x2=0, r=0;
//     for (i=0; postFix[i]!='\0'; i++)
//     {
//         if(isOperand(postFix[i]))
//         {
//             push(&st,postFix[i]);
//         }
//         else
//         {
//             if(isEmpty(st))
//             {
//                 std::cout << "Invalid Expression" << std::endl;
//                 return -1;
//             }
//             x2 = pop(&st)-'0';
//             if(isEmpty(st))
//             {
//                 std::cout << "Invalid Expression" << std::endl;
//                 return -1;
//             }
//             x1 = pop(&st)-'0';
//             char temp = '\0';

//             switch (postFix[i])
//             {
//             case '+':
//                 r = x1+x2;
//                 temp = '0'+ r;
//                 push(&st, temp);
//                 break;
            
//             case '-':
//                 r = x1-x2;
//                 temp = '0'+ r;
//                 push(&st, temp);
//                 break;
            
//             case '*':
//                 r = x1*x2;
//                 temp = '0'+ r;
//                 push(&st, temp);
//                 break;
            
//             case '/':
//                 r = x1/x2;
//                 temp = '0'+ r;
//                 push(&st, temp);
//                 break;
            
//             default:
//                 break;
//             }


//         }
//     }

//     return r = pop(&st)-'0';
// }

// // int main()
// // {
// //     // struct Stack st;

// //     // create(&st);
    
// //     // push(&st,1);
// //     // push(&st,2);
// //     // push(&st,3);
// //     // push(&st,4);
// //     // push(&st,5);
// //     // display(st);

// //     // int x = peek(st,3);
// //     // std::cout << std::endl;
// //     // std::cout << x << std::endl;


// //     char *exp = "234*+82/-";
// //     // bool A = isBalanced(exp);
// //     std::cout << exp << std::endl;

// //     // char * postFix = convert(exp);
// //     // std::cout << postFix << std::endl;

// //     int result = evalPostFix(exp);
// //     std::cout << result << std::endl;


// // }