#include<iostream>
using namespace std;

class Calculate {

protected:

	double x_in = 0.0;
	double y_in = 0.0;
	static double output;

public:
	virtual void result(double x_in, double y_in) {};

	double getOutput() {
		return output;
	}

	static double getOutput2() {
		return output = 0;
	}
};


class Plus :public Calculate {
public:

	void result(double x_in, double y_in) {
		output = x_in + y_in;
		cout << "----------------------\n";
		cout << "��� : " << output << endl;
	}

};

class Minus :public Calculate {
public:
	void result(double x_in, double y_in) {
		output = x_in - y_in;
		cout << "----------------------\n";
		cout << "��� : " << output << endl;
	}
};

class Divide :public Calculate {
public:
	void result(double x_in, double y_in) {
		output = x_in / y_in;
		cout << "----------------------\n";
		cout << "��� : " << output << endl;

	}
};

class Multi :public Calculate {
public:
	void result(double x_in, double y_in) {
		output = x_in * y_in;
		cout << "----------------------\n";
		cout << "��� : " << output << endl;

	}


};
double Calculate::output = 0;

int main() {
	double x, y;
	char c;
	string next = "AC";
	Calculate* why = new Calculate();

	while (1) {
		if (next == "EXIT") break;
		else if (next == "Y") {
			x = why->getOutput();
		}
		else if (next == "AC") {
			cout << "���ڸ� �Է��� �ּ���: ";
			cin >> x;
		}
		cout << "�����ڸ� �Է��� �ּ��� : ";
		cin >> c;
		cout << "���ڸ� �Է��� �ּ���: ";
		cin >> y;

		if (c == '+') {
			why = new Plus();
		}
		else if (c == '-') {
			why = new Minus();
		}
		else if (c == '/') {
			why = new Divide();
		}
		else if (c == '*') {
			why = new Multi();
		}

		why->result(x, y);

		cout << "������ ��� �����Ͻðڽ��ϱ�? (Y: ���, AC: �ʱ�ȭ ,EXIT: ���� )";
		cin >> next;
	}
}