#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include <string>

using namespace std;

int main() {
    int num_user;
 
    srand((unsigned int)time(NULL));
    vector<int> used_num ;
    used_num.clear();
    int x;

    cout << "���ڴ� 1~25������ ���ڸ� �Է��� �� �ֽ��ϴ�.\n";
         
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "��°�� ��ȣ�� �Է��ϼ��� : ";
        cin >> num_user;
  
        auto it = find(used_num.begin(), used_num.end(), num_user);
        if (it != used_num.end()) {
            cout << "�̹� �Էµ� ���� �Դϴ�.\n";
            i--;
        }

        used_num.push_back(num_user);

        if (num_user > 25 || num_user < 1) {
            cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n";
            i--;
        }
       
 

    }
 

    cout << "---------------------------\n" << "��÷��ȣ ����!\n";

    int Cnum[25] = {};
    

    for (int i = 0; i < 6; i++) {
        Cnum[i] = rand() % 25 + 1;
 
        for (int j = 0; j < i; j++) {
            if (Cnum[i] == Cnum[j]) {
                i--;
                break;
            }
        }
    }
    
int count = 0;

    for (int i = 0; i < 6; i++) {
       cout << Cnum[i] << " ";
        for (int j = 0; j < 6; j++) {
            if (Cnum[i] == used_num[j]) {
                count++;
            }
        }
    }

    cout << "\n";
    cout << "1~7����� ����� ���� �� �ֽ��ϴ�.\n";
    cout << "���: " << 7 - count << "���Դϴ�!";
}
