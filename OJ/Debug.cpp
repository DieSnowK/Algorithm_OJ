#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int date = 0, year = 0;
int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Check(int x) // x == year
{
    string str = to_string(x);
    reverse(str.begin(), str.end());

    int _month = atoi(str.substr(0, 2).c_str());
    int _day = atoi(str.substr(2, 2).c_str());

    if (isLeap(x) && _month == 2 && _day > 29)
    {
        return false;
    }

    if (_month > 12 || _day > days[_month])
    {
        return false;
    }

    return true;
}

bool CheckAB(int x)
{
    /*
    return (x / 1000 == (x % 100) / 10) &&
           ((x % 1000) / 100 == x % 10) &&
           (x / 1000 != (x % 1000) / 100);
    */

    string str = to_string(x);
    return str[0] == str[2] && str[1] == str[3] && str[0] != str[1]; // ABABBABA
}

// 枚举每个回文, 然后判断是否是合法日期即可
int main()
{
    cin >> date;
    year = date / 10000;

    // 1.枚举回文
    bool found = false;
    string tmp, ret;
    for (int i = year + 1; i < 10000; i++)
    {
        // 2.是否是合法日期?
        if (Check(i))
        {
            tmp = to_string(i);
            ret = tmp + string(tmp.rbegin(), tmp.rend());

            if (!found)
            {
                cout << ret << endl;
                found = true;
            }

            // 3.是回文, 是否是ABABBABA?
            if (CheckAB(i))
            {
                cout << ret << endl;
                break;
            }
        }
    }

    return 0;
}