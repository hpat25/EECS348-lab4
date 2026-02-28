#include <stdio.h>

int main() {
    int score;
    printf("Enter 0 or 1 to STOP\n");
    printf("Enter the NFL score:");
    scanf("%d",&score);

    while(score>1) {
        printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
            int touchdown, touchdown_1, touchdown_2, field_goal, safety_worth;

            for (touchdown_2=0; touchdown_2*8<=score; touchdown_2++){
                for (touchdown_1=0; touchdown_2*8 +touchdown_1*7 <=score; touchdown_1++){
                    for (touchdown=0; touchdown_2*8 +touchdown_1*7+ touchdown*6 <=score; touchdown++){
                        for(field_goal=0; touchdown_2*8 +touchdown_1*7+ touchdown*6+ field_goal*3<=score; field_goal++){
                            for (safety_worth=0; touchdown_2*8 +touchdown_1*7+ touchdown*6+ field_goal*3+safety_worth*2<=score; safety_worth++){
                                int total_score=touchdown_2*8+touchdown_1*7+touchdown*6+field_goal*3+safety_worth*2;

                                if (total_score==score) {
                                    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdown_2,touchdown_1, touchdown,field_goal,safety_worth);
                                }
                            } 
                        }                 
                    }
                }
            }
      
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score:");
        scanf("%d",&score);
    }

}
