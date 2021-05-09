
//This file basically includes the game skins
#include<curses.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define DELAY 50000
#include"go.h"
// x = mostly 30 ; y = 30
void display_content(void);
void move_cactus(int);
void jump_dino();
void start_dino(void);
void loss();
void display_point(int);
void move_donkey(int);
int x,y,j;
void display_content(void)//Displaying the sun and the logo and ground

{
    x=y=30;
    init_pair(8,COLOR_BLACK,COLOR_BLACK);
    init_pair(6,COLOR_WHITE,COLOR_BLACK);
    init_pair(2,COLOR_RED,COLOR_BLACK);
    attron(COLOR_PAIR(2));
       mvprintw(x-7, y-25, "  ,d");
       mvprintw(x-6, y-25, "  88");
       mvprintw(x-5, y-25, "MM88MMM 8b,dPPYba,  ,adPPYba, 8b,     ,d8");
       mvprintw(x-4, y-25, "  88    88P\'   \"Y8 a8P_____88  `Y8, ,8P\' ");
       mvprintw(x-3, y-25, "  88    88         8PP\"\"\"\"\"\"\"    )888(  ");
       mvprintw(x-2, y-25, "  88,   88         \"8b,   ,aa  ,d8\" \"8b, ");
       mvprintw(x-1, y-25, "  \"Y888 88          `\"Ybbd8\"' 8P\'     `Y8");
    attroff(COLOR_PAIR(2));
    getch();
    clear();
     
     
      y=10;
      x=10;
      init_pair(4,COLOR_YELLOW,COLOR_BLACK);
      attron(COLOR_PAIR(4));
     mvprintw(y-8, x, "      ;   :   ;");
     mvprintw(y-7, x, "   .   \\_,!,_/   ,");
     mvprintw(y-6, x, "    `.,'     `.,'");
     mvprintw(y-5, x, "     /         \\");
     mvprintw(y-4, x, "~ -- :         : -- ~");
     mvprintw(y-3, x, "     \\         /");
     mvprintw(y-2, x, "    ,'`._   _.'`.");
     mvprintw(y-1, x, "   '   / `!` \\   `");
     mvprintw(y, x, "      ;   :   ;");
      attroff(COLOR_PAIR(4));
    
    
    mvprintw(y-6,x+40,"              ____________\n");
    mvprintw(y-5,x+40,"         ___/             ) \n     ");
    mvprintw(y-4,x+40,"  (                   )\n   ");
    mvprintw(y-3,x+40
             ,"    \\____________________)   ");

    

      attron(COLOR_PAIR(6));
      mvprintw(31,0,"__________________________________________________________________________________________________________________________________________________________________________________");
      attroff(COLOR_PAIR(6));
    refresh();
    check(100);
}
void move_cactus(int cact_x)//Moving the cactus
{
    y = 30;
     init_pair(5,COLOR_GREEN,COLOR_BLACK);
     attron(COLOR_PAIR(5));
       mvprintw(y-6, cact_x, "    _");
       mvprintw(y-5, cact_x, "   ( ) _");
       mvprintw(y-4, cact_x, "  _| |/ )");
       mvprintw(y-3, cact_x, " ( \\  /'");
       mvprintw(y-2, cact_x, "  \\  |");
       mvprintw(y-1, cact_x, "   | |");
       mvprintw(y, cact_x,   "   | |");
       
     attroff(COLOR_PAIR(5));
     refresh();
     usleep(DELAY);
      
     attron(COLOR_PAIR(5));
       mvprintw(y-6, cact_x, "     ");
       mvprintw(y-5, cact_x, "        ");
       mvprintw(y-4, cact_x, "         ");
       mvprintw(y-3, cact_x, "         ");
       mvprintw(y-2, cact_x, "       ");
       mvprintw(y-1, cact_x, "      ");
       mvprintw(y, cact_x,   "      ");
    attroff(COLOR_PAIR(5));
     refresh();
        
     
    
 }
void start_dino()//Making the dino stand
{     int x,y;
    init_pair(2,COLOR_RED,COLOR_BLACK);

    x = 30;
    y = 30;
    attron(COLOR_PAIR(2));
      mvprintw(y-4, x, "          e-e  ");
      mvprintw(y-3, x, "        /(\\_/)");
      mvprintw(y-2, x, ",___.--` /'-` ");
      mvprintw(y-1, x, " '-._, )/'");
      mvprintw(y, x,   "      \\/");
    attroff(COLOR_PAIR(2));

    refresh();
}
void jump_dino()//Making the dino jump
{
     init_pair(2,COLOR_RED,COLOR_BLACK);
    y = 30;
    x = 30;
    attron(COLOR_PAIR(2));
      mvprintw(y-4-8, x, "          e-e  ");
      mvprintw(y-3-8, x, "        /(\\_/)");
      mvprintw(y-2-8, x, ",___.--` /'-` ");
      mvprintw(y-1-8, x, " '-._, )/'");
      mvprintw(y-8, x,   "      \\/");
    attroff(COLOR_PAIR(2));
    

      
    refresh();
}
void clear_dino()//clearing the standing dino
{   y=30;
    x=30;
    mvprintw(y-4, x, "               ");
    mvprintw(y-3, x, "               ");
    mvprintw(y-2, x, "              ");
    mvprintw(y-1, x, "          ");
    mvprintw(y, x,   "         ");
    refresh();
}
void clear_JumpDino()//clearing the jumped dino
{
    init_pair(2,COLOR_RED,COLOR_BLACK);
    attron(COLOR_PAIR(2));
    y = 30;
    x = 30;
    mvprintw(y-4-8, x, "               ");
    mvprintw(y-3-8, x, "               ");
    mvprintw(y-2-8, x, "              ");
    mvprintw(y-1-8, x, "          ");
    mvprintw(y-8, x,   "         ");
    attroff(COLOR_PAIR(2));

    refresh();
}
void loss(void)//displaying loss by changing colour to make it look good
{   x=60;
    y=20;
    for(j=0;j<20;j++)
    {
        init_pair(2,COLOR_RED,COLOR_BLACK);
        init_pair(6,COLOR_WHITE,COLOR_BLACK);
        attron(COLOR_PAIR(2));
    mvprintw(y-6, x-15, "88");
       mvprintw(y-5, x-15, "88");
       mvprintw(y-4, x-15, "88");
       mvprintw(y-3, x-15, "88  ,adPPYba,  ,adPPYba, ,adPPYba,");
       mvprintw(y-2, x-15, "88 a8\"     \"8a I8[    \"\" I8[    \"\"");
       mvprintw(y-1, x-15, "88 8b       d8  `\"Y8ba,   `\"Y8ba, ");
       mvprintw(y, x-15, "88 \"8a,   ,a8\" aa    ]8I aa    ]8I");
       mvprintw(y+1, x-15, "88  `\"YbbdP\"\'  `\"YbbdP\"\' `\"YbbdP\"\'");
       mvprintw(y+3, x-15, "Press 'r' to play again!");
       mvprintw(y+4, x-15, "Or 'q' to exit from game.");
        attroff(COLOR_PAIR(2));
    refresh();
    usleep(DELAY);
        attron(COLOR_PAIR(6));
        mvprintw(y-6, x-15, "88");
        mvprintw(y-5, x-15, "88");
        mvprintw(y-4, x-15, "88");
        mvprintw(y-3, x-15, "88  ,adPPYba,  ,adPPYba, ,adPPYba,");
        mvprintw(y-2, x-15, "88 a8\"     \"8a I8[    \"\" I8[    \"\"");
        mvprintw(y-1, x-15, "88 8b       d8  `\"Y8ba,   `\"Y8ba, ");
        mvprintw(y, x-15, "88 \"8a,   ,a8\" aa    ]8I aa    ]8I");
        mvprintw(y+1, x-15, "88  `\"YbbdP\"\'  `\"YbbdP\"\' `\"YbbdP\"\'");
        mvprintw(y+3, x-15, "Press 'r' to play again!");
        mvprintw(y+4, x-15, "Or 'q' to exit from game.");
        attroff(COLOR_PAIR(6));
        usleep(DELAY);
        refresh();
    }
    getch();
}
void display_point(int point)//displaying points
{
    mvprintw(10,150,"MY SCORE \n");
    mvprintw(11,150,"%d",point);
    refresh();
    
}
void move_donkey(int cact_x)//moving donkey
{    y = 30;
    init_pair(5,COLOR_GREEN,COLOR_BLACK);
    attron(COLOR_PAIR(5));
    mvprintw(y-5, cact_x,"            '__' ");
    mvprintw(y-4, cact_x,"            (o o)");
    mvprintw(y-3, cact_x,"     +========|/");
    mvprintw(y-2, cact_x,"   / || %%% ||");
    mvprintw(y-1, cact_x,"  *  ||-----||");
    mvprintw(y, cact_x,"     ""     """);
    attroff(COLOR_PAIR(5));
    refresh();
    usleep(DELAY);
    attron(COLOR_PAIR(5));
       mvprintw(y-5, cact_x,"                 ");
       mvprintw(y-4, cact_x,"                 ");
       mvprintw(y-3, cact_x,"                ");
       mvprintw(y-2, cact_x,"              ");
       mvprintw(y-1, cact_x,"              ");
       mvprintw(y, cact_x,"              ");
    attroff(COLOR_PAIR(5));
    refresh();
}

    
    
