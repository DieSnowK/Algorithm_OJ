// 两数之和
// class Solution
// {
// public:
//     // Hash -> O(N)
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         unordered_map<int, int> hash;

//         // 一边找，一边存入hash
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int tmp = target - nums[i];
//             if (hash.count(tmp))
//             {
//                 return {hash[tmp], i};
//             }

//             hash[nums[i]] = i; // 存入<element, index>
//         }

//         return {-1, -1};
//     }
// };

// 前缀和
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, q = 0;
//     cin >> n >> q;

//     vector<int> nums(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }

//     // 预处理出前缀和数组
//     vector<long long> dp(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + nums[i];
//     }

//     // 使用预处理数组
//     int l = 0, r = 0;
//     while (q--)
//     {
//         cin >> l >> r;
//         cout << dp[r] - dp[l - 1] << endl;
//     }

//     return 0;
// }