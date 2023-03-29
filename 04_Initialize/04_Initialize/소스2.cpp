/*영어로 된 문자열 모두 소문자로 입력 받아서 문자열에 사용된 문자의 개수를 구하시오
ex)
입력예시 : apple
출력예시 : 4 개 ( a, p, l, e )
입력예시 : bacon
출력예시 : 5 개 ( b, a, c, o, n )
입력예시 : i have a pen
출력예시 : 7 개 ( i, h, a, v, e, p, n )*/

#include <iostream>
#include <vector>

int main()

{
	int x;
	std::cout << "입력예시:";
		std::cin >> x;

		std::vector<std::string> v;
		std::cin<< x