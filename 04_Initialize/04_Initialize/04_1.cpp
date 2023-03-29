#include <iostream>
#include <vector>

int main()
{
	int x, y;
	while (1) {
		std::cout << "x를 입력하세요 : ";
		std::cin >> x;
		std::cout << "\n" << "y를 입력하세요: ";
		std::cin >> y;

		if (x < 0 || y < 0) {
			std::cout << "x와 y모두 양수를 입력해주세요.";
			std::cout << "\n";
		}
		else {
			break;
		}
	}

	std::vector<std::vector<int>> v(x, std::vector<int>(y));
	int num = 1;

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.at(i).size(); j++) {
			v[i][j] = num;
			num++;			
		}
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.at(i).size(); j++) {
			std::cout << v[i][j] << " ";
		}
			std::cout << "\n";
	}
	return 0;
}
