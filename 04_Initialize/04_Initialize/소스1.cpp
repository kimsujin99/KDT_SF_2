#include <iostream>
#include <vector>

int main()

{
	std::cout << "����ڰ� �Է��� ���� ���ϱ�" << "\n";
	int a = 0;
	
	std::vector<int>v;
    for (int i = 0; i < v.size(); i++) {
		std::cout << "���ڸ� �Է��ϼ���. (0: exit) ";
		std::cin >> v[i];
		v.push_back(v[i]);
		if (v[i] == 0) {
			break;
		}
        
		a += v[i];
       
	}


	std::cout << "����ڰ� �Է��� ���� ���� : " << a << "\n";
}
