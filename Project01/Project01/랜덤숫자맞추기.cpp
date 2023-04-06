#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {





}


/*	srand(time(NULL));// 호출할때마다 다른 값이 나오게 된다.
	int num = rand();
	cout << num << "\n";
	int tmp = num % 25 + 1;
	cout << tmp << endl;
	cout << RAND_MAX;
*/

/*
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void) {


    int iNum[45] = {};
    for (int i = 0; i < 45; i++) {
        iNum[i] = i + 1;
    }

    srand(time(NULL));


    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++) {
        idx1 = rand() % 45;
        idx2 = rand() % 45;

        iTemp = iNum[idx1];
        iNum[idx1] = iNum[idx2];
        iNum[idx2] = iTemp;
    }


    for (int i = 0; i < 5; i++) {
        cout <<  iNum[i] <<" " << endl;
    }

}*/