//13��. ���� �޸�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* pc;

	pc = (char*)malloc(1 * sizeof(char));
	if (pc == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	*pc = 'a';
	printf("%c \n", *pc);
	free(pc);

	return 0;
}

//a


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i;
	pi = (int*)malloc(5 * sizeof(int));

	if (pi == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	*pi = 1;
	*(pi + 1) = 2;
	*(pi + 2) = 3;
	*(pi + 3) = 4;
	*(pi + 4) = 5;

	for (i = 0; i < 5; i++)
		printf("%d \n", *(pi + i));

	free(pi);

	return 0;
}

//1
//2
//3
//4
//5


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p;
	int i, items;

	printf("�׸��� ������ �� ���Դϱ�?");
	scanf("%d", &items);
	p = (int*)malloc(sizeof(int) * items);

	for (i = 0; i < items; i++)
	{
		printf("�׸�(����)�� �Է��ϼ���: ");
		scanf("%d", &p[i]);
	}
	printf("\n�Էµ� ���� ������ �����ϴ�: \n");

	for (i = 0; i < items; i++)
		printf("%d ", p[i]);
	printf("\n");

	free(p);

	return 0;
}

//�׸��� ������ �� ���Դϱ� ? 3
//�׸�(����)�� �Է��ϼ��� : 10
//�׸�(����)�� �Է��ϼ��� : 20
//�׸�(����)�� �Է��ϼ��� : 30
//
//�Էµ� ���� ������ �����ϴ� :
//10 20 30


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int* p = NULL;
	int i = 0;
	int max;
	
	srand((unsigned)time(NULL));
	p = (int*)malloc(SIZE * sizeof(int));

	if (p == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < SIZE; i++)
	{
		p[i] = rand();
		printf("%d\n", p[i]);
	}

	max = p[0];
	for (i = 1; i < SIZE; i++)
	{
		if (p[i] > max)
			max = p[i];
	}
	printf("�ִ� = %d \n", max);
	free(p);

	return 0;
}

//27942
//28795
//1851
//1330
//5982
//1173
//14826
//10858
//20766
//14167
//�ִ� = 28795


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
	int number;
	char title[100];
};

int main(void)
{
	struct Book* p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));

	if (p == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	p[0].number = 1;
	strcpy(p[0].title, "C ���α׷���");

	p[1].number = 2;
	strcpy(p[1].title, "����ü");

	printf("p[0].number=%d p[0].title=%s \n", p[0].number, p[0].title);
	printf("p[1].number=%d p[1].title=%s", p[1].number, p[1].title);

	free(p);

	return 0;
}

//p[0].number = 1 p[0].title = C ���α׷���
//p[1].number = 2 p[1].title = ����ü


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct movie
{
	char title[100];
	double rating;
};

int main(void)
{
	struct movie* ptr;
	int i, n;

	printf("��ȭ�� ����: ");
	scanf("%d", &n);
	getchar();

	ptr = (struct movie*)malloc(n * sizeof(struct movie));
	if (ptr == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		printf("��ȭ ����: ");
		gets_s(ptr[i].title, 100);

		printf("��ȭ ����: ");
		scanf("%lf", &ptr[i].rating);
		getchar();
	}

	printf("\n========================\n");
	for (i = 0; i < n; i++)
	{
		printf("��ȭ ����: %s ", ptr[i].title);
		printf("��ȭ ����: %lf \n", ptr[i].rating);
	}
	printf("\n=======================\n");

	free(ptr);

	return 0;
}

//��ȭ�� ���� : 2
//��ȭ ���� : avengers endgame
//��ȭ ���� : 10
//��ȭ ���� : The Roundup
//��ȭ ���� : 9.0
//
//========================
//��ȭ ���� : avengers endgame ��ȭ ���� : 10.000000
//��ȭ ���� : The Roundup ��ȭ ���� : 9.000000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct NODE
{
	int data;
	struct NODE* link;
}NODE;

int main(void)
{
	NODE* p1;
	p1 = (NODE*)malloc(sizeof(NODE));
	p1->data = 1;
	p1->link = NULL;

	NODE* p2;
	p2 = (NODE*)malloc(sizeof(NODE));
	p2->data = 2;
	p2->link = NULL;

	NODE* p3;
	p3 = (NODE*)malloc(sizeof(NODE));
	p3->data = 3;
	p3->link = NULL;

	free(p1);
	free(p2);
	free(p3);

	return 0;
}