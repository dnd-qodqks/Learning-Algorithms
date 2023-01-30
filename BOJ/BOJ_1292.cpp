#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	size_t A, B;
	cin >> A >> B;

	vector<size_t> sequence;
	for (size_t i = 1; i <= B; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			sequence.push_back(i);
		}
	}

	size_t sum = 0;
	for (size_t i = A - 1; i < B; i++)
		sum += sequence[i];

	cout << sum;

	return 0;
}