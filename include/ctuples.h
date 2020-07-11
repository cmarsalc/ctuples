#ifndef CTUPLES_H_
#define CTUPLES_H_
#define CTUPLE(type_, ...) (type_[]){__VA_ARGS__}, sizeof((type_[]){__VA_ARGS__})/sizeof(type_)
#endif

