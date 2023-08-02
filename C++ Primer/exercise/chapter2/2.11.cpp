extern int ix = 1024;

int main()
{
    /**
     * 下列的语句是声明还是定义？
    */

    // 1
    // extern int ix = 1024;
    /**
     * 函数内部定义此语句不合法。
     * 当声明在函数外部时：不是声明，仅定义
     * 
     * 
     * 一点思考：
     * 1. 为何此语句不是声明而是仅仅是定义？
     *  按照我对C++ Primer书中解释的理解来讲：
     *  对于这个例子，声明应该是指通过使用extern关键字，告知编译器只需要实现ix变量的连接符号，而不需要处理具体到比如分配空间等的其他问题。
     *  但由于这条语句给了初始化值，他就不再是声明而是定义，变成了整个程序中这个ix全局变量的唯一定义。其他地方再需要使用ix，必须先通过
     *  extern int ix 进行声明后才可以使用。
     * 
     * 2. 为何函数内部此语句不合法？
     *  这条语句"extern int ix = 1024;" 作用是定义并初始化了一个变量（这种情况下的extern其实是可选的）。
     *  但这条语句定义在函数内部，其作用域是无法提供给外部使用的，存在矛盾，所以不合法。
    */


    // 2
    int iy;
    /**
     * 声明并定义
    */


    // 3
    extern int iz;
    /**
     * 声明但未定义
    */
}