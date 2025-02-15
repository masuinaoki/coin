#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int heads = 0;
    int tails = 0;
    int result;
    char name[100];

    printf("Who are you?\n>");
    scanf("%s", name);
    printf("Hello, %s!\n", name);


    // 初期化
    srand(time(NULL));

    printf("Tossing a coin...\n");

    // 3ラウンドのコイン投げ
    for (int round = 1; round <= 3; round++) {
        result = rand() % 2; // 0か1を生成
        if (result == 0) {
            printf("Round %d: Heads\n", round);
            heads++;
        } else {
            printf("Round %d: Tails\n", round);
            tails++;
        }
    }

    // 結果を表示
    printf("Heads: %d, Tails: %d\n", heads, tails);

    if(heads > tails){
      printf("%s win\n", name);
    }else{
      printf("%s missing\n", name);
    }

    return 0;
}
