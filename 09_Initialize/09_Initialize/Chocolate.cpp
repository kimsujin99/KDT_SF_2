#include"Chocolate.h"


	Chocolate::Chocolate(string shape) {
		this->name = " ���ݸ�";
		this->shape = shape;
	}

	void Chocolate::showInfo() {
		cout << shape << "���" << name << endl;
	}
