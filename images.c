#include "images.h"

void load_images() {
    IMG_Init(IMG_INIT_PNG);
    back_surface = IMG_Load("misc/a_back.png");
    c_1_surface  = IMG_Load("misc/c_1.png");
    c_2_surface  = IMG_Load("misc/c_2.png");
    c_3_surface  = IMG_Load("misc/c_3.png");
    c_4_surface  = IMG_Load("misc/c_4.png");
    c_5_surface  = IMG_Load("misc/c_5.png");
    c_6_surface  = IMG_Load("misc/c_6.png");
    c_7_surface  = IMG_Load("misc/c_7.png");
    c_8_surface  = IMG_Load("misc/c_8.png");
    c_9_surface  = IMG_Load("misc/c_9.png");
    c_10_surface = IMG_Load("misc/c_10.png");
    c_11_surface = IMG_Load("misc/c_11.png");
    c_12_surface = IMG_Load("misc/c_12.png");
    c_13_surface = IMG_Load("misc/c_13.png");
    d_1_surface  = IMG_Load("misc/d_1.png");
    d_2_surface  = IMG_Load("misc/d_2.png");
    d_3_surface  = IMG_Load("misc/d_3.png");
    d_4_surface  = IMG_Load("misc/d_4.png");
    d_5_surface  = IMG_Load("misc/d_5.png");
    d_6_surface  = IMG_Load("misc/d_6.png");
    d_7_surface  = IMG_Load("misc/d_7.png");
    d_8_surface  = IMG_Load("misc/d_8.png");
    d_9_surface  = IMG_Load("misc/d_9.png");
    d_10_surface = IMG_Load("misc/d_10.png");
    d_11_surface = IMG_Load("misc/d_11.png");
    d_12_surface = IMG_Load("misc/d_12.png");
    d_13_surface = IMG_Load("misc/d_13.png");
    h_1_surface  = IMG_Load("misc/h_1.png");
    h_2_surface  = IMG_Load("misc/h_2.png");
    h_3_surface  = IMG_Load("misc/h_3.png");
    h_4_surface  = IMG_Load("misc/h_4.png");
    h_5_surface  = IMG_Load("misc/h_5.png");
    h_6_surface  = IMG_Load("misc/h_6.png");
    h_7_surface  = IMG_Load("misc/h_7.png");
    h_8_surface  = IMG_Load("misc/h_8.png");
    h_9_surface  = IMG_Load("misc/h_9.png");
    h_10_surface = IMG_Load("misc/h_10.png");
    h_11_surface = IMG_Load("misc/h_11.png");
    h_12_surface = IMG_Load("misc/h_12.png");
    h_13_surface = IMG_Load("misc/h_13.png"); 
    s_1_surface  = IMG_Load("misc/s_1.png");
    s_2_surface  = IMG_Load("misc/s_2.png");
    s_3_surface  = IMG_Load("misc/s_3.png");
    s_4_surface  = IMG_Load("misc/s_4.png");
    s_5_surface  = IMG_Load("misc/s_5.png");
    s_6_surface  = IMG_Load("misc/s_6.png");
    s_7_surface  = IMG_Load("misc/s_7.png");
    s_8_surface  = IMG_Load("misc/s_8.png");
    s_9_surface  = IMG_Load("misc/s_9.png");
    s_10_surface = IMG_Load("misc/s_10.png");
    s_11_surface = IMG_Load("misc/s_11.png");
    s_12_surface = IMG_Load("misc/s_12.png");
    s_13_surface = IMG_Load("misc/s_13.png");

    back = SDL_CreateTextureFromSurface(renderer, back_surface);
    c_1  = SDL_CreateTextureFromSurface(renderer, c_1_surface);
    c_2  = SDL_CreateTextureFromSurface(renderer, c_2_surface);
    c_3  = SDL_CreateTextureFromSurface(renderer, c_3_surface);
    c_4  = SDL_CreateTextureFromSurface(renderer, c_4_surface);
    c_5  = SDL_CreateTextureFromSurface(renderer, c_5_surface);
    c_6  = SDL_CreateTextureFromSurface(renderer, c_6_surface);
    c_7  = SDL_CreateTextureFromSurface(renderer, c_7_surface);
    c_8  = SDL_CreateTextureFromSurface(renderer, c_8_surface);
    c_9  = SDL_CreateTextureFromSurface(renderer, c_9_surface);
    c_10 = SDL_CreateTextureFromSurface(renderer, c_10_surface);
    c_11 = SDL_CreateTextureFromSurface(renderer, c_11_surface);
    c_12 = SDL_CreateTextureFromSurface(renderer, c_12_surface);
    c_13 = SDL_CreateTextureFromSurface(renderer, c_13_surface);
    s_1  = SDL_CreateTextureFromSurface(renderer, s_1_surface);
    s_2  = SDL_CreateTextureFromSurface(renderer, s_2_surface);
    s_3  = SDL_CreateTextureFromSurface(renderer, s_3_surface);
    s_4  = SDL_CreateTextureFromSurface(renderer, s_4_surface);
    s_5  = SDL_CreateTextureFromSurface(renderer, s_5_surface);
    s_6  = SDL_CreateTextureFromSurface(renderer, s_6_surface);
    s_7  = SDL_CreateTextureFromSurface(renderer, s_7_surface);
    s_8  = SDL_CreateTextureFromSurface(renderer, s_8_surface);
    s_9  = SDL_CreateTextureFromSurface(renderer, s_9_surface);
    s_10 = SDL_CreateTextureFromSurface(renderer, s_10_surface);
    s_11 = SDL_CreateTextureFromSurface(renderer, s_11_surface);
    s_12 = SDL_CreateTextureFromSurface(renderer, s_12_surface);
    s_13 = SDL_CreateTextureFromSurface(renderer, s_13_surface);    
    h_1  = SDL_CreateTextureFromSurface(renderer, h_1_surface);
    h_2  = SDL_CreateTextureFromSurface(renderer, h_2_surface);
    h_3  = SDL_CreateTextureFromSurface(renderer, h_3_surface);
    h_4  = SDL_CreateTextureFromSurface(renderer, h_4_surface);
    h_5  = SDL_CreateTextureFromSurface(renderer, h_5_surface);
    h_6  = SDL_CreateTextureFromSurface(renderer, h_6_surface);
    h_7  = SDL_CreateTextureFromSurface(renderer, h_7_surface);
    h_8  = SDL_CreateTextureFromSurface(renderer, h_8_surface);
    h_9  = SDL_CreateTextureFromSurface(renderer, h_9_surface);
    h_10 = SDL_CreateTextureFromSurface(renderer, h_10_surface);
    h_11 = SDL_CreateTextureFromSurface(renderer, h_11_surface);
    h_12 = SDL_CreateTextureFromSurface(renderer, h_12_surface);
    h_13 = SDL_CreateTextureFromSurface(renderer, h_13_surface);
    d_1  = SDL_CreateTextureFromSurface(renderer, d_1_surface);
    d_2  = SDL_CreateTextureFromSurface(renderer, d_2_surface);
    d_3  = SDL_CreateTextureFromSurface(renderer, d_3_surface);
    d_4  = SDL_CreateTextureFromSurface(renderer, d_4_surface);
    d_5  = SDL_CreateTextureFromSurface(renderer, d_5_surface);
    d_6  = SDL_CreateTextureFromSurface(renderer, d_6_surface);
    d_7  = SDL_CreateTextureFromSurface(renderer, d_7_surface);
    d_8  = SDL_CreateTextureFromSurface(renderer, d_8_surface);
    d_9  = SDL_CreateTextureFromSurface(renderer, d_9_surface);
    d_10 = SDL_CreateTextureFromSurface(renderer, d_10_surface);
    d_11 = SDL_CreateTextureFromSurface(renderer, d_11_surface);
    d_12 = SDL_CreateTextureFromSurface(renderer, d_12_surface);
    d_13 = SDL_CreateTextureFromSurface(renderer, d_13_surface);

    SDL_FreeSurface(c_1_surface);
    SDL_FreeSurface(c_2_surface);    
    SDL_FreeSurface(c_3_surface);
    SDL_FreeSurface(c_4_surface);
    SDL_FreeSurface(c_5_surface);
    SDL_FreeSurface(c_6_surface);    
    SDL_FreeSurface(c_7_surface);
    SDL_FreeSurface(c_8_surface);
    SDL_FreeSurface(c_9_surface);
    SDL_FreeSurface(c_10_surface);    
    SDL_FreeSurface(c_11_surface);
    SDL_FreeSurface(c_12_surface);
    SDL_FreeSurface(c_13_surface);
    SDL_FreeSurface(d_1_surface);    
    SDL_FreeSurface(d_2_surface);
    SDL_FreeSurface(d_3_surface);
    SDL_FreeSurface(d_4_surface);    
    SDL_FreeSurface(d_5_surface);
    SDL_FreeSurface(d_6_surface);
    SDL_FreeSurface(d_7_surface);    
    SDL_FreeSurface(d_8_surface);
    SDL_FreeSurface(d_9_surface);
    SDL_FreeSurface(d_10_surface);    
    SDL_FreeSurface(d_11_surface);
    SDL_FreeSurface(d_12_surface);
    SDL_FreeSurface(d_13_surface);    
    SDL_FreeSurface(s_1_surface);    
    SDL_FreeSurface(s_2_surface);
    SDL_FreeSurface(s_3_surface);   
    SDL_FreeSurface(s_4_surface);    
    SDL_FreeSurface(s_5_surface);
    SDL_FreeSurface(s_6_surface);
    SDL_FreeSurface(s_7_surface);    
    SDL_FreeSurface(s_8_surface);
    SDL_FreeSurface(s_9_surface);   
    SDL_FreeSurface(s_10_surface);    
    SDL_FreeSurface(s_11_surface);
    SDL_FreeSurface(s_12_surface);
    SDL_FreeSurface(s_13_surface);    
    SDL_FreeSurface(h_1_surface);
    SDL_FreeSurface(h_2_surface);   
    SDL_FreeSurface(h_3_surface);    
    SDL_FreeSurface(h_4_surface);
    SDL_FreeSurface(h_5_surface);    
    SDL_FreeSurface(h_6_surface);
    SDL_FreeSurface(h_7_surface);   
    SDL_FreeSurface(h_8_surface);    
    SDL_FreeSurface(h_9_surface);
    SDL_FreeSurface(h_10_surface);
    SDL_FreeSurface(h_11_surface);
    SDL_FreeSurface(h_12_surface);   
    SDL_FreeSurface(h_13_surface);        
}
