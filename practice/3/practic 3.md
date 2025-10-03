## Возможные ошибки:
```
int *p = NULL
*p = 1
//signitation fault
```

```
char *p = NULL
{
char c = 2;
p = &c;
}
//отдельный стэк ^
*p = 4
//signitation fault
``` 

```
char *p= malloc(n);
*p = 100;
free(p);
*p = 101;
//signitation fault
```
------------------------
после каждого malloc нужно делать проверку
```
if (p == NULL){...}
    exit 1;
```

**#pragma once - всегда**

## Структуры:

```
struct{
    int x;
    char *p;
}

m = struct .. //на стеке
m = (struct*)malloc(sizeof(...)) // на куче
```
```
typedef (struct{
    int x;
    int *p;
    float y;
}) my_struct; //обращение к структуре напрямую

int a = 5;
my_struct a1 = {1, &a, 2.0};
my_struct a2 = a1;
если a1.p = 2;
то a2.p будет равно 2;
//p_a1= &a1  p_a1 -> x


typedef struct{
    char* name;
    int year;
} man_s;
//кладем в header


struct Node{
    int x;
    struct Node* next;
} //указатель на след элем списка
struct list{
    Node* heads;
}
```

1) по индексу
2) func add (int v){
    next = malloc(Node);
}

## интрузивные списки
```
intr_node{
    intr next;
         prev;
}
```
