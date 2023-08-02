int main()
{
    /**
     * 计算按揭贷款时，对于利率，本金，付款分别应该选择什么数据类型？理由是什么？
     * 由于应用场景为按揭付款，有以下考虑：
     * 1.由于利率按照惯例由央行设定，基于基点规则，考虑到现实世界的宏观金融规律，
     * 大体会在至多几百个基点的一个区间浮动（故使用unsigned int, 另外使用一个 unsigned int表示基点的加减）
     * 2.考虑最大金额不做认为设定上限（故使用long long或两个long long）
     * 3.付款金额大金额通常会分多比，多途径支付，故32位下的int类型已经足以支持单笔支付（使用unsigned int）
     * 
    */
    return 0;
}