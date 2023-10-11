#include <bits/stdc++.h>
using namespace std;
int main()
{

    // pair<int, string> p(1,"3"); // make pair and initialize 
    pair<int, string> p;

    p = make_pair(1, "yash");

    // cout<< p.first <<endl;
    // cout<< p.second <<endl;

    // second way
    pair<int, string> p1;

    p1 = {1, "yash"};
    // cout<< p1.first <<endl;
    // cout<< p1.second <<endl;

    /*//////////////////////////////////////////////////////////////////

    // In this case arr1 index accociated with arr2 index in we do anythig in arr1 automatically happens in arr2 that way we make a pair of aar1, arr2

        int arr1 [] = {1,2,3};
        int arr2 [] = {2,3,4};

        pair<int,int> p_array[3];

        p_array[0] = {1,2};
        p_array[1] = {2,3};
        p_array[2] = {3,4};

        swap(p_array[0],p_array[2]);

        for(int i = 0; i < 3; i ++){
            cout<< p_array[i].first <<" "<<p_array[i].second<<endl;
        }

    // ///////////////////////////////////////////////////////////////*/
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};

    pair<int, int> p_array[3];


    for(int i = 0 ; i < 3; i++){
        p_array[i].first = arr1[i];
        p_array[i].second = arr2[i];
    }

    swap(p_array[0],p_array[2]);

    for(int i = 0 ; i < 3; i++){
        cout<< p_array[i].first <<" "<<p_array[i].second<<endl;
    }


    return 0;
}