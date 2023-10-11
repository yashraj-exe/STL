#include<bits/stdc++.h>
using namespace std;
int main(){

    /**
     * sets only store one value {yash};
     * store only unique value
     * store in sorted order 
     * inner implementation red, black, trees
     * 
     * s.insert()  = to add value in a set  (log(n))
     * s.find("adc")  = to find value if find return iterator
     */

    // set<int> s = {5,5,5,3,3,5,5,1,6,1,1,12,3}; // store in accending order 
    // set<int, greater<int> > s1 = { 1,2,3,4,5}; // store descending order

    // auto it = s.find(5);
    // if(it != s.end()){
    //     cout<< "FIND" <<endl;
    // }else{
    //     cout<< "NOT FIND" <<endl;
    // }

    // for(auto e : s1){
    //     cout<<e;
    // }

    ////////////////////////// UNORDER_SET

    // same all functionas order set but only change is not store in sorted order and complexity is 0(1)  

    ////////////////////////// multiset
    // same as set but here we can store multiple same value {yash,yash} and complexity is 0(log(n));
    

return 0;
}