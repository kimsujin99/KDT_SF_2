#include<iostream>
#include<cstdlib>
#include<ctime>
#include <set>
using namespace std;

int main() {
    int num_user;
    int count = 0;
    set<int> used_num;

    cout << "���ڴ� 1~25������ ���ڸ� �Է��� �� �ֽ��ϴ�.\n";

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "��°�� ��ȣ�� �Է��ϼ��� : ";
        cin >> num_user;

        if (num_user > 25 || num_user < 1) {
            cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n";
            i--;
        }
        if (used_num.count(num_user)) {
            cout << "�̹� �Էµ� ���� �Դϴ�.\n";
            i--;
        }

        used_num.insert(num_user);


    }

    cout << "---------------------------\n" << "��÷��ȣ ����!\n";

    int Cnum[25] = {};


    srand((unsigned int)time(NULL));

    for (int i = 0; i < 6; i++) {
        Cnum[i] = rand() % 25 + 1;

        for (int j = 0; j < i; j++) {
            if (Cnum[i] == Cnum[j]) {
                i--;
                break;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << Cnum[i] << " ";

        for (int j = 0; j < 6; j++) {
            if (Cnum[i] == num_user) {
                count++;
                break;

            }
            
        }
        
    }
    cout << "\n";
    cout << "1~7����� ����� ���� �� �ֽ��ϴ�.\n";
    for (int k = 0; k < 8; k++) {
        if (count == k) {
            cout << "���: " << 7 - k << "���Դϴ�!";
        }
    }
}
