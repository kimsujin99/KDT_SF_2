#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;




int main() {
	clock_t startTime = clock();


	string word;
	string word_in;
	word = "airplane";
	int count=1;

	while (1) {

		cout << word << "\n";
		cout << "���� �ܾ �Է��ϼ���: ";
		cin >> word_in;
		cout << "\n";

		int n = word.size();
		

		if (word[n - 1] == word_in[0]) {
			word += "->" + word_in;
			count++;
		}	
		
		else {
			cout << "�߸��� �Է��Դϴ�.\n";
		}

		

		clock_t endTime = clock();
		int time = (endTime - startTime) / CLOCKS_PER_SEC;
		if (time>30) {
			cout<<"Ÿ�ӿ���!\n";
			cout << "�� �Է��� �ܾ� ���� : " << count;
            break;
		}

}



}	




/*
   clock_t endTime = clock();
	cout << "�ɸ��ð�: " << (endTime - startTime) / CLOCKS_PER_SEC << "\n";

	//string���� ���� �ܾ �Ǿձ��ڿ� �� �ڱ��ڸ��������� ���
	string word = "hello";
	cout << word[0]; //h���
	int n = word.size();
	cout << word[n - 1]; // o���
	*/