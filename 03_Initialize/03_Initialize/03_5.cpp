#include <iostream>

int main()
{
	int x, y;

	while (1) {
		std::cout << "x�� �Է��ϼ��� : ";
		std::cin >> x;
		std::cout << "\n" << "y�� �Է��ϼ���: ";
		std::cin >> y;

		if (x <= 0 || y <= 0) {
			std::cout << "x�� y��� ����� �Է����ּ���.";
			std::cout << "\n";
		}
		else { 
			break; 
		}
	}
	
		int** arr = new int* [x];

		for (int i = 0; i < x; i++) {
			arr[i] = new int[y];
		
		}

		int num = 1;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				arr[i][j] = num;
				num++;
				
			}
		}
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				std::cout << arr[i][j] << " ";
			}
			std::cout<<"\n";
		}
		for (int i = 0; i < x; i++) {
			delete[] arr[i];
		}
		delete[]arr;
	}

