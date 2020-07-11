# ctuples
C macro inspired in Python tuples.

Basically...

```
#define CTUPLE(type_, ...) (type_[]){__VA_ARGS__}, sizeof((type_[]){__VA_ARGS__})/sizeof(type_)
```

Which used like..

```
foo(CTUPLES(int, 1, 2, 3));
```

That expands to..

```
foo((int[]){1, 2, 3}, sizeof((int[]){1, 2, 3})/sizeof(int)
```

So it can be used with function prototypes like this...

```
void foo(int* buffer, int numElements);
```
