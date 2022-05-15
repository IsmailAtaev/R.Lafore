#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int S, G, x;
	std::cout << "Введите число стулев \n"; std::cin >> S;
	std::cout << "Введите число Госией \n:"; std::cin >> G;
	x=G;
	std::cout << std::endl;
	for (int j = 1;j <S; j++)
	{
		--G;
		x *= G;
		std::cout << x<< std::endl;
	}
	std::cout << x << std::endl;
	return 0;
}