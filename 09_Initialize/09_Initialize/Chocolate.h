#pragma once

#ifndef __CHOCOLATE_H__
#define __CHOCOLATE_H__
#include<iostream>
#include"Snack.h"

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string shape);
	void showInfo();
};


#endif