#include<stdio.h>
#include<string.h>

int main(void){
    // wap tha input user's name and print its length 
    //
    // char name[15];
    // fgets(name , 15 , stdin);

    // printf("%d",strlen(name));

    // printf("\n");


    // use of strcpy(new string , old string)

    char new_string[] = "Nitesh";
    char old_string[] = "Kamat";

    // Copies "Kamat" into new_string. This fits safely because "Kamat" (6 bytes) is smaller than 7 bytes.
    strcpy(new_string, old_string);
    
    // Concatenates "Kamat" to the end of new_string -> Resulting in "KamatKamat" (11 bytes needed).
    // Note: There is no space automatically added between strings during concatenation.
    strcat(new_string, old_string); 
    
    /* * 🤔 WHAT HAPPENED UNDER THE HOOD?
     * 1. "KamatKamat" requires 11 bytes of memory, but new_string only has 7 bytes allocated.
     * 2. The extra 4 characters ('a', 'm', 'a', 't', '\0') spilled out of bounds and 
     * blindly smashed into neighboring memory slots belonging to this program.
     * 3. It didn't crash with a Segmentation Fault because the memory it corrupted happened 
     * to belong to our own program, so the Operating System didn't flag an error.
     * 4. printf kept walking through the memory sequentially until it hit the spilled '\0', 
     * making the output "look" correct by pure luck. This is dangerous undefined behavior!
     */

    printf("%s\n", new_string); // Prints "KamatKamat" via memory corruption          



}
