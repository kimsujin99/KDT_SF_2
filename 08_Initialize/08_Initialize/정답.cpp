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
};

class Candy : public Snack {
	string flavor;
public:
	Candy(string name) : Snack(name){

	}

};

class Choco :public Snack {
	string shape;
public:
	Choco(string name) : Snack(name) {

	}
};

int main() {
	Snack snackBasket[4] = { Candy("����"),Candy("����"),Choco("����"),Choco("abc") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i].printName();
	}

}




int main() {
	Snack* snackBasket[4] = {new Candy("����"),new Candy("����"),new Choco("����"),new Choco("abc") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->printName();
	}

	Candy* candy = (Candy*)snackBasket[0];
}