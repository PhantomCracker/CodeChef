#include <iostream>

int main()
{
	int T;
	std::cin >> T;
	while(T--)
	{
		long int N;
		std::cin >> N;
		int fees[N];
		long int pay = 0;
		long int zero = 0;
		for(long int i = 0; i < N; i++)
		{
			std::cin >> fees[i];
			if(fees[i] == 0)
			{
				pay = pay + 1100;
				zero++;
			}
			else if(fees[i] == 1 && zero > 0)
				pay = pay + 100;
		}
		std::cout << pay << std::endl;
	}

	std::cout << std::endl;
	return 0;
}