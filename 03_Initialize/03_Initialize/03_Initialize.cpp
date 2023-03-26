
#include <iostream>

/*
int main()
{
    int num[2][3] = { {2, 2, 2},{1, 23, 3} };
    std::string alpha[2][4] = { {"a","b","c","d"},{"e","f","g","h"} };


    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            std::cout << num[i][j]<<" ";
        }
            std::cout << "\n";
    }
}

int num2[3] = { 1,2,3 };
for (int i = 0; i < 3; i++) {
    std::cout << num2[i] << " ";

}

==

for (auto n : num2) {
    std::cout << n << " ";
}
std::cout << "\n";


for (int i = 0; i < 3; i++) {
    std::cin >> num2[i];

}

==

for (auto &n : num2) {
    std::cin >> n ;
}
std::cout << "\n";


//2차원 배열 for each
for (auto &arr: alpha) {
    for (auto &a : arr) {//&가 있을 지 없을 지 헷갈릴때에는 걍 쓰기
        std::cout << a << " ";
    }
    std::cout << "\n";
}
*/


/*
int main()
{
    int n = 3;
    int n2 = 5;
    int* p = &n;

    std::cout << p << "\n"; //n의 주소값
    std::cout << *p << "\n";//셀 값

    n = 10;
    std::cout << p << "\n";
    std::cout << *p << "\n";

    int a = 5;
    int& num = a; //a의 별명은 num
}
*/
int main() {
    int n = 3;
    int* p = &n; //동적 메모리 아님 n을 가리키는데 n은 동적이 아니기에

    //동적 메모리
    int* p = new int;
    delete p; 


    int num;
    std::cin >> num;
    int* arr = new int[num];
    delete[] arr;

    int* arr = new int[num];
    for (int i = 0; i < num; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            std::cout << arr2[i][j] << " "<<"\n";


        }
    }for (int i = 0; i < num; i++) {
        delete[] arr2[i];
    }
    delete[] arr2;
}