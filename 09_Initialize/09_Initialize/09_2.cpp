#include<iostream>
#include<vector>
#include "Snack.h"
#include "Candy.h"
#include"Chocolate.h"


int main() {
	vector<Snack*> snackBasket;


	while (1) {
		int number;
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1: ����, 2: ���ݸ�, 0: ����): ";
		cin >> number;
		if (number == 1) {
			string taste;
			cout << "���� �Է��ϼ���: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste));
		}
		else if (number == 2) {
			string shape;
			cout << "����� �Է��ϼ���: ";
			cin >> shape;
			snackBasket.push_back(new Chocolate(shape));
		}
		else if (number == 0) {
			break;
		}
		else {
			cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���." << endl;
		}
	}

	cout << "\n" << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << "\n";
	cout << endl;



	cout << "���� �ٱ��Ͽ� ��� ���� Ȯ�� \n";

	for (Snack* snack : snackBasket) {
		snack->showInfo();
		delete snack;
	}
	snackBasket.clear();
}