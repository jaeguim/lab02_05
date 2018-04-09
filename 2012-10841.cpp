#include <iostream>
#include <vector>
#include <algorithm>          
#include <functional>

using namespace std;

void main() {
	std::vector<int> numberlist;
	int num;
	std::cout << "숫자를 입력해주세요/입력종료시 ctrl+d" << std::endl;
	while (std::cin >> num) {
		numberlist.push_back(num);
	}
	std::sort(numberlist.begin(), numberlist.end(), std::greater<int>());
	for (auto i : numberlist) {
		std::cout << i << std::endl;
	}
	system("pause");
}
