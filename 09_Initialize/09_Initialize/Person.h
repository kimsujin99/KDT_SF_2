#pragma once //�ѹ� ������ ������ �Ʒ��� ���� �ʴ´�

#ifndef __PERSON_H__
#define __PERSON_H__ 
#include<iostream>
using namespace std;

class Person {
	static int cnt;
	string name;
public:
	Person(string name);
	static int getCnt();
	void plusCnt();
};


#endif // !__PERSON_H__ //���ǵ��� ������ �������� �´�.
