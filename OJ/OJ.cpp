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
#include <iostream>
#include <vector>
using namespace std;

void YTriangle(vector<vector<int>>& triangle)
{
    // �ȳ�ʼ��vector
    for (int i = 0; i < triangle.size(); i++)
    {
        triangle[i].resize(2 * i + 1);
    }

    triangle[0][0] = triangle[1][0] = triangle[1][1] = triangle[1][2] = 1;

    int lastRow_limit = 3;
    for (int i = 2; i < triangle.size(); i++)
    {
        int row_limit = 2 * i + 1;
        for (int j = 0; j < row_limit; j++)
        {
            if (j == 0 || j == row_limit - 1)
            {
                triangle[i][j] = 1;
            }
            else if (j == 1)
            {
                triangle[i][j] = triangle[i - 1][0] + triangle[i - 1][1];
            }
            else if (j == row_limit - 2)
            {
                triangle[i][j] = triangle[i - 1][lastRow_limit - 1] + triangle[i - 1][lastRow_limit - 2];
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j - 2] + triangle[i - 1][j];
            }
        }

        lastRow_limit = row_limit;
    }
}

int main()
{
    // ÿ�����ĸ��� 2n - 1
    int n = 0;

    while (cin >> n)
    {
        vector<vector<int>> triangle;
        triangle.resize(n);

        // ������n���������
        YTriangle(triangle);
        bool flag = false;

        // �ж�
        for (int i = 0; i < triangle[n - 1].size(); i++)
        {
            if (triangle[n - 1][i] % 2 == 0)
            {
                flag = true;
                cout << i + 1;
                break;
            }
        }

        if (!flag)
        {
            cout << -1;
        }
    }

    return 0;
}