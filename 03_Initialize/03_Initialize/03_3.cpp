#include <iostream>

int main()
{
    int a = 0;
	int grade[5] = {};
	for (auto& j : grade) {
	
		for (int i = 1; i < 6; i++) {
			std::cout << i << "�л��� ������ �Է��ϼ���.: ";
			std::cin >> j;
			a += j;
		}
        a /= 5;
	  std::cout << "���� ��� : " << a << "\n";
	}		
	
	
}