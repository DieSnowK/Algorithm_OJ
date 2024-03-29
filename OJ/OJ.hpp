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