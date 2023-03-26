//½Ç½À2
#include <iostream>

int main()
{
	std::string city2[5] = {};
	for (auto &c : city2)
		std::cin >> c;
	for (int i = 0; i < 5; i++) {
		std::cout << city2[i]<<" ";
	}
}