#include <stdio.h>

void verifica_inclusao(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
    if (x1 < x3 && y1 < y3 && x2 > x4 && y2 > y4) {
        printf("(<%.2f,%.2f>,<%.2f,%.2f>)", x1, y1, x2, y2);
        printf(" contem");
        printf(" (<%.2f,%.2f>,<%.2f,%.2f>).\n", x3, y3, x4, y4);
    } else if (x3 < x1 && y3 < y1 && x4 > x2 && y4 > y2) {
        printf("(<%.2f,%.2f>,<%.2f,%.2f>)", x3, y3, x4, y4);
        printf(" contem");
        printf(" (<%.2f,%.2f>,<%.2f,%.2f>).\n", x1, y1, x2, y2);
    } else {
        
        printf("Nao posso afirmar!\n");
        
    }
}

int main() {
    float x1, y1, x2, y2;
    float x3, y3, x4, y4;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    while (1) {
        scanf("%f %f %f %f", &x3, &y3, &x4, &y4);
        
        if(x3 == 0 && y3 == 0 && x4 == 0 && y4 == 0)
        {
            break;
        }

        verifica_inclusao(x1, y1, x2, y2, x3, y3, x4, y4);

    }

    return 0;
}
