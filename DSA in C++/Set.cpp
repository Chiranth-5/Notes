// #include <iostream>
// #include <set>
// using namespace std;

// // Display set elements
// void displaySet(const set<int> &lSet)
// {
//     for (set<int>::iterator it = lSet.begin(); it != lSet.end(); it++)
//     {
//         cout << *it << endl;
//     }
// }

// int main()
// {
//     set<int> setDemo;

//     /*
//     Always inserted in sorted order.
//     No duplicates allowed.
//     Implemetation: Self balancing tree. RedBlack tree.
//     */

//     // Insert elements
//     // Time Complexity: O(log n) per insert
//     setDemo.insert(10);
//     setDemo.insert(5);
//     setDemo.insert(20);
//     setDemo.insert(10);  // duplicate, ignored
//     setDemo.insert(100);
//     setDemo.insert(50);
//     setDemo.insert(200);

//     cout << "Elements in set: " << endl;
//     for (set<int>::iterator it = setDemo.begin(); it != setDemo.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     /*
//     Common operations:

//     insert(value)      --- inserts the value in sorted order. O(log n)
//     begin()            --- returns iterator to first element. O(1)
//     end()              --- returns iterator to past-the-end. O(1)
//     find(value)        --- returns iterator to value. O(log n)
//     erase(value)       --- erase by value. O(log n)
//     erase(iterator)    --- erase by iterator. O(log n)
//     erase(first,last)  --- erase range. O(k + log n), k = range length
//     count(value)       --- returns 0 or 1. O(log n)
//     size()             --- returns number of elements. O(1)
//     empty()            --- check if set is empty. O(1)
//     clear()            --- removes all elements. O(n)
//     */

//     // Time Complexity: O(log n)
//     set<int>::iterator itSample = setDemo.find(10);
//     cout << endl;
//     cout << *itSample << endl;
//     cout << endl;

//     // erase by value
//     // Time Complexity: O(log n)
//     setDemo.erase(5);  // remove 5
//     displaySet(setDemo);
//     cout << endl;

//     // erase value not present
//     // Time Complexity: O(log n) - nothing erased
//     setDemo.erase(300);
//     displaySet(setDemo);
//     cout << endl;

//     // erase by iterator
//     // Time Complexity: O(log n)
//     itSample = setDemo.find(20);
//     setDemo.erase(itSample);
//     displaySet(setDemo);
//     cout << endl;

//     // erase by range in iterator
//     // Time Complexity: O(k + log n), k = number of elements erased
//     itSample = setDemo.find(50);
//     setDemo.erase(itSample, setDemo.end());
//     displaySet(setDemo);
//     cout << endl;

//     // size() --- O(1)
//     cout << "Size of set: " << setDemo.size() << endl;

//     // empty() --- O(1)
//     cout << "Is set empty? " << setDemo.empty() << endl;

//     // count(value) --- O(log n)
//     cout << "Is 20 present? " << setDemo.count(20) << endl;
//     cout << "Is 100 present? " << setDemo.count(100) << endl;

//     // clear() --- O(n)
//     setDemo.clear();
//     cout << "After clear, size of set: " << setDemo.size() << endl;
//     cout << "Is set empty now? " << setDemo.empty() << endl;

//     return 0;
// }
