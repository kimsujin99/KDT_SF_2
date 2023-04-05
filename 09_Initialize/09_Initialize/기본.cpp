// 멤버: 변수(필드), 메소드를 통틀어서 멤버라고 한다.

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
	static void static_method() { //name = "aaa"; // 일반메소드라면 오류가 뜨지 않는다. 스텍티 멤버는 일반 코드라서 불가능 
	
		static_var = 5;
	}
};

int Person::static_var = 0; // static_var 이 int형이기 때문에 int를 써줌


int main() {
	Person::static_var = 1; //이렇게 객체를 생성하지 않고 접근할 수 있다.
	Person::static_method();

	cout << Person::static_var << " " << Person::static_method<<"\n";

	Person p;
	p.name = "홍길동";
	p.static_var = 2;
	p.sleep();
	p.static_method();

	Person p2;
	p2.name = "성춘향";// 다른 값을 할당 받는다. 
	p2.static_var = 5;//static는 같은 값으로 가진다.
	

	cout << p.name <<" "<< p2.name<<"\n"; // 홍길동 성춘향 출력
	cout << p.static_var<< " " << p2.static_var; // 5 5출력
}

// 일반 멤버들은 어느 순간에 메모리가 잡힐까?  객체가 생성될 때 메모리가 잡힘( 객체 필수)
// static멤버들은 어느 순간에 메모리가 잡힐까? 클래스가 읽히는 순간 메모리가 잡힘
*/


//인원수 세기
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
	Person p("가나다");
	Person p2("라마바");
	cout << "인원: " << Person::getCnt() << endl;
}