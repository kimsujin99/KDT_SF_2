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
		return this->output;
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
		cout << "��� : " <<output << endl;
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
	Calculate* why = new Calculate();
	double x, y;
	char c;
	cout << "���ڸ� �Է��� �ּ���: ";
	cin >> x;
	cout << "�����ڸ� �Է��� �ּ��� : ";
	cin >> c;
	cout << "���ڸ� �Է��� �ּ���: ";
	cin >> y;

	
	Plus *p = new Plus();
	Minus *m = new Minus();
	Divide*d = new Divide();
	Multi *mu = new Multi();
	
	if (c == '+') {
		p->result(x,y);
	}
	if (c == '-') {
		m->result(x, y);
	}
	if (c == '/') {
		d->result(x, y);
	}
	if (c == '*') {
		mu->result(x, y);
	}

	while (1) {
		string next;
		cout << "\n" << "----------------------------" << "\n";
		cout << "������ ��� �����Ͻðڽ��ϱ�? (Y: ���, AC: �ʱ�ȭ ,EXIT: ���� )";
		cin >> next;
		if (next == "Y") {
			cout << "�����ڸ� �Է��� �ּ��� : ";
			cin >> c;
			cout << "���ڸ� �Է��� �ּ���: ";
			cin >> y;
			

			if (c == '+') {
				x= why->getOutput();
				p->result(x,y);
			}
			if (c == '-') {
				x = why->getOutput();
				m->result(x, y);
			}
			if (c == '/') {
				x = why->getOutput();
				d->result(x, y);
			}
			if (c == '*') {
				x = why->getOutput();
				mu->result(x, y);
			}
		}

		if (next == "AC") {

			Calculate::getOutput2();

			cout << "���ڸ� �Է��� �ּ���: ";
			cin >> x;
			cout << "�����ڸ� �Է��� �ּ��� : ";
			cin >> c;
			cout << "���ڸ� �Է��� �ּ���: ";
			cin >> y;
			if (c == '+') {
				p->result(x, y);
			}
			if (c == '-') {
				m->result(x, y);
			}
			if (c == '/') {
				d->result(x, y);
			}
			if (c == '*') {
				mu->result(x, y);
			}

		}
		if (next == "EXIT") {
			break;
		}
	}
}