
#include<iostream>
using namespace std;

//클래스: 필드, 메소드, 생성자, 소멸자로 구성
//생성자? 객체가 생성될 때 자동으로 실행되는 메소드
//소멸자 : 객체가 소멸될 때 자동으로 실행되는 메소드

class Person {
public:
	Person() {
		cout << "생성자 입니다\n";
	}
	~Person() {
		cout << "소멸자 입니다\n"; /// 함수가 닫히기 전에 실행이 된다(마지막!)
	}
};

int main() {
	Person p; // 정적 메모리는 닫힐 때 자동으로 해제가 된다.'생성자입니다'가 뜨고 마지막 '소멸자 입니다'가 뜬다..
	Person* p2 = new Person(); // 동적메모리이기 때문에 필요없을 때 해제 해줘야함
	delete p2;// ->소멸자도 호출된다
    
	cout << "안녕\n";

	return 0;
}



#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "생성자 입니다\n";
	}
	~Person() {
		cout << "소멸자 입니다\n";
	}
};

class Student : public Person {
public:
	Student() :Person() {
		cout << "Student 생성자 입니다\n";
	}
	~Student() {//부모소멸자를 읽음!!
		cout << "Student 소멸자 입니다\n";
	}
};

int main(){
	Student s = Student();// 부모 소멸자가 맨 아래
	//생성자 입니다
	//Student 생성자입니다

	Student *s2 = new Student();
	//생성자 입니다
	//Student 생성자입니다
	
	delete s2;
	//Student 소멸자 입니다
	//소멸자입니다
	cout << "안녕\n";

	//Student 소멸자 입니다
	//소멸자입니다
}



//가상함수
//가상함수란 자식클래스가 재정의 할 것이라고 기대하는 함수
//순수 가상함수: 구현이 안되어 있는 함수


#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "생성자 입니다\n";
	}
	virtual ~Person() {
		cout << "소멸자 입니다\n";
	}
	
// 순수가상함수:virtual void sleep()=0;
	virtual void sleep() {//가상함수: 동적 바인딩을 하기 위해->실행할때 
		cout << "잠자기" << endl;
	}

};


class Student : public Person {
public:
	Student() :Person() {
		cout << "Student 생성자 입니다\n";
	}
	void sleep() {
		cout << "10시에 잠자기\n";
	}
	~Student() {
		cout << "Student 소멸자 입니다\n";
	}

};


int main() {

	Student s = Student();
	s.sleep();//10시에 잠자기 Student에 할당을 받았기 때문

	Person* s2 = new Student();//업케스팅
	s2->sleep();// virtual을 보고 자식을 확인함->가상함수가 아니었다면 잠자기가 출력되지만
				// 가상함수라서 10시에 잠자기가 출력이 됨
	delete s2; //Student 소멸자가 안읽힘 그래서 Person에 virtual을 붙여줌
}
