#include <stdio.h>

int main(void)
{
  // int age = 15;
  // if (age >= 20)
  // {
  //   printf("일반인 입니다.");
  // }
  // else
  // {
  //   printf("학생입니다.");
  // }

  // 초(8~13) 중(14~16) 고(17~19)
  // int age;
  // printf("몇살이나요?");
  // scanf("%d", &age);
  // if (age >= 8 && age <= 13)
  // {
  //   printf("초등학생입니다.\n");
  // }
  // else if (age >= 14 && age <= 16)
  // {
  //   printf("중학생입니다.\n");
  // }
  // else if (age >= 17 && age <= 19)
  // {
  //   printf("고등학생입니다.\n");
  // }
  // else
  // {
  //   printf("학생이 아닌가봐요.\n");
  // }

  // for (int i = 0; i < 30; i++)
  // {
  //   if (i > 5)
  //   {
  //     printf("나머지 학생은 집에 가세요\n");
  //     break;
  //   }
  //   printf("%d번 학생은 조별 발표 준비를 하세요\n", i + 1);
  // }

  for (int i = 0; i <= 30; i++)
  {
    if (i >= 6 && i <= 10)
    {
      if (i == 7)
      {
        printf("%d번 학생은 결석입니다.\n", i);
        continue;
      }
      printf("%d번 학생은 조별 발표를 준비를 하세요\n", i);
    }
  }

  return 0;
}