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
//	//顺序结构，if else语句
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
//	//顺序结构switch case语句
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
//	printf("总分为：%d\n平均分为：%.2f", sum, average);
//	return 0;
//	//while循环语句
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
//	//循环结构do while语句  do while会先执行一遍程序，而while条件不符合不执行
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
//		//for中第一个语句对循环变量初始化或赋值，第二个语句为真时执行循环体，为假时结束循环，第三个语句对变量进行修改操作
//			//三个语句均可省略,但分号不可省略
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++ )
//	{
//		if (i % 2)
//			continue;
//		printf("%d", i);
//	}
//	//continue中止语句，只可在循环语句中使用，通常和if搭配，执行后会跳过后续语句，进入下次循环
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
//	//break中止语句，通常和if搭配使用，只能用在switch case和循环语句，一旦执行会强制中断流程，结束语句执行
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
//	//goto语句，goto标签
//}

//int main()
//{
//	printf("a");
//	return 0;
//	printf("b");
//}