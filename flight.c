// Departure times
#include <stdio.h>
#include <stdlib.h>
int main() {

  int hh, mm;
  printf("Enter a 24 - hour time : ");
  scanf("%d:%d", &hh, &mm);
  int dep1 = 8 * 60 + 0;   // 8:00 am
  int dep2 = 9 * 60 + 43;  // 9:43 am
  int dep3 = 11 * 60 + 19; // 11:19 am
  int dep4 = 12 * 60 + 47; // 12:47
  int dep5 = 14 * 60 + 0;  // 2:00 pm
  int dep6 = 15 * 60 + 45; // 3.45 pm
  int dep7 = 19 * 60 + 0;  // 7:00 pm
  int dep8 = 21 * 60 + 45; // 9:45 pm

  // Arrival times
  int arr1 = 10 * 60 + 16; // 10:16 am
  int arr2 = 11 * 60 + 52; // 11:52 am
  int arr3 = 13 * 60 + 31; // 1:31 pm
  int arr4 = 15 * 60 + 0;  // 3:00 pm
  int arr5 = 16 * 60 + 8;  // 4:08 pm
  int arr6 = 17 * 60 + 55; // 5:55 pm
  int arr7 = 21 * 60 + 20; // 9:20 pm
  int arr8 = 23 * 60 + 58; // 11:58 pm

  int user_time;
  user_time = hh * 60 + mm;

  int dep_time = dep1;
  int arr_time = arr1;

  if (abs(user_time - dep2) < (abs(user_time - dep_time))) {
    dep_time = dep2;
    arr_time = arr2;
  }
  if (abs(user_time - dep3) < (abs(user_time - dep_time))) {
    dep_time = dep3;
    arr_time = arr3;
  }
  if (abs(user_time - dep4) < (abs(user_time - dep_time))) {

    dep_time = dep4;
    arr_time = arr4;
  }
  if (abs(user_time - dep5) < (abs(user_time - dep_time))) {
    dep_time = dep5;
    arr_time = arr5;
  }
  if (abs(user_time - dep6) < (abs(user_time - dep_time))) {
    dep_time = dep6;
    arr_time = arr6;
  }
  if (abs(user_time - dep7) < (abs(user_time - dep_time))) {
    dep_time = dep7;
    arr_time = arr7;
  }
  if (abs(user_time - dep8) < (abs(user_time - dep_time))) {
    dep_time = dep8;
    arr_time = arr8;
  }
  int dephh = dep_time / 60;
  int depmm = dep_time % 60;
  int arrhh = arr_time / 60;
  int arrmm = arr_time % 60;

  if(dephh==12 ){
        printf("Closet departure time is 12 : %.2d PM\n", depmm);
    }
    else if (dephh == 0) {
        printf("Closet departure time is : 12 : %.2d AM\n", depmm);        
    }
    else if (dephh < 12 ){
        printf("Closet departure time is  : %.2d : %.2d AM\n",dephh, depmm);
    }
    else{
        dephh = dephh -12;
        printf("Closet departure time is  :  %.2d : %.2d PM\n ",dephh,depmm );
    }


  if(arrhh==12 ){
        printf("arriving  time is 12 : %.2d PM\n", arrmm);
    }
    else if (arrhh == 0) {
        printf("arrivig time is : 12 : %.2d AM\n", arrmm);        
    }
    else if (arrhh < 12 ){
        printf("arriving time is  : %.2d : %.2d AM\n",arrhh, arrmm);
    }
    else{
        arrhh = arrhh -12;
        printf("arriving time is  :  %.2d : %.2d PM\n ",arrhh,arrmm );
    }    

}
