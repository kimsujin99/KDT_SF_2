
#include<iostream>
using namespace std;

//Ŭ����: �ʵ�, �޼ҵ�, ������, �Ҹ��ڷ� ����
//������? ��ü�� ������ �� �ڵ����� ����Ǵ� �޼ҵ�
//�Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� �޼ҵ�

class Person {
public:
	Person() {
		cout << "������ �Դϴ�\n";
	}
	~Person() {
		cout << "�Ҹ��� �Դϴ�\n"; /// �Լ��� ������ ���� ������ �ȴ�(������!)
	}
};

int main() {
	Person p; // ���� �޸𸮴� ���� �� �ڵ����� ������ �ȴ�.'�������Դϴ�'�� �߰� ������ '�Ҹ��� �Դϴ�'�� ���..
	Person* p2 = new Person(); // �����޸��̱� ������ �ʿ���� �� ���� �������
	delete p2;// ->�Ҹ��ڵ� ȣ��ȴ�
    
	cout << "�ȳ�\n";

	return 0;
}



#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "������ �Դϴ�\n";
	}
	~Person() {
		cout << "�Ҹ��� �Դϴ�\n";
	}
};

class Student : public Person {
public:
	Student() :Person() {
		cout << "Student ������ �Դϴ�\n";
	}
	~Student() {//�θ�Ҹ��ڸ� ����!!
		cout << "Student �Ҹ��� �Դϴ�\n";
	}
};

int main(){
	Student s = Student();// �θ� �Ҹ��ڰ� �� �Ʒ�
	//������ �Դϴ�
	//Student �������Դϴ�

	Student *s2 = new Student();
	//������ �Դϴ�
	//Student �������Դϴ�
	
	delete s2;
	//Student �Ҹ��� �Դϴ�
	//�Ҹ����Դϴ�
	cout << "�ȳ�\n";

	//Student �Ҹ��� �Դϴ�
	//�Ҹ����Դϴ�
}



//�����Լ�
//�����Լ��� �ڽ�Ŭ������ ������ �� ���̶�� ����ϴ� �Լ�
//���� �����Լ�: ������ �ȵǾ� �ִ� �Լ�


#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "������ �Դϴ�\n";
	}
	virtual ~Person() {
		cout << "�Ҹ��� �Դϴ�\n";
	}
	
// ���������Լ�:virtual void sleep()=0;
	virtual void sleep() {//�����Լ�: ���� ���ε��� �ϱ� ����->�����Ҷ� 
		cout << "���ڱ�" << endl;
	}

};


class Student : public Person {
public:
	Student() :Person() {
		cout << "Student ������ �Դϴ�\n";
	}
	void sleep() {
		cout << "10�ÿ� ���ڱ�\n";
	}
	~Student() {
		cout << "Student �Ҹ��� �Դϴ�\n";
	}

};


int main() {

	Student s = Student();
	s.sleep();//10�ÿ� ���ڱ� Student�� �Ҵ��� �޾ұ� ����

	Person* s2 = new Student();//���ɽ���
	s2->sleep();// virtual�� ���� �ڽ��� Ȯ����->�����Լ��� �ƴϾ��ٸ� ���ڱⰡ ��µ�����
				// �����Լ��� 10�ÿ� ���ڱⰡ ����� ��
	delete s2; //Student �Ҹ��ڰ� ������ �׷��� Person�� virtual�� �ٿ���
}
