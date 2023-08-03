int main()
{
    /**
     * 
     * 哪些句子是合法的？
     * 若有不合法，请说明原因
     * 
    */

    // 1
    const int buf;
    // 不合法，常量未给定初始值

    
    // 2
    int cnt = 0;


    // 3
    const int sz = cnt;


    // 4
    ++cnt; 
    ++sz;
    // 第二句不合法，常量无法更改

}