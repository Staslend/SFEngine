#include "Object.h"
#include "ScreenObject.h"
#include "Screen.h"
#include "VectorBase.h"
#include "Memory.h"

class Enemy : public Object, public ScreenObject, public VectorBase, public MemoryBlock
{
        SDL_Surface* surface;
        SDL_Texture* texture;

public:
	Enemy(int x);
	~Enemy();
	bool Render(int delay) override;
	SDL_Surface *ReturnSurface() override;
	SDL_Texture *ReturnTexture() override;
};
