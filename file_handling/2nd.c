 #include<stdio.h>


  int main(){
      FILE *fp = fopen("./file_handling/2nd.txt" , "w");

      if(!fp){
          printf("no disk space available for write :\n ");
          return 1;
      }

      fprintf(fp , "%d %d %d" , 10 , 20 , 30 );
      fclose(fp);

      fp = NULL;

      fp = fopen("./file_handling/2nd.txt" , "r");

      int a , b , c;

      fscanf(fp , "%d %d %d" , &a , &b , &c);

      printf("a = %d\tb = %d\tc = %d\n",a , b, c);

      fclose(fp);
  }
 
