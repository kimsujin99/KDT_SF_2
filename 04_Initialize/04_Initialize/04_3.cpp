#include <iostream>
#include <vector> 
using namespace std;


namespace seoul {
	string number = "02";
	string mark = "남산타워";
}

namespace busan {
	string number = "051";
	string mark = "광안대교";
}

using namespace busan;

int main()
{
	cout << "서울지역번호: " << seoul::number << " 서울 랜드마크: " << seoul::mark<<"\n";
	cout << "부산지역번호: " << number << " 부산 랜드마크: " << mark;
}