#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char *str = (char *)malloc(sizeof(char)) ;
    int n=0, *arr = (int *)malloc(sizeof(int)) ;
    unsigned long len = 1;
    *arr = 0 ;
    getline(&str, &len, stdin ) ;
    for(int i=0; i<len; i++){
        if((*(str+i)<='9')&&(*(str+i)>='0')){
            *(arr+n) = *(arr+n)*10 + (int)(*(str+i) - '0') ;
        }
        else if(*(str+i) == ' '){
            arr = (int *)realloc((void *) arr,(++n+1)*sizeof(int)) ;
        }
    }
    for(int i=0; i<=n; i++){
        printf("%d ",*(arr+i)) ;
    }
    return 0 ;
}
