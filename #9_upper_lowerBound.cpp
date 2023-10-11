#include <bits/stdc++.h>
using namespace std;
int main()
{

    /**
     * sample a = {1,2,3,5,6};
     * Array/vector must be sorted log(n) || if not sorted 0(n) here internally use | Binnary Search | 
     * lower_bound(startPoint, endPoint, whichElement) = if we find 2 then return 2 if we find 4 then return next greater element then 4 note always return Pointer;
     * upper_bound(startPoint,eendPoint,whichElement) = if we find 2 then always return next greater element = 3 if not present then same find next greater element if we find 7 in this case return barbage value;
     * 
     * in case of set,map pair = do like this if want log(n) = s.lower_bound // uppper  || m. || p. like this not directly lower_bound or upper_bound here internally use |tree traversal|
     */

    // int a[5] = {1, 2, 3, 5, 6};

    // int *ptr = lower_bound(a, a + 5, 4);
    // int *ptr = upper_bound(a,a+5,4);

    // if (ptr == (a + 5))
    // {
    //     cout << "Not Found:- " << *ptr << endl;
    // }else{
    //     cout << *ptr << endl;
    // }
    // for (int e : a)
    // {
    //     cout << e << " ";
    // }

    vector<int> v = {1,2,3,5,6};

    // auto it = lower_bound(v.begin(),v.end(),7);
    auto it = upper_bound(v.begin(),v.end(),6);

    if(it == v.end()){
        cout<< "Not Found" <<endl;
    }

    cout<< *it <<endl;

    return 0;
}