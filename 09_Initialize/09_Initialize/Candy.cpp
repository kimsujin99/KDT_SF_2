#include "Candy.h"

	Candy::Candy(string taste) {
		this->name = " ����";
		this->taste = taste;
	}

	void Candy::showInfo() {
		cout << taste << "��" << name << endl;
	}
