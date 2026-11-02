#include<stdio.h>

int main(){
    FILE *fp = fopen("./file_handling/4th.bin","wb");

    fwrite("hello" , sizeof(char) , 5 , fp);

    fclose(fp);
}
