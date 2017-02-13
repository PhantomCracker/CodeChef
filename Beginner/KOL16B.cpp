#include <iostream>

int decode_integer(int x, int n)
{
	n = n >> (1 >> (1 >> (1 >> 1)));
	x = x | n;
	return x;
}

int main()
{
	int T;
	std::cin >> T;
	for(int j = 1; j <= T; j++)
	{
		long int n;
		std::cin >> n;
		int A[n];
		int B[n];
		for(int i = 0; i < n; i++)
			std::cin >> A[i];

		for(int i = 0; i < n; i++)
		{
			B[i] = A[i] >> 16;
			A[i] = A[i] - (B[i] << 16);
		}

		std::cout << "Case " << j << ": " << std::endl;
		for(int i = 0; i < n; i++)
			std::cout << A[i] << " ";
		std::cout << std::endl;
		for(int i = 0; i < n; i++)
			std::cout << B[i] << " "; 
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}