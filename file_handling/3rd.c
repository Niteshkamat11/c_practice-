#include<stdio.h>

int main(void){
     int arr[5] = {1,2,3,4,5};

     FILE *fp = fopen("./file_handling/3rd.bin" , "wb");

     if(!fp){
         printf("disk is full\n");
     }

     fwrite(arr , sizeof(int) , 5 , fp);
     fclose(fp);
      fp = fopen("./file_handling/3rd.bin" , "rb");

     if(!fp){
         perror("fopen");
         return 1;
     }
     int buff[5];

     fread(buff , sizeof(int) , 5 , fp);

     for(int i = 0 ; i < 5 ; i ++){
         printf("%d\t" , buff[i]);
     }
     fclose(fp);
    return 0;

}
