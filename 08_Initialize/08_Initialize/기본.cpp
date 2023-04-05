#include<iostream>

using namespace std;


class Person { //추상 메소드를 가지고 있다면 추상 클래스(하나라도 있으면)
				// 자식한테 물려주기 위함으로 쓰임
public :
	void sleep() {
		cout << "test함수 입니다.";
	}

	virtual void test() = 0; // 추상메소드
};

class Student : public Person { // 추상 메소드를 구현 해야함! 안하면 아래 main에 객체를 만들 수 없다.
								// 만약 2개가 있다면 2개 모두 구현을 해야 만들 수 있음
								// 구현하기 위해서는 오버라이딩
								// 추상메소드 왜쓸까? 자식클래스에서 강제로 구현하도록 하기 위해서
	
public:
	void test() {
		cout << "test함수 입니다.\n";
	}

};


int main() {

	Person p = person(); // 오류원인: 추상클래스로는 객체를 만들 수 없다.
	
	Student s = Student(); // 오버라이딩 시켜 객체를 만들 수 있었다.
}




// 예제

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
		cout << "tv 킴\n";
	}
	void turnOff() {
		cout << "tv 끔\n";
	}
};

class radio : public RemoteControl {
public:
	void turnOn() {
		cout << "radio 킴\n";
	}
	void turnOff() {
		cout << "radio 끔\n";
	}
};


int main() {

}






//업/다운캐스팅

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

	//업캐스팅: 부모클래스의 클래스로 자식 클래스의 인스턴스를 가리키는 것

	Student s;
	Person* p2 = &s; //업캐스팅 / p2는 동적메모리가 아니다. 단지 주소만 남을 뿐***
	p2->test();
	//p2->test_stu();// person에만 있는 거 접근


	Person* p3 = new Student(); // 업캐스팅 Person *p = new Student(); -> new가 있기에 동적메모리이다(delete 필요)

	Person* pp = new Person(); // 업도 다운도 아닌 그냥 객체
	pp->test();

	//다운캐스팅: 업캐스팅 된것을 원상태로 되돌리는 것

	Student* stu = (Student*)p3;  //다운캐스팅  // int a= 3; double d = (double)a와 같이
	stu->test();
	stu->test_stu();

	//(14번째 줄) Student st = (Student)p; //업캐스팅이 아니라 안된다.

	delete p3;

}