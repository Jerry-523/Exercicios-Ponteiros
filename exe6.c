#include <stdio.h>
#include <string.h>

int str_eq(const char *s1, const char *s2);

int main(){
    char str1[] = "Gosto de programar em C++";
    char str2[] = "Gosto de programar em C++";
    char str3[] = "Gosto de programar em Kotlin";

    if (str_eq(str1, str2)){printf("As strings sao iguais\n");}
    else {printf("As strings sao diferentes\n");}

    if (str_eq(str2, str3)){printf("As strings sao iguais\n");}
    else {printf("As strings sao diferentes\n");}

    return 0;
}

int str_eq(const char *s1, const char *s2){
    while(*s1 && *s2){
        if(*s1++ != *s2++){
            return 0;
        }
    }
    return (*s1 == *s2);
}