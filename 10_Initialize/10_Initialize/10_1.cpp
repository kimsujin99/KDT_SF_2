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

}​