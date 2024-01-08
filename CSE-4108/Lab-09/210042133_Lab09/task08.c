#include <stdio.h>

int main()
{
    int score[5][5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter scores of Quiz %d:\n", i+1);
        for(int j = 0; j < 5; j++)
        {
            printf("Student %d: ", j+1);
            scanf("%d", &score[i][j]);
        }
    }
    int high[5], low[5], sum;
    double avg_quiz[5];
    for(int i = 0; i < 5; i++)
    {
        sum = score[i][0];
        high[i] = score[i][0], low[i] = score[i][0];
        for(int j = 1; j < 5; j++)
        {
            sum+= score[i][j];
            if(score[i][j] > high[i]) high[i] = score[i][j];
            if(score[i][j] < low[i]) low[i] = score[i][j];
        }
        avg_quiz[i] = sum / 5.0;
    }

    int total[5];
    double avg_stdnt[5];
    for(int i = 0; i < 5; i++)
    {
        total[i] = 0;
        for(int j = 0; j < 5; j++)
        {
            total[i]+= score[j][i];
        }
        avg_stdnt[i] = total[i]/5.0;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Result of Quiz %d:\n", i+1);
        printf("High: %d\tLow: %d\tAverage: %.2lf\n", high[i], low[i], avg_quiz[i]);
    }
    printf("Individual Result: ");
    for(int i = 0; i < 5; i++)
    {
        printf("Student #%d: Total: %d\tAverage: %.2lf\n",i+1, total[i], avg_stdnt[i]);
    }

    return 0;
}
