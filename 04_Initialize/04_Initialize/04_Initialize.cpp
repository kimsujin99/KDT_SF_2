
/*
vector

#include <iostream>
#include <vector> //stl

int main()
{
    std::vector<int>v = { 1,2,3 }; // vector 선언과 초기화(크기가 3, 원소가 1,2,3)
    std::vector<std::string>v2;//문자형 선언

    std::vector<int>v3(5);// 크기가 5인 배열을 듦, 모든 값을 0으로 초기화
    std::vector<int>v4(4, 1);// {1,1,1,1} 크기가 4 모두 1로 초기화
    std::vector<std::string>v5(5,"aaa");

    std::vector<int>v6;
    v6.assign(5, 2); //크기가 5인 2로 모두 초기화

    std::vector<int>v7(6);
    v7.assign(5, 2);// 크기가 5인 2로 모두 초기화

}


//벡터함수

#include <iostream>
#include <vector> 

int main()
{
    std::vector<int>v(7);
    v.assign(5, 2);
    //v.size(): 벡터의 사이즈를 가져온다.
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";//벡터라[]사용가능  out of range 오류가 발생해도 오류를 잡아주지 않는다. 
        std::cout << v.at(i) << "\n";//오류를 잡아줌 at으로써서 사용하자
    
    }
    v.push_back(6);// vector의 제일 마지막에 원소를 push 함-> 크기가 하나 늘어남 {2,2,2,2,2,6}
    v.push_back(6);// {2, 2, 2, 2, 2,6, 7}
    v.pop_back();// 제일 마지막 원소를 꺼낸다.->{2,2,2,2,2,6}
    v.insert(v.begin(), 5);// {5,2,2,2,2,2,6}
    // v.insert(v.begin()+1, 5);
    v.erase(v.begin(), v.begin() + 3);//0,1,2번째 인덱스까지 지운다 {2,2,2,6}
    
    for (int i = 0; i < 7; i++) {
    std::cout << v.at(i) << "\n";
    }
    v.clear();
    return 0;
}



#include <iostream>
#include <vector> 

int main()
{
    std::vector<std::vector<int>>v2 = { {1,2},{3,4} }; //2차원배열
    for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < v2.at(i).size(); j++) {
            std::cout << v2.at(i).at(j) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
#include <iostream>
#include <vector> 
using std::cout; // cout만 접근을 풀러준다.
using namespace std;
*/

//namespace

#include <iostream>
#include <vector> 
using namespace std;

namespace wooriBank {
    int balance;
    double deposit(int money) {
        double money_d = (double)money;
        return money_d + 0.05 * money_d;
    }
}

namespace hanabank {
    int balance;
    double deposit(int money) {
        double money_d = (double)money;
        return money_d + 0.05 * money_d;
    }
}
int main()
{

