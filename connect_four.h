/*
 *Program: connect_four.h
 *Author: Jaydeep Rotithor
 *Date: 4/12/2015
 *Description: contains all of the header files and the game struct needed for connect four
 *Inputs: none
 *Outputs: none
 */

#ifndef CONNECT_FOUR_H
#define CONNECT_FOUR_H
//struct declaration
struct game{
char ** board;
int r,c,p;
char p1;
char p2;
};
//function prototypes
bool is_valid_arguments(char*info[]);
void set_game_info(game* , char *info[]);
char** create_table(int, int);
bool is_board_full(game);
void play_gamep1(game*);
void play_gamep2(game*);
bool check_winner(game);
bool check_winner2(game);
bool check_winner3(game);
bool check_winner4(game);
bool check_winner_two1(game);
bool check_winner_two2(game);
bool check_winner_two3(game);
bool check_winner_two4(game);
void delete_table(game *);
#endif

