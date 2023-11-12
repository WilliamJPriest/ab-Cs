# include <stdio.h>

int main (){
    int i;
    for( i = 0; i<3;++i){
        if(i==2){
            printf("Not Gay %d",i);
        }else{
            printf(

                "  ____             \n"
                " / ___| __ _ _   _ \n"
                "| |  _ / _` | | | |\n"
                "| |_| | (_| | |_| |\n"
                " \\____|\\__,_|\\__, |\n"
                "             |___/ \n"

                "%d \n",i);
        }                 
    }
    return 0;
}
