#include<stdio.h>
#include<conio.h>
find_odd_days(int date,int mon,int year)
{
        int odd_days_count=0,i;
        int month[12]={3,0,3,2,3,2,3,3,2,3,2,3};
        if((year%400==0)||((year%4==0)&&(year%100!=0)))
                month[1]=1;
        odd_days_count+=year-1;
        odd_days_count+=((year-1)/4)-((year-1)/100)+((year-1)/400);
        for(i=0;i<mon-1;i++)
                odd_days_count+=month[i];
        odd_days_count+=date;
        odd_days_count=odd_days_count%7;
        return odd_days_count;
}
int main ( )
{
    int odd_days_count;
    char week[7][10] = {"Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int date,mon,year,i,r;
    printf("Enter a valid date in (dd/mm/yyyy) format:-");
    scanf("%d%d%d",&date,&mon,&year);
    odd_days_count=find_odd_days(date,mon,year);
    printf("\nThe day is : %s",week[odd_days_count]);
}
