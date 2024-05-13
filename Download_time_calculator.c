#include<stdio.h>

int main()
{
    float down_speed, Total_size,time;
    printf("Enter the Total size of file : \n");
    scanf("%f", &Total_size);
    printf("Enter download speedl: \n");
    scanf("%f", &down_speed);
    time = Total_size/down_speed;
    printf("Total time required to download the file is %f seconds", time);
    return 0;
}