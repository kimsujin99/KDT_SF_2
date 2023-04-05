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
	cout << "이름을 입력해주세요 : ";
	cin >> name_in;
	cout << name_in << "캐릭터가 생성 되었습니다.\n";
	Character Character1(name_in, level_in, item_in);
	


	while (1) {
		cout  << "어떤 동작을 실행하시겠습니까? (0:종료)";
		cin >> act;
		
		if (act == 1) {
			cout << "새 이름을 입력해 주세요 : ";
			cin >> name_in;
			Character1.setName(name_in);
			cout << "이름이 변경되었습니다.\n" << "new name : " << name_in<<"\n";
		}
		else if (act == 2) {
			cout << "level up!\n";
			Character1.Level();
			cout << "현재 레벨" << Character1.getLEVEL() << "\n";
		}
		else if (act == 3) {
			cout << "아이템을 얻었습니다!" << "\n";
			Character1.Item_num();
			cout << "현재 아이템 개수 : " << Character1.getITEM_NUM() << "\n";
		}
		else if (act == 4) {
			cout << "아이템을 사용했습니다!" << "\n";
			Character1.Item();
			cout << "현재 아이템 개수 : " << Character1.getITEM() << "\n";
		}
		else if (act == 5) {

			cout << "이름 : " << name_in << "\n" << "레벨 : " << Character1.getLEVEL() << "\n" << "아이템 개수: " << Character1.getITEM() << "\n";

		}
		else if (act == 0) {

			break;
		}
	}
}