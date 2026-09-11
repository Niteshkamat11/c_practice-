#include<stdio.h>
#include<string.h>

int ispalindrome(char *str);
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    char str[n];

   getchar();

    printf("enter the string : ");
    fgets(str,n,stdin);
    int len = strlen(str);

    printf("len = %d\n",len);
    
    if(len >0 && str[len-1] == '\n'){
        str[len-1] = '\0';
    }
    int result=ispalindrome(str);

    if(result ==1){
        printf("%s is palindrome",str);
        
    }else{
        printf("%s is not a palindrome",str);
    }
     return 0;
}
// int ispalindrome(char *str){

//     int len = strlen(str); //if racecar then len = 7 

//     for (int i = 0; i < len/2 ; i++){

//         char left = *(str + i);
//         char right = *(str + (len - (i+1)));

//         if(left >= 'A' && left <= 'Z'){
//             left = left + 32 ; 
//         }

//         if(right >= 'A' && right <= 'Z'){
//             right = right + 32;
//         }

//         if(left != right){
//             return 0;
//         }
//     }



//     return 1;
//  }
//
int ispalindrome(char *str) {
    char *left = str;                  // Points to the start
    char *right = str + strlen(str) - 1; // Points to the last character

    // Loop until the pointers meet in the middle
    while (left < right) {
        char l_char = *left;
        char r_char = *right;

        // Manual lowercasing
        if (l_char >= 'A' && l_char <= 'Z') l_char += 32;
        if (r_char >= 'A' && r_char <= 'Z') r_char += 32;

        if (l_char != r_char) {
            return 0; // Mismatch found
        }

        left++;  // Move left pointer forward
        right--; // Move right pointer backward
    }
    return 1;
}
