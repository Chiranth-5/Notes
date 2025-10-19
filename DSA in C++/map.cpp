// #include <iostream>
// #include <map>
// using namespace std;

// // Display map elements
// void displayMap(const map<int, string> &m)
// {
//     for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }
// }

// int main()
// {
//     map<int, string> demoMap;

//     /*
//     Map:
//     - Stores key-value pairs.
//     - Keys are unique.
//     - Sorted by key.
//     - Internally implemented using a balanced BST (Red-Black Tree).
//     */

//     // Insert elements
//     // Time Complexity: O(log n) per insert
//     demoMap.insert({10, "Ten"});
//     demoMap.insert({5, "Five"});
//     demoMap.insert({20, "Twenty"});
//     demoMap.insert({10, "Duplicate"}); // ignored because key 10 exists
//     demoMap[100] = "Hundred";           // Alternative insertion
//     demoMap[50] = "Fifty";
//     demoMap[200] = "Two Hundred";

//     cout << "Elements in map: " << endl;
//     displayMap(demoMap);
//     cout << endl;

//     /*
//     Common operations for std::map:

//     insert({key, value})   --- insert key-value pair. O(log n)
//     m[key] = value         --- insert or update value by key. O(log n)
//     begin() / end()        --- iterators to start/end. O(1)
//     find(key)              --- returns iterator to key. O(log n)
//     erase(key)             --- erase by key. O(log n)
//     erase(iterator)        --- erase by iterator. O(log n)
//     erase(first, last)     --- erase range. O(k + log n), k = elements erased
//     count(key)             --- 0 or 1, O(log n)
//     size()                 --- O(1)
//     empty()                --- O(1)
//     clear()                --- O(n)
//     */

//     // find
//     map<int, string>::iterator itSample = demoMap.find(200);
    

//     cout << itSample->first << endl;
//     cout << itSample->second << endl;
//     cout << endl;

//     // erase by key
//     // Time Complexity: O(log n)
//     demoMap.erase(5);
//     displayMap(demoMap);
//     cout << endl;

//     // erase by iterator
//     itSample = demoMap.find(20);
//     demoMap.erase(itSample);
//     displayMap(demoMap);
//     cout << endl;

//     // erase by range
//     itSample = demoMap.find(50);
//     demoMap.erase(itSample, demoMap.end());
//     displayMap(demoMap);
//     cout << endl;

//     // size() --- O(1)
//     cout << "Size of map: " << demoMap.size() << endl;

//     // empty() --- O(1)
//     cout << "Is map empty? " << demoMap.empty() << endl;

//     // count(key) --- O(log n)
//     cout << "Is key 10 present? " << demoMap.count(10) << endl;
//     cout << "Is key 100 present? " << demoMap.count(100) << endl;

//     // clear() --- O(n)
//     demoMap.clear();
//     cout << "After clear, size of map: " << demoMap.size() << endl;
//     cout << "Is map empty now? " << demoMap.empty() << endl;

//     return 0;
// }
