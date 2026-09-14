/*Struct Matrix with int **data (2D array via array-of-pointers), rows, cols.
 Write createMatrix, freeMatrix (must free EVERY row individually, 
then the row-pointer array, then the struct).*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int **data;
    int rows;
    int column;
}matrix;

matrix* creatematrix(int row,int col,int matrix1[row][col]){

    matrix *ptr = malloc(sizeof(matrix));

    if(ptr == NULL) return NULL;

    ptr->rows = row;
    ptr->column = col;

    ptr->data = malloc((ptr->rows) *sizeof(int *));


    if(ptr->data == NULL){
        free(ptr);
        return NULL;
    }

    for(int i = 0; i<ptr->rows; i++){
        ptr->data[i] = malloc(col*sizeof(int));

        if(ptr->data[i] == NULL){
            for(int j = 0 ; j <i ; j++){
                free(ptr->data[j]);
            }
            free(ptr->data);
            free(ptr);
            return NULL;
        }

        for(int j = 0; j<ptr->column ; j++){
            *(*(ptr->data + i)+j) =matrix1[i][j];
        }
    }

    return ptr;
}

void freematrix(matrix **ptr){
        if(ptr==NULL || *ptr == NULL) return ;
        for(int i = 0 ; i<((*ptr)->rows) ; i++){
            free((*ptr)->data[i]);
        }
        free((*ptr)->data);
        free(*ptr);
        *ptr =NULL;
}

void display(matrix *ptr){
    printf("the grid in heap is : \n");
    for(int i = 0 ; i<ptr->rows; i++){

        for(int j = 0 ; j<ptr->column; j++){

            printf("%d  ",*(*(ptr->data + i)+j));
        }
        printf("\n");
    }    
}

int main(){

    int row,col;

    printf("Enter the row = ");
    if(scanf("%d",&row) !=1 || row <= 0) return 1;
    printf("Enter the col = ");
    if(scanf("%d",&col) != 1 || col<=0) return 1;

    int matrix1[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0 ; j<col; j++){
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }

    matrix *ptr = creatematrix(row,col,matrix1);

    if(ptr == NULL){

        printf("creatematrix fxn failed\n ");
        return 1;        
    }

    display(ptr);

   freematrix(&ptr);
   return 0;
}
