int main()
{
    /**
     * 
     * 说明下列声明，声明了顶层const还是底层const？
     * 
    */

    const int v2 = 0;           // v2: 顶层
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // p2: 底层，p3: 底层和顶层，r2: 底层

}