// #include<> ���� ������ ���� ����
// #include "" ���� ���� ����

#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
	Person p("��ҿ�");
	Person p2("ä����");

	cout << "�ο� : " << Person::getCnt() << endl;
	
	Student p3("ä����");

	cout << "�ο� : " << Person::getCnt() << endl;
	return 0;
}