int main()
{
    /**
     * 描述下列字面量的数据类型
     * 并说明每组字面量的区别
    */

    // 1
    auto g1_1 = 'a';    // char
    auto g1_2 = L'a';   // wchar   ---- wrong! its wchar_t
    auto g1_3 = "a";    // string  ---- wrong! its const char*
    auto g1_4 = L"a";   // wstring ---- wrong! its const wchar_t*
    // 忘记了，c/c++的字符串实现是其第一个字符的指针

    // 2
    auto g2_1 = 10;     // signed int
    auto g2_2 = 10u;    // unsigned int
    auto g2_3 = 10L;    // signed long
    auto g2_4 = 10uL;   // unsigned long
    auto g2_5 = 012;    // OCT 12, 10 in DEC
    auto g2_6 = 0xC;    // Hex C, 12 in DEC

    // 3
    auto g3_1 = 3.14;   // float? 3.14 ---- wrong! its double!
    auto g3_2 = 3.14f;  // float! 3.14
    auto g3_3 = 3.14L;  // long, 3 in DEC ---- wrong! its long double!

    // 4
    auto g4_1 = 10;     // signed int
    auto g4_2 = 10u;    // usigned int
    auto g4_3 = 10.;    // double?  ---- yes
    auto g4_4 = 10e-2;  // double?  ---- yes
    
}