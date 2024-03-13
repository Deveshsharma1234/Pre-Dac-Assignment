//Command line argument concept is not clear
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    int sum = 0;
    for(int i=1;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("The sum is: %d",sum);
    return 0;
}
