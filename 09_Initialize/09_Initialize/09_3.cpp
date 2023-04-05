#include <iostream>
#include<vector>
using namespace std;
#include <string>


class Build {
protected:
	string name;
	static int count;


public:
	Build() {
		count++;
	}

	static int get_count() {
		return count;
	}
	virtual void showInfo() {
		cout << "error" << endl;
	}

};



 int main() {
	 vector<Build*> Buildnum;

     string name;
     string stack;
     string input;


	 for (int i = 0; i < 5; i++) {

		 cout << "이름쌓기 ~ 이름쌓기 ~ :  ";
		 getline(cin, input);
		 stack += input;

	 }
	 cout << "게임 종료! 4명까지 성공했습니다!";
}