int main()
{
    /**
     * 说明string类的输入运算符和getline函数分别是如何处理空白字符的。
    */

    /**
     * string类的输入运算符：
     * 会一直读入直到第一个空白字符，并返回读到的内容（不包含空白字符）
     * 例如：
     * "Preprocessor macros have many shortcomings.\nnewline" 
     * 将返回 "Preprocessor"
     * 
     * 
     * getline函数：
     * 会一直读入知道第一个换行符，并返回读到的内容（不包含换行符）
     * 例如：
     * "Preprocessor macros have many shortcomings.\nnewline" 
     * 将返回 "Preprocessor macros have many shortcomings."
    */
}