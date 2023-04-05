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
		cout << "점심은 학식\n";
	}

};

class Kim : public Student {

public:

	void lunch() {
		cout << "점심은 김가네 김밥\n";
	}
};


class Baek : public Kim {

public:

	void lunch() {
		cout << "점심은 백종원 피자\n";
	}

};

int main() {
	Student s = Student("홍길동", 26, 123456);
	s.lunch();
	Kim K;
	Kim* k = new Beak;

	 


}