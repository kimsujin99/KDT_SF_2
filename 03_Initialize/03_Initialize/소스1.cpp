
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int grade[3][2] = {0};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; i++){
			std::cout << i + 1 << "�� �л��� ������� ���м����� �Է��ϼ���:";
				std::cin >> grade[i][j];
				a += i;
				b += j;
		}
		a /= 3;
		b /= 3;
		std::cout << "����� ��� : " << a << "\n";
		std::cout << "����� ��� : " << b << "\n";
	}

}