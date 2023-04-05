#include<iostream>
using namespace std;


class Snack {
	string price;
	string name;
	string make;
public:
	/*Snack( string name, string price, string make) {
		this->price = price;
		this->name = name;
		this->make = make;
	}*/
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

class Candy : public Snack {
	string flavor;
public:
	void candy(string name) {
		cout << name << "\n";
	}

	void Flavor() {
		cout << "µş±â¸À";
	}
};

class Chocolate :public Snack {
	string shape;
public:
void chocolate(string name) {
	cout << name << "\n";
}
	void Shape() {
		cout<<"ÇÏÆ®¸ğ¾ç";
	}
};


int main() {

	Snack* s = new Candy();
	Candy* can = (Candy*)s;
	can->Flavor();
	can->candy("»çÅÁ ");
	can->Flavor();
	can->candy("Äµµğ ");
	
	delete s;

	Snack* S = new Chocolate();
	Chocolate* cho = (Chocolate*)s;
	cho->Shape();
	cho->chocolate("ÃÊÄÚ ");
	cho->Shape();
	cho->chocolate("ÃÊÄİ·¿ ");
	
	delete s;
}