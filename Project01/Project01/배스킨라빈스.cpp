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
			cout << "������ �Է��ϼ��� : ";
			cin >> num_in;

			if (num_in < 0 || num_in>3) {
				cout << "1~3������ ���ڸ� �Է��ϼ���";
			}

			for (int i = 0; i < num_in; i++) {
			
				cout << num_plus++;
				cout << endl;
				if (num_plus > 31) {
				cout << "��ǻ���� �¸�";
				break;
				}
			}
				user = false;
		}
			

			else {
				cout << "��ǻ�Ͱ� �θ� ����!\n";
				int randNumber = rand();
				num_in = randNumber % 3 + 1;

				for (int i = 0; i < num_in; i++) {
					cout << num_plus++<<"\n";
					if (num_plus > 31) {
						
						cout << "������� �¸�";
						break;
					}
				}
				
				user = true;
				
			}
			
		}

	}