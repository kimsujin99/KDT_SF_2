#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Character {
	
	string name;
	int weapon = 0;
	int knife = 0, gun = 0;
	

	
public:
	int hp = 20;
	int hp2 = 20;



	Character(string name) {
		this->name = name;
	}



	void weaponchoose() {
		cout << "� ���⸦ �ݰڽ��ϱ�?(1.Į  2.��)" ;
	}

	void Knife() {
		knife++;
		cout << "Į ���\n" << this->name << "��(��) ��ǻ�͸� �����߽��ϴ�\n";
		cout << "��ǻ���� hp�� 5��ŭ �����մϴ�.\n";
		hp = hp - 5;
		cout << "��ǻ���� hp:" << hp << "\n";
	}

	void Gun() {
		gun++;
		cout << "�� ���\n" << name << "��(��) ��ǻ�͸� �����߽��ϴ�\n";
		cout << "��ǻ���� hp�� 10��ŭ �����մϴ�.\n";
		hp = hp - 10;
		cout << "��ǻ���� hp:" << hp << "\n";

	}

	void comKnife() {
		cout << "Į ���\n" << "��ǻ�Ͱ� " << name <<"(��)�� �����߽��ϴ�\n";
		cout << name << "�� hp�� 5��ŭ �����մϴ�.\n";
		hp2 = hp2 - 5;
		cout << name <<"�� hp: " << hp2 << "\n";
	}

	void comGun() {
		cout << "�� ���\n" << "��ǻ�Ͱ� " << name << "(��)�� �����߽��ϴ�\n";
		cout << name << "�� hp�� 10��ŭ �����մϴ�.\n";
		hp2 = hp2 - 10;
		cout << name << "�� hp: " << hp2 << "\n";
	}


	
	void HP() {
		if (hp < 1) {
			cout << "��ǻ�Ͱ� �׾����ϴ�.\n";
			cout << this->name << "�¸�!";
			hp = 0;
			
		}
		if (hp2 < 1) {
			cout << this->name<<"�� �׾����ϴ�.\n";
			cout <<"��ǻ���� �¸�!";
			hp2 = 0;
		}
		
	}

};

int main() {


	string name, new_name;
	bool user = true;
	int weapon = 0;
	int comweapon = 0;
	srand((unsigned int)time(NULL));

	cout << "�̸��� �Է����ּ���: ";
	cin >> name;
	Character ch1(name);

	while (1) {

		if (user) {
			int choose;
			int act;

			cout << "\n" << "[" << name << "turn]\n";
			cout << "� ������ �ϰڽ��ϱ�? : (1. ���⼱�� 2. ����) ";
			cin >> act;


			if (act == 1) {
				weapon++;
				ch1.weaponchoose();
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
					if (*x ==1) {
						ch1.Knife();
						ch1.HP();
						user = false;
					}
					else {
						ch1.Gun();
						ch1.HP();
						user = false;
					}

				}

			}
			if (ch1.hp == 0) {
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
							ch1.comKnife();
							ch1.HP();
							user = true;
						}
						else {
							ch1.comGun();
							ch1.HP();
							user = true;
						}

					}
				}
				if (ch1.hp2 == 0) {
					break;
				}
			}

		}
	}
}