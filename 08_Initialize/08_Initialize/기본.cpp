#include<iostream>

using namespace std;


class Person { //�߻� �޼ҵ带 ������ �ִٸ� �߻� Ŭ����(�ϳ��� ������)
				// �ڽ����� �����ֱ� �������� ����
public :
	void sleep() {
		cout << "test�Լ� �Դϴ�.";
	}

	virtual void test() = 0; // �߻�޼ҵ�
};

class Student : public Person { // �߻� �޼ҵ带 ���� �ؾ���! ���ϸ� �Ʒ� main�� ��ü�� ���� �� ����.
								// ���� 2���� �ִٸ� 2�� ��� ������ �ؾ� ���� �� ����
								// �����ϱ� ���ؼ��� �������̵�
								// �߻�޼ҵ� �־���? �ڽ�Ŭ�������� ������ �����ϵ��� �ϱ� ���ؼ�
	
public:
	void test() {
		cout << "test�Լ� �Դϴ�.\n";
	}

};


int main() {

	Person p = person(); // ��������: �߻�Ŭ�����δ� ��ü�� ���� �� ����.
	
	Student s = Student(); // �������̵� ���� ��ü�� ���� �� �־���.
}




// ����

#include<iostream>
using namespace std;

class RemoteControl {
public:
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
};

class TV : public RemoteControl {
public:
	void turnOn() {
		cout << "tv Ŵ\n";
	}
	void turnOff() {
		cout << "tv ��\n";
	}
};

class radio : public RemoteControl {
public:
	void turnOn() {
		cout << "radio Ŵ\n";
	}
	void turnOff() {
		cout << "radio ��\n";
	}
};


int main() {

}






//��/�ٿ�ĳ����

#include<iostream>
using namespace std;

class Person {
public:
	void test() {
		cout << "test\n";
	}
};

class Student :public Person {
public:
	void test_stu() {
		cout << "test_stu\n";
	}
};


int main() {
	Person p = Student();

	//��ĳ����: �θ�Ŭ������ Ŭ������ �ڽ� Ŭ������ �ν��Ͻ��� ����Ű�� ��

	Student s;
	Person* p2 = &s; //��ĳ���� / p2�� �����޸𸮰� �ƴϴ�. ���� �ּҸ� ���� ��***
	p2->test();
	//p2->test_stu();// person���� �ִ� �� ����


	Person* p3 = new Student(); // ��ĳ���� Person *p = new Student(); -> new�� �ֱ⿡ �����޸��̴�(delete �ʿ�)

	Person* pp = new Person(); // ���� �ٿ �ƴ� �׳� ��ü
	pp->test();

	//�ٿ�ĳ����: ��ĳ���� �Ȱ��� �����·� �ǵ����� ��

	Student* stu = (Student*)p3;  //�ٿ�ĳ����  // int a= 3; double d = (double)a�� ����
	stu->test();
	stu->test_stu();

	//(14��° ��) Student st = (Student)p; //��ĳ������ �ƴ϶� �ȵȴ�.

	delete p3;

}