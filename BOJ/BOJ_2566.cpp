#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	size_t max = 0;
	size_t max_row = 0;
	size_t max_col = 0;
	size_t i = 0;
	size_t j = 0;
	size_t num = 0;

	while (cin >> num)
	{
		if (num > max)
		{
			max = num;
			max_col = i;
			max_row = j;
		}

		if (i == 8)
			i = 0, j += 1;
		else
			i += 1;

		cin.ignore();
		if (j == 9) break;
	}

	cout << max << endl;
	cout << max_row+1 << " " << max_col+1 << endl;

	return 0;
}
