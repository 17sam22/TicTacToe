#include <stdio.h>
#include <stdlib.h>

//This is a game where you play the code in tictactoe

int printRandoms(int lower, int upper, int count); 

int main() {

    printf("This is a game of TicTacToe and you will play against the computer\n");
    printf("You are going to be X, though your X's will show up in the grid as ones and the computer's O's will show up as twos.\n"); 

    int arr[3][3] = {0, 0, 0,
                     0, 0, 0,
                     0, 0, 0}; //creating the 3x3 matrix for the tictactoc game 

    printf("here is the initial board:\n"); 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix 
    
    printf("the numbers of the array are set as follows, the first number is row and second column:\n");  

    int arr1[3][3] = {00, 01, 02 ,
                      10, 11, 12 , 
                      20 , 21 , 22 }; //creating visual for user 

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr1[i][j]); 
        }
        printf("\n"); 
    } //printing the visual 

    
    printf("when you want to put your X in the board you must enter the row number and the column number one at a time\n");
    printf("Type in the row number for your first X (zero to two) \n"); 
    int r; 
    scanf("%d", &r);

    //need to add if statements for if the number is not in the range of 0-2

    printf("type in the column number for your first X (zero to two) \n"); 
    int c; 
    scanf("%d", &c); 

    //need to add if statements for if the number is not in the range of 0-2

    arr[r][c] = 1; 

    printf("here is your placement:\n"); 

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix 

    printf("Now the cumputer will go:\n"); 

    int row; 
    int column; 

        row = printRandoms(0, 2, 1);  
        column = printRandoms(0, 2, 1); 

    while(arr[row][column] != 0){
        row  = printRandoms(0, 2, 1); 
        column = printRandoms(0, 2, 1); 
    }
    
    arr[row][column] = 2; 

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix after computer goes

    printf("Your turn again, type in the row number:\n"); 
    int r2; 
    scanf("%d", &r2); 

    printf("Now type the column number:\n"); 
    int c2; 
    scanf("%d", &c2); 

    while( arr[r2][c2] != 0){
        printf("This place is already taken type in a new row than column number:"); 
        scanf("%d", &r2); 
        scanf("%d", &c2);
    }

    arr[r2][c2] = 1; 

    printf("here is your placement:\n"); 

      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix 

    printf("now the computers turn again:\n"); 

    row = printRandoms(0, 2, 1);  
    column = printRandoms(0, 2, 1); 

    while(arr[row][column] != 0){
        row  = printRandoms(0, 2, 1); 
        column = printRandoms(0, 2, 1); 
    }
    
    arr[row][column] = 2; 

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix after computer goes

    printf("Your turn again, type in the row number:\n"); 
    int r3; 
    scanf("%d", &r3); 

    printf("Now type the column number:\n"); 
    int c3; 
    scanf("%d", &c3); 

    while( arr[r3][c3] != 0){
        printf("This place is already taken type in a new row than column number:"); 
        scanf("%d", &r3); 
        scanf("%d", &c3);
    }

    arr[r3][c3] = 1; 

    printf("here is your placement:\n"); 

      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%d", arr[i][j]); 
        }
        printf("\n"); 
    } //printing matrix 

    printf("if you have three in a row, BRAVO you win!, type 1 if you just won or type 0 to keep playing.\n"); 
    
    int obsticle; //need to add if statement for if 1 or 0 isn't inputed
    scanf("%d", &obsticle); 

    if (obsticle == 1){
        printf("game over");
        return -1; 
    }else{
        printf("computer's go:\n"); 
         row = printRandoms(0, 2, 1);  
        column = printRandoms(0, 2, 1); 

        while(arr[row][column] != 0){
            row  = printRandoms(0, 2, 1); 
            column = printRandoms(0, 2, 1); 
        }
    
        arr[row][column] = 2; 

    
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                printf("%d", arr[i][j]); 
            }
            printf("\n"); 
        } //printing matrix after computer goes

         printf("if you have not lost it is your turn again, type in the row number:\n"); 
        int r3; 
        scanf("%d", &r3); 

        printf("Now type the column number:\n"); 
        int c3; 
        scanf("%d", &c3); 

        while( arr[r3][c3] != 0){
            printf("This place is already taken type in a new row than column number:"); 
            scanf("%d", &r3); 
            scanf("%d", &c3);
        }

        arr[r3][c3] = 1; 

        printf("here is your placement:\n"); 

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                printf("%d", arr[i][j]); 
            }
            printf("\n"); 
        } //printing matrix 

        printf("if you have three in a row, BRAVO you win!, type 1 if you just won or type 0 to keep playing.\n");

        int obstacle2; 
        scanf("%d", &obstacle2); 
        
        if (obstacle2 == 1){
            printf("game over");
            return -1; 
        }else{
            printf("computer's go:\n"); 
            row = printRandoms(0, 2, 1);  
            column = printRandoms(0, 2, 1); 

            while(arr[row][column] != 0){
                row  = printRandoms(0, 2, 1); 
                column = printRandoms(0, 2, 1); 
            }
    
            arr[row][column] = 2; 

    
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++) {
                    printf("%d", arr[i][j]); 
                }
                printf("\n"); 
            } //printing matrix after computer goes

            printf("it is your final turn, I hope you win!\n"); 

            printf("if you have not lost it is your turn again, type in the row number:\n"); 
            int r4; 
            scanf("%d", &r4); 

            printf("Now type the column number:\n"); 
            int c4; 
            scanf("%d", &c4); 

            while( arr[r4][c4] != 0){
                printf("This place is already taken type in a new row than column number:"); 
                scanf("%d", &r4); 
                scanf("%d", &c4);
            }

            arr[r4][c4] = 1; 

            printf("here is your placement:\n"); 

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++) {
                    printf("%d", arr[i][j]); 
                }
                printf("\n"); 
            } //printing matrix 

            printf("I hope you won because the numbers the computer was using were completly random and it had no stratgy what so ever.\n Play again sometime!"); 

            return 0; 

        }

    }

}

int printRandoms(int lower, int upper, int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        return num; 
    } 
    
} 