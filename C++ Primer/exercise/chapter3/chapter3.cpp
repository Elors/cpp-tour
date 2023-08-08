#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include "../chapter1/1.20+/Sales_item.h"
using namespace std;

void change_first_word_to_uppercase();

int main()
{
    // /**
    //  * string
    // */
    // string s1;
    // string s2 = s1;
    // string s3 = "hiya";     // s3 is a copy of "hiya"
    // string s4(10, 'C');     // will be "CCCCCCCCCC"
    // string s5 = "hiya";     // copy initialization
    // string s6("hiya");      // direct initialization
    // string s7(10, 'C');     // direct...
    // string s8 = string(10, 'C');    // 
    
    // // string methods in cctype
    // char c = 'X';
    // isalnum(c);
    // isalpha(c);
    // iscntrl(c);
    // isdigit(c);
    // isgraph(c);
    // islower(c);
    // isprint(c); // 可见字符
    // ispunct(c); // 标点符号
    // isspace(c); // 空格、横向制表符、纵向制表符、回车符、换行符、进纸符之一
    // isupper(c);
    // isxdigit(c);    // 16进制数字
    // tolower(c);
    // toupper(c);

    // // cout << "will output s1[0]" << endl;
    // // cout << s1[0] << endl;
    // // s1[0] = 'c';
    // // cout << s1[0] << endl;
    // // cout << "will output this line after output s1[0]" << endl;
    // change_first_word_to_uppercase();


    // /**
    //  * 
    //  * vector
    //  * 
    // */
    // vector<int> ivec;
    // vector<Sales_item> sales_vec;
    // vector<vector<string>> file;
    // vector<vector<string> > file1;  // need an extra space before C++11

    // typedef int T;
    // vector<T> v1;
    // vector<T> v2(v1);
    // vector<T> v3(3, 9);     // [9, 9, 9]
    // vector<T> v4(4);        // [0, 0, 0, 0]
    // vector<T> v5 {1, 2, 3}; // [1, 2, 3]
    
    // //
    // v1.empty();
    // v1.size();
    // v1.push_back(1);
    // v1[0];


    // /**
    //  * iterator
    // */
    // string s("some string");
    // if (s.begin() != s.end())
    // {
    //     auto it = s.begin();
    //     *it = toupper(*it);
    // }

    // for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    //     *it = toupper(*it);

    // /**
    //  * Array
    // */
    // unsigned cnt = 42;
    // constexpr unsigned sz = 42;
    // int arr[10];
    // int parr[sz];
    // // string bad[cnt];            // error, cnt must be a const variable
    // // string strs[get_size()];    // error, get_size is not a exstexpr ...
    // int ia1[] = {0, 1, 2, 3};
    // // int ia2[] = ia1;             // error, must initialized with a {}

    // int *ptrs[10];
    // // int &refs[10] = /***/;
    // int (*Parray)[10] = &arr;
    // int (&arrRef)[10] = arr;

    // // array and pointers
    // string nums[] = {"one", "two", "three"};
    // string *p = &nums[0];


    /**
     * C String
    */
    char ca[] = {'C', '+', '+'};    // error, must end with a '\0'
    cout << "length of ca is " << strlen(ca) << endl;   // strlen(ca) 返回11，strlen将会持续向前寻找直到遇到'\0'
    string s("hello world!");
    const char * str = s.c_str();   // use c_str() to get a c style string

    // use array to initial a vector object
    int int_arr[] = {1, 1, 2};
    vector<int> ivec(begin(int_arr), end(int_arr));


    /**
     * more about array
    */
    int ia[3][4]; // size is 3, each element is a array that contains 4 int value
    int arr[10][20][30]; // size is 10, each element is a array that contains 20 array, those array contains 30 int value
    int ia1[3][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    int ia2[3][4] = {1,2,3,4,1,2,3,4,1,2,3,4}; // ia1 and ia2 are the same

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