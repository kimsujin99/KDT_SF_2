#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int x;
    cout << "Enter numbers (enter -1 to stop): ";
    while (cin >> x && x != -1) {
        numbers.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    cout << "Sum of elements: " << sum << endl;
    return 0;

}