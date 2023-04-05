// #include<> 내가 만들지 않은 파일
// #include "" 내가 만든 파일

#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	
	Student p3("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	return 0;
}