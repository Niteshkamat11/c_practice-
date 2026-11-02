#include<stdio.h>
int main(){
    FILE *fp = fopen("./file_handling/1st.txt" , "w");

    if(!fp) {
        perror("write");
        return 1;
    }

    fprintf(fp , "hello file\n");


    fclose(fp);

    char buffer[20];
    fp = fopen("./file_handling/1st.txt" , "r");

    if(!fp){
        perror("fopen");
    }

    fgets(buffer , 20  , fp);

    fclose(fp);
    fp = NULL;

    printf("buffer = %s", buffer);


    return 0;
}



