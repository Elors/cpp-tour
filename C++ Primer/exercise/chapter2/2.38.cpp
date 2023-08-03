int main()
{
    /**
     * 
     * 分别举例说明decltype和auto指定的类型相同和不同的两种情况
     * 
    */

    int i = 12;
    const int ci = 13;


    // same, all int
    auto sai = i;
    decltype(i) sdi = i; 


    // diff, `auto` will ignore `const`
    auto saci = ci;
    decltype(ci) sdci = ci;

}