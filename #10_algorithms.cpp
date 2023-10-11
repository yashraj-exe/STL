#include <bits/stdc++.h>
using namespace std;
int main()
{

    /**
     *  min_element(startPosition, endPosition); = return minimum element in a array/vector 0(n)
     *  max_element(startPosition, endPosition); = return maximum element in a array/vector 0(n)
     *  accumulate(startPosition, endPosition, initialValue); = return sum of a array/vector 0(n)
     *  count(startPosition, endPosition, value) = return number of occurence of value in array/vector; 0(n)
     *  find(startPosition, endPosition, value) = find element 0(n) but in case of sets and map complexity in log(n)
     *  reverse(startPosition, endPosition) = reverse array/vector/string 0(n)
     *
     * LAMDA FUNCTIONS
     * [](int x){return x + 2;}(2)   = ()=calling a function he returns a 4
     *
     * all_of(startPosition, endPosition, function) = if all of array/vector elements meet specific condition then returns 1 else 0
     * any_of(startPosition, endPosition,function) = if any one element meet specific condition then return 1 else 0
     * none_of(startPosition, endPosition,function) = if all elements meet specific condition then return 1 else 0
     *
     */

    // vector<int> v = {1,1,1,2,2,2,3,4,5};

    // auto it = min_element(v.begin(),v.end());
    // cout<< *it <<endl;

    // or directy put *

    // int min = *min_element(v.begin(),v.end());
    // int max = *max_element(v.begin(),v.end());
    // int sum = accumulate(v.begin(),v.end(),0); // if we pass 5 instead of 0 then |all elements sum + initaialValue = 15 + 5 = 20|
    // int ct = count(v.begin(),v.end(),1); // return number of occurence of value in a array
    // reverse(v.begin(),v.end()); // reverse intire array/vector/string || do same thing in string case

    // string s = "yash";
    // reverse(s.begin(),s.end());
    // cout<< min <<endl;
    // cout<< max <<endl;
    // cout<< sum <<endl;
    // cout<< ct <<endl;

    // auto x = [](int x){return x + 2;};
    // cout<< x(2) <<endl;

    // vector<int> v = {-1,-2,-3};

    // cout<< all_of(v.begin(),v.end(),[](int x){return x > 0;}) <<endl; // return 1 if all elements E > 0 else 0
    // cout<< any_of(v.begin(), v.end(),[](int x){return x > 0;}) <<endl; // if any element is E > 0 any one element then return 1 else 0;

    // cout<< none_of(v.begin(),v.end(),[](int x){return x > 0;}) <<endl; // if any element E > 0 return 0 else 1

    

    return 0;
}