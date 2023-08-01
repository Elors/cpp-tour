#include <iostream>

int main()
{
    // 使用for重做1.9、1.10、1.11三个练习题
    
    // 1.9
    int sum = 0;
    for (int i = 50; i <= 100; i++)
        sum += i;

    // 1.10
    for (int i = 10; i >= 0; i--)
        std::cout << i << " ";
    std::cout << std::endl;

    // 1.11
    /**
     * 之前1.11的while实现：
     * 
     * while (vs <= vb)
        {
            std::cout << vs << ", ";
            ++vs;
        }
    
        
    * 将上述实现更改为下面的代码即可，其他不变：
    * for (; vs <= vb; vs++)
          std::cout << vs << ", ";
    */
     




    return 0;
}