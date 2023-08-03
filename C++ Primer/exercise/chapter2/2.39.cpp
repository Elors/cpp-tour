struct Foo {}
int main()
{
    /**
     * g++编译此程序报错：
     * 2.39.cpp:1:14: error: expected ';' after struct definition
     *    1 | struct Foo {}
     *      |              ^
     *      |              ;
     * 
     * 
    */
    return 0;
}