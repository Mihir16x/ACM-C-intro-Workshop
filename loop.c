#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  //int i = 0;

  // while (i < 5) {
  //   printf("%d\n", i);
  //   i++;
  // }

  // for (i = 0; i < 5; i++) {
  //   printf("%d\n", i);
  // }

  char c;
  printf("Do you want to start this program (Enter 'y' for yes and 'n' to exit): ");
  scanf(" %c", &c);
  getchar();
  

  while (c == 'y')
  {

    char name[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    
    if ( (strcmp(name, "Mark") == 0) || (strcmp(name, "Amy") == 0) || (strcmp(name, "Joe") == 0) ) {

      printf("Name found on guestlist \n"); 
      printf("Enter your age: ");
      scanf("%d", &age);

      int total, time_fee,time;
      int base = 15;

      if (age >= 21) {

        int age_fee = 0;

        printf("Press 1 if you entered the club after 11 P.M. or 0 if you entered before: ");
        scanf("%d", &time);

        if (time == 1) {
          time_fee = 10;
        }
        else {
          time_fee = 0;
        }

        total = base + time_fee + age_fee;

        printf("Your total amount is $%d. Pay and enter. \n", total);

      }
      else if (age >= 18) {

        int age_fee = 10;

        printf("Press 1 if you entered the club after 11 P.M. or 0 if you entered before: ");
        scanf("%d", &time);

        if (time == 1) {
          time_fee = 10;
        }
        else {
          time_fee = 0;
        }

        printf("Since you are not legal drinking age, you will have to make an additional age fee to enter \n");
        total = base + time_fee + age_fee;

        printf("Your total amount is $%d. Pay and enter. \n", total);

      }
      else {
        printf("You are too young to enter! Go do your homework! \n");
      }



    }
    else {
      printf("Name not found on guestlist. Please leave! \n");
    }
        



    printf("Do you want to continue this program (Enter 'y' for yes and 'n' to exit): ");
    scanf(" %c", &c);
    getchar();

  }
  

  return 0;
}