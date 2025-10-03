----
Node - для 4 лабы
----

## const:

def foo(const int x) - не надо

def foo(const char *str)
foo("Hello") - нельзя

r-value --> a = *, * = a
l-value --> * = a

const char* a -еслиперед ним ничего нет то фикс после 
char const* b - фиксирует предыдущий
char * const c - 

c[0] = '2'; Ok
c = a; error

a[0] = 'a'; error
a = b; Ok

## restrict:

```
int* restrict p_a; 
    int* p_b; 
    int* p_c; 
    *p_b += *p_a; 
    *p_c += *p_a;
```
без restrict:
x1 <- p_a
x2 <- p_b
x2 <-x1 + x2
p_b <- x2

с restrict:
x2 <- p_b
x2 <-x1 + x2
p_b <- x2

## stdio:
пук


## FILE:

```
FILE* fin = fopen("tin.txt", r/w/a);
if (fin == NULL){};
```

fscanf
fprintf
fgets
fput
...

10 в файле, то
1 - 8 бит, 0 - 8 бит

.txt .c .h - текстовые
.png .elf .img - бинарные

длябинарных:
```
FILE* f_bmp = ("*.txt");
if (f_bmp == NULL) {};
//fread(buffer, size_of_element, lenght, дескриптор);

int array[100];

fread(array, sizeof(array), 100, f_bmp)

feof
ferror
fflush

fseek
fseeg

как правильно читать файлики:
```
while (!feof(f_bmp)){
    fread(..., f_bmp)
    ...
}
```