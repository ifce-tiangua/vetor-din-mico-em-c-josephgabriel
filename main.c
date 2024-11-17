#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, t, *p;

    p = malloc(t * sizeof(int));

    scanf("%d", &t);

    if (t <= 0) {

        printf("[vazio]\n");

    } else {

        for (i = 0; i < t; i++) {
            scanf("%d", &p[i]);
        }


        printf("[%d,", p[0]);


        for (i = 1; i < t - 1; i++) {
            printf("%d,", p[i]);
        }


        if (t > 1) {
            printf("%d]\n", p[t - 1]);
        } else {
            printf("]\n");
        }

        free(p);
    }
return 0;
}
