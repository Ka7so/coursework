#include <stdio.h>

int main() {
    int matches = 100;
    int player = 1;
    int take;

    while (matches > 0) {
        printf("На столе %d спичек\n", matches);
        printf("Игрок %d, сколько спичек возьмешь? ", player);
        scanf("%d", &take);

        if (take < 1  || take > 10 || take > matches) {
            printf("Нет, можно взять только от 1 до 10!\n");
            continue;
        }

        matches -= take;

        if (matches == 0) {
            printf("Игрок %d забрал последнюю спичку, он победил\n", player);
            break;
        }

        player = (player == 1) ? 2 : 1;
    }

    return 0;
}