#include <stdio.h>
#include <time.h>

// Kiem tra nam thuan
int nam_thuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void new_year(int year, int *day, int *month, int *weekday) {
   *day = 10;
   *month = 2;
   struct tm t = {0};
   t.tm_year = year - 1900; // nam
   t.tm_mon = *month - 1;   // thang
   t.tm_mday = *day;        // ngay
   mktime(&t);
   *weekday = t.tm_wday; // thu (0 = Chu nhat, 1 = Thu 2, ...)
}

int main() {
    int year, day, month, weekday;
    scanf("%d", &year);
    new_year(year, &day, &month, &weekday);
    printf("Tet nam %d la roi vao: ", year);
    switch (weekday) {
      case 0: printf("Chu nhat");
      break;
      case 1: printf("Thu hai"); 
      break;
      case 2: printf("Thu ba"); 
      break;
      case 3: printf("Thu tu"); 
      break;
      case 4: printf("Thu nam"); 
      break;
      case 5: printf("Thu sau"); 
      break;
      case 6: printf("Thu bay"); 
      break;
    }
    return 0;
}