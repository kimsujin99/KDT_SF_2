
/*
    {
    
    //실습1-1

    std::cout << "5단 출력"<<"\n";

        for (int i = 1; i < 10; i++) {

        std::cout << "5 * " << i << " = " << 5 * i << "\n";
    }

    // 실습1-2

           std::cout << "1~9단 출력" << "\n";

    for (int i = 1; i < 10; i++) {
        std::cout << "-----"<< i <<"단-------" << "\n";

        for (int a = 1; a < 10; a++) {

            std::cout << "i * " << a << " = " << i * a << "\n";

        }
    }
}

     // 실습2

    int a;
    int b = 0;
    std::cout << "1부터 n까지의 합 구하기" << "\n";
    std::cout << "숫자(양의정수)를 입력하세요 : ";
    std::cin >> a;

    for (int i = 1; i <= a; i++) {
        b = b + i;
    }
    std::cout << "1부터 " << a << "까지의 합은 : " << b;
}
}

    //실습3

    std::cout << "5단 출력" << "\n";
    int i = 1;
    while (i < 10) {
        std::cout << "5 * " << i << " = " << 5 * i << "\n";
        i++;
    }

    std::cout << "1~9단 출력" << "\n";
    int y = 1;
    while (y < 10) {
        
        std::cout << "-----" << y << "단-------" << "\n";
        int a = 1;
        while (a < 10) {
            std::cout << y << "*" << a << " = " << y * a << "\n";
            a++;
        }
        y++;
     
     // 실습4

    int a;
    int b = 0;
    std::cout << "사용자가 입력한 숫자 더하기"<<"\n";
       while (1) {
           std::cout << "숫자를 입력하세요 (0: exit)";
           std::cin >> a;
           b = b + a;
           if (a == 0) {
               break;
            }
           }        
           std::cout << "사용자가 입력한 수의 합은 : " << b;
    }}


#include <iostream>

int add(int num, int num1) {

    int a = num + num1;
    return a;
}

int minus(int num2, int num3) {

    int m = abs(num2 - num3);
    return m;
}

int multiple(int num4, int num5) {

    int result = num4 * num5;
    return result;
}

double divide(int num6, int num7) {
    double d = (double)num6 / (double)num7;
    return d;
}

int main() {

    std::cout << add(10, 5)<<"\n";
    std::cout << minus(20, 5) << "\n";
    std::cout << multiple(6, 5) << "\n";
    std::cout <<(double)divide(4, 5) << "\n";

}
    */

#include <iostream>

void qwerty(int n) {
   
    if (n % 2 == 0) { std::cout << "짝수"; }
    else { std::cout << "홀수"; }
}

int main() {
    int n;
    std::cin >> n;
    qwerty(n);
}