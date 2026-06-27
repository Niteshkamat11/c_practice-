#include<stdio.h>
#include <string.h>
//int main(void){
    // char name[]={'n','i','t','e','s','h','\0'};//this is one way by adding null character in end it assumes as nitesh
    // char name1[]="niteshka"; // double quote must be used and no need for curly bracket use this method easier 

                                               
    // printf("%s\n",name);
    // printf("%s\n",name1);
    //
    // writ a program to create a string firstname and last name to store detials of user and print all the characters using loop
    // char firstname[] = "nitesh";
    // char lastname[] = "kamat";
    // for(int i=0; i<strlen(firstname); i++){
    //     printf("%c",firstname[i]);
    // }
    // printf("\n");
    // for(int i=0; i<strlen(lastname); i++){
    //     printf("%c\t",lastname[i]);
    // }
    // printf("\n");
    //
    //
    // ask user  to enter the first name and print back that name to them use %s format specifier 
    // char first_name[15];
    // scanf("%s",first_name);
    // printf("you first name is %s",first_name);
// }


//Now enter the full name 
// int main(void){
//     char fullname[15];
    //scanf("%s",fullname); // try entering Nitesh kamat 
    //printf("you first name is %s\n",fullname); 
    /* you will get only Nitesh ."kamat" is ignore.
     this is the limitation of scanf it can't take input of multiple word as space is used for 
     separating word . 

     so in this case gets() and puts() function is used.
     but one thing keep in mind that gets() is like old way also i think depreciated new modern way  is fgets use this*/
    // the format of fgets is fgets(str,n,file) where str is your string , n is size and file is i don't know but right now 
    // stdin is enough -> standard input which is basically a keyboard it takes input from our keyboard
    // fgets(fullname,15 ,stdin);
    // puts(fullname); // it gives next line automatically when you run it the prompt
                    // comes magically into next line no need to enter manually \n 

// }

/* string as a pointer obviously string is a array of character and array is itself is a pointer so string is also a pointer  */

int main(void){
    char *canchange = "Nitesh Kamat";
    puts(canchange);
    canchange = "Kamat"
        ;
    puts(canchange);//here you are able to change Nitesh kamat to kamat . this is the poweoff of pointer you can reintialize things lets look another example
    
    char cannotchange [] = "hello world"
        ;
    puts(cannotchange);
    // cannotchange = "hello"; // this is wrong when it is array it cannot change 
    // puts(cannotchange);
    //

    // With the array, you can change individual letters:
    cannotchange[0] = 'l'; // This works perfectly! "hello world" becomes "Hello world"
    puts(cannotchange);

    // With the pointer from Example 1, you CANNOT do this:
    // canchange[0] = 'K';    // Crash! (Segmentation fault)
    
    printf("%d",strlen(canchange));


}





