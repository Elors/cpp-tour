#include <string>
#include <iostream>

using namespace std;

void getline();
void getword();
string s;

int main()
{
    getline();
    getword();
}

void getline()
{
    s = "";
    cout << "write something..." << endl;
    std::getline(cin, s);
    cout << s << endl;
}

void getword()
{
    s = "";
    cout << "write something again..." << endl;
    cin >> s;
    cout << s << endl;
}