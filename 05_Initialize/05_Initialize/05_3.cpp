#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	ifstream file("member.txt");

		string name, pw, name_in, pw_in;
		cout << "�̸��� �Է��ϼ���.";
		cin >> name_in;
		cout << "��й�ȣ�� �Է��ϼ���.";
		cin >> pw_in;

		bool is_login = false;

		if (file.is_open()) {

			while (file >> name >> pw) {
				if (name_in == name && pw_in == pw) {
					is_login = true;
					break;
				}
			}

			if (is_login)cout << "�α��� ����\n";
			else cout << "�α��� ����\n";
		}
		else cout << "���� ����\n";
			file.close();
		}

