// 01_Initialize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//주석
#include <iostream>
//"#" 전처리기 컴파일하기 전에 필요한 작업들을 수행하기 위해 정의=기초작업
//include: 외부에 있는 것들을 사용하기 위해 선언하는 것
//iostream:입출력을 제공하는 라이브러리

int main() //가장 먼저 호출되는 함수
{
    std::cout << "Hello World!\n";
    //return 0; 끝났다는 뜻 써도 되고 안써도 됨
    //std::cout : 출력하는 친구 

    //int a = 1;
    //bool bool123 = true;
    //bool123 = false;
    //bool bool123 = "abc"; //글자가 있으면 true라고 인식

    //char char123 = 'a';
    //int int123 = 1;
    //float float123 = 0.1;


    int a = 1;
    int b = 2;
    std::cout << a + b;
    std::cout << "\n";

    float f = 1.2;
    float g = 3.9;
    std::cout << f + g;

    bool c1 = true;
    std::cout << c1;
    std::cout << "\n";

    bool c2 = false;
    std::cout << c2;
    std::cout << "\n";

    char d = 'a';
    std::cout << d;
    std::cout << "\n";

    char e = 'b';
    std::cout << e;
    std::cout << "\n";

    std::string str1 = "안녕?";
    std::cout << str1;
    std::cout << "\n";

    std::string str2 = "반가워";
    std::cout << str2;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
