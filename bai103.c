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

void previous_date(Date date, Date *prev)
{
    *prev = date;
    if(date.day == 1)
    {
        if(date.month == 1)
        {
            prev->month = 12;
            prev->year = date.year - 1;
        }
        else
        {
            prev->month -= 1;
        }
        
        prev->day = Day_of_Month(*prev);
    }
    else
    {
        prev->day = date.day - 1;
       
    }

}

int main()
{
    Date today, previous;
   do
   {
        printf("Nhap vao ngay hom nay: ");
        scanf("%d%d%d", &today.day, &today.month, &today.year);
   }while(today.day > Day_of_Month(today) || today.day <= 0 || today.month > 12 || today.month <= 0);
  previous_date(today, &previous);
   printf("\nNgay hom truoc la: %02d / %02d / %d", previous.day, previous.month, previous.year);
    
}