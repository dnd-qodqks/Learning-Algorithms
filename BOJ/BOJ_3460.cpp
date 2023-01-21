#include <iostream>
#define MAX_SIZE 20

using namespace std;

int main(void)
{
	size_t T, n;
	cin >> T;

	for (size_t i = 0; i < T; i++)
	{
		size_t bit[MAX_SIZE] = { 0, };
		size_t idx = 0;

		cin >> n;
		while (true)
		{
			if (n == 1)
			{
				bit[idx] = 1;
				break;
			}

			bit[idx] = n % 2;
			n /= 2;
			idx++;
		}

		for (size_t i = 0; i < MAX_SIZE; i++)
		{
			if (bit[i] == 1)
				cout << i << " ";
		}

		cout << "\n";
	}

	return 0;
}