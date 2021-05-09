


//brain of the game
#include<curses.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define DELAY 100000
#include"go.h"
//dino cactus relative max distance is 43

void start_game(void);
void check(int);

void start_game( )
{
    display_content();
    
}
int point = 0,input,i,saver=1,n=1;
//The brain of the program
 void check(int cact_x)
{   input  = 0;
    
    while((saver))

    {
        
    if(cact_x < 10)//checks if a new object should be started
    {   n = random_gen();//takes the random number generaed
        cact_x = 100;
    }
    
    else
        if(kbhit() && (cact_x > 44) && (cact_x < 54))//You can change the difficulty
        //Checks if the user has responded at the correct distance
        {
        input = getch();
        clear_dino();
        jump_dino();
        move_stuff(cact_x,n);
               cact_x--;
        point = point +1;
            display_point(point);//It displays the points
            input = input + 1;
           
    }
     else
         if (kbhit() )//If input is given out of range
    {//This is normal jumping if user gives input
        input = getch();
        clear_dino();
        jump_dino();
        
        move_stuff(cact_x,n);
        cact_x--;
        display_point(point);

        
    }
    else
        if(cact_x  == 45)//If no input or user response within the range then out(lost)
        {
            
            
            
            
            loss();//displays that the player has lost
            saver = 0;//terminates from the while loop
            display_point(point);

            
        }
    else
        if(input != 0)
        {
            for(i=0;i<23;i++)
            {
                move_stuff(cact_x,n);
                cact_x--;
            }
            input = 0;
            display_point(point);

            
        }
    else
        {
            clear_JumpDino();
            start_dino();
            move_stuff(cact_x,n);
            cact_x--;
            display_point(point);

        }
    
         
         
   }
}

