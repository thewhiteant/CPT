#include <stdio.h>

int main() {
    int mark, Tm = 0, count = 0;
    printf("Enter the marks for each student And Enter -1 for Stop. \n");
    while (1) {  // Loop Infinitely
        printf("Enter student mark: ");  //Ask for mark  
        scanf("%d", &mark);             // Enter mark
        if (mark < 0) {             // If mark is mark<0 
            break;                  // then break the infinite loop
        }   

        Tm = Tm +  mark;         // Add new mark to Total Mark
        count = count+1;                        // Increase Subject Count
    }

    if (count > 0) {    //if  subject_count <= 0 then no mark enterd   
        float average = (float)Tm / count;  // Avarage Math calculation using float .  Avarage = total/count;
        printf("Class average mark: %.2f\n", average);  //print Avarage
    } else {
        printf("No marks entered. Cannot calculate average.\n"); 
    }

    return 0;
}