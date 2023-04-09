#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

class Character {
protected:
	string name;
	int weapon = 0;
	int knife = 0, gun = 0;

public:
	int hp = 20;
	int hp2 = 20;

	Character(string name) {
		this->name = name;
	}
};

class weaponchoose : public Character {
public:
	weaponchoose(string name) :Character(name) {
	}
	void WeaponUser() {
		cout << "어떤 무기를 줍겠습니까?(1.칼  2.총)";
	}
	void WeaponComputer(){}
};


	class Knife:public Character {
	public:
		Knife(string name) :Character(name) {
		}
		void KnifeUser() {
			cout << "칼 사용\n" << this->name << "이(가) 컴퓨터를 공격했습니다\n";
			cout << "컴퓨터의 hp가 5만큼 감소합니다.\n";
			hp = hp - 5;
			cout << "컴퓨터의 hp:" << hp << "\n";
			
		}
		void KnifeCom() {
			cout << "칼 사용\n" << "컴퓨터가 " << name << "(을)를 공격했습니다\n";
			cout << name << "의 hp가 5만큼 감소합니다.\n";
			hp2 = hp2 - 5;
			cout << name << "의 hp: " << hp2 << "\n";

		}
	};


	class Gun :public Character {
	public:
		Gun(string name) :Character(name) {
		}
		void GunUser() {
			cout << "총 사용\n" << name << "이(가) 컴퓨터를 공격했습니다\n";
			cout << "컴퓨터의 hp가 10만큼 감소합니다.\n";
			hp = hp - 10;
			cout << "컴퓨터의 hp:" << hp << "\n";
		}
		void GunCom() {
			cout << "총 사용\n" << "컴퓨터가 " << name << "(을)를 공격했습니다\n";
			cout << name << "의 hp가 10만큼 감소합니다.\n";
			hp2 = hp2 - 10;
			cout << name << "의 hp: " << hp2 << "\n";

		}
	};

	class HP :public Character {
	public:
		HP(string name) :Character(name) {
		}
		void HPHP() {
			if (hp < 1) {
				cout << "컴퓨터가 죽었습니다.\n";
				cout << this->name << "승리!";
				hp = 0;

			}
			if (hp2 < 1) {
				cout << this->name << "가 죽었습니다.\n";
				cout << "컴퓨터의 승리!";
				hp2 = 0;
			}
		}
	};



		int main() {

			string name;
			bool user = true;
			int weapon = 0;
			int comweapon = 0;
			srand((unsigned int)time(NULL));

			cout << "이름을 입력해주세요: ";
			cin >> name;
			Character* ch1 = new Character(name);
			Knife* ch2 = new Knife(name);
			Gun* ch3 = new Gun(name);
			weaponchoose* ch4 = new weaponchoose(name);
			Character ch5(name);
			HP* ch6 = new HP(name);


			while (1) {

				if (user) {
					int choose;
					int act;

					cout << "\n" << "[" << name << "turn]\n";
					cout << "어떤 동작을 하겠습니까? : (1. 무기선택 2. 공격) ";
					cin >> act;


					if (act == 1) {
						weapon++;
						ch4->WeaponUser();
						cin >> choose;
						cout << "무기를 줍습니다\n";
						user = false;
					}

					int* x = &choose;

					if (act == 2) {
						if (weapon == 0) {
							cout << "무기가 없습니다\n";
							user = false;
						}
						else {
							if (*x == 1) {
								ch2->KnifeUser();
								ch6->HPHP();
								user = false;
							}
							else {
								ch3->GunUser();
								ch6->HPHP();
								user = false;
							}
						}


					}if (ch5.hp == 0) {
						break;
					}


					else {
						int num_in;
						int comchoose;

						cout << "\n" << "[computer turn]\n";
						int randNumber = rand();
						num_in = randNumber % 2 + 1;

						if (num_in == 1) {
							comweapon = 1;
							comchoose = randNumber % 2 + 1;
							cout << "무기를 줍습니다\n";

						}
						int* y = &comchoose;
						user = true;


						if (num_in == 2) {
							if (comweapon == 0) {
								cout << "무기가 없습니다.\n";
								user = true;
							}

							else {
								if (*y == 1) {
									ch2->KnifeCom();
									ch6->HPHP();
									user = true;
								}
								else {
									ch3->GunCom();
									ch6->HPHP();
									user = true;
								}
							}
						}
						if (ch5.hp2 == 0) {
							break;
						}

					}
				}
			}
		}
	