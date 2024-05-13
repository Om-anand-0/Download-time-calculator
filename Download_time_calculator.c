#include<stdio.h>

int main()
{
    float down_speed, Total_size,time;
    printf("Enter the Total size of file in GB : \n");
    scanf("%f", &Total_size);
    printf("Enter download speed in Mb/s: \n");
    scanf("%f", &down_speed);
    time = Total_size*1024/down_speed;
    time = time/60;
    printf("Total time required to download the file is %.2f minutes & minutes \n", time);
    return 0;
}