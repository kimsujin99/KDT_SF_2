#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string name;
	int num;

	ofstream file("member.txt");
	cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���.\n";
	if (file.is_open()){
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "��° ȸ�� : ";
			cin >> name;
			cin >> num;
			file << name << " " << num << endl;
		}

			file.close();
		
}
		cout << "------ȸ�� ��� ���� �б�------\n";
		
		ifstream files;
		files.open("member.txt");

		string line;

		if (files.is_open()) {
			while (getline(files, line)) {
				cout << line << endl;
			}
		}
		else cout << "fail\n";
		files.close();

}