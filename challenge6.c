#include<stdio.h>

typedef struct{
    int accountnumber;
    float balance;
    char owner[20];
}account;

void deposit(account *acc , float amount){
    printf("After Deposit : \n");

    acc->balance += amount;
    printf("name :%s\t accountnumber = %d\t balance = %.2f\n ",acc->owner, acc->accountnumber,acc->balance);
    
}

void withdraw(account *acc,float amount){

        if(acc->balance >= amount){

            acc->balance -= amount;
            printf("Success! New balance for %s: %.2f\n",acc->owner,acc->balance);
        } else printf("Transaction failed: insufficient balance for %s.\n",acc->owner);

}

account *findaccount(account *accounts,int size , int accnumber){

    for(int i = 0; i<size ; i++){

        if(accounts[i].accountnumber == accnumber){

            return (accounts + i);
        }
    }
    return NULL;
        
}

void displayupdate(account *display , int size){
    printf("final look : \n ");
    for(int i = 0; i<size ; i++){
        printf("name :%s\t accountnumber = %d\t balance = %.2f\n ",display[i].owner, display[i].accountnumber,display[i].balance);
    }
}

int main(){
    account state[3]={
        {123,500,"Nitesh"},
        {124,900,"suraj"},
        {125,1200,"ceaser"}        
    };

    printf("Before Deposit : \n");

    for(int i = 0; i<3;i++){
        printf("name :%s\t accountnumber = %d\t balance = %.2f\n ",state[i].owner, state[i].accountnumber,state[i].balance);
    }
 
    deposit(state , 5000.00);

    withdraw(state,  5000.00);
    
    withdraw((state +1),999999);
    
    account *address = findaccount(state , 3 , 125);
    if(address != NULL) deposit(address , 600);
    else printf("Account not fould!\n");

    displayupdate(state , 3);

    return 0;

}
