/*Ŭ������ ���, �������, ���ɽ���. �����Լ��� ����� ������ ���� ������ ��Ģ������ �����ϴ� ���� �����
����� ����� �ļ� ���*/

#include<iostream>
using namespace std;

class Calculate {

	

protected:
	
	double x_in;
	double y_in;
	char c_in;
	static double output;

public :
	static double getOutput() {
		return output=0;
	}
	Calculate(double x_in, char c_in, double y_in) {
		this->x_in = x_in;
		this->c_in = c_in;
		this->y_in = y_in;
	}

	virtual void result() = 0;


};


class Plus:public Calculate {
public:
	Plus(double x_in, double y_in) :Calculate(x_in, '+', y_in) {

	}

	void result() {

		output = x_in + y_in;	
		cout << "\n" << "----------------------------" << "\n" << "��� : " << output << "\n";
	}
};

class Minus:public Calculate {
public:
	Minus(double x_in, double y_in) :Calculate(x_in, '-', y_in) {

	}
	void result() {
		output= x_in - y_in;
		cout << "\n" << "----------------------------" << "\n" << "��� : " << output << "\n";
		
	}
};

class Divide:public Calculate {
public:
	Divide(double x_in, double y_in) :Calculate(x_in, '/', y_in) {

	}
	void result() {
		output = x_in / y_in;
		cout << "\n" << "----------------------------" << "\n" << "��� : "<< output << "\n";
	}
};

class Multi:public Calculate {
public:
	Multi(double x_in, double y_in) :Calculate(x_in, '*', y_in) {

	}
	void result() {
		output = x_in * y_in;
		cout << "\n" << "----------------------------" << "\n" << "��� : "<< output << "\n";
	}
};

double Calculate::output = 0;

int main() {
	
		double x, y;
		char c;
		cout << "���ڸ� �Է��� �ּ���: ";
		cin >> x;
		cout << "�����ڸ� �Է��� �ּ��� : ";
		cin >> c;
		cout << "���ڸ� �Է��� �ּ���: ";
		cin >> y;
		Plus p = Plus(x,y);
		Minus m = Minus(x, y);
		Divide d = Divide(x, y);
		Multi mu = Multi(x, y);
		if (c == '+') {
			p.result();
		}
		if (c == '-') {
			m.result();
		}
		if (c == '/') {
			d.result();
		}
		if (c == '*') {
			mu.result();
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
					p.result();
				}
				if (c == '-') {
					m.result();
				}
				if (c == '/') {
					d.result();
				}
				if (c == '*') {
					mu.result();
				}
			}

			if (next == "AC") {

				Calculate::getOutput();

				cout << "���ڸ� �Է��� �ּ���: ";
				cin >> x;
				cout << "�����ڸ� �Է��� �ּ��� : ";
				cin >> c;
				cout << "���ڸ� �Է��� �ּ���: ";
				cin >> y;
				if (c == '+') {
					p.result();
				}
				if (c == '-') {
					m.result();
				}
				if (c == '/') {
					d.result();
				}
				if (c == '*') {
					mu.result();
				}

			}
			if (next == "EXIT") {
				break;
			}
		}
}
