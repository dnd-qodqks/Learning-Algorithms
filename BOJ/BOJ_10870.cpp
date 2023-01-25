#include <iostream>

using namespace std;

size_t fibonacci(size_t N);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	size_t N;
	cin >> N;
	cout << fibonacci(N);

	return 0;
}

size_t fibonacci(size_t N)
{
	if (N == 0) return 0;
	else if (N == 1) return 1;

	return fibonacci(N - 1) + fibonacci(N - 2);
}