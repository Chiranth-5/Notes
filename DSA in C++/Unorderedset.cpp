// #include <iostream>
// #include <unordered_set>
// using namespace std;

// // Display unordered_set elements
// void displayUnorderedSet(const unordered_set<int> &lSet)
// {
//     for (unordered_set<int>::iterator it = lSet.begin(); it != lSet.end(); it++)
//     {
//         cout << *it << endl;
//     }
// }

// int main()
// {
//     unordered_set<int> setDemo;

//     /*
//     Unordered set:
//     - Elements are not stored in any specific order.
//     - No duplicates allowed.
//     - Internally implemented using a hash table.
//     */

//     // Insert elements
//     // Average Time Complexity: O(1) per insert
//     // Worst-case: O(n) if rehashing occurs
//     setDemo.insert(10);
//     setDemo.insert(5);
//     int a = 30;
//     setDemo.insert(a);
//     a=35;
//     setDemo.insert(a);


//     cout << "Elements in unordered_set: " << endl;
//     for (unordered_set<int>::iterator it = setDemo.begin(); it != setDemo.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     /*
//     Common operations for unordered_set:

//     insert(value)      --- inserts value, O(1) average, O(n) worst-case
//     begin() / end()    --- returns iterators to start/end, O(1)
//     find(value)        --- returns iterator to value, O(1) average, O(n) worst-case
//     erase(value)       --- erase by value, O(1) average, O(n) worst-case
//     erase(iterator)    --- erase by iterator, O(1) average
//     erase(first,last)  --- not supported for unordered_set (range erase not applicable)
//     count(value)       --- returns 0 or 1, O(1) average, O(n) worst-case
//     size()             --- returns number of elements, O(1)
//     empty()            --- checks if empty, O(1)
//     clear()            --- removes all elements, O(n)
//     */

//     // find
//     // Average Time Complexity: O(1)
//     unordered_set<int>::iterator itSample = setDemo.find(10);
//     cout << endl;
//     if (itSample != setDemo.end())
//         cout << *itSample << endl;
//     cout << endl;

//     // erase by value
//     // Average Time Complexity: O(1)
//     setDemo.erase(5);  // remove 5
//     displayUnorderedSet(setDemo);
//     cout << endl;

//     // erase value not present
//     // Average Time Complexity: O(1) - nothing erased
//     setDemo.erase(300);
//     displayUnorderedSet(setDemo);
//     cout << endl;

//     // erase by iterator
//     // Average Time Complexity: O(1)
//     itSample = setDemo.find(20);
//     if (itSample != setDemo.end())
//         setDemo.erase(itSample);
//     displayUnorderedSet(setDemo);
//     cout << endl;

//     // size() --- O(1)
//     cout << "Size of unordered_set: " << setDemo.size() << endl;

//     // empty() --- O(1)
//     cout << "Is unordered_set empty? " << setDemo.empty() << endl;

//     // count(value) --- O(1) average
//     cout << "Is 20 present? " << setDemo.count(20) << endl;
//     cout << "Is 100 present? " << setDemo.count(100) << endl;

//     // clear() --- O(n)
//     setDemo.clear();
//     cout << "After clear, size of unordered_set: " << setDemo.size() << endl;
//     cout << "Is unordered_set empty now? " << setDemo.empty() << endl;

//     return 0;
// }
