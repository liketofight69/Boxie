#include <SDL.h>
#include <SDL_image.h>
#include <cstdio>
#include <map>

#define img "sprite.png"
#define img2 "front.png"
#define img3 "lay.png"
//#define front "front.png"
#define SHAPE_SIZE 20
#define ARENA_SIZE 20

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480
//#define SPRITE_SIZE 32

enum {
    DISPLAY_WIDTH  = 480
    , DISPLAY_HEIGHT = 320
    , UPDATE_INTERVAL = 1000/60
    , HERO_SPEED = 2
};
class Sprite {
public:
    int x, y ;
    Sprite() :x(0), y(0) {}
} ;
void onQuit();
    void onKeyDown( SDL_Event* event );
    void onKeyUp( SDL_Event* event );
int running;
std::map<int,int> keys;
int levelPoints = 100;
bool levelComplete = false;
bool Col(SDL_Rect * DestR, SDL_Rect * BoxDest){
  if(DestR->y >= BoxDest->y + BoxDest->h) {
    return 0;


  }

}

float speed = 1.0;//1.0
int main(int argc, char ** argv)
{
    //message box tesr
   /*SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
                         "Missing file",
                         "File is missing. Please reinstall the program.",
                         NULL);*/



    //test
    SDL_Rect SrcR;
  SDL_Rect DestR;

  SrcR.x = 0;
  SrcR.y = 0;
  SrcR.w = SHAPE_SIZE;
  SrcR.h = SHAPE_SIZE;

  DestR.x = 640 / 2 - SHAPE_SIZE / 2;//640
  DestR.y = 580 / 2 - SHAPE_SIZE / 2;//580
  DestR.w = SHAPE_SIZE;
  DestR.h = SHAPE_SIZE;
  //test box
 SDL_Rect Boxrect;
  SDL_Rect BoxDest;
  Boxrect.x = 0;
  Boxrect.y = 0;
  Boxrect.w = SHAPE_SIZE;
  Boxrect.h = SHAPE_SIZE;

  BoxDest.x = 650 / 2 - SHAPE_SIZE / 2;//640
  BoxDest.y = 400 / 2 - SHAPE_SIZE / 2;//580
  BoxDest.w = SHAPE_SIZE;
  BoxDest.h = SHAPE_SIZE;

 //test arena
  SDL_Rect Arenarect;
  SDL_Rect ArenaDest;
  Arenarect.x = 50;
  Arenarect.y = -100;
  Arenarect.w = ARENA_SIZE;
  Arenarect.h = ARENA_SIZE;

  ArenaDest.x = 640 / 2 - ARENA_SIZE / 2;//640
  ArenaDest.y = 400 / 2 - ARENA_SIZE / 2;//580
  ArenaDest.w = ARENA_SIZE;
  ArenaDest.h = ARENA_SIZE;

//test
  SDL_Delay(1000/30);


 //test
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    SDL_Window * window = SDL_CreateWindow("SDL2 Sprite Sheets",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
        SCREEN_HEIGHT, 0);
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Renderer * ren = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface * Arenasurf = IMG_Load(img3);
    SDL_Surface * image = IMG_Load(img);
    SDL_Surface * boximg = IMG_Load(img2);
    SDL_Texture * Arenatext = SDL_CreateTextureFromSurface(renderer,
        Arenasurf);
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
        image);
    /*SDL_Texture * front_text = SDL_CreateTextureFromSurface(renderer,
        front_face);*/
    SDL_Texture * box = SDL_CreateTextureFromSurface(renderer,
        boximg);
    /*SrcR.x = 0;
    SrcR.y = 0;
    DestR.x = 0;
    DestR.y = 0;
    //image->h = 5;
    //image->w = 5;
    //test
    //

     if ( keys[SDLK_LEFT] ) {
        DestR.x -= speed ;
    } else if ( keys[SDLK_RIGHT] ) {
        DestR.x += speed ;
    } else if ( keys[SDLK_UP] ) {
       DestR.y -= speed ;
    } else if ( keys[SDLK_DOWN] ) {
        DestR.y += speed ;
    }
  */



    //test

    SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
    SDL_RenderClear(renderer);




    while (!quit)
    {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:    onQuit();            break;
                case SDL_KEYDOWN: onKeyDown( &event );

                 break ;
                case SDL_KEYUP:   onKeyUp( &event );   break ;
                case SDL_MOUSEBUTTONDOWN:
                case SDL_MOUSEBUTTONUP:
                case SDL_MOUSEMOTION:
                    break ;
            }
        }
   //test

    //DestR.x = 10;
    //DestR.y = 10;

    //test
    //

     if ( keys[SDLK_LEFT] ) {
            SrcR.x = 45;
          SrcR.y = 2;

        DestR.x -= speed ;
    } else if ( keys[SDLK_RIGHT] ) {
         SrcR.x = 65;
          SrcR.y = 2;

        DestR.x += speed ;

    } else if ( keys[SDLK_UP] ) {

        //SDL_RenderClear(renderer);
        //SDL_RenderCopy(renderer, texture,&SrcR, &DestR );
        //SDL_RenderPresent(renderer);


        SrcR.x = 0;
          SrcR.y = 0;
       DestR.y -= speed ;
    } else if ( keys[SDLK_DOWN] ) {//testing rendering when down pressed
        //SDL_DestroyTexture(texture);

          SrcR.x = 25;
          SrcR.y = 2;

          /*SDL_FreeSurface(image);

        //SDL_FreeSurface(front_face);
        SDL_DestroyTexture(texture);
        SDL_RenderClear(renderer);

        SDL_RenderCopy(renderer, front_text,&SrcR, &DestR );
        SDL_RenderPresent(renderer);*/

        DestR.y += speed ;
        //SDL_RenderCopy(renderer, front_text,&SrcR, &DestR );
       /*SDL_DestroyRenderer(renderer);


         SDL_RenderClear(ren);

        SDL_RenderCopy(ren, f_text,&SrcR, &DestR );
        SDL_RenderPresent(ren);
        SDL_SetRenderDrawColor(ren, 168, 230, 255, 255);
        SDL_RenderClear(ren);*/


       /*if ( keys[SDLK_RIGHT] ) {
        DestR.x += speed ;
        }*/



    }


    //test
    /* collide with edges of screen */
    if ( DestR.x < 105   ) {// < 105
      DestR.x = 105;// = 0

    }




    else if ( DestR.x > SCREEN_WIDTH-130 ) {//SCREEN_WIDTH - SHAPE_SIZE OR 100
      DestR.x = SCREEN_WIDTH-130;// SCREEN_WIDTH - SHAPE_SIZE
    }
    if ( DestR.y < 175 ) {// < 0
      DestR.y = 175;// = 0
    }
    else if ( DestR.y > SCREEN_HEIGHT-152 ) {//SCREEN_HEIGHT-SHAPE_SIZE
      DestR.y = SCREEN_HEIGHT-152;
    }
//box test

   if ( BoxDest.x < 0 ) {//0

      BoxDest.x = 0;//0
    }
    else if ( BoxDest.x > SCREEN_WIDTH-130 ) {//DestR.x

      BoxDest.x = SCREEN_WIDTH-130;//DestR.y
    }
    if ( DestR.y < 0 ) {//0
      DestR.y = 0;//0
    }
    else if ( BoxDest.y > SCREEN_HEIGHT-152 ) {//DestR.y
      BoxDest.y = SCREEN_HEIGHT-152 ;//DestR.y
    }
    //player colliding with box
    if ( DestR.x < 150 ) {// < 105
      SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
                         "Target Reached",
                         "Congratulations! Loading next level.",
                         NULL);
            levelComplete = true;

      //after ok is pressed it should automatically load the next segment of code
      if(levelComplete == true){
        levelPoints = 100;

        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
                         "Points Earned!!",
                         "You have earned a total of 100 points.\nPlease check your score by looking at the cmd prompt.",
                         NULL);
          printf("Score:%d",levelPoints);
      }



    }//test



  //test
        SDL_PollEvent(&event);

        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
        }

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, Arenatext,NULL, NULL );
        //SDL_RenderCopy(renderer, texture,&SrcR, &DestR );
        SDL_RenderCopy(renderer, box,&Boxrect, &BoxDest );
        SDL_RenderCopy(renderer, texture,&SrcR, &DestR );
        SDL_RenderCopy(renderer, box,&Arenarect, &Arenarect );
        SDL_RenderPresent(renderer);



    }

    SDL_DestroyTexture(texture);

    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();

    return 0;
}
void onQuit() {
    running = 0 ;
}
void onKeyDown( SDL_Event* evt ) {
    keys[ evt->key.keysym.sym ] = 1 ;
}

void onKeyUp( SDL_Event* evt ) {
    keys[ evt->key.keysym.sym ] = 0 ;
}

