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
		cout << "� ���⸦ �ݰڽ��ϱ�?(1.Į  2.��)";
	}
	void WeaponComputer(){}
};


	class Knife:public Character {
	public:
		Knife(string name) :Character(name) {
		}
		void KnifeUser() {
			cout << "Į ���\n" << this->name << "��(��) ��ǻ�͸� �����߽��ϴ�\n";
			cout << "��ǻ���� hp�� 5��ŭ �����մϴ�.\n";
			hp = hp - 5;
			cout << "��ǻ���� hp:" << hp << "\n";
			
		}
		void KnifeCom() {
			cout << "Į ���\n" << "��ǻ�Ͱ� " << name << "(��)�� �����߽��ϴ�\n";
			cout << name << "�� hp�� 5��ŭ �����մϴ�.\n";
			hp2 = hp2 - 5;
			cout << name << "�� hp: " << hp2 << "\n";

		}
	};


	class Gun :public Character {
	public:
		Gun(string name) :Character(name) {
		}
		void GunUser() {
			cout << "�� ���\n" << name << "��(��) ��ǻ�͸� �����߽��ϴ�\n";
			cout << "��ǻ���� hp�� 10��ŭ �����մϴ�.\n";
			hp = hp - 10;
			cout << "��ǻ���� hp:" << hp << "\n";
		}
		void GunCom() {
			cout << "�� ���\n" << "��ǻ�Ͱ� " << name << "(��)�� �����߽��ϴ�\n";
			cout << name << "�� hp�� 10��ŭ �����մϴ�.\n";
			hp2 = hp2 - 10;
			cout << name << "�� hp: " << hp2 << "\n";

		}
	};

	class HP :public Character {
	public:
		HP(string name) :Character(name) {
		}
		void HPHP() {
			if (hp < 1) {
				cout << "��ǻ�Ͱ� �׾����ϴ�.\n";
				cout << this->name << "�¸�!";
				hp = 0;

			}
			if (hp2 < 1) {
				cout << this->name << "�� �׾����ϴ�.\n";
				cout << "��ǻ���� �¸�!";
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

			cout << "�̸��� �Է����ּ���: ";
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
					cout << "� ������ �ϰڽ��ϱ�? : (1. ���⼱�� 2. ����) ";
					cin >> act;


					if (act == 1) {
						weapon++;
						ch4->WeaponUser();
						cin >> choose;
						cout << "���⸦ �ݽ��ϴ�\n";
						user = false;
					}

					int* x = &choose;

					if (act == 2) {
						if (weapon == 0) {
							cout << "���Ⱑ �����ϴ�\n";
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
							cout << "���⸦ �ݽ��ϴ�\n";

						}
						int* y = &comchoose;
						user = true;


						if (num_in == 2) {
							if (comweapon == 0) {
								cout << "���Ⱑ �����ϴ�.\n";
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
	