#include <iostream>

int main()
{
	int T;
	std::cin >> T;
	while(T--)
	{
		int n;
		std::cin >> n;
		int chapter[n+1];
		for(int i = 1; i <= n; i++)
			std::cin >> chapter[i];

		int numbers[500] = {0};
		for(int i = 1; i <= n; i++)
			numbers[chapter[i]]++;

		int its = 0;
		int s = 0;
		for(int i = 1; i <= n; i++)
		{
			if(numbers[i] == 0)
			{
				its = 1;
				break;
			}
			if(chapter[i] == i)
				s++;
		}
		if(its == 0 && s != n)
			std::cout << "yes" << std::endl;
		else
			std::cout << "no" << std::endl;
	}

	std::cout << std::endl;
	return 0;
}