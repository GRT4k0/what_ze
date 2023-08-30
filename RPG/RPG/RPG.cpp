#include "Game.h"

int main()
{
	
	srand(time(NULL));



	Character character;
	character.createNewCharacter();




	while (character.getPlaying())
	{
	  character.mainMenu();
	}
	return 0;
}