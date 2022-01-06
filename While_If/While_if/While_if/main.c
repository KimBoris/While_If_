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

	//<do-while문>
	char ch = 0;

	do {
		//조건을 나중에 비교하므로 일단 한번은 무조건 실행한다.
		ch = getchar();
		putchar(ch);

		//조건식 오른쪽 끝에 ;이 있다는 점에 유의
	} while (ch != '\n');

	return 0;
}