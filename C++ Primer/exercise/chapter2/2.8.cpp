#include <iostream>

int main()
{
    // 1
    std::cout << (int)'\2' << '\115' << '\n';


    std::cout << std::endl << 
    "---------------"
    "separator"
    "---------------" 
    << std::endl
    << std::endl;


    // 2
    std::cout << (int)'\2' << '\t' << '\115' << '\n';


    /**
     * 使用 (int) 将 '\2' 的类型强制转换为数字.
     * 否则 '\2' 将被识别成转义序列？ （这里还不是很确定，待调查）
    */
}