#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdbool.h> //For supporting bool

// In this header file everything is declared
extern char board[3][3];

void display_board();
void reset_board();
void make_move(char play);
bool check_win();
bool check_draw();
int minimax(char board[3][3], bool isMaximizing, char p, char c);
void computer_move(char play, char c);
int evaluate_board(char board[3][3], char c, char p);
void clear();
void save_score(const char *mode, int score);
int load_score(const char *mode);
void reset_scores();

void display_menu();
void start_game();
void show_high_scores();
void show_tutorial();



#endif // FUNCTIONS_H
