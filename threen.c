#include <stdio.h>

/**
 * check if number is odd or even,
 * each time, return n after worked on
 */
int oOE(int n, int m){

    int i=n;
    int j=m;
    printf("%d ", i);
    while (i != j) {
        if (i % 2 == 0) {
            i = i / 2;
        } else {
            i = i * 3 + 1;
        }
    printf("%d ", i);
    }
    return i;
}

/**
 * check if j is less than i
 */

bool lts (int n, int m){
    if ( n > m) 
        return true;
}

int main() {
    int i, j;

    printf("This is problem number 1.\n");
    printf("Can you do it?\n");
    printf("Don't fuck it up.\n");

    printf("Where do we begin... (give an int),\n... and then we end...(give a lower int)");
    scanf("%d %d", &i, &j);

    if(lts(i, j)) {
        oOE(i,j);
    } else {
        printf("Does not compute");
        return (1);
    }

    return 0;
}
