#include<stdio.h>
#include<iostream>

using namespace std;

class Student
{
public:
    string name = "�趯��";
    int age = 30;
    int num =1111;



    void id() {
        cout << "�̸� : " << name << " " << "����: " << age << " " << "�й�: " << num << "\n";
    }

    void lunch() {
        cout << "������ �н�\n";
    }
};

class Kim : public Student {
public:
    string name="ȫ�浿";
      int age = 20;
    int num=1234;

    void id() {
        cout << "�̸� : " << name << " " << "����: " << age << " " << "�й�: " << num << "\n";
    }
    void lunch() {
        cout << "������ �谡�� ���\n";
    }
};

class Beak: public Student {
public:
    string name = "������";
    int age = 25;
    int num = 5678;

    void id() {
        cout << "�̸� : " << name << " "<< "����: " << age << " " << "�й�: " << num << "\n";
    }
    void lunch() { 
        cout << "������ ������ ����\n";
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
