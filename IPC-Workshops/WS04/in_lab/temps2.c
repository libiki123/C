#include <stdio.h>

int main()
{
	int n, i, add = 0;
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		add += i * 2;

	}
	printf("Result is %d\n", add);

	return 0;
}