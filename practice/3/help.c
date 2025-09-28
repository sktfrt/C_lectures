#include "help.h"
#include <stdio.h>

man_s copy(man_s*){
    man_s cop;
    man_s *cop_name = (char*)malloc(sizeof(char));
    if (cop_name == NULL){
        printf("Error");
        exit(1);
    }
    return cop;
}