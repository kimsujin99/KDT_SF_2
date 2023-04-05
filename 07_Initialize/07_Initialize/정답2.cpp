#include<iostream>
using namespace std;

class Student {
protected:
	string name;
	string school;
	int age;
	string std_id;

public:
	void lunch() {
		cout << "점심은 학식\n";
	}
};

class Kim : public Student {
public:
	Kim(string name, string school, int age, string std_id) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->std_id = std_id;
	}
	void lunch() {
		cout << "점심은 김가네 김밥\n";
	}
};

class Beak : public Student {
public:
	Beak(string name, string school, int age, string std_id) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->std_id = std_id;
	}
	void lunch() {
		cout << "점심은 백종원 피자\n";
	}

};

int main(){
	Kim k =Kim("김", "서울대", 20, "2311111");
	Beak b = Beak("", "", 4, "");

	k.lunch();
	b.lunch();
}