#include<iostream>
using namespace std;

class Calculate {

protected:

	double x_in = 0.0;
	double y_in = 0.0;
	static double output;

public:
	virtual void result() {};

	double getOutput() {
		cout << "--------------------------------------------------\n";
		cout << "결과 : " << output << endl;

	}

	static double getOutput2() {
		return output = 0;
	}
};


class Plus :public Calculate {
public:

	void result() {
		output = x_in + y_in;
		cout << getOutput;
	}

};

class Minus :public Calculate {
public:
	void result() {
		output = x_in - y_in;
	}
};

class Divide :public Calculate {
public:
	void result() {
		output = x_in / y_in;

	}
};

class Multi :public Calculate {
public:
	void result() {
		output = x_in * y_in;

	}


};
double Calculate::output = 0;

int main() {
	Calculate* why = new Calculate();
	double x, y;
	char c;
	cout << "숫자를 입력해 주세요: ";
	cin >> x;
	cout << "연산자를 입력해 주세요 : ";
	cin >> c;
	cout << "숫자를 입력해 주세요: ";
	cin >> y;


	Plus* p = new Plus();
	Minus* m = new Minus();
	Divide* d = new Divide();
	Multi* mu = new Multi();

	if (c == '+') {
		p->result();
	}
	if (c == '-') {
		m->result();
	}
	if (c == '/') {
		d->result();
	}
	if (c == '*') {
		mu->result();
	}

	while (1) {
		string next;
		cout << "\n" << "----------------------------" << "\n";
		cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화 ,EXIT: 종료 )";
		cin >> next;
		if (next == "Y") {
			cout << "연산자를 입력해 주세요 : ";
			cin >> c;
			cout << "숫자를 입력해 주세요: ";
			cin >> y;

			if (c == '+') {
				x = why->getOutput();
				p->result();
			}
			if (c == '-') {
				m->result();
			}
			if (c == '/') {
				d->result();
			}
			if (c == '*') {
				mu->result();
			}
		}

		if (next == "AC") {

			Calculate::getOutput2();

			cout << "숫자를 입력해 주세요: ";
			cin >> x;
			cout << "연산자를 입력해 주세요 : ";
			cin >> c;
			cout << "숫자를 입력해 주세요: ";
			cin >> y;
			if (c == '+') {

			}
			if (c == '-') {
				m->result();
			}
			if (c == '/') {
				d->result();
			}
			if (c == '*') {
				mu->result();
			}

		}
		if (next == "EXIT") {
			break;
		}
	}
}