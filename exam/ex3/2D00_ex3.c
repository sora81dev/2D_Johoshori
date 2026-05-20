/**
 * @file 2D00_ex3.c
 * @brief Grading program for NIT, Gifu College
 * @author Sora
 * @date 2026.05.13
 */
#include <stdio.h>
#include <stdlib.h>

int scoreCheck(char *text);

int main(void) {
  // 入力関数呼び出し
  const int test_11 = scoreCheck("前期中間");
  const int test_12 = scoreCheck("前期期末");
  const int test_21 = scoreCheck("後期中間");
  const int test_22 = scoreCheck("後期期末");
  const int asg = scoreCheck("課題");

  // 得点率計算
  const int score_sum = test_11 + test_12 + test_21 + test_22 + asg;
  const int score_percent = (score_sum * 100) / 500;

  // 得点判定
  if (score_percent >= 95) {
    // 95点以上: 10
    printf("10");
  } else if (score_percent < 30) {
    // 30点未満: 2
    printf("2");
  } else {
    // それ以外は10で割ってintに入れて小数点以下切り捨て
    printf("%d", score_percent / 10);
  }

  return 0;
}

// 成績を読み込み、範囲外に対処する関数
int scoreCheck(char *text) {
  int score, result;

  // 成績読み込み
  printf("%s?:", text);
  result = scanf("%d", &score);

  // 例外判定 (文字列, 0点未満, 100点超過)
  if (result == 0 || score < 0 || score > 100) {
    printf("ERROR");
    exit(0); // プログラム強制終了
  }

  return score;
}
