#include <iostream>
using namespace std;

int main() 
{
    std::stack <int> st;

    cout << st.size() << endl; // O(1);
    
    st.push(5);
    cout << st.size() << endl; //O(1);
    cout << st.top() << endl;  //O(1);
    cout << st.empty() << endl;//O(1);
    st.pop();
    // cout << st.top() << endl; // undeined behavior O(1)
    cout << st.empty() << endl; //O(1)

}