
#include <bits/stdc++.h>
using namespace std;
// ways to print a vector
// void print_vector(vector<int>::iterator begin, vector<int>::iterator end) {
//     // print the elements using iterator
//     for (auto it = begin; it != end; it++) {
//         cout << *it << " ";
//     }
//     cout << endl;
// } // print_vector(v.begin(), v.end());

// void print_vector(auto begin, auto end) {
//     // print the elements using iterator
//     for (auto it = begin; it != end; it++) {
//         cout << *it << " ";
//     }
//     cout << endl;
// } // print_vector(v.begin(),v.end())

void print_vec(auto &v)
{ // auto = vector<int> v // in this case only
    for (int elements : v)
    {
        cout << elements << " ";
    }
    cout << endl;
}

int main()
{

    /**
     * iterator = pointers
     * vector<int> :: iterator it; // this iterator only point to a vector type
     * easy way to initailize a iterator is using = auto keyword automatically detect the type
     *
     *
     * ***Iterators
     * v.begin() = points to a first element of a vector;
     * v.end() = points to a last + 1 element in a vector which is empty or a G-Value
     * v.rbegin() = Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
     * v.rend() = points to a first - 1 element in a vector which is empty or a G-Value
     *
     * ***Capacity
     * v.size() = returns current size of a vector
     * v.empty() – Returns whether the container is empty.
     *
     * ***Element access
     * v.front() = gives the first element in a vector
     * v.back() = gives the last element in a vector
     * v.at(i)  = i = index if we say v.at(1) then this print if v= {1,2,3,4} if i = 2 then v[2] = 3
     *
     * *** Modifiers
     * v.push_back() – It push the elements into a vector from the back
     * v.pop_back() – It is used to pop or remove elements from a vector from the back.
     * v.insert() – It inserts new elements before the element at the specified position
     * v.erase() – It is used to remove elements from a container from the specified position or range.
     * v.swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
     * v.clear() – It is used to remove all the elements of the vector container
     **/

    // vector<int> v = { 1,2,3,4,5};

    // for (int i = 1; i <= 5; i++)
    // {
    //     v.push_back(i);
    // }

    // vector<int> :: iterator it = v.begin(); // 1 which is first element of a vector
    // vector<int> :: iterator it = v.end(); // 9502912 = G-value

    // vector<int> :: iterator it;   // long way
    // for(it = v.begin(); it != v.end(); it++){
    //     cout<< *it <<endl;
    // }

    // easy way
    // for(auto it = v.begin(); it != v.end(); ++it){ // giving same outputs but this is a easir way to write
    //     cout<< *it <<endl;
    // }

    // print in a reverse
    // for(auto it  = v.rbegin(); it != v.rend(); ++it){ // 5,4,3,2,1
    //     cout<< *it <<endl;
    // }

    // cout << v.front() << endl; // 1
    // cout << v.back() << endl; // 5
    // cout << v.at(4) << endl; // 5

    // auto it = find(v.begin(),v.end(),4);  // this will take 3 arguments (from , to , valueToFind) if find return value other wise return v.end();
    // cout<< *it <<endl; // return 4

    // if(it != v.end()){
    //     cout<< distance(v.begin(),it) <<endl; // this will print the index of the (it) where it = our value
    // }

    // inserting

    // print_vec(v);
    // auto it = find(v.begin(),v.end(),4);

    // if(it != v.end()){
    //     cout<<"FOUND : "<< *it <<endl;
    //     // v.insert(it,10); // it will insert 10 before 4 // {1,2,3,4,5} then after insertation {1,2,3,10,4,5};
    //     v.insert(++it,10); // it will insert 10 after 4 // {1,2,3,4,5} then after insertation {1,2,3,4,10,5};
    // }else{
    //     cout<< "Element not found" <<endl;
    // }
    // print_vec(v);

    // insert at particular index
    // print_vec(v);
    // auto it = v.begin() + 4;
    // v.insert(it,100);
    // print_vec(v);

    // erasing

    // vector<int> v = {1, 2, 3, 4, 5};

    // print_vec(v);

    // auto it = find(v.begin(), v.end(), 5); // erase particular elem
    // if (it != v.end())
    // {
    //     v.erase(it);
    // }
    // v.erase(v.begin(),v.begin()+2); // delete 2 element 0,1 index
    // print_vec(v);

    ////////////////////////////////////////// // nesting of vector

    // array of vector
    // vector<int> v[5]; // here we initialize 5 vector of array every v[i] itself a vector who contains int type element

    // int S;
    // cin>>S;
    // for(int i = 0; i < S;i++){
    //     int N; // how many element wants to enter
    //     cin >> N;
    //     for(int j = 0 ; j < N ; ++j){
    //         int e; // what element want to enter
    //         cin>>e;
    //         v[i].push_back(e);
    //     }
    // }

    // for(auto vec : v){ // every vec is a vector
    //     for(int i = 0 ; i < vec.size();i++){
    //         cout<< vec[i] << " ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ; i < 5; i++){
    //     print_vec(v[i]); // every v[i] is a vector
    // }

    ///////////////////////////////////

    // vector of vector

    // vector<vector<int>> v; // now here every element of a vector is vector;

    // int S;
    // cin>>S;
    // for(int i = 0 ; i < S ; i++){
    //     int sizeOfVector;
    //     cin>>sizeOfVector;
    //     vector<int> temp;
    //     for(int j = 0 ; j < sizeOfVector; j++){
    //         int elem;
    //         cin>>elem;
    //         temp.push_back(elem);
    //     }
    //     v.push_back(temp);
    // }

    // // for(int i = 0 ; i < S ; i ++){
    // //     print_vec(v[i]);
    // // }

    // for(auto vec : v){
    //     for(auto elements : vec){
    //         cout<< elements <<" ";
    //     }
    //     cout<<endl;
    // }

    // vector of pairs

    // vector<pair<int ,int>> v;
    // int N;
    // cin >> N;

    // for(int i = 0 ; i < N; i++){
    //     int x,y;
    //     cin>>x>>y;
    //     // v.push_back({x,y});
    //     v.push_back(make_pair(x,y));
    // };

    // // way to print
    // for(auto p : v){  // here every p is a pair of a vector
    //     cout<< p.first<<" "<<p.second <<endl;
    // }

    // for(int i = 0 ; i < v.size();++i){
    //     cout<< v[i].first <<" "<<v[i].second <<endl;
    // }

    return 0;
}