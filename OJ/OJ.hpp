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
//    // ��ȡ����
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
//        // ִ��
//        int index = 1;
//        int count = 0;
//        while (index < n)
//        {
//            // ÿһ��
//            if (arr[index - 1] < arr[index])
//            {
//                // ���ΪС��
//                while (arr[index - 1] <= arr[index])
//                {
//                    index++;
//                }
//            }
//            else if(arr[index - 1] > arr[index])
//            {
//                // ���Ϊ���ڵ���
//                while (arr[index - 1] >= arr[index])
//                {
//                    index++;
//                }
//            }
//            else
//            {
//                // ���Ϊ����
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
//#include <cmath> // ����ȡ����ֵ
//using namespace std;
//
//int main()
//{
//    int M = 0, N = 0;
//    vector<int> ret;
//    string format;
//    cin >> M >> N;
//
//    // ���������
//    bool isNegative = false;
//    if (M < 0)
//    {
//        isNegative = true;
//        M = abs(M); // ȡ����ֵ
//    }
//
//    if (M == 0)
//    {
//        cout << "0" << endl;  // ���"0"������
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
//            cout << "-" << format << endl;  // ������ź�ת�����������
//        }
//        else
//        {
//            cout << format << endl;  // ���ת�����������
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
//    // ��ȡ�����ַ���
//    int count = 0;
//    string str1, str2;
//    getline(cin, str1);
//    getline(cin, str2);
//
//    // ���ԴӲ�ͬ��λ�ò���
//    for (int i = 0; i < str1.size(); i++)
//    {
//        str1.insert(i, str2);
//
//        // �жϻ��Ĵ�
//        // 1.�ַ�ѹջ
//        stack<char> judge;
//        bool flag = true;
//        for (auto& ch : str1)
//        {
//            judge.push(ch);
//        }
//
//        // 2.�ַ���ջ
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
//            // ��������ʱ����һ�ֽ�������ʱsum�ѵ��������
//            if (sum > max)
//            {
//                max = sum;
//                sum = 0;
//            }
//            continue;
//        }
//
//        // ֻҪ��������������������һֱ����
//        sum += nums[i];
//    }
//
//    cout << max << endl;
//    return 0;
//}

//6.
//int main()
//{
//    // �������
//    int H = 0, W = 0;
//    cin >> W >> H;
//
//    // ���ö�ά���飬����ʼ�����С���������������ݴ����������
//    vector<vector<int>> box(H);
//    for (auto& e : box)
//    {
//        e.resize(W, 0);
//    }
//
//    int count = 0;
//    for (int i = 0; i < H; i++) // ÿ��
//    {
//        for (int j = 0; j < W; j++) // ÿ��
//        {
//            bool flag = true;
//            // ��ѭ�������ж��Ƿ��ܷţ�kl����������ģ�ij��׼���ŵ�
//            for (int k = 0; k <= i; k++)
//            {
//                for (int l = 0; l <= j; l++)
//                {
//                    // ����kl�����Ѿ������£����Կ�ij��kl��ŷ����þ����Ƿ����Ҫ��
//                    if (box[k][l] == 1 && (abs(i - k) == 2 && abs(j - l) == 0 || abs(j - l) == 2 && abs(i - k) == 0))
//                    {
//                        // �����е��� �� ŷ����� == 2
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
//            // �ߵ����Ҫô�����ϣ�Ҫô�Ѿ�����
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
//    // string�����˱Ƚ������:)
//    // ��ʱզû�뵽��
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
//    // ���ж��Ƿ��ǰ���˳��
//    for (int i = 1; i < n; i++)
//    {
//        if (strs[i - 1].size() >= strs[i].size())
//        {
//            aj_by_len = false;
//            break;
//        }
//    }
//
//    // ���ж��Ƿ����ֵ�˳��
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
//        // ��1��ʼ�жϣ�������ֵ�һ�����ǹ������ȵģ�����һ�����������������
//        int pa = a - 1, pb = b - 1;
//        int aa = pa, bb = pb;
//        stack<int> sta, stb;
//        sta.push(a);
//        stb.push(b);
//
//        // ��pa
//        while (pa > 0)
//        {
//            pa = (aa - 1) / 2;
//            sta.push(pa);
//
//            aa = pa;
//        }
//
//        // ��pb
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
//    // ���̽��ÿ�������������ģ�
//    // Ӧ����˫������ÿ�ζ�����ͬ��������綼�Ƕ��ӣ�����ͬ��
//    // ��Ӧ�������������������ը������ʱ
//    // ����ը��ʱ����ը����ֻ��ը����ը����
//    // ���������ֻ��Ҫ�ȵ�һ���ƴ�С����Կ�����С
//    // �ַ��Ƚϣ��ȵ���ASCIIֵ�����Կ��Խ�2�滻
//
//    // ��������
//    // 1.��ȥ���ո񣬷�������
//    // 2.���������
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
//    else if (parseCard1.size() == parseCard2.size()) // ���ţ����ӣ����ţ�˳��
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
//    // ��β��������ʵ��Ҫ�жϳ�ÿ��������ʲô���ͣ�������ÿ�θ��Ķ��ǵ�λ�Եȵ�
//    // ������������д��ֻ���������Ľ�������м仹��Ҫ������������ʲô���͵���
//    // ��ʵ�֣�������ʵ����:P д����ƪ���������������ڵ�ˮƽ���뵽�ķ�����������
//    // ����˼·��д��ÿ���ĵ��жϺ������ñ��λΪ��Ӧ�ı�ʶ��Ȼ��Ƚ�
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
//    if (triangle.size() > 1) // �������е����
//    {
//        // �ȳ�ʼ��vector
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
//    else // ֻ��һ�е����
//    {
//
//        triangle[0].push_back(1); // vector[]���Ὺ�ռ䣬���˲������/����ֱ��Ԥ���ռ�
//    }
//
//}
//
//int main()
//{
//    // ÿ�����ĸ��� 2n - 1
//    int n = 0;
//
//    while (cin >> n)
//    {
//        vector<vector<int>> triangle;
//        triangle.resize(n);
//
//        // ������n���������
//        YTriangle(triangle);
//        bool flag = false;
//
//        // �ж�
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
//    // �ȷ���
//    vector<int> left(arr.begin(), arr.begin() + arr.size() - 1);
//    vector<int> right(arr.begin() + arr.size(), arr.end());
//
//    // ϴ��
//    vector<int> ret(arr);
//    auto posL = left.rbegin();
//    auto posR = right.rbegin();
//
//    for (int i = 0; i < ret.size(); i++)
//    {
//        // �ȷ����֣��ٷ�����
//        ret[i++] = *(posR++);
//        ret[i] = *(posL++);
//    }
//
//    // ��ת
//    reverse(ret.begin(), ret.end());
//
//    // ���ǽ����ԭ����
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
//    for (int i = 0; i < n; i++) // ����n������
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//
//        vector<int> arr(n, 0);
//        for (int j = 0; j < arr.size(); j++) // ����ÿ������
//        {
//            cin >> arr[i];
//        }
//
//        // ���ݴ���
//        Shuffle(arr, k);
//
//        // ��ӡ���
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

// day18 -- �ַ���ͨ���
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
//    // ������ά��̬�������ڴ洢ƥ��������ʼ��Ϊ false
//    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
//
//    // �� pattern �� text ��Ϊ��ʱ��ƥ��ɹ�
//    dp[0][0] = true;
//
//    // ������ '*' ��ͷ�������'*' ����ƥ��մ�
//    for (int i = 1; i <= m; ++i) {
//        if (pattern[i - 1] == '*') {
//            dp[i][0] = dp[i - 1][0];
//        }
//    }
//
//    // ��̬�滮���
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (pattern[i - 1] == '?' || tolower(pattern[i - 1]) == tolower(text[j - 1])) {
//                // ��ǰ�ַ�ƥ�䣬ȡ����֮ǰ���ַ��Ƿ�ƥ��
//                dp[i][j] = dp[i - 1][j - 1];
//            }
//            else if (pattern[i - 1] == '*') {
//                // '*' ƥ��0���ַ�������ƥ�����ַ�
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

// day19 ������ִ�
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// �����̬�滮��ʵ��û��ȫ�㶮���Ժ��л��ᣬ��ʱ����Կ����ٿ��� day19
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
//        // �������
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

// ��д0
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr)
//    {
//        int cur = 0, dest = -1;
//        int n = arr.size();
//
//        // �����һ��"��д"λ��
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
//        // ����һ�±߽����
//        if (dest == n)
//        {
//            arr[n - 1] = 0;
//            cur--;
//            dest -= 2;
//        }
//
//        // �Ӻ���ǰ��д
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

// �ƶ���
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

// ������
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
//    // ���⽫˫ָ���"ָ��"�������������
//    bool isHappy(int n)
//    {
//        int slow = n, fast = n;
//        while ((slow = BitSum(slow)) != (fast = BitSum(BitSum(fast))));
//
//        return slow == 1;
//    }
//};

// ʢ���ˮ������
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

// ��Ч�����εĸ���
// class Solution 
// {
// public:
//     int triangleNumber(vector<int>& nums) 
//     {
//         // �Ż�������
//         sort(nums.begin(), nums.end());

//         int count = 0;
//         for(int max = nums.size() - 1; max >= 2; max--) // �̶������
//         {
//             int left = 0, right = max - 1;
//             while(left < right)
//             {
//                 if(nums[left] + nums[right] > nums[max]) // �������
//                 {
//                     count += right - left;
//                     right--;
//                 }
//                 else // ���������
//                 {
//                     left++;
//                 }
//             }
//         }

//         return count;
//     }
// };

// �����ܼ۸�ΪĿ��ֵ��������Ʒ
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

// ����֮��
// class Solution 
// {
// public:
//     // ȥ�أ�1.set 2.�㷨
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
            
//             // ˫ָ�����
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
//                     // һ���У��ҵ���һ������ֹͣ����С���䣬������
//                     ret.push_back({nums[src], nums[left], nums[right]});               
//                     left++;
//                     right--;
                    
//                     // ȥ�� && ����Խ��
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
            
//             // ȥ�� && ����Խ��
//             src++;
//             while(src < n && nums[src] == nums[src - 1])
//             {
//                 src++;
//             }
//         } // end of for()

//         return ret;
//     }
// };

// ����֮��
// class Solution 
// {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) 
//     {
//         int n = nums.size();
//         vector<vector<int>> ret;
        
//         sort(nums.begin(), nums.end());
        
//         int src1 = 0;
//         while(src1 < n -3) // �̶���1
//         {
//             int src2 = src1 + 1;
//             while(src2 < n - 2) // �̶���2
//             {
//                 int left = src2 + 1;
//                 int right = n - 1;

//                 // ˫ָ�����
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
                        
//                         // ȥ��(left + right) && ����Խ��
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
                
//                 // ȥ��src2 && ����Խ��
//                 src2++;
//                 while(src2 < n && nums[src2] == nums[src2 - 1])
//                 {
//                     src2++;
//                 }
//             } // end of while(src2)
            
//             // ȥ��src1 && ����Խ��
//             src1++;
//             while(src1 < n && nums[src1] == nums[src1 - 1])
//             {
//                 src1++;
//             }
//         } // end of while(src1)
        
//         return ret;
//     }
// };

// ������С��������
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) 
//     {
//         int sum = 0, len = INT_MAX;
//         for(int left = 0, right = 0; right < nums.size(); right++)
//         {
//             sum += nums[right]; // ������
//             while(sum >= target) // �ж�
//             {
//                 len = min(len, right - left + 1); // ���½��
//                 sum -= nums[left++]; // ������
//             }
//         }

//         return len == INT_MAX ? 0 : len;
//     }
// };

// ���ظ��ַ�����Ӵ�
// class Solution 
// {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {
//         int n = s.size(); 
//         int ret = 0;
//         int hash[128] = { 0 }; // ����hash����
        
//         for(int left = 0, right = 0; right < n; right++)
//         {
//             hash[s[right]]++; // �봰��
            
//             while(hash[s[right]] > 1)
//             {
//                 hash[s[left++]]--; // ������
//             }
            
//             ret = max(ret, right - left + 1); // ���½��
//         }
        
//         return ret;
//     }
// };

// ���������һ���� ��
// class Solution 
// {
// public:
//     int longestOnes(vector<int>& nums, int k) 
//     {
//         // ����ת��Ϊ���������ڣ�0�ĸ���������k
//         int ret = 0;
//         for(int left = 0, right = 0, zero = 0; right < nums.size(); right++)
//         {
//             if(nums[right] == 0)
//             {
//                 zero++; // �봰��
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

// ��x����0����С������
// class Solution 
// {
// public:
//     int minOperations(vector<int>& nums, int x) 
//     {
//         // ��ģ��ת��Ϊ�������ĺ� == (sumNum - x)
//         int sum = 0, ret = -1;
//         int target = -x;
        
//         for(auto& e : nums)
//         {
//             target += e;
//         }
        
//         // ϸ�ڴ�����targetΪ����ʱ����ô����������
//         if(target < 0)
//         {
//             return -1;
//         }
        
//         for(int left = 0, right = 0; right < nums.size(); right++)
//         {
//             sum += nums[right]; // �봰��
            
//             while(sum > target) // �ж�
//             {
//                 sum -= nums[left++]; // ������
//             }
            
//             if(sum == target)
//             {
//                 ret = max(ret, right - left + 1); // ���½��
//             }
//         }
        
//         return ret == -1 ? -1 : nums.size() - ret;
//     }
// };

// // ˮ������ v1.0
// class Solution 
// {
// public:
//     // ģ��ת��Ϊ������ֻ������Ԫ�ص����������
//     int totalFruit(vector<int>& fruits) 
//     {
//         int ret = 0;
//         unordered_map<int, int> basket; // <ˮ������ ����>
        
//         for(int left = 0, right = 0; right < fruits.size(); right++)
//         {
//             basket[fruits[right]]++; // �봰��
            
//             while(basket.size() > 2) // �ж�
//             {
//                 // ������
//                 basket[fruits[left]]--;
                
//                 if(basket[fruits[left]] == 0)
//                 {
//                     basket.erase(fruits[left]);
//                 }
                
//                 left++;
//             }
            
//             ret = max(ret, right - left + 1); // ��������
//         }
        
//         return ret;
//     }
// };

// ˮ������ v2.0 �Ż�
// class Solution 
// {
// public:
//     // ģ��ת��Ϊ������ֻ������Ԫ�ص����������
//     // �����ϣ���Ը���ʱ�临�Ӷ�
//     int totalFruit(vector<int>& fruits) 
//     {
//         int ret = 0, kinds = 0;
        
//         // ˮ������С��һ����ֵ
//         // �Կռ任ʱ��
//         int basket[100001] = { 0 };
        
//         for(int left = 0, right = 0; right < fruits.size(); right++)
//         {
//             if(basket[fruits[right]] == 0)
//             {
//                 kinds++;
//             }
//             basket[fruits[right]]++; // �봰��
            
//             while(kinds > 2) // �ж�
//             {
//                 // ������
//                 basket[fruits[left]]--;
                
//                 if(basket[fruits[left]] == 0)
//                 {
//                     kinds--;
//                 }
                
//                 left++;
//             }
            
//             ret = max(ret, right - left + 1); // ��������
//         }
        
//         return ret;
//     }
// };

// �ҵ��ַ�����������ĸ��λ�� v1.0
// class Solution {
// public:
//     // ������ת��Ϊ��p�е���ĸ���ֵĴ�����s��ĳ���ִ��г��ֵĴ�����ͬ
//     vector<int> findAnagrams(string s, string p) 
//     {
//         vector<int> ret;
//         int hashS[26] = { 0 };
//         int hashP[26] = { 0 };

//         // ��p��hash
//         for(auto& ch : p)
//         {
//             hashP[ch - 'a']++;
//         }

//         // ����s
//         int len = p.size();
//         for(int left = 0, right = 0; right < s.size(); right++)
//         {
//             hashS[s[right] - 'a']++; // �봰��

//             if(right - left + 1 > len) // �жϴ����Ƿ����
//             {
//                 hashS[s[left++] - 'a']--; // ������
//             }

//             if(right - left + 1 == len) // ���Ը�������
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

// �ҵ��ַ�����������ĸ��λ�� v2.0
// �Ż����½�����ж�����������ÿ�ζ�����hash��
// class Solution {
// public:
//     // ������ת��Ϊ��p�е���ĸ���ֵĴ�����s��ĳ���ִ��г��ֵĴ�����ͬ
//     vector<int> findAnagrams(string s, string p) 
//     {
//         vector<int> ret;
//         int hashS[26] = { 0 };
//         int hashP[26] = { 0 };

//         // ��p��hash
//         for(auto& ch : p)
//         {
//             hashP[ch - 'a']++;
//         }

//         // ����s
//         int count = 0, len = p.size();
//         for(int left = 0, right = 0; right < s.size(); right++)
//         {
//             // �봰�� + ά��count
//             if(++hashS[s[right] - 'a'] <= hashP[s[right] - 'a'])
//             {
//                 count++; // �봰�ڵ��ַ���һ����Ч�ַ�
//             }

//             if(right - left + 1 > len) // �жϴ����Ƿ����
//             {
//                 // ά��count
//                 if(hashS[s[left] - 'a']-- <= hashP[s[left] - 'a'])
//                 {
//                     count--; // �����ڵ�Ԫ����һ����Ч�ַ�
//                 }

//                 left++; // ������
//             }

//             if(count == len) // ���½��
//             {
//                 ret.push_back(left);
//             }
//         }

//         return ret;
//     }
// };

// �������е��ʵ��Ӵ�
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

//         for(int i = 0; i < len; i++) // �������ڵ�ִ�д���
//         {
//             int count = 0;
//             for(int left = i, right = i; right + len <= s.size(); right += len)
//             {
//                 // �봰�ڣ���ȡ�Ӵ���ά��count
//                 string str = s.substr(right, len);
//                 mapS[str]++;

//                 // ����mapV���Ƿ����str���Ա�����벻��Ҫ��ֵ
//                 if(mapV.count(str) && mapS[str] <= mapV[str]) 
//                 {
//                     count++;
//                 }

//                 // �жϴ����Ƿ����
//                 if(((right - left + len) / len) > words.size())
//                 {
//                     // ά��count
//                     string tmp = s.substr(left, len);
//                     if(mapV.count(tmp) && mapS[tmp]-- <= mapV[tmp])
//                     {
//                         count--;
//                     }

//                     left += len; // ������
//                 }

//                 if(count == words.size()) // ���½��
//                 {
//                     ret.push_back(left);
//                 }
//             }
//             mapS.clear();
//         }

//         return ret;
//     }
// };

// ��С�����ִ�
// class Solution 
// {
// public:
//     string minWindow(string s, string t) 
//     {
//         // ����������Ա���STL�Ŀ��������Ч��
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
//             // �봰��
//             char in = s[right];
            
//             // ά��count����ͳ��t����Ч�ַ�������
//             if(++hashS[in] == hashT[in])
//             {
//                 count++;
//             }
            
//             while(count == kinds) // �ж�
//             {   
//                 // ����
//                 if(right - left + 1 < minLen)
//                 {
//                     begin = left;    
//                     minLen = right - left + 1;
//                 }
                
//                 // ������ && ά��count
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

// ���ֲ���
// class Solution 
// {
// public:
//     int search(vector<int>& nums, int target) 
//     {
//         int left = 0, right = nums.size() - 1;
//         while(left <= right)
//         {
//             int mid = left + (right - left) / 2; // ��ֹ���
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

// �����������в���Ԫ�صĵ�һ�������һ��λ��
// class Solution 
// {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         // ����߽����
//         if(nums.size() == 0)
//         {
//             return {-1, -1};
//         }

//         // ������˵�
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
//             begin = left; // �����˵�
//         }
//         else
//         {
//             return {-1, -1};
//         }

//         // �����Ҷ˵�
//         // ������ʵleft���Բ���������һ��С�Ż�
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

// x��ƽ����
// class Solution 
// {
// public:
//     // ���ֲ���
//     int mySqrt(int x) 
//     {
//         // ����߽����
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

// ��������λ��
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

// ɽ������ķ嶥����
// class Solution 
// {
// public:
//     // ������Ȼ���ж����ԣ����Կ���ʹ�ö��ֲ���
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

// Ѱ�ҷ�ֵ
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

// Ѱ����ת���������е���Сֵ
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

// 0?n-1 ��ȱʧ������
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

//         return left == records[left] ? (left + 1) : left; // ����߽����
//     }
// };

// [ģ��] ǰ׺��
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

//     // Ԥ�������һ��ǰ׺������
//     vector<long long> dp(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + arr[i];
//     }

//     // ʹ��ǰ׺������
//     int l = 0, r = 0;
//     while(q--)
//     {
//         cin >> l >> r;
//         cout << dp[r] - dp[l - 1] << endl;
//     }

//     return 0;
// }

// [ģ��] ��άǰ׺��
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n = 0, m = 0, q = 0;
//     cin >> n >> m >> q;

//     // ��ȡ����
//     vector<vector<int>> arr(n + 1, vector<int>(m + 1));
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // Ԥ����ǰ׺�;���
//     vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m; j++)
//         {
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1];
//         }
//     }

//     // ʹ��Ԥ��������
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

// Ѱ������������±�
// class Solution 
// {
// public:
//     int pivotIndex(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> f(n), g(n);

//         // Ԥ����ǰ׺������ͺ�׺������
//         // f[i] -> [0, i - 1]���䣬����Ԫ�صĺ�
//         for(int i = 1; i < n; i++)
//         {
//             f[i] = f[i - 1] + nums[i - 1];
//         }

//         // g[i] -> [i + 1, n - 1]���䣬����Ԫ�صĺ�
//         for(int i = n - 2; i >= 0; i--)
//         {
//             g[i] = g[i + 1] + nums[i + 1];
//         }

//         // ʹ�� ǰ׺�� && ��׺�� ����
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

// ��������������ĳ˻�
// class Solution 
// {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> f(n), g(n);
//         f[0] = 1, g[n - 1] = 1; // ϸ�ڴ���

//         // Ԥ����ǰ׺������ͺ�׺������
//         for(int i = 1; i < n; i++)
//         {
//             f[i] = f[i - 1] * nums[i - 1];
//         }

//         for(int i = n - 2; i >= 0; i--)
//         {
//             g[i] = g[i + 1] * nums[i + 1];
//         }

//         // ʹ��
//         vector<int> ret(n);
//         for(int i = 0; i < n; i++)
//         {
//             ret[i] = f[i] * g[i];
//         }

//         return ret;
//     }
// };

// ��Ϊk��������
// class Solution 
// {
// public:
//     int subarraySum(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash; // <ǰ׺��, ����>
//         hash[0] = 1;

//         int ret = 0, sum = 0; // ��ʶǰһ��λ�õ�ǰ׺��
//         for(auto& e : nums)
//         {
//             sum += e; // ���㵱ǰλ�õ�ǰ׺��

//             if(hash.count(sum - k))
//             {
//                 ret += hash[sum - k];
//             }

//             hash[sum]++; // ��iλ�õ�ǰ׺����hash
//         }

//         return ret;
//     }
// };

// �Ϳɱ� K ������������
// class Solution 
// {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) 
//     {
//         unordered_map<int, int> hash;// <ǰ׺������, ����>
//         hash[0] = 1;
        
//         int sum = 0, ret = 0; // ���ڱ��ǰһ��λ�õ�ǰ׺��
//         for(auto& e : nums)
//         {
//             sum += e; // ���㵱ǰλ�õ�ǰ׺��

//             int tmp = (sum % k + k) % k;
//             if(hash.count(tmp))
//             {
//                 ret += hash[tmp];
//             }

//             hash[tmp]++; // ��iλ�õ�ǰ׺�͵�������hash
//         }

//         return ret;
//     }
// };

// ��������
// class Solution 
// {
// public:
//     int findMaxLength(vector<int>& nums) 
//     {
//         unordered_map<int, int> hash; // <ǰ׺�ͣ� �±�>
//         hash[0] = -1; // Ĭ����һ��ǰ׺��Ϊ0�����

//         int sum = 0, len = 0; // ���ǰһ�ε�ǰ׺��
//         for(int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i] == 0 ? -1 : 1;

//             if(hash.count(sum))
//             {
//                 len = max(len, i - hash[sum]); // ������󳤶�
//             }
//             else
//             {
//                 hash[sum] = i; // ��(sum, i)��hash
//             }
//         }

//         return len;
//     }
// };

// ���������
// class Solution 
// {
// public:
//     vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
//     {
//         int row = mat.size(), col = mat[0].size();

//         // Ԥ����ǰ׺������
//         vector<vector<int>> dp(row + 1, vector<int>(col + 1));
//         for(int i = 1; i <= row; i++)
//         {
//             for(int j = 1; j <= col; j++)
//             {
//                 // �±�ӳ���ϵ dp[x, y] -> mat[x - 1][y - 1]
//                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + mat[i - 1][j - 1];
//             }
//         }

//         // ʹ��ǰ׺������
//         vector<vector<int>> ret(row, vector<int>(col));
//         for(int i = 0; i < row; i++)
//         {
//             for(int j = 0; j < col; j++)
//             {
//                 // �±�ӳ���ϵ ret[x][y] -> dp[x + 1][y + 1]
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

// �ж��ַ��Ƿ�Ψһ
// class Solution 
// {
// public:
//     bool isUnique(string astr) 
//     {
//         // �볲�Ż�
//         if(astr.size() > 26)
//         {
//             return false;
//         }
        
//         int bitset = 0; // λͼ
//         for(auto& ch : astr)
//         {
//             int i = ch - 'a';
            
//             // �жϸ��ַ��Ƿ���ֹ�
//             if(((bitset >> i) & 1))
//             {
//                 return false;
//             }
            
//             // �����ַ�����λͼ��
//             bitset |= 1 << i;
//         }
        
//         return true;
//     }
// };

// ��ʧ������
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

// ������֮��
// class Solution 
// {
// public:
//     int getSum(int a, int b) 
//     {
//         while(b)
//         {
//             int ret = a ^ b; // �޽�λ���
//             int carry = (a & b) << 1; // ��λ
//             a = ret;
//             b = carry;
//         }
        
//         return a;
//     }
// };

// ֻ����һ�ε����֢�
// class Solution 
// {
// public:
//     int singleNumber(vector<int>& nums) 
//     {
//         int ret = 0;
//         for(int i = 0; i < 32; i++) // ö��ÿһλ
//         {
//             int sum = 0;
//             for(auto& x : nums) // ͳ�Ƹ�λ1���ܺ�
//             {
//                 if((x >> i) & 1)
//                 {
//                     sum++;
//                 }
//             }
//             sum %= 3; // ���ƹ㵽n
            
//             if(sum)
//             {
//                 ret |= 1 << i;
//             }
//         }
        
//         return ret;
//     }
// };

// ��ʧ����������
// class Solution 
// {
// public:
//     vector<int> missingTwo(vector<int>& nums) 
//     {   
//         // �����е������һ��
//         int tmp = 0;
//         for(auto& x : nums)
//         {
//             tmp ^= x;
//         }
        
//         for(int i = 1; i <= nums.size() + 2; i++)
//         {
//             tmp ^= i;       
//         }
        
//         // �ҳ���������һ����ͬ��bit
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
        
//         // ����diffλ�Ĳ�ͬ�������е�������Ϊ���������
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

// �滻���е��ʺ�
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
//                     // || ��·��ƱȽϾ���
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

// ��Ī����
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

// N���α任
// class Solution 
// {
// public:
//     // ��ģ���ҹ���
//     string convert(string s, int numRows) 
//     {
//         // ����߽����
//         if(numRows == 1)
//         {
//             return s;
//         }

//         string ret;
//         int n = s.size(), d = 2 * numRows - 2;

//         // ��һ��
//         for(int i = 0; i < n; i += d)
//         {
//             ret += s[i]; 
//         }

//         // �ڶ��� -- �����ڶ���
//         for(int k = 1; k < numRows - 1; k++) // ö��ÿһ��
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

//         // ���һ��
//         for(int i = numRows - 1; i < n; i += d)
//         {
//             ret += s[i];
//         }

//         return ret;
//     }
// };

// �������
// �����߼� v1.0
// class Solution 
// {
// public:
//     string countAndSay(int n) 
//     {
//         string src = "1";
//         for(int i = 2; i <= n; i++) // ������
//         {
//             // ˫ָ��
//             string ret;
//             int left = 0, right = 0;

//             // �Լ��ش�����߼�
//             for(; right < src.size(); right++)
//             {
//                 if(src[left] != src[right])
//                 {
//                     ret += to_string(right - left) + src[left];
//                     left = right;
//                 }
//             }

//             // ��������һ����
//             ret += to_string(right - left) + src[left];

//             src = ret;
//         }

//         return src;
//     }
// };

// �����߼� v2.0
// class Solution 
// {
// public:
//     string countAndSay(int n) 
//     {
//         string src = "1";
//         for(int i = 2; i <= n; i++) // ������
//         {
//             // ˫ָ��
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

// ������
// class Solution 
// {
// public:
//     int MinNumberOfFrogs(string croakOfFrogs) 
//     {
//         string str = "croak";
//         int n = str.size();
//         vector<int> hash(n); // ������ģ���ϣ
        
//         unordered_map<char, int> index; // <ch, index>
//         for(int i = 0; i < n; i++)
//         {
//             index[str[i]] = i;
//         }
        
//         for(auto& ch : croakOfFrogs)
//         {
//             if(ch == 'c')
//             {
//                 if(hash[n - 1]) // k�Ѵ���
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

// ��ɫ����
// class Solution 
// {
// public:
//     void SortColors(vector<int>& nums) 
//     {
//         int i = 0, left = -1, right = nums.size(); // ��ָ��
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
//                 // �˴�i���������������Ϊ�˴�Ԫ��������δɨ��
//                 swap(nums[--right], nums[i]);
//             }
//         }
//     }
// };

// ��������
// ��������� + �����׼
// class Solution 
// {
// public:
//     vector<int> sortArray(vector<int>& nums) 
//     {
//         srand(time(nullptr)); // �������������
//         QuickSort(nums, 0, nums.size() - 1);
//         return nums;
//     }

//     void QuickSort(vector<int>& nums, int l, int r)
//     {

//         if(l >= r)
//         {
//             return ;
//         }

//         // ���������
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

//         // �ݹ���������
//         // [l, left] [left + 1, right - 1] [right, r]
//         QuickSort(nums, l, left);
//         QuickSort(nums, right, r);
//     }
// };

// �����е�K�����Ԫ��
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
        
//         // ���������
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
        
//         // ���������
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

// ������
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
//         // ���������
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

// ��������
// class Solution 
// {
//     vector<int> assist; // �鲢ʱ�ĸ�������
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

//         // 1.ѡ���м�㻮������
//         int mid = left + (right - left) / 2;

//         // 2.������������
//         // [left, mid] [mid + 1, right]
//         MergeSort(nums, left, mid);
//         MergeSort(nums, mid + 1, right);

//         // 3.�ϲ�������������
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//         }

//         // 4.����û�б����������
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // 5.��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }
//     }
// };

// ��������Ե�����
// v1.0 ����
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
//         // ѡ���е㣬��������
//         int mid = left + (right - left) / 2;

//         // ��ߵĸ��� + ���� + �ұߵĸ��� + ����
//         // [left, mid] [mid + 1, right]
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // һ��һ�ҵĸ��� + ����
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

//         // ����δ�����������
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // ��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }

//         return ret;
//     }
// };

// v2.0 ����
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
//         // ѡ���е㣬��������
//         int mid = left + (right - left) / 2;

//         // ��ߵĸ��� + ���� + �ұߵĸ��� + ����
//         // [left, mid] [mid + 1, right]
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // һ��һ�ҵĸ��� + ����
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

//         // ����δ�����������
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // ��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }

//         return ret;
//     }
// };

// �����Ҳ�С�ڵ�ǰԪ�صĸ���
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
        
//         // ��ʼ��index
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
        
//         // �м�㣬��������
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
        
//         // �ȴ�������������
//         MergeSort(nums, left, mid);
//         MergeSort(nums, mid + 1, right);
        
//         // ����һ��һ�� + ����(����)
//         // Ԫ�غ��±�ͬ��Ǩ��
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
//                 ret[index[cur1]] += right - cur2 + 1; // ͳ�� -> �ص�
//                 assistNums[i] = nums[cur1];
//                 assistIndex[i++] = index[cur1++];
//             }
//         }
        
//         // ����δ����������
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
        
//         // ��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assistNums[i - left];
//             index[i] = assistIndex[i - left];
//         }
//     }
// };

// ��ת��
// // v1.0 ����
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
//         // �м�㣬����������
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
    
//         // �ȼ������������䷭ת��
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // ����һ��һ�ҷ�ת�Ե�����
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur1 <= mid) // ���� �̶�cur1
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

//         // �ϲ�������������
//         cur1 = left, cur2 = mid + 1;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur2++] : nums[cur1++];
//         }

//         // ����δ����������
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // ��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }

//         return ret;
//     }
// };

// v2.0 ����
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
//         // �м�㣬����������
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]
    
//         // �ȼ������������䷭ת��
//         ret += MergeSort(nums, left, mid);
//         ret += MergeSort(nums, mid + 1, right);

//         // ����һ��һ�ҷ�ת�Ե�����
//         int cur1 = left, cur2 = mid + 1, i = 0;
//         while(cur2 <= right) // ����  �̶�cur2
//         {
//             while(cur1 <= mid && nums[cur2] >= nums[cur1] / 2.0)
//             {
//                 cur1++;
//             }

//             // �Ż�
//             if(cur1 > mid)
//             {
//                 break;
//             }

//             ret += mid - cur1 + 1;
//             cur2++;
//         }

//         // �ϲ�������������
//         cur1 = left, cur2 = mid + 1;
//         while(cur1 <= mid && cur2 <= right)
//         {
//             assist[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
//         }

//         // ����δ����������
//         while(cur1 <= mid)
//         {
//             assist[i++] = nums[cur1++];
//         }

//         while(cur2 <= right)
//         {
//             assist[i++] = nums[cur2++];
//         }

//         // ��ԭ
//         for(int i = left; i <= right; i++)
//         {
//             nums[i] = assist[i - left];
//         }

//         return ret;
//     }
// };

// �������
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
//         ListNode* tail = head; // βָ��

//         int carry = 0; // ��¼��λ & ��ʱ����
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

// �������������еĽ��
// class Solution 
// {
// public:
//     ListNode* swapPairs(ListNode* list) 
//     {
//         // �߽紦��
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

// ��������
// class Solution 
// {
// public:
//     void reorderList(ListNode* head) 
//     {
//         // �߽紦��
//         if(!(head || head->next || head->next->next))
//         {
//             return;
//         }

//         // 1.�ҵ�������м��� -> ����ָ��
//         ListNode *slow = head, *fast = head;
//         while(fast && fast->next) // ż && ��
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // 2.�����벿�� -> ͷ��
//         ListNode *head2 = new ListNode(0);
//         ListNode *cur = slow->next;
//         slow->next = nullptr; // �Ͽ���������
//         while(cur)
//         {
//             ListNode *next = cur->next;
//             cur->next = head2->next;
//             head2->next = cur;
//             cur = next;
//         }

//         // 3.�ϲ��������� -> β�� -> ˫ָ��
//         ListNode *ret = new ListNode(0);
//         ListNode *tail = ret;
//         ListNode *cur1 = head, *cur2 = head2->next;
//         while(cur1)
//         {
//             // ������һ������
//             tail->next = cur1;
//             tail = tail->next;
//             cur1 = cur1->next;

//             // �����ڶ�������
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

// �ϲ�K����������
// v1.0 ��
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
//         // ����һ��С����
//         priority_queue<ListNode*, vector<ListNode*>, Cmp> heap;

//         // ������ͷ������
//         for(auto& list : lists)
//         {
//             if(list)
//             {
//                 heap.push(list);
//             }
//         }

//         // �ϲ�K����������
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

// v2.0 �ݹ�/����
// class Solution 
// {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) 
//     {
//         return Merge(lists, 0, lists.size() - 1);
//     }

//     ListNode* Merge(vector<ListNode*>& lists, int left, int right)
//     {
//         // �߽��������
//         if(left > right)
//         {
//             return nullptr;
//         }

//         if(left == right)
//         {
//             return lists[left];
//         }

//         // �м�㻮������
//         int mid = left + (right - left) / 2;
//         // [left, mid] [mid + 1, right]

//         // �ݹ鴦����������
//         ListNode* l1 = Merge(lists, left, mid);
//         ListNode* l2 = Merge(lists, mid + 1, right);

//         // �ϲ�������������
//         return MergeTwoLists(l1, l2);
//     }

//     ListNode* MergeTwoLists(ListNode* l1, ListNode* l2)
//     {
//         // �߽��������
//         if(l1 == nullptr)
//         {
//             return l2;
//         }

//         if(l2 == nullptr)
//         {
//             return l1;
//         }

//         // �ϲ�����������
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

// K��һ�鷭ת����
// ListNode* ReverseKGroup(ListNode* head, int k) 
// {
//     // ������n
//     int n = 0;
//     ListNode* cur = head;
//     while(cur)
//     {
//         n++;
//         cur = cur->next;
//     }
//     n /= k;

//     // �ظ�n�����򳤶�Ϊk������ -> ͷ��
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
//         prev = back; // ����ÿ��ͷ���"ͷ"
//     }

//     // ����ʣ�µĽ��
//     prev->next = cur;

//     return ret.next;
// }

// �������
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

// �ж��Ƿ�Ϊ�ַ�����
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

// �����ظ�Ԫ��
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

// �����ظ�Ԫ�آ�
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

// ��ĸ��λ�ʷ���
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
//         for(auto& [x, y] : hash) // ����д����������
//         {
//             ret.push_back(y);
//         }

//         return ret;
//     }
// };

// ������Ӵ�
// v1.0 �����Ƚ�
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

// v2.0 ͳһ�Ƚ�
// class Solution 
// {
// public:
//     string longestCommonPrefix(vector<string>& strs) 
//     {
//         for(int i = 0; i < strs[0].size(); i++) // ���Ƶڼ����ַ�
//         {
//             char tmp = strs[0][i];
//             for(int j = 1; j < strs.size(); j++) // ���Ƶڼ���string
//             {
//                 if(i == strs[j].size() || tmp != strs[j][i])
//                 {
//                     return strs[0].substr(0, i); // �����˿մ������
//                 }
//             }
//         }

//         return strs[0];
//     }
// };

// ������Ӵ�
// class Solution 
// {
// public:
//     string longestPalindrome(string s) 
//     {
//         int begin = 0, len = 0, n = s.size();
//         for(int i = 0; i < n; i++) // ö�����еĵ�
//         {
//             // ����������չ
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

//             // ż��������չ
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

// ���������
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

// �ַ������
// class Solution 
// {
// public:
//     string multiply(string num1, string num2) 
//     {
//         int n = num1.size(), m = num2.size();

//         // �����ַ�������������
//         reverse(num1.begin(), num1.end());
//         reverse(num2.begin(), num2.end());

//         // �޽�λ���
//         vector<int> tmp(n + m - 1);
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 tmp[i + j] += (num1[i] - '0') * (num2[j] - '0');
//             }
//         }

//         // ��λ
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

//         // ����ǰ��0
//         while(ret.size() > 1 && ret.back() == '0')
//         {
//             ret.pop_back();
//         }

//         reverse(ret.begin(), ret.end());

//         return ret;
//     }
// };

// ɾ���ַ����е����������ظ���
// class Solution 
// {
// public:
//     string removeDuplicates(string s) 
//     {
//         string ret; // stringģ��stack
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

// �ȽϺ��˸���ַ���
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

// ������������
// class Solution 
// {
// public:
//     int calculate(string s) 
//     {
//         char op = '+';
//         int n = s.size();
//         vector<int> st; // vectorģ��stack

//         int i = 0;
//         while(i < n)
//         {
//             if(s[i] == ' ')
//             {
//                 i++;
//             }
//             else if(s[i] >= '0' && s[i] <= '9')
//             {
//                 // ��ȡ����
//                 int num = 0;
//                 while(i < n && s[i] >= '0' && s[i] <= '9')
//                 {
//                     num = num * 10 + (s[i++] - '0'); // ()��ֹint���
//                 }

//                 // ���������
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

// �ַ�������
// class Solution 
// {
// public:
//     string decodeString(string s) 
//     {
//         stack<int> numSt;
//         stack<string> strSt;
//         strSt.push(""); // ϸ�ڣ������:P

//         int i = 0, n = s.size();
//         while(i < n)
//         {
//             if(isdigit(s[i]))
//             {
//                 // ��ȡ����
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
                
//                 // ��ȡ�ַ�������ջ
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

//                 // ���������뵽ջ������
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
//                 // ��ȡ�ַ�������ջ
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

// ��֤ջ����
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

// N�����Ĳ������
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
//         vector<vector<int>> ret; // ��¼���ս��
//         queue<Node*> q; // ���������Ҫ�Ķ���
        
//         if(root == nullptr)
//         {
//             return ret;
//         }
        
//         q.push(root);
//         while(q.size())
//         {
//             int sz = q.size(); // ��ȡ����Ԫ�ظ���
//             vector<int> tmp; // ͳ�Ʊ���Ԫ��
            
//             while(sz--)
//             {
//                 Node* node = q.front();
//                 q.pop();
                
//                 tmp.push_back(node->val);
                
//                 // ���ý����һ�������
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

// �������ľ���β������
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
//             int sz = q.size(); // ����Ԫ�ظ���
//             vector<int> tmp; // ͳ�Ʊ���Ԫ��
            
//             while(sz--)
//             {
//                 TreeNode* node = q.front();
//                 q.pop();
                
//                 tmp.push_back(node->val);
                
//                 // ���ӽڵ������
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

// �������������
// class Solution 
// {
// public:
//     int widthOfBinaryTree(TreeNode* root) 
//     {
//         vector<pair<TreeNode*, size_t>> q; // ��vectorģ��queue
//         q.push_back({root, 1});
        
//         size_t ret = 0;        
//         while(q.size())
//         {
//             auto& [x1, y1] = q[0]; // ��ͷ
//             auto& [x2, y2] = q.back(); // ��β
            
//             ret = max(ret, y2 - y1 + 1);
            
//             // ����һ�������
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
//             q = tmp; // ����ԭ���У������˶��е�ͷɾ
//         }
        
//         return ret;
//     }
// };

// ��ÿ����?������?ֵ
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
                
//                 // ����һ�������
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

// ���һ��ʯͷ������
// class Solution 
// {
// public:
//     int lastStoneWeight(vector<int>& stones) 
//     {
//         priority_queue<int> heap; // STLĬ�ϴ����
//         for(auto& x : stones)
//         {
//             heap.push(x);
//         }

//         // ģ�����
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

// �������еĵ�K��Ԫ��
// class KthLargest 
// {
//     // ����һ����СΪk��С����
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

// ǰk����Ƶ����
//  class Solution 
// {
//     typedef pair<string, int> PSI;

//     struct Cmp
//     {
//         bool operator()(PSI& a, PSI& b)
//         {
//             // Ƶ����ͬ���ֵ��򰴴��������
//             if(a.second == b.second)
//             {
//                 return a.first < b.first;
//             }

//             // Ƶ�ΰ�С��������
//             return a.second > b.second;
//         }
//     };
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) 
//     {
//         // ͳ��ÿ�����ʳ��ֵĴ���
//         unordered_map<string, int> hash;
//         for(auto& str : words)
//         {
//             hash[str]++;
//         }

//         // ����һ����СΪk�Ķ�
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

//         // ��ȡ���������heap
//         vector<string> ret(k);
//         for(int i = k - 1; i >= 0; i--)
//         {
//             ret[i] = heap.top().first;
//             heap.pop();
//         }

//         return ret;
//     }
// };

// ����������λ��
// class MedianFinder 
// {
//     priority_queue<int> left; // �����
//     priority_queue<int, vector<int>, greater<int>> right; // С����
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

 // ͼ����Ⱦ
// class Solution 
// {
//     // "����"�������� 
//     int dx[4] = {0, 0, 1, -1};
//     int dy[4] = {1, -1, 0, 0};
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
//     {
//         int target = image[sr][sc];
//         if(color == target) // �߽��������
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
            
//             // ����һ�������
//             for(int i = 0; i < 4; i++)
//             {
//                 int x = a + dx[i], y = b + dy[i];
                
//                 // ��ֹԽ�� && ��ɫ����
//                 if(x >= 0 && x < n && y >= 0 && y < m && image[x][y] == target)
//                 {
//                     q.push({x, y});    
//                 }
//             }
//         }
        
//         return image;
//     }
// };

// ��������
//class Solution
//{
//    int n, m;
//    vector<vector<bool>> visit;
//
//    // "����"��������
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
//                    BFS(grid, i, j); // ���������½��
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
//        // BFS���߼�
//        while (q.size())
//        {
//            auto [a, b] = q.front();
//            q.pop();
//
//            // ����һ�������
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

// �����������
// class Solution 
// {
//     int n, m;
//     vector<vector<bool>> visit;

//     // ������������
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

//             // ����һ�������
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

// ��Χ�Ƶ�����
// class Solution 
// {
//     int n, m;

//     // ������������
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     void solve(vector<vector<char>>& board) 
//     {
//         n = board.size(), m = board[0].size();

//         // �ȴ���߽����
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

//         // ��ԭ
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

//             // ����һ�������
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

// �Թ������������ĳ���
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
//             while(sz--) // ����
//             {
//                 auto [a, b] = q.front();
//                 q.pop();

//                 // ����һ�������
//                 for(int i = 0; i < 4; i++)
//                 {
//                     int x = a + dx[i], y = b + dy[i];

//                     if(x >= 0 && x < n && y >= 0 && y < m \
//                         && maze[x][y] == '.' && !visit[x][y])
//                     {
//                         // �ж��Ƿ���������
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

// ��С����仯
// class Solution 
// {
// public:
//     int minMutation(string startGene, string endGene, vector<string>& bank) 
//     {
//         unordered_set<string> visit; // ��������Ѿ���������״̬
//         unordered_set<string> hash(bank.begin(), bank.end()); // �洢�����
//         string change = "ACGT"; // hash

//         // �߽��������
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

//                 // ����һ�������
//                 // ����������еı仯���:P
//                 for(int i = 0; i < 8; i++)
//                 {
//                     string tmp = str; // ϸ�ڣ�ȷ��ÿ��ֻ�仯һ��λ��
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

// ���ʽ���
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
                
//                 // ����һ�������
//                 // ����ö�����п������:P
//                 for(int i = 0; i < beginWord.size(); i++)
//                 {
//                     string tmp = str; // ϸ�ڣ�ȷ��ÿ��ֻ����һ��λ��
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

// Ϊ�߶����������
// class Solution 
// {
//     typedef pair<int, int> PII;
//     int n, m;
//     bool visit[50][50];
    
//     // ������������
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     int cutOffTree(vector<vector<int>>& forest) 
//     {
//         n = forest.size(), m = forest[0].size();
        
//         // �ҳ�������˳��
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
        
//         // ����˳����
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
    
//     // �����ԴȨֵΪһ�����·������
//     int BFS(vector<vector<int>>& forest, int beginX, int beginY, int endX, int endY)
//     {
//         // �߽��������
//         if(beginX == endX && beginY == endY)
//         {
//             return 0;
//         }
        
//         memset(visit, false, sizeof visit); // ÿ�ε���BFS����Ҫִ�У�����Ӱ���´�BFS
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
                
//                 // ����һ�������
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

// ����
// class Solution 
// {
//     int dx[4] = {1, -1, 0, 0};
//     int dy[4] = {0, 0, 1, -1};
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
//     {
//         int n = mat.size(), m = mat[0].size();

//         // dist[i][j] == -1 δ������
//         // dist[i][j] != -1 ��̾���
//         vector<vector<int>> dist(n, vector<int>(m, -1));
//         queue<pair<int, int>> q;

//         // ������Դ����뵽������
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

//         // ��ԴBFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // ����һ�������
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

// �ɵص�����
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

//         // �����б߽�1�����
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

//         // ��ԴBFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // ��һ�������
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

//         // ��������
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

// ��ͼ�е���ߵ�
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
        
//         // ���߽�ˮ�������
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

//         // ��ԴBFS
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // ��һ�������
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

// ��ͼ����
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

//         // ��½�������
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

//         // ��ԴBFS
//         int ret = -1;
//         while(q.size())
//         {
//             auto [a, b] = q.front();
//             q.pop();

//             // �²������
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

// �γ̱�
// class Solution 
// {
// public:
//     bool canFinish(int n, vector<vector<int>>& prerequisites) 
//     {
//         unordered_map<int, vector<int>> edges; // �ڽӱ�
//         vector<int> in(n); // �洢ÿһ���������

//         // 1.��ͼ
//         for(auto& e : prerequisites)
//         {
//             int a = e[0], b = e[1]; // b -> a
//             edges[b].push_back(a); // ����ͼ���߼��ṹ
//             in[a]++; // ��ȱ�
//         }

//         // 2.��������BFS
//         // (1) ���������Ϊ0�Ľ��������
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

//             // �޸��������ı�
//             for(auto& e : edges[tmp])
//             {
//                 in[e]--;
//                 if(in[e] == 0)
//                 {
//                     q.push(e);
//                 }
//             }
//         }

//         // 3.�ж��Ƿ��л�
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

// �γ̱��
// class Solution 
// {
// public:
//     vector<int> findOrder(int n, vector<vector<int>>& prerequisites) 
//     {
//         vector<vector<int>> edges(n);
//         vector<int> in(n);

//         // 1.��ͼ
//         for(auto& v : prerequisites)
//         {
//             int a = v[0], b = v[1]; // b -> a
//             edges[b].push_back(a);
//             in[a]++;
//         }

//         // 2.��������
//         vector<int> ret;
//         queue<int> q;

//         // (1) ���������Ϊ0�ĵ������
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

//             // �޸��������ı�
//             for(auto& e : edges[tmp])
//             {
//                 in[e]--;
//                 if(in[e] == 0)
//                 {
//                     q.push(e);
//                 }
//             }
//         }

//         // �жϽ��������
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

// ���Ǵʵ�
// class Solution 
// {
//     unordered_map<char, unordered_set<char>> edges; // �ڽӱ�
//     unordered_map<char, int> in; // ��ȱ�
//     bool check = false; // ����߽����
// public:
//     string alienOrder(vector<string>& words) 
//     {
//         // 1.��ʼ����ȱ�
//         for(auto& str : words)
//         {
//             for(auto& ch : str)
//             {
//                 in[ch] = 0;
//             }
//         }

//         // 2.ö���Ѽ��ֵ���Ϣ + ��ͼ
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

//         // 3. ��������
//         string ret;
//         queue<char> q;

//         // (1) ���Ϊ0�������
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

//             // �޸����ڵ�ı�
//             for(auto& ch : edges[tmp])
//             {
//                 if(--in[ch] == 0)
//                 {
//                     q.push(ch);
//                 }
//             }
//         }

//         // �����Ƿ��л�
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
                
//                 // ������������
//                 if(!edges.count(a) || !edges[a].count(b))
//                 {
//                     edges[a].insert(b);  // s1[i] -> s2[i]
//                     in[b]++;
//                 }

//                 break;
//             }

//             i++;
//         }

//         // �߽��������
//         if(i == s2.size() && i < s1.size())
//         {
//             check = true;
//         }
//     }
// };

// ��ŵ��
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

// �ϲ������������� (�ݹ�)
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

// ��������(�ݹ�)
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
//         // ���� -> Ҷ�ӽ��
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

// �������������еĽ��(�ݹ�)
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
//         // ��������
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
//         // ��������
//         if(n == 0)
//         {
//             return 1;
//         }

//         double tmp = Pow(x, n / 2);
        
//         return n % 2 == 0 ? tmp * tmp : tmp * tmp * x;
//     }
// };

// ���㲼����������ֵ
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
//         // ��������
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

// ����ڵ㵽Ҷ�ڵ�����֮��
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

// ��������֦
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
//             delete root; // ��ֹ�ڴ�й©
//             root = nullptr;
//         }

//         return root;
//     }
// };

// ��֤����������
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

 // v1.0 �����ж�
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

//         // �ж�������
//         bool left = isValidBST(root->left);

//         // �ж��Լ�
//         bool cur = false;
//         if(root->val > prev)
//         {
//             cur = true;
//         }
//         prev = root->val;

//         // �ж�������
//         bool right = isValidBST(root->right);

//         return left && right && cur;
//     }
// };

// v2.0 ��֦