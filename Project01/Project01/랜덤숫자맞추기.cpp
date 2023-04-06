#include<iostream>
#include<cstdlib>
#include<ctime>
#include <set>
using namespace std;

int main() {
    int num_user;
    int count = 0;
    set<int> used_num;

    cout << "숫자는 1~25까지의 숫자만 입력할 수 있습니다.\n";

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "번째의 번호를 입력하세요 : ";
        cin >> num_user;

        if (num_user > 25 || num_user < 1) {
            cout << "잘못된 숫자입니다. 다시 입력해주세요.\n";
            i--;
        }
        if (used_num.count(num_user)) {
            cout << "이미 입력된 숫자 입니다.\n";
            i--;
        }

        used_num.insert(num_user);


    }

    cout << "---------------------------\n" << "당첨번호 공개!\n";

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
    cout << "1~7등까지 결과가 나올 수 있습니다.\n";
    for (int k = 0; k < 8; k++) {
        if (count == k) {
            cout << "결과: " << 7 - k << "등입니다!";
        }
    }
}
