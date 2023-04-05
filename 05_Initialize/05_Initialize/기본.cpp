#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	ifstream file;
	file.open("hello.txt");
  
	string word1, word2;
	string line;

	if (file.is_open()) {//if(!file.fail())과 동의 
		/*file >> word1 >> word2; // 띄어쓰기를 기준으로 읽음: 한 단어씩만 출력됨
		cout << word1 << word2
		getline(file, line);
		cout << line << endl;

	 };*/
		while (getline(file, line)) {// 모두 다 나오게
		cout << line << endl;
	}
}
	else cout << "fail\n";
	file.close();

	ofstream file2("bye.txt");// 파일을 직접 만들지 않아도 생성됨
	if (!file2.fail()) {
		file2 << "bye world!\n" << "bye bye\n";

	}
	else cout << "file to open file\n";

	file2.close();
	
/*
	// 줄을 다 읽어 출력하는 함수
	string line;
	getline(cin, line); 
	cout << line;
*/

}