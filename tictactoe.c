#include<stdio.h>
// #include<string.h>

int display(char grid[3][3]);
int askinput(char grid[3][3],char currentplayer);
int checkwon(char grid[3][3]);
int main(void){
    char grid[3][3];
    char currentplayer ;
    printf("choose either X or O to make your first move with this symbol :");
    scanf("%c",&currentplayer);
    
    for(int i = 0;  i<3; i++){
        for(int j = 0; j<3; j++){
            grid[i][j] = ' ';
        }
    } 
    
    for(int k = 0; k<9;k++){

        display(grid);
        printf("\nenter the row and column :");

        int move_success = 0;
        while(move_success == 0){
            move_success = askinput(grid,currentplayer);
        }

        if(checkwon(grid) == 1){
            display(grid);
            printf("\nplayer %c wins the game!\n",currentplayer);
            return 0;
        }

        if(k == 8){
            display(grid);
            printf("\nIt is draw!!\n");

            return 0;

        }

        currentplayer = (currentplayer == 'X') ? 'O' : 'X'; 

    }
    return 0;
}
int display(char grid[3][3]){

    for (int i = 0; i<3; i++){
        for(int j = 0 ; j<3 ; j++){

            printf("%c", grid[i][j]);
            if(j<2){
                printf("|");
            }
        }
        if(i<2){
            printf("\n------\n");
        }
    }
    return 0;

}
int askinput(char grid[3][3],char currentplayer){
    int i,j;
    scanf("%d%d",&i,&j);

    if(i<0 || i>2 || j<0 || j>2){
        printf("\nInvalid postion , try again\n");
        return 0;

    }
    if( grid[i][j] != ' '){
        printf("\nposition is already filled :");
        return 0;
    }

    grid[i][j] = currentplayer;
    return 1;


}
int checkwon(char grid[3][3]){
    for(int i = 0; i<3 ; i++){
        if(grid[i][0] != ' ' && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]){
            return 1; 
        }
    }    
    for(int j = 0; j<3 ; j++){
        if(grid[0][j] != ' ' && grid[0][j] == grid[1][j] && grid[1][j]== grid[2][j]){
            return 1; 
        }
    }

    if (grid[0][2] != ' ' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        return 1;
    }

    if (grid[0][0] != ' ' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        return 1;
    }
    return 0;


}



