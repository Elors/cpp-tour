int main()
{
    /**
     * 
     * 给定指针p，能否知道它是否指向了一个合法的对象吗？
     * 如果能，叙述判断思路。
     * 如果不能，请说明原因。
     * 
    */

    /**
     * 
     * 作为一个初学者，感觉这是一个很有意思的问题
     * 
     * 思路：
     * 1. 给定指针p，但未说明是如果给定，有以下四种情况：
     *      a) someType *p;                 // 未初始化，大概率不合法
     *      b) SomeType *p = someAddress;   // 初始化，基本可根据类型判断是否合法
     *      c) void *p;                     // 未初始化，大概率不合法
     *      d) void *p = someAddress;       // 初始化，类型可知，但当前学习阶段无法获取类型
     * 
     * 2. 如何定义合法？（比如未初始化的int指针取值显示未175891387）
     *  若允许程序崩溃，那么可以验证的方式有很多。
     *  不允许程序崩溃，那么在当前C++ Primer的学习阶段，似乎只能验证Int类型指针的合法性了。
     * 
     * 3. 至于“对象”一词，我的理解是一切都可看作是对象，包括基本数据类型的变量。
     * 
     * 
    */
}