//#include <iostream>
//using namespace std;
//
//bool Check(int x)
//{
//    int cnt = 1;
//    while (x)
//    {
//        int tmp = x % 10; // 拿个位
//        x /= 10;
//
//        // 奇数位, 但不是奇数 || 偶数位, 但不是偶数
//        if ((cnt % 2 == 1) && (tmp % 2 != 1) || (cnt % 2 == 0) && (tmp % 2 != 0))
//        {
//            return false;
//        }
//
//        cnt++;
//    }
//
//    return true;
//}
//
//int main()
//{
//    int n = 0, ret = 0;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (Check(i))
//        {
//            ret++;
//        }
//    }
//
//    cout << ret;
//
//    return 0;
//}