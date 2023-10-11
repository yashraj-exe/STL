// #include <bits/stdc++.h>
// using namespace std;

// auto findNextGreater(auto &nums)
// {
//     vector<int> result(nums.size(), -1);
//     stack<int> st;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         while (!st.empty() && nums[i] > nums[st.top()])
//         {
//             result[st.top()] = nums[i];
//             st.pop();
//         }
//         st.push(i);
//     }

//     return result;
// };

// int main()
// {
//     vector<int> nums = {4, 5, 2, 25, 7, 8};
//     vector<int> nextGreater = findNextGreater(nums);

//     for(int i = 0 ; i < nums.size(); i++)
//     {
//         cout << nums[i] << " " << nextGreater[i] << endl;
    
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
auto findNextGreater(auto &nums){
    vector<int> result(nums.size());
    stack<int> st;
    for(int i= 0 ;i < nums.size();i++){
        while(!st.empty() && nums[i] > nums[st.top()]){
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        result[st.top()] = -1;
        st.pop();
    }
    return result;
}

int main(){

    vector<int> nums = {4, 5, 2, 25, 7, 8};
    vector<int> nextGreater = findNextGreater(nums);

    for(int i = 0 ; i < nums.size(); i++){
        cout<< nums[i] << " " << nextGreater[i] <<endl;
    }


return 0;
}