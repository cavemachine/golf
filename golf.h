#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <time.h>
#include <SDL2/SDL_image.h>

#define CARD_WIDTH 70
#define CARD_HEIGHT 95
struct card {
    int value;
    char suit;
    bool available;
    SDL_Texture *card_image;
};

struct deck_stack {
    struct card *card[17];
    int top;
};

struct big_pile_stack {
    struct card *card[52];
    int top;
    int top_x;
    int top_y;
};    

struct column_stack {
    struct card *card[5];
    bool selected;
    int top;
    int top_x;
    int top_y;
};

struct card deck[4][13];
int big_pile_count;

struct big_pile_stack big_pile;
struct deck_stack deck_stack;
struct column_stack *column_stack_list[7];
struct column_stack column_stack1;
struct column_stack column_stack2;
struct column_stack column_stack3;
struct column_stack column_stack4;
struct column_stack column_stack5;
struct column_stack column_stack6;
struct column_stack column_stack7;

int number_of_deck_cards = 0;

SDL_Window * window = NULL;
SDL_Renderer * renderer = NULL;
SDL_Rect card_rect;

//--------------------------------------------------------
void create_column(struct column_stack *_stack);
void pop_column_stack(struct column_stack *_stack);
void associate_deck_images();
void create_deck();
void print_deck();
void print_column(struct column_stack *_stack);
void create_deck_stack();
void pop_deck_stack();
void print_deck_stack();
void initialize_SDL();
void render_column(struct column_stack *_stack, int column_number);
void render_big_pile();
void add_to_big_pile(struct card *_card);
void check_mouse_click(int mouse_x, int mouse_y);
void render_back_card();
