#include <iostream>

using namespace std;

int main(void)
{
	size_t total_human = 0;
	size_t max_human = 0;
	size_t tmp = 0;

	for (size_t i = 0; i < 10; i++)
	{
		cin >> tmp;
		total_human -= tmp;
		cin >> tmp;
		total_human += tmp;

		if (max_human < total_human)
			max_human = total_human;
	}

	cout << max_human;

	return 0;
}