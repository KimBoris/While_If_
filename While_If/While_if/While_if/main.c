#include <stdio.h>

int main(void)
{
	/*char ch;
	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
	}*/


	/*int nInput;
	scanf_s("%d", &nInput);
		int i = 0;
	while (i < nInput)
	{
		putchar('*');
		i++;
	}
	putchar('\n');*/


	/*int nInput;*/
	/*scanf_s("%d", &nInput);*/

	//int i, j;
	//for (i = 0; i < 5; ++i)
	//{
	//	for (j = 0; j < 5; ++j)
	//	{
	//		putchar('*');
	//		putchar('\t');
	//	}
	//	putchar('\n');
	//}

	//<do-while��>
	char ch = 0;

	do {
		//������ ���߿� ���ϹǷ� �ϴ� �ѹ��� ������ �����Ѵ�.
		ch = getchar();
		putchar(ch);

		//���ǽ� ������ ���� ;�� �ִٴ� ���� ����
	} while (ch != '\n');

	return 0;
}