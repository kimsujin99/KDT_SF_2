#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	ifstream file("member.txt");

		string name, pw, name_in, pw_in;
		cout << "이름을 입력하세요.";
		cin >> name_in;
		cout << "비밀번호를 입력하세요.";
		cin >> pw_in;

		bool is_login = false;

		if (file.is_open()) {

			while (file >> name >> pw) {
				if (name_in == name && pw_in == pw) {
					is_login = true;
					break;
				}
			}

			if (is_login)cout << "로그인 성공\n";
			else cout << "로그인 실패\n";
		}
		else cout << "읽지 못함\n";
			file.close();
		}

