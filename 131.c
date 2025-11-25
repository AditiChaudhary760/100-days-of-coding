#include <stdio.h>

enum Day {
    SUNDAY,    
    MONDAY,    
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY,  
    FRIDAY,    
    SATURDAY  
};

int main(void) {
   
    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d = ", d);
        switch (d) {
            case SUNDAY:    printf("Sunday\n");    break;
            case MONDAY:    printf("Monday\n");    break;
            case TUESDAY:   printf("Tuesday\n");   break;
            case WEDNESDAY: printf("Wednesday\n"); break;
            case THURSDAY:  printf("Thursday\n");  break;
            case FRIDAY:    printf("Friday\n");    break;
            case SATURDAY:  printf("Saturday\n");  break;
            default:        printf("Unknown\n");   break;
        }
    }

    return 0;
}
