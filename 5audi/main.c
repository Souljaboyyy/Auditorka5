#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ProstoeChislo(int num) {
	if (num == 1)
		return 2;
	int j, flag = 0;
	int b = 3;
	double c;
	int numb = 2;
	while (numb < num)
	{
		b += 2;
		c = sqrt(b);
		for (j = 3; j <= (int)(c); j = j + 2)
		{
			if (b%j == 0) {
				flag += 1;
				break;
			}
		}
		if (flag == 0)
			numb += 1;
		else
			flag = 0;


	}
	return b;
}


int main() {
	int a, i;
	scanf_s("%d", &a);
	int* mass = (int*)malloc(sizeof(int)*a);
	for (i = 0; i < a; i++)
		scanf_s("%d", &mass[i]);
	for (i = 0; i < a; i++)
		mass[i] = ProstoeChislo(mass[i]);
	printf("\n\n");
	for (i = 0; i < a; i++)
		printf("%d\n", mass[i]);
	system("pause");
	return 0;




}