#include <iostream>
#include <algorithm>

long long int cmmdc(long long int a, long long int b)
{
	long long int t = 0;
	if(a < 0)
		a = -a;
	if(!b)
		return a;
	if(b < 0)
		b = -b;
	if(!a)
		return b;
	while(!((a | b) & 1))
	{
		a >>= 1;
		b >>= 1;
		t++;
	}
	while(!(a & 1))
		a >>= 1;
	while(!(b & 1))
		b >>= 1;
	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
			do
			{
				a >>= 1;
			}while(!(a & 1));
		}
		else
		{
			b = b - a;
			do
			{
				b >>= 1;
			}while(!(b & 1));
		}
	}
	return a << t;
}

long long int cmmmc(long long int a, long long int b)
{
	return (a * b) / cmmdc(a, b);
}

int main()
{
	int T;
	std::cin >> T;
	while(T--)
	{
		int N;
		std::cin >> N;
		long long int A[N];
		for(int i = 0; i < N; i++)
			std::cin >> A[i];

		long long int freez = 1e18;
		for(int i = 0; i < N; i++)
			for(int j = i+1; j < N; j++)
				freez = std::min(freez, cmmmc(A[i], A[j]));

		std::cout << freez << std::endl;
	}

	std::cout << std::endl;
	return 0;
}