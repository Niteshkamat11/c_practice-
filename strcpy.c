#include<stdio.h>
#include<string.h>
int main(){
    char buff[10];
    char *nitesh = "Nitesh";
    int len = strlen(nitesh);
    strncpy(buff,nitesh , len-1);
    printf("the strlen printed: %s",buff);
    
}

