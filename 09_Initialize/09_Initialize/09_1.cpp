#include<iostream>
using namespace std;
#include<vector>

class Snack {
protected:
	string name; 
	static int count; 
public:
	Snack() {
		count++;
	}

	static int get_count() {
		return count;
	}
	virtual void showInfo() { 
		cout << "error" << endl;
	}
};

int Snack::count = 0;

class Candy :public Snack {
	string taste;
public:
	Candy(string taste) {
		this->name = " 사탕";
		this->taste = taste;
	}

	void showInfo() {
		cout << taste << "맛" << name << endl;
	}

};

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->name = " 초콜릿";
		this->shape = shape;
	}

	void showInfo() {
		cout << shape << "모양" << name << endl;
	}

};


int main() {
	vector<Snack*> snackBasket; 



	while (1) {
		int number;
		cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료): ";
		cin >> number;
		if (number == 1) {
			string taste;
			cout << "맛을 입력하세요: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste)); 
		}
		else if (number == 2) {
			string shape;
			cout << "모양을 입력하세요: ";
			cin >> shape;
			snackBasket.push_back(new Chocolate(shape));
		}
		else if (number == 0) {
			break;
		}
		else {
			cout << "0 ~ 2 사이의 숫자를 입력하세요." << endl;
		}
	}

	cout << "\n"<<"과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다." << "\n";
	cout << endl;



	cout << "과자 바구니에 담긴 간식 확인 \n";

	for (Snack* snack : snackBasket) { 
		snack->showInfo();
		delete snack;
	}
	snackBasket.clear();
}