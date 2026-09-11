#include<stdio.h>
#include<string.h>
int total_word(char *word,char **longest_word);
int main(){
    char word[50];
    char *longest_word = NULL;

    printf("Enter the word: ");
    fgets(word,50,stdin);
    
    int len = strlen(word);
    if(len>0 && (*(word + len-1) == '\n')){
        *(word + len -1) = '\0';
    }

    int count = 0;
    for(int i = 0 ; i<(int)strlen(word);i++){
        if(*(word + i) == 'a' || *(word + i) == 'e' || *(word + i) == 'i' || *(word + i) == 'o' || *(word + i) == 'u'){
            count ++;
        }
        else if(*(word + i) == 'A' || *(word + i) == 'E' || *(word + i) == 'I' || *(word + i) == 'O' || *(word + i) == 'U'){
            count ++;
        }
    }
    if(count !=0){

        printf("the total number of vowels letter are = %d\n",count);
    }else{
        printf("No vowels letter found:\n");
    }
    
    printf("the total number of character = %d\n" , (int)strlen(word));

    int wordcount = total_word(word,&longest_word);
    printf("the total number of word = %d\n ",wordcount);

    if(longest_word != NULL ){

        printf("the longest word = %s\n ",longest_word);
    }else{
        printf("No words found.\n");
    }
    return 0;

   // puts(word);

}

int total_word(char *word ,char **long_out){
    int count = 0;
    char *p = strtok(word , " ");
    int longest_word = 0;
    char *x = p;

        
    while(p !=NULL){
        char *y = p;
        int word_length= strlen(y);
        if(word_length > longest_word ){
            longest_word = word_length;
            x = p;
        }
        count ++;
        p = strtok(NULL , " ");

    }
    *long_out = x;
    return count;
}
