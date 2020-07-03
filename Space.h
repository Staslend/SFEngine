#include "Image.h"

class Space : public Image
{
	int start = 1;
	int pos = -2400;
public:
	Space();
	bool Render(int delay) override;
};
