#include <iostream>

using namespace std;

void sorting(size_t* N, size_t size);
int solution(size_t sum, size_t* N, size_t size);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	size_t N[9] = { 0, };
	size_t sum = 0;
	for (size_t i = 0; i < 9; i++)
	{
		cin >> N[i];

		sum += N[i];
	}

	solution(sum, N, 9);
	
	sorting(N, 9);
	for (size_t i = 0; i < 7; i++)
		cout << N[i] << "\n";

	return 0;
}

void sorting(size_t* N, size_t size)
{
	size_t tmp;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (N[i] < N[j])
			{
				tmp = N[i];
				N[i] = N[j];
				N[j] = tmp;
			}
		}
	}
}

int solution(size_t sum, size_t* N, size_t size)
{
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 1; j < 9; j++)
		{
			if (sum - N[i] - N[j] == 100)
			{
				N[i] = 100;
				N[j] = 100;
				return 0;
			}
		}
	}

	return -1;
}