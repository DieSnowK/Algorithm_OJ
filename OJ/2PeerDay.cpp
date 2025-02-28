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

// 删除排序链表中的重复元素 II
// class Solution
// {
// public:
//     ListNode *deleteDuplicates(ListNode *head)
//     {
//         if (head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         // newHead是为了闭合开头就存在要删除的情况的逻辑
//         ListNode *newHead = new ListNode(0, head);
//         ListNode *cur = head, *prev = newHead;

//         while (cur)
//         {
//             bool isDel = false;

//             // 查找是否有重复元素
//             while (cur->next && cur->val == cur->next->val)
//             {
//                 cur = cur->next;
//                 isDel = true;
//             }

//             // 如果存在删除逻辑，则此处执行删除逻辑
//             if (isDel)
//             {
//                 prev->next = cur->next;
//             }
//             else
//             {
//                 prev = cur;
//             }

//             // 向后迭代
//             cur = cur->next;
//         }

//         cur = newHead->next;
//         delete newHead;

//         return cur;
//     }
// };

// 判断字符是否唯一
// class Solution 
// {
// public:
//     bool isUnique(string astr) 
//     {
//         int hash[26] = { 0 };
//         for(auto& ch : astr)
//         {
//             if (++hash[ch - 'a'] > 1)
//             {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// 二叉树的最小深度
// class Solution
// {
//     int ret = 0x3f3f3f3f;

// public:
//     int minDepth(TreeNode *root)
//     {
//         if (root == nullptr)
//         {
//             return 0;
//         }

//         DFS(root, 1);
//         return ret;
//     }

//     // 无需手动回溯, 参数自行完成了回溯工作
//     void DFS(TreeNode *root, int path)
//     {
//         if (root == nullptr)
//         {
//             return;
//         }
//         else if (root->left == nullptr && root->right == nullptr)
//         {
//             ret = min(ret, path);
//             return;
//         }
//         else
//         {
//             DFS(root->left, path + 1);
//             DFS(root->right, path + 1);
//         }
//     }
// };

// 排序 --> 指定归并
// class Solution
// {
//     vector<int> assist; // 归并时的辅助数组
// public:
//     vector<int> MySort(vector<int> &nums)
//     {
//         assist.resize(nums.size(), 0);
//         MergeSort(nums, 0, nums.size() - 1);
//         return nums;
//     }

//     void MergeSort(vector<int> &nums, int left, int right)
//     {
//         if (left >= right)
//         {
//             return;
//         }

//         // 1.选择中间点, 划分区间
//         int mid = left + (right - left) / 2;

//         // 2.排序左右区间 -> [left, mid] [mid + 1, right]
//         MergeSort(nums, left, mid);
//         MergeSort(nums, mid + 1, right);

//         // 3.合并两个有序数组
//         int i = 0, cur1 = left, cur2 = mid + 1;
//         while (cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//         }

//         // 4.处理未遍历完的数组
//         while (cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while (cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // 5.还原
//         for (int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }
//     }
// };

// 快乐数
// class Solution
// {
// public:
//     // 双指针 -> 快慢指针 -> 指针抽象为数字 -> 判环
//     bool isHappy(int n)
//     {
//         int slow = n, fast = n;

//         // 判断成环, 这一步比较关键, 否则无法判断false, 只能判断true
//         while ((slow = BitSum(slow)) != (fast = BitSum(BitSum(fast))))
//             ;

//         // 成环后, 判断是否在1处成环即可
//         return slow == 1;
//     }

//     int BitSum(int n)
//     {
//         int sum = 0;
//         while (n)
//         {
//             int tmp = n % 10;
//             sum += tmp * tmp;
//             n /= 10;
//         }

//         return sum;
//     }
// };

// 删除有序数组中的重复项
// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         // 双指针 -> 快慢指针
//         int i = 0, j = 0;
//         while (j < nums.size())
//         {
//             if (nums[i] != nums[j])
//             {
//                 nums[++i] = nums[j];
//             }

//             ++j;
//         }

//         return i + 1;
//     }
// };

// 二位前缀和
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, m = 0, q = 0;
//     cin >> n >> m >> q;

//     vector<vector<int>> nums(n + 1, vector<int>(m + 1, 0));
//     for(int i = 1; i <= n; ++i)
//     {
//         for(int j = 1; j <= m; ++j)
//         {
//             cin >> nums[i][j];
//         }
//     }

//     // dp[i][j]: dp[1][1] -- dp[i][j]的和
//     vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
//     for(int i = 1; i <= n; ++i)
//     {
//         for(int j = 1; j <= m; ++j)
//         {
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i][j];
//         }
//     }

//     // 使用前缀和数组
//     int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//     long long ret = 0;
//     while(q--)
//     {
//         cin >> x1 >> y1 >> x2 >> y2;
//         ret = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
//         cout << ret << endl;
//     }

//     return 0;
// }

// 移除链表元素
// class Solution 
// {
// public:
//     ListNode* removeElements(ListNode* head, int val) 
//     {
//         if(head == nullptr)
//         {
//             return head;
//         }

//         ListNode* newHead = new ListNode(0, head);
//         ListNode* prev = newHead, *cur = head;

//         while(cur)
//         {
//             if(cur->val == val)
//             {
//                 prev->next = cur->next;
//             }
//             else
//             {
//                 prev = cur;
//             }

//             cur = cur->next;
//         }

//         cur = newHead->next;
//         delete newHead;

//         return cur;
//     }
// };

// 将有序数组转换为二叉搜索树
// class Solution
// {
// public:
//     TreeNode *sortedArrayToBST(vector<int> &nums)
//     {
//         return DFS(nums, 0, nums.size() - 1);
//     }

//     TreeNode *DFS(vector<int> &nums, int left, int right)
//     {
//         if (left > right)
//         {
//             return nullptr;
//         }

//         int mid = (left + right) / 2;
//         TreeNode *root = new TreeNode(nums[mid]);

//         // [left, mid - 1] [mid + 1, right]
//         root->left = DFS(nums, left, mid - 1);
//         root->right = DFS(nums, mid + 1, right);

//         return root;
//     }
// };

// 最小K个数
// class Solution 
// {
// public:
    // vector<int> smallestK(vector<int>& arr, int k) 
    // {
        // sort(arr.begin(), arr.end());
        // return vector<int>(arr.begin(), arr.begin() + k);
    // }
// };

// 复杂链表的复制
// class Solution 
// {
// public:
//     Node* copyRandomList(Node* head) 
//     {
//         if(head == nullptr)
//         {
//             return head;
//         }

//         unordered_map<Node*, Node*> hash; // <old, new>
//         Node* cur = head;

//         // 1.存储映射关系
//         while(cur)
//         {
//             hash[cur] = new Node(cur->val);
//             cur = cur->next;
//         }

//         // 2.构建指向关系
//         cur = head;
//         while(cur)
//         {
//             hash[cur]->next = hash[cur->next];
//             hash[cur]->random = hash[cur->random];
//             cur = cur->next;
//         }

//         return hash[head];
//     }
// };

// 无重复字符的最长子串
// class Solution 
// {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {
//         int len = 0, n = s.size();
//         unordered_map<char, int> hash;

//         // 滑动窗口
//         int left = 0, right = 0;
//         while(right < n)
//         {
//             // 1.进窗口
//             hash[s[right]]++;

//             // 2.判断/出窗口
//             while(hash[s[right]] > 1)
//             {
//                 hash[s[left++]]--;
//             }

//             // 3.更新
//             len = max(len, right - left + 1);
//             right++;
//         }

//         return len;
//     }
// };

// 二叉树的最大深度
// class Solution 
// {
//     int ret = 0;
// public:
//     int maxDepth(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return 0;
//         }

//         DFS(root, 1);
//         return ret;
//     }

//     void DFS(TreeNode* root, int path)
//     {
//         if(root == nullptr)
//         {
//             return;
//         }
        
//         if(root->left == nullptr && root->right == nullptr)
//         {
//             ret = max(ret, path);
//             return;
//         }

//         DFS(root->left, path + 1);
//         DFS(root->right, path + 1);
//     }
// };

// 排序 -> 指定堆排序
// class Solution 
// {
// public:
//     vector<int> MySort(vector<int>& nums) 
//     {
//         HeapSort(nums);
//         return nums;
//     }

//     // 升序: 建大堆; 降序: 建小堆
//     void HeapSort(vector<int>& nums)
//     {
//         int n = nums.size();
        
//         // 1.建堆: 从最后一个非叶子节点开始，向下调整
//         for(int i = (n - 1 - 1) / 2; i >= 0; i--)
//         {
//             AdjustDown(nums, n, i);
//         }

//         // 2.堆排序
//         int end = nums.size() - 1;
//         while(end > 0)
//         {
//             swap(nums[0], nums[end]);
//             AdjustDown(nums, end--, 0);
//         }
//     }

//     // 向下调整前提: 左右子树必须是小/大堆
//     void AdjustDown(vector<int>& nums, int size, int parent)
//     {
// 		int child = parent * 2 + 1;
//         while(child < size)
//         {
//             // 找到左右孩子中较大的
//             if(child + 1 < size && nums[child + 1] > nums[child])
//             {
//                 child++;
//             }
            
//             // 比较父子节点
//             if(nums[child] > nums[parent])
//             {
//                 swap(nums[child], nums[parent]);
//                 parent = child;
//                 child = parent * 2 + 1;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
// };

// 盛最多水的容器
// class Solution 
// {
// public:
//     int maxArea(vector<int>& height) 
//     {
//         int n = height.size(), maxV = 0;

//         // 双指针
//         int left = 0, right = n - 1;
//         while(left < right)
//         {
//             maxV = max(maxV, min(height[left], height[right]) * (right - left));
//             if(height[left] < height[right])
//             {
//                 left++;
//             }
//             else
//             {
//                 right--;
//             }
//         }

//         return maxV;
//     }
// };

// 移除元素
// class Solution 
// {
// public:
//     int removeElement(vector<int>& nums, int val) 
//     {
//         // 双指针
//         int left = 0, right = 0;
//         while(right < nums.size())
//         {
//             if(nums[right] != val) // 找到要替换的元素
//             {
//                 nums[left++] = nums[right];
//             }

//             right++;
//         }

//         return left;
//     }
// };

// 寻找数组的中心下标
// class Solution
// {
// public:
//     int pivotIndex(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> dp(n + 1, 0);

//         // 1.前缀和 [0, i]
//         for (int i = 1; i <= n; i++)
//         {
//             dp[i] = dp[i - 1] + nums[i - 1];
//         }

//         // 2.枚举中点 i -> i - 1
//         for (int i = 1; i <= n; i++)
//         {
//             if (dp[i - 1] == (dp[n] - dp[i]))
//             {
//                 return i - 1;
//             }
//         }

//         return -1;
//     }
// };

// 相交链表 -> 哈希
// class Solution 
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
//     {
//         unordered_set<ListNode*> hash;
        
//         ListNode* cur = headA;
//         while(cur)
//         {
//             hash.insert(cur);
//             cur = cur->next;
//         }

//         cur = headB;
//         while(cur)
//         {
//             if(hash.count(cur))
//             {
//                 return cur;
//             }
//             cur = cur->next;
//         }

//         return nullptr;
//     }
// };

// 相交链表 -> 双指针
// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         if (headA == nullptr || headB == nullptr)
//         {
//             return nullptr;
//         }

//         // 每步操作, 同时更新cur1, cur2
//         ListNode *cur1 = headA, *cur2 = headB;
//         while (cur1 != cur2)
//         {
//             cur1 = cur1 == nullptr ? headB : cur1->next;
//             cur2 = cur2 == nullptr ? headA : cur2->next;
//         }

//         return cur1;
//     }
// };

// 寻找目标值
// class Solution 
// {
// public:
//     bool findTargetIn2DPlants(vector<vector<int>>& plants, int target) 
//     {
//         // 将矩阵从顶点出发, 看成二叉搜索树
//         int i = plants.size() - 1, j = 0;
//         while(i >= 0 && j < plants[0].size())
//         {
//             if(plants[i][j] > target)
//             {
//                 i--;
//             }
//             else if(plants[i][j] < target)
//             {
//                 j++;
//             }
//             else
//             {
//                 return true;
//             }
//         }

//         return false;
//     }
// };

// 图书整理 II -> 用栈实现队列
// class CQueue
// {
// public:
//     CQueue() 
//     {}
    
//     void appendTail(int value) // 直接入栈
//     {
//         st1.push(value);
//     }
    
//     int deleteHead() 
//     {
//         if(st2.size()) // 若输出栈此时有元素, 直接出栈
//         {
//             int x = st2.top();
//             st2.pop();
//             return x;
//         }

//         if(st1.empty())
//         {
//             return -1;
//         }

//         while(st1.size()) // 倒叙输入栈至输出栈
//         {
//             st2.push(st1.top());
//             st1.pop();
//         }

//         int x = st2.top();
//         st2.pop();
//         return x;
//     }
    
// private:
//     stack<int> st1; // 输入栈 -> 栈底元素对应队首元素
//     stack<int> st2; // 输出栈 -> 倒序输入栈, 此时栈顶对应队首元素
// };

// 前 K 个高频元素
// class Solution 
// {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) 
//     {
//         // 1.统计元素出现频次
//         unordered_map<int, int> hash;
//         for(auto x : nums)
//         {
//             hash[x]++;
//         }

//         // 2.TOPK
//         priority_queue<pair<int, int>> heap;
//         for(auto& iter : hash)
//         {
//             heap.push({iter.second, iter.first});
//         }

//         vector<int> ret;
//         while(k--)
//         {
//             ret.push_back(heap.top().second);
//             heap.pop();
//         }

//         return ret;
//     }
// };

// 环形链表
// class Solution 
// {
// public:
//     bool hasCycle(ListNode *head) 
//     {
//         if(head == nullptr || head->next == nullptr)
//         {
//             return false;
//         }

//         ListNode *slow = head, *fast = head->next; // 细节
//         while(slow != fast) // 细节, 条件先于循环体
//         {
//             if(fast == nullptr || fast->next == nullptr)
//             {
//                 return false;
//             } 

//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return true;
//     }
// };

// 二叉树的最近公共祖先 -> LCA
// 方法一：DFS
// class Solution
// {
//     TreeNode *ret = nullptr;

// public:
//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         DFS(root, p, q);
//         return ret;
//     }

//     bool DFS(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         if (root == nullptr)
//         {
//             return false;
//         }

//         // 1.子树中是否包含 p节点 或 q节点?
//         bool left = DFS(root->left, p, q);
//         bool right = DFS(root->right, p, q);

//         // 2.(p q分别位于左右子树中) || (一个节点为root && 一个节点在其中一个子树中)
//         if ((left && right) ||
//             ((root->val == p->val || root->val == q->val) && (left || right)))
//         {
//             ret = root;
//         }

//         // 3.该子树是否有 p 或 q
//         return left || right || (root->val == p->val || root->val == q->val);
//     }
// };

// 二叉树的最近公共祖先 -> LCA
// 方法二: 存储父节点判断
// class Solution
// {
//     unordered_map<TreeNode *, TreeNode *> parent; // <child, parent>
//     unordered_set<TreeNode *> visit;

// public:
//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         // 1.建立子父节点映射关系
//         parent[root] = nullptr; // 细节, 构造循环结束条件
//         DFS(root);

//         // 2.向上扫描p的父节点
//         while (p)
//         {
//             visit.insert(p); // 细节, 自己本身也是要被扫描的
//             p = parent[p];
//         }

//         // 3.向上扫描q的父节点, 寻找和p重合的最近父节点
//         while (q)
//         {
//             if (visit.count(q))
//             {
//                 return q;
//             }

//             q = parent[q];
//         }

//         return nullptr;
//     }

//     void DFS(TreeNode *root)
//     {
//         if (root->left)
//         {
//             parent[root->left] = root;
//             DFS(root->left);
//         }

//         if (root->right)
//         {
//             parent[root->right] = root;
//             DFS(root->right);
//         }
//     }
// };

// 主持人调度
// class Solution 
// {
// public:
//     bool hostschedule(vector<vector<int>>& schedule) 
//     {
//         sort(schedule.begin(), schedule.end());

//         for(int i = 1; i < schedule.size(); i++)
//         {
//             if(schedule[i][0] < schedule[i - 1][1])
//             {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// 有效三角形的个数
// class Solution
// {
// public:
//     // 双指针 + 贪心 -> 两短边之和 > 最长边
//     int triangleNumber(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());

//         int cnt = 0;
//         for (int max = nums.size() - 1; max >= 2; max--) // 固定最大数
//         {
//             int left = 0, right = max - 1;
//             while (left < right)
//             {
//                 if (nums[left] + nums[right] > nums[max]) // 可以组成
//                 {
//                     cnt += right - left;
//                     right--;
//                 }
//                 else // 不可以组成
//                 {
//                     left++;
//                 }
//             }
//         }

//         return cnt;
//     }
// };

// 合并两个有序数组
// class Solution 
// {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//     {
// 	    // 双指针
//         vector<int> tmp;
//         int cur1 = 0, cur2 = 0;

//         while(cur1 < m && cur2 < n)
//         {
//             tmp.push_back(nums1[cur1] < nums2[cur2] ? nums1[cur1++] : nums2[cur2++]);
//         }

//         while(cur1 < m)
//         {
//             tmp.push_back(nums1[cur1++]);
//         }

//         while(cur2 < n)
//         {
//             tmp.push_back(nums2[cur2++]);
//         }

//         swap(nums1, tmp);
//     }
// };

// 和可被 K 整除的子数组
// class Solution 
// {
// public:
// 	// 在[0, i - 1]区间内，有多少个前缀和的余数等于(sum % k + k) % k
//     int subarraysDivByK(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash; // <前缀和余数, 次数>
//         hash[0] = 1;

//         int sum = 0, ret = 0; // 用于标记前一个位置的前缀和
//         for(auto& e : nums)
//         {
//             sum += e; // 计算当前位置的前缀和

//             int tmp = (sum % k + k) % k; // 修正后的余数
//             if(hash.count(tmp))
//             {
//                 ret += hash[tmp];
//             }

//             hash[tmp]++; // 将i位置的前缀和的余数入hash
//         }

//         return ret;
//     }
// };

// 分割链表
// class Solution
// {
// public:
//     ListNode *partition(ListNode *head, int x)
//     {
//         if (head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         ListNode *newHead = new ListNode(0, head);
//         ListNode *less = new ListNode(0);
//         ListNode *cur = head, *prev = newHead, *lessTail = less;

//         while (cur)
//         {
//             if (cur->val < x)
//             {
//                 lessTail->next = cur;
//                 lessTail = lessTail->next;
//                 prev->next = cur->next;
//             }
//             else
//             {
//                 prev = cur;
//             }

//             cur = cur->next;
//         }

//         lessTail->next = newHead->next;
//         cur = less->next == nullptr ? newHead->next : less->next;

//         delete less;
//         delete newHead;

//         return cur;
//     }
// };

// 交易逆序对的总数
// class Solution 
// {
//     vector<int> assist;
// public:
//     int reversePairs(vector<int>& nums) 
//     {
//         assist.resize(nums.size());
//         return MergeSort(nums, 0, nums.size() - 1);
//     }

//     int MergeSort(vector<int>& nums, int left, int right)
//     {
//         if(left >= right)
//         {
//             return 0;
//         }

//         int ret = 0;
//         // 选择中点，划分数组
//         int mid = left + (right - left) / 2;

//         // 左边的个数 + 排序 + 右边的个数 + 排序
//         // [left, mid] [mid + 1, right]
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // 一左一右的个数 + 排序
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             if(nums[cur1] <= nums[cur2])
//             {
//                 assist[i++] = nums[cur1++];
//             }
//             else
//             {
//                 ret += mid - cur1 + 1;
//                 assist[i++] = nums[cur2++];
//             }
//         }

//         // 处理未遍历完的数组
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // 还原
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }

//         return ret;
//     }
// };