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