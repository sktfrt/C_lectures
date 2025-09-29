#include <stdio.h>

int main(){
    FILE* fin = fopen("in.txt", "r");
    FILE* fout = fopen("out.txt", "w");
    int a = 5;

    fscanf(fin, "%d ", &a);
    fprintf(fout, "%d %f", a);

    char s2[256];
    sscanf(s2, "%d ", &a);

    snprintf(s2, "%d ", &a);

    return 0;
}


