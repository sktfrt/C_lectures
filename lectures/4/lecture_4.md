libc.so - стандартная библиотека

cppreferemce.com - справочник

## stdio.h

```
FILE* f1 = fopen("text.txt", mode); //файл на диске
FILE* f2 = stdin;
FILE* f3 = stdout;
fclose();
```
mode r/w/a: read, write, append

```
FILE* fin = fopen("in.txt", "r");
FILE* fout = fopen("out.txt", "w");
fscanf(fin, "%d %f", &a, &b);
fprintf(fout, "%d %f", a, b);
```

```
sscanf(s2, "%d %d", &a, &b);
sprintf(s2, "%d %d", a, b, c); //лучше не ползьваться

snprintf(...) // вместо нее
```

### Так же есть

fread
fwrite
fseek
ftell

feof - индикатор конца файла
ferror - индикатор ошибки

fflush - сбрасывание буфера

stderr - сообщения об ошибках