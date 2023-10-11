#include <bits/stdc++.h>
using namespace std;

void print_m(auto &m){
    auto it = m.begin();
    while (it != m.end())
    {
        cout<< it->first<< " "<< it->second <<endl;
        ++it;
    }

    // for(auto it = m.begin(); it != m.end(); ++it){
    //     cout<< it->first<<" "<< it->second <<endl;
    // }
    
}
int main()
{

    /**
     * store data in key,value pair with sorted order in (map) only.
     * maps internal implementation using red,black,trees;
     * if we put key name in string then this store in lexographical order = dictionary
     * 
     * m[]  = operator[] replaces the value associated with the key if the key already exists in the map. If the key does not exist in the map, operator[] inserts a new key-value pair into the map 
     * 
     * insert()  : inserts a new key-value pair into the map only if the key does not exist in the map. If the key already exists in the map, insert() does not modify the value associated with the key
     * 
     * if our key in string then complexity = s.size() * log(n)
     * Conplexity
     *
     * insertion : o(log(n))
     * access    : o(log(n))
     * m.size()      : o(1)
     * 
     * Methods
     * m.find()  : o(log(n))
     * m.erase() : o(log(n))
     * m.insert() : 0(log(n))
     * 
     */

    // map<int,string> m;

    // m[1] = "yash";
    // m[2] = "soni";

    // cout<< m[1] <<endl; // "yash"

    // auto it = m.begin();

    // cout<< it->first <<endl; // we can print map value by using -> operator ->first gives us key and ->second gives us value

    // while(it != m.end()){
    //     cout<< it->first << " "<< it->second <<endl;
    //     it++;
    // }
    // for(it; it != m.end(); ++it){
    //     cout<< it->first << " "<< it->second <<endl;
    // }

    ///////////// find 
    // auto it = m.find(1);  here 1 = key name

    // if(it != m.end()){
    //     cout<<it->second;
    // }else{
    //     cout<< "Not f" <<endl;
    // }

    // erase

    // print_m(m);
    // auto it = ++m.begin();
    // m.erase(it);
    // print_m(m);

    // m.erase(2) // 2 = key name 

////////////////////////////////////////////

    // map<int,int> m;

    // m.insert(make_pair(1, "one"));
    // m.insert(pair<int, int>(1, 40)); both are same first they make pair and insert in map
    
    // m.insert(pair<int, int>(1, 40));
    // m.insert(pair<int, int>(2, 3000));
    // m.insert(pair<int, int>(3, 60));
    // m.insert(pair<int, int>(4, 20));
    // m.insert(pair<int, int>(5, 50));
    // m.insert(pair<int, int>(6, 500));  // this is not overwrite value if same key prevent previous one 

    // m[1] = 3;
    // m[1] = 2; this overwrite the value of 1 to 2 

    // m.erase(3) // delete name = 3 key,value 
    // m.erase(m.begin(),m.find(3)); // this means find three and delete all previous ones

    

    // print_m(m);


    /////////////////////////////////// UNORDER_MAP

    /**
     * in built implementation using hash algo
     * not store in order
     * inserting = 0(1);
     * access = 0(1)
     * find()  - 0(1)
     * erase()  = 0(1)
    */
    unordered_map<int,int> m;

    m[1] = 3;
    m[3] = 3;
    m[5] = 3;
    m[8] = 3;
    m[2] = 3;
    print_m(m);

    return 0;
}