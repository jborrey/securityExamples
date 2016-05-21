//formatHack.c

#include <stdlib.h>
#include <stdio.h>

#define NAME_BUF 100
#define NUM_NEWLINE 60

int main(int argc, char* argv[]){
  
   while(1){
      //welcome message - sign up
      printf("\n\n\nHello - Please enter a user name to sign up: ");
   
      //take user name
      char password[NAME_BUF];
      char userName[NAME_BUF];
      //char tempBuf[NAME_BUF];
      scanf("%s", userName);
       
      //print welcome <username> and ask for password
      printf("Welcome ");
      printf(userName);
      printf(".\n\nPlease provide a password for your account: ");
   
      //get password
      scanf("%s", password);

      //printf("\n %s and %s\n\n", userName, password);

      int i = 0;
      while(i < NUM_NEWLINE){
         printf("\n");
         i++;
      }

      //thanks
      printf("Thank you. Please come back later after we have finished registering you.\n");
   }
   
   return EXIT_SUCCESS;
}
