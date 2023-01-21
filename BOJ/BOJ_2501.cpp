#include <iostream>

using namespace std;

int main(void)
{
    size_t N, K;
    cin >> N;
    cin >> K;

    size_t* divisor = new size_t[N];
    size_t cnt_divisor = 0;
    for (size_t i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            divisor[cnt_divisor] = i;
            cnt_divisor++;
        }
    }

    size_t tmp = 0;
    for (size_t i = 0; i < cnt_divisor; i++)
    {
        for (size_t j = i + 1; j < cnt_divisor; j++)
        {
            if (divisor[i] > divisor[j])
            {
                tmp = divisor[i];
                divisor[i] = divisor[j];
                divisor[j] = tmp;
            }
        }
    }

    if (cnt_divisor < K)
        cout << 0;
    else
        cout << divisor[K - 1];

    delete[] divisor;

    return 0;
}