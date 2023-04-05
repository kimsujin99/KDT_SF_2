#pragma once

#ifndef __CANDY_H__
#define __CANDY_H__ 
#include<iostream>
#include"Snack.h"

class Candy :public Snack {
	string taste;
public:
	Candy(string taste);
	void showInfo();
};

#endif
