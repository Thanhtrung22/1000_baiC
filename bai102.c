#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int day; 
    int month;
    int year;
}Date;
bool check_year(Date date)
{
    bool flag = false;
    if((date.year % 400 == 0) || (date.year % 4 == 0 && date.year % 100 != 0))
    {
        flag = true;
    }
    return flag;
}

int Day_of_Month(Date date)
{
    int day = 0;
    switch(date.month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            day = 31;
            break;
        }
        case 2:
        {
            if(check_year(date))
            {
                day = 29;
            }
            else
            {
                day = 28;
            }
            break;
        }
        default:
        {
            day =  30;
        }
    }
    return day;
}

void next_date(Date date, Date *next)
{
    *next = date;
     next->day = date.day % (Day_of_Month(date)) + 1;
     if(next->day == 1)
     {
        next->month = next->month % 12 + 1;
     }
     if(next->month == 1 && next->day == 1)
     {
        next->year += 1;
     }

}

int main()
{
    Date today, next_day;
   do
   {
        printf("Nhap vao ngay hom nay: ");
        scanf("%d%d%d", &today.day, &today.month, &today.year);
   }while(today.day > Day_of_Month(today) || today.day <= 0 || today.month > 12 || today.month <= 0);
   next_date(today, &next_day);
   printf("\nNgay hom sau la: %02d / %02d / %d", next_day.day, next_day.month, next_day.year);
    
}