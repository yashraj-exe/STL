#include <bits/stdc++.h>
using namespace std;
// Using stack we are doing this in 0(n)



// string isValid(string brackets)
// {
//     stack<char> s;
//     for (char ch : brackets)
//     {
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             s.push(ch);
//         }
//         else
//         {
//             if (s.empty())
//                 return "NO";
//             char top = s.top();
//             // cout<< top <<endl;
//             s.pop();
//             if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == '}' && top != '{'))
//                 return "NO";
//         }
//     }
//     if (!s.empty())
//         return "NO";
//     return "YES";
// };

// optimized version

unordered_map<int,int> brackets = {{'(',-1},{'{',-2},{'[',-3},{']',3},{'}',2},{')',1}};

string isValid(string s){

    stack<char> st;
    for(char ch : s){
        if(brackets[ch] < 0){ // this means open brackets (, {, [
            st.push(ch);
        }else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(brackets[top] + brackets[ch] != 0) return "NO";
        }
    }

    cout<< st.empty() <<endl;
    cout<< !st.empty() <<endl;
    if(!st.empty()) return "NO";
    return "YES";

}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}




