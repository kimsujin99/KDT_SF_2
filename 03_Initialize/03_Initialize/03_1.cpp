//실습 1
#include <iostream>

int main()
{
	std::string city[5] = { "한국","일본","중국","미국","캐나다" };

	for (int i = 0; i < 5; i++) {
		std::cout << city[i] << " ";
	}
}