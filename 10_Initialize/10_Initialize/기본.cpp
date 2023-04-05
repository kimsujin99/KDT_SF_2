// 난수 생성하기
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main() {

	srand(time(NULL));// 호출할때마다 다른 값이 나오게 된다.
	int num = rand();
	cout << num << "\n";
	int tmp = num % 25 + 1;
	cout << tmp << endl;
	cout << RAND_MAX;

}
