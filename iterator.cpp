#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> v = {1,2,3,4,5,6};

    // vector<int> :: iterator it = v.begin(); // v.begin points to first element 
    // v.end() = points to a last elem + 1 index which is empty or G-Value

    // cout<< *it <<endl;
    // for(it = v.begin(); it != v.end();it++){
    //     cout<<*it<<" ";
    // }

    ///////////////vector of pair
    // vector<pair<int,int>> v = {{1,2},{3,4},{5,6}};

    // vector<pair<int,int>> :: iterator it;

    // for(it = v.begin(); it != v.end(); it++){
    //     cout<<(*it).first << " " << (*it).second<<endl;
    // }
 
    //////////////// range based loop 
    // vector<int> v = {1,2,3,4,5};

    // for(int value : v){
    //     cout<<value<<" ";
    // }

    // vector<pair<int,int>> v = {{1,2},{3,4}};

    // for(pair<int,int> x : v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // ///////////////////////////
    /////////AUTO/////////////

    vector<int> v = {1,2,3,4,5};

    // vector<int> :: iterator it; // instead of this we can write in loop auto; if we write auto before it there is no need to declare iterator it assusme its datatype itself

    for(auto it = v.begin();it != v.end(); it++){
        cout<<*it<<" ";
    }







return 0;
}