#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Row;
    int count = 0;

    cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요.";
    cin >> Row;
    vector <vector<int>>arr(Row, vector<int>(Row, 0));


    int x = 0;
    int y = Row / 2;

    for (int i = 0; i < Row * Row; i++) {
        count++;
     
        if (x < 0) {
            x += Row;
        }
        if (y >= Row) {
            y -= Row;
        }
        arr[x][y] = count;

        if (count % Row == 0) {
            x++;
            continue;
        }

        x--;
        y++;
    }
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Row; j++)
            cout << arr[i][j] << " ";
            cout << endl;
    }
}