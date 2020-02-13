#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 100;
    int a = 0144;
    int b = 0x64;
    printf("x = %d\n",x);
    printf("reference x = %lu\n",&x); //แสดงแอดเดรสของ x จะเข้าถึงต้องมี &
    printf("reference x = %p\n",&x); //%p แสดงแอสเดรสแบบฐาน 16
    int number[] = {4,5,6,7,8}; //อาเรย์มีขนาด 5 
    //int number[100]; //มีขนาด 100 ยังไม่มีข้อมูล
    //int number[100] = {3,4,5,6,7}; // ขนาด 100 มีข้อมูล 5 ตัว ที่เหลือ default
    //number[2000] = 2000; //ตำแหน่งที่ number[1999] มีค่า 2000
    //ตัวแปรธรรมดาเก็บค่า ตัวแปรพ้อยเตอร์เก็บแอดเดรส 
    //พ้อยเตอร์จะบวกขนาดของตัวแปร int จะเพิ่มไป 4
    int *ptr = &x; //เก็บค่า และแอดเดรส ของ x
    int *arrPtr;
    arrPtr = number; //การใช้ = ในพย้อเตอร์ เป็นการชี้ไปดั่ง แอดเดรส เดียวกัน
    //*arrPtr = *arrPtr+10;
    printf("arrptr = %p, *arrPtr =%d",arrPtr,*arrPtr); 
    char c;
    int i;
    char s[100];
    scanf("%d-%c-%s",&i,&c,s); //s รับเป็นปกติไม่ต้องมี &
}