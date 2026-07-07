//wap that manages a small inventory system
#include<stdio.h>

typedef enum{
    FOOD,
    ELECTRONICS,
    CLOTHING,
    TOYS
}category;

typedef struct{
    char name[30];
    int quantity;
    float price;
    category category;
}item;


float totalvalue(item *items , int size);
item *findbycategory (item *items , int size , category cat);

 
int main(void){
    item inventory[3] = {
        {"pizza",30,100.23,FOOD},
        {"laptop",100,96000.00,ELECTRONICS},
        {"pants",200,1200.00,CLOTHING}
    };

    float result = totalvalue(inventory , 3);
    printf("the total sum of entire inventory is : %.2f\n",result);

    item *catch = findbycategory(inventory,3,CLOTHING);

    if(catch != NULL){

        printf("the match found is :- name = %s\t quantity = %d\t price = %.2f\t category = %d\n",catch->name,catch->quantity,catch->price,catch->category);
    }else{
        printf("match not found\n");
    } 
    return 0;

}

float totalvalue(item *items , int size){
    float result = 0;
    for(int i = 0; i<size;i++){

        result += (items[i].quantity * items[i].price);
    }
    return result;
}

item *findbycategory (item *items , int size , category cat){
    for(int i= 0; i<size ; i++){

        if(cat == (items+i)->category) {

            return (items + i );
        }
    }
    return NULL;
}
