#ifndef GAME_H
#define GAME_H
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Game{
    public:
        Game();
        ~Game();
        bool gameInit(const char* title, int xpos, int ypos, int width, int height, int flags);
        void gameRender();
        void gameUpdate();
        void handleEvents();
        SDL_Texture* str_to_texture(string str);
        void gameClean();
        bool gameIsRunning() { return isRunning; }
    private:
        const int block_size=50;
        double angle=0;
        int score=0;
        int Delay,Mark=0;
        int frame=0;
        int x=0,y=0,mWidth,mHeight;
        int lengthofSnake=1;
        vector<pair<int,int>> Snake_block;
        pair<int,int> apl;
        TTF_Font *gFont;
        int posx=0,posy=0;
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;
        bool isRunning,gameOver;
};

#endif // GAME_H

