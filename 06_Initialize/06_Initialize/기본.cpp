//Ŭ����


#include <iostream>
#include<string>
using namespace std;

class cat {
	string name;
	int age;

public: //���� ������ private�� �⺻

	cat(string name, int age) {
		this->name = name; //Ŭ���� �ȿ� �ִ� �̸��̶� this�� ����
		this->age = age;
		cout <<name<< "����̰� �¾���ϴ�.\n";
	}

	void mew() {
		cout << "�Ŀ�\n";
	}
};

int main() {
	cat cat1("����",5);//���: ����̰� �¾���ϴ�.
	cat1.mew();//�Ŀ�
}