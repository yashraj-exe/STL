#include <bits/stdc++.h>
using namespace std;
int main()
{

    /**
     * FIFO = First in last out;
     * push = on top,
     * pop = remove top element,
     * top = show top element,
     * empty()  = show is stack empty or not
     * size()  = return size of stack
     */

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<< "IS Empty:- "<< s.empty() <<endl;
    cout<< "Size:- "<< s.size() <<endl;

    while (!s.empty())
    {
        cout<< s.top() <<endl;
        s.pop();
    }
    cout<< "IS Empty:- "<< s.empty() <<endl;
    cout<< "Size:- "<< s.size() <<endl;

    return 0;
}