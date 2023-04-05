#include<iostream>
#include<vector>
#include "Snack.h"
#include "Candy.h"
#include"Chocolate.h"


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

	cout << "\n" << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다." << "\n";
	cout << endl;



	cout << "과자 바구니에 담긴 간식 확인 \n";

	for (Snack* snack : snackBasket) {
		snack->showInfo();
		delete snack;
	}
	snackBasket.clear();
}