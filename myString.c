#include <stdio.h>
#include "myString.h"

int str_len(const char* str){
    if(!str) return -1;
    int len=0;
    while(*str++)len++;
    return len;
}

char* cpy_str(char* dst, const char* src){
    if(!dst||!src) return NULL;
    char* d=dst;
    while(*src){
        *d++=*src++;
    }
    *d='\0';
    return dst;
}

char* concat(char* dst, const char* src){
    if(!dst||!src) return NULL;
    char* p=dst;
    while(*p!='\0' ) p++;
    while(*src) *p++=*src++;
    *p='\0';
    return dst;
}

char* invert(char* str){
    if(!str) return NULL;
    int size=str_len(str);
    char tmp;
    for(int i=0;i<size/2; i++){
        tmp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]=tmp;
    }
    str[size]='\0';
    return str;
}

int compare(const char* str1, const char* str2){
    if(!str1||!str2) return -1;
    while((*str1==*str2)){
        if((*str1=='\0')&&(*str2=='\0')) return 1;
        str1++; str2++;
    }
    return 0;
}

