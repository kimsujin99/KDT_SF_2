#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int grade[3][2] = { 0 };

	for (int i = 0; i < 3; i++) {
		std::cout << i + 1 << "�� �л��� ������� ���м����� �Է��ϼ���:"<<"\n";
		for (int j = 0; j < 2; j++) {
			std::cin >> grade[i][j];
			
			 a += grade[0][j];
	         b += grade[i][0];
			
		}
		
	}
	   
	    std::cout << "����� ��� : " << a/3 << "\n";
		std::cout << "����� ��� : " << b/3 << "\n";

}