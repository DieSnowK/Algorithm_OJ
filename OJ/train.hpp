#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ��������Ľ���
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

// �������
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

// ţţ�Ŀ��
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

// �����������ַ�������С����
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

//     // ˫ָ��
//     int p1 = 0, p2 = 0, ret1 = 0, ret2 = 0, minDist = INT_MAX;
//     bool flag1 = false, flag2 = false;

//     while (p1 < n || p2 < n)
//     {
//         // ��str1
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

//         // ��str2
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

// Fib����
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

// ��������
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
//                 if (board[i][j] == word[0]) // ��֦
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
//                 !visit[a][b] && board[a][b] == word[pos + 1]) // ��֦
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

// �����ǵ���Ϸ -> Լɪ��
// int LastRemaining_Solution(int n, int m)
// {
//     int dp = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         dp = (dp + m) % i;
//     }

//     return dp;
// }

// �����ӷ�
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

// ƴ����
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

// ��С������
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

// ��̨��
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

// ������Ӵ�
// int getLongestPalindrome(string A)
// {
//     int n = A.size(), len = 1;

//     for (int i = 1; i < n; i++) // ö��ÿ�����ĵ�
//     {
//         // ������������ʱ
//         int left = i - 1, right = i + 1;
//         while (left >= 0 && right < n && A[left] == A[right])
//         {
//             left--;
//             right++;
//         }
//         len = max(len, right - left - 1);

//         // ��������ż��ʱ
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

// ������
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

// ���ε�ˮ�������
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     long long n, m, a, b;
//     cin >> n >> m >> a >> b;

//     long long ret = 0;
//     for (int x = 0; x <= min(n / 2, m); x++) // ö��1������ĸ���
//     {
//         int y = min(n - x * 2, (m - x) / 2); // ����2������ĸ���
//         ret = max(ret, a * x + b * y);
//     }

//     cout << ret << endl;
//     return 0;
// }

// ��������ĵ�һ���������
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

// mari��shiny
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

// �����ַ���
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

//         // ��ȥ�ݷó��ִ�������
//         while (maxLen--)
//         {
//             ret[index] = maxCh;
//             index += 2;
//         }
//         hash.erase(maxCh);

//         // �ٰڷ�ʣ�µ�
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

// ɾ���������ֵ�������
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

// ����
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int n = 0, m = 0;
// unordered_map<int, int> cnt;

// // �ж��������Ϊxʱ���ܷ�ֳ�m��
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

//     if (cnt.size() > m) // �߽��������
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

// ʮ�ֱ���
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

// �������ӵ�����
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

// chika���۸�
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

// ���������ֵ
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

// �Գ�֮��
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// // �ж������ַ������Ƿ�����ͬ�ַ�
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
//         for (int i = 0; i < n; i++) // �������ַ������ַ���Ϣ����hash
//         {
//             cin >> str;
//             for (const auto &ch : str)
//             {
//                 visit[i][ch - 'a'] = true;
//             }
//         }

//         // �жϻ���
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

// ����һ��С�������޵�
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long a, b, h, k, ret = 0;
//     cin >> a >> h >> b >> k;

//     // 1.���㻥�����ٻغ�
//     long long n = min(h / b, k / a);
//     ret += n * (a + b);

//     // 2.����ʣ��Ѫ��
//     h -= n * b;
//     k -= n * a;

//     // 3.�ж��Ƿ񶼻�����
//     if (h > 0 && k > 0)
//     {
//         h -= b;
//         k -= a;
//         ret += a + b;
//     }

//     // 4.�ж��Ƿ��Ŵ�
//     if (h > 0 || k > 0)
//     {
//         ret += 10 * (h > 0 ? a : b);
//     }

//     cout << ret << endl;

//     return 0;
// }

// ��������������
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

// �ǶԳ�֮��
// #include <iostream>
// #include <string>
// using namespace std;

// int n;
// string str;

// int Adjust()
// {
//     // 1.�ж��Ƿ�ȫ������ͬ�ַ�
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

//     // 2.�жϱ����Ƿ��ǻ���
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

// ����ַ�
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a, b;
//     cin >> a >> b;
//     int m = a.size(), n = b.size();

//     int ret = m;
//     for (int i = 0; i <= n - m; i++) // ö��b����ʼλ��
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

// ����任
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

// ���
// #include <iostream>
// using namespace std;

// int h, a, H, A;

// int Check()
// {
//     if (a >= H)
//     {
//         return -1;
//     }

//     int m = (H / a) + (H % a != 0 ? 1 : 0); // �����ܿ�?��
//     int n = m - 1;                          // ��ұ�����?��
//     int x = n * A;                          // ɱ��?ֻ�����ʱ����һ������?
//     int ret = h / x - (h % x == 0 ? 1 : 0);

//     return ret;
// }

// int main()
// {
//     int t = 0;
//     cin >> t;

//     while (t--)
//     {
//         cin >> h >> a >> H >> A;
//         cout << Check() << endl;
//     }

//     return 0;
// }

// �ж��ǲ���ƽ�������
// class Solution
// {
// public:
//     bool IsBalanced_Solution(TreeNode *pRoot)
//     {
//         return DFS(pRoot) != -1;
//     }

//     // ����ֵ����-1�Ļ�������ķ���ֵ��ʾ��������
//     int DFS(TreeNode *root)
//     {
//         if (root == nullptr)
//         {
//             return 0;
//         }

//         int left = DFS(root->left);
//         if (left == -1)
//         {
//             return -1; // ��֦
//         }

//         int right = DFS(root->right);
//         if (right == -1)
//         {
//             return -1;
//         }

//         return abs(left - right) <= 1 ? max(left, right) + 1 : -1;
//     }
// };

// ����Ӿ���
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, x = 0;
//     cin >> n;

//     // ��̬�滮 --> ���άǰ׺������
//     vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> x;
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + x;
//         }
//     }

//     int ret = -0x3f3f3f3f;
//     for (int x1 = 1; x1 <= n; x1++)
//     {
//         for (int y1 = 1; y1 <= n; y1++)
//         {
//             for (int x2 = x1; x2 <= n; x2++)
//             {
//                 for (int y2 = y1; y2 <= n; y2++)
//                 {
//                     ret = max(ret, dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
//                 }
//             }
//         }
//     }

//     cout << ret << endl;

//     return 0;
// }

// С�е�01��
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int n = 0;
//     string str;
//     cin >> n >> str;

//     int sum[2] = {0}; // ͳ���ַ���������0��1�ĸ���
//     for (auto &ch : str)
//     {
//         sum[ch - '0']++;
//     }

//     int left = 0, right = 0, ret = 0, half = n / 2;
//     int cnt[2] = {0};     // ͳ�ƴ�����0��1�ĸ���
//     while (right < n - 1) // ϸ��
//     {
//         cnt[str[right] - '0']++;

//         while (right - left + 1 > half)
//         {
//             cnt[str[left++] - '0']--;
//         }

//         if (right - left + 1 == half)
//         {
//             if (cnt[0] * 2 == sum[0] && cnt[1] * 2 == sum[1])
//             {
//                 ret += 2;
//             }
//         }

//         right++;
//     }

//     cout << ret << endl;

//     return 0;
// }

// С���ABC
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;
//     int n = str.size();

//     int ret = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (i + 1 < n && str[i] == str[i + 1]) // �ж�?��Ϊ2��?��
//         {
//             ret = 2;
//             break;
//         }

//         if (i + 2 < n && str[i] == str[i + 2]) // �ж�?��Ϊ 3 ��?��
//         {
//             ret = 3;
//         }
//     }

//     cout << ret << endl;

//     return 0;
// }

// ������ȡ��
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     vector<int> nums(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }

//     vector<int> f(n + 1, 0), g(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         f[i] = g[i - 1] + nums[i];
//         g[i] = max(f[i - 1], g[i - 1]);
//     }

//     cout << max(f[n], g[n]) << endl;

//     return 0;
// }

// kotori������
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int MOD = 109;

//     int n = 0, m = 0;
//     cin >> n >> m;

//     int ret = n;
//     for (int i = 0; i < m - 1; i++)
//     {
//         ret = ret * (n - 1) % MOD;
//     }

//     cout << ret << endl;

//     return 0;
// }

// ��ٶ���
// #include <iostream>
// #include <vector>
// using namespace std;

// int n = 0, ret = 0;
// vector<int> nums;
// vector<bool> visit;

// void DFS(int pos)
// {
//     if (pos == n + 1)
//     {
//         ret++;
//         return;
//     }

//     // ���ڸ�λ�ã�����ö��ÿ����Ա
//     for (int i = 1; i <= n; i++)
//     {
//         if (visit[i]) // ��֦ -> i��Ա�Ѿ����Ź�
//         {
//             continue;
//         }

//         if (visit[nums[i]]) // ��֦ -> i��Ա�������Ѿ��޷����
//         {
//             return;
//         }

//         visit[i] = true; // ����i�Ŷ�Ա
//         DFS(pos + 1);
//         visit[i] = false; // ����
//     }
// }

// int main()
// {
//     cin >> n;
//     nums.resize(n + 1, 0);
//     visit.resize(n + 1, false);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }

//     DFS(1); // ������λ�û���

//     cout << ret << endl;

//     return 0;
// }

// �������е����·����
// class Solution
// {
// public:
//     int ret = -0x3f3f3f3f;

//     int maxPathSum(TreeNode *root)
//     {
//         DFS(root);
//         return ret;
//     }

//     int DFS(TreeNode *root)
//     {
//         if (root == nullptr)
//         {
//             return 0;
//         }

//         // ���������������
//         int l = max(0, DFS(root->left));
//         int r = max(0, DFS(root->right));

//         ret = max(ret, root->val + l + r); // ����root����?·����

//         return root->val + max(l, r);
//     }
// };

// ��������
// #include <iostream>
// using namespace std;

// int Check(int h)
// {
//     int ret = 0, a = 1;
//     while (h)
//     {
//         ret++;

//         h -= a;
//         if (h % (2 * a) == 0)
//         {
//             a *= 2;
//         }
//     }

//     return ret;
// }

// int main()
// {
//     int n = 0, h = 0;
//     cin >> n;

//     while (n--)
//     {
//         cin >> h;
//         cout << Check(h) << endl;
//     }
// }

// �����������(��)
// int LIS(vector<int> &a)
// {
//     int pos = 0;
//     vector<int> dp(a.size() + 1, 0); // dp[i]: ����Ϊi����Сĩβ

//     // ����xӦ�÷����ĸ�λ��
//     for (const auto &x : a)
//     {
//         // �߽��������
//         if (pos == 0 || x > dp[pos])
//         {
//             dp[++pos] = x;
//         }
//         else
//         {
//             // ���ֲ��Ҳ���λ��
//             int l = 1, r = pos;
//             while (l < r)
//             {
//                 int mid = (l + r) / 2;
//                 if (dp[mid] >= x)
//                 {
//                     r = mid;
//                 }
//                 else
//                 {
//                     l = mid + 1;
//                 }
//             }

//             dp[l] = x;
//         }
//     }

//     return pos;
// }