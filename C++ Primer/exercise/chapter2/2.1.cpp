int main()
{
    /**
     * diff int, long, long long, short?
     * 一般来说：
     * 占用字节从大到小：long long > long >= int > short
     * 
     * 
     * diff signed, unsigned?
     * 一般来说：
     * 带符号的类型是通过使用一个bit来代表符号，来实现的
     * 所以带符号类型的长度通常比无符号类型的长度少1个2次幂的数量
     * 但带符号类型可以表示负数，各有所长。
     * 
     * 
     * diff float, double?
     * 一般来说：
     * 可以优先使用double，因为相比float，double拥有更高的计算精度而性能代价却和float差不多
     * 
    */
    return 0;
}