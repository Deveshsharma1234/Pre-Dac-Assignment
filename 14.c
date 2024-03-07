// Command to find palondrome

#include<stdio.h>
#include<string.h>
int main (){ 
   char str[]= {"abbba"};
   int A = 0;
   int L= strlen(str)-1;
   while   (L>A) {
    if (str[A++] != str[L--]){
        printf("%s is not a palindrome\n",str);
        return 0;


    }
   }
   printf("%s is palindrome\n",str);
   return 0;
   }
