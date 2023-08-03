int main()
{

    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    /**
     * 判断下列语句运行结果
    */

    // a = 42;  // int a is 42
    // b = 42;  // int b is 42
    // c = 42;  // int c is 42
    // d = 42;  // 非法，int指针d不能被赋int值
    // e = 42;  // 非法，const int指针e不能被赋int值
    // g = 42;  // 非法，const int的引用无法更改
}