## static

```c
static tree_t node;
static fill_node(...)
```
- переменные и функции будут локальными 

```c
extern int foo;
//global
```

```c
inline int max(...){
    return void;
}
```
- говорим, что эта функция везде одинакова

ldd <exe>

## linux libraries
- *.a
- *.so

ключи:
- -L*name* (-lexpat)
- -static

пример:
- libname.a
- limname.so

--------
```c
void *dlopen(const char Ilibrary_name, int flags);
...
void dlclose(*key);
```
- стандартня функция, возвращает указатель на библиотеку
--------


--------
```c
void *dlsym(void *handle, const char *symbol);
```

- импорт функции
--------

# **учись писать плагины в прогу**

## Макросы
va_start, va_arg, va_end

```c
void simple_printf(const char* fmt, ...){
    va_list args;
    va_start(args, int);
    ...
    va_end(args);
}
```