// ���� �����ϱ�
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main() {

	srand(time(NULL));// ȣ���Ҷ����� �ٸ� ���� ������ �ȴ�.
	int num = rand();
	cout << num << "\n";
	int tmp = num % 25 + 1;
	cout << tmp << endl;
	cout << RAND_MAX;

}
