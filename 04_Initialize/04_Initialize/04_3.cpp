#include <iostream>
#include <vector> 
using namespace std;


namespace seoul {
	string number = "02";
	string mark = "����Ÿ��";
}

namespace busan {
	string number = "051";
	string mark = "���ȴ뱳";
}

using namespace busan;

int main()
{
	cout << "����������ȣ: " << seoul::number << " ���� ���帶ũ: " << seoul::mark<<"\n";
	cout << "�λ�������ȣ: " << number << " �λ� ���帶ũ: " << mark;
}