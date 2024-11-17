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


        for (i = 0; i < t; i++) {
            if(i == 0){
            printf("[");
            }

            printf("%d", p[i]);
        }


        if (i < t - 1) {
            printf(", ");
        }

            printf("]\n");

}
  free(p);
  return 0;
}
