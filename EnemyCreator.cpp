#include "EnemyCreator.h"

EnemyCreator::EnemyCreator()
{

}

bool EnemyCreator::Render(int delay)
{
	timeOfLife += delay;
	if(timeOfLife > 10)
	{
		if(rand() % 3 == 1)
		{
			Enemy *enemy = Enemy(rand() % 7 * 100);
			
		}
	}

	return false;
}
