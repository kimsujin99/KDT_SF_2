//클래스


#include <iostream>
#include<string>
using namespace std;

class cat {
	string name;
	int age;

public: //쓰지 않으면 private이 기본

	cat(string name, int age) {
		this->name = name; //클래스 안에 있는 이름이라 this가 쓰임
		this->age = age;
		cout <<name<< "고양이가 태어났습니다.\n";
	}

	void mew() {
		cout << "냐옹\n";
	}
};

int main() {
	cat cat1("나비",5);//출력: 고양이가 태어났습니다.
	cat1.mew();//냐옹
}