#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){

    srand(time(NULL));

    char canvas[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            canvas[i][j] = '.';
        }
    }

    
    int x = 0;
    int y = 0;
    int lastx = -1;
    int lasty = -1;
    int cnt=0;
    canvas[x][y] = 'A';
    for(int i=1;i<26;i++){

        if(lastx==x && lasty==y){
            cnt++;            
        }else{
            cnt=0;
        }

        if(cnt>100){
            break;
        }
        
        int dir = rand()%4;
        if(dir==0){
            if(x-1>=0 && canvas[x-1][y]=='.'){
                x--;
            }else{
                i--;
            }
        }else if(dir==1){
            if(x+1<10 && canvas[x+1][y]=='.'){
                x++;
            }else{
                i--;
            }
        }else if(dir==2){
            if(y-1>=0 && canvas[x][y-1]=='.'){
                y--;
            }else{
                i--;
            }
        }else if(dir==3){
            if(y+1<10 && canvas[x][y+1]=='.'){
                y++;
            }else{
                i--;
            }
        }

        lastx = x;
        lasty = y;


        canvas[x][y] = 'A'+i;
    }


    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%c",canvas[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}