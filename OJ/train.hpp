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

// ����
// #include <iostream>
// using namespace std;

// long long n = 0, a = 0, b = 0;

// long long CostTotal(char ch)
// {
//     long long sum = 0;

//     if (ch == 'a')
//     {
//         sum = n / 2 * a;

//         n %= 2;
//         if (n)
//         {
//             sum += min(min(a, b), b - a);
//         }
//     }
//     else
//     {
//         sum = n / 3 * b;

//         n %= 3;
//         if (n == 1)
//         {
//             sum += min(min(a, b), 2 * a - b);
//         }
//         else if (n == 2)
//         {
//             sum += min(min(a, b), 3 * a - b);
//         }
//     }

//     return sum;
// }

// int main()
// {
//     int t = 0;
//     cin >> t;

//     while (t--)
//     {
//         cin >> n >> a >> b;
//         float av = a / 2.0, bv = b / 3.0;

//         if (n <= 2)
//         {
//             cout << min(a, b) << endl;
//             continue;
//         }

//         if (av < bv)
//         {
//             cout << CostTotal('a') << endl;
//         }
//         else
//         {
//             cout << CostTotal('b') << endl;
//         }
//     }

//     return 0;
// }

// �ϳ���
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     const long long INF = 0x3f3f3f3f3f3f3f3f;
//     int n = 0, k = 0, d = 0;
//     cin >> n;

//     vector<int> nums(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }
//     cin >> k >> d;

//     vector<vector<long long>> f(n + 1, vector<long long>(k + 1, 0));
//     vector<vector<long long>> g(n + 1, vector<long long>(k + 1, 0));

//     // ��ʼ��������н���
//     for (int i = 1; i <= n; i++)
//     {
//         g[i][1] = f[i][1] = nums[i];         // ��ʼ��
//         for (int j = 2; j <= min(i, k); j++) // ��ѡ������
//         {
//             f[i][j] = -INF; // ��ʼ��
//             g[i][j] = INF;  // ��ʼ��

//             // ǰ?��ѡ�����?��λ��
//             for (int prev = max(i - d, j - 1); prev <= i - 1; prev++)
//             {
//                 f[i][j] = max(max(f[prev][j - 1] * nums[i], g[prev][j - 1] * nums[i]), f[i][j]);
//                 g[i][j] = min(min(f[prev][j - 1] * nums[i], g[prev][j - 1] * nums[i]), g[i][j]);
//             }
//         }
//     }

//     long long ret = -INF;
//     for (int i = k; i <= n; i++)
//     {
//         ret = max(ret, f[i][k]);
//     }
//     cout << ret << endl;

//     return 0;
// }

// ��̨����չ����
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;
//     cout << (1 << (n - 1)) << endl;

//     return 0;
// }

// ���������·��
// class Solution
// {
//     int n = 0, m = 0;
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
//     vector<vector<int>> mem;

// public:
//     int solve(vector<vector<int>> &matrix)
//     {
//         n = matrix.size(), m = matrix[0].size();
//         mem.resize(n, vector<int>(m, -1));

//         int ret = 1;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 ret = max(ret, DFS(i, j, matrix));
//             }
//         }

//         return ret;
//     }

//     int DFS(int i, int j, const vector<vector<int>> &matrix)
//     {
//         if (mem[i][j] != -1)
//         {
//             return mem[i][j];
//         }

//         int len = 1;
//         for (int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] > matrix[i][j])
//             {
//                 len = max(len, 1 + DFS(x, y, matrix));
//             }
//         }

//         mem[i][j] = len;
//         return len;
//     }
// };

// ����λ����
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     while (cin >> n)
//     {
//         int ret = 1;
//         while (ret - 1 <= n)
//         {
//             ret *= 2;
//         }

//         cout << ret / 2 - 1 << endl;
//     }

//     return 0;
// }

// ���
// #include <iostream>
// using namespace std;

// int n = 0, m = 0;
// bool choose[11] = {false}; // ���·����ѡ����Щ��
// int sum = 0;               // �����ѡ�����ܺ�

// void DFS(int x)
// {
//     if (sum == m)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (choose[i])
//             {
//                 cout << i << " ";
//             }
//         }
//         cout << endl;

//         return;
//     }

//     if (sum > m || x > n)
//     {
//         return;
//     }

//     // ѡ
//     sum += x;
//     choose[x] = true;
//     DFS(x + 1);
//     sum -= x;
//     choose[x] = false;

//     // ��ѡ
//     DFS(x + 1);
// }

// int main()
// {
//     cin >> n >> m;
//     DFS(1);

//     return 0;
// }

// �����ַ����ı༭����
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main()
// {
//     string a, b;
//     cin >> a >> b;
//     int n = a.size(), m = b.size();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for (int j = 0; j <= m; j++)
//     {
//         dp[0][j] = j;
//     }

//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = i;
//     }

//     // DP
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (a[i - 1] == b[j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
//             }
//         }
//     }

//     cout << dp[n][m] << endl;

//     return 0;
// }

// ����������
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// typedef long long LL;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     priority_queue<LL, vector<LL>, greater<>> heap;
//     while (n--)
//     {
//         LL x = 0;
//         cin >> x;
//         heap.push(x);
//     }

//     // �������Ŷ�����/��������
//     LL ret = 0;
//     while (heap.size() > 1)
//     {
//         LL x1 = heap.top();
//         heap.pop();
//         LL x2 = heap.top();
//         heap.pop();

//         heap.push(x1 + x2);

//         ret += x1 + x2;
//     }

//     cout << ret << endl;

//     return 0;
// }

// abb
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n = 0;
//     string str;
//     cin >> n >> str;

//     long long f[26] = {0};
//     long long g[26] = {0};

//     long long ret = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // DP
//         int x = str[i] - 'a';
//         ret += f[x];

//         // Update
//         f[x] = f[x] + i - g[x];
//         g[x] = g[x] + 1;
//     }

//     cout << ret << endl;

//     return 0;
// }

// ��ת�ַ���
// bool solve(string A, string B)
// {
//     if (A.size() != B.size())
//     {
//         return false;
//     }

//     return (A + A).find(B) != string::npos;
// }

// �ϲ�k�������������
// class Solution
// {
//     typedef pair<int, ListNode *> PIL;

// public:
//     ListNode *mergeKLists(vector<ListNode *> &lists)
//     {
//         priority_queue<PIL, vector<PIL>, greater<>> heap;
//         for (const auto &list : lists)
//         {
//             ListNode *cur = list;
//             while (cur)
//             {
//                 heap.push({cur->val, cur});
//                 cur = cur->next;
//             }
//         }

//         ListNode *newHead = new ListNode(0);
//         ListNode *tail = newHead;
//         while (heap.size())
//         {
//             ListNode *node = heap.top().second;
//             heap.pop();

//             tail->next = node;
//             tail = tail->next;
//         }
//         tail->next = nullptr;

//         tail = newHead->next;
//         delete newHead;

//         return tail;
//     }
// };

// dd����ת
// #include <iostream>
// #include <vector>
// using namespace std;

// int n = 0;
// vector<vector<int>> matrix;

// void SwapRol() // �жԳ�
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             swap(matrix[i][j], matrix[n - 1 - i][j]);
//         }
//     }
// }

// void SwapCol() // �жԳ�
// {
//     for (int j = 0; j < n / 2; j++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             swap(matrix[i][j], matrix[i][n - 1 - j]);
//         }
//     }
// }

// int main()
// {
//     cin >> n;

//     matrix.resize(n, vector<int>(n, 0));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     int q = 0, x = 0;
//     cin >> q;

//     int row = 0, col = 0;
//     while (q--)
//     {
//         cin >> x;
//         if (x == 1)
//         {
//             row++, col++;
//         }
//         else
//         {
//             row++;
//         }
//     }

//     if (row %= 2)
//     {
//         SwapRol();
//     }

//     if (col %= 2)
//     {
//         SwapCol();
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// С��ȡ��
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n = 0, k = 0;
//     cin >> n >> k;

//     vector<long long> nums(n + 1, 0);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> nums[i];
//     }

//     vector<vector<long long>> dp(n + 1, vector<long long>(k, LLONG_MIN));
//     dp[0][0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < k; j++)
//         {
//             dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - nums[i] % k + k) % k] + nums[i]);
//         }
//     }

//     cout << (dp[n][0] <= 0 ? -1 : dp[n][0]) << endl;

//     return 0;
// }

// �ַ�����
// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// using namespace std;

// int main()
// {
//     string str;
//     while (cin >> str)
//     {
//         // 1.ͳ��ÿ���ַ���Ƶ��
//         int hash[300] = {0};
//         for (const auto &ch : str)
//         {
//             hash[ch]++;
//         }

//         // 2.�����е�Ƶ�η������
//         priority_queue<int, vector<int>, greater<>> heap;
//         for (int i = 0; i < 300; i++)
//         {
//             if (hash[i])
//             {
//                 heap.push(hash[i]);
//             }
//         }

//         // 3.����������
//         int ret = 0;
//         while (heap.size() > 1)
//         {
//             int x1 = heap.top();
//             heap.pop();
//             int x2 = heap.top();
//             heap.pop();

//             ret += x1 + x2;
//             heap.push(x1 + x2);
//         }

//         cout << ret << endl;
//     }

//     return 0;
// }

// ���ٵ���ȫƽ����
// #include <iostream>
// #include <cstring>
// using namespace std;

// const int N = 1e4 + 10;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     int dp[N];
//     memset(dp, 0x3f, sizeof dp);
//     dp[0] = 0;

//     for (int i = 1; i * i <= n; i++)
//     {
//         for (int j = i * i; j <= n; j++)
//         {
//             dp[j] = min(dp[j], dp[j - i * i] + 1);
//         }
//     }

//     cout << dp[n] << endl;

//     return 0;
// }

// ���ε���ĸ��
// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;

//     int ret = 0x3f3f3f3f;
//     for (char ch = 'a'; ch <= 'z'; ch++) // ö�ٱ��ʲô�ַ�
//     {
//         int sum = 0;
//         for (auto x : str)
//         {
//             sum += min(abs(x - ch), 26 - abs(x - ch));
//         }
//         ret = min(ret, sum);
//     }

//     cout << ret << endl;

//     return 0;
// }

// �����β���(��)
// vector<int> findOrder(int n, vector<vector<int>> &groups)
// {
//     vector<vector<int>> edges(n);
//     vector<int> in(n);

//     // 1.��ͼ
//     for (auto v : groups)
//     {
//         int a = v[0], b = v[1]; // b -> a
//         edges[b].push_back(a);
//         in[a]++;
//     }

//     // 2.���Ϊ0�ĵ㣬���뵽������
//     queue<int> q;
//     for (int i = 0; i < n; i++)
//     {
//         if (in[i] == 0)
//         {
//             q.push(i);
//         }
//     }

//     // 3.��������
//     vector<int> ret;
//     while (q.size())
//     {
//         int tmp = q.front();
//         q.pop();
//         ret.push_back(tmp);

//         for (auto x : edges[tmp])
//         {
//             if (--in[x] == 0)
//             {
//                 q.push(x);
//             }
//         }
//     }

//     if (ret.size() == n)
//     {
//         return ret;
//     }
//     else
//     {
//         return {};
//     }
// }