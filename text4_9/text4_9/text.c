//#include<stdio.h>
//int main()
//{
//	double s = 1, e = 1, n = 0;
//	while (1)
//	{
//		n++;
//		s *= n;
//		if (1 / s < 1.0e-6)
//			break;
//		else
//			e += 1 / s;
//	}
//	printf("%f", e);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int z;//¶ùÍ¯
	double n = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			z = 36 - i - j;
			n = i * 4 + j * 3 + z / 2.0;
			if (n == 36)
			{
				printf("%d %d %d", i, j, z);
				return 0;
			}
		}
	}
	return 0;
}
