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

	if (file.is_open()) {//if(!file.fail())�� ���� 
		/*file >> word1 >> word2; // ���⸦ �������� ����: �� �ܾ�� ��µ�
		cout << word1 << word2
		getline(file, line);
		cout << line << endl;

	 };*/
		while (getline(file, line)) {// ��� �� ������
		cout << line << endl;
	}
}
	else cout << "fail\n";
	file.close();

	ofstream file2("bye.txt");// ������ ���� ������ �ʾƵ� ������
	if (!file2.fail()) {
		file2 << "bye world!\n" << "bye bye\n";

	}
	else cout << "file to open file\n";

	file2.close();
	
/*
	// ���� �� �о� ����ϴ� �Լ�
	string line;
	getline(cin, line); 
	cout << line;
*/

}