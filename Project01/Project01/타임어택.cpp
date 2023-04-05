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
		cout << "다음 단어를 입력하세요: ";
		cin >> word_in;
		cout << "\n";

		int n = word.size();
		

		if (word[n - 1] == word_in[0]) {
			word += "->" + word_in;
			count++;
		}	
		
		else {
			cout << "잘못된 입력입니다.\n";
		}

		

		clock_t endTime = clock();
		int time = (endTime - startTime) / CLOCKS_PER_SEC;
		if (time>30) {
			cout<<"타임오버!\n";
			cout << "총 입력한 단어 개수 : " << count;
            break;
		}

}



}	




/*
   clock_t endTime = clock();
	cout << "걸린시간: " << (endTime - startTime) / CLOCKS_PER_SEC << "\n";

	//string으로 들어온 단어에 맨앞글자와 맨 뒤글자를가져오는 방법
	string word = "hello";
	cout << word[0]; //h출력
	int n = word.size();
	cout << word[n - 1]; // o출력
	*/