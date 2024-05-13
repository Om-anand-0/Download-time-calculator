#include<stdio.h>

int main()
{
    int choose;
    float down_speed, Total_size,time, downloaded_size;
    printf("choose the data type: \n1.KB\n2.MB\n3.GB\n");
    scanf("%d", &choose);
    switch(choose)
    {
        case 1:
    printf("Enter the Total size of file in KB : \n");
    scanf("%f", &Total_size);
    printf("Enter the Downloaded size of file in kB : \n");
    scanf("%f", &downloaded_size);
    printf("Enter download speed in Kb/s: \n");
    scanf("%f", &down_speed);
    downloaded_size = Total_size*1024-downloaded_size*1024;
    time = downloaded_size/down_speed;
    time = time/60;
    printf("Total time required to download the file is %.2f minutes & seconds \n", time);
    break;

    case 2:
    printf("Enter the Total size of file in MB : \n");
    scanf("%f", &Total_size);
    printf("Enter the Downloaded size of file in MB : \n");
    scanf("%f", &downloaded_size);
    printf("Enter download speed in Mb/s: \n");
    scanf("%f", &down_speed);
    downloaded_size = Total_size*1024-downloaded_size*1024;
    time = downloaded_size/down_speed;
    time = time/60;
    printf("Total time required to download the file is %.2f minutes & seconds \n", time);
    break;

    case 3:
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
    break;
    }
    return 0;
}
