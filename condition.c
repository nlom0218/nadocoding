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
  int age;
  printf("몇살이나요?");
  scanf("%d", &age);
  if (age >= 8 && age <= 13)
  {
    printf("초등학생입니다.\n");
  }
  else if (age >= 14 && age <= 16)
  {
    printf("중학생입니다.\n");
  }
  else if (age >= 17 && age <= 19)
  {
    printf("고등학생입니다.\n");
  }
  else
  {
    printf("학생이 아닌가봐요.\n");
  }

  return 0;
}