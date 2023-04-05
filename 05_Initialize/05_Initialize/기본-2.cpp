#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Position {
	int x = 0;
	int y = 0;
	};

int main()
{
	Position p;
	p.x = 3;
	p.y = 5; // 혹은 p={3,5};
	cout << "x좌표: " << p.x << ", y좌표: " << p.y;
}

//ofstream("파일명", ios::app) 이어쓰기