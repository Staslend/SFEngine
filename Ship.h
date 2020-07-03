#include "EventObject.h"
#include "Object.h"
#include "ScreenObject.h"
#include "Animation.h"

class Character : public Object, public EventObject, public ScreenObject
{
	Animation anim;
	SDL_Surface *empty;
public:
	Character();
	Character(int x, int y, int w, int h, bool press);
	bool Render(int delay) override;
	SDL_Surface* ReturnSurface() override;
	SDL_Texture* ReturnTexture() override;
	bool HandleEvent(SDL_Event *e) override;
};
