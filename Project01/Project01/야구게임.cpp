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

	cout << "�߱�����\n";
	
	while (1) {
		cout << "\n1 ~ 9 ������ ���� 3���� �Է��Ͻÿ�(�̿��� ����:����)\n";
		cin >> user[0] >> user[1] >> user[2];
		
		

			if (user[0] < 0 || user[0]>9) {
				cout << "������ �����Ͽ����ϴ�.\n";
				break;
			}
			if (user[1] < 0 || user[1]>9) {
				cout << "������ �����Ͽ����ϴ�.\n";
				break;
			}
			if (user[2] < 0 || user[2]>9) {
				cout << "������ �����Ͽ����ϴ�.\n";
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
			cout << count << "�� ���� �������ϴ�.\n";
			break;
		}
		else {
			cout << "Strike: " << strike << "    Ball: " << ball;
			strike = 0;
			ball = 0;
		}
	}
}