#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#define length(array) ((sizeof(array)) / (sizeof(array[0])))

using namespace std;

void _3_37();
void _3_39();
void _3_40();

int main()
{
    // _3_37();
    // _3_39();
    _3_40();
}

void _3_37()
{
    /**
     * 下面的程序含义是什么，程序输出结果是什么？
    */

    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }
    
    /**
     * 创建了一个c风格字符串ca，值为“hello”
     * 创建了一个指针指向ca的第一个元素地址。
     * 打印cp的字符直到遇到第一个空字符。
     * 
     * 实际上由于ca没有以空字符结尾，导致cp也有同样的问题
     * 输出结果应该是'hello'外加未知字符，每个字符独占一行显示
    */
}

void _3_38()
{
    /**
     * 将两个指针相加不单是非法的，更是没有什么意义的
     * 为什么将两个指针相加是没有意义的？
     * 
     * 推测：
     * 1. 两个指针相加大概率会出现溢出现象，得出的结果显然是没有意义的
     * 2. 假设有场景需要将两个指针相加的结果，那么也必然有更优的实现方案（需要前半句描述的场景，应该都是脱裤子放屁）。
    */
}

void _3_39()
{
    const char c1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    const char c2[] = {'h', 'i', '\0'};
    const string s1 = "Hello!";
    const string s2 = "Hi";
    cout << "result of strcmp(c1, c2): " << '\t' << strcmp(c1, c2) << endl;
    cout << "result of s1 > s2: " << '\t' << (s1 > s2 ? "true" : "false") << endl;
}

void _3_40()
{
    const char c1[] = "hello";
    const char c2[] = " world!";
    const size_t len = length(c1) + length(c2) + 1;
    char c3[len];
    strcpy(c3, c1);
    strcat(c3, c2);

    cout << c3 << endl;
    cout << "length of c3 is " << strlen(c3) << endl;
}





