/* Q3)Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard. Assign grade 
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: */

#include<stdio.h>
int main()
 {
    int marks[5];
    int total = 0;
    float average;
    
    printf("Enter marks for five subjects:\n");
     for (int i = 0; i < 5; i++) 
     {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
     }
    
    average = (float)total / 5.0;
    
         printf("Total Marks: %d\n", total);
          if (total >= 90) 
           {
            printf("Grade: Ex\n");
           } 
          else if (total >= 80)
            {
             printf("Grade: A\n");
            }
              else if (total >= 70)
               {
                printf("Grade: B\n");
               }
                 else if (total >= 60) 
                 {
                  printf("Grade: C\n");
                 } 
                 else 
                 {
                  printf("Grade: F\n");
                 }  
                 
               
    return 0;
}
q3