#include<iostream>
#include <iostream>
#include <string>

using namespace std;

class Student {
	string name;
	int age, num;

public:
	Student(string name, int age, int num) {
		this->name = name;
		this->age = age;
		this->num = num;
	}

	void lunch(){
		cout << "������ �н�\n";
	}

};

class Kim : public Student {

public:

	void lunch() {
		cout << "������ �谡�� ���\n";
	}
};


class Baek : public Kim {

public:

	void lunch() {
		cout << "������ ������ ����\n";
	}

};

int main() {
	Student s = Student("ȫ�浿", 26, 123456);
	s.lunch();
	Kim K;
	Kim* k = new Beak;

	 


}