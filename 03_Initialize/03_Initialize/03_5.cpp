#include <iostream>

int main()
{
	int x, y;

	while (1) {
		std::cout << "x를 입력하세요 : ";
		std::cin >> x;
		std::cout << "\n" << "y를 입력하세요: ";
		std::cin >> y;

		if (x <= 0 || y <= 0) {
			std::cout << "x와 y모두 양수를 입력해주세요.";
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

