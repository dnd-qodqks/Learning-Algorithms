#include <iostream>

using namespace std;

size_t euclidean(size_t n1, size_t n2);

int main(void)
{
	size_t n1, n2;
	cin >> n1 >> n2;

	size_t common_factor = euclidean(n1, n2);
	size_t common_multiple = n1 * n2 / common_factor;

	cout << common_factor << "\n";
	cout << common_multiple << "\n";

	return 0;
}

size_t euclidean(size_t n1, size_t n2)
{
	size_t R = n1 % n2;
	
	if (R == 0) return n2;
	
	return euclidean(n2, R);
}