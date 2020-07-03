#include "ScreenObject.h"
#include "Object.h"
#include "Screen.h"
#include "VectorBase.h"
#include "Memory.h"

class Bullet : public ScreenObject, public Object, public VectorBase, public MemoryBlock
{
        SDL_Surface* surface;
        SDL_Texture* texture;


public:
	Bullet(int x);
	~Bullet();
	bool Render(int delay) override;
	SDL_Surface *ReturnSurface() override;
	SDL_Texture *ReturnTexture() override;
};
