calloc-
то же самое что и маллок, только заполняет нулями

realloc - 
изменяет размер уже существуещего маллока(или любой другой памяти)

named(desquated) initializers

struct product_s{
    char label = "MIlk";
    usigned char weight = 100;
    unsigned int price = 5;
};

struct product_s p{
    .label = "MIlk";
    .weight = 100;
    .price = 5;
}; //ставь запятые

#define PI 3.1415..
все PI заменяются на 3.1415..
не стоит им пользоваться

gcc -E ...//посмотри

#pragma pack(x) - выравнивание по х

