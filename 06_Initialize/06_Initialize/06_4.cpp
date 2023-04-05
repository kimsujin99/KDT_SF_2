
#include <iostream>

using namespace std;

class Character {
	string name;
	int level = 0, item_num = 0;

public:
	Character(string name) {
		this->name = name;
		cout << name << " ĳ���Ͱ� ���� �Ǿ����ϴ�.";
	}

	void setName(string name) {
		this->name = name;
		cout << "new name : " << this->name << endl;
	}

	void levelUp() {
		level++;
		cout << "level up!!\n";
		cout << "���� ������ : " << level << endl;
	}

	void itemUp() {
		item_num++;
		cout << "�������� ȹ���߽��ϴ�!!\n";
		cout << "���� ������ ������ : " << item_num << endl;
	}

	void useItem() {
		if (item_num < 1) {
			cout << "�������� ����� �� �����ϴ�.\n";
			return;
		}
		item_num--;
		cout << "�������� ����߽��ϴ�!!\n";
		cout << "���� ������ ������ : " << item_num << endl;
	}

	void printInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << level << endl;
		cout << "������ ���� : " << item_num << endl;
	}

};

int main() {
	string name, new_name;
	char action;

	cout << "�̸��� �Է����ּ���: ";
	cin >> name;

	Character ch1(name);

	while (1) {
		cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) ";
		cin >> action;

		if (action == '0') break;

		switch (action) {
		case '1':
			cout << "�� �̸��� �Է����ּ��� : ";
			cin >> new_name;
			ch1.setName(new_name);
			break;
		case '2':
			ch1.levelUp();
			break;
		case '3':
			ch1.itemUp();
			break;
		case '4':
			ch1.useItem();
			break;
		case '5':
			ch1.printInfo();
			break;
		default:
			cout << "0���� 5���� �Է����ּ���.\n";
		}
	}

}