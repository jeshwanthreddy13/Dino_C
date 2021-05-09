//This code controls starts and stops the game
#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include"go.h"

int main()
{   int c;
    initscr();//opening a new terminal segment
    start_color();//starting the colour to be displayed on the terminal
while( (c = getch()) == 114)//Waiting for r if r is given then yes start again
{
    start_game();
    clear();//clearing the screen for a new game
}
    endwin();//ending the terminal
    return 0;
    
}

