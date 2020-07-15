#ifndef CTUPLES_H_
#define CTUPLES_H_

#define CTUPLE(type_, ...) (type_[]){__VA_ARGS__}, sizeof((type_[]){__VA_ARGS__})/sizeof(type_)
#define CTUPLEAS(astype_, realtype_, ...) (astype_*)(realtype_[]){__VA_ARGS__}, sizeof((realtype_[]){__VA_ARGS__})/sizeof(astype_)

#endif

