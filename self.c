//Захарова Вероника Сергеевна Пи 1-1

#include <stdio.h>

int min2(int a, int b) {
    return (a < b) ? a : b;
}

int range3(int x, int y, int z) {
    int min_value = min2(min2(x, y), z);

    int max_value = (x > y) ? x : y;

    if (z > max_value) {
        max_value = z;
    }

    return max_value - min_value;
}

int main(void) {
    int x, y, z;

    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Input error\n");
        return 1;
    }

    if (x < -1000 || x > 1000 ||
        y < -1000 || y > 1000 ||
        z < -1000 || z > 1000) {
        printf("Range error\n");
        return 1;
    }

    printf("%d\n", range3(x, y, z));

    return 0;
}
