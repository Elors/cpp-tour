#include <string>
#include <iostream>

using namespace std;

string s;
void join_strings_from_ins(string separator = "");      // 3.5
void use_range_for_to_replace_chars_with_X();           // 3.6
void use_range_for_to_replace_chars_with_X_3_7();       // 3.7
void use_range_for_to_replace_chars_with_X_3_8_while(); // 3.8 use while
void use_range_for_to_replace_chars_with_X_3_8_for();   // 3.8 use for
void remove_all_punct();                                // 3.10


std::ostream& writeString(std::ostream& out, std::string const& s); // for conv

int main()
{
    cout << "start, use ctrl+z and press enter to stop input..." << endl;
    // join_strings_from_ins(" ");
    // use_range_for_to_replace_chars_with_X_3_7();
    // use_range_for_to_replace_chars_with_X_3_8_while();
    // use_range_for_to_replace_chars_with_X_3_8_for();
    remove_all_punct();
}

/// 3.5
/// @brief 从标准输入流中读入多个字符串并拼接在一起
/// @param separator 分隔符，默认为空
void join_strings_from_ins(string separator)    //Note: 默认参数只能在定义中声明
{
    string temp;
    while (getline(cin, temp))
        s += separator + temp;

    cout << s << endl;
}

/// 3.6
void use_range_for_to_replace_chars_with_X()
{
    s = "";
    getline(cin, s);
    for (auto &c : s)
        c = 'X';
    cout << s << endl;    
}

/// 3.7
/// @brief 若将练习3.6中的循环控制变量的类型设置为char，会发生什么
/// 预估一下结果，然后变成进行验证
void use_range_for_to_replace_chars_with_X_3_7()
{
    /**
     * 不觉得会有什么不同
     * 但如果指的是变为 for (char c : s)
     * 那么，变量c将会是s序列中字符的一个copy，对c赋值将不会对原序列产生任何影响
     * 
    */
    s = "";
    getline(cin, s);
    for (char &c : s)
        c = 'X';
    cout << s << endl;    
}

void use_range_for_to_replace_chars_with_X_3_8_while()
{
    s = "";
    getline(cin, s);
    decltype(s.size()) c = 0;

    while (c < s.size())
    {
        s[c] = 'X';
        c++;
    }
    cout << s << endl;
}

void use_range_for_to_replace_chars_with_X_3_8_for()
{
    s = "";
    getline(cin, s);
    decltype(s.size()) c = 0;

    for (decltype(s.size()) c = 0; c < s.size(); c++)
        s[c] = 'X';

    /**
     * range for 更好
     * 因为不需要我来管理下标和边界问题
    */

    cout << s << endl;
}

void _3_9()
{
    /**
     * 下面的程序有何作用？
     * 是否合法？
     * 若不合法，为什么？
    */   

    string a;
    cout << a[0] << endl;

    /**
     * 这段程序定义了一个string类型变量a，但未给定初始化值，默认是空字符串。
     * 打印空字符串的第一个字符是无意义的。
     * 
     * 可以通过编译，编译器也不会报错，但是不合法。
    */
}

void remove_all_punct()
{
    s = "";
    getline(cin, s);
    for (auto &c : s)
    {
        if (!ispunct(c))
            cout << c;
            // c = '\b';
    }
    // writeString(std::cout, s);
    cout<< endl;

    /**
     * 若使用“c = '\b';”：
     * s的长度不会改变，其中的符号都被替换为\b
     * 如果输入：123 456,89.1??4
     * 则会输出：123 456 89 1  4
     * 真实内容：123 456\b89\b1\b\b4
    */
}

void _3_11()
{
    /**
     * 下面的程序是否合法？
     * 若合法，c的类型是什么？
    */

    const string s = "Keep out!";
    for (auto &c : s) {}
    
    /**
     * 合法，c的类型是const char &
    */
}


std::ostream& writeString(std::ostream& out, std::string const& s)
{
   for ( auto ch : s )
   {
      switch (ch)
      {
         case '\'':
            out << "\\'";
            break;

         case '\"':
            out << "\\\"";
            break;

         case '\?':
            out << "\\?";
            break;

         case '\\':
            out << "\\\\";
            break;

         case '\a':
            out << "\\a";
            break;

         case '\b':
            out << "\\b";
            break;

         case '\f':
            out << "\\f";
            break;

         case '\n':
            out << "\\n";
            break;

         case '\r':
            out << "\\r";
            break;

         case '\t':
            out << "\\t";
            break;

         case '\v':
            out << "\\v";
            break;

         default:
            out << ch;
      }
   }

   return out;
}
