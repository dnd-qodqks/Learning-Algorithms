#include <iostream>
#define SIZE 10
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	size_t T;
	cin >> T;

	size_t num[SIZE];
	size_t tmp;
	for (size_t i = 0; i < T; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
			cin >> num[j];

		for (size_t k = 0; k < SIZE; k++)
		{
			for (size_t l = 0; l < SIZE; l++)
			{
				if (num[k] > num[l])
				{
					tmp = num[k];
					num[k] = num[l];
					num[l] = tmp;
				}
			}
		}

 		cout << num[2] << "\n";
	}

	return 0;
}