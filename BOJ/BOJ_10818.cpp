#include <iostream>

using namespace std;

int main(void)
{
	size_t N;
	cin >> N;

	int* nums = new int[N];
	for (size_t i = 0; i < N; i++)
		cin >> nums[i];

	int min = nums[0];
	int max = nums[N - 1];
	for (size_t i = 0; i < N; i++)
	{
		if (min > nums[i])
			min = nums[i];

		if (max < nums[i])
			max = nums[i];
	}

	cout << min << " " << max;

	delete[] nums;

	return 0;
}