#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long Generator(long start, long count, long generator){
    if(count>1){
        long x = Generator(start, count - 1, generator) ;
        count-- ;
        printf("%ld", x) ;
        return x*generator ;
    }
    else 
        return start ;
}
int main() {
    long start,count,generator ;
    scanf("&ld&ld&ld",&start, &count, &generator) ;
    Generator(start, count, generator) ;
    return 0;
}
