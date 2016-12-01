#include <iostream>
#include <vector>
static constexpr int NUM = 7368792;
bool number[NUM];

int main()
{
	std::vector<int> results;
	int m, n;
	while(std::cin >> m >> n && n && m) {
		for (int i = 0; i < NUM; i++) number[i] = true;
		for (int i = 0; i < n + 1; i++) {
			while (!number[m++]) {}
			number[--m] = 0;
			int year = m;
			while ((year += m) < NUM) number[year] = 0;
		}
		results.push_back(m);
	}
	for (auto& x : results) {
		std::cout << x << std::endl;
	}
	return 0;
}