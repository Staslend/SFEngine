
#include "Toho.h"

Toho::Toho()
{
        DebugFunctions::DebugMes("Toho constructor");

	ch = Character(320, 500, 80, 80);
        space.LoadImage("/home/tanaka/Documents/Projects/LazyAngle/space.bmp");
	space.SetPos(0,-2400);
	space.SetSize(600,3000);

	screenVector.AddObject(&space);
	renderVector.AddObject(&space);

	screenVector.AddObject(&ch);
        renderVector.AddObject(&ch);
	renderVector.AddObject(this);
	eventVector.AddObject(&ch);

	sVectorUsed = true;
        rVectorUsed = true;
        eVectorUsed = true;

	end.LoadFont("/home/tanaka/Documents/Projects/LazyAngle/end.ttf");
	end.LoadColor({255,255,255});
	end.LoadString("YOU LOSE");
	end.SetPos(200,100);
	end.SetSize(400,400);
	this->id = 4;
}

int GetDistance(int x1,int x2, int y1, int y2)
{
	int d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d;
}

bool Toho::Render(int delay)
{
	DebugFunctions::DebugMes("Toho render");

	if(endOfGame == 1 && ended == 0)
	{
		ended = 1;
		ch.Dead();
		renderVector.AddObject(&end);
		screenVector.AddObject(&end);
	}
	if(ended == 1) return false;

	timeOfLife += delay;
	if(timeOfLife > 20)
	{
		int r = rand() % 8;
                DebugFunctions::DebugMes("Random number:" + std::to_string(r));

		if(r == 1)
		{
			Enemy *enemy = new Enemy(rand() % 7 * 100);

			asteroidVector.push_back(enemy);

			renderVector.AddObject(enemy);
			screenVector.AddObject(enemy);
		}

		if(ch.ReadyToShoot())
		{
			Bullet* bul = new Bullet(ch.ReturnX() + 40);

			bulletVector.push_back(bul);

                        renderVector.AddObject(bul);
                        screenVector.AddObject(bul);
		}

                DebugFunctions::DebugMes("Toho collision");


		for(int x = 0; x < asteroidVector.size(); x++)
		{
                	int d = GetDistance(ch.ReturnX() + 40,
                	                    asteroidVector[x]->ReturnX(),
	                                    ch.ReturnY() + 30,
        	                            asteroidVector[x]->ReturnY());

			if(d < 60) endOfGame = 1;
		}

		for(int x = 0; x < bulletVector.size(); x++)
		{
			if(bulletVector[x]->Deleted() == 1) bulletVector.erase(bulletVector.begin() + x);

		}

		for(int x = 0; x < bulletVector.size(); x++)
		{
			for(int y = 0; y < asteroidVector.size(); y++)
			{
	                        if(asteroidVector[y] == NULL) continue;

				int d = GetDistance(bulletVector[x]->ReturnX() + 10,
				  	       	    asteroidVector[y]->ReturnX() + 25,
					            bulletVector[x]->ReturnY() + 10,
					            asteroidVector[y]->ReturnY() + 25);

				if(d > 0 && d < 35)
				{
					asteroidVector[y]->SetY(900);
					bulletVector[x]->SetY(-300);

				}
			}
		}
	}
}

