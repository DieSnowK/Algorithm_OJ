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

// 招式拆解 II
// class Solution
// {
// public:
//     char dismantlingAction(string arr)
//     {
//         // 有序哈希表 -> 依赖于一个额外的数组
//         vector<char> keys;
//         unordered_map<char, bool> hash;

//         for (auto ch : arr)
//         {
//             if (!hash.count(ch))
//             {
//                 keys.push_back(ch);
//             }

//             hash[ch] = !hash.count(ch);
//         }

//         for (auto ch : keys)
//         {
//             if (hash[ch])
//             {
//                 return ch;
//             }
//         }

//         return ' ';
//     }
// };

// 移掉 K 位数字
// class Solution
// {
// public:
//     string removeKdigits(string num, int k)
//     {
//         vector<char> st; // 用数组模拟栈, 避免翻转操作

//         // 1.贪心 + 单调栈
//         for (auto &x : num)
//         {
//             while (st.size() && st.back() > x && k)
//             {
//                 st.pop_back();
//                 k--;
//             }
//             st.push_back(x);
//         }

//         // 2.处理剩余元素
//         while (k--)
//         {
//             st.pop_back();
//         }

//         // 3.构造结果 + 处理前导0
//         string ret = "";
//         bool flag = true;
//         for (auto &x : st)
//         {
//             if (flag && x == '0') // 处理前导0
//             {
//                 continue;
//             }

//             flag = false;
//             ret += x;
//         }

//         return ret == "" ? "0" : ret;
//     }
// };

// 最长回文串
// class Solution 
// {
// public:
//     int longestPalindrome(string s) 
//     {
//         unordered_map<char, int> hash;
//         for(const auto ch : s)
//         {
//             hash[ch]++;
//         }

//         int len = 0;
//         bool flag = false;
//         for(auto iter = hash.begin(); iter != hash.end(); iter++)
//         {
//             if(iter->second % 2 == 1)
//             {
//                 flag = true;
//             }

//             len += (iter->second / 2) * 2;
//         }

//         if(flag)
//         {
//             len += 1;
//         }

//         return len;
//     }
// };

// 最小高度树
// class Solution
// {
// public:
//     vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
//     {
//         // 1.建图 -> 构建图的逻辑结构 + 入度表
//         vector<vector<int>> graph(n);
//         vector<int> in(n, 0);
//         for (const auto &edge : edges)
//         {
//             int x = edge[0], y = edge[1]; // x <--> y

//             // 图的逻辑结构(无向图) -> 谁连接了谁
//             graph[x].push_back(y);
//             graph[y].push_back(x);

//             // 入读表 -> 有多少节点连向它
//             in[x]++, in[y]++;
//         }

//         // 2.将所有入度为1的点入队列
//         queue<int> q;
//         for (int i = 0; i < n; i++)
//         {
//             if (in[i] == 1)
//             {
//                 q.push(i);
//             }
//         }

//         // 3.BFS
//         int maxDepth = 0;
//         vector<int> depth(n, 0);
//         while (q.size())
//         {
//             int size = q.size();
//             while (size--) // 控制一层一层出
//             {
//                 int u = q.front();
//                 q.pop();

//                 // 修改与该点相连接的入度
//                 for (const auto &v : graph[u])
//                 {
//                     if (--in[v] == 1)
//                     {
//                         q.push(v);
//                         depth[v] = depth[u] + 1;
//                         maxDepth = max(maxDepth, depth[v]);
//                     }
//                 }
//             }
//         }

//         // 4.取结果
//         vector<int> ret;
//         for (int i = 0; i < n; i++)
//         {
//             if (depth[i] == maxDepth)
//             {
//                 ret.push_back(i);
//             }
//         }

//         return ret;
//     }
// };

// 两个数组的交集
// class Solution
// {
// public:
//     vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> ret;
//         unordered_set<int> hash;

//         for (const auto &x : nums1)
//         {
//             if (!hash.count(x))
//             {
//                 hash.insert(x);
//             }
//         }

//         for (const auto &x : nums2)
//         {
//             if (hash.count(x))
//             {
//                 hash.erase(x);
//                 ret.push_back(x);
//             }
//         }

//         return ret;
//     }
// };

// 最大连续1的个数 III
// class Solution
// {
// public:
//     int longestOnes(vector<int> &nums, int k)
//     {
//         // 问题转化: 子数组内, 0的个数不超过k
//         int maxLen = 0, cnt = 0;

//         for (int left = 0, right = 0; right < nums.size(); right++)
//         {
//             // 1.入窗口
//             if (nums[right] == 0)
//             {
//                 cnt++;
//             }

//             // 2.判断 + 出窗口
//             while (cnt > k)
//             {
//                 if (nums[left++] == 0)
//                 {
//                     cnt--;
//                 }
//             }

//             // 3.更新数据
//             maxLen = max(maxLen, right - left + 1);
//         }

//         return maxLen;
//     }
// };

// 丢失的数字
// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int tmp = 0;
//         for (int i = 0; i <= nums.size(); i++)
//         {
//             tmp ^= i;
//         }

//         for (const auto &x : nums)
//         {
//             tmp ^= x;
//         }

//         return tmp;
//     }
// };

// 连续数组
// class Solution
// {
// public:
//     int findMaxLength(vector<int> &nums)
//     {
//         unordered_map<int, int> hash; // <前缀和, 下标> -> 存[0, i - 1]位置的前缀和
//         hash[0] = -1;                 // 默认有一个前缀和为0的情况

//         int sum = 0, len = 0; // 标记前一次的前缀和
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i] == 0 ? -1 : 1;

//             if (hash.count(sum))
//             {
//                 len = max(len, i - hash[sum]); // 更新最大长度
//             }
//             else
//             {
//                 hash[sum] = i; // 将<sum, i>入hash, 此处会保证, 只会存入从未出现过的前缀和
//             }
//         }

//         return len;
//     }
// };

// 逆波兰表达式求值
// class Solution
// {
// public:
//     int evalRPN(vector<string> &tokens)
//     {
//         stack<int> st;
//         for (const auto &str : tokens)
//         {
//             if (str == "+" || str == "-" || str == "*" || str == "/")
//             {
//                 int x2 = st.top();
//                 st.pop();
//                 int x1 = st.top();
//                 st.pop();

//                 int ret = 0;
//                 if (str == "+")
//                 {
//                     ret = x1 + x2;
//                 }
//                 else if (str == "-")
//                 {
//                     ret = x1 - x2;
//                 }
//                 else if (str == "*")
//                 {
//                     ret = x1 * x2;
//                 }
//                 else if (str == "/")
//                 {
//                     ret = x1 / x2;
//                 }

//                 st.push(ret);
//             }
//             else
//             {
//                 st.push(stoi(str));
//             }
//         }

//         return st.top();
//     }
// };

// 螺旋矩阵
// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {
//         if (matrix.size() == 0 || matrix[0].size() == 0)
//         {
//             return {};
//         }

//         // 控制4个指针, 来限制遍历范围
//         int colBegin = 0, colEnd = matrix[0].size() - 1; // 控制列行为
//         int rowBegin = 0, rowEnd = matrix.size() - 1;    // 控制行行为

//         vector<int> ret;
//         while (1) // -> 爱滴魔力转圈圈~
//         {
//             for (int i = colBegin; i <= colEnd; i++) // 从左往右
//             {
//                 ret.push_back(matrix[rowBegin][i]);
//             }
//             if (++rowBegin > rowEnd)
//             {
//                 break;
//             }

//             for (int i = rowBegin; i <= rowEnd; i++) // 从上往下
//             {
//                 ret.push_back(matrix[i][colEnd]);
//             }
//             if (--colEnd < colBegin)
//             {
//                 break;
//             }

//             for (int i = colEnd; i >= colBegin; i--) // 从右往左
//             {
//                 ret.push_back(matrix[rowEnd][i]);
//             }
//             if (--rowEnd < rowBegin)
//             {
//                 break;
//             }

//             for (int i = rowEnd; i >= rowBegin; i--) // 从下往上
//             {
//                 ret.push_back(matrix[i][colBegin]);
//             }
//             if (++colBegin > colEnd)
//             {
//                 break;
//             }
//         }

//         return ret;
//     }
// };

// 第三大的数 -- 排序
// class Solution 
// {
// public:
//     int thirdMax(vector<int>& nums) 
//     {
//         sort(nums.begin(), nums.end(), greater<>());

//         int diff = 1;
//         for(int i = 1; i < nums.size(); i++)
//         {
//             if(nums[i] != nums[i - 1] && ++diff == 3)
//             {
//                 return nums[i];
//             }
//         }

//         return nums[0];
//     }
// };

// 第三大的数 -- 集合
// class Solution
// {
// public:
//     int thirdMax(vector<int> &nums)
//     {
//         set<int> s;

//         for (auto x : nums)
//         {
//             s.insert(x);

//             if (s.size() > 3)
//             {
//                 s.erase(s.begin());
//             }
//         }

//         return s.size() == 3 ? *(s.begin()) : *(s.rbegin());
//     }
// };

// 第三大的数 -- 三指针 一次遍历
// class Solution
// {
// public:
//     int thirdMax(vector<int> &nums)
//     {
//         long a = LONG_MIN, b = LONG_MIN, c = LONG_MIN;

//         for (auto x : nums)
//         {
//             if (x > a)
//             {
//                 c = b;
//                 b = a;
//                 a = x;
//             }
//             else if (a > x && x > b)
//             {
//                 c = b;
//                 b = x;
//             }
//             else if (b > x && x > c)
//             {
//                 c = x;
//             }
//         }

//         return c == LONG_MIN ? a : c;
//     }
// };

// 将 x 减到 0 的最小操作数
// class Solution
// {
// public:
//     int minOperations(vector<int> &nums, int x)
//     {
//         // 将模型转化为最长子数组的和 == (sumNum - x)
//         int sum = 0, ret = -1;
//         int target = -x;

//         for (auto &e : nums)
//         {
//             target += e;
//         }

//         // 细节处理，当target为负数时，怎么减都减不够
//         if (target < 0)
//         {
//             return -1;
//         }

//         for (int left = 0, right = 0; right < nums.size(); right++)
//         {
//             sum += nums[right]; // 入窗口

//             while (sum > target) // 判断
//             {
//                 sum -= nums[left++]; // 出窗口
//             }

//             if (sum == target)
//             {
//                 ret = max(ret, right - left + 1); // 更新结果
//             }
//         }

//         return ret == -1 ? -1 : nums.size() - ret;
//     }
// };

// 分发饼干
// class Solution
// {
// public:
//     int findContentChildren(vector<int> &g, vector<int> &s)
//     {
//         // 预处理: 排序
//         sort(g.begin(), g.end());
//         sort(s.begin(), s.end());

//         // 双指针 + 贪心
//         int ret = 0, n = g.size(), m = s.size();
//         for (int i = 0, j = 0; i < n && j < m; i++, j++)
//         {
//             while (j < m && s[j] < g[i])
//             {
//                 j++;
//             }

//             if (j < m)
//             {
//                 ret++;
//             }
//         }

//         return ret;
//     }
// };

// 水果成篮
// class Solution
// {
// public:
//     int totalFruit(vector<int> &fruits)
//     {
//         int ret = 0;
//         unordered_map<int, int> basket; // <水果种类 数量>

//         for (int left = 0, right = 0; right < fruits.size(); right++)
//         {
//             basket[fruits[right]]++; // 入窗口

//             while (basket.size() > 2) // 判断
//             {
//                 // 出窗口
//                 basket[fruits[left]]--;

//                 if (basket[fruits[left]] == 0)
//                 {
//                     basket.erase(fruits[left]);
//                 }

//                 left++;
//             }

//             ret = max(ret, right - left + 1); // 更新数据
//         }

//         return ret;
//     }
// };

// 按奇偶排序数组
// class Solution
// {
// public:
//     vector<int> sortArrayByParity(vector<int> &nums)
//     {
//         // 双指针
//         int n = nums.size();
//         int left = 0, right = nums.size() - 1;
//         while (left < right)
//         {
//             while (left < n && nums[left] % 2 == 0) // 找奇数
//             {
//                 left++;
//             }

//             while (right >= 0 && nums[right] % 2 == 1) // 找偶数
//             {
//                 right--;
//             }

//             if (left < right)
//             {
//                 swap(nums[left++], nums[right--]);
//             }
//         }

//         return nums;
//     }
// };

// 找到字符串中所有字母异位词
// class Solution
// {
// public:
//     vector<int> findAnagrams(string s, string p)
//     {
//         unordered_map<char, int> hs, hp;
//         for (const auto ch : p)
//         {
//             hp[ch]++;
//         }

//         int n = s.size(), m = p.size();
//         int left = 0, right = 0;

//         vector<int> ret;
//         while (right < n)
//         {
//             char ch = s[right];
//             if (hp.count(ch))
//             {
//                 hs[s[right]]++; // 入窗口

//                 while (hs[ch] > hp[ch]) // 出窗口
//                 {
//                     hs[s[left++]]--;
//                 }

//                 if (right - left + 1 == m) // 判断 + 更新
//                 {
//                     ret.push_back(left);
//                 }

//                 right++;
//             }
//             else
//             {
//                 left = ++right;
//                 hs.clear();
//             }
//         }

//         return ret;
//     }
// };

// 最小绝对差
// class Solution
// {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int> &arr)
//     {
//         int n = arr.size(), less = INT_MAX;
//         sort(arr.begin(), arr.end());

//         vector<vector<int>> ret;
//         for (int i = 0; i < n - 1; i++)
//         {
//             // C++17 [if with initializer]
//             if (int delta = arr[i + 1] - arr[i]; delta < less)
//             {
//                 less = delta;
//                 ret = {{arr[i], arr[i + 1]}};
//             }
//             else if (delta == less)
//             {
//                 ret.push_back({arr[i], arr[i + 1]});
//             }
//         }

//         return ret;
//     }
// };

// 至少有 K 个重复字符的最长子串
// class Solution
// {
// public:
//     // 分治思想
//     int longestSubstring(string s, int k)
//     {
//         int n = s.size();
//         return DFS(s, 0, n - 1, k);
//     }

//     int DFS(const string &s, int left, int right, int k)
//     {
//         // 1.统计该区间字符出现次数
//         vector<int> cnt(26, 0);
//         for (int i = left; i <= right; i++)
//         {
//             cnt[s[i] - 'a']++;
//         }

//         // 2.找出区间内, 是否存在不符合 [次数 > k] 的字符, 存在则标记
//         char split = 0;
//         for (int i = 0; i < 26; i++)
//         {
//             if (cnt[i] > 0 && cnt[i] < k)
//             {
//                 split = 'a' + i;
//                 break;
//             }
//         }

//         // 3.均符合条件, 则该区间长度就是最长长度
//         if (split == 0)
//         {
//             return right - left + 1;
//         }

//         // 4.否则, 将该区间, 以split为分界点, 分治为多个子区间, 重复解决问题
//         int ret = 0, cur = left;
//         while (cur <= right)
//         {
//             // 4.1 找[左]边界, 略过split
//             while (cur <= right && s[cur] == split)
//             {
//                 cur++;
//             }

//             // 4.2 找[右]边界
//             int start = cur;
//             while (cur <= right && s[cur] != split)
//             {
//                 cur++;
//             }

//             // 4.3 已找到新的区间, 分治新区间; 获取子区间返回值, 获取最大值
//             int len = DFS(s, start, cur - 1, k);
//             ret = max(ret, len);
//         }

//         return ret;
//     }
// };

// 数组中两元素的最大乘积
// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end(), greater<>());
//         return (nums[0] - 1) * (nums[1] - 1);
//     }
// };

// 替换后的最长重复字符
// class Solution
// {
// public:
//     int characterReplacement(string s, int k)
//     {
//         int n = s.size();
//         if (n < 2)
//         {
//             return n;
//         }

//         int ret = 0, maxCount = 0;

//         // 区间边界 + 数组, 共同维护窗口
//         int left = 0, right = 0;
//         vector<int> cnt(26, 0);

//         while (right < n)
//         {
//             // [left, right) 内最多替换 k 个字符可以得到只有一种字符的子串
//             maxCount = max(maxCount, ++cnt[s[right++] - 'A']);

//             if (right - left > maxCount + k) // 此时 k 不够用
//             {
//                 cnt[s[left] - 'A']--;
//                 left++;
//             }

//             ret = max(ret, right - left);
//         }
//         return ret;
//     }
// };

// 仅仅反转字母
// class Solution
// {
// public:
//     string reverseOnlyLetters(string s)
//     {
//         // 双指针
//         int left = 0, right = s.size() - 1;
//         while (left < right)
//         {
//             while (left < right && !isalpha(s[left]))
//             {
//                 left++;
//             }

//             while (left < right && !isalpha(s[right]))
//             {
//                 right--;
//             }

//             if (left < right)
//             {
//                 swap(s[left], s[right]);
//             }

//             left++, right--;
//         }

//         return s;
//     }
// };

// 最小覆盖子串
// class Solution
// {
// public:
//     string minWindow(string s, string t)
//     {
//         // 仅用数组可以避免STL的开销，提高效率
//         int hashS[128] = {0};
//         int hashT[128] = {0};

//         int kinds = 0;
//         for (auto &ch : t)
//         {
//             if (hashT[ch]++ == 0)
//             {
//                 kinds++;
//             }
//         }

//         int begin = -1, minLen = INT_MAX;
//         for (int left = 0, right = 0, count = 0; right < s.size(); right++)
//         {
//             // 入窗口
//             char in = s[right];

//             // 维护count，仅统计t中有效字符的种类
//             if (++hashS[in] == hashT[in])
//             {
//                 count++;
//             }

//             while (count == kinds) // 判断
//             {
//                 // 更新
//                 if (right - left + 1 < minLen)
//                 {
//                     begin = left;
//                     minLen = right - left + 1;
//                 }

//                 // 出窗口 && 维护count
//                 char out = s[left++];
//                 if (hashS[out]-- == hashT[out])
//                 {
//                     count--;
//                 }
//             }
//         }

//         string ret = "";
//         if (begin != -1)
//         {
//             ret = s.substr(begin, minLen);
//         }

//         return ret;
//     }
// };

// 字符串中的第一个唯一字符
// class Solution
// {
// public:
//     int firstUniqChar(string s)
//     {
//         int hash[26] = {0};
//         for (const auto ch : s)
//         {
//             hash[ch - 'a']++;
//         }

//         for (int i = 0; i < s.size(); i++)
//         {
//             if (hash[s[i] - 'a'] == 1)
//             {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

// 二分查找
// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         // 最朴素的二分查找
//         int left = 0, right = nums.size() - 1;
//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] > target)
//             {
//                 right = mid - 1;
//             }
//             else if (nums[mid] < target)
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 return mid;
//             }
//         }

//         return -1;
//     }
// };

// 最后一个单词的长度
// class Solution
// {
// public:
//     int lengthOfLastWord(string s)
//     {
//         // 一次反向遍历
//         int cur = s.size() - 1;
//         while (s[cur] == ' ')
//         {
//             cur--;
//         }

//         int len = 0;
//         while (cur >= 0 && s[cur] != ' ')
//         {
//             len++;
//             cur--;
//         }

//         return len;
//     }
// };

// 在排序数组中查找元素的第一个和最后一个位置
// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {
//         // 处理边界情况
//         if (nums.size() == 0)
//         {
//             return {-1, -1};
//         }

//         // 二分左端点
//         int left = 0, right = nums.size() - 1;
//         while (left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] < target)
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid;
//             }
//         }

//         int begin = 0;
//         if (nums[left] == target)
//         {
//             begin = left; // 标记左端点
//         }
//         else
//         {
//             return {-1, -1};
//         }

//         // 二分右端点
//         // 这里其实left可以不做处理，算一个小优化
//         left = 0, right = nums.size() - 1;
//         while (left < right)
//         {
//             int mid = left + (right - left + 1) / 2;
//             if (nums[mid] <= target)
//             {
//                 left = mid;
//             }
//             else
//             {
//                 right = mid - 1;
//                 ;
//             }
//         }

//         return {begin, right};
//     }
// };

// 验证回文串 II
// class Solution
// {
// public:
//     bool validPalindrome(string s)
//     {
//         //
//         int left = 0, right = s.size() - 1;
//         while (left < right)
//         {
//             if (s[left] == s[right])
//             {
//                 left++, right--;
//             }
//             else
//             {
//                 return CheckPalindrome(s, left, right - 1) ||
//                        CheckPalindrome(s, left + 1, right);
//             }
//         }

//         return true;
//     }

//     bool CheckPalindrome(const string &s, int left, int right)
//     {
//         while (left < right)
//         {
//             if (s[left++] != s[right--])
//             {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// x 的平方根 -- 一次遍历
// class Solution
// {
// public:
//     int mySqrt(int x)
//     {
//         long i = 0;
//         while (i * i < x)
//         {
//             i++;
//         }

//         return i * i == x ? i : i - 1;
//     }
// };

// x 的平方根 -- 二分查找
// class Solution
// {
// public:
//     int mySqrt(int x)
//     {
//         int left = 0, right = x, ret = -1;
//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if ((long long)mid * mid <= x)
//             {
//                 ret = mid;
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }

//         return ret;
//     }
// };

// 宝石与石头 -- 哈希
// class Solution
// {
// public:
//     int numJewelsInStones(string jewels, string stones)
//     {
//         unordered_set<char> hash;
//         for (const auto ch : jewels)
//         {
//             hash.insert(ch);
//         }

//         int cnt = 0;
//         for (const auto ch : stones)
//         {
//             if (hash.count(ch))
//             {
//                 cnt++;
//             }
//         }

//         return cnt;
//     }
// };

// 宝石与石头 -- 位运算
// class Solution
// {
// public:
//     int numJewelsInStones(string jewels, string stones)
//     {
//         long long mask = 0; // 64位, 每一位表示对应字符是否是宝石 -> 充当hash
//         for (const auto ch : jewels)
//         {
//             mask |= 1LL << (ch & 63); // 取ch低6位, 设置mask第 (ch & 63) 位为1
//         }

//         int ret = 0;
//         for (const auto ch : stones)
//         {
//             ret += mask >> (ch & 63) & 1;
//         }

//         return ret;
//     }
// };

// 快乐数
// class Solution
// {
// public:
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

//     // 本题将双指针的"指针"抽象成了两个数
//     bool isHappy(int n)
//     {
//         int slow = n, fast = n;
//         while ((slow = BitSum(slow)) != (fast = BitSum(BitSum(fast))))
//             ;

//         return slow == 1;
//     }
// };

// 全排列 II
//  class Solution
//  {
//      vector<vector<int>> ret;
//      vector<int> path;
//      vector<bool> check;

// public:
//     vector<vector<int>> permuteUnique(vector<int> &nums)
//     {

//         check.resize(nums.size(), false);
//         sort(nums.begin(), nums.end());

//         DFS(nums);
//         return ret;
//     }

//     void DFS(vector<int> &nums)
//     {
//         // 0.递归出口
//         if (path.size() == nums.size())
//         {
//             ret.push_back(path);
//             return;
//         }

//         // 1.暴搜
//         for (int i = 0; i < nums.size(); i++)
//         {
//             // 2.剪枝 -> 何时不进?
//             if (check[i] ||
//                 i != 0 && nums[i] == nums[i - 1] && check[i - 1] == false)
//             {
//                 continue;
//             }

//             // 3.进
//             path.push_back(nums[i]);
//             check[i] = true;
//             DFS(nums);

//             // 4.回溯, 恢复现场
//             path.pop_back();
//             check[i] = false;
//         }
//     }
// };

// 盛最多水的容器
// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int n = height.size(), maxV = 0;

//         // 双指针
//         int left = 0, right = n - 1;
//         while (left < right)
//         {
//             maxV = max(maxV, min(height[left], height[right]) * (right - left));
//             if (height[left] < height[right])
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

// 最大子数组和 -- 动态规划
// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int n = nums.size(), ret = -0x3f3f3f3f;
//         vector<int> dp(n + 1, 0);

//         for (int i = 1; i <= n; i++)
//         {
//             dp[i] = max(nums[i - 1], dp[i - 1] + nums[i - 1]);
//             ret = max(ret, dp[i]);
//         }

//         return ret;
//     }
// };

// 最大子数组和 -- 线段树 -> 分而治之
// class Solution
// {
// public:
//     struct Status
//     {
//         int lSum, rSum, mSum, iSum;
//     };

//     Status PushUp(Status l, Status r)
//     {
//         int iSum = l.iSum + r.iSum;
//         int lSum = max(l.lSum, l.iSum + r.lSum);
//         int rSum = max(r.rSum, r.iSum + l.rSum);
//         int mSum = max(max(l.mSum, r.mSum), l.rSum + r.lSum);

//         return (Status){lSum, rSum, mSum, iSum};
//     };

//     Status Get(vector<int> &a, int l, int r)
//     {
//         if (l == r)
//         {
//             return (Status){a[l], a[l], a[l], a[l]};
//         }

//         int m = (l + r) >> 1;
//         Status lSub = Get(a, l, m);
//         Status rSub = Get(a, m + 1, r);

//         return PushUp(lSub, rSub);
//     }

//     int maxSubArray(vector<int> &nums)
//     {
//         return Get(nums, 0, nums.size() - 1).mSum;
//     }
// };

// 除自身以外数组的乘积
// class Solution
// {
// public:
//     vector<int> productExceptSelf(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> f(n), g(n);
//         f[0] = 1, g[n - 1] = 1; // 细节处理

//         // 预处理前缀积数组和后缀积数组
//         for (int i = 1; i < n; i++)
//         {
//             f[i] = f[i - 1] * nums[i - 1];
//         }

//         for (int i = n - 2; i >= 0; i--)
//         {
//             g[i] = g[i + 1] * nums[i + 1];
//         }

//         // 使用
//         vector<int> ret(n);
//         for (int i = 0; i < n; i++)
//         {
//             ret[i] = f[i] * g[i];
//         }

//         return ret;
//     }
// };

// 螺旋矩阵
// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {
//         // 四个指针转圈圈
//         int colBegin = 0, colEnd = matrix[0].size() - 1;
//         int rowBegin = 0, rowEnd = matrix.size() - 1;

//         vector<int> ret;
//         while (1)
//         {
//             for (int i = colBegin; i <= colEnd; i++)
//             {
//                 ret.push_back(matrix[rowBegin][i]);
//             }
//             if (++rowBegin > rowEnd)
//             {
//                 break;
//             }

//             for (int i = rowBegin; i <= rowEnd; i++)
//             {
//                 ret.push_back(matrix[i][colEnd]);
//             }
//             if (--colEnd < colBegin)
//             {
//                 break;
//             }

//             for (int i = colEnd; i >= colBegin; i--)
//             {
//                 ret.push_back(matrix[rowEnd][i]);
//             }
//             if (--rowEnd < rowBegin)
//             {
//                 break;
//             }

//             for (int i = rowEnd; i >= rowBegin; i--)
//             {
//                 ret.push_back(matrix[i][colBegin]);
//             }
//             if (++colBegin > colEnd)
//             {
//                 break;
//             }
//         }

//         return ret;
//     }
// };

// 和为 K 的子数组
// class Solution
// {
// public:
//     int subarraySum(vector<int> &nums, int k)
//     {
//         unordered_map<int, int> hash; // <前缀和, 次数>
//         hash[0] = 1;

//         int ret = 0, sum = 0; // 标识前一个位置的前缀和
//         for (auto &e : nums)
//         {
//             sum += e; // 计算当前位置的前缀和

//             if (hash.count(sum - k))
//             {
//                 ret += hash[sum - k];
//             }

//             hash[sum]++; // 将i位置的前缀和入hash
//         }

//         return ret;
//     }
// };

// 合并区间
// class Solution
// {
// public:
//     vector<vector<int>> merge(vector<vector<int>> &intervals)
//     {
//         // 1.排序
//         sort(intervals.begin(), intervals.end());

//         // 2.合并
//         vector<vector<int>> ret;
//         int left = intervals[0][0], right = intervals[0][1]; // 合并方式: 求并集

//         for (int i = 1; i < intervals.size(); i++)
//         {
//             int a = intervals[i][0], b = intervals[i][1];

//             if (a <= right)
//             {
//                 right = max(right, b);
//             }
//             else
//             {
//                 ret.push_back({left, right});
//                 left = a, right = b;
//             }
//         }

//         // 3.最后一个区间
//         ret.push_back({left, right});

//         return ret;
//     }
// };

// 连续数组
// class Solution
// {
// public:
//     int findMaxLength(vector<int> &nums)
//     {
//         unordered_map<int, int> hash; // <前缀和, 下标> -> 存[0, i - 1]位置的前缀和
//         hash[0] = -1;                 // 默认有一个前缀和为0的情况

//         int sum = 0, len = 0; // 标记前一次的前缀和
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i] == 0 ? -1 : 1;

//             if (hash.count(sum))
//             {
//                 len = max(len, i - hash[sum]); // 更新最大长度
//             }
//             else
//             {
//                 hash[sum] = i; // 将<sum, i>入hash, 此处会保证, 只会存入从未出现过的前缀和
//             }
//         }

//         return len;
//     }
// };

// 逆波兰表达式求值
// class Solution 
// {
// public:
//     int evalRPN(vector<string>& tokens) 
//     {
//         unordered_map<string, function<int(int, int)>> hash = 
//         {
//             {"+", [](int a, int b) { return a + b; }},
//             {"-", [](int a, int b) { return a - b; }},
//             {"*", [](int a, int b) { return a * b; }},
//             {"/", [](int a, int b) { return a / b; }}
//         };

//         stack<int> st;
//         for(const auto& str : tokens)
//         {
//             if(hash.count(str))
//             {
//                 int x2 = st.top(); st.pop();
//                 int x1 = st.top(); st.pop();

//                 st.push(hash[str](x1, x2));
//             }
//             else
//             {
//                 st.push(stoi(str));
//             }
//         }

//         return st.top();
//     }
// };

// 判定字符是否唯一
// class Solution 
// {
// public:
//     bool isUnique(string astr) 
//     {
//         // 1.Hash
//         int mask = 0;
//         for(const auto ch : astr)
//         {
//             mask |= 1 << (ch - 'a');
//         }

//         // 2.Cnt Check
//         if(Check(mask) == astr.size())
//         {
//             return true;
//         }

//         return false;
//     }

//     int Check(int mask)
//     {
//         int cnt = 0;
//         while(mask)
//         {
//             if(mask & 1)
//             {
//                 cnt++;
//             }

//             mask >>= 1;
//         }

//         return cnt;
//     }
// };

// 最小栈
// class MinStack
// {
// public:
//     MinStack()
//     {
//         minSt.push(INT_MAX);
//     }

//     void push(int val)
//     {
//         st.push(val);
//         minSt.push(min(minSt.top(), val));
//     }

//     void pop()
//     {
//         st.pop();
//         minSt.pop();
//     }

//     int top()
//     {
//         return st.top();
//     }

//     int getMin()
//     {
//         return minSt.top();
//     }

// private:
//     stack<int> st;
//     stack<int> minSt;
// };

// 丢失的数字
// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int mask = 0;
//         for (int i = 0; i <= nums.size(); i++)
//         {
//             mask ^= i;
//         }

//         for (const auto x : nums)
//         {
//             mask ^= x;
//         }

//         return mask;
//     }
// };

// 用栈实现队列
// class MyQueue
// {
// public:
//     MyQueue()
//     {
//     }

//     void push(int x)
//     {
//         inSt.push(x);
//     }

//     int pop()
//     {
//         if (outSt.empty())
//         {
//             In2Out();
//         }

//         int x = outSt.top();
//         outSt.pop();

//         return x;
//     }

//     int peek()
//     {
//         if (outSt.empty())
//         {
//             In2Out();
//         }

//         return outSt.top();
//     }

//     bool empty()
//     {
//         return inSt.empty() && outSt.empty();
//     }

// private:
//     void In2Out()
//     {
//         while (inSt.size())
//         {
//             outSt.push(inSt.top());
//             inSt.pop();
//         }
//     }

// private:
//     stack<int> inSt;
//     stack<int> outSt;
// };

// 递归乘法 -- 累加
// class Solution
// {
// public:
//     int multiply(int A, int B)
//     {
//         int ret = 0;
//         for (int i = 0; i < B; i++)
//         {
//             ret += A;
//         }

//         return ret;
//     }
// };

// 递归乘法 -- 移位
// class Solution
// {
// public:
//     int multiply(int A, int B)
//     {
//         int ret = 0;

//         // 0.依次处理B的每一位(向下取整)
//         while (B > 0)
//         {
//             // 1.如果B的当前最低位是1, 则将A加到结果上
//             if (B & 1)
//             {
//                 ret += A;
//             }

//             // 2. A左移, B右移
//             A <<= 1, B >>= 1;
//         }

//         return ret;
//     }
// };

// 最短无序连续子数组
// class Solution
// {
// public:
//     int findUnsortedSubarray(vector<int> &nums)
//     {
//         if (is_sorted(nums.begin(), nums.end()))
//         {
//             return 0;
//         }

//         vector<int> stNums(nums);
//         sort(stNums.begin(), stNums.end());
//         int left = 0, right = nums.size() - 1;

//         while (nums[left] == stNums[left])
//         {
//             left++;
//         }
//         while (nums[right] == stNums[right])
//         {
//             right--;
//         }

//         return right - left + 1;
//     }
// };

// 螺旋矩阵 II
// class Solution
// {
// public:
//     vector<vector<int>> generateMatrix(int n)
//     {
//         int colBegin = 0, colEnd = n - 1;
//         int rowBegin = 0, rowEnd = n - 1;
//         vector<vector<int>> ret(n, vector<int>(n, 0));

//         int cnt = 1;
//         while (cnt <= n * n)
//         {
//             for (int i = colBegin; i <= colEnd; i++)
//             {
//                 ret[rowBegin][i] = cnt++;
//             }
//             ++rowBegin;

//             for (int i = rowBegin; i <= rowEnd; i++)
//             {
//                 ret[i][colEnd] = cnt++;
//             }
//             --colEnd;

//             for (int i = colEnd; i >= colBegin; i--)
//             {
//                 ret[rowEnd][i] = cnt++;
//             }
//             --rowEnd;

//             for (int i = rowEnd; i >= rowBegin; i--)
//             {
//                 ret[i][colBegin] = cnt++;
//             }
//             ++colBegin;
//         }

//         return ret;
//     }
// };

// 字符串解码
// class Solution
// {
// public:
//     string decodeString(string s)
//     {
//         stack<int> numSt;
//         stack<string> strSt;
//         strSt.push(""); // 细节，防溢出:P

//         int i = 0, n = s.size();
//         while (i < n)
//         {
//             if (isdigit(s[i]))
//             {
//                 // 提取数字
//                 int num = s[i++] - '0';
//                 while (isdigit(s[i]))
//                 {
//                     num = num * 10 + (s[i++] - '0');
//                 }

//                 numSt.push(num);
//             }
//             else if (s[i] == '[')
//             {
//                 i++;

//                 // 提取字符串，入栈
//                 string tmp;
//                 while (isalpha(s[i]))
//                 {
//                     tmp += s[i++];
//                 }

//                 strSt.push(tmp);
//             }
//             else if (s[i] == ']')
//             {
//                 i++;

//                 // 解析，加入到栈顶后面
//                 int k = numSt.top();
//                 numSt.pop();
//                 string tmp = strSt.top();
//                 strSt.pop();

//                 string str;
//                 while (k--)
//                 {
//                     str += tmp;
//                 }

//                 strSt.top() += str;
//             }
//             else
//             {
//                 // 提取字符串，入栈
//                 string tmp;
//                 while (i < n && isalpha(s[i]))
//                 {
//                     tmp += s[i++];
//                 }

//                 strSt.top() += tmp;
//             }
//         }

//         return strSt.top();
//     }
// };

// 字符串相乘
// class Solution
// {
// public:
//     string multiply(string num1, string num2)
//     {
//         int n = num1.size(), m = num2.size();

//         // 逆序字符串，便于运算
//         reverse(num1.begin(), num1.end());
//         reverse(num2.begin(), num2.end());

//         // 无进位相加
//         vector<int> tmp(n + m - 1);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 tmp[i + j] += (num1[i] - '0') * (num2[j] - '0');
//             }
//         }

//         // 进位
//         int cur = 0, carry = 0;
//         string ret;
//         while (cur < n + m - 1 || carry)
//         {
//             if (cur < n + m - 1)
//             {
//                 carry += tmp[cur++];
//             }

//             ret += carry % 10 + '0';
//             carry /= 10;
//         }

//         // 处理前导0
//         while (ret.size() > 1 && ret.back() == '0')
//         {
//             ret.pop_back();
//         }

//         reverse(ret.begin(), ret.end());

//         return ret;
//     }
// };

// 无重复字符的最长子串
// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         unordered_map<char, int> hash;
//         int n = s.size(), maxLen = 0;
//         int left = 0, right = 0;

//         while (right < n)
//         {
//             char ch = s[right];

//             // 1.入窗口
//             hash[ch]++;

//             // 2.出窗口
//             while (hash[ch] > 1)
//             {
//                 hash[s[left++]]--;
//             }

//             // 3.更新
//             maxLen = max(maxLen, right - left + 1);

//             // 4.迭代
//             right++;
//         }

//         return maxLen;
//     }
// };

// 二叉树的最大深度
// class Solution 
// {
// public:
//     int maxDepth(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return 0;
//         }

//         if(root->left == nullptr && root->right == nullptr)
//         {
//             return 1;
//         }

//         int left = maxDepth(root->left), right = maxDepth(root->right);

//         return max(left, right) + 1;
//     }
// };

// 分割链表
// class Solution 
// {
// public:
//     ListNode* partition(ListNode* head, int x) 
//     {
//         if(head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         ListNode *newHead = new ListNode(0, head);
//         ListNode *less = new ListNode(0);
//         ListNode *cur = head, *prev = newHead, *lessTail = less;

//         while(cur)
//         {
//             if(cur->val < x)
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

// 将有序数组转换为二叉搜索树
// class Solution 
// {
// public:
//     TreeNode* sortedArrayToBST(vector<int>& nums) 
//     {
//         return DFS(nums, 0, nums.size() - 1);
//     }

//     TreeNode* DFS(vector<int>& nums, int left, int right)
//     {
//         if(left > right)
//         {
//             return nullptr;
//         }

//         int mid = (left + right) / 2;
//         TreeNode* root = new TreeNode(nums[mid]);

//         // [left, mid - 1] [mid + 1, right]
//         root->left = DFS(nums, left, mid - 1);
//         root->right = DFS(nums, mid + 1, right);

//         return root;
//     }
// };

// 旋转链表 --> 模拟
// class Solution 
// {
// public:
//     ListNode* rotateRight(ListNode* head, int k) 
//     {
//         if(head == nullptr)
//         {
//             return nullptr;
//         }

//         int n = 0;
//         ListNode *cur = head, *tail = nullptr;

//         // 1.计数 && 找尾
//         while(cur)
//         {
//             if(cur->next == nullptr)
//             {
//                 tail = cur;
//             }

//             n++;
//             cur = cur->next;
//         }
//         k %= n;

//         // 2.模拟
//         while(k--)
//         {
//             ListNode* prev = head;
//             while(prev->next && prev->next->next)
//             {
//                 prev = prev->next;
//             }

//             tail->next = head;
//             head = tail;
//             tail = prev;
//             tail->next = nullptr;
//         }

//         return head;
//     }
// };

// 旋转链表 --> 数学 -> 闭合为环，再断开
// class Solution 
// {
// public:
//     ListNode* rotateRight(ListNode* head, int k) 
//     {
//         if (head == nullptr) 
//         {
//             return head;
//         }

//         int n = 1;
//         ListNode* cur = head;

//             // 1.计数 && 找尾
//         while (cur->next)
//         {
//             cur = cur->next;
//             n++;
//         }

//         // 2.闭合为环 -> 新链表的最后一个节点为原链表的第k个
//         k = n - k % n;
//         cur->next = head;

//         // 3.断链 && 找新头
//         while (k--) 
//         {
//             cur = cur->next;
//         }
//         ListNode* ret = cur->next;
//         cur->next = nullptr;
        
//         return ret;
//     }
// };

// 汉诺塔问题
// class Solution 
// {
// public:
//     void hanota(vector<int>& A, vector<int>& B, vector<int>& C) 
//     {
//         DFS(A, B, C, A.size());
//     }

//     void DFS(vector<int>& a, vector<int>& b, vector<int>& c, size_t n)
//     {
//         if(n == 1)
//         {
//             c.push_back(a.back());
//             a.pop_back();
//             return;
//         }

//         // 将A上面n-1个通过C移到B
//         DFS(a, c, b, n - 1);

//         // 将A最后一个移到C
//         c.push_back(a.back());
//         a.pop_back();

//         // 将B上面n-1个通过空的A移到C
//         DFS(b, a, c, n - 1);
//     }
// };

// 训练计划 IV --> 迭代
// class Solution 
// {
// public:
//     ListNode* trainningPlan(ListNode* l1, ListNode* l2) 
//     {
//         if(l1 == nullptr)
//         {
//             return l2;
//         }

//         if(l2 == nullptr)
//         {
//             return l1;
//         }

//         ListNode *head = new ListNode(0);
//         ListNode *cur1 = l1, *cur2 = l2, *tail = head;

//         while(cur1 && cur2)
//         {
//             if(cur1->val < cur2->val)
//             {
//                 tail->next = cur1;
//                 tail = cur1;
//                 cur1 = cur1->next;
//             }
//             else
//             {
//                 tail->next = cur2;
//                 tail = cur2;
//                 cur2 = cur2->next;
//             }
//         }

//         if(cur1)
//         {
//             tail->next = cur1;
//         }

//         if(cur2)
//         {
//             tail->next = cur2;
//         }

//         tail = head->next;
//         delete head;

//         return tail;
//     }
// };