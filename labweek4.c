#include <stdio.h>
int addTen(int x)
{
    x = x + 10;
    return x;
}
int addTwenty(); //ประกาศฟังก์ชั่น
int x = 1000;
int main()
{
    int x = 50;
    int y = addTen(x);
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
    printf("x in addTwenty = %d\n",x);
}
int addTwenty (){
    printf("x in addTwenty = %d\n",x);
    x = x +20;
    return x;
}