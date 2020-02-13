#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main()
{
    printf("Enter name : ");
    //gets(name); //ดึงตั้งแต่คำแรกจนถึง \n (get string)
    //fgets(name, 20, stdin); //file get string อ่านได้หลายที่ stdin = keyboard กำหนด buffer เอง
    //getchar(chr); buffer = 1 ตัวเดียว
    //printf("%s",name);
    //int i = atoi(number); // atoi = alle to integer
    //long l = atol();
    //double d = atof();
    //puts(number);
    //putchar(100);
    //putchar('u');
    //ค่า false นอกนั้น true 
    int found = 0;
    //float isExist = 0.0;
    //char isOnline = '\0';
    fgets(number,5,stdin);
    int i = i atoi(number);
    if (i > 0 && i <= 10)
    {
        printf("if = %d\n", i > 0 && i <= 10);
    }else if (i <= 20 || !found){
        printf("else\n");
    }
}