#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	size_t N;
	cin >> N;

	size_t cnt_prime_num = 0;
	size_t tmp;

	for (size_t i = 0; i < N; i++)
	{
		cin >> tmp;

		for (size_t j = 2; j <= tmp; j++)
		{
			if (tmp == j) cnt_prime_num++;
			if (tmp % j == 0) break;
		}
	}

	cout << cnt_prime_num;

	return 0;
}