#include<iostream>
#include<cstdlib>
#include<ctime>
#include <set>
using namespace std;



int main() {

	set<string> used_word;
	string word="airplane";
	string word_in;
	int count=0;
	clock_t startTime = clock();

	while (1) {
		
		cout << word << "\n";
		cout << "다음 단어를 입력하세요: ";
		cin >> word_in;

		clock_t endTime = clock();
		int time = (endTime - startTime) / CLOCKS_PER_SEC;
		if (time > 30) {
			cout << "타임오버!\n";
			cout << "총 입력한 단어 개수 : " << count;
			break;
		}
		

		if (used_word.count(word_in)) {
			cout << "중복된 단어 입니다\n"<<"\n";
			continue;
		}


		int n = word.size();

		
		if (word[n - 1] == word_in[0]) {
			used_word.insert(word_in);
			cout << "\n";
			word += "->" + word_in;	
			count++;
		}	
		else {
			cout << "잘못된 입력입니다.\n"<<"\n";
		}
	} 
}	