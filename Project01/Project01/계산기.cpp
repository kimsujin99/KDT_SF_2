/*클래스의 상속, 정적멤버, 업케스팅. 가상함수를 사용해 다음과 같이 간단한 사칙연산을 수행하는 계산기 만들기
도출된 결과를 후속 계산*/

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
		cout << "\n" << "----------------------------" << "\n" << "결과 : " << output << "\n";
	}
};

class Minus:public Calculate {
public:
	Minus(double x_in, double y_in) :Calculate(x_in, '-', y_in) {

	}
	void result() {
		output= x_in - y_in;
		cout << "\n" << "----------------------------" << "\n" << "결과 : " << output << "\n";
		
	}
};

class Divide:public Calculate {
public:
	Divide(double x_in, double y_in) :Calculate(x_in, '/', y_in) {

	}
	void result() {
		output = x_in / y_in;
		cout << "\n" << "----------------------------" << "\n" << "결과 : "<< output << "\n";
	}
};

class Multi:public Calculate {
public:
	Multi(double x_in, double y_in) :Calculate(x_in, '*', y_in) {

	}
	void result() {
		output = x_in * y_in;
		cout << "\n" << "----------------------------" << "\n" << "결과 : "<< output << "\n";
	}
};

double Calculate::output = 0;

int main() {
	
		double x, y;
		char c;
		cout << "숫자를 입력해 주세요: ";
		cin >> x;
		cout << "연산자를 입력해 주세요 : ";
		cin >> c;
		cout << "숫자를 입력해 주세요: ";
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
			cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화 ,EXIT: 종료 )";
			cin >> next;
			if (next == "Y") {
				cout << "연산자를 입력해 주세요 : ";
				cin >> c;
				cout << "숫자를 입력해 주세요: ";
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

				cout << "숫자를 입력해 주세요: ";
				cin >> x;
				cout << "연산자를 입력해 주세요 : ";
				cin >> c;
				cout << "숫자를 입력해 주세요: ";
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
