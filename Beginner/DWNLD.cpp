#include <iostream>

int main()
{
	int TC;
	std::cin >> TC;
	while(TC--)
	{
		int N, K;
		std::cin >> N >> K;
		int T, D;
		int pay = 0;
		for(int i = 0; i < N; i++)
		{
			std::cin >> T;
			std::cin >> D;
			if(K > T)
				K = K - T;
			else
			{
				T = T - K;
				pay = pay + T * D; 
				K = 0;
			}
		}

		std::cout << pay << std::endl;
	}

	std::cout << std::endl;
	return 0;
}