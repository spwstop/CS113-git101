#include <stdio.h>
#include <stdlib.h>
int addTen(int *numbers,int n) //pass by ref.
{
    for (int i = 0;i < n;i++)
    {
        printf("[%p] = %d\n",numbers + i ,*(numbers + 0 )); //เปลี่ยนค่าในอาเรย์ numbers
        *(numbers + 1) += 10;
    }
}


void addTwenty(int *n)
{
    *n += 20;
}


int main()
{
    int numbers[] = {4,5,6,7,8};
    int n = 5 ;
    addTen (numbers,n); //ส่งค่าเข้าไปในฟังก์ชัน
    for (int i = 0 ; i < n ; i ++ )
    {
        printf("[%p] = %d\n",numbers + i ,*(numbers + i ));
    }
    addTwenty(&n);  //ส่งแอดเดรส;
    printf("n = %d",n);
}