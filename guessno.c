#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number ,guess ;
srand(time(0));
number = rand() % 10 +1 ; //random number 1-10
printf("GUESS A NUMBER BETWEEN 1 AND 10 😊 : ");
scanf("%d",&guess);
if(guess == number )
{
printf("CORRECT !! 😁👍");
}
else
{
printf("WRONG !! 😒 THE NUMBER WAS %d" ,number);
}
return 0 ;
}


