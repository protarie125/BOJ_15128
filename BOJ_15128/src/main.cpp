#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long p1, q1, p2, q2;
	cin >> p1 >> q1 >> p2 >> q2;

	auto p = p1 * p2;
	auto q = q1 * q2 * 2;

	cout << (0 == p % q ? 1 : 0);

	return 0;
}