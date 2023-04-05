#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

	srand(time(NULL));
	int num_in;
	int num_plus = 1;
	bool user = true;

	while (num_plus<32)
	{
		if (user) {
			cout << "개수를 입력하세요 : ";
			cin >> num_in;

			if (num_in < 0 || num_in>3) {
				cout << "1~3사이의 숫자를 입력하세요";
			}

			for (int i = 0; i < num_in; i++) {
			
				cout << num_plus++;
				cout << endl;
				if (num_plus > 31) {
				cout << "컴퓨터의 승리";
				break;
				}
			}
				user = false;
		}
			

			else {
				cout << "컴퓨터가 부른 숫자!\n";
				int randNumber = rand();
				num_in = randNumber % 3 + 1;

				for (int i = 0; i < num_in; i++) {
					cout << num_plus++<<"\n";
					if (num_plus > 31) {
						
						cout << "사용자의 승리";
						break;
					}
				}
				
				user = true;
				
			}
			
		}

	}