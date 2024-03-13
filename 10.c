
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *str1, const void *str2) {
    return strcmp((char*)str1, (char*)str2);
}
int main(){
    char names[10][50];
    int num;
    printf("Enter the number of names:");
    scanf("%d",&num);
    getchar(); 
    printf("Enter %d names:",num);
    for(int i=0;i<num;i++){
        gets(names[i]);
    }
   
   qsort(names,num,sizeof(names[0]),compare);
   printf("After sorting");
     for(int i=0;i<num;i++){
        printf("\n%s",names[i]);
    }
    return 0;
}