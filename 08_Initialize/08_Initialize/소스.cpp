#include<iostream>
using namespace std;

class Snack {
	int price;
	string name;
	string maker;

public:
	Snack(string name) {
		this->name = name;
	}

	void printName() {
		cout << "��ǰ�̸�: " << name << endl;
	}

	virtual void flavor() = 0;

};

class Candy : public Snack {

public:
	Candy(string name) : Snack(name) {

	}
	void flavor() {
		cout << "�����";
	}

};

class Choco :public Snack {

public:
	Choco(string name) : Snack(name) {

	}
	void flavor() {
		cout << "��Ʈ���";
	}
};



int main() {
	Snack* s2 = new Candy("ĵ��");
	s2->flavor();
}