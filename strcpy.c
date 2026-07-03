#include<stdio.h>
#include<string.h>
int main(){
    char buff[14]="kamat";
    char name[] = "Nitesh";
    // int len = strlen(nitesh);
    // strncpy(buff,nitesh , len-1);
    //strcpy(buff,name);
    strcpy(name,buff); //so it overwrites 

    printf("the strlen printed: %s\n",buff);
    
}
