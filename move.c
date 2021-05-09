//This file has the random function and moving function
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"go.h"
int random_gen();
void move_stuff(int,int);
int random_gen()//generates random numbers
{
    int lower = 1, upper = 2 ;//limits

       srand(time(0));
           int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}
void move_stuff(int cact_x,int num)//moving the objects based on the randon function output and also has distance parameter
{
      switch(num)//Decide's which to move based on the numbers given
      {
          case 1: move_cactus(cact_x);
                  break;
          case 2: move_donkey(cact_x);
                  break;
      }

    
}


