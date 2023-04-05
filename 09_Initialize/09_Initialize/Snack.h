#pragma once

#ifndef __SNACK_H__
#define __SNACK_H__
#include<iostream>
using namespace std;

class Snack {
protected:
	string name;
	static int count;
public:
	Snack();
	static int get_count();
	virtual void showInfo();
};

#endif // !__SNACK_H__