#include <iostream>
#include <vector>

int main()

{  
	int a = 0;
	std::cout << "����ڰ� �Է��� ���� ���ϱ�" << "\n";
 
	
	    std::vector<int>v(100);

		for (int i = 0; i < v.size(); i++) {

			std::cout << "���ڸ� �Է��ϼ���. (0: exit) ";
			std::cin >> v[i];
			if (v[i] == 0) {
				break;
			}
				a += v[i];
			}   

	std::cout << "����ڰ� �Է��� ���� ���� : " << a << "\n";
}
	