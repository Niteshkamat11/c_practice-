#include<stdio.h>
/*
 * Anonymouse structs / unions(c11)
 * basic idea is that you can wtite nested struct without namefield 
typedef struct{
    struct {
        int x;
        int y;
    }; //no name field here 
}variant;


int main(){
    variant v;
    v.x = 5;
    printf("%d\n",v.x);

}
*/
/*
* Anonymouse structs / unions(c11)
typedef struct{
    int type;
    union{
        int i;
        float f;
    }; // no field here 
}inside;

int main(){
    inside p;
    p.i = 2;
    p.type = 4;

    printf("%d %d\n",p.i , p.type);
}
*/
/*
typedef struct {
    int type ;
    union {
        int i;
        float f;
    }; // no field here either
}union_check;

int main(){
    union_check t;
    t.i = 6;
    t.type= 1;

    printf("%d %d\n",t.i,t.type);
}
This is genuinely used in REAL C CODE - It makes tagged - union style code clearner to read and write
*/


