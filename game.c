// // index value is 2  8  14
// #include<stdio.h>
// #include<ctype.h>
// #include<windows.h>
// #include<stdlib.h>
// void main()
// {
//     int player1,player2,j=1,k;
//     char s[100];
//     //char a[]={'0','1','2','3','4','5','6','7','8','9'};
//     printf("\n X and O game: ");
    
//     char s1[100]="     |     |     ";
//     char s2[100]="  1  |  2  |  3  ";
//     char s3[100]="     |     |     ";
//     char s4[100]="_________________";
//     char s5[100]="                 ";
//     char s6[100]="     |     |     ";
//     char s7[100]="  4  |  5  |  6  ";
//     char s8[100]="     |     |     ";
//     char s9[100]="_________________";
//     char s10[100]="                 ";
//     char s11[100]="     |     |     ";
//     char s12[100]="  7  |  8  |  9  ";
//     char s13[100]="     |     |     ";
//     while(j=1)
//     {
//     printf("\n");
//     puts(s1);
//     puts(s2);
//     puts(s3);
//     puts(s4);
//     puts(s5);
//     puts(s6);
//     puts(s7);
//     puts(s8);
//     puts(s9);
//     puts(s10);
//     puts(s11);
//     puts(s12);
//     puts(s13);

//     printf("player1 turn : ");
//     scanf("%d",&player1);
//     if(player1==1)
//     {
//         if(s2[2]=='1'){
//         s2[2]='x';   }
//     }
//     else if(player1==2)
//     {
//         s2[8]='x';
//     }
//     else if(player1==3)
//     {
//         s2[14]='x';
//     }
//     else if(player1==4)
//     {
//         s7[2]='x';
//     }
//     else if(player1==5)
//     {
//         s7[8]='x';
//     }
//     else if(player1==6)
//     {
//         s7[14]='x';
//     }
//     else if(player1==7)
//     {
//         s12[2]='x';
//     }
//     else if(player1==8)
//     {
//         s12[8]='x';
//     }
//     else if(player1=9)
//     {
//         s12[14]='x';
//     }

//     printf("\n");
//     puts(s1);
//     puts(s2);
//     puts(s3);
//     puts(s4);
//     puts(s5);
//     puts(s6);
//     puts(s7);
//     puts(s8);
//     puts(s9);
//     puts(s10);
//     puts(s11);
//     puts(s12);
//     puts(s13);

    
    
//     printf("player2 trun : ");
//     scanf("%d",&player2);
//     if(player2==1)
//     {
//         if(s2[2]=='1'){
//         s2[2]='o';}
//     } 
//     else if(player2==2)
//     {
//         if(s2[8]=='2'){
//         s2[8]='o';}
//     }
//     else if(player2==3)
//     {
//         if(s2[14]=='3'){
//         s2[14]='o';}
//     }
//     else if(player2==4)
//     {
//         if(s7[2]=='4'){
//         s7[2]='o';}
//     }
//     else if(player2==5)
//     {
//         if(s7[8]=='5'){
//         s7[8]='o';}
//     }
//     else if(player2==6)
//     {
        
//         s7[14]='o';
//     }
//     else if(player2==7)
//     {
//         s12[2]='o';
//     }
//     else if(player2==8)
//     {
//         s12[8]='o';
//     }
//     else if(player2=9)
//     {
//         s12[14]='o';
//     }   
//     printf("\n");
//     puts(s1);
//     puts(s2);
//     puts(s3);
//     puts(s4);
//     puts(s5);
//     puts(s6);
//     puts(s7);
//     puts(s8);
//     puts(s9);
//     puts(s10);
//     puts(s11);
//     puts(s12);
//     puts(s13);
    
    
   
    
//     Sleep(1000);
//     system("cls");
//     }



    
// }







#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printBoard(char s1[], char s2[], char s3[], char s4[], char s5[], char s6[], char s7[], char s8[], char s9[], char s10[], char s11[], char s12[], char s13[]) {
    printf("\n");
    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);
    puts(s5);
    puts(s6);
    puts(s7);
    puts(s8);
    puts(s9);
    puts(s10);
    puts(s11);
    puts(s12);
    puts(s13);
}

int main() {
    int player1, player2,pt=0,a=1;
    char s1[100] = "     |     |     ";
    char s2[100] = "  1  |  2  |  3  ";
    char s3[100] = "     |     |     ";
    char s4[100] = "_________________";
    char s5[100] = "                 ";
    char s6[100] = "     |     |     ";
    char s7[100] = "  4  |  5  |  6  ";
    char s8[100] = "     |     |     ";
    char s9[100] = "_________________";
    char s10[100] = "                 ";
    char s11[100] = "     |     |     ";
    char s12[100] = "  7  |  8  |  9  ";
    char s13[100] = "     |     |     ";

    while (a==1) {
        printBoard(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
     if(pt==0){
        printf("Player 1 turn (enter 1-9): ");
        scanf("%d", &player1);
        if (player1 == 1 && s2[2] == '1') {
            s2[2] = 'X';
            pt=1;
        } else if (player1 == 2 && s2[8] == '2') {
            s2[8] = 'X';
            pt=1;
        } else if (player1 == 3 && s2[14] == '3') {
            s2[14] = 'X';
            pt=1;
        } else if (player1 == 4 && s7[2] == '4') {
            s7[2] = 'X';
            pt=1;
        } else if (player1 == 5 && s7[8] == '5') {
            s7[8] = 'X';
            pt=1;
        } else if (player1 == 6 && s7[14] == '6') {
            s7[14] = 'X';
            pt=1;
        } else if (player1 == 7 && s12[2] == '7') {
            s12[2] = 'X';
            pt=1;
        } else if (player1 == 8 && s12[8] == '8') {
            s12[8] = 'X';
            pt=1;
        } else if (player1 == 9 && s12[14] == '9') {
            s12[14] = 'X';
            pt=1;
        } else {
            printf("Invalid move. Try again.\n");
            continue;
        }

        printBoard(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
    }else{
        printf("Player 2 turn (enter 1-9): ");
        scanf("%d", &player2);
        if (player2 == 1 && s2[2] == '1') {
            s2[2] = 'O';
            pt=0;
        } else if (player2 == 2 && s2[8] == '2') {
            s2[8] = 'O';
            pt=0;
        } else if (player2 == 3 && s2[14] == '3') {
            s2[14] = 'O';
            pt=0;
        } else if (player2 == 4 && s7[2] == '4') {
            s7[2] = 'O';
            pt=0;
        } else if (player2 == 5 && s7[8] == '5') {
            s7[8] = 'O';
            pt=0;
        } else if (player2 == 6 && s7[14] == '6') {
            s7[14] = 'O';
            pt=0;
        } else if (player2 == 7 && s12[2] == '7') {
            s12[2] = 'O';
            pt=0;
        } else if (player2 == 8 && s12[8] == '8') {
            s12[8] = 'O';
            pt=0;
        } else if (player2 == 9 && s12[14] == '9') {
            s12[14] = 'O';
            pt=0;
        } else {
            printf("Invalid move. Try again.\n");
            continue;
        } 
    }
        
        printBoard(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
         
        if( s2[2]=='X' && s2[8]=='X' && s2[14]=='X' || s7[2]=='X' && s7[8]=='X' && s7[14]=='X' || s12[2]=='X' && s12[8]=='X' && s12[14]=='X' || s2[2]=='X' && s7[8]=='X' && s12[14]=='X' || s2[14]=='X' && s7[8]=='X' && s12[2]=='X' || s2[2]=='X' && s7[2]=='X' && s12[2]=='X' || s2[8]=='X' && s7[8]=='X' && s12[8]=='X' || s2[14]=='X' && s7[14]=='X' && s12[14]=='X'  )
        {
            printf("player1 winner !"); 
            break;
        }
        else if( s2[2]=='O' && s2[8]=='O' && s2[14]=='O' || s7[2]=='O' && s7[8]=='O' && s7[14]=='O' || s12[2]=='O' && s12[8]=='O' && s12[14]=='O' || s2[2]=='O' && s7[8]=='O' && s12[14]=='O' || s2[14]=='O' && s7[8]=='O' && s12[2]=='O' || s2[2]=='O' && s7[2]=='O' && s12[2]=='O' || s2[8]=='O' && s7[8]=='O' && s12[8]=='O' || s2[14]=='O' && s7[14]=='O' && s12[14]=='O' )
        {
            printf("player2 winner !");
            break;
        }
        else
        {
            printf("no one winner...");
        }

        printBoard(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);

        if( s2[2]!='1' && s2[8]!='2' && s2[14]!='3' && s7[2]!='4' && s7[8]!='5' && s7[14]!='6' && s12[2]!='7' && s12[8]!='8' && s12[14]!='9' )
        {
            printf("match is tie....");
            a=2;
          
        }

        

        


        // Sleep(1000);
        // system("cls");




    }
    

    return 0;
}
