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

  for (int i = 0; i < 8; i++)
  {
    printf("%d단 계산\n", i + 2);
    for (int j = 0; j < 9; j++)
    {
      printf("%d * %d = %d\n", i + 2, j + 1, (i + 2) * (j + 1));
    }
  }

  return 0;
}