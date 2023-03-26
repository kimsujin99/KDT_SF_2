#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int grade[3][2] = { 0 };

	for (int i = 0; i < 3; i++) {
		std::cout << i + 1 << "번 학생의 국어성적과 수학성적을 입력하세요:"<<"\n";
		for (int j = 0; j < 2; j++) {
			std::cin >> grade[i][j];
			
			 a += grade[0][j];
	         b += grade[i][0];
			
		}
		
	}
	   
	    std::cout << "국어성적 평균 : " << a/3 << "\n";
		std::cout << "영어성적 평균 : " << b/3 << "\n";

}