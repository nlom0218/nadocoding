#include <stdio.h>

int main(void)
{
  // printf("Hello World\n");
  // int a = 10;
  // printf("a 는 %d\n", a++);
  // printf("a 는 %d\n", ++a);
  // printf("a 는 %d\n", a);

  // int i = 1;
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("Hello Word\n");
  // }

  // int i = 0;
  // while (i < 10)
  // {
  //   printf("Hello World %d\n", i);
  //   i++;
  // }

  // int i = 0;
  // do
  // {
  //   printf("Hello World %d\n", i++);
  // } while (i < 10);

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("첫 번째 반복문: %d\n", i);
  //   for (int j = 0; j < 5; j++)
  //   {
  //     printf("  두 번째 반복문: %d\n", j);
  //   }
  // }

  // for (int i = 0; i < 8; i++)
  // {
  //   printf("%d단 계산\n", i + 2);
  //   for (int j = 0; j < 9; j++)
  //   {
  //     printf("%d * %d = %d\n", i + 2, j + 1, (i + 2) * (j + 1));
  //   }
  // }

  // for (int i = 0; i < 5; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  // for (int i = 0; i < 5; i++)
  // {
  //   for (int j = 0; j < 4 - i; j++)
  //   {
  //     printf(" ");
  //   }
  //   for (int z = 0; z < i + 1; z++)
  //   {
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  int floor;
  printf("몇 층으로 쌓겠느냐?");
  scanf("%d", &floor);
  for (int i = 1; i <= floor; i++)
  {
    for (int z = 0; z < floor - i; z++)
    {
      printf(" ");
    }
    for (int j = 0; j < i * 2 - 1; j++)
    {
      printf("*");
    }
    for (int y = 0; y < floor - i; y++)
    {
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}