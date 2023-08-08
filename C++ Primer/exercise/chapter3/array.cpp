#include <iostream>
#include <string>
#include <vector>

using namespace std;

void _3_31();
void _3_32();
void _3_35();
void _3_36();
void _3_43_44();

int main()
{
    // _3_31();
    // _3_32();
    // _3_35();
    // _3_36();
    _3_43_44();
}

void _3_27()
{
    /**
     * 假设txt_size是一个无参数的函数，它的返回值是int。
     * 下列哪些定义是非法的？为什么？
    */
    unsigned buf_size = 1024;

    // int ia[buf_size];                // 不合法，buf_size不是const变量
    int ia[4 * 7 - 14];              // 合法，4*7-14=14，会将ia初始化为一个含有14个0的有符号整型变量数组
    // int ia[txt_size()];              // 不合法，因为txt_size方法的返回值是一个非const变量
    // char st[11] = "fundamental";     // 不合法，若想要存储“fundamental”这串字符，需要声明一个长度为12的数组（额外的最后一位用来存放'\0'表示结束）。
}
            
void _3_28()
{
    /**
     * 下列数组种的元素的值是什么？
    */
    // string sa[10];
    // int ia[10];
    // int main() {
    //     string  sa2[10];
    //     int     ia2[10];
    // }

    /**
     * sa是一个存有10个空字符串的数组
     * ia是一个存有10个0的有符号整数数组
     * sa2是一个存有10个空字符串的数组
     * ia2是一个存有10个未知内容的有符号整数数组
    */
}

void _3_29()
{
    /**
     * 简述数组对比vector来说，有哪些缺点：
     * 
     * 1. 不可变长度
     * 2. 长度编译时确定
     * 3. 缺少一些便利性接口，例如itrator等等
     * 
    */ 
}

void _3_30()
{
    /**
     * 请说明下面的代码中的索引错误
    */
    constexpr size_t array_size = 10;
    int ia[array_size];
    // for (size_t ix = 1; ix <= array_size; ++ix)  数组下标从0开始，并且下标小于数组长度
    for (size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;
}

void _3_31()
{
    const int s = 10;
    int ia[s];
    for (int i = 0; i < s; ++i)
        ia[i] = i;
}

void _3_32()
{
    const int s = 10;
    vector<int> iv;
    
    for (int i = 0; i < s; ++i)
        iv.push_back(i);
}

void _3_33()
{
    /**
     * 对于104页的程序，如果不初始化scores将会发生什么？
     * 
     * scores变量作为一个unsigned int类型的长度为11的数组，定义在方法内，
     * 程序运行时将会在栈区分配内存空间。若不对scores进行初始化，则scores
     * 包含的值将会是分配的内存空间中残留的垃圾数据。
    */
}

void _3_34()
{
    /**
     * 假定p1和p2指向同一个数组中的元素，
     * 下面的程序功能是什么？什么情况下该程序是非法的？
    */

    /**
     * p1 += p2 - p1;
     * 
     * 功能：
     * 将p2与p1的地址差添加在p1上（即p1将与p2一致）。
    */
}

void _3_35()
{
    int iv[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto *i = &iv[0]; i != end(iv); ++i)
        *i = 0;
}

void _3_36()
{
    const int s = 10;
    int ia1[s] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ia2[s] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ia3[s] = {9, 1, 2, 3, 4, 5,33, 7, 8, 9};
    vector<int> iv1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> iv2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> iv3 = {9, 1, 2, 3, 4, 5,33, 7, 8, 9};
    
    // for array
    // int (&v1)[s] = ia1;
    // int (&v2)[s] = ia3;
    // for vector
    vector<int> &v1 = iv1;
    vector<int> &v2 = iv3;

    if (sizeof(v1) != sizeof(v2)) return;
    // for (auto *p1 = &v1[0], *p2 = &v2[0]; p1 != end(v1) && p2 != end(v2); ++p1, ++p2)            // for array
    for (auto p1 = v1.cbegin(), p2 = v2.cbegin(); p1 != v1.cend() && p2 != v2.cend(); ++p1, ++p2)   // for vector
    {
        if (*p1 != *p2)
        {
            cout << "its different!" << endl;
            return;
        }
    }
    cout << "same!" << endl;
}

void _3_43_44()
{
    int ia[3][4] = {471, 13, 0, 99, 99, 99, 99, 99, 852, 18,76, 1};

    /**
     * 3.43
    */
    // par1
    cout << "_3_43, output array using range for loop: " << endl;
    for (int (&a)[4] : ia)
    {
        for (int n : a)
            cout << n << ", ";
        cout << endl;
    }

    // part2
    cout << "_3_43, output array using for loop with [] opt" << endl;
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
            cout << ia[i][j] << ", ";
        cout << endl;
    }

    // part3
    cout << "_3_43, output array using for loop with pointers" << endl;
    for (int (*p1)[4] = ia; p1 != ia + 3; ++p1)
    {
        for (int *p2 = *p1; p2 != *p1 + 4; ++p2)
            cout << *p2 << ", ";
        cout << endl;
    }

    /**
     * 3.44
    */
    // part1
    typedef int (&E4IArray)[4];
    for (E4IArray a : ia)
    {
        for (int n : a)
            cout << n << ", ";
        cout << endl;
    }
    // part2 ignore
    // part3
    typedef int (*P4IArray)[4];
    for (P4IArray p1 = ia; p1 != ia + 3; ++p1)
    {
        for (int *p2 = *p1; p2 != *p1 + 4; ++p2)
            cout << *p2 << ", ";
        cout << endl;
    }

    /**
     * 3.45 2easy, ignore
    */
}


