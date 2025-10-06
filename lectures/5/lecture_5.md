## Как правильно выделять память
```
int def(int** dst){
    *dst = malloc...
}

int main(){
    int num = NULL;
    def(num);
    ...
}
```

## const
```
int const x = ..;
==
const int y = ..;
```

```
char const * p1 = ..; //const идет на указатель
p1[0] = 'a'// error
p1 = s2 //ok
!=
char * const p2 = ..; //
p2[0] = 'a'; //ok
p2 = s2; // error
```

## stdlib

- atoi - совсем просто;
- strtol - уже смешарик;

- time(NULL) -текущее время в секундах

- qsort **(!)**
- bsearch **(!)** :
lower_bound and upper_bound

- strtok -как split(' '), только возвращает указатель на начало

- timespec_get

## stdint

- uint32_t -32битный безнаковый тип



