#include <iostream>

int main()
{
	const int Size = 9;
	int Array[Size]{ 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	std::cout << "Enter a point ";
	int Point;
	std::cin >> Point;

	int Left = 0;
	int Right = Size-1;

	int CountOfPoint = 0;
	while (Left <= Right)
	{
		int Middle = (Left + Right) / 2;

		if (Array[Middle] > Point)
		{
			Right = Middle - 1;

		}else 
		{
			Left = Middle + 1;
		}




	}
	CountOfPoint = Size - Left;
	std::cout << "Number of elements is more than "<< Point << ": " << CountOfPoint;
	std::cout <<std::endl;
	system("pause");
}