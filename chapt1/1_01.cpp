#include <iostream>
#include <string>
/*
 * using 和 namespace 都是c++的关键词
 * 命名空间是在众多名称的可见范围之间竖起的一道道围墙
 */
using namespace std;

int main() {
    string user_name;
    cout << "Please enter your first name:";
    cin >> user_name;
    cout << '\n'
         << "Hello,"
         << user_name
         <<"... and goodbye!\n";
    return 0;
}
