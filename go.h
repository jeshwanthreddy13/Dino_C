//To move the cactus or if used continuously motion of the cactus
void move_cactus(int);
//To make the Dino jump at the same standing position
void jump_dino(void);
//Very important function to start the game and display the content
void start_game(void);
//this is like the brain of the program and manages the motion of the obstacles and jumping and input .It consists of if else and while to achieve the status of brain of the game
void check(int);
//Its called by start game and displays the ground and sun
void display_content(void);
//it start the dino>it means that it makes the Dino appear on the screen
void start_dino(void);
//it clears the standing Dino by printing blank space at the position of the standing Dino
void clear_dino(void);
//It clears the Dino that has jumped when a kbhit() return 1
void clear_JumpDino(void);
//This is a very important function as is what makes the game user interactive it keeps on giving 0 until the user enter’s a input and then after it passes the input to a getch function it again gives zero and helps the Dino come back to its position
int kbhit(void);
//it displays loss if the user has lost
void loss(void);
//It displays the point continuously on the screen
void display_point(int);
//Same as move cactus but instead of cactus its donkey
void move_donkey(int);
//Its displays a random number from 1 to 3 so as to decide which obstacle to send and makes the game tricky
int random_gen(void);
//It moves the two obstacles based on the number it received from the random function it is based on switch statement
void move_stuff(int ,int);


