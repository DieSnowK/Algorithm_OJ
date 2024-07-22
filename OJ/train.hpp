#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 两个数组的交集
// vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
// {
//     bool hash[1001] = {0};
//     vector<int> ret;

//     for (const auto &x : nums1)
//     {
//         hash[x] = true;
//     }

//     for (const auto &x : nums2)
//     {
//         ret.push_back(x);
//         hash[x] = false;
//     }

//     return ret;
// }

// 点击消除
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str, st;
//     getline(cin, str);

//     for (const auto &ch : str)
//     {
//         if (st.size() && st.back() == ch)
//         {
//             st.pop_back()
//         }
//         else
//         {
//             st += ch;
//         }
//     }

//     cout << (st.size() == 0 ? 0 : st) << endl;

//     return 0;
// }

// 牛牛的快递
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int cnt = 20;
//     double weight = 0.0;
//     char flag = 'n';

//     cin >> weight >> flag;
//     if (flag == 'y')
//     {
//         cnt += 5;
//     }

//     if (--weight > 0.0)
//     {
//         // cnt += ceil(weight); // v1.0

//         // v2.0
//         if (weight - (int)weight > 0)
//         {
//             cnt += (int)weight + 1;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }

// 数组中两个字符串的最小距离
// #include <iostream>
// #include <vector>
// #include <string>
// #include <cstdlib>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n = 0;
//     string str1, str2;
//     cin >> n >> str1 >> str2;

//     vector<string> strs(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> strs[i];
//     }

//     if (str1.empty() && str2.empty())
//     {
//         cout << -1 << endl;
//         return 0;
//     }

//     // 双指针
//     int p1 = 0, p2 = 0, ret1 = 0, ret2 = 0, minDist = INT_MAX;
//     bool flag1 = false, flag2 = false;

//     while (p1 < n || p2 < n)
//     {
//         // 找str1
//         while (p1 < n)
//         {
//             if (strs[p1] == str1)
//             {
//                 flag1 = true;
//                 ret1 = p1++;
//                 break;
//             }

//             p1++;
//         }
//         if (flag1 && flag2)
//         {
//             minDist = min(minDist, abs(ret1 - ret2));
//         }

//         // 找str2
//         while (p2 < n)
//         {
//             if (strs[p2] == str2)
//             {
//                 flag2 = true;
//                 ret2 = p2++;
//                 break;
//             }

//             p2++;
//         }
//         if (flag1 && flag2)
//         {
//             minDist = min(minDist, abs(ret1 - ret2));
//         }
//     }

//     cout << (minDist == INT_MAX ? -1 : minDist) << endl;

//     return 0;
// }

// Fib数列
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     int a = 0, b = 1, c = 1;
//     while (n > c)
//     {
//         a = b;
//         b = c;
//         c = a + b;
//     }

//     cout << min(c - n, n - b);

//     return 0;
// }

// 单词搜索
// class Solution
// {
//     int n = 0, m = 0;
//     vector<vector<bool>> visit;

//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};

// public:
//     bool exist(vector<string> &board, string word)
//     {
//         n = board.size(), m = board[0].size();
//         visit.resize(n, vector<bool>(m, false));

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (board[i][j] == word[0]) // 剪枝
//                 {
//                     if (DFS(board, i, j, word, 0))
//                     {
//                         return true;
//                     }
//                 }
//             }
//         }

//         return false;
//     }

//     bool DFS(vector<string> &board, int i, int j, string &word, int pos)
//     {
//         if (pos == word.size() - 1)
//         {
//             return true;
//         }

//         visit[i][j] = true;
//         for (int k = 0; k < 4; k++)
//         {
//             int a = i + dx[k], b = j + dy[k];
//             if (a >= 0 && a < n && b >= 0 && b < m &&
//                 !visit[a][b] && board[a][b] == word[pos + 1]) // 剪枝
//             {
//                 if (DFS(board, a, b, word, pos + 1))
//                 {
//                     return true;
//                 }
//             }
//         }
//         visit[i][j] = false;

//         return false;
//     }
// };

// 孩子们的游戏 -> 约瑟夫环
// int LastRemaining_Solution(int n, int m)
// {
//     int dp = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         dp = (dp + m) % i;
//     }

//     return dp;
// }

// 大数加法
// string solve(string s, string t)
// {
//     string ret;

//     int i = s.size() - 1, j = t.size() - 1;
//     int carry = 0;
//     while (i >= 0 || j >= 0 || carry)
//     {
//         if (i >= 0)
//         {
//             carry += s[i--] - '0';
//         }

//         if (j >= 0)
//         {
//             carry += t[j--] - '0';
//         }

//         ret += carry % 10 + '0';
//         carry /= 10;
//     }

//     reverse(ret.begin(), ret.end());

//     return ret;
// }

// 拼三角
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     vector<int> nums(6, 0);
//     while (n--)
//     {
//         for (int i = 0; i < 6; i++)
//         {
//             cin >> nums[i];
//         }

//         sort(nums.begin(), nums.end());

//         if (nums[0] + nums[1] > nums[2] && nums[3] + nums[4] > nums[5] ||
//             nums[0] + nums[2] > nums[3] && nums[1] + nums[4] > nums[5] ||
//             nums[0] + nums[3] > nums[4] && nums[1] + nums[2] > nums[5] ||
//             nums[0] + nums[4] > nums[5] && nums[1] + nums[2] > nums[3])
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }

// 最小公倍数
// #include <iostream>
// using namespace std;

// int GCD(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }

//     return GCD(b, a % b);
// }

// int main()
// {
//     int a = 0, b = 0;
//     cin >> a >> b;

//     cout << (a * b / GCD(a, b)) << endl;

//     return 0;
// }

// 跳台阶
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     int a = 1, b = 2, c = 2;
//     for (int i = 3; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     if (n == 0 || n == 1)
//     {
//         cout << n << endl;
//     }
//     else
//     {
//         cout << c << endl;
//     }

//     return 0;
// }

// 最长回文子串
// int getLongestPalindrome(string A)
// {
//     int n = A.size(), len = 1;

//     for (int i = 1; i < n; i++) // 枚举每个中心点
//     {
//         // 当长度是奇数时
//         int left = i - 1, right = i + 1;
//         while (left >= 0 && right < n && A[left] == A[right])
//         {
//             left--;
//             right++;
//         }
//         len = max(len, right - left - 1);

//         // 当长度是偶数时
//         left = i - 1, right = i;
//         while (left >= 0 && right < n && A[left] == A[right])
//         {
//             left--;
//             right++;
//         }
//         len = max(len, right - left - 1);
//     }

//     return len;
// }