#include <bits/stdc++.h>
using namespace std;
int main()
{

    /**
     * push() = add elem in front of queue
     * pop() = delete the first element in queue
     * front() = give the first element
     * back() = give the last element
     * empty()
     */

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    while(!q.empty()){
        cout<< q.front() <<endl;
        cout<< q.back() <<endl;
        q.pop();
    }

    return 0;
}