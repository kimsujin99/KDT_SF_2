#include<stdio.h>
#include<iostream>

using namespace std;

class Student
{
public:
    string name = "김땡땡";
    int age = 30;
    int num =1111;



    void id() {
        cout << "이름 : " << name << " " << "나이: " << age << " " << "학번: " << num << "\n";
    }

    void lunch() {
        cout << "점심은 학식\n";
    }
};

class Kim : public Student {
public:
    string name="홍길동";
      int age = 20;
    int num=1234;

    void id() {
        cout << "이름 : " << name << " " << "나이: " << age << " " << "학번: " << num << "\n";
    }
    void lunch() {
        cout << "점심은 김가네 김밥\n";
    }
};

class Beak: public Student {
public:
    string name = "가나다";
    int age = 25;
    int num = 5678;

    void id() {
        cout << "이름 : " << name << " "<< "나이: " << age << " " << "학번: " << num << "\n";
    }
    void lunch() { 
        cout << "점심은 백종원 피자\n";
    }
};

int main()
{
    Student student;
    Kim kim;
    Beak beak;
    student.id();
    student.lunch();
    kim.id();
    kim.lunch();
    beak.id();
    beak.lunch();
}
