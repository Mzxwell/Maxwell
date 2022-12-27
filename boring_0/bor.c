//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
/*三个主要的头文件*/
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
void QUIT();
/*定义窗口*/
SDL_Window *Window = NULL;
/*渲染器（画笔）*/
SDL_Renderer *Renderer = NULL;
int SDL_main(int argc, char *argv[]/*两个不重要但必要的参数*/) {
    SDL_Init(SDL_INIT_VIDEO);/*初始化*/
    //创建窗口
    Window = SDL_CreateShapedWindow("bor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 800, SDL_WINDOW_SHOWN);
    //要让画笔能在窗口上画画
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Event MainEvent;
    while (SDL_WaitEvent(&MainEvent)) {
        switch (MainEvent.type) {
            case SDL_QUIT:
                QUIT();
                break;
            case SDL_KEYDOWN:
                switch (MainEvent.key.keysym.sym) {
                    case SDLK_RETURN:/*回车键*/
                        break;
                    case SDLK_ESCAPE:
                        QUIT();
                        break;
                    case SDLK_s:
                        break;
                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("(%d, %d\n",MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEBUTTONUP:
                printf("(%d, %d\n",MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEMOTION:
                break;
            default:
                break;
        }
    }
    QUIT();
}
void QUIT(){
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    SDL_Quit();/*return 0*/
}