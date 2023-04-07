#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){

	int user[3] = {};
	int num[3];
	int strike=0;
	int ball=0;
	int count = 0;

	srand((unsigned int)time(NULL));

	 
	for (int i = 0; i < 3; i++) {
		num[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j] && i != j) {
				i--;
			}
		}
	}

	cout << "야구게임\n";
	
	while (1) {
		cout << "\n1 ~ 9 사이의 숫자 3개를 입력하시오(이외의 숫자:종료)\n";
		cin >> user[0] >> user[1] >> user[2];
		
		

			if (user[0] < 0 || user[0]>9) {
				cout << "게임을 종료하였습니다.\n";
				break;
			}
			if (user[1] < 0 || user[1]>9) {
				cout << "게임을 종료하였습니다.\n";
				break;
			}
			if (user[2] < 0 || user[2]>9) {
				cout << "게임을 종료하였습니다.\n";
				break;
			}
		
			
			
		
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (user[i] == num[j]) {
					if (i == j) {
						strike++;
					}
					else {
						ball++;
					}
					
				}
			}
		}

		count++;

		if (strike == 3) {
			cout << count << "번 만에 맞혔습니다.\n";
			break;
		}
		else {
			cout << "Strike: " << strike << "    Ball: " << ball;
			strike = 0;
			ball = 0;
		}
	}
}