/**
 * @file 2D00_ex2.c
 * @brief Grading Program
 * @author Sora
 * @date 2026.04.22
 */
#include <stdio.h>

char scoreCheck(int score);

int main(void) {
  int n;

  printf("SCORE?:");

  // 入力がint型かの確認
  if (scanf("%d", &n) == 1) {
    printf("%c\n", scoreCheck(n));
  } else {
    printf("E\n");
  }

  return 0;
}

// 聖蹟判定をする関数
char scoreCheck(int score) {
  // E判定を除外
  if (score < 0 || score > 100) {
    return 'E';
  }

  if (score >= 90) {
    return 'S';

  } else if (score >= 80) {
    return 'A';

  } else if (score >= 70) {
    return 'B';

  } else if (score >= 60) {
    return 'C';
  }

  return 'D';
}
