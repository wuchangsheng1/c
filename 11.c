#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a;
//	printf("please enter your score:\n");
//	scanf("%d", &a);
//	if (a >= 90)
//		printf("A\n");
//	else if (a >= 80)
//		printf("B\n");
//	else if (a >= 60)
//	printf("C\n");
//	else
//		printf("D\n");
//
//	return 0;
//	//˳��ṹ��if else���
//}


//int main()
//{
//	int score;
//	printf("please enter your score:");
//	scanf("%d", &score);
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		case 6:
//			printf("C\n");
//			break;
//		default:
//			printf("D\n");
//			break;
//			return 0;
//
//	}
//
//	return 0;
//	//˳��ṹswitch case���
//}

//int main()
//{
//	int i, n, score, sum = 0;
//	float average;
//	printf("please enter the number of students:\n");
//	scanf("%d", &n);
//	printf("please enter the scores of %d students\n",n);
//	i = n;
//	while (i--)
//	{
//		scanf("%d", &score);
//		sum += score;
//
//	}
//	average = (float)sum / n;
//	printf("�ܷ�Ϊ��%d\nƽ����Ϊ��%.2f", sum, average);
//	return 0;
//	//whileѭ�����
//}


//int main()
//{
//	int n, i, score, sum = 0;
//	float average;
//	printf("please enter the number of students:\n");
//	scanf("%d", &n);
//	i = n;
//	printf("please enter the scores of %d students\n", n);
//	do
//	{
//		scanf("%d", &score);
//		sum += score;
//	} while (--i);
//	average =(float) sum / n;
//	printf("Total:%d\nAverage:%.2f\n", sum, average);
//
//	return 0;
//	//ѭ���ṹdo while���  do while����ִ��һ����򣬶�while���������ϲ�ִ��
//}

//int main()
//{
//	int n, i, score, sum = 0;
//		float average;
//		printf("please enter the number of students:\n");
//		scanf("%d", &n);
//		printf("please enter the scores of %d students\n", n);
//		for (i = 0; i < n; ++i)
//		{
//			scanf("%d", &score);
//					sum += score;
//		}
//		average = (float)sum / n;
//			printf("Total:%d\nAverage:%.2f\n", sum, average);
//			return 0;
//		//for�е�һ������ѭ��������ʼ����ֵ���ڶ������Ϊ��ʱִ��ѭ���壬Ϊ��ʱ����ѭ�������������Ա��������޸Ĳ���
//			//����������ʡ��,���ֺŲ���ʡ��
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++ )
//	{
//		if (i % 2)
//			continue;
//		printf("%d", i);
//	}
//	//continue��ֹ��䣬ֻ����ѭ�������ʹ�ã�ͨ����if���䣬ִ�к������������䣬�����´�ѭ��
//	
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i > 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//	//break��ֹ��䣬ͨ����if����ʹ�ã�ֻ������switch case��ѭ����䣬һ��ִ�л�ǿ���ж����̣��������ִ��
//}

//int main()
//{
//	int i = 1;
//AAA:
//	printf("%d", i);
//	i++;
//	if (i < 10)
//	{
//		goto AAA;
//	}
//	//goto��䣬goto��ǩ
//}

//int main()
//{
//	printf("a");
//	return 0;
//	printf("b");
//}