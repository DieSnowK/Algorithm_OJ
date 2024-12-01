#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <map>
using namespace std;

// 1
//int main() {
//    int ret = 0;
//    int n = 0;
//    vector<int> a_i;
//
//    cin >> n;
//    for (int i = 0; i < 3 * n; i++) {
//        int x = 0;
//        cin >> x;
//        a_i.push_back(x);
//    }
//
//    sort(a_i.begin(), a_i.end());
//
//
//    for (int i = 0; i < n; i++) {
//        ret += a_i[i + n];
//    }
//
//    cout << ret;
//    return 0;
//}

// 2
//int main()
//{
//    int n = 0;
//    vector<int> arr;
//
//    // 读取数据
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int x = 0;
//        cin >> x;
//        arr.push_back(x);
//    }
//
//    if (n == 1)
//    {
//        cout << n;
//    }
//    else
//    {
//        // 执行
//        int index = 1;
//        int count = 0;
//        while (index < n)
//        {
//            // 每一轮
//            if (arr[index - 1] < arr[index])
//            {
//                // 起点为小于
//                while (arr[index - 1] <= arr[index])
//                {
//                    index++;
//                }
//            }
//            else if(arr[index - 1] > arr[index])
//            {
//                // 起点为大于等于
//                while (arr[index - 1] >= arr[index])
//                {
//                    index++;
//                }
//            }
//            else
//            {
//                // 起点为等于
//                while (arr[index - 1] == arr[index])
//                {
//                    index++;
//                }
//
//                if (arr[index - 1] >= arr[index])
//                {
//                    while (arr[index - 1] >= arr[index])
//                    {
//                        index++;
//                    }
//                }
//                else if (arr[index - 1] <= arr[index])
//                {
//                    while (arr[index - 1] <= arr[index])
//                    {
//                        index++;
//                    }
//                }
//            }
//
//            count++;
//            index++;
//        }
//
//        cout << count;
//    }
//
//    return 0;
//}

//3.
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath> // 用于取绝对值
//using namespace std;
//
//int main()
//{
//    int M = 0, N = 0;
//    vector<int> ret;
//    string format;
//    cin >> M >> N;
//
//    // 处理负数情况
//    bool isNegative = false;
//    if (M < 0)
//    {
//        isNegative = true;
//        M = abs(M); // 取绝对值
//    }
//
//    if (M == 0)
//    {
//        cout << "0" << endl;  // 输出"0"并换行
//    }
//    else
//    {
//        while (M)
//        {
//            ret.push_back(M % N);
//            M /= N;
//        }
//
//        for (auto iter = ret.rbegin(); iter != ret.rend(); iter++)
//        {
//            char ch = (*iter) + '0';
//            if (ch > '9')
//            {
//                ch = 'A' + ch - '9' - 1;
//            }
//            format += ch;
//        }
//
//        if (isNegative)
//        {
//            cout << "-" << format << endl;  // 输出负号和转换结果并换行
//        }
//        else
//        {
//            cout << format << endl;  // 输出转换结果并换行
//        }
//    }
//
//    return 0;
//}


//4.
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//    // 获取两个字符串
//    int count = 0;
//    string str1, str2;
//    getline(cin, str1);
//    getline(cin, str2);
//
//    // 尝试从不同的位置插入
//    for (int i = 0; i < str1.size(); i++)
//    {
//        str1.insert(i, str2);
//
//        // 判断回文串
//        // 1.字符压栈
//        stack<char> judge;
//        bool flag = true;
//        for (auto& ch : str1)
//        {
//            judge.push(ch);
//        }
//
//        // 2.字符出栈
//        for (auto& ch : str1)
//        {
//            char tmp = judge.top();
//            judge.pop();
//
//            if (tmp != ch)
//            {
//                flag = false;
//                break;
//            }
//        }
//
//        if (flag)
//        {
//            count++;
//        }
//    }
//
//    cout << count;
//    return 0;
//}

//5.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    long long max = 0;
//    int n = 0;
//    cin >> n;
//    vector<int> nums;
//    nums.resize(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> nums[i];
//    }
//
//    long long sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (nums[i] < 0)
//        {
//            // 遇到负数时，则一轮结束，此时sum已到本轮最大
//            if (sum > max)
//            {
//                max = sum;
//                sum = 0;
//            }
//            continue;
//        }
//
//        // 只要遇到的是正数，则往后一直会变大
//        sum += nums[i];
//    }
//
//    cout << max << endl;
//    return 0;
//}

//6.
//int main()
//{
//    // 暴力穷举
//    int H = 0, W = 0;
//    cin >> W >> H;
//
//    // 设置二维数组，并初始化其大小，避免后续多次扩容带来性能损耗
//    vector<vector<int>> box(H);
//    for (auto& e : box)
//    {
//        e.resize(W, 0);
//    }
//
//    int count = 0;
//    for (int i = 0; i < H; i++) // 每行
//    {
//        for (int j = 0; j < W; j++) // 每列
//        {
//            bool flag = true;
//            // 再循环遍历判断是否能放，kl是用来检验的，ij是准备放的
//            for (int k = 0; k <= i; k++)
//            {
//                for (int l = 0; l <= j; l++)
//                {
//                    // 蛋糕kl可能已经被放下，所以看ij和kl的欧几里得距离是否符合要求
//                    if (box[k][l] == 1 && (abs(i - k) == 2 && abs(j - l) == 0 || abs(j - l) == 2 && abs(i - k) == 0))
//                    {
//                        // 这里有蛋糕 且 欧几里得 == 2
//                        flag = false;
//                        break;
//                    }
//                } // end of 4
//
//                if (!flag)
//                {
//                    break;
//                }
//            } // end of 3
//
//            // 走到这里，要么不符合，要么已经放下
//            if (flag)
//            {
//                box[i][j] = 1;
//                count++;
//            }
//        } // end of 2
//    } // end of 1
//
//    cout << count;
//
//    return 0;
//}

//7.
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//    // string重载了比较运算符:)
//    // 当时咋没想到呢
//    int n = 0;
//    cin >> n;
//
//    if (n == 0)
//    {
//        cout << "none" << endl;
//        return 0;
//    }
//
//    vector<string> strs;
//    strs.resize(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        getline(cin, strs[i]);
//    }
//
//    bool aj_by_len = true, aj_by_alp = true;
//
//    // 先判断是否是按照顺序
//    for (int i = 1; i < n; i++)
//    {
//        if (strs[i - 1].size() >= strs[i].size())
//        {
//            aj_by_len = false;
//            break;
//        }
//    }
//
//    // 再判断是否按照字典顺序
//    for (int i = 1; i < n; i++)
//    {
//        if (strs[i - 1] > strs[i])
//        {
//            aj_by_alp = false;
//            break;
//        }
//    }
//
//    if (aj_by_alp && aj_by_len)
//    {
//        cout << "both" << endl;
//    }
//    else if (aj_by_alp)
//    {
//        cout << "lexicographically" << endl;
//    }
//    else if (aj_by_len)
//    {
//        cout << "lengths" << endl;
//    }
//    else
//    {
//        cout << "none" << endl;
//    }
//
//    return 0;
//}

//8.
//#include <stack>
//using namespace std;
//class LCA {
//public:
//    int getLCA(int a, int b)
//    {
//        // Heap?
//        // left = parent*2 + 1
//        // right = parent*2 + 2
//        // parent = (child-1) / 2
//
//        // 从1开始判断，如果出现第一个不是公共祖先的，则上一个就是最近公共祖先
//        int pa = a - 1, pb = b - 1;
//        int aa = pa, bb = pb;
//        stack<int> sta, stb;
//        sta.push(a);
//        stb.push(b);
//
//        // 找pa
//        while (pa > 0)
//        {
//            pa = (aa - 1) / 2;
//            sta.push(pa);
//
//            aa = pa;
//        }
//
//        // 找pb
//        while (pb > 0)
//        {
//            pb = (bb - 1) / 2;
//            stb.push(pb);
//
//            bb = pb;
//        }
//
//        int ret = 0;
//        while (!(sta.empty() || stb.empty()))
//        {
//            int ta = sta.top();
//            sta.pop();
//            int tb = stb.top();
//            stb.pop();
//
//            if (ta == tb)
//            {
//                ret = ta;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        return ret + 1;
//    }
//};
//
//int main()
//{
//    LCA a;
//    a.getLCA(4, 5);
//
//    return 0;
//}

//9
//#include <iostream>
//#include <string>
//using namespace std;
//
//void SepCard(const string& input, string& card1, string& card2)
//{
//    size_t pos = input.find("-");
//    card1 = input.substr(0, pos);
//    card2 = input.substr(pos + 1);
//}
//
//void RemoveSpace(string& card)
//{
//    size_t pos = 0;
//    while ((pos = card.find(" ")) != string::npos)
//    {
//        card = card.erase(pos, 1);
//    }
//}
//
//bool IsJoker(string& card)
//{
//    if (card[0] == 'j' || card[0] == 'J')
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//void Replace2(string& card)
//{
//    for (auto& ch : card)
//    {
//        if (ch == '2')
//        {
//            ch = 'L';
//        }
//    }
//}
//
//int main()
//{
//
//    string input, card1, card2;
//    getline(cin, input);
//
//    SepCard(input, card1, card2);
//
//    // 如何探查每幅手牌是怎样的？
//    // 应该是双方手牌每次都是相同的情况，如都是对子，都是同花
//    // 但应该有特例，比如对王和炸弹存在时
//    // 都是炸弹时，比炸弹，只有炸弹则炸弹大
//    // 其余情况都只需要比第一张牌大小则可以看出大小
//    // 字符比较，比的是ASCII值，所以可以将2替换
//
//    // 解析手牌
//    // 1.先去掉空格，方便分情况
//    // 2.分情况讨论
//    string parseCard1 = card1, parseCard2 = card2;
//    RemoveSpace(parseCard1);
//    RemoveSpace(parseCard2);
//    Replace2(parseCard1);
//    Replace2(parseCard2);
//
//    if (IsJoker(parseCard1))
//    {
//        cout << card1 << endl;
//    }
//    else if (IsJoker(parseCard2))
//    {
//        cout << card2 << endl;
//
//    }
//    else if (parseCard1.size() == 4 && parseCard2.size() == 4)
//    {
//        if (parseCard1[0] > parseCard2[0])
//        {
//            cout << card1 << endl;
//        }
//        else
//        {
//            cout << card2 << endl;
//        }
//    }
//    else if (parseCard1.size() == 4)
//    {
//        cout << card1 << endl;
//    }
//    else if (parseCard2.size() == 4)
//    {
//        cout << card2 << endl;
//    }
//    else if (parseCard1.size() == parseCard2.size()) // 单张，对子，三张，顺子
//    {
//        if (parseCard1[0] > parseCard2[0])
//        {
//            cout << card1 << endl;
//        }
//        else
//        {
//            cout << card2 << endl;
//        }
//    }
//    else
//    {
//        cout << "ERROR" << endl;
//    }
//
//    // 结尾：好像其实是要判断出每副牌属于什么类型，并不是每次给的都是地位对等的
//    // 所以我这样的写法只能算是最后的结果处理，中间还需要分析出都属于什么类型的牌
//    // 好实现，但不想实现了:P 写起来篇幅大，起码以我现在的水平能想到的方法是这样的
//    // 大致思路：写出每组拍的判断函数，置标记位为对应的标识，然后比较
//
//    return 0;
//}

//9
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void YTriangle(vector<vector<int>>& triangle)
//{
//    if (triangle.size() > 1) // 大于两行的情况
//    {
//        // 先初始化vector
//        for (int i = 0; i < triangle.size(); i++)
//        {
//            triangle[i].resize(2 * i + 1);
//        }
//
//        triangle[0][0] = triangle[1][0] = triangle[1][1] = triangle[1][2] = 1;
//
//        int lastRow_limit = 3;
//        for (int i = 2; i < triangle.size(); i++)
//        {
//            int row_limit = 2 * i + 1;
//            for (int j = 0; j < row_limit; j++)
//            {
//                if (j == 0 || j == row_limit - 1)
//                {
//                    triangle[i][j] = 1;
//                }
//                else if (j == 1)
//                {
//                    triangle[i][j] = triangle[i - 1][0] + triangle[i - 1][1];
//                }
//                else if (j == row_limit - 2)
//                {
//                    triangle[i][j] = triangle[i - 1][lastRow_limit - 1] + triangle[i - 1][lastRow_limit - 2];
//                }
//                else
//                {
//                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j - 2] + triangle[i - 1][j];
//                }
//            }
//
//            lastRow_limit = row_limit;
//        }
//    }
//    else // 只有一行的情况
//    {
//
//        triangle[0].push_back(1); // vector[]不会开空间，除了插入操作/或者直接预留空间
//    }
//
//}
//
//int main()
//{
//    // 每行数的个数 2n - 1
//    int n = 0;
//
//    while (cin >> n)
//    {
//        vector<vector<int>> triangle;
//        triangle.resize(n);
//
//        // 先生成n行杨辉三角
//        YTriangle(triangle);
//        bool flag = false;
//
//        // 判定
//        for (int i = 0; i < triangle[n - 1].size(); i++)
//        {
//            if (triangle[n - 1][i] % 2 == 0)
//            {
//                flag = true;
//                cout << i + 1;
//                break;
//            }
//        }
//
//        if (!flag)
//        {
//            cout << -1;
//        }
//    }
//
//    return 0;
//}

//10.
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void Shuffle(vector<int>& arr, int k)
//{
//    if (k == 0)
//    {
//        return;
//    }
//
//    // 先分牌
//    vector<int> left(arr.begin(), arr.begin() + arr.size() - 1);
//    vector<int> right(arr.begin() + arr.size(), arr.end());
//
//    // 洗牌
//    vector<int> ret(arr);
//    auto posL = left.rbegin();
//    auto posR = right.rbegin();
//
//    for (int i = 0; i < ret.size(); i++)
//    {
//        // 先放右手，再放左手
//        ret[i++] = *(posR++);
//        ret[i] = *(posL++);
//    }
//
//    // 翻转
//    reverse(ret.begin(), ret.end());
//
//    // 覆盖结果给原数组
//    arr = ret;
//
//    Shuffle(arr, --k);
//}
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) // 接收n组数据
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//
//        vector<int> arr(n, 0);
//        for (int j = 0; j < arr.size(); j++) // 接收每组数据
//        {
//            cin >> arr[i];
//        }
//
//        // 数据处理
//        Shuffle(arr, k);
//
//        // 打印结果
//        for (auto& card : arr)
//        {
//            cout << card << " ";
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

// day18 -- 字符串通配符
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool isMatch(string pattern, string text) {
//    int m = pattern.length();
//    int n = text.length();
//
//    // 创建二维动态数组用于存储匹配结果，初始化为 false
//    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
//
//    // 当 pattern 和 text 都为空时，匹配成功
//    dp[0][0] = true;
//
//    // 处理以 '*' 开头的情况，'*' 可以匹配空串
//    for (int i = 1; i <= m; ++i) {
//        if (pattern[i - 1] == '*') {
//            dp[i][0] = dp[i - 1][0];
//        }
//    }
//
//    // 动态规划填表
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (pattern[i - 1] == '?' || tolower(pattern[i - 1]) == tolower(text[j - 1])) {
//                // 当前字符匹配，取决于之前的字符是否匹配
//                dp[i][j] = dp[i - 1][j - 1];
//            }
//            else if (pattern[i - 1] == '*') {
//                // '*' 匹配0个字符，或者匹配多个字符
//                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//            }
//        }
//    }
//
//    return dp[m][n];
//}
//
//int main() {
//    string pattern, text;
//
//    cin >> pattern >> text;
//
//    if (isMatch(pattern, text)) {
//        cout << "true" << endl;
//    }
//    else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}

// day19 最长公共字串
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// 这个动态规划其实还没完全搞懂，以后有机会，有时间可以考虑再看看 day19
//string GetComSubstr(string& longStr, string& shortStr)
//{
//    int start = 0, maxSize = 0;
//    vector<vector<int>> MSC(shortStr.size() + 1, vector<int>(longStr.size() + 1, 0));
//
//    for (int i = 1; i <= shortStr.size(); i++)
//    {
//        for (int j = 1; j <= longStr.size(); j++)
//        {
//            if (shortStr[i - 1] == longStr[j - 1])
//            {
//                MSC[i][j] += MSC[i - 1][j - 1] + 1;
//            }
//
//            if (MSC[i][j] > maxSize)
//            {
//                maxSize = MSC[i][j];
//                start = i - maxSize;
//            }
//        }
//    }
//
//    return shortStr.substr(start, maxSize);
//}
//
//int main()
//{
//    string longStr, shortStr;
//    while (cin >> longStr >> shortStr)
//    {
//        // 求出长短
//        if (longStr.size() < shortStr.size())
//        {
//            swap(longStr, shortStr);
//        }
//
//        cout << GetComSubstr(longStr, shortStr) << endl;
//    }
//
//    return 0;
//}

// 复写0
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr)
//    {
//        int cur = 0, dest = -1;
//        int n = arr.size();
//
//        // 找最后一个"复写"位置
//        while (cur < n)
//        {
//            if (arr[cur])
//            {
//                dest++;
//            }
//            else
//            {
//                dest += 2;
//            }
//
//            if (dest >= n - 1)
//            {
//                break;
//            }
//
//            cur++;
//        }
//
//        // 处理一下边界情况
//        if (dest == n)
//        {
//            arr[n - 1] = 0;
//            cur--;
//            dest -= 2;
//        }
//
//        // 从后往前复写
//        while (cur >= 0)
//        {
//            if (arr[cur])
//            {
//                arr[dest--] = arr[cur--];
//            }
//            else
//            {
//                arr[dest--] = 0;
//                arr[dest--] = 0;
//                cur--;
//            }
//        }
//    }
//};

// 移动零
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums)
//    {
//        for (int cur = 0, dest = -1; cur < nums.size(); cur++)
//        {
//            if (nums[cur])
//            {
//                swap(nums[++dest], nums[cur]);
//            }
//        }
//    }
//};

// 快乐数
// class Solution {
//public:
//    int BitSum(int n)
//    {
//        int sum = 0;
//        while (n)
//        {
//            int tmp = n % 10;
//            sum += tmp * tmp;
//            n /= 10;
//        }
//
//        return sum;
//    }
//
//    // 本题将双指针的"指针"抽象成了两个数
//    bool isHappy(int n)
//    {
//        int slow = n, fast = n;
//        while ((slow = BitSum(slow)) != (fast = BitSum(BitSum(fast))));
//
//        return slow == 1;
//    }
//};

// 盛最多水的容器
// class Solution {
// public:
//     int maxArea(vector<int>& height) 
//     {
//         int left = 0, right = height.size() - 1;
//         int maxV = 0;
//         while(left < right)
//         {
//             int v = min(height[right], height[left]) * (right - left);
//             maxV = v > maxV ? v : maxV;

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

// 有效三角形的个数
// class Solution 
// {
// public:
//     int triangleNumber(vector<int>& nums) 
//     {
//         // 优化：排序
//         sort(nums.begin(), nums.end());

//         int count = 0;
//         for(int max = nums.size() - 1; max >= 2; max--) // 固定最大数
//         {
//             int left = 0, right = max - 1;
//             while(left < right)
//             {
//                 if(nums[left] + nums[right] > nums[max]) // 可以组成
//                 {
//                     count += right - left;
//                     right--;
//                 }
//                 else // 不可以组成
//                 {
//                     left++;
//                 }
//             }
//         }

//         return count;
//     }
// };

// 查找总价格为目标值的两个商品
//class Solution
//{
//public:
//    vector<int> twoSum(vector<int>& price, int target)
//    {
//        int left = 0, right = price.size() - 1;
//        while (left < right)
//        {
//            int sum = price[left] + price[right];
//            if (sum > target)
//            {
//                right--;
//            }
//            else if (sum < target)
//            {
//                left++;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        return { price[left], price[right] };
//    }
//};

// 三数之和
// class Solution 
// {
// public:
//     // 去重：1.set 2.算法
//     vector<vector<int>> threeSum(vector<int>& nums)
//     {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> ret;
//         int n = nums.size();
        
//         for(int src = 0; src < n - 2; )
//         {
//             if(nums[src] > 0)
//             {
//                 break;
//             }
            
//             int left = src + 1;
//             int right = n - 1;
            
//             // 双指针求和
//             while(left < right)
//             {
//                 int sum = nums[left] + nums[right];
//                 if(sum + nums[src] > 0)
//                 {
//                     right--;
//                 }
//                 else if(sum + nums[src] < 0)
//                 {
//                     left++;
//                 }
//                 else
//                 {
//                     // 一轮中，找到第一个并不停止，缩小区间，继续找
//                     ret.push_back({nums[src], nums[left], nums[right]});               
//                     left++;
//                     right--;
                    
//                     // 去重 && 避免越界
//                     while(left < right && nums[left] == nums[left - 1])
//                     {
//                         left++;
//                     }
                    
//                     while(left < right && nums[right] == nums[right + 1])
//                     {
//                         right--;
//                     }
//                 }
//             }
            
//             // 去重 && 避免越界
//             src++;
//             while(src < n && nums[src] == nums[src - 1])
//             {
//                 src++;
//             }
//         } // end of for()

//         return ret;
//     }
// };

// 四数之和
// class Solution 
// {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) 
//     {
//         int n = nums.size();
//         vector<vector<int>> ret;
        
//         sort(nums.begin(), nums.end());
        
//         int src1 = 0;
//         while(src1 < n -3) // 固定数1
//         {
//             int src2 = src1 + 1;
//             while(src2 < n - 2) // 固定数2
//             {
//                 int left = src2 + 1;
//                 int right = n - 1;

//                 // 双指针求和
//                 while(left < right)
//                 {
//                     long long sum = (long long)nums[left] + nums[right] + nums[src1] + nums[src2];

//                     if(sum > target)
//                     {
//                         right--;
//                     }
//                     else if(sum < target)
//                     {
//                         left++;
//                     }
//                     else
//                     {
//                         ret.push_back({nums[src1], nums[src2], nums[left++], nums[right--]});
                        
//                         // 去重(left + right) && 避免越界
//                         while(left < right && nums[left] == nums[left - 1])
//                         {
//                             left++;
//                         }
                        
//                         while(left < right && nums[right] == nums[right + 1])
//                         {
//                             right--;
//                         }
//                     }
//                 } // end of while(left < right)
                
//                 // 去重src2 && 避免越界
//                 src2++;
//                 while(src2 < n && nums[src2] == nums[src2 - 1])
//                 {
//                     src2++;
//                 }
//             } // end of while(src2)
            
//             // 去重src1 && 避免越界
//             src1++;
//             while(src1 < n && nums[src1] == nums[src1 - 1])
//             {
//                 src1++;
//             }
//         } // end of while(src1)
        
//         return ret;
//     }
// };

// 长度最小的子数组
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) 
//     {
//         int sum = 0, len = INT_MAX;
//         for(int left = 0, right = 0; right < nums.size(); right++)
//         {
//             sum += nums[right]; // 进窗口
//             while(sum >= target) // 判断
//             {
//                 len = min(len, right - left + 1); // 更新结果
//                 sum -= nums[left++]; // 出窗口
//             }
//         }

//         return len == INT_MAX ? 0 : len;
//     }
// };

// 无重复字符的最长子串
// class Solution 
// {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {
//         int n = s.size(); 
//         int ret = 0;
//         int hash[128] = { 0 }; // 利用hash查重
        
//         for(int left = 0, right = 0; right < n; right++)
//         {
//             hash[s[right]]++; // 入窗口
            
//             while(hash[s[right]] > 1)
//             {
//                 hash[s[left++]]--; // 出窗口
//             }
            
//             ret = max(ret, right - left + 1); // 更新结果
//         }
        
//         return ret;
//     }
// };

// 最大连续的一个数 Ⅲ
// class Solution 
// {
// public:
//     int longestOnes(vector<int>& nums, int k) 
//     {
//         // 问题转化为，子数组内，0的个数不超过k
//         int ret = 0;
//         for(int left = 0, right = 0, zero = 0; right < nums.size(); right++)
//         {
//             if(nums[right] == 0)
//             {
//                 zero++; // 入窗口
//             }
            
//             while(zero > k)
//             {
//                 if(nums[left++] == 0)
//                 {
//                     zero--;
//                 }
//             }
            
//             ret = max(ret, right - left + 1);
//         }
        
//         return ret;
//     }
// };

// 将x减到0的最小操作数
// class Solution 
// {
// public:
//     int minOperations(vector<int>& nums, int x) 
//     {
//         // 将模型转化为最长子数组的和 == (sumNum - x)
//         int sum = 0, ret = -1;
//         int target = -x;
        
//         for(auto& e : nums)
//         {
//             target += e;
//         }
        
//         // 细节处理，当target为负数时，怎么减都减不够
//         if(target < 0)
//         {
//             return -1;
//         }
        
//         for(int left = 0, right = 0; right < nums.size(); right++)
//         {
//             sum += nums[right]; // 入窗口
            
//             while(sum > target) // 判断
//             {
//                 sum -= nums[left++]; // 出窗口
//             }
            
//             if(sum == target)
//             {
//                 ret = max(ret, right - left + 1); // 更新结果
//             }
//         }
        
//         return ret == -1 ? -1 : nums.size() - ret;
//     }
// };

// // 水果成篮 v1.0
// class Solution 
// {
// public:
//     // 模型转化为：数组只有两个元素的最大子数组
//     int totalFruit(vector<int>& fruits) 
//     {
//         int ret = 0;
//         unordered_map<int, int> basket; // <水果种类 数量>
        
//         for(int left = 0, right = 0; right < fruits.size(); right++)
//         {
//             basket[fruits[right]]++; // 入窗口
            
//             while(basket.size() > 2) // 判断
//             {
//                 // 出窗口
//                 basket[fruits[left]]--;
                
//                 if(basket[fruits[left]] == 0)
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

// 水果成篮 v2.0 优化
// class Solution 
// {
// public:
//     // 模型转化为：数组只有两个元素的最大子数组
//     // 改造哈希表，以改善时间复杂度
//     int totalFruit(vector<int>& fruits) 
//     {
//         int ret = 0, kinds = 0;
        
//         // 水果类型小于一个定值
//         // 以空间换时间
//         int basket[100001] = { 0 };
        
//         for(int left = 0, right = 0; right < fruits.size(); right++)
//         {
//             if(basket[fruits[right]] == 0)
//             {
//                 kinds++;
//             }
//             basket[fruits[right]]++; // 入窗口
            
//             while(kinds > 2) // 判断
//             {
//                 // 出窗口
//                 basket[fruits[left]]--;
                
//                 if(basket[fruits[left]] == 0)
//                 {
//                     kinds--;
//                 }
                
//                 left++;
//             }
            
//             ret = max(ret, right - left + 1); // 更新数据
//         }
        
//         return ret;
//     }
// };

// 找到字符串中所有字母异位词 v1.0
// class Solution {
// public:
//     // 将问题转化为：p中的字母出现的次数与s中某个字串中出现的次数相同
//     vector<int> findAnagrams(string s, string p) 
//     {
//         vector<int> ret;
//         int hashS[26] = { 0 };
//         int hashP[26] = { 0 };

//         // 将p如hash
//         for(auto& ch : p)
//         {
//             hashP[ch - 'a']++;
//         }

//         // 处理s
//         int len = p.size();
//         for(int left = 0, right = 0; right < s.size(); right++)
//         {
//             hashS[s[right] - 'a']++; // 入窗口

//             if(right - left + 1 > len) // 判断窗口是否大了
//             {
//                 hashS[s[left++] - 'a']--; // 出窗口
//             }

//             if(right - left + 1 == len) // 尝试更新数据
//             {
//                 bool flag = true;
//                 for(int i = 0; i < 26; i++)
//                 {
//                     if(hashP[i] != hashS[i])
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }
                
//                 if(flag)
//                 {
//                     ret.push_back(left);
//                 }
//             }
//         }

//         return ret;
//     }
// };

// 找到字符串中所有字母异位词 v2.0
// 优化更新结果的判断条件，不用每次都遍历hash了
// class Solution {
// public:
//     // 将问题转化为：p中的字母出现的次数与s中某个字串中出现的次数相同
//     vector<int> findAnagrams(string s, string p) 
//     {
//         vector<int> ret;
//         int hashS[26] = { 0 };
//         int hashP[26] = { 0 };

//         // 将p如hash
//         for(auto& ch : p)
//         {
//             hashP[ch - 'a']++;
//         }

//         // 处理s
//         int count = 0, len = p.size();
//         for(int left = 0, right = 0; right < s.size(); right++)
//         {
//             // 入窗口 + 维护count
//             if(++hashS[s[right] - 'a'] <= hashP[s[right] - 'a'])
//             {
//                 count++; // 入窗口的字符是一个有效字符
//             }

//             if(right - left + 1 > len) // 判断窗口是否大了
//             {
//                 // 维护count
//                 if(hashS[s[left] - 'a']-- <= hashP[s[left] - 'a'])
//                 {
//                     count--; // 出窗口的元素是一个有效字符
//                 }

//                 left++; // 出窗口
//             }

//             if(count == len) // 更新结果
//             {
//                 ret.push_back(left);
//             }
//         }

//         return ret;
//     }
// };

// 串联所有单词的子串
// class Solution 
// {
// public:
//     vector<int> findSubstring(string s, vector<string>& words) 
//     {
//         int len = words[0].size();
//         unordered_map<string, int> mapS;
//         unordered_map<string, int> mapV;
//         vector<int> ret;

//         for(auto& str : words)
//         {
//             mapV[str]++;
//         }

//         for(int i = 0; i < len; i++) // 滑动窗口的执行次数
//         {
//             int count = 0;
//             for(int left = i, right = i; right + len <= s.size(); right += len)
//             {
//                 // 入窗口，截取子串，维护count
//                 string str = s.substr(right, len);
//                 mapS[str]++;

//                 // 看看mapV中是否存在str，以避免插入不需要的值
//                 if(mapV.count(str) && mapS[str] <= mapV[str]) 
//                 {
//                     count++;
//                 }

//                 // 判断窗口是否大了
//                 if(((right - left + len) / len) > words.size())
//                 {
//                     // 维护count
//                     string tmp = s.substr(left, len);
//                     if(mapV.count(tmp) && mapS[tmp]-- <= mapV[tmp])
//                     {
//                         count--;
//                     }

//                     left += len; // 出窗口
//                 }

//                 if(count == words.size()) // 更新结果
//                 {
//                     ret.push_back(left);
//                 }
//             }
//             mapS.clear();
//         }

//         return ret;
//     }
// };

// 最小覆盖字串
// class Solution 
// {
// public:
//     string minWindow(string s, string t) 
//     {
//         // 仅用数组可以避免STL的开销，提高效率
//         int hashS[128] = { 0 };
//         int hashT[128] = { 0 };
        
//         int kinds = 0;
//         for(auto& ch : t)
//         {
//             if(hashT[ch]++ == 0)
//             {
//                 kinds++;
//             }
//         }
                
//         int begin = -1, minLen = INT_MAX;
//         for(int left = 0, right = 0, count = 0; right < s.size(); right++)
//         {
//             // 入窗口
//             char in = s[right];
            
//             // 维护count，仅统计t中有效字符的种类
//             if(++hashS[in] == hashT[in])
//             {
//                 count++;
//             }
            
//             while(count == kinds) // 判断
//             {   
//                 // 更新
//                 if(right - left + 1 < minLen)
//                 {
//                     begin = left;    
//                     minLen = right - left + 1;
//                 }
                
//                 // 出窗口 && 维护count
//                 char out = s[left++];
//                 if(hashS[out]-- == hashT[out])
//                 {
//                     count--;
//                 }
//             }
//         }
        
//         string ret = "";
//         if(begin != -1)
//         {
//             ret = s.substr(begin, minLen);    
//         }
        
//         return ret;
//     }
// };

// 二分查找
// class Solution 
// {
// public:
//     int search(vector<int>& nums, int target) 
//     {
//         int left = 0, right = nums.size() - 1;
//         while(left <= right)
//         {
//             int mid = left + (right - left) / 2; // 防止溢出
//             if(nums[mid] < target)
//             {
//                 left = mid + 1;
//             }
//             else if(nums[mid] > target)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 return mid;
//             }
//         }
        
//         return -1;
//     }
// };

// 在排序数组中查找元素的第一个和最后一个位置
// class Solution 
// {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         // 处理边界情况
//         if(nums.size() == 0)
//         {
//             return {-1, -1};
//         }

//         // 二分左端点
//         int left = 0, right = nums.size() - 1;
//         while(left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if(nums[mid] < target)
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid;
//             }
//         }

//         int begin = 0;
//         if(nums[left] == target)
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
//         while(left < right)
//         {
//             int mid = left + (right - left + 1) / 2;
//             if(nums[mid] <= target)
//             {
//                 left = mid;
//             }
//             else
//             {
//                 right = mid - 1;;
//             }
//         }

//         return {begin, right};
//     }
// };

// x的平方根
// class Solution 
// {
// public:
//     // 二分查找
//     int mySqrt(int x) 
//     {
//         // 处理边界情况
//         if(x < 1)
//         {
//             return 0;
//         }
        
//         int left = 1, right = x;
//         while(left < right)
//         {
//             long long mid = left + (right - left + 1) / 2;
//             if(mid * mid <= x)
//             {
//                 left = mid;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }
        
//         return left;
//     }
// };

// 搜索插入位置
// class Solution 
// {
// public:
//     int searchInsert(vector<int>& nums, int target) 
//     {
//         int left = 0, right = nums.size() - 1;
//         while(left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if(nums[mid] >= target)
//             {
//                 right = mid;              
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }
        
//         if(nums[left] < target)
//         {
//             left++;
//         }
        
//         return left;
//     }
// };

// 山脉数组的峰顶索引
// class Solution 
// {
// public:
//     // 区间仍然具有二段性，所以可以使用二分查找
//     int peakIndexInMountainArray(vector<int>& arr) 
//     {
//         int left = 1, right = arr.size() - 2;
//         while(left < right)
//         {
//             int mid = left + (right - left + 1) / 2;
//             if(arr[mid] >= arr[mid - 1])
//             {
//                 left = mid;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }
        
//         return left;
//     }
// };

// 寻找峰值
// class Solution 
// {
// public:
//     int findPeakElement(vector<int>& nums) 
//     {
//         int left = 0, right = nums.size() - 1;
//         while(left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if(nums[mid] > nums[mid + 1])
//             {
//                 right = mid;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }
    
//         return left;
//     }
// };

// 寻找旋转排序数组中的最小值
// class Solution 
// {
// public:
//     int findMin(vector<int>& nums) 
//     {
//         int n = nums.size();
//         int left = 0, right = n - 1;
//         while(left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if(nums[mid] > nums[n - 1])
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid;
//             }
//         }

//         return nums[left];
//     }
// };

// 0?n-1 中缺失的数字
// class Solution 
// {
// public:
//     int takeAttendance(vector<int>& records) 
//     {
//         int left = 0, right = records.size() - 1;
//         while(left < right)
//         {
//             int mid = left + (right - left) / 2;
//             if(mid == records[mid])
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid;
//             }
//         }

//         return left == records[left] ? (left + 1) : left; // 处理边界情况
//     }
// };

// [模板] 前缀和
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, q = 0;
//     cin >> n >> q;

//     vector<int> arr(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     // 预处理出来一个前缀和数组
//     vector<long long> dp(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + arr[i];
//     }

//     // 使用前缀和数组
//     int l = 0, r = 0;
//     while(q--)
//     {
//         cin >> l >> r;
//         cout << dp[r] - dp[l - 1] << endl;
//     }

//     return 0;
// }

// [模板] 二维前缀和
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, m = 0, q = 0;
//     cin >> n >> m >> q;

//     // 读取数据
//     vector<vector<int>> arr(n + 1, vector<int>(m + 1));
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // 预处理前缀和矩阵
//     vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1];
//         }
//     }

//     // 使用预处理数组
//     int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//     long long ret = 0;
//     while(q--)
//     {
//         cin >> x1 >> y1 >> x2 >> y2;
//         ret = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
//         cout << ret << endl;;
//     }

//     return 0;
// }

// 寻找数组的中心下标
// class Solution 
// {
// public:
//     int pivotIndex(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> f(n), g(n);

//         // 预处理前缀和数组和后缀和数组
//         // f[i] -> [0, i - 1]区间，所有元素的和
//         for(int i = 1; i < n; i++)
//         {
//             f[i] = f[i - 1] + nums[i - 1];
//         }

//         // g[i] -> [i + 1, n - 1]区间，所有元素的和
//         for(int i = n - 2; i >= 0; i--)
//         {
//             g[i] = g[i + 1] + nums[i + 1];
//         }

//         // 使用 前缀和 && 后缀和 数组
//         for(int i = 0; i < n; i++)
//         {
//             if(f[i] == g[i])
//             {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

// 除自身以外数组的乘积
// class Solution 
// {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> f(n), g(n);
//         f[0] = 1, g[n - 1] = 1; // 细节处理

//         // 预处理前缀积数组和后缀积数组
//         for(int i = 1; i < n; i++)
//         {
//             f[i] = f[i - 1] * nums[i - 1];
//         }

//         for(int i = n - 2; i >= 0; i--)
//         {
//             g[i] = g[i + 1] * nums[i + 1];
//         }

//         // 使用
//         vector<int> ret(n);
//         for(int i = 0; i < n; i++)
//         {
//             ret[i] = f[i] * g[i];
//         }

//         return ret;
//     }
// };

// 和为k的子数组
// class Solution 
// {
// public:
//     int subarraySum(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash; // <前缀和, 次数>
//         hash[0] = 1;

//         int ret = 0, sum = 0; // 标识前一个位置的前缀和
//         for(auto& e : nums)
//         {
//             sum += e; // 计算当前位置的前缀和

//             if(hash.count(sum - k))
//             {
//                 ret += hash[sum - k];
//             }

//             hash[sum]++; // 将i位置的前缀和入hash
//         }

//         return ret;
//     }
// };

// 和可被 K 整除的子数组
// class Solution 
// {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash;// <前缀和余数, 次数>
//         hash[0] = 1;
        
//         int sum = 0, ret = 0; // 用于标记前一个位置的前缀和
//         for(auto& e : nums)
//         {
//             sum += e; // 计算当前位置的前缀和

//             int tmp = (sum % k + k) % k;
//             if(hash.count(tmp))
//             {
//                 ret += hash[tmp];
//             }

//             hash[tmp]++; // 将i位置的前缀和的余数入hash
//         }

//         return ret;
//     }
// };

// 连续数组
// class Solution 
// {
// public:
//     int findMaxLength(vector<int>& nums) 
//     {
//         unordered_map<int, int> hash; // <前缀和， 下标>
//         hash[0] = -1; // 默认有一个前缀和为0的情况

//         int sum = 0, len = 0; // 标记前一次的前缀和
//         for(int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i] == 0 ? -1 : 1;

//             if(hash.count(sum))
//             {
//                 len = max(len, i - hash[sum]); // 更新最大长度
//             }
//             else
//             {
//                 hash[sum] = i; // 将(sum, i)入hash
//             }
//         }

//         return len;
//     }
// };

// 矩阵区域和
// class Solution 
// {
// public:
//     vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
//     {
//         int row = mat.size(), col = mat[0].size();

//         // 预处理前缀和数组
//         vector<vector<int>> dp(row + 1, vector<int>(col + 1));
//         for(int i = 1; i <= row; i++)
//         {
//             for(int j = 1; j <= col; j++)
//             {
//                 // 下标映射关系 dp[x, y] -> mat[x - 1][y - 1]
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + mat[i - 1][j - 1];
//             }
//         }

//         // 使用前缀和数组
//         vector<vector<int>> ret(row, vector<int>(col));
//         for(int i = 0; i < row; i++)
//         {
//             for(int j = 0; j < col; j++)
//             {
//                 // 下标映射关系 ret[x][y] -> dp[x + 1][y + 1]
//                 int x1 = max(0, i - k) + 1;
//                 int y1 = max(0, j - k) + 1;
//                 int x2 = min(row - 1, i + k) + 1;
//                 int y2 = min(col - 1, j + k) + 1;

//                 ret[i][j] = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
//             }
//         }

//         return ret;
//     }
// };

// 判断字符是否唯一
// class Solution 
// {
// public:
//     bool isUnique(string astr) 
//     {
//         // 鸽巢优化
//         if(astr.size() > 26)
//         {
//             return false;
//         }
        
//         int bitset = 0; // 位图
//         for(auto& ch : astr)
//         {
//             int i = ch - 'a';
            
//             // 判断该字符是否出现过
//             if(((bitset >> i) & 1))
//             {
//                 return false;
//             }
            
//             // 将该字符加入位图中
//             bitset |= 1 << i;
//         }
        
//         return true;
//     }
// };

// 丢失的数字
// class Solution 
// {
// public:
//     int missingNumber(vector<int>& nums) 
//     {
//         int ret = nums.size();
//         for(int i = 0; i < nums.size(); i++)
//         {
//             ret ^= i;
//             ret ^= nums[i];
//         }
        
//         return ret;
//     }
// };

// 两整数之和
// class Solution 
// {
// public:
//     int getSum(int a, int b) 
//     {
//         while(b)
//         {
//             int ret = a ^ b; // 无进位相加
//             int carry = (a & b) << 1; // 进位
//             a = ret;
//             b = carry;
//         }
        
//         return a;
//     }
// };

// 只出现一次的数字Ⅱ
// class Solution 
// {
// public:
//     int singleNumber(vector<int>& nums) 
//     {
//         int ret = 0;
//         for(int i = 0; i < 32; i++) // 枚举每一位
//         {
//             int sum = 0;
//             for(auto& x : nums) // 统计各位1的总和
//             {
//                 if((x >> i) & 1)
//                 {
//                     sum++;
//                 }
//             }
//             sum %= 3; // 可推广到n
            
//             if(sum)
//             {
//                 ret |= 1 << i;
//             }
//         }
        
//         return ret;
//     }
// };

// 消失的两个数组
// class Solution 
// {
// public:
//     vector<int> missingTwo(vector<int>& nums) 
//     {   
//         // 将所有的数亦或到一起
//         int tmp = 0;
//         for(auto& x : nums)
//         {
//             tmp ^= x;
//         }
        
//         for(int i = 1; i <= nums.size() + 2; i++)
//         {
//             tmp ^= i;       
//         }
        
//         // 找出两个数第一个不同的bit
//         int diff = 0;
//         while(1)
//         {
//             if((tmp >> diff) & 1)
//             {
//                 break; 
//             }
//             else
//             {
//                 diff++;
//             }
//         }
        
//         // 根据diff位的不同，将所有的数划分为两类来亦或
//         int a = 0, b = 0;
//         for(auto& x : nums)
//         {
//             if((x >> diff) & 1)
//             {
//                 a ^= x;
//             }
//             else
//             {
//                 b ^= x;
//             }
//         }
        
//         for(int i = 1; i <= nums.size() + 2; i++)
//         {
//             if((i >> diff) & 1)
//             {
//                 a ^= i;
//             }
//             else
//             {
//                 b ^= i;
//             }
//         }
        
//         return {a, b};
//     }
// };

// 替换所有的问号
// class Solution 
// {
// public:
//     string modifyString(string s) 
//     {
//         for(int i = 0; i < s.size(); i++)
//         {
//             if(s[i] == '?')
//             {
//                 for(char ch = 'a'; ch <= 'z'; ch++)
//                 {
//                     // || 短路设计比较精髓
//                     if((i == 0 || ch != s[i - 1]) && (i == n - 1 || ch != s[i + 1]))
//                     {
//                         s[i] = ch;
//                     }
//                 }
//             }
//         }

//         return s;
//     }
// };

// 提莫攻击
// class Solution 
// {
// public:
//     int FindPoisonedDuration(vector<int>& timeSeries, int duration) 
//     {
//         int ret = 0;
//         for(int i = 1; i < timeSeries.size(); i++)
//         {
//             int interval = timeSeries[i] - timeSeries[i - 1];
//             if(interval >= duration)
//             {
//                 ret += duration;
//             }
//             else
//             {
//                 ret += interval;
//             }
//         }

//         return ret + duration;
//     }
// };

// N字形变换
// class Solution 
// {
// public:
//     // 本模拟找规律
//     string convert(string s, int numRows) 
//     {
//         // 处理边界情况
//         if(numRows == 1)
//         {
//             return s;
//         }

//         string ret;
//         int n = s.size(), d = 2 * numRows - 2;

//         // 第一行
//         for(int i = 0; i < n; i += d)
//         {
//             ret += s[i]; 
//         }

//         // 第二行 -- 倒数第二行
//         for(int k = 1; k < numRows - 1; k++) // 枚举每一行
//         {
//             for(int i = k, j = d - k; i < n || j < n; i += d, j += d)
//             {
//                 if(i < n)
//                 {
//                     ret += s[i];
//                 }

//                 if(j < n)
//                 {
//                     ret += s[j];
//                 }
//             }
//         }

//         // 最后一行
//         for(int i = numRows - 1; i < n; i += d)
//         {
//             ret += s[i];
//         }

//         return ret;
//     }
// };

// 外观数列
// 控制逻辑 v1.0
// class Solution 
// {
// public:
//     string countAndSay(int n) 
//     {
//         string src = "1";
//         for(int i = 2; i <= n; i++) // 控制行
//         {
//             // 双指针
//             string ret;
//             int left = 0, right = 0;

//             // 自己控代码的逻辑
//             for(; right < src.size(); right++)
//             {
//                 if(src[left] != src[right])
//                 {
//                     ret += to_string(right - left) + src[left];
//                     left = right;
//                 }
//             }

//             // 处理最后的一组数
//             ret += to_string(right - left) + src[left];

//             src = ret;
//         }

//         return src;
//     }
// };

// 控制逻辑 v2.0
// class Solution 
// {
// public:
//     string countAndSay(int n) 
//     {
//         string src = "1";
//         for(int i = 2; i <= n; i++) // 控制行
//         {
//             // 双指针
//             string ret;
//             for(int left = 0, right = 0; right < src.size();)
//             {
//                 while(right < src.size() && src[left] == src[right])
//                 {
//                     right++;
//                 }
//                 ret += to_string(right - left) + src[left];
                
//                 left = right;
//             }

//             src = ret;
//         }

//         return src;
//     }
// };

// 数青蛙
// class Solution 
// {
// public:
//     int MinNumberOfFrogs(string croakOfFrogs) 
//     {
//         string str = "croak";
//         int n = str.size();
//         vector<int> hash(n); // 用数组模拟哈希
        
//         unordered_map<char, int> index; // <ch, index>
//         for(int i = 0; i < n; i++)
//         {
//             index[str[i]] = i;
//         }
        
//         for(auto& ch : croakOfFrogs)
//         {
//             if(ch == 'c')
//             {
//                 if(hash[n - 1]) // k已存在
//                 {
//                     hash[n - 1]--;
//                 }
//                 hash[0]++;
//             }
//             else
//             {
//                 int i = index[ch];
//                 if(hash[i - 1] == 0)
//                 {
//                     return -1;
//                 }
//                 hash[i - 1]--;
//                 hash[i]++;
//             }
//         }
        
//         for(int i = 0; i < n - 1; i++)
//         {
//             if(hash[i] != 0)
//             {
//                 return -1;
//             }
//         }
        
//         return hash[n - 1];
//     }
// };

// 颜色分类
// class Solution 
// {
// public:
//     void SortColors(vector<int>& nums) 
//     {
//         int i = 0, left = -1, right = nums.size(); // 三指针
//         while(i < right)
//         {
//             if(nums[i] == 0)
//             {
//                 swap(nums[++left], nums[i++]);
//             }
//             else if(nums[i] == 1)
//             {
//                 i++;
//             }
//             else // nums[i] == 2
//             {
//                 // 此处i无需往后迭代，因为此处元素仍属于未扫描
//                 swap(nums[--right], nums[i]);
//             }
//         }
//     }
// };

// 快速排序
// 数组分三块 + 随机基准
// class Solution 
// {
// public:
//     vector<int> sortArray(vector<int>& nums) 
//     {
//         srand(time(nullptr)); // 种下随机数种子
//         QuickSort(nums, 0, nums.size() - 1);
//         return nums;
//     }

//     void QuickSort(vector<int>& nums, int l, int r)
//     {

//         if(l >= r)
//         {
//             return ;
//         }

//         // 数组分三块
//         int key = nums[rand() % (r - l + 1) + l];
//         int i = l, left = l - 1, right = r + 1;
//         while(i < right)
//         {
//             if(nums[i] < key)
//             {
//                 swap(nums[++left], nums[i++]);
//             }
//             else if(nums[i] == key)
//             {
//                 i++;
//             }
//             else // nums[i] > key
//             {
//                 swap(nums[--right], nums[i]);
//             }
//         }

//         // 递归左右区间
//         // [l, left] [left + 1, right - 1] [right, r]
//         QuickSort(nums, l, left);
//         QuickSort(nums, right, r);
//     }
// };

// 数组中第K个最大元素
// class Solution 
// {
// public:
//     int FindKthLargest(vector<int>& nums, int k) 
//     {
//         srand(time(nullptr));
//         return QuickSort(nums, 0, nums.size() - 1, k);    
//     }
    
//     int QuickSort(vector<int>& nums, int l, int r, int k)
//     {
//         if(l == r)
//         {
//             return nums[l];
//         }
        
//         // 数组分三块
//         int key = nums[rand() % (r - l + 1) + l];
//         int i = l, left = l - 1, right = r + 1;
//         while(i < right)
//         {
//             if(nums[i] < key)
//             {
//                 swap(nums[++left], nums[i++]);
//             }
//             else if(nums[i] == key)
//             {
//                 i++;
//             }
//             else // nums[i] > key
//             {
//                 swap(nums[--right], nums[i]);
//             }
//         }
        
//         // 分情况讨论
//         int c = r - right + 1, b = right - left - 1;
//         if(c >= k)
//         {
//             return QuickSort(nums, right, r, k);
//         }
//         else if(b + c >= k)
//         {
//             return key;
//         }
//         else
//         {
//             return QuickSort(nums, l, left, k - b - c);
//         }
//     }
// };

// 库存管理
// class Solution 
// {
// public:
//     vector<int> InventoryManagement(vector<int>& nums, int k) 
//     {
//         srand(time(nullptr));
//         QuickSort(nums, 0, nums.size()- 1, k);
//         return {nums.begin(), nums.begin() + k};
//     }
    
//     void QuickSort(vector<int>& nums, int l, int r, int k)
//     {
//         if(l >= r)
//         {
//             return;
//         }
        
//         int key = nums[rand() % (r - l + 1) + l];
//         int i = l, left = l - 1, right = r + 1;
//         while(i < right)
//         {
//             if(nums[i] < key)
//             {
//                 swap(nums[++left], nums[i++]);
//             }
//             else if(nums[i] == key)
//             {
//                 i++;
//             }
//             else // nums[i] > key
//             {
//                 swap(nums[--right], nums[i]);
//             }
//         }
        
//         // [l, left] [left + 1, right - 1] [right, r]
//         // 分情况讨论
//         int a = left - l + 1, b = right - left - 1;
//         if(a > k)
//         {
//             QuickSort(nums, l, left, k);
//         }
//         else if(a + b >= k)
//         {
//             return;
//         }
//         else
//         {
//             QuickSort(nums, right, r, k - a - b);
//         }
//     }
// };

// 排序数组
// class Solution 
// {
//     vector<int> assist; // 归并时的辅助数组
// public:
//     vector<int> SortArray(vector<int>& nums) 
//     {
//         assist.resize(nums.size());
//         MergeSort(nums, 0, nums.size() - 1);
//         return nums;
//     }

//     void MergeSort(vector<int>& nums, int left, int right)
//     {
//         if(left >= right)
//         {
//             return;
//         }

//         // 1.选择中间点划分区间
//         int mid = left + (right - left) / 2;

//         // 2.排序左右区间
//         // [left, mid] [mid + 1, right]
//         MergeSort(nums, left, mid);
//         MergeSort(nums, mid + 1, right);

//         // 3.合并两个有序数组
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//         }

//         // 4.处理没有遍历完的数组
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // 5.还原
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }
//     }
// };

// 交易逆序对的总数
// v1.0 升序
// class Solution 
// {
//     vector<int> assist;
// public:
//     int ReversePairs(vector<int>& nums) 
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

// v2.0 降序
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
//                 assist[i++] = nums[cur2++];
//             }
//             else
//             {
//                 ret += right - cur2 + 1;
//                 assist[i++] = nums[cur1++];
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

// 计算右侧小于当前元素的个数
// class Solution 
// {
//     vector<int> ret;
//     vector<int> index;
//     vector<int> assistNums;
//     vector<int> assistIndex;
// public:
//     vector<int> countSmaller(vector<int>& nums) 
//     {
//         int n = nums.size();
//         ret.resize(n);
//         index.resize(n);
//         assistNums.resize(n);
//         assistIndex.resize(n);
        
//         // 初始化index
//         for(int i = 0; i < n; i++)
//         {
//             index[i] = i;
//         }
        
//         MergeSort(nums, 0, n - 1);
        
//         return ret;
//     }
    
//     void MergeSort(vector<int>& nums, int left, int right)
//     {
//         if(left >= right)
//         {
//             return;
//         }
        
//         // 中间点，划分数组
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
        
//         // 先处理左右子数组
//         MergeSort(nums, left, mid);
//         MergeSort(nums, mid + 1, right);
        
//         // 处理一左一右 + 排序(降序)
//         // 元素和下标同步迁移
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             if(nums[cur1] <= nums[cur2])
//             {
//                 assistNums[i] = nums[cur2];
//                 assistIndex[i++] = index[cur2++];
//             }
//             else
//             {
//                 ret[index[cur1]] += right - cur2 + 1; // 统计 -> 重点
//                 assistNums[i] = nums[cur1];
//                 assistIndex[i++] = index[cur1++];
//             }
//         }
        
//         // 处理未遍历完数组
//         while(cur1 <= mid)
//         {
//             assistNums[i] = nums[cur1];
//             assistIndex[i++] = index[cur1++];
//         }
        
//         while(cur2 <= right)
//         {
//             assistNums[i] = nums[cur2];
//             assistIndex[i++] = index[cur2++];
//         }
        
//         // 还原
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assistNums[i - left];
//             index[i] = assistIndex[i - left];
//         }
//     }
// };

// 翻转对
// // v1.0 降序
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
//         // 中间点，划分两区间
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
    
//         // 先计算左右子区间翻转对
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // 计算一左一右翻转对的数量
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid) // 降序 固定cur1
//         {
//             while(cur2 <= right && nums[cur2] >= nums[cur1] / 2.0)
//             {
//                 cur2++;
//             }

//             if(cur2 > right)
//             {
//                 break;
//             }

//             ret += right - cur2 + 1;
//             cur1++;
//         }

//         // 合并两个有序数组
//         cur1 = left, cur2 = mid + 1;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur2++] : nums[cur1++];
//         }

//         // 处理未遍历完数组
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

// v2.0 升序
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
//         // 中间点，划分两区间
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
    
//         // 先计算左右子区间翻转对
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // 计算一左一右翻转对的数量
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur2 <= right) // 升序  固定cur2
//         {
//             while(cur1 <= mid && nums[cur2] >= nums[cur1] / 2.0)
//             {
//                 cur1++;
//             }

//             // 优化
//             if(cur1 > mid)
//             {
//                 break;
//             }

//             ret += mid - cur1 + 1;
//             cur2++;
//         }

//         // 合并两个有序数组
//         cur1 = left, cur2 = mid + 1;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//         }

//         // 处理未遍历完数组
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

// 两数相加
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution 
// {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode* head = new ListNode(0);
//         ListNode* cur1 = l1, *cur2 = l2;
//         ListNode* tail = head; // 尾指针

//         int carry = 0; // 记录进位 & 临时数据
//         while(cur1 || cur2 || carry)
//         {
//             if(cur1)
//             {
//                 carry += cur1->val;
//                 cur1 = cur1->next;
//             }

//             if(cur2)
//             {
//                 carry += cur2->val;
//                 cur2 = cur2->next;
//             }

//             tail->next = new ListNode(carry % 10);
//             tail = tail->next;

//             carry /= 10;
//         }

//         ListNode* ret = head->next;
//         delete head;

//         return ret;
//     }
// };

// 两两交换链表中的结点
// class Solution 
// {
// public:
//     ListNode* swapPairs(ListNode* list) 
//     {
//         // 边界处理
//         if(list == nullptr || list->next == nullptr)
//         {
//             return list;
//         }

//         ListNode *head = new ListNode(0);
//         head->next = list;

//         ListNode *prev = head, *cur = head->next, *next = cur->next, *nNext = next->next;

//         while(cur && next)
//         {
//             // Swap
//             prev->next = next;
//             next->next = cur;
//             cur->next = nNext;

//             // Update
//             prev = cur;
//             cur = nNext; 
//             if(cur)
//             {
//                 next = cur->next;
//             }
//             if(next)
//             {
//                 nNext = next->next;
//             }
//         }

//         ListNode *ret = head->next;
//         delete head;

//         return ret;
//     }
// };

// 重排链表
// class Solution 
// {
// public:
//     void reorderList(ListNode* head) 
//     {
//         // 边界处理
//         if(!(head || head->next || head->next->next))
//         {
//             return;
//         }

//         // 1.找到链表的中间结点 -> 快慢指针
//         ListNode *slow = head, *fast = head;
//         while(fast && fast->next) // 偶 && 奇
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // 2.逆序后半部分 -> 头插
//         ListNode *head2 = new ListNode(0);
//         ListNode *cur = slow->next;
//         slow->next = nullptr; // 断开两个链表
//         while(cur)
//         {
//             ListNode *next = cur->next;
//             cur->next = head2->next;
//             head2->next = cur;
//             cur = next;
//         }

//         // 3.合并两个链表 -> 尾插 -> 双指针
//         ListNode *ret = new ListNode(0);
//         ListNode *tail = ret;
//         ListNode *cur1 = head, *cur2 = head2->next;
//         while(cur1)
//         {
//             // 先连第一个链表
//             tail->next = cur1;
//             tail = tail->next;
//             cur1 = cur1->next;

//             // 再连第二个链表
//             if(cur2)
//             {
//                 tail->next = cur2;
//                 tail = tail->next;
//                 cur2 = cur2->next;
//             }
//         }

//         delete head2;
//         delete ret;
//     }
// };

// 合并K个升序链表
// v1.0 堆
// class Solution 
// {
//     struct Cmp
//     {
//         bool operator()(const ListNode* l1, const ListNode* l2)
//         {
//             return l1->val > l2->val;
//         }
//     };
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) 
//     {
//         // 创建一个小根堆
//         priority_queue<ListNode*, vector<ListNode*>, Cmp> heap;

//         // 让所有头结点入堆
//         for(auto& list : lists)
//         {
//             if(list)
//             {
//                 heap.push(list);
//             }
//         }

//         // 合并K个有序链表
//         ListNode* ret = new ListNode(0);
//         ListNode* tail = ret;
//         while(!heap.empty())
//         {
//             ListNode* tmp = heap.top();
//             heap.pop();

//             tail->next = tmp;
//             tail = tail->next;

//             if(tmp->next)
//             {
//                 heap.push(tmp->next);
//             }
//         }

//         tail = ret->next;
//         delete ret;

//         return tail;
//     }
// };

// v2.0 递归/分治
// class Solution 
// {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) 
//     {
//         return Merge(lists, 0, lists.size() - 1);
//     }

//     ListNode* Merge(vector<ListNode*>& lists, int left, int right)
//     {
//         // 边界情况处理
//         if(left > right)
//         {
//             return nullptr;
//         }

//         if(left == right)
//         {
//             return lists[left];
//         }

//         // 中间点划分数组
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]

//         // 递归处理左右区间
//         ListNode* l1 = Merge(lists, left, mid);
//         ListNode* l2 = Merge(lists, mid + 1, right);

//         // 合并两个有序链表
//         return MergeTwoLists(l1, l2);
//     }

//     ListNode* MergeTwoLists(ListNode* l1, ListNode* l2)
//     {
//         // 边界情况处理
//         if(l1 == nullptr)
//         {
//             return l2;
//         }

//         if(l2 == nullptr)
//         {
//             return l1;
//         }

//         // 合并两有序链表
//         ListNode head(0);
//         ListNode *cur1 = l1, *cur2 = l2, *tail = &head;
//         while(cur1 && cur2)
//         {
//             if(cur1->val <= cur2->val)
//             {
//                 tail->next = cur1;
//                 tail = tail->next;

//                 cur1 = cur1->next;
                
//             }
//             else
//             {
//                 tail->next = cur2;
//                 tail = tail->next;

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

//         return head.next;
//     }
// };

// K个一组翻转链表
// ListNode* ReverseKGroup(ListNode* head, int k) 
// {
//     // 遍历求n
//     int n = 0;
//     ListNode* cur = head;
//     while(cur)
//     {
//         n++;
//         cur = cur->next;
//     }
//     n /= k;

//     // 重复n次逆序长度为k的链表 -> 头插
//     ListNode ret(0);
//     ListNode *prev = &ret;
//     cur = head;
//     while(n--)
//     {
//         ListNode *back = cur;
//         for(int i = 0; i < k; i++)
//         {
//             ListNode* next = cur->next;
//             cur->next = prev->next;
//             prev->next = cur;
//             cur = next;
//         }
//         prev = back; // 更次每次头插的"头"
//     }

//     // 链接剩下的结点
//     prev->next = cur;

//     return ret.next;
// }

// 两数相加
// class Solution 
// {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         unordered_map<int, int> hash; // <nums[i], i>
//         for(int i = 0; i < nums.size(); i++)
//         {
//             int tmp = target - nums[i];
//             if(hash.count(tmp))
//             {
//                 return {hash[tmp], i};
//             }

//             hash[nums[i]] = i;
//         }

//         return {-1, -1};
//     }
// };

// 判断是否互为字符重排
// class Solution 
// {
// public:
//     bool CheckPermutation(string s1, string s2) 
//     {
//         if(s1.size() != s2.size()) 
//         {
//             return false;
//         }

//         int hash[26] = { 0 };
//         for(auto& ch : s1)
//         {
//             hash[ch - 'a']++;
//         }

//         for(auto& ch : s2)
//         {
//             hash[ch - 'a']--;
//             if(hash[ch - 'a'] < 0)
//             {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// 存在重复元素
// class Solution 
// {
// public:
//     bool containsDuplicate(vector<int>& nums) 
//     {
//         unordered_set<int> hash; // <nums[i]>
//         for(auto& x : nums)
//         {
//             if(hash.count(x))
//             {
//                 return true;
//             }
//             else
//             {
//                 hash.insert(x);
//             }
//         }

//         return false;
//     }
// };

// 存在重复元素Ⅱ
// class Solution 
// {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash; // <nums[i], i>
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(hash.count(nums[i]) && i - hash[nums[i]] <= k)
//             {
//                 return true;
//             }

//             hash[nums[i]] = i;
//         }

//         return false;
//     }
// };

// 字母异位词分组
// class Solution 
// {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) 
//     {
//         unordered_map<string, vector<string>> hash;
//         for(auto& str : strs)
//         {
//             string tmp = str;
//             sort(tmp.begin(), tmp.end());
//             hash[tmp].push_back(str);
//         }

//         vector<vector<string>> ret;
//         for(auto& [x, y] : hash) // 这种写法积累下来
//         {
//             ret.push_back(y);
//         }

//         return ret;
//     }
// };

// 最长公共子串
// v1.0 两两比较
// class Solution 
// {
// public:
//     string longestCommonPrefix(vector<string>& strs) 
//     {
//         string ret = strs[0];
//         for(int i = 1; i < strs.size(); i++)
//         {
//             ret = FindCommon(ret, strs[i]);
//         }

//         return ret;
//     }

//     string FindCommon(const string& str1, const string& str2)
//     {
//         int i = 0;
//         while(i < min(str1.size(), str2.size()) && str1[i] == str2[i])
//         {
//             i++;
//         }

//         return str1.substr(0, i);
//     }
// };

// v2.0 统一比较
// class Solution 
// {
// public:
//     string longestCommonPrefix(vector<string>& strs) 
//     {
//         for(int i = 0; i < strs[0].size(); i++) // 控制第几个字符
//         {
//             char tmp = strs[0][i];
//             for(int j = 1; j < strs.size(); j++) // 控制第几个string
//             {
//                 if(i == strs[j].size() || tmp != strs[j][i])
//                 {
//                     return strs[0].substr(0, i); // 包含了空串的情况
//                 }
//             }
//         }

//         return strs[0];
//     }
// };

// 最长回文子串
// class Solution 
// {
// public:
//     string longestPalindrome(string s) 
//     {
//         int begin = 0, len = 0, n = s.size();
//         for(int i = 0; i < n; i++) // 枚举所有的点
//         {
//             // 奇数长度扩展
//             int left = i, right = i;
//             while(left >= 0 && right < n && s[left] == s[right])
//             {
//                 left--;
//                 right++;
//             }

//             if(len < right - left - 1)
//             {
//                 begin = left + 1;
//                 len = right - left - 1;
//             }

//             // 偶数长度扩展
//             left = i, right = i + 1;
//             while(left >= 0 && right < n && s[left] == s[right])
//             {
//                 left--;
//                 right++;
//             }

//             if(len < right - left - 1)
//             {
//                 begin = left + 1;
//                 len = right - left - 1;
//             }
//         }

//         return s.substr(begin, len);
//     }
// };

// 二进制求和
// class Solution 
// {
// public:
//     string addBinary(string a, string b) 
//     {
//         string ret;
//         int cur1 = a.size() - 1, cur2 = b.size() - 1, carry = 0;
//         while(cur1 >= 0 || cur2 >= 0 || carry)
//         {
//             if(cur1 >= 0)
//             {
//                 carry += a[cur1--] - '0';
//             }

//             if(cur2 >= 0)
//             {
//                 carry += b[cur2--] - '0';
//             }

//             ret += carry % 2 + '0';
//             carry /= 2;
//         }

//         reverse(ret.begin(), ret.end());

//         return ret;
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
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 tmp[i + j] += (num1[i] - '0') * (num2[j] - '0');
//             }
//         }

//         // 进位
//         int cur = 0, carry = 0;
//         string ret;
//         while(cur < n + m - 1 || carry)
//         {
//             if(cur < n + m - 1)
//             {
//                 carry += tmp[cur++];
//             }

//             ret += carry % 10 + '0';
//             carry /= 10;
//         }

//         // 处理前导0
//         while(ret.size() > 1 && ret.back() == '0')
//         {
//             ret.pop_back();
//         }

//         reverse(ret.begin(), ret.end());

//         return ret;
//     }
// };

// 删除字符串中的所有相邻重复项
// class Solution 
// {
// public:
//     string removeDuplicates(string s) 
//     {
//         string ret; // string模拟stack
//         for(auto& ch : s)
//         {
//             if(!ret.empty() && ret.back() == ch)
//             {
//                 ret.pop_back();
//             }
//             else
//             {
//                 ret += ch;
//             }
//         }

//         return ret;
//     }
// };

// 比较含退格的字符串
// class Solution 
// {
// public:
//     bool backspaceCompare(string s, string t) 
//     {
//         string ret1, ret2;
//         for(auto& ch : s)
//         {
//             if(ret1.size() && ch == '#')
//             {
//                 ret1.pop_back();
//             }
//             else if(ch != '#')
//             {
//                 ret1 += ch;
//             }
//         }

//         for(auto& ch : t)
//         {
//             if(ret2.size() && ch == '#')
//             {
//                 ret2.pop_back();
//             }
//             else if(ch != '#')
//             {
//                 ret2 += ch;
//             }
//         }

//         return ret1 == ret2;
//     }
// };

// 基本计算器Ⅱ
// class Solution 
// {
// public:
//     int calculate(string s) 
//     {
//         char op = '+';
//         int n = s.size();
//         vector<int> st; // vector模拟stack

//         int i = 0;
//         while(i < n)
//         {
//             if(s[i] == ' ')
//             {
//                 i++;
//             }
//             else if(s[i] >= '0' && s[i] <= '9')
//             {
//                 // 提取数字
//                 int num = 0;
//                 while(i < n && s[i] >= '0' && s[i] <= '9')
//                 {
//                     num = num * 10 + (s[i++] - '0'); // ()防止int溢出
//                 }

//                 // 分情况讨论
//                 if(op == '+')
//                 {
//                     st.push_back(num);
//                 }                
//                 else if(op == '-')
//                 {
//                     st.push_back(-num);
//                 }
//                 else if(op == '*')
//                 {
//                     st.back() *= num;
//                 }
//                 else
//                 {
//                     st.back() /= num;
//                 }
//             }
//             else
//             {
//                 op = s[i];
//                 i++;
//             }
//         }

//         size_t ret = 0;
//         for(auto& x : st)
//         {
//             ret += x;
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
//         strSt.push(""); // 细节，放溢出:P

//         int i = 0, n = s.size();
//         while(i < n)
//         {
//             if(isdigit(s[i]))
//             {
//                 // 提取数字
//                 int num = s[i++] - '0';
//                 while(isdigit(s[i]))
//                 {
//                     num = num * 10 + (s[i++] - '0');
//                 }

//                 numSt.push(num);
//             }
//             else if(s[i] == '[')
//             {
//                 i++;
                
//                 // 提取字符串，入栈
//                 string tmp;
//                 while(isalpha(s[i]))
//                 {
//                     tmp += s[i++];
//                 }

//                 strSt.push(tmp);
//             }
//             else if(s[i] == ']') // error
//             {
//                 i++;

//                 // 解析，加入到栈顶后面
//                 int k = numSt.top();
//                 numSt.pop();
//                 string tmp = strSt.top();
//                 strSt.pop();

//                 string str;
//                 while(k--)
//                 {
//                     str += tmp;
//                 }

//                 strSt.top() += str;
//             }
//             else
//             {
//                 // 提取字符串，入栈
//                 string tmp;
//                 while(i < n && isalpha(s[i]))
//                 {
//                     tmp += s[i++];
//                 }

//                 strSt.top() += tmp;
//             }
//         }

//         return strSt.top();
//     }
// };

// 验证栈序列
// class Solution 
// {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
//     {
//         stack<int> st;

//         int i = 0;
//         for(auto& x : pushed)
//         {
//             st.push(x);

//             while(st.size() && st.top() == popped[i])
//             {
//                 st.pop();
//                 i++;
//             }
//         }
        
//         return st.empty();
//     }
// };

// N叉树的层序遍历
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
// class Solution 
// {
// public:
//     vector<vector<int>> levelOrder(Node* root) 
//     {
//         vector<vector<int>> ret; // 记录最终结果
//         queue<Node*> q; // 层序遍历需要的队列
        
//         if(root == nullptr)
//         {
//             return ret;
//         }
        
//         q.push(root);
//         while(q.size())
//         {
//             int sz = q.size(); // 提取本层元素个数
//             vector<int> tmp; // 统计本层元素
            
//             while(sz--)
//             {
//                 Node* node = q.front();
//                 q.pop();
                
//                 tmp.push_back(node->val);
                
//                 // 将该结点下一层入队列
//                 for(auto& child : node->children)
//                 {
//                     if(child != nullptr)
//                     {
//                         q.push(child);    
//                     }
//                 }
//             }
            
//             ret.push_back(tmp);
//         }
        
//         return ret;
//     }
// };

// 二叉树的锯齿形层序遍历
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
//     {
//         vector<vector<int>> ret;
//         queue<TreeNode*> q;
        
//         if(root == nullptr)
//         {
//             return ret;
//         }
        
//         q.push(root);
//         bool rvs = false; // reverse
//         while(q.size())
//         {
//             int sz = q.size(); // 本层元素个数
//             vector<int> tmp; // 统计本层元素
            
//             while(sz--)
//             {
//                 TreeNode* node = q.front();
//                 q.pop();
                
//                 tmp.push_back(node->val);
                
//                 // 孩子节点入队列
//                 if(node->left)
//                 {
//                     q.push(node->left);    
//                 }
                
//                 if(node->right)
//                 {
//                     q.push(node->right);    
//                 }
//             }
            
//             if(rvs)
//             {
//                 reverse(tmp.begin(), tmp.end());
//             }
//             rvs = !rvs;
            
//             ret.push_back(tmp);
//         }
        
//         return ret;
//     }
// };

// 二叉树的最大宽度
// class Solution 
// {
// public:
//     int widthOfBinaryTree(TreeNode* root) 
//     {
//         vector<pair<TreeNode*, size_t>> q; // 用vector模拟queue
//         q.push_back({root, 1});
        
//         size_t ret = 0;        
//         while(q.size())
//         {
//             auto& [x1, y1] = q[0]; // 队头
//             auto& [x2, y2] = q.back(); // 队尾
            
//             ret = max(ret, y2 - y1 + 1);
            
//             // 将下一层入队列
//             vector<pair<TreeNode*, size_t>> tmp;
//             for(auto& [x, y] : q)
//             {
//                 if(x->left)
//                 {
//                     tmp.push_back({x->left, 2 * y});
//                 }
                
//                 if(x->right)
//                 {
//                     tmp.push_back({x->right, 2 * y + 1});
//                 }
//             }
//             q = tmp; // 覆盖原队列，避免了队列的头删
//         }
        
//         return ret;
//     }
// };

// 在每个树?中找最?值
// class Solution 
// {
// public:
//     vector<int> largestValues(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return {};
//         }
        
//         vector<int> ret;
//         queue<TreeNode*> q;
        
//         q.push(root);
//         while(q.size())
//         {
//             int sz = q.size(), maxV = INT_MIN;
//             while(sz--)
//             {
//                 TreeNode* node = q.front();
//                 q.pop();
                
//                 maxV = max(maxV, node->val);
                
//                 // 将下一层入队列
//                 if(node->left)
//                 {
//                     q.push(node->left);
//                 }
                
//                 if(node->right)
//                 {
//                     q.push(node->right);
//                 }
//             }
            
//             ret.push_back(maxV);
//         }
        
//         return ret;
//     }
// };

// 最后一块石头的重量
// class Solution 
// {
// public:
//     int lastStoneWeight(vector<int>& stones) 
//     {
//         priority_queue<int> heap; // STL默认大根堆
//         for(auto& x : stones)
//         {
//             heap.push(x);
//         }

//         // 模拟过程
//         while(heap.size() > 1)
//         {
//             int a = heap.top();
//             heap.pop();
//             int b = heap.top();
//             heap.pop();

//             if(a > b)
//             {
//                 heap.push(a - b);
//             }
//         }

//         return heap.size() ? heap.top() : 0;
//     }
// };

// 数据流中的第K大元素
// class KthLargest 
// {
//     // 创建一个大小为k的小根堆
//     priority_queue<int, vector<int>, greater<int>> heap;
//     int _k = 0;
// public:
//     KthLargest(int k, vector<int>& nums) 
//     {
//         _k = k;
//         for(auto& x : nums)
//         {
//             heap.push(x);
//             if(heap.size() > _k)
//             {
//                 heap.pop();
//             }
//         }
//     }
    
//     int add(int val) 
//     {
//         heap.push(val);
//         if(heap.size() > _k)
//         {
//             heap.pop();
//         }

//         return heap.top();
//     }
// };

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

// 前k个高频单词
//  class Solution 
// {
//     typedef pair<string, int> PSI;

//     struct Cmp
//     {
//         bool operator()(PSI& a, PSI& b)
//         {
//             // 频次相同，字典序按大根堆排序
//             if(a.second == b.second)
//             {
//                 return a.first < b.first;
//             }

//             // 频次按小根堆排序
//             return a.second > b.second;
//         }
//     };
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) 
//     {
//         // 统计每个单词出现的次数
//         unordered_map<string, int> hash;
//         for(auto& str : words)
//         {
//             hash[str]++;
//         }

//         // 创建一个大小为k的堆
//         priority_queue<PSI, vector<PSI>, Cmp> heap;

//         // TOP-K
//         for(auto& psi : hash)
//         {
//             heap.push(psi);
//             if(heap.size() > k)
//             {
//                 heap.pop();
//             }
//         }

//         // 提取结果，逆序heap
//         vector<string> ret(k);
//         for(int i = k - 1; i >= 0; i--)
//         {
//             ret[i] = heap.top().first;
//             heap.pop();
//         }

//         return ret;
//     }
// };

// 数据流的中位数
// class MedianFinder 
// {
//     priority_queue<int> left; // 大根堆
//     priority_queue<int, vector<int>, greater<int>> right; // 小根堆
// public:
//     MedianFinder() 
//     {}
    
//     void addNum(int num) 
//     {
//         if(left.size() == right.size())
//         {
//             if(left.empty() || num <= left.top())
//             {
//                 left.push(num);
//             }
//             else
//             {
//                 right.push(num);
//                 left.push(right.top());
//                 right.pop();
//             }
//         }
//         else
//         {
//             if(num <= left.top())
//             {
//                 left.push(num);
//                 right.push(left.top());
//                 left.pop();
//             }
//             else
//             {
//                 right.push(num);
//             }
//         }
//     }
    
//     double findMedian() 
//     {
//         if(left.size() == right.size())
//         {
//             return (left.top() + right.top()) / 2.0;
//         }
//         else
//         {
//             return left.top();
//         }
//     }
// };

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

 // 图像渲染
// class Solution 
// {
//     // "方向"向量数组 
//     int dx[4] = {0, 0, 1, -1};
//     int dy[4] = {1, -1, 0, 0};
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
//     {
//         int target = image[sr][sc];
//         if(color == target) // 边界情况处理
//         {
//             return image;
//         }
        
//         int n = image.size(), m = image[0].size();
//         queue<pair<int, int>> q; // <row, col>
//         q.push({sr, sc});
        
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();
//             image[a][b] = color;
            
//             // 将下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];
                
//                 // 防止越界 && 颜色符合
//                 if(x >= 0 && x < n && y >= 0 && y < m && image[x][y] == target)
//                 {
//                     q.push({x, y});    
//                 }
//             }
//         }
        
//         return image;
//     }
// };

// 岛屿数量
//class Solution
//{
//    int n, m;
//    vector<vector<bool>> visit;
//
//    // "方向"向量数组
//    int dx[4] = { 1, -1, 0, 0 };
//    int dy[4] = { 0, 0, 1, -1 };
//public:
//    int numIslands(vector<vector<char>>& grid)
//    {
//        int ret = 0;
//        n = grid.size(), m = grid[0].size();
//        visit.resize(n, vector<bool>(m, false));
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (grid[i][j] == '1' && !visit[i][j])
//                {
//                    ret++;
//                    BFS(grid, i, j); // 标记这整块陆地
//                }
//            }
//        }
//
//        return ret;
//    }
//
//    void BFS(vector<vector<char>>& grid, int row, int col)
//    {
//        visit[row][col] = true;
//        queue<pair<int, int>> q;
//        q.push({ row, col });
//
//        // BFS主逻辑
//        while (q.size())
//        {
//            auto [a, b] = q.front();
//            q.pop();
//
//            // 将下一层入队列
//            for (int i = 0; i < 4; i++)
//            {
//                int x = a + dx[i], y = b + dy[i];
//
//                if (x >= 0 && x < n && y >= 0 && y < m && \
//                    grid[x][y] == '1' && !visit[x][y])
//                {
//                    visit[x][y] = true;
//                    q.push({ x, y });
//                }
//            }
//        }
//    }
//};

// 岛屿的最大面积
// class Solution 
// {
//     int n, m;
//     vector<vector<bool>> visit;

//     // 方向向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int MaxAreaOfIsland(vector<vector<int>>& grid) 
//     {
//         n = grid.size(), m = grid[0].size();
//         visit.resize(n, vector<bool>(m, false));
        
//         int area = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] == 1 && !visit[i][j])
//                 {
//                     area = max(area, BFS(grid, i, j));
//                 }
//             }
//         }

//         return area;
//     }

//     int BFS(vector<vector<int>>& grid, int row, int col)
//     {
//         int count = 1;
//         visit[row][col] = true;

//         queue<pair<int, int>> q;
//         q.push({row, col});

//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 将下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];

//                 if(x >= 0 && x < n && y >= 0 && y < m \
//                     && grid[x][y] == 1 && !visit[x][y])
//                 {
//                     count++;
//                     visit[x][y] = true;
//                     q.push({x, y});
//                 }
//             }
//         }

//         return count;
//     }
// };

// 被围绕的区域
// class Solution 
// {
//     int n, m;

//     // 方向向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     void solve(vector<vector<char>>& board) 
//     {
//         n = board.size(), m = board[0].size();

//         // 先处理边界情况
//         for(int i = 0; i < n; i++)
//         {
//             if(board[i][0] == 'O')
//             {
//                 BFS(board, i, 0);
//             }

//             if(board[i][m - 1] == 'O')
//             {
//                 BFS(board, i, m - 1);
//             }
//         }

//         for(int i = 0; i < m; i++)
//         {
//             if(board[0][i] == 'O')
//             {
//                 BFS(board, 0, i);
//             }

//             if(board[n - 1][i] == 'O')
//             {
//                 BFS(board, n - 1, i);
//             }
//         }

//         // 还原
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(board[i][j] == 'O')
//                 {
//                     board[i][j] = 'X';
//                 }
//                 else if(board[i][j] == 'K')
//                 {
//                     board[i][j] = 'O';
//                 }
//             }
//         }
//     }

//     void BFS(vector<vector<char>>& board, int row, int col)
//     {
//         board[row][col] = 'K';

//         queue<pair<int, int>> q;
//         q.push({row, col});

//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 将下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];
//                 if(x >= 0 && x < n && y >= 0 && y < m \
//                     && board[x][y] == 'O')
//                 {
//                     board[x][y] = 'K';
//                     q.push({x, y});
//                 }
//             }
//         }
//     }
// };

// 迷宫中离入口最近的出口
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
//     {
//         int n = maze.size(), m = maze[0].size();
//         vector<vector<bool>> visit(n, vector<bool>(m, false));
//         visit[entrance[0]][entrance[1]] = true;

//         queue<pair<int, int>> q;
//         q.push({entrance[0], entrance[1]});

//         // BFS
//         int step = 0;
//         while(q.size())
//         {
//             step++;

//             int sz = q.size();
//             while(sz--) // 本层
//             {
//                 auto [a, b] = q.front();
//                 q.pop();

//                 // 将下一层入队列
//                 for(int i = 0; i < 4; i++)
//                 {
//                     int x = a + dx[i], y = b + dy[i];

//                     if(x >= 0 && x < n && y >= 0 && y < m \
//                         && maze[x][y] == '.' && !visit[x][y])
//                     {
//                         // 判断是否遇到出口
//                         if(x == 0 || x == n - 1 || y == 0 || y == m - 1)
//                         {
//                             return step;
//                         }

//                         visit[x][y] = true;
//                         q.push({x, y});
//                     }
//                 }
//             }
//         }

//         return -1;
//     }
// };

// 最小基因变化
// class Solution 
// {
// public:
//     int minMutation(string startGene, string endGene, vector<string>& bank) 
//     {
//         unordered_set<string> visit; // 用来标记已经搜索过的状态
//         unordered_set<string> hash(bank.begin(), bank.end()); // 存储基因库
//         string change = "ACGT"; // hash

//         // 边界情况处理
//         if(startGene == endGene)
//         {
//             return 0;
//         }

//         if(!hash.count(endGene))
//         {
//             return -1;
//         }

//         queue<string> q;
//         q.push(startGene);
//         visit.insert(startGene);

//         // BFS
//         int ret = 0;
//         while(q.size())
//         {
//             ret++;
//             int sz = q.size();

//             while(sz--)
//             {
//                 string str = q.front();
//                 q.pop();

//                 // 将下一层入队列
//                 // 暴力穷举所有的变化情况:P
//                 for(int i = 0; i < 8; i++)
//                 {
//                     string tmp = str; // 细节：确保每次只变化一个位置
//                     for(int j = 0; j < 4; j++)
//                     {
//                         tmp[i] = change[j];

//                         if(tmp == endGene)
//                         {
//                             return ret;
//                         }

//                         if(hash.count(tmp) && !visit.count(tmp))
//                         {
//                             visit.insert(tmp);
//                             q.push(tmp);
//                         }
//                     }
//                 }
//             }
//         }

//         return -1;
//     }
// };

// 单词接龙
// class Solution 
// {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
//     {
//         unordered_set<string> visit;
//         unordered_set<string> dictionary(wordList.begin(), wordList.end());
        
//         if(!dictionary.count(endWord))
//         {
//             return 0;
//         }
        
//         queue<string> q;
//         q.push(beginWord);
//         visit.insert(beginWord);
        
//         // BFS
//         int count = 0;
//         while(q.size())
//         {
//             count++;
//             int sz = q.size();
            
//             while(sz--)
//             {
//                 string str = q.front();
//                 q.pop();
                
//                 // 将下一层入队列
//                 // 暴力枚举所有可能情况:P
//                 for(int i = 0; i < beginWord.size(); i++)
//                 {
//                     string tmp = str; // 细节：确保每次只更改一个位置
//                     for(char j = 'a'; j <= 'z'; j++)
//                     {
//                         tmp[i] = j;
                        
//                         if(dictionary.count(tmp) && !visit.count(tmp))
//                         {
//                             if(tmp == endWord)
//                             {
//                                 return ++count;
//                             }
                            
//                             q.push(tmp);
//                             visit.insert(tmp);
//                         }
//                     }
//                 }
//             }
//         }
        
//         return 0;
//     }
// };

// 为高尔夫比赛砍树
// class Solution 
// {
//     typedef pair<int, int> PII;
//     int n, m;
//     bool visit[50][50];
    
//     // 方向向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int cutOffTree(vector<vector<int>>& forest) 
//     {
//         n = forest.size(), m = forest[0].size();
        
//         // 找出砍树的顺序
//         vector<PII> trees;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(forest[i][j] > 1)
//                 {
//                     trees.push_back({i, j});
//                 }
//             }
//         }
        
//         sort(trees.begin(), trees.end(), [&](const PII& p1, const PII& p2)
//         {
//             return forest[p1.first][p1.second] < forest[p2.first][p2.second];
//         });
        
//         // 按照顺序砍树
//         int ret = 0;
//         int beginX = 0, beginY = 0;
//         for(auto& [a, b] : trees)
//         {
//             int step = BFS(forest, beginX, beginY, a, b);
//             if(step == -1)
//             {
//                 return -1;
//             }
//             ret += step;
            
//             beginX = a, beginY = b;
//         }
        
//         return ret;
//     }
    
//     // 解决单源权值为一的最短路径问题
//     int BFS(vector<vector<int>>& forest, int beginX, int beginY, int endX, int endY)
//     {
//         // 边界情况处理
//         if(beginX == endX && beginY == endY)
//         {
//             return 0;
//         }
        
//         memset(visit, false, sizeof visit); // 每次调用BFS都需要执行，否则影响下次BFS
//         visit[beginX][beginY] = true;
        
//         queue<PII> q;
//         q.push({beginX, beginY});
        
//         int step = 0;
//         while(q.size())
//         {
//             step++;
//             int sz = q.size();
            
//             while(sz--)
//             {
//                 auto [a, b] = q.front();
//                 q.pop();
                
//                 // 将下一层入队列
//                 for(int i = 0; i < 4; i++)
//                 {
//                     int x = a + dx[i], y = b + dy[i];
                    
//                     if(x >= 0 && x < n && y >= 0 && y < m \
//                       && forest[x][y] && !visit[x][y])
//                     {
//                         if(x == endX && y == endY)
//                         {
//                             return step;
//                         }
                        
//                         visit[x][y] = true;
//                         q.push({x, y});
//                     }
//                 }
//             }
//         }
        
//         return -1;
//     }
// };

// 矩阵
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
//     {
//         int n = mat.size(), m = mat[0].size();

//         // dist[i][j] == -1 未搜索过
//         // dist[i][j] != -1 最短距离
//         vector<vector<int>> dist(n, vector<int>(m, -1));
//         queue<pair<int, int>> q;

//         // 将所有源点加入到队列中
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(mat[i][j] == 0)
//                 {
//                     q.push({i, j});
//                     dist[i][j] = 0;
//                 }
//             }
//         }

//         // 多源BFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 将下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];

//                 if(x >= 0 && x < n && y >= 0 && y < m && dist[x][y] == -1)
//                 {
//                     dist[x][y] = dist[a][b] + 1;
//                     q.push({x, y});
//                 }
//             }
//         }

//         return dist;
//     }
// };

// 飞地的数量
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int numEnclaves(vector<vector<int>>& grid) 
//     {
//         int n = grid.size(), m = grid[0].size();
//         vector<vector<bool>> visit(n, vector<bool>(m, false));
//         queue<pair<int, int>> q;

//         // 将所有边界1入队列
//         for(int i = 0; i < n; i++)
//         {
//             if(grid[i][0] == 1)
//             {
//                 q.push({i, 0});
//                 visit[i][0] = true;
//             }

//             if(grid[i][m - 1] == 1)
//             {
//                 q.push({i, m - 1});
//                 visit[i][m - 1] = true;
//             }
//         }

//         for(int i = 0; i < m; i++)
//         {
//             if(grid[0][i] == 1)
//             {
//                 q.push({0, i});
//                 visit[0][i] = true;
//             }

//             if(grid[n - 1][i] == 1)
//             {
//                 q.push({n - 1, i});
//                 visit[n - 1][i] = true;
//             }
//         }

//         // 多源BFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];

//                 if(x >= 0 && x < n && y >= 0 && y < m \
//                     && grid[x][y] == 1 && !visit[x][y])
//                 {
//                     visit[x][y] = true;
//                     q.push({x, y});
//                 }
//             }
//         }

//         // 遍历计数
//         int count = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] == 1 && !visit[i][j])
//                 {
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };

// 地图中的最高点
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     vector<vector<int>> highestPeak(vector<vector<int>>& isWater) 
//     {
//         int n = isWater.size(), m = isWater[0].size();
//         vector<vector<int>> dist(n, vector<int>(m, -1));
//         queue<pair<int, int>> q;
        
//         // 将边界水域入队列
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(isWater[i][j])
//                 {
//                     dist[i][j] = 0;
//                     q.push({i, j});
//                 }
//             }
//         }

//         // 多源BFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 下一层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];

//                 if(x >= 0 && x < n && y >= 0 && y < m && dist[x][y] == -1)
//                 {
//                     dist[x][y] = dist[a][b] + 1;
//                     q.push({x, y});
//                 }
//             }
//         }

//         return dist;
//     }
// };

// 地图分析
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int maxDistance(vector<vector<int>>& grid) 
//     {
//         int n = grid.size();
//         vector<vector<int>> dist(n, vector(n, -1));
//         queue<pair<int, int>> q;

//         // 将陆地入队列
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(grid[i][j])
//                 {
//                     dist[i][j] = 0;
//                     q.push({i, j});
//                 }
//             }
//         }

//         // 多源BFS
//         int ret = -1;
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // 下层入队列
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];

//                 if(x >= 0 && x < n && y >= 0 && y < n && dist[x][y] == -1)
//                 {
//                     dist[x][y] = dist[a][b] + 1;
//                     q.push({x, y});
//                     ret = max(ret, dist[x][y]);
//                 }
//             }
//         }

//         return ret;
//     }
// };

// 课程表
// class Solution 
// {
// public:
//     bool canFinish(int n, vector<vector<int>>& prerequisites) 
//     {
//         unordered_map<int, vector<int>> edges; // 邻接表
//         vector<int> in(n); // 存储每一个结点的入度

//         // 1.建图
//         for(auto& e : prerequisites)
//         {
//             int a = e[0], b = e[1]; // b -> a
//             edges[b].push_back(a); // 构建图的逻辑结构
//             in[a]++; // 入度表
//         }

//         // 2.拓扑排序BFS
//         // (1) 把所有入度为0的结点加入队列
//         queue<int> q;
//         for(int i = 0; i < n; i++)
//         {
//             if(in[i] == 0)
//             {
//                 q.push(i);
//             }
//         }

//         // (2) BFS
//         while(q.size())
//         {
//             int tmp = q.front();
//             q.pop();

//             // 修改相连结点的边
//             for(auto& e : edges[tmp])
//             {
//                 in[e]--;
//                 if(in[e] == 0)
//                 {
//                     q.push(e);
//                 }
//             }
//         }

//         // 3.判断是否有环
//         for(auto& e : in)
//         {
//             if(e)
//             {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// 课程表Ⅱ
// class Solution 
// {
// public:
//     vector<int> findOrder(int n, vector<vector<int>>& prerequisites) 
//     {
//         vector<vector<int>> edges(n);
//         vector<int> in(n);

//         // 1.建图
//         for(auto& v : prerequisites)
//         {
//             int a = v[0], b = v[1]; // b -> a
//             edges[b].push_back(a);
//             in[a]++;
//         }

//         // 2.拓扑排序
//         vector<int> ret;
//         queue<int> q;

//         // (1) 将所有入度为0的点入队列
//         for(int i = 0 ; i < n; i++)
//         {
//             if(in[i] == 0)
//             {
//                 q.push(i);
//             }
//         }

//         // (2) BFS
//         while(q.size())
//         {
//             int tmp = q.front();
//             q.pop();
//             ret.push_back(tmp);

//             // 修改相连结点的边
//             for(auto& e : edges[tmp])
//             {
//                 in[e]--;
//                 if(in[e] == 0)
//                 {
//                     q.push(e);
//                 }
//             }
//         }

//         // 判断结果并返回
//         if(ret.size() == n)
//         {
//             return ret;
//         }
//         else
//         {
//             return {};
//         }
//     }
// };

// 火星词典
// class Solution 
// {
//     unordered_map<char, unordered_set<char>> edges; // 邻接表
//     unordered_map<char, int> in; // 入度表
//     bool check = false; // 处理边界情况
// public:
//     string alienOrder(vector<string>& words) 
//     {
//         // 1.初始化入度表
//         for(auto& str : words)
//         {
//             for(auto& ch : str)
//             {
//                 in[ch] = 0;
//             }
//         }

//         // 2.枚举搜集字典信息 + 建图
//         int n = words.size();
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = i + 1; j < n; j++)
//             {
//                 AddInfo(words[i], words[j]);
//                 if(check)
//                 {
//                     return "";
//                 }
//             }
//         }

//         // 3. 拓扑排序
//         string ret;
//         queue<char> q;

//         // (1) 入度为0的入队列
//         for(auto& [ch, count] : in)
//         {
//             if(count == 0)
//             {
//                 q.push(ch);
//             }
//         }

//         // BFS
//         while(q.size())
//         {
//             char tmp = q.front();
//             q.pop();
//             ret += tmp;

//             // 修改相邻点的边
//             for(auto& ch : edges[tmp])
//             {
//                 if(--in[ch] == 0)
//                 {
//                     q.push(ch);
//                 }
//             }
//         }

//         // 检验是否有环
//         for(auto& [ch, count] : in)
//         {
//             if(count != 0)
//             {
//                 return "";
//             }
//         }

//         return ret;
//     }

//     void AddInfo(const string& s1, const string& s2)
//     {
//         int n = min(s1.size(), s2.size());
        
//         int i = 0;
//         while(i < n)
//         {
//             if(s1[i] != s2[i]) 
//             {
//                 char a = s1[i], b = s2[i];
                
//                 // 避免数据冗余
//                 if(!edges.count(a) || !edges[a].count(b))
//                 {
//                     edges[a].insert(b);  // s1[i] -> s2[i]
//                     in[b]++;
//                 }

//                 break;
//             }

//             i++;
//         }

//         // 边界情况处理
//         if(i == s2.size() && i < s1.size())
//         {
//             check = true;
//         }
//     }
// };

// 汉诺塔
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

//         DFS(a, c, b, n - 1);
//         c.push_back(a.back());
//         a.pop_back();
//         DFS(b, a, c, n - 1);
//     }
// };

// 合并两个有序链表 (递归)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
//     {
//         if(l1 == nullptr)
//         {
//             return l2;
//         }

//         if(l2 == nullptr)
//         {
//             return l1;
//         }

//         if(l1->val <= l2->val)
//         {
//             l1->next = mergeTwoLists(l1->next, l2);
//             return l1;
//         }
//         else
//         {
//             l2->next = mergeTwoLists(l1, l2->next);
//             return l2;
//         }
//     }
// };

// 逆序链表(递归)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution 
// {
// public:
//     ListNode* reverseList(ListNode* head) 
//     {
//         // 出口 -> 叶子结点
//         if(head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         ListNode* newhead = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;

//         return newhead;
//     }
// };

// 两两交换链表中的结点(递归)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution 
// {
// public:
//     ListNode* swapPairs(ListNode* head) 
//     {
//         // 函数出口
//         if(head == nullptr || head->next == nullptr)
//         {
//             return head;
//         }

//         auto tmp = swapPairs(head->next->next);
//         auto ret = head->next;

//         head->next->next = head;
//         head->next = tmp;

//         return ret;
//     }
// };

// Pow(x, n)
// class Solution 
// {
// public:
//     double myPow(double x, int n) 
//     {
//         return n >= 0 ? Pow(x, n) : 1 / Pow(x, -(long long)n);
//     }

//     double Pow(double x, long long n)
//     {
//         // 函数出口
//         if(n == 0)
//         {
//             return 1;
//         }

//         double tmp = Pow(x, n / 2);
        
//         return n % 2 == 0 ? tmp * tmp : tmp * tmp * x;
//     }
// };

// 计算布尔二叉树的值
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
// public:
//     bool evaluateTree(TreeNode* root) 
//     {
//         // 函数出口
//         if(root->left == nullptr)
//         {
//             return root->val;
//         }

//         auto left = evaluateTree(root->left);
//         auto right = evaluateTree(root->right);

//         if(root->val == 2)
//         {
//             return left | right;
//         }
//         else
//         {
//             return left & right;
//         }
//     }
// };

// 求根节点到叶节点数字之和
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
// public:
//     int sumNumbers(TreeNode* root) 
//     {
//         return DFS(root, 0);
//     }

//     int DFS(TreeNode* root, int prevSum)
//     {
//         if(root == nullptr)
//         {
//             return 0;
//         }

//         prevSum = prevSum * 10 + root->val;

//         if(root->left == nullptr && root->right == nullptr)
//         {
//             return prevSum;
//         }

//         return DFS(root->left, prevSum) + DFS(root->right, prevSum);
//     }
// };

// 二叉树剪枝
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
// public:
//     TreeNode* pruneTree(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return nullptr;
//         }

//         root->left = pruneTree(root->left);
//         root->right = pruneTree(root->right);

//         if(!root->val && !root->left && !root->right)
//         {
//             delete root; // 防止内存泄漏
//             root = nullptr;
//         }

//         return root;
//     }
// };

// 验证二叉搜索树
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// v1.0 暴力判断
// class Solution 
// {
//     long prev = LONG_MIN;
// public:
//     bool isValidBST(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return true;
//         }

//         // 判断左子树
//         bool left = isValidBST(root->left);

//         // 判断自己
//         bool cur = false;
//         if(root->val > prev)
//         {
//             cur = true;
//         }
//         prev = root->val;

//         // 判断右子树
//         bool right = isValidBST(root->right);

//         return left && right && cur;
//     }
// };

// v2.0 剪枝
// class Solution 
// {
//     long prev = LONG_MIN;
// public:
//     bool isValidBST(TreeNode* root) 
//     {
//         if(root == nullptr)
//         {
//             return true;
//         }

//         // 1.判断左子树
//         bool left = isValidBST(root->left);
//         if(!left) // 剪枝
//         {
//             return false;
//         }

//         // 2.判断自己
//         bool cur = false;
//         if(root->val > prev)
//         {
//             cur = true;
//         }
//         prev = root->val;

//         if(!cur) // 剪枝
//         {
//             return false;
//         }

//         // 3.判断右子树
//         bool right = isValidBST(root->right);

//         return left && right && cur;
//     }
// };

// 二叉搜索树中第K小的元素
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
//     int count, ret;
// public:
//     int kthSmallest(TreeNode* root, int k) 
//     {
//         count = k;
//         DFS(root);
//         return ret;
//     }

//     void DFS(TreeNode* root)
//     {
//         // 函数出口 + 剪枝
//         if(root == nullptr || count == 0)
//         {
//             return;
//         }

//         DFS(root->left);

//         if(--count == 0)
//         {
//             ret = root->val;
//         }

//         DFS(root->right);
//     }
// };

// 二叉树的所有路径
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution 
// {
//     vector<string> ret;
// public:
//     vector<string> binaryTreePaths(TreeNode* root) 
//     {
//         DFS(root, "");
//         return ret;
//     }

//     // 参数path实现回溯
//     void DFS(TreeNode* root, string path)
//     {
//         path += to_string(root->val);

//         // 叶子结点 + 函数出口
//         if(!root->left && !root->right)
//         {
//             ret.push_back(path);
//         }

//         path += "->";

//         // 非叶子结点 + 剪枝
//         if(root->left)
//         {
//             DFS(root->left, path);
//         }

//         if(root->right)
//         {
//             DFS(root->right, path);
//         }
//     }
// };

// 全排列
// class Solution 
// {
//     vector<vector<int>> ret;
//     vector<int> path;
//     vector<bool> check; // 实现剪枝
// public:
//     vector<vector<int>> permute(vector<int>& nums) 
//     {
//         check.resize(nums.size(), false);
//         DFS(nums);
//         return ret;
//     }

//     void DFS(vector<int>& nums)
//     {
//         if(nums.size() == path.size())
//         {
//             ret.push_back(path);
//             return;
//         }

//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(!check[i])
//             {
//                 path.push_back(nums[i]);
//                 check[i] = true;
//                 DFS(nums);

//                 // 回溯 -> 恢复现场
//                 path.pop_back();
//                 check[i] = false;
//             }
//         }
//     }
// };

// 子集
// v1.0 每次盯着一个数，选或是不选
// class Solution 
// {
//     vector<vector<int>> ret;
//     vector<int> path;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) 
//     {
//         DFS(nums, 0);
//         return ret;
//     }

//     void DFS(vector<int>& nums, int i)
//     {
//         if(i == nums.size())
//         {
//             ret.push_back(path);
//             return;
//         }

//         // 选
//         path.push_back(nums[i]);
//         DFS(nums, i + 1);
//         path.pop_back(); // 回溯，恢复现场

//         // 不选
//         DFS(nums, i + 1);
//     }
// };

// v2.0 每次都只选一个数，此后只能选它后面的数
// class Solution 
// {
//     vector<vector<int>> ret;
//     vector<int> path;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) 
//     {
//         DFS(nums, 0);
//         return ret;
//     }

//     void DFS(vector<int>& nums, int pos)
//     {
//         ret.push_back(path);

//         for(int i = pos; i < nums.size(); i++)
//         {
//             path.push_back(nums[i]);
//             DFS(nums, i + 1);
//             path.pop_back(); // 回溯，恢复现场
//         }
//     }
// };

// 找出所有子集的异或总和再求和
// class Solution 
// {
//     int sum = 0;
//     int path = 0;
// public:
//     int subsetXORSum(vector<int>& nums) 
//     {
//         DFS(nums, 0);
//         return sum;
//     }
    
//     void DFS(vector<int>& nums, int pos)
//     {
//         sum += path;
        
//         for(int i = pos; i < nums.size(); i++)
//         {
//             path ^= nums[i];
//             DFS(nums, i + 1);
//             path ^= nums[i]; // 回溯，恢复现场
//         }
//     }
// };

// 全排列Ⅱ
// 剪枝v1.0
// class Solution 
// {
//     vector<vector<int>> ret;
//     vector<int> path;
//     vector<bool> check;
// public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) 
//     {
//         check.resize(nums.size(), false);
//         sort(nums.begin(), nums.end());
        
//         DFS(nums);
//         return ret;
//     }
    
//     void DFS(vector<int>& nums)
//     {
//         if(path.size() == nums.size())
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         for(int i = 0; i < nums.size(); i++)
//         {
//             // 剪纸 - 何时不进？
//             if(check[i] == true || \
//               (i != 0 && nums[i]== nums[i - 1] && check[i - 1] == false))
//             {
//                 continue;
//             }
            
//             // 进
//             path.push_back(nums[i]);
//             check[i] = true;
            
//             DFS(nums);
            
//             path.pop_back(); // 回溯，恢复现场
//             check[i] = false;
            
//         }
//     }
// };

// 剪枝v2.0
// class Solution 
// {
//     vector<vector<int>> ret;
//     vector<int> path;
//     vector<bool> check;
// public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) 
//     {
//         check.resize(nums.size(), false);
//         sort(nums.begin(), nums.end());
        
//         DFS(nums);
//         return ret;
//     }
    
//     void DFS(vector<int>& nums)
//     {
//         if(path.size() == nums.size())
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         for(int i = 0; i < nums.size(); i++)
//         {
//             // 剪纸 - 何时进？
//             if(check[i] == false && \
//               (i == 0 || nums[i] != nums[i - 1] || check[i - 1] == true))
//             {
//                 path.push_back(nums[i]);
//                 check[i] = true;
                
//                 DFS(nums);
                
//                 path.pop_back(); // 回溯，恢复现场
//                 check[i] = false;
//             }
//         }
//     }
// };

// 电话号码的字母组合
// class Solution 
// {
//     vector<string> ret;
//     string path;
    
//     // 按键映射字母
//     string str[10] = {"", "", "abc", "def", \
//         "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// public:
//     vector<string> letterCombinations(string digits) 
//     {
//         if(digits.size() == 0)
//         {
//             return ret;
//         }
        
//         DFS(digits, 0);
//         return ret;
//     }
    
//     void DFS(string& digits, int pos)
//     {
//         if(path.size() == digits.size())
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         for(auto& ch : str[digits[pos] - '0'])
//         {
//             path += ch;
//             DFS(digits, pos + 1);
//             path.pop_back(); // 回溯，恢复现场
//         }
//     }
// };

// 括号生成
// class Solution 
// {
//     int left;
//     int right = 0;
//     int total = 0;

//     string path;
//     vector<string> ret;
// public:
//     vector<string> generateParenthesis(int n) 
//     {
//         total = n;
//         DFS();
//         return ret;
//     }

//     void DFS()
//     {
//         if(right == total)
//         {
//             ret.push_back(path);
//         }

//         // 递归 + 剪枝
//         if(left < total)
//         {
//             path += '(';
//             left++;

//             DFS();
            
//             // 回溯，恢复现场
//             path.pop_back();
//             left--;
//         }

//         if(right < left)
//         {
//             path += ')';
//             right++;

//             DFS();

//             // 回溯，恢复现场
//             path.pop_back(); 
//             right--;
//         }
//     }
// };

// 组合
// class Solution 
// {
//     int _n;
//     int _k;

//     vector<vector<int>> ret;
//     vector<int> path;
// public:
//     vector<vector<int>> combine(int n, int k) 
//     {
//         _n = n;
//         _k = k;
//         DFS(1);
//         return ret;
//     }

//     void DFS(int start)
//     {
//         if(path.size() == _k)
//         {
//             ret.push_back(path);
//         }

//         // 递归 + 剪枝
//         for(int i = start; i <= _n; i++)
//         {
//             path.push_back(i);
//             DFS(i + 1);
//             path.pop_back(); // 回溯，恢复现场
//         }
//     }
// };

// 目标和
// v1.0 效率低，可能会超时
// class Solution 
// {
//     int ret = 0;
//     int path = 0;
//     int _target = 0;
// public:
//     int findTargetSumWays(vector<int>& nums, int target) 
//     {
//         _target = target;
//         DFS(nums, 0);
//         return ret;
//     }

//     void DFS(vector<int>& nums, int pos)
//     {
//         if(pos == nums.size())
//         {
//             if(path == _target)
//             {
//                 ret++;
//             }

//             return;
//         }

//         // 加
//         path += nums[pos];
//         DFS(nums, pos + 1);
//         path -= nums[pos]; // 回溯，恢复现场

//         // 减
//         path -= nums[pos];
//         DFS(nums, pos + 1);
//         path += nums[pos]; // 回溯，恢复现场
//     }
// };

// v2.0，效率有所改善
// class Solution 
// {
//     int ret = 0;
//     int _target = 0;
// public:
//     int findTargetSumWays(vector<int>& nums, int target) 
//     {
//         _target = target;
//         DFS(nums, 0, 0);
//         return ret;
//     }

//     void DFS(vector<int>& nums, int pos, int path)
//     {
//         if(pos == nums.size())
//         {
//             if(path == _target)
//             {
//                 ret++;
//             }

//             return;
//         }

//         // 加
//         DFS(nums, pos + 1, path + nums[pos]);

//         // 减
//         DFS(nums, pos + 1, path - nums[pos]);
//     }
// };

// 组合总数
// v1.0 每次都只选一个数，此后只能选它及它后面的数
// class Solution 
// {
//     int _target;
//     vector<int> path;
//     vector<vector<int>> ret;
// public:
//     vector<vector<int>> combinationSum(vector<int>& nums, int target) 
//     {
//         _target = target;
//         DFS(nums, 0, 0);
//         return ret;
//     }
    
//     void DFS(vector<int>& nums, int pos, int sum)
//     {
//         if(sum == _target)
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         if(sum > _target || pos == nums.size())
//         {
//             return;
//         }
        
//         // 递归决策 + 剪枝
//         for(int i = pos; i < nums.size(); i++)
//         {
//             path.push_back(nums[i]);
//             DFS(nums, i, sum + nums[i]);
//             path.pop_back(); // 回溯，恢复现场
//         }
//     }
// };

// v2.0 每次枚举一个数，出现几次
// class Solution 
// {
//     int _target;
//     vector<int> path;
//     vector<vector<int>> ret;
// public:
//     vector<vector<int>> combinationSum(vector<int>& nums, int target) 
//     {
//         _target = target;
//         DFS(nums, 0, 0);
//         return ret;
//     }
    
//     void DFS(vector<int>& nums, int pos, int sum)
//     {
//         if(sum == _target)
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         if(sum > _target || pos == nums.size())
//         {
//             return;
//         }
        
//         // 枚举个数 + 剪枝
//         for(int i = 0; i * nums[pos] + sum <= _target; i++)
//         {
//             if(i)
//             {
//                 path.push_back(nums[pos]);    
//             }
            
//             DFS(nums, pos + 1, i * nums[pos] + sum);
//         }
        
//         // 回溯，恢复现场
//         for(int i = 1; i * nums[pos] + sum <= _target; i++)
//         {
//             path.pop_back();
//         }
//     }
// };

// 字母大小写全排列
// class Solution 
// {
//     string path;
//     vector<string> ret;
// public:
//     vector<string> letterCasePermutation(string s) 
//     {
//         DFS(s, 0);
//         return ret;
//     }
    
//     void DFS(string& s, int pos)
//     {
//         if(pos == s.size())
//         {
//             ret.push_back(path);
//             return;
//         }
        
//         char ch = s[pos];
        
//         // 不改变
//         path += ch;
//         DFS(s, pos + 1);
//         path.pop_back(); // 回溯，恢复现场
        
//         // 改变
//         if(ch < '0' || ch > '9')
//         {
//             ch = Change(ch);
//             path += ch;
//             DFS(s, pos + 1);
//             path.pop_back(); // 回溯，恢复现场
//         }
//     }
    
//     char Change(char ch)
//     {
//         if(ch >= 'a' && ch <= 'z')
//         {
//             ch -= 32;
//         }
//         else
//         {
//             ch += 32;
//         }
        
//         return ch;
//     }
// };

// 优美的排列
// class Solution 
// {
//     int ret = 0;
//     vector<bool> check;
// public:
//     int countArrangement(int n) 
//     {
//         check.resize(n + 1, false);
//         DFS(1, n);
//         return ret;
//     }

//     void DFS(int pos, int n)
//     {
//         if(pos == n + 1)
//         {
//             ret++;
//             return;
//         }

//         for(int i = 1; i <= n; i++)
//         {
//             if(!check[i] && (i % pos == 0 || pos % i == 0))
//             {
//                 check[i] = true;
//                 DFS(pos + 1, n);
//                 check[i] = false; // 回溯，恢复现场
//             }
//         }
//     }
// };

// N皇后
// class Solution 
// {
//     int _n = 0;
//     vector<bool> checkCol;
//     vector<bool> checkDig1;
//     vector<bool> checkDig2;

//     vector<vector<string>> ret;
//     vector<string> path;
// public:
//     vector<vector<string>> solveNQueens(int n) 
//     {
//         _n = n;
//         checkCol.resize(n, false);
//         checkDig1.resize(2 * n, false);
//         checkDig2.resize(2 * n, false);
//         path.resize(n, string(n, '.'));

//         DFS(0);

//         return ret;
//     }

//     void DFS(int row)
//     {
//         // 递归出口
//         if(row == _n)
//         {
//             ret.push_back(path);
//             return;
//         }

//         // 对于每一行，枚举每一列
//         for(int i = 0; i < _n; i++)
//         {
//             // 剪枝
//             if(!checkCol[i] && !checkDig1[row - i + _n] && !checkDig2[row + i])
//             {
//                 checkCol[i] = checkDig1[row - i + _n] = checkDig2[row + i] = true;
//                 path[row][i] = 'Q';
//                 DFS(row + 1);
//                 checkCol[i] = checkDig1[row - i + _n] = checkDig2[row + i] = false; // 回溯
//                 path[row][i] = '.';
//             }
//         }
//     }
// };

// 有效的数独
// class Solution 
// {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) 
//     {
//         bool row[9][9] = {false};
//         bool col[9][9] = {false};
//         bool grid[3][3][9] = {false};

//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if(board[i][j] != '.')
//                 {
//                     int num = board[i][j] - 1 - '0';
//                     if(row[i][num] || col[j][num] || grid[i / 3][j / 3][num])
//                     {
//                         return false;
//                     }

//                     row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = true;
//                 }

//             }
//         }

//         return true;
//     }
// };

// 解数独
// class Solution 
// {
//     bool row[9][10] = {false};
//     bool col[9][10] = {false};
//     bool grid[3][3][10] = {false};
// public:
//     void solveSudoku(vector<vector<char>>& board) 
//     {
//         // Init
//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if(board[i][j] != '.')
//                 {
//                     int num = board[i][j] - '0'; // 下标映射
//                     row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = true;
//                 }
//             }
//         }
        
//         DFS(board);
//     }
    
//     bool DFS(vector<vector<char>>& board)
//     {
//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if(board[i][j] == '.') // 此处无数字
//                 {
//                     for(int num = 1; num <= 9; num++) // 枚举每一个数字
//                     {
//                         if(!row[i][num] && !col[j][num] && !grid[i / 3][j / 3][num]) // 合法性检验
//                         {
//                             board[i][j] = num + '0';
//                             row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = true;
                        
//                             if(DFS(board) == true)
//                             {
//                                 // 当得到最终解后，就没必要往后枚举了
//                                 return true; // 重点理解
//                             }
                        
//                             // 若没有最终解，说明上述情况不行，需要回溯
//                             board[i][j] = '.';
//                             row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = false;
//                         }
//                     }
                    
//                     // 当全部数字都尝试无果后，标识这种情况无解
//                     return false; // 重点理解
//                 }
//             }
//         }
        
//         // 无数字可填，表明解出最终解
//         return true; // 重点理解
//     }
// };

// 单词搜索
// class Solution 
// {
//     int n = 0, m = 0;
//     string _word;
//     vector<vector<bool>> visit;
    
//     // "方向"向量偏移数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     bool exist(vector<vector<char>>& board, string word) 
//     {
//         n = board.size(), m = board[0].size();
//         visit.resize(n, vector(m, false));
//         _word = word;
        
//         // 枚举找源
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 // 找到源后，DFS检验是否存在
//                 if(board[i][j] == word[0])
//                 {
//                     visit[i][j] = true;
//                     if(DFS(board, i, j, 1))
//                     {
//                         return true;
//                     }
//                     visit[i][j] = false;
//                 }
//             }
//         }
        
//         return false;
//     }
    
//     bool DFS(vector<vector<char>>& board, int i, int j, int pos)
//     {
//         if(pos == _word.size())
//         {
//             return true;
//         }
        
//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && \
//                !visit[x][y] && board[x][y] == _word[pos])
//             {
//                 visit[x][y] = true;
//                 if(DFS(board, x, y, pos + 1))
//                 {
//                     return true;
//                 }
//                 visit[x][y] = false; // 回溯，恢复现场
//             }
//         }
        
//         return false;
//     }
// };

// 黄金矿工
// class Solution 
// {
//     int n = 0, m = 0, ret = 0;
//     vector<vector<bool>> visit;

//     // "方向"向量偏移数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int getMaximumGold(vector<vector<int>>& grid) 
//     {
//         n = grid.size(), m = grid[0].size();
//         visit.resize(n, vector(m, false));

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j])
//                 {
//                     visit[i][j] = true;
//                     DFS(grid, i, j, grid[i][j]);
//                     visit[i][j] = false; // 回溯
//                 }
//             }
//         }

//         return ret;
//     }

//     void DFS(vector<vector<int>>& grid, int i, int j, int path)
//     {
//         ret = max(ret, path);

//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] && !visit[x][y])
//             {
//                 visit[x][y] = true;
//                 DFS(grid, x, y, path + grid[x][y]);
//                 visit[x][y] = false;
//             }
//         }
//     }
// };

// 不同路径Ⅲ
// class Solution 
// {
//     int n, m, ret = 0, step = 2;
//     vector<vector<bool>> visit;

//     // "方向"向量偏移数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int uniquePathsIII(vector<vector<int>>& grid) 
//     {
//         n = grid.size(), m = grid[0].size();
//         visit.resize(n, vector(m, false));
//         int bx = 0, by = 0;

//         // Init
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] == 0)
//                 {
//                     step++;
//                 }
                
//                 if(grid[i][j] == 1)
//                 {
//                     bx = i, by = j;
//                     visit[i][j] = true;
//                 }
//             }
//         }

//         DFS(grid, bx, by, 1);

//         return ret;
//     }

//     void DFS(vector<vector<int>>& grid, int bx, int by, int count)
//     {
//         if(grid[bx][by] == 2)
//         {
//             if(count == step)
//             {
//                 ret++;
//                 return;
//             }
//         }

//         for(int i = 0; i < 4; i++)
//         {
//             int x = bx + dx[i], y = by + dy[i];
//             if(x >= 0 && x < n && y >= 0 && y < m \
//                 && grid[x][y] != -1 && !visit[x][y])
//             {
//                 visit[x][y] = true;
//                 DFS(grid, x, y, count + 1);
//                 visit[x][y] = false; // 回溯
//             }
//         }
//     }
// };

// 渲染图像 DFS
// class Solution 
// {
//     int n, m, ori;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
//     {
//         if(image[sr][sc] == color)
//         {
//             return image;
//         }

//         ori = image[sr][sc];
//         n = image.size(), m = image[0].size();

//         DFS(image, sr, sc, color);

//         return image;
//     }

//     void DFS(vector<vector<int>>& image, int i, int j, int color)
//     {
//         image[i][j] = color;

//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && image[x][y] == ori)
//             {
//                 DFS(image, x, y, color);
//             }
//         }
//     }
// };

// 岛屿数量 DFS
// class Solution 
// {
//     int n, m;
//     vector<vector<bool>> visit;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int numIslands(vector<vector<char>>& grid) 
//     {
//         n = grid.size(), m = grid[0].size();
//         visit.resize(n, vector(m, false));

//         int ret = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] == '1' && !visit[i][j])
//                 {
//                     ret++;
//                     DFS(grid, i, j);
//                 }
//             }
//         }

//         return ret;
//     }

//     void DFS(vector<vector<char>>& grid, int i, int j)
//     {
//         visit[i][j] = true;
//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m \
//                 && grid[x][y] == '1' && !visit[x][y])
//             {
//                 DFS(grid, x, y);
//             }
//         }
//     }
// };

// 岛屿的最大面积 DFS
// class Solution 
// {
//     int n, m, count = 0;
//     vector<vector<bool>> visit;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int maxAreaOfIsland(vector<vector<int>>& grid) 
//     {
//         n = grid.size(), m = grid[0].size();
//         visit.resize(n, vector(m, false));

//         int ret = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(grid[i][j] && !visit[i][j])
//                 {
//                     count = 0;
//                     DFS(grid, i, j);
//                     ret = max(ret, count);
//                 }
//             }
//         }

//         return ret;
//     }

//     void DFS(vector<vector<int>>& grid, int i, int j)
//     {
//         count++;
//         visit[i][j] = true;

//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] && !visit[x][y])
//             {
//                 DFS(grid, x, y);
//             }
//         }
//     }
// };

// 被围绕的区域 DFS
// class Solution 
// {
//     int n, m;

//     // 方向向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     void solve(vector<vector<char>>& board) 
//     {
//         n = board.size(), m = board[0].size();

//         // 先处理边界情况
//         for(int i = 0; i < n; i++)
//         {
//             if(board[i][0] == 'O')
//             {
//                 DFS(board, i, 0);
//             }

//             if(board[i][m - 1] == 'O')
//             {
//                 DFS(board, i, m - 1);
//             }
//         }

//         for(int i = 0; i < m; i++)
//         {
//             if(board[0][i] == 'O')
//             {
//                 DFS(board, 0, i);
//             }

//             if(board[n - 1][i] == 'O')
//             {
//                 DFS(board, n - 1, i);
//             }
//         }

//         // 还原
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(board[i][j] == 'O')
//                 {
//                     board[i][j] = 'X';
//                 }
//                 else if(board[i][j] == 'K')
//                 {
//                     board[i][j] = 'O';
//                 }
//             }
//         }
//     }

//     void DFS(vector<vector<char>>& board, int i, int j)
//     {
//         board[i][j] = 'K';

//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && board[x][y] == 'O')
//             {
//                 DFS(board, x, y);
//             }
//         }
//     }

// };

// 太平洋大西洋水流问题
// class Solution 
// {
//     int n, m;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) 
//     {
//         n = h.size(), m = h[0].size();
//         vector<vector<bool>> pac(n, vector(m, false));
//         vector<vector<bool>> atl(n, vector(m, false));

//         // 看看各能爬多高:P
//         for(int i = 0; i < n; i++)
//         {
//             DFS(h, i, 0, pac);
//             DFS(h, i, m - 1, atl);
//         }

//         for(int i = 0; i < m; i++)
//         {
//             DFS(h, 0, i, pac);
//             DFS(h, n - 1, i, atl);
//         }

//         // 由重叠找答案
//         vector<vector<int>> ret;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(pac[i][j] && atl[i][j])
//                 {
//                     ret.push_back({i, j});
//                 }
//             }
//         }

//         return ret;
//     }

//     void DFS(vector<vector<int>>& h, int i, int j, vector<vector<bool>>& visit)
//     {
//         visit[i][j] = true;
        
//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m \
//                 && !visit[x][y] && h[x][y] >= h[i][j])
//             {
//                 DFS(h, x, y, visit);
//             }
//         }
//     }
// };

// 地雷游戏
// class Solution 
// {
//     int n, m;

//     // "方向"向量数组
//     int dx[8] = {1, -1, 0, 0, -1, 1, -1, 1};
//     int dy[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// public:
//     vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) 
//     {
//         n = board.size(), m = board[0].size();
//         int x = click[0], y = click[1];

//         // 直接点到地雷
//         if(board[x][y] == 'M')
//         {
//             board[x][y] = 'X';
//         }
//         else
//         {
//             DFS(board, x, y);
//         }

//         return board;
//     }

//     void DFS(vector<vector<char>>& board, int i, int j)
//     {
//         // 统计周围地雷的数量
//         int count = 0;
//         for(int k = 0; k < 8; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && board[x][y] == 'M')
//             {
//                 count++;
//             }
//         }

//         if(count) // 周围有地雷
//         {
//             board[i][j] = count + '0';
//             return;
//         }
//         else // 周围无地雷
//         {
//             board[i][j] = 'B';

//             for(int k = 0; k < 8; k++)
//             {
//                 int x = i + dx[k], y = j + dy[k];
//                 if(x >= 0 && x < n && y >= 0 && y < m && board[x][y] == 'E')
//                 {
//                     DFS(board, x, y);
//                 }
//             }
//         }
//     }
// };

// 衣橱整理
// class Solution 
// {
//     int _n, _m, _cnt;
//     int ret = 0;
//      vector<vector<bool>> visit;

//     // "方向"向量数组
//     int dx[2] = {1, 0};
//     int dy[2] = {0, 1};
// public:
//     int wardrobeFinishing(int n, int m, int cnt) 
//     {
//         _n = n, _m = m, _cnt = cnt;
//         visit.resize(n, vector(m, false));
//         DFS(0, 0);
//         return ret;
//     }

//     void DFS(int i, int j)
//     {
//         ret++;
//         visit[i][j] = true;

//         for(int k = 0; k < 2; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < _n && y >= 0 && y < _m && \
//                 !visit[x][y] && Dight(x) + Dight(y) <= _cnt)
//             {
//                 DFS(x, y);
//             }
//         }
//     }

//     int Dight(int x)
//     {
//         int tmp = 0;
//         while(x)
//         {
//             tmp += x % 10;
//             x /= 10;
//         }

//         return tmp;
//     }
// };

// 斐波那契数列 
// v1.0 递归
// class Solution 
// {
// public:
//     int fib(int n) 
//     {
//         if(n == 0 || n == 1)
//         {
//             return n;
//         }

//         return fib(n - 1) + fib(n - 2);
//     }
// };

// v2.0 记忆化搜索
// class Solution 
// {
//     vector<int> mem; // 备忘录
// public:
//     int fib(int n) 
//     {
//         mem.resize(n + 1, -1); // 初始化
//         return DFS(n);
//     }

//     int DFS(int n)
//     {
//         // 忘备忘录里面瞅瞅:P
//         if(mem[n] != -1)
//         {
//             return mem[n];
//         }

//         if(n == 0 || n == 1)
//         {
//             return n;
//         }

//         mem[n] = DFS(n - 1) + DFS(n - 2); // 记到备忘录里面
//         return mem[n];
//     }
// };

// v3.0 动态规划
// class Solution 
// {
//     vector<int> dp;
// public:
//     int fib(int n) 
//     {
//         dp.resize(n + 2, -1);
//         dp[0] = 0, dp[1] = 1;
        
//         for(int i = 2; i <= n; i++)
//         {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }

//         return dp[n];
//     }
// };

// 不同路径
// // v1.0 暴搜 -> 会超时
// int uniquePaths(int n, int m) 
// {
//     if(n == 0 || m == 0)
//     {
//         return 0;
//     }

//     if(n == 1 && m == 1)
//     {
//         return 1;
//     }

//     return uniquePaths(n - 1, m) + uniquePaths(n, m - 1);
// }

// v2.0 记忆化搜索
// class Solution 
// {
//     vector<vector<int>> mem; // 备忘录
// public:
//     int uniquePaths(int n, int m) 
//     {
//         mem.resize(n + 1, vector<int>(m + 1, 0));
//         return DFS(n, m);
//     }

//     int DFS(int i, int j)
//     {
//         if(mem[i][j] != 0)
//         {
//             return mem[i][j];
//         }

//         if(i == 0 || j == 0)
//         {
//             return 0;
//         }

//         if(i == 1 && j == 1)
//         {
//             mem[i][j] = 1;
//             return 1;
//         }

//         mem[i][j] = DFS(i - 1, j) + DFS(i, j - 1);
//         return mem[i][j];
//     }
// };

// v3.0 动态规划
// int uniquePaths(int n, int m) 
// {
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     dp[1][1] = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(i == 1 && j == 1)
//             {
//                 continue;
//             }

//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//         }
//     }

//     return dp[n][m];
// }

// 最长递增子序列
// v1.0 暴搜
// class Solution 
// {
// public:
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         int ret = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             ret = max(ret, DFS(nums, i));
//         }

//         return ret;
//     }

//     int DFS(vector<int>& nums, int pos)
//     {
//         int ret = 1; // 细节：初值为1

//         for(int i = pos + 1; i < nums.size(); i++)
//         {
//             if(nums[i] > nums[pos])
//             {
//                 ret = max(ret, DFS(nums, i) + 1);    
//             }
//         }

//         return ret;
//     }
// };

// v2.0 记忆化搜索
// class Solution 
// {
//     vector<int> mem;
// public:
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         mem.resize(nums.size());

//         int ret = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             ret = max(ret, DFS(nums, i));
//         }

//         return ret;
//     }

//     int DFS(vector<int>& nums, int pos)
//     {
//         if(mem[pos] != 0)
//         {
//             return mem[pos];
//         }

//         int ret = 1; // 细节：初值为1
//         for(int i = pos + 1; i < nums.size(); i++)
//         {
//             if(nums[i] > nums[pos])
//             {
//                 ret = max(ret, DFS(nums, i) + 1);    
//             }
//         }

//         mem[pos] = ret;
//         return ret;
//     }
// };

// v3.0 动态规划
// int lengthOfLIS(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> dp(n, 1);

//     int ret = 0;
//     for(int i = n - 1; i >= 0; i--) // 枚举每个位置
//     {
//         for(int j = i + 1; j < n; j++) // 依次枚举后面的值的最长子序列
//         {
//             if(nums[j] > nums[i])
//             {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }

//         ret = max(ret, dp[i]);
//     }

//     return ret;
// }

// 猜数字大小
// v1.0 暴搜
// class Solution 
// {
// public:
//     int getMoneyAmount(int n) 
//     {
//         return DFS(1, n);
//     }

//     int DFS(int left, int right)
//     {
//         if(left >= right)
//         {
//             return 0;
//         }

//         int ret = INT_MAX;
//         for(int i = left; i <= right; i++) // 选择头结点
//         {
//             int x = DFS(left, i - 1);
//             int y = DFS(i + 1, right);
//             ret = min(ret, max(x, y) + i);
//         }

//         return ret;
//     }
// };

// v2.0 记忆化搜索
// class Solution 
// {
//     vector<vector<int>> mem;
// public:
//     int getMoneyAmount(int n) 
//     {
//         mem.resize(n + 1, vector(n + 1, 0));
//         return DFS(1, n);
//     }

//     int DFS(int left, int right)
//     {
//         if(left >= right)
//         {
//             return 0;
//         }

//         if(mem[left][right] != 0)
//         {
//             return mem[left][right];
//         }


//         int ret = INT_MAX;
//         for(int i = left; i <= right; i++) // 选择头结点
//         {
//             int x = DFS(left, i - 1);
//             int y = DFS(i + 1, right);
//             ret = min(ret, max(x, y) + i);
//         }

//         mem[left][right] = ret;
//         return ret;
//     }
// };

// 矩阵中的最长递增路径
// v1.0 暴搜
// class Solution 
// {
//     int n, m;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int longestIncreasingPath(vector<vector<int>>& matrix) 
//     {
//         n = matrix.size(), m = matrix[0].size();

//         int ret = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 ret = max(ret, DFS(matrix, i, j));
//             }
//         }

//         return ret;
//     }

//     int DFS(vector<vector<int>>& matrix, int i, int j)
//     {
//         int ret = 1;
//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] > matrix[i][j])
//             {
//                 ret = max(ret, DFS(matrix, x, y) + 1);
//             }
//         }

//         return ret;
//     }
// };

// v2.0 记忆化搜索
// class Solution 
// {
//     int n, m;
//     vector<vector<int>> mem;

//     // "方向"向量数组
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int longestIncreasingPath(vector<vector<int>>& matrix) 
//     {
//         n = matrix.size(), m = matrix[0].size();
//         mem.resize(n, vector<int>(m, 0));

//         int ret = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 ret = max(ret, DFS(matrix, i, j));
//             }
//         }

//         return ret;
//     }

//     int DFS(vector<vector<int>>& matrix, int i, int j)
//     {
//         if(mem[i][j] != 0)
//         {
//             return mem[i][j];
//         }
//         int ret = 1;
//         for(int k = 0; k < 4; k++)
//         {
//             int x = i + dx[k], y = j + dy[k];
//             if(x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] > matrix[i][j])
//             {
//                 ret = max(ret, DFS(matrix, x, y) + 1);
//             }
//         }

//         return mem[i][j] = ret;
//     }
// };

// 第 N 个泰波那契数
// v1.0 动态规划
// int tribonacci(int n) 
// {
//     // 边界情况处理
//     if(n == 0 || n == 1) return n;

//     vector<int> dp(n + 1, 0);
//     dp[1] = dp[2] = 1;

//     for(int i = 3; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//     }

//     return dp[n];
// }

// v2.0 动态规划 + 滚动数组空间优化
// int tribonacci(int n) 
// {
//     // 边界情况处理
//     if(n == 0 || n == 1) return n;

//     int a = 0, b = 1, c = 1, ret = 1;
//     for(int i = 3; i <= n; i++)
//     {
//         ret = a + b + c;
//         a = b, b = c, c = ret; // 滚动数组
//     }

//     return ret;
// }

// 三步问题
// int waysToStep(int n) 
// {
//     // 边界情况处理
//     if(n == 1 || n == 2) return n;
//     if(n == 3) return 4;

//     const int MOD = 1e9 + 7;

//     vector<int> dp(n + 1, 0);
//     dp[1] = 1, dp[2] = 2, dp[3] = 4;

//     for(int i = 4; i <= n; i++)
//     {
//         dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
//     }

//     return dp[n];
// }

// 使用最小花费爬楼梯
// v1.0 以i位置为结尾
// int minCostClimbingStairs(vector<int>& cost) 
// {
//     int n = cost.size();
//     vector<int> dp(n + 1);

//     for(int i = 2; i <= n; i++)
//     {
//         dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//     }

//     return dp[n];
// }

// v2.0 以i位置为起点
// int minCostClimbingStairs(vector<int>& cost) 
// {
//     int n = cost.size();
//     vector<int> dp(n);

//     dp[n - 1] = cost[n - 1], dp[n - 2] = cost[n - 2];

//     for(int i = n - 3; i >= 0; i--)
//     {
//         dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
//     }

//     return min(dp[0], dp[1]);
// }

// 解码方法
// v1.0
// int numDecodings(string s) 
// {
//     int n = s.size();
//     vector<int> dp(n, 0);

//     dp[0] = s[0] != '0';

//     // 处理边界情况
//     if(s.size() == 1) return dp[0];

//     // 一个位置解码出来一个
//     if(s[0] != '0' && s[1] != '0')
//     {
//         dp[1]++;
//     }

//     // 两个位置解码出来一个
//     int tmp = (s[0] - '0') * 10 + s[1] - '0';
//     if(tmp >= 10 && tmp <= 26)
//     {
//         dp[1]++;
//     }

//     // Dynamic Plan
//     for(int i = 2; i < n; i++)
//     {
//         // 一个位置解码出来一个
//         if(s[i] != '0')
//         {
//             dp[i] += dp[i - 1];
//         }

//         // 两个位置解码出来一个
//         int tmp = (s[i - 1] - '0') * 10 + s[i] - '0';
//         if(tmp >= 10 && tmp <= 26)
//         {
//             dp[i] += dp[i - 2];
//         }
//     }

//     return dp[n - 1];
// }

// v2.0 优化
// int numDecodings(string s) 
// {
//     int n = s.size();
//     vector<int> dp(n + 1, 0);

//     dp[0] = 1;
//     dp[1] = s[0] != '0';

//     // Dynamic Plan
//     for(int i = 2; i <= n; i++)
//     {
//         // 一个位置解码出来一个
//         if(s[i - 1] != '0')
//         {
//             dp[i] += dp[i - 1];
//         }

//         // 两个位置解码出来一个
//         int tmp = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
//         if(tmp >= 10 && tmp <= 26)
//         {
//             dp[i] += dp[i - 2];
//         }
//     }

//     return dp[n];
// }

// 不同路径
// int uniquePaths(int n, int m) 
// {
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     dp[0][1] = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//         }
//     }

//     return dp[n][m];
// }

// 不同路径Ⅱ
// int uniquePathsWithObstacles(vector<vector<int>>& ob) 
// {
//     int n = ob.size(), m = ob[0].size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     dp[0][1] = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(ob[i - 1][j - 1] == 0) // 注意下表映射关系
//             {
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//             }
//         }
//     }

//     return dp[n][m];
// }

// 珠宝的最高价值
// int jewelleryValue(vector<vector<int>>& frame) 
// {
//     int n = frame.size(), m = frame[0].size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + frame[i - 1][j - 1];
//         }
//     }

//     return dp[n][m];
// }

// 下降路径最小和
// int minFallingPathSum(vector<vector<int>>& matrix) 
// {
//     // Init
//     int n = matrix.size();
//     vector<vector<int>> dp(n + 1, vector<int>(n + 2, INT_MAX));
//     for(int i = 0; i < n + 2; i++)
//     {
//         dp[0][i] = 0;
//     }

//     // Dynamic Plan
//     for(int i = 1; i < n + 1; i++)
//     {
//         for(int j = 1; j < n + 1; j++)
//         {
//             dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i - 1][j + 1]))
//                 + matrix[i - 1][j - 1]; 
//         }
//     }

//     // 找最小值
//     int ret = INT_MAX;
//     for(int i = 0; i < n + 2; i++)
//     {
//         ret = min(ret, dp[n][i]);
//     }

//     return ret;
// }

// 最小路径和
// int minPathSum(vector<vector<int>>& grid) 
// {
//     // Init
//     int n = grid.size(), m = grid[0].size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
//     dp[0][1] = dp[1][0] = 0;

//     // Dynamic Plan
//     for(int i = 1; i < n + 1; i++)
//     {
//         for(int j = 1; j < m + 1; j++)
//         {
//             dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
//         }
//     }

//     return dp[n][m];
// }

// 地下城游戏
// int calculateMinimumHP(vector<vector<int>>& d) 
// {
//     // Init
//     int n = d.size(), m = d[0].size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
//     dp[n][m - 1] = dp[n - 1][m] = 1;

//     // Dynamic Plan
//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = m - 1; j >= 0; j--)
//         {
//             dp[i][j] = min(dp[i + 1][j], dp[i][j + 1]) - d[i][j];
//             dp[i][j] = max(1, dp[i][j]); // 防止"死了还能到":P
//         }
//     }

//     return dp[0][0];
// }

// 按摩师
// int massage(vector<int>& nums) 
// {
//     int n = nums.size();
//     if(n == 0) return 0;

//     vector<int> f(n);
//     vector<int> g(n);
//     f[0] = nums[0];

//     for(int i = 1; i < n; i++)
//     {
//         f[i] = g[i - 1] + nums[i];
//         g[i] = max(f[i - 1], g[i - 1]);
//     }

//     return max(f[n - 1], g[n - 1]);
// }

// 打家劫舍Ⅱ
// class Solution
// {
// public:
//     int rob(vector<int>& nums) 
//     {
//         int n = nums.size();
        
//         // 分类讨论，取两种情况中的最大值
//         return max(nums[0] + _rob(nums, 2, n - 2), _rob(nums, 1, n - 1));
//     }
    
//     int _rob(vector<int>& nums, int left, int right)
//     {
//         if(left > right) return 0;
        
//         int n = nums.size();
//         vector<int> f(n); // 选
//         vector<int> g(n); // 不选
//         f[left] = nums[left];
        
//         for(int i = left + 1; i <= right; i++)
//         {
//             f[i] = g[i - 1] + nums[i];
//             g[i] = max(f[i - 1], g[i - 1]);
//         }
        
//         return max(f[right], g[right]);
//     }
// };

// 删除并获得点数
// int deleteAndEarn(vector<int>& nums) 
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.back(); // max

//     vector<int> arr(n + 1);
//     for(auto& x : nums)
//     {
//         arr[x] += x;
//     }

//     vector<int> f(n + 1);
//     vector<int> g(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         f[i] = g[i - 1] + arr[i];
//         g[i] = max(f[i - 1], g[i - 1]);
//     }

//     return max(f[n], g[n]);
// }

// 粉刷房子
// int minCost(vector<vector<int>>& costs) 
// {
//     int n = costs.size();
//     vector<vector<int>> dp(n + 1, vector<int>(3));

//     for(int i = 1; i <= n; i++)
//     {
//         dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costs[i - 1][0];
//         dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costs[i - 1][1];
//         dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + costs[i - 1][2];
//     }

//     return min(dp[n][0], min(dp[n][1], dp[n][2]));
// }

// 买卖股票的最佳时机含冷冻期
// int maxProfit(vector<int>& prices) 
// {
//     int n = prices.size();
//     vector<vector<int>> dp(n, vector<int>(3));
//     dp[0][0] = -prices[0];

//     for(int i = 1; i < n; i++)
//     {
//         dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//         dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);
//         dp[i][2] = dp[i - 1][0] + prices[i];
//     }

//     return max(dp[n - 1][1], dp[n - 1][2]);
// }

// 买卖股票的最佳时机含手续费
// int maxProfit(vector<int>& prices, int fee) 
// {
//     int n = prices.size();
//     vector<int> f(n); // 买入
//     vector<int> g(n); // 卖出
//     f[0] = -prices[0];

//     for(int i = 1; i < n; i++)
//     {
//         f[i] = max(f[i - 1], g[i - 1] - prices[i]);
//         g[i] = max(g[i - 1], f[i - 1] + prices[i] - fee);
//     }

//     return g[n - 1];
// }

// 买卖股票的最佳时机Ⅲ
// int maxProfit(vector<int>& prices) 
// {
//     const int INF = -0x3f3f3f3f; // 充当"INT_MIN"的角色

//     int n = prices.size();
//     vector<vector<int>> f(n, vector<int>(3, INF));
//     vector<vector<int>> g(n, vector<int>(3, INF));
//     f[0][0] = -prices[0], g[0][0] = 0;

//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);

//             // 处理g[i][j]时，要防止越界
//             g[i][j] = g[i - 1][j];
//             if(j - 1 >= 0)
//             {
//                 g[i][j] = max(g[i][j], f[i - 1][j - 1] + prices[i]);
//             }
//         }
//     }

//     int ret = 0;
//     for(int j = 0; j < 3; j++)
//     {
//         ret = max(ret, g[n - 1][j]);
//     }

//     return ret;
// }

// 买卖股票的最佳时机Ⅳ
// int maxProfit(int k, vector<int>& prices) 
// {
//     const int INF = -0x3f3f3f3f; // 替代"INT_MIN"的功能
//     int n = prices.size();

//     // 优化处理细节，避免空间浪费
//     k = min(k, n / 2);

//     vector<vector<int>> f(n, vector<int>(k + 1, INF));
//     vector<vector<int>> g(n, vector<int>(k + 1, INF));
//     f[0][0] = -prices[0], g[0][0] = 0;

//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j <= k; j++)
//         {
//             f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);

//             // 处理g时，要避免越界
//             g[i][j] = g[i - 1][j];
//             if(j - 1 >= 0)
//             {
//                 g[i][j] = max(g[i][j], f[i - 1][j - 1] + prices[i]);
//             }
//         }
//     }

//     int ret = 0;
//     for(int i = 0; i <= k; i++)
//     {
//         ret = max(ret, g[n - 1][i]);
//     }

//     return ret;
// }

// 最大子数组和
// int maxSubArray(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> dp(n + 1);
//     dp[0] = 0;

//     int ret = INT_MIN;
//     for(int i = 1; i <= n; i++)
//     {
//         dp[i] = max(nums[i - 1], dp[i - 1] + nums[i - 1]);
//         ret = max(ret, dp[i]);
//     }

//     return ret;
// }

// 环形子数组的最大和
// int maxSubarraySumCircular(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> f(n + 1);
//     vector<int> g(n + 1);

//     int fmax = INT_MIN, gmin = INT_MAX, sum = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         int x = nums[i - 1];
//         sum += x;

//         f[i] = max(x, x + f[i - 1]);
//         fmax = max(fmax, f[i]);

//         g[i] = min(x, x + g[i - 1]);
//         gmin = min(gmin, g[i]);
//     }

//     return sum == gmin ? fmax : max(fmax, sum - gmin);
// }

// 乘积最大子数组
// int maxProduct(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> f(n + 1), g(n + 1);
//     f[0] = g[0] = 1;

//     int ret = INT_MIN;
//     for(int i = 1; i <= n; i++)
//     {
//         f[i] = max(nums[i - 1], max(f[i - 1] * nums[i - 1], g[i - 1] * nums[i - 1]));
//         g[i] = min(nums[i - 1], min(f[i - 1] * nums[i - 1], g[i - 1] * nums[i - 1]));
//         ret = max(ret, f[i]);
//     }

//     return ret;
// }

// 乘积为正数的最长子数组长度
// int getMaxLen(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> f(n + 1), g(n + 1);

//     int ret = INT_MIN;
//     for(int i = 1; i <= n; i++)
//     {
//         if(nums[i - 1] > 0)
//         {
//             f[i] = f[i - 1] + 1;
//             g[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//         }
//         else if(nums[i - 1] < 0)
//         {
//             f[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//             g[i] = f[i - 1] + 1;
//         }

//         ret = max(ret, f[i]);
//     }

//     return ret;
// }

// 等差数列划分
// int numberOfArithmeticSlices(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> dp(n);

//     int sum = 0;
//     for(int i = 2; i < n; i++)
//     {
//         dp[i] = nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2] ? dp[i - 1] + 1 : 0;
//         sum += dp[i];
//     }

//     return sum;
// }

// 最长湍流子数组
// int maxTurbulenceSize(vector<int>& arr) 
// {
//     int n = arr.size();
//     vector<int> f(n, 1), g(n, 1);

//     int ret = 1;
//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i - 1] < arr[i])
//         {
//             f[i] = g[i - 1] + 1;
//         }
//         else if(arr[i - 1] > arr[i])
//         {
//             g[i] = f[i - 1] + 1;
//         }

//         ret = max(ret, max(f[i], g[i]));
//     }

//     return ret;
// }

// 单词拆分
// bool wordBreak(string s, vector<string>& wordDict) 
// {
//     // 优化
//     unordered_set<string> hash;
//     for(auto& str : wordDict)
//     {
//         hash.insert(str);
//     }

//     // Init
//     int n = s.size();
//     vector<bool> dp(n + 1, false);
//     dp[0] = true;
//     s = ' ' + s; // 给原始字符串下标统一+1

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = i; j >= 1; j--) // 找此时的最后一个单词
//         {
//             if(dp[j - 1] && hash.count(s.substr(j, i - j + 1)))
//             {
//                 dp[i] = true;
//                 break;
//             }
//         }
//     }

//     return dp[n];
// }

// 环绕字符串中唯一的子字符串
// int findSubstringInWraproundString(string s) 
// {
//     int n = s.size();
//     vector<int> dp(n, 1); // 创建dp表 + 初始化

//     for(int i = 1; i < n; i++)
//     {
//         if(s[i - 1] + 1 == s[i] || s[i - 1] == 'z' && s[i] == 'a')
//         {
//             dp[i] += dp[i - 1];
//         }
//     }

//     // 结果去重
//     int hash[26] = {0};
//     for(int i = 0; i < n; i++)
//     {
//         hash[s[i] - 'a'] = max(hash[s[i] - 'a'], dp[i]);
//     }

//     // 求和返回
//     int sum = 0;
//     for(auto& x : hash)
//     {
//         sum += x;
//     }

//     return sum;
// }

// 最长递增子序列
// int lengthOfLIS(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> dp(n, 1);

//     int ret = 1;
//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             if(nums[j] < nums[i])
//             {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }

//         ret = max(ret, dp[i]);
//     }

//     return ret;
// }

// 摆动序列
// int wiggleMaxLength(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> f(n, 1), g(n, 1);

//     int ret = 1;
//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             if(nums[j] < nums[i])
//             {
//                 f[i] = max(f[i], g[j] + 1);
//             }
//             else if(nums[j] > nums[i])
//             {
//                 g[i] = max(g[i], f[j] + 1);
//             }
//         }

//         ret = max(ret, max(f[i], g[i]));
//     }

//     return ret;
// }

// 最长递增子序列的个数
// int findNumberOfLIS(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> len(n, 1), count(n, 1);

//     int retLen = 1, retCount = 1;
//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             if(nums[j] < nums[i])
//             {
//                 if(len[j] + 1 == len[i])
//                 {
//                     count[i] += count[j];
//                 }
//                 else if(len[j] + 1 > len[i])
//                 {
//                     len[i] = len[j] + 1;
//                     count[i] = count[j];
//                 }
//             }
//         }

//         if(retLen == len[i])
//         {
//             retCount += count[i];
//         }
//         else if(retLen < len[i])
//         {
//             retLen = len[i];
//             retCount = count[i];
//         }
//     }

//     return retCount;
// }

// 最长数对链
// int findLongestChain(vector<vector<int>>& pairs) 
// {
//     sort(pairs.begin(), pairs.end()); // 预处理

//     int n = pairs.size();
//     vector<int> dp(n, 1);

//     int ret = 1;
//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             if(pairs[j][1] < pairs[i][0])
//             {
//                 dp[i] = max(dp[j] + 1, dp[i]);
//             }
//         }

//         ret = max(ret, dp[i]);
//     }

//     return ret;
// }

// 最长定差子序列
// int longestSubsequence(vector<int>& arr, int difference) 
// {
//     unordered_map<int, int> hash; // <arr[i], dp[i]>
//     hash[arr[0]] = 1;

//     int ret = 0;
//     for(int i = 1; i < arr.size(); i++)
//     {
//         // 1.如果arr[j]不存在，那么arr[i]就会被初始化为1
//         // 2.如果出现重复的值，那么后面出现的值会覆盖掉前面的值
//         hash[arr[i]] = hash[arr[i] - difference] + 1; 
//         ret = max(ret, hash[arr[i]]);
//     }

//     return ret;
// }

// 最长的斐波那契子序列的长度
// int lenLongestFibSubseq(vector<int>& arr) 
// {
//     int n = arr.size();

//     // 优化
//     unordered_map<int, int> hash; // <arr[i], i>
//     for(int i = 0; i < n; i++)
//     {
//         hash[arr[i]] = i;
//     }

//     vector<vector<int>> dp(n, vector<int>(n, 2));

//     int ret = 2;
//     for(int j = 2; j < n; j++) // 固定第一个位置
//     {
//         for(int i = 1; i < j; i++) // 固定第二个位置
//         {
//             int a = arr[j] - arr[i];
//             if(a < arr[i] && hash.count(a))
//             {
//                 dp[i][j] = dp[hash[a]][i] + 1;
//                 ret = max(ret, dp[i][j]);
//             }
//         }
//     }

//     return ret < 3 ? 0 : ret;
// }

// 最长等差数列
// int longestArithSeqLength(vector<int>& nums) 
// {
//     unordered_map<int, int> hash; // <nums[i], i>
//     hash[nums[0]] = 0;

//     int n = nums.size();
//     vector<vector<int>> dp(n, vector<int>(n, 2));

//     int ret = 2;
//     for(int i = 1; i < n; i++) // 固定倒数第二个数
//     {
//         for(int j = i + 1; j < n; j++) // 枚举倒数第一个数
//         {
//             int a = 2 * nums[i] - nums[j];
//             if(hash.count(a)) // 已经包含了判断 k < i
//             {
//                 dp[i][j] = dp[hash[a]][i] + 1;
//                 ret = max(ret, dp[i][j]);
//             }
//         }

//         hash[nums[i]] = i; // 存入当前下标，对应下一次的最近元素的下标
//     }

//     return ret;
// }

// 等差数列划分 II - 子序列
// int numberOfArithmeticSlices(vector<int>& nums) 
// {
//     int n = nums.size();

//     // 优化，<nums[i], vector<int> index()>
//     unordered_map<long long, vector<int>> hash;
//     for(int i = 0; i < n; i++)
//     {
//         hash[nums[i]].push_back(i);
//     }

//     vector<vector<int>> dp(n, vector<int>(n));

//     int ret = 0;
//     for(int j = 2; j < n; j++) // 固定第一个数
//     {
//         for(int i = 1; i < j; i++) // 枚举第二个数
//         {
//             long long a = (long long)2 * nums[i] - nums[j];
//             if(hash.count(a))
//             {
//                 for(auto& k : hash[a])
//                 {
//                     if(k < i)
//                     {
//                         dp[i][j] += dp[k][i] + 1;
//                     }
//                 }
//             }

//             ret += dp[i][j];
//         }
//     }

//     return ret;
// }

// 回文子串
// int countSubstrings(string s) 
// {
//     int n = s.size();
//     vector<vector<bool>> dp(n, vector<bool>(n));

//     int ret = 0;
//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = i; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 dp[i][j] = i + 1 < j ? dp[i + 1][j - 1] : true;

//                 if(dp[i][j])
//                 {
//                     ret++;
//                 }
//             }
//         }
//     }

//     return ret;
// }

// 最长回文子串
// string longestPalindrome(string s) 
// {
//     int n = s.size();
//     vector<vector<bool>> dp(n, vector<bool>(n));
    
//     int len = 1, begin = 0;
//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = i; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 dp[i][j] = i + 1 < j ? dp[i + 1][j - 1] : true;

//                 if(dp[i][j] && j - i + 1 > len)
//                 {
//                     len = j - i + 1;
//                     begin = i;
//                 }
//             }
//         }
//     }

//     return s.substr(begin, len);
// }

// 分割回文串 IV
// bool checkPartitioning(string s) 
// {
//     // 预处理：处理回文信息
//     int n = s.size();
//     vector<vector<bool>> dp(n, vector<bool>(n));

//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = i; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 dp[i][j] = i + 1 < j ? dp[i + 1][j - 1] : true;
//             }
//         }
//     }

//     // 判断三区间，枚举中间区间
//     for(int i = 1; i < n - 1; i++)
//     {
//         for(int j = i; j < n - 1; j++)
//         {
//             if(dp[0][i - 1] && dp[i][j] && dp[j + 1][n - 1])
//             {
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// 分割回文串 II
// int minCut(string s) 
// {
//     int n = s.size();

//     // 预处理
//     vector<vector<bool>> isPal(n, vector<bool>(n));
//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = i; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 isPal[i][j] = i + 1 < j ? isPal[i + 1][j - 1] : true;
//             }
//         }
//     }

//     // DP
//     vector<int> dp(n, INT_MAX);
//     for(int i = 0; i < n; i++)
//     {
//         if(isPal[0][i])
//         {
//             dp[i] = 0;
//         }
//         else
//         {
//             for(int j = 1; j <= i; j++)
//             {
//                 if(isPal[j][i])
//                 {
//                     dp[i] = min(dp[j - 1] + 1, dp[i]);
//                 }
//             }
//         }
//     }

//     return dp[n - 1];
// }

// 最长回文子序列
// int longestPalindromeSubseq(string s) 
// {
//     int n = s.size();
//     vector<vector<int>> dp(n, vector<int>(n));

//     for(int i = n - 1; i >= 0; i--)
//     {
//         dp[i][i] = 1;
//         for(int j = i + 1; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 dp[i][j] = dp[i + 1][j - 1] + 2;
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[0][n - 1];
// }

// 让字符串成为回文串的最少插入次数
// int minInsertions(string s) 
// {
//     int n = s.size();
//     vector<vector<int>> dp(n, vector<int>(n));
//     for(int i = n - 1; i >= 0; i--)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(s[i] == s[j])
//             {
//                 dp[i][j] = dp[i + 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//             }
//         }
//     }

//     return dp[0][n - 1];
// }

// 最长公共子序列
// int longestCommonSubsequence(string s1, string s2) 
// {
//     int n = s1.size(), m = s2.size();
//     s1 = " " + s1, s2 = " " + s2;

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(s1[i] == s2[j])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[n][m];
// }

// 不相交的线
// int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
// {
//     int n = nums1.size(), m = nums2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(nums1[i - 1] == nums2[j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[n][m];
// }

// 不同的子序列
// int numDistinct(string s, string t) 
// {
//     const int MOD = 1e9 + 7;
//     int n = s.size(), m = t.size();
//     vector<vector<long long>> dp(m + 1, vector<long long>(n + 1));

//     // Init
//     for(int i = 0; i <= n; i++)
//     {
//         dp[0][i] = 1;
//     }

//     // DP
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             dp[i][j] += dp[i][j - 1] % MOD;
//             if(t[i - 1] == s[j - 1])
//             {
//                 dp[i][j] += dp[i - 1][j - 1] % MOD;
//             }
//         }
//     }

//     return dp[m][n];
// }

// 通配符匹配
// bool isMatch(string s, string p) 
// {
//     int n = s.size(), m = p.size();
//     s = " " + s, p = " " + p;
//     vector<vector<bool>> dp(n + 1, vector<bool>(m + 1));

//     // Init
//     dp[0][0] = true;
//     for(int i = 1; i <= m; i++)
//     {
//         if(p[i] == '*')
//         {
//             dp[0][i] = true;
//         }
//         else
//         {
//             break;
//         }
//     }

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(p[j] == '*')
//             {
//                 dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = (p[j] == '?' || s[i] == p[j]) && dp[i - 1][j - 1];
//             }
//         }
//     }

//     return dp[n][m];
// }

// 正则表达式匹配
// bool isMatch(string s, string p) 
// {
//     int n = s.size(), m = p.size();
//     s = " " + s, p = " " + p;
//     vector<vector<bool>> dp(n + 1, vector<bool>(m + 1));

//     // Init
//     dp[0][0] = true;
//     for(int i = 2; i <= m; i += 2)
//     {
//         if(p[i] == '*')
//         {
//             dp[0][i] = true;
//         }
//         else
//         {
//             break;
//         }
//     }

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(p[j] == '*')
//             {
//                 dp[i][j] = dp[i][j - 2] || (p[j - 1] == '.' || p[j - 1] == s[i]) && dp[i - 1][j];
//             }
//             else
//             {
//                 dp[i][j] = (p[j] == s[i] || p[j] == '.') && dp[i - 1][j - 1];
//             }
//         }
//     }

//     return dp[n][m];
// }

// 交错字符串
// bool isInterleave(string s1, string s2, string s3) 
// {
//     int n = s1.size(), m = s2.size();
//     if(n + m != s3.size()) return false;

//     s1 = " " + s1, s2 = " " + s2, s3 = " " + s3;
//     vector<vector<bool>> dp(n + 1, vector<bool>(m + 1));

//     // Init
//     dp[0][0] = true;
//     for(int i = 1; i <= m; i++) // 第一行
//     {
//         if(s2[i] == s3[i])
//         {
//             dp[0][i] = true;
//         }
//         else
//         {
//             break;
//         }
//     }

//     for(int i = 1; i <= n; i++) // 第一列
//     {
//         if(s1[i] == s3[i])
//         {
//             dp[i][0] = true;
//         }
//         else
//         {
//             break;
//         }
//     }

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = (s1[i] == s3[i + j] && dp[i - 1][j])
//                 || (s2[j] == s3[i + j] && dp[i][j - 1]);
//         }
//     }

//     return dp[n][m];
// }

// 两个字符串的最小ASCII删除和
// int minimumDeleteSum(string s1, string s2) 
// {
//     int n = s1.size(), m = s2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//             if(s1[i - 1] == s2[j - 1])
//             {
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + s1[i - 1]);
//             }
//         }
//     }

//     int ret = 0;
//     for(auto& ch : s1)
//     {
//         ret += ch;
//     }

//     for(auto& ch : s2)
//     {
//         ret += ch;
//     }

//     return ret - dp[n][m] * 2;
// }

// 最长重复子数组
// int findLength(vector<int>& nums1, vector<int>& nums2) 
// {
//     int n = nums1.size(), m = nums2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));

//     int ret = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             if(nums1[i - 1] == nums2[j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//                 ret = max(ret, dp[i][j]);
//             }
//         }
//     }

//     return ret;
// }

// 01背包
// int main()
// {
//     int n = 0, V = 0;
//     cin >> n >> V;
    
//     vector<int> v(n + 1), w(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }
    
//     vector<vector<int>> dp(n + 1, vector<int>(V + 1));
    
//     // Q1
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= V; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i])
//             {
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << dp[n][V] << endl;

//     // Q2
//     dp.resize(n + 1, vector<int>(V + 1));
//     for(int i = 1; i <= V; i++)
//     {
//         dp[0][i] = -1;
//     }

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= V; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i] && dp[i - 1][j - v[i]] != -1)
//             {
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << (dp[n][V] == -1 ? 0 : dp[n][V]) << endl;

//     return 0;
// }

// v2.0 滚动数组优化
// int main()
// {
//     int n = 0, V = 0;
//     cin >> n >> V;
    
//     vector<int> v(n + 1), w(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }
    
//     vector<int> dp(V + 1);
    
//     // Q1
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = V; j >= v[i]; j--)
//         {
//             dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//         }
//     }
//     cout << dp[V] << endl;

//     // Q2
//     dp.resize(V + 1, 0);
//     for(int i = 1; i <= V; i++)
//     {
//         dp[i] = -1;
//     }

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = V; j >= v[i]; j--)
//         {
//             if(dp[j - v[i]] != -1)
//             {
//                 dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << (dp[V] == -1 ? 0 : dp[V]) << endl;

//     return 0;
// }

// 分割等和子集
// v1.0
// bool canPartition(vector<int>& nums) 
// {
//     int n = nums.size(), sum = 0;
//     for(auto& x : nums)
//     {
//         sum += x;
//     }

//     if(sum % 2) return false;

//     int aim = sum / 2;
//     vector<vector<bool>> dp(n + 1, vector<bool>(aim + 1));

//     // Init
//     for(int i = 1; i <= n; i++)
//     {
//         dp[i][0] = true;
//     }

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= aim; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= nums[i - 1])
//             {
//                 dp[i][j] = dp[i][j] || dp[i - 1][j - nums[i - 1]];
//             }
//         }
//     }

//     return dp[n][aim];
// }

// v2.0 滚动数组优化
// bool canPartition(vector<int>& nums) 
// {
//     int n = nums.size(), sum = 0;
//     for(auto& x : nums)
//     {
//         sum += x;
//     }

//     if(sum % 2) return false;

//     int aim = sum / 2;
//     vector<bool> dp(aim + 1);                
//     dp[0] = true;

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = aim; j >= nums[i - 1]; j--)
//         {
//             dp[j] = dp[j] || dp[j - nums[i - 1]];
//         }
//     }

//     return dp[aim];
// }

// 目标和
// v1.0
// int findTargetSumWays(vector<int>& nums, int target) 
// {
//     // 问题转换
//     int sum = 0;
//     for(auto& x : nums)
//     {
//         sum += x;
//     }
//     int aim = (sum + target) / 2;

//     // 边界处理
//     if(aim < 0 || (sum + target) % 2) return 0;

//     int n = nums.size();
//     vector<vector<int>> dp(n + 1, vector<int>(aim + 1));

//     dp[0][0] = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j <= aim; j++) // 第一列没有初始化，也在DP阶段处理
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= nums[i - 1])
//             {
//                 dp[i][j] += dp[i - 1][j  - nums[i - 1]];
//             }
//         }
//     }

//     return dp[n][aim];
// }

// v2.0 滚动数组优化
// int findTargetSumWays(vector<int>& nums, int target) 
// {
//     // 问题转换
//     int sum = 0;
//     for(auto& x : nums)
//     {
//         sum += x;
//     }
//     int aim = (sum + target) / 2;

//     // 边界处理
//     if(aim < 0 || (sum + target) % 2) return 0;

//     int n = nums.size();
//     vector<int> dp(aim + 1);

//     dp[0] = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = aim; j >= nums[i - 1]; j--)
//         {
//             dp[j] += dp[j  - nums[i - 1]];
//         }
//     }

//     return dp[aim];
// }

// 最后一块石头的重量 II
// v1.0
// int lastStoneWeightII(vector<int>& stones) 
// {
//     int sum = 0;
//     for(auto& x : stones)
//     {
//         sum += x;
//     }

//     int n = stones.size(), m = sum / 2;
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j <= m; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= stones[i - 1])
//             {
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - stones[i - 1]] + stones[i - 1]);
//             }
//         }
//     }

//     return sum - 2 * dp[n][m];
// }

// v2.0 滚动数组优化
// int lastStoneWeightII(vector<int>& stones) 
// {
//     int sum = 0;
//     for(auto& x : stones)
//     {
//         sum += x;
//     }

//     int n = stones.size(), m = sum / 2;
//     vector<int> dp(m + 1);

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = m; j >= stones[i - 1]; j--)
//         {
//             dp[j] = max(dp[j], dp[j - stones[i - 1]] + stones[i - 1]);
//         }
//     }

//     return sum - 2 * dp[m];
// }

// 完全背包
// v1.0
// int main()
// {
//     int n = 0, V = 0;
//     cin >> n >> V;

//     vector<int> v(n + 1), w(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }

//     vector<vector<int>> dp(n + 1, vector<int>(V + 1));
    
//     // Q1
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= V; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i])
//             {
//                 dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << dp[n][V] << endl;

//     // Q2
//     dp.resize(n +1, vector<int>(V + 1));
//     for(int i = 1; i <= V; i++)
//     {
//         dp[0][i] = -1;
//     }

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j <= V; j++) // 下标从0开始
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i] && dp[i][j - v[i]] != -1)
//             {
//                 dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << (dp[n][V] == -1 ? 0 : dp[n][V]) << endl;

//     return 0;
// }

// v2.0 滚动数组优化
// int main()
// {
//     int n = 0, V = 0;
//     cin >> n >> V;

//     vector<int> v(n + 1), w(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }

//     vector<int> dp(V + 1);
    
//     // Q1
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = v[i]; j <= V; j++)
//         {
//             dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//         }
//     }
//     cout << dp[V] << endl;

//     // Q2
//     dp.resize(V + 1);
//     for(int i = 1; i <= V; i++)
//     {
//         dp[i] = -1;
//     }

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = v[i]; j <= V; j++)
//         {
//             if(dp[j - v[i]] != -1)
//             {
//                 dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//             }
//         }
//     }
//     cout << (dp[V] == -1 ? 0 : dp[V]) << endl;

//     return 0;
// }

// 零钱兑换
// v1.0
// int coinChange(vector<int>& coins, int amount) 
// {
//     const int INF = 0x3f3f3f3f;

//     int n = coins.size();
//     vector<vector<int>> dp(n + 1, vector<int>(amount + 1));

//     // Init
//     for(int j = 1; j <= amount; j++)
//     {
//         dp[0][j] = INF;
//     }

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j <= amount; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= coins[i - 1])
//             {
//                 dp[i][j] = min(dp[i][j], dp[i][j - coins[i - 1]] + 1);
//             }
//         }
//     }

//     return dp[n][amount] >= INF ? -1 : dp[n][amount];
// }

// v2.0 滚动数组优化
// int coinChange(vector<int>& coins, int amount) 
// {
//     const int INF = 0x3f3f3f3f;

//     int n = coins.size();
//     vector<int> dp(amount + 1, INF);
//     dp[0] = 0;

//     // DP
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = coins[i - 1]; j <= amount; j++)
//         {
//             dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//         }
//     }

//     return dp[amount] >= INF ? -1 : dp[amount];
// }

// 零钱兑换Ⅱ
// int change(int amount, vector<int>& coins) 
// {
//     vector<int> dp(amount + 1);
//     dp[0] = 1;

//     for(int i = 1; i <= coins.size(); i++)
//     {
//         for(int j = coins[i - 1]; j <= amount; j++)
//         {
//             dp[j] += dp[j - coins[i - 1]];
//         }
//     }

//     return dp[amount];
// }

// 完全平方数
// v1.0
// int numSquares(int n) 
// {
//     const int INF = 0x3f3f3f3f;

//     int m = sqrt(n);
//     vector<vector<int>> dp(m + 1, vector<int>(n + 1));

//     // Init
//     for(int j = 1; j <= n; j++)
//     {
//         dp[0][j] = INF;
//     }

//     // DP
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = 0; j <= n; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= i * i)
//             {
//                 dp[i][j] = min(dp[i][j], dp[i][j - i * i] + 1);
//             }
//         }
//     }

//     return dp[m][n];
// }

// v2.0 滚动数组优化
// int numSquares(int n) 
// {
//     const int INF = 0x3f3f3f3f;

//     int m = sqrt(n);
//     vector<int> dp(n + 1, INF);
//     dp[0] = 0;

//     // DP
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = i * i; j <= n; j++)
//         {
//             dp[j] = min(dp[j], dp[j - i * i] + 1);
//         }
//     }

//     return dp[n];
// }

// 一和零
// v1.0
// int findMaxForm(vector<string>& strs, int n, int m) 
// {
//     int len = strs.size();
//     vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(n + 1, vector<int>(m + 1)));

//     for(int i = 1; i <= len; i++)
//     {
//         // 先统计字符串中0 1的个数
//         int a = 0, b = 0;
//         for(auto& ch : strs[i - 1])
//         {
//             ch == '0' ? a++ : b++;
//         }

//         // DP
//         for(int j = 0; j <= n; j++)
//         {
//             for(int k = 0; k <= m; k++)
//             {
//                 dp[i][j][k] = dp[i - 1][j][k];
//                 if(j >= a && k >= b)
//                 {
//                     dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - a][k - b] + 1);
//                 }
//             }
//         }
//     }

//     return dp[len][n][m];
// }

// v2.0 滚动数组优化
// int findMaxForm(vector<string>& strs, int n, int m) 
// {
//     int len = strs.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));

//     for(int i = 1; i <= len; i++)
//     {
//         // 先统计字符串中0 1的个数
//         int a = 0, b = 0;
//         for(auto& ch : strs[i - 1])
//         {
//             ch == '0' ? a++ : b++;
//         }

//         // DP
//         for(int j = n; j >= a; j--)
//         {
//             for(int k = m; k >= b; k--)
//             {
//                 dp[j][k] = max(dp[j][k], dp[j - a][k - b] + 1);
//             }
//         }
//     }

//     return dp[n][m];
// }

// 盈利计划
// v1.0
// int profitableSchemes(int n, int m, vector<int>& g, vector<int>& p) 
// {
//     const int MOD = 1e9 + 7;
//     int len = g.size();

//     // Init
//     vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(n + 1, vector<int>(m + 1)));
//     for(int j = 0; j <= n; j++)
//     {
//         dp[0][j][0] = 1;
//     }

//     // DP
//     for(int i = 1; i <= len; i++)
//     {
//         for(int j = 0; j <= n; j++)
//         {
//             for(int k = 0; k <= m; k++)
//             {
//                 dp[i][j][k] = dp[i - 1][j][k];
//                 if(j >= g[i - 1])
//                 {
//                     dp[i][j][k] += dp[i - 1][j - g[i - 1]][max(0, k - p[i - 1])];
//                 }
//                 dp[i][j][k] %= MOD;
//             }
//         }
//     }

//     return dp[len][n][m];
// }

// v2.0 滚动数组优化
// int profitableSchemes(int n, int m, vector<int>& g, vector<int>& p) 
// {
//     const int MOD = 1e9 + 7;
//     int len = g.size();

//     // Init
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//     for(int j = 0; j <= n; j++)
//     {
//         dp[j][0] = 1;
//     }

//     // DP
//     for(int i = 1; i <= len; i++)
//     {
//         for(int j = n; j >= g[i - 1]; j--)
//         {
//             for(int k = m; k >= 0; k--)
//             {
//                 dp[j][k] += dp[j - g[i - 1]][max(0, k - p[i - 1])];
//                 dp[j][k] %= MOD;
//             }
//         }
//     }

//     return dp[n][m];
// }

// 组合总数Ⅳ
// int combinationSum4(vector<int>& nums, int target) 
// {
//     vector<unsigned long long> dp(target + 1);
//     dp[0] = 1;

//     for(int i = 1; i <= target; i++)
//     {
//         for(auto& x : nums)
//         {
//             if(i >= x)
//             {
//                 dp[i] += dp[i - x];
//             }
//         }
//     }

//     return dp[target];
// }

// 不同的二叉搜索树
// int numTrees(int n) 
// {
//     vector<int> dp(n + 1);
//     dp[0] = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             dp[i] += dp[i - j] * dp[j - 1];
//         }
//     }

//     return dp[n];
// }

// 柠檬水找零
// bool lemonadeChange(vector<int>& bills) 
// {
//     int five = 0, ten = 0;
//     for(auto& x : bills)
//     {
//         if(x == 5)
//         {
//             five++;
//         }
//         else if(x == 10)
//         {
//             if(five == 0) 
//             {
//                 return false;
//             }
//             else
//             {
//                 five--;
//                 ten++;
//             }
//         }
//         else
//         {
//             if(ten && five)
//             {
//                 ten--;
//                 five --;
//             }
//             else if(five >= 3)
//             {
//                 five -= 3;
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

// 将数组和减半的最少操作次数
// int halveArray(vector<int>& nums) 
// {
//     double sum = 0.0;
//     priority_queue<double> heap;

//     for(const auto& x : nums)
//     {
//         heap.push(x);
//         sum += x;
//     }
//     sum /= 2.0;

//     int count = 0;
//     while(sum > 0)
//     {
//         double tmp = heap.top() / 2;
//         heap.pop();

//         sum -= tmp;
//         count++;
//         heap.push(tmp);
//     }

//     return count;
// }

// 最大数
// string largestNumber(vector<int>& nums) 
// {
//     // 优化：先转化成字符串，再比较字典序
//     vector<string> strs;
//     for(const auto& x : nums)
//     {
//         strs.push_back(to_string(x));
//     }

//     sort(strs.begin(), strs.end(), [](const string& s1, const string& s2)
//     {
//         return s1 + s2 > s2 + s1;
//     });

//     string ret;
//     for(const auto& str : strs)
//     {
//         ret += str;
//     }

//     return ret[0] == '0' ? "0" : ret;
// }

// 最长递增子序列
// int lengthOfLIS(vector<int>& nums) 
// {
//     int n = nums.size();
//     vector<int> ret;
//     ret.push_back(nums[0]);
    
//     for(int i = 1; i < n; i++)
//     {
//         if(nums[i] > ret.back())
//         {
//             ret.push_back(nums[i]);
//         }
//         else
//         {
//             // 二分插入位置
//             int left = 0, right = ret.size() - 1;
//             while(left < right)
//             {
//                 int mid = left + (right - left) / 2;
//                 if(ret[mid] < nums[i])
//                 {
//                     left = mid + 1;
//                 }
//                 else
//                 {
//                     right = mid;
//                 }
//             }
            
//             ret[left] = nums[i];
//         }
//     }
    
//     return ret.size();
// }

// 递增的三元子序列
// bool increasingTriplet(vector<int>& nums) 
// {
//     int a = nums[0], b = INT_MAX;
//     for(int i = 1; i < nums.size(); i++)
//     {
//         if(nums[i] > b)
//         {
//             return true;
//         }
//         else if(nums[i] > a)
//         {
//             b = nums[i];
//         }
//         else
//         {
//             a = nums[i];
//         }
//     }

//     return false;
// }

// 最长连续递增序列
// int findLengthOfLCIS(vector<int>& nums) 
// {
//     int n = nums.size(), ret = 0;
//     for(int i = 0; i < n; )
//     {
//         int j = i + 1;
//         while(j < n && nums[j - 1] < nums[j])
//         {
//             j++;
//         }

//         ret = max(ret, j - i);
//         i = j; // 贪心
//     }

//     return ret;
// }

// 买卖股票的最佳时机
// int maxProfit(vector<int>& prices) 
// {
//     int ret = 0, prevMin = INT_MAX;
//     for(int i = 0; i < prices.size(); i++)
//     {
//         if(prices[i] > prevMin)
//         {
//             ret = max(ret, prices[i] - prevMin);
//         }

//         prevMin = min(prices[i], prevMin); // 贪心
//     }

//     return ret;
// }

// 买卖股票的最佳时机 II
// v1.0 双指针
// int maxProfit(vector<int>& p) 
// {
//     int ret = 0, n = p.size();
//     for(int i = 0; i < n; i++)
//     {
//         int j = i;
//         while(j + 1 < n && p[j + 1] > p[j])
//         {
//             j++;
//         }

//         ret += p[j] - p[i];
//         i = j;
//     }

//     return ret;
// }

// v2.0 拆分成一天一天
// int maxProfit(vector<int>& p) 
// {
//     int ret = 0;
//     for(int i = 1; i < p.size(); i++)
//     {
//         if(p[i - 1] < p[i])
//         {
//             ret += p[i] - p[i - 1];
//         }
//     }

//     return ret;
// }

// 牛客 树根
// int main()
// {
//     string orgin;
//     while(cin >> orgin)
//     {
//         // 提取数据
//         int n = 0;
//         for(const auto& ch : orgin)
//         {
//             n += ch - '0';
//         }

//         // 求树根
//         while(n / 10) // 每轮计算
//         {
//             int tmp = 0;
//             while(n) // 计算各位和
//             {
//                 tmp += n % 10;
//                 n /= 10;
//             }
//             n = tmp;
//         }

//         cout << n << endl;
//     }

//     return 0;
// }

// 牛客 星际密码
// 矩阵模型化简之后，就是斐波那契数列模型
// int main()
// {
//     // 准备Fib
//     int fib[10001] = {1, 1};
//     for(int i = 2; i <= 10000; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         fib[i] %= 10000;
//     }
 
//     // 解
//     int n = 0, tmp = 0;
//     while(cin >> n)
//     {
//         while(n--)
//         {
//             cin >> tmp;
//             printf("%04d", fib[tmp]);
//         }
//         cout << endl;
//     }
 
//     return 0;
// }

// 牛客 猴子分桃
// 数学公式推导
// int main()
// {
//     int n = 0;
//     while(cin >> n)
//     {
//         if(n == 0) break;
//         long long total = pow(5, n) - 4;
//         long long left = pow(4, n) + n - 4;
//         cout << total << " " << left << endl;
//     }

//     return 0;
// }

// 牛客 有假币
// int main()
// {
//     int n = 0;
//     while(cin >> n)
//     {
//         if(n == 0) break;

//         int cnt = 0;
//         while(n > 1)
//         {
//             cnt++;
//             n = n / 3 + (n % 3 > 0); // 后面为逻辑表达式
//         }
//         cout << cnt << endl;
//     }

//     return 0;
// }

// K 次取反后最大化的数组和
// int largestSumAfterKNegations(vector<int>& nums, int k) 
// {
//     int n = nums.size(), m = 0, minElem = INT_MAX, ret = 0;

//     // 求负数个数 & 最小值
//     for(const auto& x : nums)
//     {
//         if(x < 0)
//         {
//             m++;
//         }
//         minElem = min(minElem, abs(x));
//     }

//     // 分类讨论
//     if(m > k)
//     {
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < k; i++)
//         {
//             ret += -nums[i];
//         }

//         for(int i = k; i < n; i++)
//         {
//             ret += nums[i];
//         }
//     }
//     else
//     {
//         // 把所有负数变成正数
//         for(const auto& x : nums)
//         {
//             ret += abs(x);
//         }

//         if((k - m) % 2)
//         {
//             ret -= 2 * minElem;
//         }
//     }

//     return ret;
// }

// 按身高排序
// vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
// {
//     int n = names.size();
//     vector<int> index(n); // 下标数组
//     for(int i = 0; i < n; i++)
//     {
//         index[i] = i;
//     }

//     // 对下标进行排序
//     sort(index.begin(), index.end(), [&](int i, int j)
//          {
//              return heights[i] > heights[j];
//          });

//     // 从下标数组取结果
//     vector<string> ret;
//     for(const auto& x : index)
//     {
//         ret.push_back(names[x]);
//     }

//     return ret;
// }

// 优势洗牌
// vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) 
// {
//     int n = nums1.size();
//     vector<int> index(n);
//     for(int i = 0; i < n; i++)
//     {
//         index[i] = i;
//     }

//     // 排序
//     sort(nums1.begin(), nums1.end());
//     sort(index.begin(), index.end(), [&](int i, int j)
//          {
//              return nums2[i] < nums2[j];
//          });

//     // 田忌赛马
//     vector<int> ret(n);
//     int left = 0, right = n - 1;
//     for(const auto& x : nums1)
//     {
//         if(nums2[index[left]] < x)
//         {
//             ret[index[left++]] = x;
//         }
//         else
//         {
//             ret[index[right--]] = x;
//         }
//     }

//     return ret;
// }

// 最长回文串 贪心
// int longestPalindrome(string s) 
// {
//     int hash[128] = {0};
//     for(const auto& ch : s)
//     {
//         hash[ch]++;
//     }

//     int ret = 0;
//     for(const auto& x : hash)
//     {
//         ret += x / 2 * 2; // 奇偶混合处理
//     }

//     return ret < s.size() ? ret + 1 : ret;
// }

// 增长字符串匹配
// vector<int> diStringMatch(string s) 
// {
//     int left = 0, right = s.size();
    
//     vector<int> ret;
//     for(const auto& ch : s)
//     {
//         if(ch == 'I')
//         {
//             ret.push_back(left++);
//         }
//         else
//         {
//             ret.push_back(right--);
//         }
//     }
//     ret.push_back(left);
    
//     return ret;
// }

// 分发饼干
// int findContentChildren(vector<int>& g, vector<int>& s) 
// {
//     sort(g.begin(), g.end());
//     sort(s.begin(), s.end());

//     int ret = 0, n = g.size(), m = s.size();
//     for(int i = 0, j = 0; i < n && j < m; i++, j++)
//     {
//         while(j < m && s[j] < g[i])
//         {
//             j++;
//         }

//         if(j < m)
//         {
//             ret++;
//         }
//     }

//     return ret;
// }

// 最优除法
// string optimalDivision(vector<int>& nums) 
// {
//     int n = nums.size();
//     if(n == 1)
//     {
//         return to_string(nums[0]);
//     }
//     if(n == 2)
//     {
//         return to_string(nums[0]) + "/" + to_string(nums[1]);
//     }

//     string ret = to_string(nums[0]) + "/(" + to_string(nums[1]);
//     for(int i = 2; i < n; i++)
//     {
//         ret += "/" + to_string(nums[i]);
//     }
//     ret += ")";

//     return ret;
// }

// 跳跃游戏Ⅱ
// int jump(vector<int>& nums) 
// {
//     int left = 0, right = 0, maxPos = 0, ret = 0, n = nums.size();
//     while(left <= right)
//     {
//         if(maxPos >= n - 1)
//         {
//             return ret;
//         }

// 		// 遍历当前层，更新下一层最右端点
//         for(int i = left; i <= right; i++)
//         {
//             maxPos = max(maxPos, nums[i] + i);
//         }
//         left = right + 1;
//         right = maxPos;
//         ret++;
//     }

//     return -1; // 跳不到的情况
// }

// 跳跃游戏
// bool canJump(vector<int>& nums) 
// {
//     int left = 0, right = 0, maxPos = 0, n = nums.size();
//     while(left <= right)
//     {
//         if(maxPos >= n - 1)
//         {
//             return true;
//         }

//         for(int i = left; i <= right; i++)
//         {
//             maxPos = max(maxPos, nums[i] + i);
//         }
//         left = right + 1;
//         right = maxPos;
//     }

//     return false;
// }

// 加油站
// v1.0 暴力解
// int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
// {
//     int n = gas.size();
//     for(int i = 0; i < n; i++) // 枚举起点
//     {
//         int rest = 0;
//         for(int step = 0; step < n; step++) // 枚举向后走的步数
//         {
//             int index = (i + step) % n; // 求出走step步之后的下标
//             rest = rest + gas[index] - cost[index];

//             if(rest < 0)
//             {
//                 break;
//             }
//         }

//         if(rest >= 0)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// v2.0 贪心
// int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
// {
//     int n = gas.size();
//     for(int i = 0; i < n; i++) // 枚举起点
//     {
//         int rest = 0, step = 0;
//         for(; step < n; step++) // 枚举向后走的步数
//         {
//             int index = (i + step) % n; // 求出走step步之后的下标
//             rest = rest + gas[index] - cost[index];

//             if(rest < 0)
//             {
//                 break;
//             }
//         }

//         if(rest >= 0)
//         {
//             return i;
//         }

//         i = i + step; // 优化
//     }

//     return -1;
// }

// 单调递增的数字
// int monotoneIncreasingDigits(int n)
// {
//     string str = to_string(n); // 把数字转化为字符串，以便逐位操作

//     int i = 0, m = str.size();

//     // 找到第一个递减的位置
//     while (i + 1 < m && str[i] <= str[i + 1])
//     {
//         i++;
//     }

//     // 特判
//     if (i == m - 1)
//     {
//         return n;
//     }

//     // 回推
//     while (i - 1 >= 0 && str[i] == str[i - 1])
//     {
//         i--;
//     }

//     // 操作
//     str[i]--;
//     for (int j = i + 1; j < m; j++)
//     {
//         str[j] = '9';
//     }

//     return stoi(str);
// }

// 坏了的计算器
// int brokenCalc(int startValue, int target)
// {
//     int ret = 0;
//     while (target > startValue)
//     {
//         if (target % 2 == 0)
//         {
//             target /= 2;
//         }
//         else
//         {
//             target += 1;
//         }

//         ret++;
//     }

//     return ret + startValue - target;
// }

// 合并区间
// vector<vector<int>> merge(vector<vector<int>> &intervals)
// {
//     // 排序
//     sort(intervals.begin(), intervals.end());

//     // 合并区间
//     vector<vector<int>> ret;
//     int left = intervals[0][0], right = intervals[0][1];

//     for (int i = 0; i < intervals.size(); i++)
//     {
//         int a = intervals[i][0], b = intervals[i][1];
//         if (a <= right) // 有重叠
//         {
//             right = max(right, b);
//         }
//         else // 无重叠
//         {
//             ret.push_back({left, right});
//             left = a;
//             right = b;
//         }
//     }

//     // 最后一个区间
//     ret.push_back({left, right});

//     return ret;
// }

// 无重叠区间
// int eraseOverlapIntervals(vector<vector<int>> &intervals)
// {
//     // 排序
//     sort(intervals.begin(), intervals.end());

//     // 移除区间
//     int ret = 0;
//     int left = intervals[0][0], right = intervals[0][1];
//     for (int i = 1; i < intervals.size(); i++)
//     {
//         int a = intervals[i][0], b = intervals[i][1];
//         if (a < right) // 有重叠
//         {
//             ret++;                 // DELETE
//             right = min(right, b); // 贪心, 删除右端点较大的区间
//         }
//         else // 无重叠
//         {
//             right = b;
//         }
//     }

//     return ret;
// }

// 用最少数量的箭引爆气球
// int findMinArrowShots(vector<vector<int>>& points) 
// {
//     // 排序
//     sort(points.begin(), points.end());

//     // 求互相重叠区间的数量
//     int right = points[0][1];
//     int ret = 1;
//     for(int i = 1; i < points.size(); i++)
//     {
//         int a = points[i][0], b = points[i][1];
//         if(a <= right) // 有重叠
//         {
//             right = min(right, b);
//         }
//         else // 无重叠
//         {
//             ret++;
//             right = b;
//         }
//     }

//     return ret;
// }

// 整数替换
// class Solution
// {
//     unordered_map<int, int> hash;

// public:
//     int integerReplacement(int n)
//     {
//         return DFS(n);
//     }

//     int DFS(long long n)
//     {
//         if (hash.count(n))
//         {
//             return hash[n];
//         }

//         if (n == 1)
//         {
//             hash[1] = 0;
//             return 0;
//         }

//         if (n % 2 == 0)
//         {
//             hash[n] = 1 + DFS(n / 2);
//         }
//         else
//         {
//             hash[n] = 1 + min(DFS(n - 1), DFS(n + 1));
//         }

//         return hash[n];
//     }
// };

// 俄罗斯套娃 方法一
// int maxEnvelopes(vector<vector<int>> &e)
// {
//     sort(e.begin(), e.end());

//     int n = e.size();
//     vector<int> dp(n, 1);

//     int ret = 1;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (e[i][0] > e[j][0] && e[i][1] > e[j][1])
//             {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }

//         ret = max(ret, dp[i]);
//     }

//     return ret;
// }

// 俄罗斯套娃 方法二
// int maxEnvelopes(vector<vector<int>> &e)
// {
//     // 重写排序
//     sort(e.begin(), e.end(), [&](const vector<int> &v1, const vector<int> &v2)
//          { return v1[0] != v2[0] ? v1[0] < v2[0] : v1[1] > v2[1]; });

//     // 贪心 + 二分
//     vector<int> ret;
//     ret.push_back(e[0][1]);

//     for (int i = 1; i < e.size(); i++)
//     {
//         int b = e[i][1];
//         if (b > ret.back())
//         {
//             ret.push_back(b);
//         }
//         else
//         {
//             int left = 0, right = ret.size() - 1;
//             while (left < right)
//             {
//                 int mid = (left + right) / 2;
//                 if (ret[mid] >= b)
//                 {
//                     right = mid;
//                 }
//                 else
//                 {
//                     left = mid + 1;
//                 }
//             }

//             ret[left] = b;
//         }
//     }

//     return ret.size();
// }

// 可被三整除的最大和
// int maxSumDivThree(vector<int> &nums)
// {
//     const int INF = 0x3f3f3f3f;

//     int sum = 0;
//     int x1 = INF, x2 = INF, y1 = INF, y2 = INF;
//     for (auto &x : nums)
//     {
//         sum += x;
//         if (x % 3 == 1)
//         {
//             if (x < x1)
//             {
//                 x2 = x1;
//                 x1 = x;
//             }
//             else if (x < x2)
//             {
//                 x2 = x;
//             }
//         }
//         else if (x % 3 == 2)
//         {
//             if (x < y1)
//             {
//                 y2 = y1;
//                 y1 = x;
//             }
//             else if (x < y2)
//             {
//                 y2 = x;
//             }
//         }
//     }

//     // 分类讨论
//     if (sum % 3 == 0)
//     {
//         return sum;
//     }
//     else if (sum % 3 == 1)
//     {
//         return max(sum - x1, sum - y1 - y2);
//     }
//     else
//     {
//         return max(sum - y1, sum - x1 - x2);
//     }
// }

// 距离相等的条形码
// vector<int> rearrangeBarcodes(vector<int> &b)
// {
//     unordered_map<int, int> hash;
//     int maxVal = 0, maxCount = 0;
//     for (auto x : b)
//     {
//         if (maxCount < ++hash[x])
//         {
//             maxCount = hash[x];
//             maxVal = x;
//         }
//     }

//     int n = b.size();
//     int index = 0;
//     vector<int> ret(n);

//     // 先处理出现次数最多的那个数
//     for (int i = 0; i < maxCount; i++)
//     {
//         ret[index] = maxVal;
//         index += 2;
//     }

//     // 处理剩下的数
//     hash.erase(maxVal);
//     for (auto &[x, y] : hash)
//     {
//         for (int i = 0; i < y; i++)
//         {
//             if (index >= n)
//             {
//                 index = 1;
//             }

//             ret[index] = x;
//             index += 2;
//         }
//     }

//     return ret;
// }