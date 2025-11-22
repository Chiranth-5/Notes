// #include <iostream>
// #include <vector>
// using namespace std;


// // The idea of an iterator is to help traverse across all data structures in a uniform way.

// // 1. vector
// // - Stores elements in contiguous memory.
// // - Iterator is basically a wrapper around a pointer.
// // - Moving to the next element is like pointer arithmetic (++), very fast O(1).

// // 2. set
// // - Usually implemented as a balanced binary search tree (Red-Black Tree).
// // - Elements are not contiguous.
// // - Iterator cannot just wrap a pointer. It stores a pointer to a tree node and uses in-order traversal logic (++ operator) to go to the next element.
// // - Comparison operator != and dereference operator * are overloaded for uniform access.
// // - Time complexity of ++it: O(log n) worst-case, O(1) amortized per element over full traversal

// // 3. unordered_map
// // - Implemented using a hash table (buckets with linked lists or similar structures).
// // - Iterator stores a pointer/reference to the current element and possibly a pointer to the hash bucket.
// // - Moving to the next element (++ operator) involves traversing the current bucket, and if the end of the bucket is reached, moving to the next non-empty bucket.
// // - Provides pointer-like access to key-value pairs (*it returns std::pair<const Key, Value>).
// // - Time complexity of ++it: O(1) average, O(n) worst-case depending on hash collisions


// int main() {
//     vector<int> nums = {10, 20, 30, 40};

//     int* x = &nums[0];           // pointer to first element
//     vector<int>::iterator it = nums.begin();  // iterator to first element
//     vector<int>::iterator it1 = nums.end();  // iterator to first element


//     cout << *x << endl;  // prints 10
//     cout << *it << endl; // prints 10
//     cout << *it1 << endl; // prints 10

//     cout << x << endl;  // prints address of first element
//     cout << &(*it) << endl; // prints address of first element
//     cout << &(*it++) << endl;
//     cout << &(*it1) << endl; 

//     string s = "hello";
//     for (auto it = s.begin(); it != s.end(); ++it) 
//     {
//     char c = *it;
//     // use c
//     }
//     for (char c : s) //this is same as above
//     {
//     // use c
//     }

//     return 0;
// }