#include <stdio.h>
#include <string.h>
int main(){
   char fruit[] = "apple,banana,mango"; // here we have an array that contaings this in memory 
   char *p = strtok(fruit , ","); // we used and pointer as strtok reutrns an address after spliting the strings i.e one big string into chunk string
                                  // in this case string is spliited based on ',' it added null terminator wherever it seees ',' and returs the address of 1st word address pointe catches it 

   while(p !=NULL){
       printf("%s\n",p);
       p = strtok(NULL , ","); //it says continuse splitting the strings from where you left off and it returns NULL when it doesn't find any delimeter which is '.'
   }
}
