#include<iostream>
#include<cstdlib>
#include<ctime>
#include <set>
using namespace std;



int main() {

	clock_t startTime = clock();

	set<string> used_word;
	string word="airplane";
	string word_in;
	int count=0;
	

	while (1) {

		cout << word << "\n";
		cout << "���� �ܾ �Է��ϼ���: ";
		cin >> word_in;

		if (used_word.count(word_in)) {
			cout << "�ߺ��� �ܾ� �Դϴ�\n"<<"\n";
			continue;
		}

		cout << "\n";
		

		int n = word.size();

		
		if (word[n - 1] == word_in[0]) {
			used_word.insert(word_in);
			word += "->" + word_in;	
			count++;
		}	

		else {
			cout << "�߸��� �Է��Դϴ�.\n"<<"\n";
		}

		clock_t endTime = clock();
		int time = (endTime - startTime) / CLOCKS_PER_SEC;
		if (time >= 30) {
			cout << "Ÿ�ӿ���!\n";
			cout << "�� �Է��� �ܾ� ���� : " << count;
			break;
		}
	}
}	