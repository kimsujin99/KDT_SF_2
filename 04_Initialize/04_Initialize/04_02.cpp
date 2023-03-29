#include <iostream>
#include <vector>

int main()

{  
	int a = 0;
	std::cout << "사용자가 입력한 숫자 더하기" << "\n";
 
	
	    std::vector<int>v(100);

		for (int i = 0; i < v.size(); i++) {

			std::cout << "숫자를 입력하세요. (0: exit) ";
			std::cin >> v[i];
			if (v[i] == 0) {
				break;
			}
				a += v[i];
			}   

	std::cout << "사용자가 입력한 수의 합은 : " << a << "\n";
}
	