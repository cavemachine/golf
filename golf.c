#include "golf.h"
#include "images.h"

//--------------------------

void initialize_SDL() {
    SDL_Init(SDL_INIT_VIDEO);
    srand(time(NULL));
    
    window = SDL_CreateWindow("Cave golf",
    			      SDL_WINDOWPOS_CENTERED,
    			      SDL_WINDOWPOS_CENTERED,
    			      800,
    			      420,
    			      SDL_WINDOW_SHOWN );
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
}

void create_deck() {
    char actual_suit;   
    for (int y = 0; y < 4; y++) {
	switch(y) {
	case 0:
	    actual_suit = 'c';
	    break;
	case 1:
	    actual_suit = 's';
	    break;
	case 2:
	    actual_suit = 'h';
	    break;
	case 3:
	    actual_suit = 'd';
	    break;		
	}	
	for (int x = 0; x < 13; x++) {
	    deck[y][x].value = x+1;
	    deck[y][x].suit = actual_suit;
	    deck[y][x].available = true;
	    number_of_deck_cards++;
	}
    }
}
void create_big_pile() {
    big_pile.card[0] = deck_stack.card[deck_stack.top];
    big_pile.top = 0;
    big_pile.top_x = 100;
    big_pile.top_y = 300;
    big_pile_count++;

    deck_stack.top--;
    number_of_deck_cards--;
}
void create_column(struct column_stack *_stack) {
    int y;
    int x;
    
    y = rand() % 4;
    x = rand() % 13;
    
    for (int i = 0; i < 5; i++) {
	
	while (deck[y][x].available == false) {
	    y = rand() % 4;
	    x = rand() % 13;
	}
	_stack->card[i] = &deck[y][x];
	_stack->top = i;
	
	deck[y][x].available = false;
	number_of_deck_cards--;
	
    }	
}
void create_deck_stack() {
    int y;
    int x;
    
    for (int i = 0; i < 17; i++) {
	y = rand() % 4;
	x = rand() % 13;
	while (deck[y][x].available == false) {
	    y = rand() % 4;
	    x = rand() % 13;	    
	}
	deck_stack.card[i] = &deck[y][x];
	deck_stack.top = i;
	
	deck[y][x].available = false;
    }
    
    for (int i = 0; i < 17; i++) {
	deck_stack.card[i]->available = true;
    }
}
void create_all_column() {
    create_column(&column_stack1);    
    create_column(&column_stack2);
    create_column(&column_stack3);     
    create_column(&column_stack4); 
    create_column(&column_stack5);
    create_column(&column_stack6);
    create_column(&column_stack7);
    column_stack_list[0] = &column_stack1;
    column_stack_list[1] = &column_stack2;    
    column_stack_list[2] = &column_stack3;
    column_stack_list[3] = &column_stack4;
    column_stack_list[4] = &column_stack5;   
    column_stack_list[5] = &column_stack6;
    column_stack_list[6] = &column_stack7; 
}
void associate_deck_images() {
    deck[0][0].card_image = c_1;
    deck[0][1].card_image = c_2;
    deck[0][2].card_image = c_3;
    deck[0][3].card_image = c_4;
    deck[0][4].card_image = c_5;
    deck[0][5].card_image = c_6;
    deck[0][6].card_image = c_7;
    deck[0][7].card_image = c_8;
    deck[0][8].card_image = c_9;
    deck[0][9].card_image = c_10;
    deck[0][10].card_image = c_11;
    deck[0][11].card_image = c_12;
    deck[0][12].card_image = c_13;
    deck[1][0].card_image = s_1;
    deck[1][1].card_image = s_2;
    deck[1][2].card_image = s_3;
    deck[1][3].card_image = s_4;
    deck[1][4].card_image = s_5;
    deck[1][5].card_image = s_6;
    deck[1][6].card_image = s_7;
    deck[1][7].card_image = s_8;
    deck[1][8].card_image = s_9;
    deck[1][9].card_image = s_10;
    deck[1][10].card_image = s_11;
    deck[1][11].card_image = s_12;
    deck[1][12].card_image = s_13;
    deck[2][0].card_image = h_1;
    deck[2][1].card_image = h_2;
    deck[2][2].card_image = h_3;
    deck[2][3].card_image = h_4;
    deck[2][4].card_image = h_5;
    deck[2][5].card_image = h_6;
    deck[2][6].card_image = h_7;
    deck[2][7].card_image = h_8;
    deck[2][8].card_image = h_9;
    deck[2][9].card_image = h_10;
    deck[2][10].card_image = h_11;
    deck[2][11].card_image = h_12;
    deck[2][12].card_image = h_13;
    deck[3][0].card_image = d_1;
    deck[3][1].card_image = d_2;
    deck[3][2].card_image = d_3;
    deck[3][3].card_image = d_4;
    deck[3][4].card_image = d_5;
    deck[3][5].card_image = d_6;
    deck[3][6].card_image = d_7;
    deck[3][7].card_image = d_8;
    deck[3][8].card_image = d_9;
    deck[3][9].card_image = d_10;
    deck[3][10].card_image = d_11;
    deck[3][11].card_image = d_12;
    deck[3][12].card_image = d_13;     
}

void pop_column_stack(struct column_stack *_stack) {
    _stack->top--;   
}
void pop_deck_stack() {
    deck_stack.top--;
    number_of_deck_cards--;
}
void add_to_big_pile(struct card *_card) {
    big_pile.top++;
    big_pile.card[big_pile.top] = _card;
    big_pile_count++;
}

void print_deck() {
    
    for (int y = 0; y < 4; y++) {
	switch (y) {
	case 0:
	    printf("H: ");
	    break;
	case 1:
	    printf("D: ");
	    break;
	case 2:
	    printf("C: ");
	    break;
	case 3:
	    printf("S: ");
	    break;	    
	}
	for (int x = 0; x < 13; x++) {
	    if (deck[y][x].available == true) {
		printf("%i ", deck[y][x].value);
	    }
	}
	printf("\n");
    }
    printf("# cards: %i\n", number_of_deck_cards);
}
void print_column(struct column_stack *_stack) {
    for (int i = 0; i <= _stack->top; i++) {
	printf("%i %c\n", _stack->card[i]->value, _stack->card[i]->suit);
    }
    printf("Top card: %i %c\n\n",  _stack->card[_stack->top]->value , _stack->card[_stack->top]->suit);
}
void print_deck_stack() {
    for (int i = 0; i <= deck_stack.top; i++) {
	printf("%i %c\n ", deck_stack.card[i]->value, deck_stack.card[i]->suit );
    }
    printf("\n");
}

void render_column(struct column_stack *_stack, int column_number) {

    if (column_number == 1) {
	card_rect.x = 20;
    } else {
	card_rect.x = (80 * column_number) - 55;
    }
   
    card_rect.y = 0;

    for (int i = 0; i <= _stack->top; i++) {
	card_rect.y += 25;
	SDL_RenderCopy(renderer, _stack->card[i]->card_image, NULL, &card_rect);
	if (i == _stack->top) {
	    _stack->top_x = card_rect.x;
	    _stack->top_y = card_rect.y;
	}
    }
}
void render_big_pile() {
    card_rect.y = big_pile.top_y;

    for (int i = 0; i < big_pile_count; i++) {
	big_pile.top_x += 10;
	card_rect.x = big_pile.top_x;
	SDL_RenderCopy(renderer, big_pile.card[i]->card_image, NULL, &card_rect);
    }
    big_pile.top_x = 100;
}
void render_back_card() {
    card_rect.y = 300;
    card_rect.x = 20;
    SDL_RenderCopy(renderer, back, NULL, &card_rect);    
}
void render_everything() {
    SDL_SetRenderDrawColor(renderer, 40, 90, 40, 255);
    SDL_RenderClear(renderer);
    render_column(&column_stack1, 1);
    render_column(&column_stack2, 2);
    render_column(&column_stack3, 3);
    render_column(&column_stack4, 4);
    render_column(&column_stack5, 5);
    render_column(&column_stack6, 6);
    render_column(&column_stack7, 7);
    render_big_pile();
    render_back_card();
    SDL_RenderPresent(renderer);
}

void check_mouse_click(int mouse_x, int mouse_y) {
    for (int i = 0; i < 7; i++) {
	if ((mouse_x > column_stack_list[i]->top_x) &&
	    (mouse_x < column_stack_list[i]->top_x + CARD_WIDTH) &&
	    (mouse_y > column_stack_list[i]->top_y) &&
	    (mouse_y < column_stack_list[i]->top_y + CARD_HEIGHT)) {
	    if (column_stack_list[i]->top >= 0) {
		int stack_top_value = column_stack_list[i]->card[column_stack_list[i]->top]->value;
		int big_pile_top_value = big_pile.card[big_pile.top]->value;
		
		if ((stack_top_value == big_pile_top_value + 1) ||
		    (stack_top_value == big_pile_top_value - 1) &&
		    (big_pile_top_value != 13)) {
		    add_to_big_pile(column_stack_list[i]->card[column_stack_list[i]->top]);
		    column_stack_list[i]->top--;
		    render_column(column_stack_list[i], i+1);
		}
	    }
	}
    }
   
    if ((mouse_x > 20) &&  // if deck stack is clicked:
	(mouse_x < 20 + CARD_WIDTH) &&
	(mouse_y > 300) &&
	(mouse_y < 300 + CARD_HEIGHT)) {
	if (deck_stack.top >= 0) {
	    add_to_big_pile(deck_stack.card[deck_stack.top]);
	    deck_stack.top--;
	    number_of_deck_cards--;
	}
    }
   
}	   

int main () {
    
    initialize_SDL();    
    load_images();
    
    card_rect.w = CARD_WIDTH;
    card_rect.h = CARD_HEIGHT;
    
    create_deck();
    create_deck_stack();
    associate_deck_images();
    create_big_pile();

    create_all_column();


    //-------------------------------------------    
    SDL_bool done = SDL_FALSE;
    while(!done)
    	{
    	    SDL_Event event;
    	    while (SDL_PollEvent(&event)) {
    		if(event.type == SDL_QUIT) {
    		    done = SDL_TRUE;
    		}
    		if(event.type == SDL_KEYUP) {
    		    //
    		}
    		if(event.type == SDL_MOUSEBUTTONUP) {
    		    int mouse_x;
    		    int mouse_y;
    		    SDL_GetMouseState(&mouse_x, &mouse_y);
		    check_mouse_click(mouse_x,mouse_y);
    		}
    	    }
	    render_everything();
    	    SDL_Delay(10);
	 
	
    	}    
    SDL_Quit();
    IMG_Quit();
    exit( 0 );
   
    return(0);
}



