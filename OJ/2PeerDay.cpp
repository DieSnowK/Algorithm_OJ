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

// 排序 --> 指定快排
// class Solution
// {
// public:
//     vector<int> MySort(vector<int> &nums)
//     {
//         srand(time(nullptr)); // 种下随机数种子
//         QuickSort(nums, 0, nums.size() - 1);
//         return nums;
//     }

//     void QuickSort(vector<int> &nums, int l, int r)
//     {
//         // 1.定义递归出口
//         if (l >= r)
//         {
//             return;
//         }

//         // 2.随机选择基准元素
//         int key = nums[rand() % (r - l + 1) + l];

//         // 3.数组分三块
//         int i = l, left = l - 1, right = r + 1;
//         while (i < right)
//         {
//             if (nums[i] < key)
//             {
//                 swap(nums[++left], nums[i++]);
//             }
//             else if (nums[i] == key)
//             {
//                 i++;
//             }
//             else // nums[i] > key
//             {
//                 swap(nums[--right], nums[i]);
//             }
//         }

//         // 至此，key左边都比key小，key右边都比key大
//         // 即key已经在正确的位置上了

//         // 4.递归左右区间
//         // [l, left] [left + 1, right - 1] [right, r]
//         QuickSort(nums, l, left);
//         QuickSort(nums, right, r);
//     }
// };