#include<stdio.h>
#include<string.h>
int main(){
 char *p[] = {"dsd","sdsd","safaaf","sd"};
int size = sizeof(p)/sizeof(char *);
for(int i=0;i<size-1;i++){
for(int j=i+1;j<size;j++){
    if(strcmp(p[i],p[j])==0)
        printf("Duplicate string: %s",p[i]);
}
}
}