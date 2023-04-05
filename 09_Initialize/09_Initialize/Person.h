#pragma once //한번 읽혔다 싶으면 아래를 읽지 않는다

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


#endif // !__PERSON_H__ //정의되지 않으면 이쪽으로 온다.
