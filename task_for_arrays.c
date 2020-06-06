#include <stdio.h>
#define STUDENTS 3

// Description of function // 
float get_average (float scores[], int n);

// Main part //
int main(void)
{
    float s1, s2, s3;

    printf("Enter scores of 3 students : ");
    scanf("%f, %f, %f", &s1, &s2, &s3);

    float scores[STUDENTS] = {s1, s2, s3};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("Average is %d\n", avg);

    return 0;
}
// Code of function //
float get_average (float scores[], int n)
{
    int i;
    float  sum = 0;

    for(i = 0; i < n; i++)
     sum += scores[i];

     return sum / n;

}
