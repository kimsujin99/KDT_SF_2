#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream file;
	ofstream file2("output.txt");
	file.open("hello.txt");
	string line;
	vector<string>lines;

	if (file.is_open() && file2.is_open()) {
		while (getline(file, line)) {
			lines.push_back(line);
		}

		for (int i = lines.size() - 1; i >= 0; i--) {
			file2 << lines[i] << std::endl;
		}

		file.close();
		file2.close();
	}
	else cout << "fail\n";
}