#include<iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
	//필드, 생성자, 메소드
	string name;

public:

	Person(){}//기본생성자
	Person(string name) {
		this->name = name;
	}
	void sleep() {
		cout << "잠자기";
	}

};

class Student : public Person { // 상속받는다.(접근제어자 주의)->name은 쓸 수 없음
	//	본인 생성자에서 부모의 생성자를 호출함
	//student 생성자를 작성하지 않는 다는 건 부모의 기본 생성자를 호출하게 됨
	void study() {
		sleep();
	}

};

int main() {

	Person p = Person();
	Student s = Student();

}

