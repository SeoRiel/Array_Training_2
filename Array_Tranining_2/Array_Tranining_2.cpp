#include <iostream>

int main()
{
	int x, y;
	int number[5][5]{ 1, };
	const int MAX_ARRAY = 6;

	// �ݺ����� �̿��� ���� ���� �� ���
	for (x = 1; x < MAX_ARRAY; x++)
	{
		for (int space = MAX_ARRAY; space > x; space--)
		{
			std::cout << " ";
		}

		for (y = 1; y <= x; y++)
		{
			// x�� y�� 0�� ��� �Ǵ� x�� y�� ���� ��쿡 1�� �ʱ�ȭ
			if (y == 0 || y == x)
			{
				number[x][y] = 1;
			}
			// ���� ���� ���Ŀ� ����� ���� ���Ͽ� ���� ��Ŀ� ����
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