int main()
{
    /**
     * 
     * 下面的代码是否合法？
     * 若非法，请改正
     * 
    */

    // int null = 0, *p = null;

    // should be like
    int null = 0, *p = &null;
}