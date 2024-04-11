#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 앞면과 뒷면이 나온 횟수를 저장할 변수들을 선언하고 초기화합니다.
    int heads_count = 0;  // 앞면 횟수
    int tails_count = 0;  // 뒷면 횟수
    int toss_count = 100; // 동전을 던질 횟수

    // 무작위로 값을 생성하기 위해 난수 생성기의 시드를 초기화합니다.
    srand(time(NULL));

    // 동전 던지기를 던질 횟수만큼 반복합니다.
    for (int i = 0; i < toss_count; ++i) {
        // 난수를 생성하여 0 또는 1이 나올 확률이 각각 50%인지 확인합니다.
        if (rand() % 2 == 0) {  // 0 또는 1이 나올 확률이 각각 50%
            heads_count++;     // 앞면이 나온 횟수를 증가시킵니다.
        }
        else {
            tails_count++;     // 뒷면이 나온 횟수를 증가시킵니다.
        }
    }

    // 결과를 출력합니다.
    printf("앞면 %d번\n", heads_count);
    printf("뒷면 %d번\n", tails_count);

    return 0;
}

