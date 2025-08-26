#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() 
{
    unordered_map<int,int> exp;

    exp[20] = 10;

    std::cout << exp[20];
    auto it = exp.find(20);
    std::cout << it->first << " " << it->second ;


    unordered_map<int, string> mp;
    mp[1] = "one";    // {{1, "one"}}
    mp[2] = "two";    // {{1, "one"}, {2, "two"}}
    mp[1] = "ONE";    // update: {{1, "ONE"}, {2, "two"}}

    if (mp.find(2) != mp.end()) cout << "Key 2 exists\n";

    mp.erase(1);      // {{2, "two"}}

    for (auto &p : mp) cout << p.first << " -> " << p.second << endl; // DISPLAY

}