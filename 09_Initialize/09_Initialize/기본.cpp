// ���: ����(�ʵ�), �޼ҵ带 ��Ʋ� ������ �Ѵ�.

/*
#include<iostream>
using namespace std;

class Person {
public:
	static int static_var;
	string name;
	void sleep(){
		name = "aaa";
		static_var = 5;
	}
	static void static_method() { //name = "aaa"; // �Ϲݸ޼ҵ��� ������ ���� �ʴ´�. ����Ƽ ����� �Ϲ� �ڵ�� �Ұ��� 
	
		static_var = 5;
	}
};

int Person::static_var = 0; // static_var �� int���̱� ������ int�� ����


int main() {
	Person::static_var = 1; //�̷��� ��ü�� �������� �ʰ� ������ �� �ִ�.
	Person::static_method();

	cout << Person::static_var << " " << Person::static_method<<"\n";

	Person p;
	p.name = "ȫ�浿";
	p.static_var = 2;
	p.sleep();
	p.static_method();

	Person p2;
	p2.name = "������";// �ٸ� ���� �Ҵ� �޴´�. 
	p2.static_var = 5;//static�� ���� ������ ������.
	

	cout << p.name <<" "<< p2.name<<"\n"; // ȫ�浿 ������ ���
	cout << p.static_var<< " " << p2.static_var; // 5 5���
}

// �Ϲ� ������� ��� ������ �޸𸮰� ������?  ��ü�� ������ �� �޸𸮰� ����( ��ü �ʼ�)
// static������� ��� ������ �޸𸮰� ������? Ŭ������ ������ ���� �޸𸮰� ����
*/


//�ο��� ����
#include<iostream>
using namespace std;

class Person {
	static int cnt;
	string name;
public:
	Person(string name) {
		this->name = name;
		plusCnt();
	}

	static int getCnt() {
		return cnt;
	}
	
	void plusCnt() {
		cnt++;
	}
};

int Person::cnt = 0;

int main() {
	Person p("������");
	Person p2("�󸶹�");
	cout << "�ο�: " << Person::getCnt() << endl;
}