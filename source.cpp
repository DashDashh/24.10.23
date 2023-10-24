#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int top = n;
	int steps = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = n * 3 + 1;
			top = std::max(n, top);
		}
		++steps;
	}
	std::cout << steps << ' ' << top;
	return 0;
}