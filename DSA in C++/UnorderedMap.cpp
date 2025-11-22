// #include <iostream>
// #include <unordered_map>
// using namespace std;

// // Display unordered_map elements
// void displayUnorderedMap(const unordered_map<int, string> &m)
// {
//     for (unordered_map<int, string>::const_iterator it = m.begin(); it != m.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }
// }

// int main()
// {
//     unordered_map<int, string> demoMap;

//     /*
//     Unordered map:
//     - Stores key-value pairs.
//     - Keys are unique.
//     - No specific order of elements.
//     - Internally implemented using a hash table.
//     */

//     // Insert elements
//     // Average Time Complexity: O(1) per insert
//     // Worst-case: O(n) if rehashing occurs
//     demoMap.insert({10, "Ten"});
//     demoMap.insert({5, "Five"});
//     demoMap.insert({20, "Twenty"});
//     demoMap.insert({10, "Duplicate"}); // ignored because key 10 exists
//     demoMap[100] = "Hundred";           // alternative insertion
//     demoMap[50] = "Fifty";
//     demoMap[200] = "Two Hundred";
//     demoMap[105].append("One hundred fify");

//         // Key 105 does not exist yet.
//         // demoMap[105] creates a new entry with default value "" (empty string).
//         // .append("One hundred fifty") concatenates the string to the empty string.

//     cout << "Elements in unordered_map: " << endl;
//     displayUnorderedMap(demoMap);
//     cout << endl;

//     /*
//     Common operations for unordered_map:

//     insert({key,value})  --- insert key-value pair. O(1) average, O(n) worst-case
//     m[key] = value       --- insert or update value. O(1) average
//     begin()/end()        --- iterators to start/end. O(1)
//     find(key)            --- returns iterator to key. O(1) average, O(n) worst-case
//     erase(key)           --- erase by key. O(1) average, O(n) worst-case
//     erase(iterator)      --- erase by iterator. O(1) average
//     count(key)           --- 0 or 1, O(1) average
//     size()               --- O(1)
//     empty()              --- O(1)
//     clear()              --- O(n)
//     */

//     // find
//     unordered_map<int, string>::iterator itSample = demoMap.find(10);
//     cout << "Find key 10: ";
//     if (itSample != demoMap.end())
//         cout << itSample->first << " : " << itSample->second << endl;
//     cout << endl;

//     // erase by key
//     // Average Time Complexity: O(1)
//     demoMap.erase(5);  // remove key 5
//     displayUnorderedMap(demoMap);
//     cout << endl;

//     // erase by iterator
//     itSample = demoMap.find(20);
//     if (itSample != demoMap.end())
//         demoMap.erase(itSample);
//     displayUnorderedMap(demoMap);
//     cout << endl;

//     // size() --- O(1)
//     cout << "Size of unordered_map: " << demoMap.size() << endl;

//     // empty() --- O(1)
//     cout << "Is unordered_map empty? " << demoMap.empty() << endl;

//     // count(key) --- O(1) average
//     cout << "Is key 10 present? " << demoMap.count(10) << endl;
//     cout << "Is key 100 present? " << demoMap.count(100) << endl;

//     // clear() --- O(n)
//     demoMap.clear();
//     cout << "After clear, size of unordered_map: " << demoMap.size() << endl;
//     cout << "Is unordered_map empty now? " << demoMap.empty() << endl;

//     return 0;
// }
