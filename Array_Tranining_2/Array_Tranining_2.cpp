#include <iostream>

int main()
{
	int x, y;
	int number[5][5]{ 1, };
	const int MAX_ARRAY = 6;

	// 반복문을 이용한 값의 저장 및 출력
	for (x = 1; x < MAX_ARRAY; x++)
	{
		for (int space = MAX_ARRAY; space > x; space--)
		{
			std::cout << " ";
		}

		for (y = 1; y <= x; y++)
		{
			// x와 y가 0인 경우 또는 x와 y가 같은 경우에 1로 초기화
			if (y == 0 || y == x)
			{
				number[x][y] = 1;
			}
			// 이전 값과 이후에 저장된 값을 더하여 다음 행렬에 저장
			else
			{
				number[x][y] = number[x - 1][y - 1] + number[x - 1][y];
			}

			std::cout << number[x][y] << " ";

		}
		std::cout << std::endl;

	}
	return 0;
}