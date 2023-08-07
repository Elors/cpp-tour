#include <string>
#include <iostream>

using namespace std;

void output_larger_one_if_not_equal(string a, string b);
void output_longer_one_if_diff_size(string a, string b);

int main()
{
    string a, b;
    cout << "input for string a:" << endl;
    getline(cin, a);
    cout << "input for string b:" << endl;
    getline(cin, b);

    output_larger_one_if_not_equal(a, b);
    output_longer_one_if_diff_size(a, b);
}

void output_larger_one_if_not_equal(string a, string b)
{
    if (a == b)
        cout << "a == b" << endl;
    else
    {
        cout << "a != b" << endl;
        cout << (a > b ? a : b) << endl;   
    }
}

void output_longer_one_if_diff_size(string a, string b)
{
    if (a.size() == b.size())
        cout << "same size" << endl;
    else
    {
        cout << "diff size" << endl;
        cout << (a.size() > b.size() ? a : b) << endl;   
    }
}