#include <iostream>
#include <string>
#include <vector>

using namespace std;

void _3_14();
void _3_15();
void _3_16();
void _3_17();
void _3_20();

int main()
{
    // _3_14();
    // _3_15();
    // _3_16();
    // _3_17();
    _3_20();
}

void _3_12()
{
    /**
     * 下列vector对象定义有不正确的吗？
     * 如果有，请指出。
     * 对于正确的，描述执行结果
     * 对于不正确的，说明原因
    */

    vector<vector<int>> ivec;   // C++11之后正确，对于更早的标准需要在两个后尖括号之间加入空格
    // vector<string> svec = ivec; // 错误，vector的元素类型不符，无法进行拷贝复制
    vector<string> svec(10, "null");    // 正确，将被初始化为含有10个“null”字符串的vector对象
}

void _3_13()
{
    /**
     * 下列vector对象各包含多少个元素，值分别是多少？
    */
    vector<int> v1;                 // 无元素
    vector<int> v2(10);             // 10个0
    vector<int> v3(10,42);          // 10个42
    vector<int> v4{10};             // 1个10
    vector<int> v5{10, 42};         // 两个元素，分别是10和42
    vector<string> v6{10};          // what? 10个空字符串
    vector<string> v7{10, "hi"};    // 10个"hi"
}

void _3_14()
{
    int x;
    vector<int> iv;
    while (cin >> x)
        iv.push_back(x);
    
    for (auto &i : iv)
        cout << i << " ";
    cout << endl;
}

void _3_15()
{
    string x;
    vector<string> iv;
    while (cin >> x)
        iv.push_back(x);
    
    for (auto &i : iv)
        cout << i << " ";
    cout << endl;
}

void _3_16()
{
    vector<int> v1;                 // 无元素
    vector<int> v2(10);             // 10个0
    vector<int> v3(10,42);          // 10个42
    vector<int> v4{10};             // 1个10
    vector<int> v5{10, 42};         // 两个元素，分别是10和42
    vector<string> v6{10};          // what? 10个空字符串
    vector<string> v7{10, "hi"};    // 10个"hi"

    for (auto &t : v1) cout << t << "\t";
    cout << endl;
    for (auto &t : v2) cout << t << "\t";
    cout << endl;
    for (auto &t : v3) cout << t << "\t";
    cout << endl;
    for (auto &t : v4) cout << t << "\t";
    cout << endl;
    for (auto &t : v5) cout << t << "\t";
    cout << endl;
    for (auto &t : v6) cout << t << "\t";
    cout << endl;
    for (auto &t : v7) cout << t << "\t";
    cout << endl;
}

void _3_17()
{
    string s;
    vector<string> sv;
    while (getline(cin, s))
        sv.push_back(s);

    for (auto &ts : sv)
    {
        for (auto c : ts)
        {   
            if (isalpha(c))
                cout << (char)toupper(c);
        }
        cout << endl;
    }
}

void _3_18()
{
    /**
     * 下面的程序合法吗？
     * 如果不合法，如何修改？
    */

    vector<int> ivec;
    ivec[0] = 42;

    /**
     * 不合法
     * ivec声明后不包含任何元素，此时访问下标未0的元素是非法的。
     * 可以改成：
     * 1. vector<int> ivec {42};
     * 2. vector<int> ivec = {42};
     * 3. vector<int> ivec(1); ivec[0] = 42;
     * 4. vector<int> ivec; ivec.push_back(42);
     * 
     * 等等..
    */
}

void _3_19()
{
    /**
     * 若想要定义一个含有10个元素的vector对象，所有元素的值都是42
     * 请列举出3种不同的实现方法，哪种方法更好？为什么？
     * 
    */

    vector<int> v1(10, 42);
    vector<int> v2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v4; for (size_t i = 0; i < 10; i++) v4.push_back(42);
    
    /**
     * v1 is better! shorter, cleaner.
    */
}

void _3_20()
{
    /**
     * 读入一组整数，存入一个vector对象
     * 1. 将每对相邻的整数的和输出出来。
     * 2. 输出数组两端的每组整数的和。
    */

    int n = 0;
    vector<int> iv;
    while (cin >> n)
        iv.push_back(n);

    int len = iv.size() - 1;
    // part1
    for (size_t i = 0; i < len; i++)
        cout << iv[i] + iv[++i] << ", ";
    cout << endl;
    
    // part2
    for (size_t i = 0; i < len/2+1; i++)
        cout << iv[i] + iv[len-i] << ", ";
    cout << endl;    
}

void _3_41()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec = {begin(arr), end(arr) - 1};
}

void _3_42()
{
    vector<int> ivec{0, 1, 2, 3, 5};
    const int s = ivec.size();
    int arr[10];
    for (size_t i = 0; i < s; ++i)
        arr[i] = ivec[i];
}

