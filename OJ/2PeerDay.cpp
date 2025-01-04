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

// 复写零
// class Solution
// {
// public:
//     void duplicateZeros(vector<int> &arr)
//     {
//         // cur -> current -> 当前的 dest -> destination
//         int cur = 0, dest = -1;
//         int n = arr.size();

//         // 找第一个复写的位置 -> 从后往前复写
//         while (cur < n)
//         {
//             if (arr[cur])
//             {
//                 dest++;
//             }
//             else
//             {
//                 dest += 2;
//             }

//             if (dest >= n - 1)
//             {
//                 break;
//             }

//             cur++;
//         }

//         // 边界情况处理
//         if (dest == n)
//         {
//             arr[n - 1] = 0;
//             dest -= 2;
//             cur--;
//         }

//         // 从后往前复写
//         while (cur >= 0)
//         {
//             if (arr[cur])
//             {
//                 arr[dest--] = arr[cur--];
//             }
//             else
//             {
//                 arr[dest--] = 0;
//                 arr[dest--] = 0;
//                 cur--;
//             }
//         }
//     }
// };

// 反转链表 (1)
// class Solution
// {
// public:
//     ListNode *reverseList(ListNode *head)
//     {
//         // 空链表或者只有一个节点时，直接返回
//         if (!head || !head->next)
//         {
//             return head;
//         }

//         stack<ListNode *> st;

//         // 将所有节点入栈
//         ListNode *cur = head;
//         while (cur)
//         {
//             st.push(cur);
//             cur = cur->next;
//         }

//         // 取出新的头节点
//         ListNode *newHead = st.top();
//         st.pop();

//         // 尾插
//         cur = newHead;
//         while (st.size())
//         {
//             cur->next = st.top();
//             st.pop();
//             cur = cur->next;
//         }
//         cur->next = nullptr; // 将新链表的尾节点的next置空，即断链

//         return newHead;
//     }
// };

// 最大子数组和
// class Solution
// {
// public:
//     // dp[i] : 以i位置元素为结尾的所有子数组中的最大和
//     int maxSubArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> dp(n + 1, 0);
//         dp[0] = 0;

//         int ret = -0x3f3f3f3f;
//         for (int i = 1; i <= n; i++)
//         {
//             dp[i] = max(dp[i - 1] + nums[i - 1], nums[i - 1]);
//             ret = max(ret, dp[i]);
//         }

//         return ret;
//     }
// };

// 反转链表 (2)
// class Solution
// {
// public:
//     ListNode *reverseList(ListNode *head)
//     {
//         // 出口 -> 叶子节点
//         // head == nullptr -> 避免传入的就是一个空链表
//         // head->next == nullptr -> 判断是否是叶子节点
//         if (head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         ListNode *newHead = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;

//         return newHead;
//     }
// };

// 最大子数组和
// class Solution
// {
// public:
//     // dp[i] : 以i位置元素为结尾的所有子数组中的最大和
//     int maxSubArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> dp(n + 1, 0);
//         dp[0] = 0;

//         int ret = -0x3f3f3f3f;
//         for (int i = 1; i <= n; i++)
//         {
//             dp[i] = max(dp[i - 1] + nums[i - 1], nums[i - 1]);
//             ret = max(ret, dp[i]);
//         }

//         return ret;
//     }
// };

// 用队列实现栈
// class MyStack
// {
// public:
//     MyStack()
//     {
//     }

//     void push(int x)
//     {
//         // 先往q2中压入元素
//         q2.push(x);

//         // 将q1中的元素搬移到q2中
//         while (q1.size())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         // 交换q1 && q2，维持其逻辑关系
//         swap(q1, q2);
//     }

//     int pop()
//     {
//         int x = q1.front();
//         q1.pop();
//         return x;
//     }

//     int top()
//     {
//         return q1.front();
//     }

//     bool empty()
//     {
//         return q1.empty();
//     }

// private:
//     queue<int> q1; // 模拟队列
//     queue<int> q2; // 辅助队列
// };