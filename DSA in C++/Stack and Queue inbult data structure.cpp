// #include <iostream>
// #include <stack>   // <-- Add this
// #include <queue>   


// using namespace std; 

// // Display stack elements (by copying to preserve original stack)
// void displayStack(stack<int> s) 
// {
//     cout << "Stack elements (top to bottom): ";
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }




// // Display queue elements (by copying to preserve original queue)
// void displayQueue(queue<int> q)
// {
//     cout << "Queue elements (front to back): ";
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     stack<int> s;

//     /*
//     Stack:
//     - Container adaptor that follows LIFO (Last-In, First-Out) order.
//     - Default underlying container: deque.
//     - Common operations: push, pop, top, empty, size.
//     */

//     // push() --- O(1)
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     cout << "After pushing elements:" << endl;
//     displayStack(s);
//     cout << endl;

//     /*
//     Common operations for stack:

//     push(x)   --- Insert element at top. O(1)
//     pop()     --- Remove top element. O(1)
//     top()     --- Access top element. O(1)
//     empty()   --- Check if stack is empty. O(1)
//     size()    --- Returns number of elements. O(1)
//     swap()    --- Swap contents with another stack. O(1)
//     emplace() --- Construct element in place at top. O(1)
//     */

//     // top() --- O(1)
//     cout << "Top element: " << s.top() << endl;

//     // pop() --- O(1)
//     s.pop();
//     cout << "After one pop, top element: " << s.top() << endl;

//     // size() --- O(1)
//     cout << "Stack size: " << s.size() << endl;

//     // empty() --- O(1)
//     cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

//     // emplace() --- O(1)
//     s.emplace(99);
//     cout << "After emplace(99), top element: " << s.top() << endl;

//     // swap() --- O(1)
//     stack<int> anotherStack;
//     anotherStack.push(1);
//     anotherStack.push(2);

//     cout << "\nBefore swap:" << endl;
//     cout << "Original stack: "; displayStack(s);
//     cout << "Another stack: "; displayStack(anotherStack);

//     s.swap(anotherStack);

//     cout << "\nAfter swap:" << endl;
//     cout << "Original stack: "; displayStack(s);
//     cout << "Another stack: "; displayStack(anotherStack);


//     queue<int> q;

//     /*
//     Queue:
//     - Follows FIFO (First-In, First-Out) order.
//     - Default underlying container: deque.
//     - Elements are inserted at the back and removed from the front.
//     */

//     // push() --- O(1)
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout << "After pushing elements:" << endl;
//     displayQueue(q);
//     cout << endl;

//     /*
//     Common operations for queue:

//     push(x)      --- Insert element at back. O(1)
//     pop()        --- Remove element from front. O(1)
//     front()      --- Access front element. O(1)
//     back()       --- Access last element. O(1)
//     empty()      --- Check if queue is empty. O(1)
//     size()       --- Number of elements. O(1)
//     emplace(x)   --- Construct element in place at back. O(1)
//     swap(other)  --- Swap contents with another queue. O(1)
//     */

//     // front() and back() --- O(1)
//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     // pop() --- O(1)
//     q.pop();
//     cout << "After one pop:" << endl;
//     displayQueue(q);
//     cout << endl;

//     // size() --- O(1)
//     cout << "Queue size: " << q.size() << endl;

//     // empty() --- O(1)
//     cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

//     // emplace() --- O(1)
//     q.emplace(99);
//     cout << "After emplace(99):" << endl;
//     displayQueue(q);
//     cout << endl;

//     // swap() --- O(1)
//     queue<int> anotherQueue;
//     anotherQueue.push(1);
//     anotherQueue.push(2);

//     cout << "Before swap:" << endl;
//     cout << "Original queue: "; displayQueue(q);
//     cout << "Another queue: "; displayQueue(anotherQueue);

//     q.swap(anotherQueue);

//     cout << "\nAfter swap:" << endl;
//     cout << "Original queue: "; displayQueue(q);
//     cout << "Another queue: "; displayQueue(anotherQueue);

//     return 0;
// }

