int main()
{
    /**
     * 
     * 代码中为何p合法而lp非法？
     * 
    */

    int i = 42;
    void *p = &i;
    long *lp = &i;  // 当然不合法了，试图用int类型的内存地址来初始化一个long类型指针
}