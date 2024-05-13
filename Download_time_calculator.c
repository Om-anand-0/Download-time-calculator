#include<stdio.h>

int main()
{
    float down_speed, Total_size,time, downloaded_size;
    printf("Enter the Total size of file in GB : \n");
    scanf("%f", &Total_size);
    printf("Enter the Downloaded size of file in GB : \n");
    scanf("%f", &downloaded_size);
    printf("Enter download speed in Mb/s: \n");
    scanf("%f", &down_speed);
    downloaded_size = Total_size*1024-downloaded_size*1024;
    time = downloaded_size/down_speed;
    time = time/60;
    printf("Total time required to download the file is %.2f minutes & seconds \n", time);
    return 0;
}