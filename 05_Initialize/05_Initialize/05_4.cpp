#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream member("member.txt");
	string name, pw, name_in, pw_in;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name_in;

	cout << "��й�ȣ�� �Է��ϼ���: ";
	cin >> pw_in;

	bool is_login = false;

	if (member.is_open()) {
		while (member >> name >> pw) {
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}

		if (is_login) {
			cout << "�α��� ����\n";

			string num_in, num;

			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> num_in;

			ifstream member_tel_r("member_tel.txt");

			bool is_modify = false;
			string member_tel_tmp = "";

			if (member_tel_r.is_open()) {

				while (member_tel_r >> name >> num) {
					string line = name + " ";
					if (name_in == name) {
						is_modify = true;
						line += num_in;
					}
					else {
						line += num;
					}
					member_tel_tmp += line + "\n";
				}
			}

			member_tel_r.close();


			ofstream member_tel_w;

			if (is_modify) {
				member_tel_w.open("member_tel.txt");
				member_tel_w << member_tel_tmp;
			}
			else {
				member_tel_w.open("member_tel.txt", ios::app);
				if (member_tel_w.is_open()) {
					member_tel_w << name_in << " " << num_in << endl;
				}
			}

			member_tel_w.close();
		}
		else cout << "�α��� ����\n";
	}
	else cout << "������ ���� ���Ͽ����ϴ�.\n";

	member.close();

}