#include<iostream>
using namespace std;


class Snack {
	string price;
	string name;
	string make;
public:
	Snack(string name) {
		this->price=price;
		this->name=name;
		this->make=make;
	}
	string getprice() {
		return price;
	 }
	string getname() {
		return name;
	}
	string getmake() {
		return make;

	}
};

class Candy:public Snack {
	string flavor;

public:
	Candy(string name) :Snack(name) {

	}
	string getFlavor() {
		return flavor;
	}
};

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string name):Snack(name) {

	}
	string getShape() {
		return shape;
	}
};



int main(){
	Snack s[2] = { Candy("�޴�"), Chocolate("�׸�") };
	cout <<"�̸�: "<< s[0].getname()<<" ����: "<< s[0].getprice() <<" ȸ���̸�: "<< s[0].getmake() <<  endl;
	cout << "�̸�: " << s[1].getname()  << endl;
	

}