#include <iostream>
#include <string>
#include <vector>
#include "../chapter1/1.20+/Sales_item.h"
using namespace std;

void change_first_word_to_uppercase();

int main()
{
    /**
     * string
    */
    string s1;
    string s2 = s1;
    string s3 = "hiya";     // s3 is a copy of "hiya"
    string s4(10, 'C');     // will be "CCCCCCCCCC"
    string s5 = "hiya";     // copy initialization
    string s6("hiya");      // direct initialization
    string s7(10, 'C');     // direct...
    string s8 = string(10, 'C');    // 
    
    // string methods in cctype
    char c = 'X';
    isalnum(c);
    isalpha(c);
    iscntrl(c);
    isdigit(c);
    isgraph(c);
    islower(c);
    isprint(c); // 可见字符
    ispunct(c); // 标点符号
    isspace(c); // 空格、横向制表符、纵向制表符、回车符、换行符、进纸符之一
    isupper(c);
    isxdigit(c);    // 16进制数字
    tolower(c);
    toupper(c);

    // cout << "will output s1[0]" << endl;
    // cout << s1[0] << endl;
    // s1[0] = 'c';
    // cout << s1[0] << endl;
    // cout << "will output this line after output s1[0]" << endl;
    change_first_word_to_uppercase();


    /**
     * 
     * vector
     * 
    */
    vector<int> ivec;
    vector<Sales_item> sales_vec;
    vector<vector<string>> file;
    vector<vector<string> > file1;  // need an extra space before C++11

    typedef int T;
    vector<T> v1;
    vector<T> v2(v1);
    vector<T> v3(3, 9);     // [9, 9, 9]
    vector<T> v4(4);        // [0, 0, 0, 0]
    vector<T> v5 {1, 2, 3}; // [1, 2, 3]
    
    //
    v1.empty();
    v1.size();
    v1.push_back(1);
    v1[0];


    /**
     * iterator
    */
    string s("some string");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
    }

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
}

/// @brief 将输入的字符串中第一个单词转变为大写
void change_first_word_to_uppercase()
{
    string s;
    getline(cin, s);
    for (auto &c : s)
    {
        if (isalpha(c))
            c = toupper(c);
        else if (isspace(c))
            break;
    }
    cout << "output: " << endl;
    cout << s << endl;
}