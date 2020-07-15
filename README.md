# ctuples
C macro inspired in Python tuples.

Basically...

```
#define CTUPLE(type_, ...) (type_[]){__VA_ARGS__}, sizeof((type_[]){__VA_ARGS__})/sizeof(type_)
```

Which it is used like..

```
foo(CTUPLE(int, 1, 2, 3));
```

That expands to..

```
foo((int[]){1, 2, 3}, sizeof((int[]){1, 2, 3})/sizeof(int));
```
and then to...

```
foo((int[]){1, 2, 3}, 3);
```

So it can be used with function prototypes like this...

```
void foo(int* buffer, int numElements);
```
Also...

```
#define CTUPLEAS(astype_, realtype_, ...) (astype_*)(realtype_[]){__VA_ARGS__}, sizeof((realtype_[]){__VA_ARGS__})/sizeof(astype_)
````

So it can be used like...

```
foo(CTUPLEAS(int, long, 0xDEADBEEFBABEFACE));
```
