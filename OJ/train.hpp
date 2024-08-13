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

// 过河卒
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n, m, x, y, cnt = 0;
//     cin >> n >> m >> x >> y;

//     vector<vector<long long>> dp(n + 2, vector<long long>(m + 2, 0));
//     dp[0][1] = 1;
//     x += 1, y += 1;

//     for (int i = 1; i <= n + 1; i++)
//     {
//         for (int j = 1; j <= m + 1; j++)
//         {
//             if (!((i == x && j == y) ||
//                   (abs(i - x) + abs(j - y) == 3 && i != x && j != y)))
//             {
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//             }
//         }
//     }

//     cout << dp[n + 1][m + 1] << endl;

//     return 0;
// }

// 游游的水果大礼包
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     long long n, m, a, b;
//     cin >> n >> m >> a >> b;

//     long long ret = 0;
//     for (int x = 0; x <= min(n / 2, m); x++) // 枚举1号礼包的个数
//     {
//         int y = min(n - x * 2, (m - x) / 2); // 计算2号礼包的个数
//         ret = max(ret, a * x + b * y);
//     }

//     cout << ret << endl;
//     return 0;
// }

// 两个链表的第一个公共结点
// ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2)
// {
//     ListNode *cur1 = pHead1, *cur2 = pHead2;
//     while (cur1 != cur2)
//     {
//         cur1 = cur1 != NULL ? cur1->next : pHead2;
//         cur2 = cur2 != NULL ? cur2->next : pHead1;
//     }

//     return cur1;
// }

// mari和shiny
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n = 0;
//     string str;
//     cin >> n >> str;

//     long long s = 0, h = 0, y = 0;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = str[i];

//         if (ch == 's')
//         {
//             s++;
//         }
//         else if (ch == 'h')
//         {
//             h += s;
//         }
//         else if (ch == 'y')
//         {
//             y += h;
//         }
//     }

//     cout << y << endl;

//     return 0;
// }

// 重排字符串
// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     int n = 0;
//     string str;
//     cin >> n >> str;

//     unordered_map<char, int> hash;
//     int maxLen = 0;
//     char maxCh = 'a';

//     for (const auto &ch : str)
//     {
//         if (++hash[ch] > maxLen)
//         {
//             maxLen = hash[ch];
//             maxCh = ch;
//         }
//     }

//     if (maxLen > (n + 1) / 2)
//     {
//         cout << "no" << endl;
//     }
//     else
//     {
//         int index = 0;
//         string ret;
//         ret.resize(n);

//         // 先去拜访出现次数最多的
//         while (maxLen--)
//         {
//             ret[index] = maxCh;
//             index += 2;
//         }
//         hash.erase(maxCh);

//         // 再摆放剩下的
//         for (auto &it : hash)
//         {
//             if (it.second)
//             {
//                 while (it.second--)
//                 {
//                     if (index >= n)
//                     {
//                         index = 1;
//                     }

//                     ret[index] = it.first;
//                     index += 2;
//                 }
//             }
//         }

//         cout << "yes" << endl
//              << ret << endl;
//     }

//     return 0;
// }

// 删除相邻数字的最大分数
// #include <iostream>
// using namespace std;

// const int N = 1e4 + 1;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     int x = 0;
//     int hash[N] = {0};
//     while (cin >> x)
//     {
//         hash[x] += x;
//     }

//     int f[N] = {0};
//     int g[N] = {0};
//     for (int i = 1; i < N; i++)
//     {
//         f[i] = g[i - 1] + hash[i];
//         g[i] = max(f[i - 1], g[i - 1]);
//     }

//     cout << max(f[N - 1], g[N - 1]);

//     return 0;
// }

// 分组
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int n = 0, m = 0;
// unordered_map<int, int> cnt;

// // 判断人数最多为x时，能否分成m组
// bool Check(int x)
// {
//     int g = 0;
//     for (auto &[a, b] : cnt)
//     {
//         g += b / x + (b % x == 0 ? 0 : 1);
//     }

//     return g <= m;
// }

// int main()
// {

//     cin >> n >> m;

//     int x = 0, hMax = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         hMax = max(hMax, ++cnt[x]);
//     }

//     if (cnt.size() > m) // 边界情况处理
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         int l = 1, r = hMax;
//         while (l < r)
//         {
//             int mid = (l + r) / 2;
//             if (Check(mid))
//             {
//                 r = mid;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//         cout << l << endl;
//     }

//     return 0;
// }

// 十字爆破
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, m = 0;
//     scanf("%d %d", &n, &m);

//     vector<vector<int>> nums(n, vector<int>(m, 0));
//     vector<long long> row(n, 0), col(m, 0);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &nums[i][j]);
//             row[i] += nums[i][j];
//             col[j] += nums[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%lld ", row[i] + col[j] - nums[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 比那名居的桃子
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, k = 0;
//     cin >> n >> k;

//     vector<int> happy(n, 0), shame(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> happy[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> shame[i];
//     }

//     int left = 0, right = 0;
//     long long hSum = 0, sSum = 0, hMax = 0, sMin = 0, begin = 0;

//     while (right < n)
//     {
//         hSum += happy[right];
//         sSum += shame[right];

//         while (right - left + 1 > k)
//         {
//             hSum -= happy[left];
//             sSum -= shame[left];
//             left++;
//         }

//         if (right - left + 1 == k)
//         {
//             if (hSum > hMax)
//             {
//                 begin = left;
//                 hMax = hSum;
//                 sMin = sSum;
//             }
//             else if (hSum == hMax && sSum < sMin)
//             {
//                 begin = left;
//                 sMin = sSum;
//             }
//         }

//         right++;
//     }

//     cout << begin + 1 << endl;

//     return 0;
// }

// chika和蜜柑
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// typedef pair<int, int> PII;

// int main()
// {
//     int n = 0, k = 0;
//     cin >> n >> k;

//     vector<PII> orgs(n); // <sour, sweet>
//     for (int i = 0; i < n; i++)
//     {
//         cin >> orgs[i].first;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> orgs[i].second;
//     }

//     sort(orgs.begin(), orgs.end(), [&](const PII &p1, const PII &p2)
//          {
//              if (p1.second != p2.second)
//              {
//                  return p1.second > p2.second;
//              }
//              else
//              {
//                  return p1.first < p2.first;
//              }
//          });

//     long long sour = 0, sweet = 0;
//     for (int i = 0; i < k; i++)
//     {
//         sour += orgs[i].first;
//         sweet += orgs[i].second;
//     }

//     cout << sour << " " << sweet << endl;

//     return 0;
// }

// 礼物的最大价值
// int maxValue(vector<vector<int>> &grid)
// {
//     int n = grid.size(), m = grid[0].size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
//         }
//     }

//     return dp[n][m];
// }

// 对称之美
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// // 判断两个字符串中是否有相同字符
// vector<vector<bool>> visit;

// bool Check(int left, int right)
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (visit[left][i] && visit[right][i])
//         {
//             return true;
//         }
//     }

//     return false;
// }

// int main()
// {
//     int t = 0;
//     cin >> t;
//     while (t--)
//     {
//         int n = 0;
//         cin >> n;
//         visit.clear();
//         visit.resize(n, vector<bool>(26, false));

//         string str;
//         for (int i = 0; i < n; i++) // 将所有字符串的字符信息存入hash
//         {
//             cin >> str;
//             for (const auto &ch : str)
//             {
//                 visit[i][ch - 'a'] = true;
//             }
//         }

//         // 判断回文
//         int left = 0, right = n - 1;
//         while (left < right)
//         {
//             if (!Check(left, right))
//             {
//                 break;
//             }

//             left++, right--;
//         }

//         if (left < right)
//         {
//             cout << "No" << endl;
//         }
//         else
//         {
//             cout << "Yes" << endl;
//         }
//     }

//     return 0;
// }

// 经此一役小红所向无敌
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long a, b, h, k, ret = 0;
//     cin >> a >> h >> b >> k;

//     // 1.计算互砍多少回合
//     long long n = min(h / b, k / a);
//     ret += n * (a + b);

//     // 2.计算剩余血量
//     h -= n * b;
//     k -= n * a;

//     // 3.判断是否都还活着
//     if (h > 0 && k > 0)
//     {
//         h -= b;
//         k -= a;
//         ret += a + b;
//     }

//     // 4.判断是否会放大
//     if (h > 0 || k > 0)
//     {
//         ret += 10 * (h > 0 ? a : b);
//     }

//     cout << ret << endl;

//     return 0;
// }

// 连续子数组最大和
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;
//     vector<int> arr(n + 1, 0);
//     vector<int> dp(n + 1, 0);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ret = -0x3f3f3f3f;
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i] = max(dp[i - 1], 0) + arr[i];
//         ret = max(ret, dp[i]);
//     }

//     cout << ret << endl;

//     return 0;
// }

// 非对称之美
// #include <iostream>
// #include <string>
// using namespace std;

// int n;
// string str;

// int Adjust()
// {
//     // 1.判断是否全都是相同字符
//     bool flag = true;
//     for (int i = 1; i < n; i++)
//     {
//         if (str[i] != str[0])
//         {
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         return 0;
//     }

//     // 2.判断本身是否是回文
//     flag = true;
//     int left = 0, right = n - 1;
//     while (left < right)
//     {
//         if (str[left] == str[right])
//         {
//             left++;
//             right--;
//         }
//         else
//         {
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         return n - 1;
//     }
//     else
//     {
//         return n;
//     }
// }

// int main()
// {
//     cin >> str;
//     n = str.size();

//     cout << Adjust() << endl;

//     return 0;
// }

// 添加字符
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a, b;
//     cin >> a >> b;
//     int m = a.size(), n = b.size();

//     int ret = m;
//     for (int i = 0; i <= n - m; i++) // 枚举b的起始位置
//     {
//         int tmp = 0;
//         for (int j = 0; j < m; j++)
//         {
//             if (a[j] != b[i + j])
//             {
//                 tmp++;
//             }
//         }

//         ret = min(tmp, ret);
//     }

//     cout << ret << endl;

//     return 0;
// }

// 数组变换
// #include <iostream>
// #include <vector>
// using namespace std;

// int n = 0, maxValue = 0;
// vector<int> nums;

// bool Check()
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (maxValue % nums[i])
//         {
//             return false;
//         }

//         int x = maxValue / nums[i];
//         if (x - (x & -x))
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {

//     cin >> n;
//     nums.resize(n, 0);

//     for (auto &x : nums)
//     {
//         cin >> x;
//         maxValue = max(x, maxValue);
//     }

//     if (Check())
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }