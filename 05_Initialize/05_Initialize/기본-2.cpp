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
	p.y = 5; // Ȥ�� p={3,5};
	cout << "x��ǥ: " << p.x << ", y��ǥ: " << p.y;
}

//ofstream("���ϸ�", ios::app) �̾��