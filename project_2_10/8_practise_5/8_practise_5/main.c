#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("��������Ĥ��");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("��������������룡\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}

	return 0;
}