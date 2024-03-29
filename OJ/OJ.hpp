#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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