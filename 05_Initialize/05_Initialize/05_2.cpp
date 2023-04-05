#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string name;
	int num;

	ofstream file("member.txt");
	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요.\n";
	if (file.is_open()){
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "번째 회원 : ";
			cin >> name;
			cin >> num;
			file << name << " " << num << endl;
		}

			file.close();
		
}
		cout << "------회원 명부 파일 읽기------\n";
		
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