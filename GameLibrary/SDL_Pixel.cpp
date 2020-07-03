#include "SDL_Pixel.h"

int* SDL_Pixel::GetPixel(SDL_Surface *surf, int x, int y)
{
        return ((int*)surf->pixels + surf->w * y + x);
}

void SDL_Pixel::SetPixel(SDL_Surface *surf, int x, int y, int* pix)
{
         *((int*)surf->pixels + surf->w * y + x) = *pix;
}

SDL_Surface *SDL_Pixel::ReturnMirrored(SDL_Surface * surf)
{
        SDL_Surface* bufSurf = SDL_CreateRGBSurface(0, surf->w, surf->h,
                                                       32,0xff, 0xff00, 0xff0000, 0xff000000);

        for(int x = 0; x < surf->w; x++)
        {
                for(int y = 0; y < surf->h; y++)
                {
                        SetPixel(bufSurf, x, y, GetPixel(surf,surf->w - x, y));
                }
        }
        return bufSurf;
}

