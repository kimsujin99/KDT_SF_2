#include <iostream>
#include<string>
using namespace std;

class Character {
	string name;
	int level;
	int item_num;

public:

	Character(string name, int level, int item_num) {
		this->name = name;
		this->level = level;
		this->item_num = item_num;
}

	void setName(string name) {
		this->name = name;
 }

	void Level() {
		this->level += 1;
	}

	int getLEVEL() {
		return this->level;
	}

	void Item_num() {
		 item_num += 1;
	}
	int getITEM_NUM() {
		return item_num;
	}
	
	void Item() {
		item_num -= 1;
	}

	int getITEM() {
		return item_num;
	}
};

int main() {
	string name_in;
	int level_in=0;
	int item_in=0;
	int act;
	cout << "�̸��� �Է����ּ��� : ";
	cin >> name_in;
	cout << name_in << "ĳ���Ͱ� ���� �Ǿ����ϴ�.\n";
	Character Character1(name_in, level_in, item_in);
	


	while (1) {
		cout  << "� ������ �����Ͻðڽ��ϱ�? (0:����)";
		cin >> act;
		
		if (act == 1) {
			cout << "�� �̸��� �Է��� �ּ��� : ";
			cin >> name_in;
			Character1.setName(name_in);
			cout << "�̸��� ����Ǿ����ϴ�.\n" << "new name : " << name_in<<"\n";
		}
		else if (act == 2) {
			cout << "level up!\n";
			Character1.Level();
			cout << "���� ����" << Character1.getLEVEL() << "\n";
		}
		else if (act == 3) {
			cout << "�������� ������ϴ�!" << "\n";
			Character1.Item_num();
			cout << "���� ������ ���� : " << Character1.getITEM_NUM() << "\n";
		}
		else if (act == 4) {
			cout << "�������� ����߽��ϴ�!" << "\n";
			Character1.Item();
			cout << "���� ������ ���� : " << Character1.getITEM() << "\n";
		}
		else if (act == 5) {

			cout << "�̸� : " << name_in << "\n" << "���� : " << Character1.getLEVEL() << "\n" << "������ ����: " << Character1.getITEM() << "\n";

		}
		else if (act == 0) {

			break;
		}
	}
}