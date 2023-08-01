#include <iostream>

int main()
{

	int currVal = 0, val = 0;

	if (std::cin >> currVal) {        
		int cnt = 1;
		while (std::cin >> val) { 
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}

		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}

    /**
     * 上述程序若所有输入值都是相等的，那么在用户输入EOF之前，程序将不会停止且不会输出任何内容。
     * 若没有重复的值，程序将会在每一次输入新值时，输出"{旧值} occurs 1 times"。
    */

	return 0;
}
