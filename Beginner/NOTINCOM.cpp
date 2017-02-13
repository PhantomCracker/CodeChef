#include <iostream>
#include <cstring>

int main()
{
	long long int T;
	std::cin >> T;
	while(T--)
	{
		long long int N, M;
		std::cin >> N >> M;
		long long int A[N];
		long long int B[M];
		for(long long int i = 0; i < N; i++)
			std::cin >> A[i];
		for(long long int j = 0; j < M; j++)
			std::cin >> B[j];

		long long int digits_A[10000001];
		long long int digits_B[10000001];
		std::memset(digits_A, 0, 10000001);
		std::memset(digits_B, 0, 10000001);
		for(long long int i = 0; i < N; i++)
			digits_A[A[i]]++;
		for(long long int j = 0; j < M; j++)
			digits_B[B[j]]++;

		long long int count = 0;
		for(long long int i = 0; i < 10000001; i++)
			if(digits_A[i] == digits_B[i])
				count = count + digits_A[i]; 

		std::cout << count << std::endl;
	}

	std::cout << std::endl;
	return 0;
}