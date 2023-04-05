#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//private �ڱ� �ڽ�(�ش� Ŭ���� ��)������ ���� ����
//protected ��� �ڷ��� : �ڱ� �ڽŰ�, �ڽ� Ŭ�������� ���� ����
//public �������� ���� ����
class Person { //Student�� �θ� Ŭ����, ���� Ŭ����, ���� Ŭ����
protected:
	string name;
	int age;
	// �ʵ�, �޼ҵ�, ������
public: // private, protected
	//Person() { return ???; } // �⺻ ������
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	Person() {}
	/*Person(int age) {
	}*/
	//Person p = Person("��ҿ�");
	//Person() {}
	//Person p = Person();
	void sleep() { cout << "���ڱ� zzzz"; }
};

class Student : public Person {
	// �θ� Ŭ�������� ��ӹ��� ������� ������������ �Ѱ踦 ������.
	string stu_id;
protected:
	string name;
	int age;
public:
	//Student �����ڸ� �ۼ����� ���� ���. �⺻ ����
	//Student(){ Person(); ~~~~~; return; }
	Student(string name, int age) : Person(name, age) {
		//this->name = name;
		//this->age = age;
		//�θ�Ŭ������ �����ڸ� ������.
		this->stu_id = "11111111111";
		//return ��;
	}
	void study() {
		sleep();
		cout << "�����ϱ�";
	}
};

int main() {
	//Person p = Person("��ҿ�"); // ��ü�� �����ϴ� ����.
	//Person p = Person();

	//Person p = Person(1,3);
	Student s = Student("�褵���Ť�", 99);
	s.sleep();

	return 0;
}