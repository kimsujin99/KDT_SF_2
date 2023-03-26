#include <iostream>

int main()
{
    int a = 0;
	int grade[5] = {};
	for (auto& j : grade) {
	
		for (int i = 1; i < 6; i++) {
			std::cout << i << "학생의 성적을 입력하세요.: ";
			std::cin >> j;
			a += j;
		}
        a /= 5;
	  std::cout << "성적 평균 : " << a << "\n";
	}		
	
	
}