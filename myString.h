#ifndef MYSTRING_H
#define MYSTRING_H

typedef char* String;

int str_len(const char*);
char* cpy_str(char*, const char*);
char* concat(char* , const char*);
char* invert(char*);
int compare(const char*, const char*);

#endif
