#include<iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
	//�ʵ�, ������, �޼ҵ�
	string name;

public:

	Person(){}//�⺻������
	Person(string name) {
		this->name = name;
	}
	void sleep() {
		cout << "���ڱ�";
	}

};

class Student : public Person { // ��ӹ޴´�.(���������� ����)->name�� �� �� ����
	//	���� �����ڿ��� �θ��� �����ڸ� ȣ����
	//student �����ڸ� �ۼ����� �ʴ� �ٴ� �� �θ��� �⺻ �����ڸ� ȣ���ϰ� ��
	void study() {
		sleep();
	}

};

int main() {

	Person p = Person();
	Student s = Student();

}

