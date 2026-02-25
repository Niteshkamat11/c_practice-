#include<stdio.h>
int main(){
    int yy,mm,dd,yy1,mm1,dd1;
    printf("Enter you first date (yy/mm/dd) : ");
    scanf("%d/%d/%d",&yy,&mm,&dd);
    printf("Enter you second date (yy1/mm1/dd1) : ");
    scanf("%d/%d/%d",&yy1,&mm1,&dd1);

    if(yy<yy1){
        printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy,mm,dd,yy1,mm1,dd1);
    }
    else if (yy==yy1){

        if(mm<mm1){
        printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy,mm,dd,yy1,mm1,dd1);            
        }
        else if(mm==mm1){
            if(dd<dd1){
        printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy,mm,dd,yy1,mm1,dd1);   
            }else if(dd > dd1) {printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy1,mm1,dd1,yy,mm,dd);}
            else{printf("The both date you entered are equal\n");}
        }else {printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy1,mm1,dd1,yy,mm,dd);}
    }
    else{printf("The %d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",yy1,mm1,dd1,yy,mm,dd);}

}
