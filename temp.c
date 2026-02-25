/* converting farahenhite to celsiu */

#include<stdio.h>
#include<math.h>
#define FREEZING_PT 32.0f
#define SCALING_FACTOR (5.0f/9.0f)
int main(void){
    float farahenhite,celsius;
    printf("Enter farahenhite temperature:");
    scanf("%f",&farahenhite);
    celsius=(farahenhite-FREEZING_PT)* SCALING_FACTOR;
    printf("celsius equivalent: %.1f",celsius);
    return 0;

}
    
