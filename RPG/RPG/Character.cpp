#include "Character.h"



Character::Character()
{

	this->xPos = 0.0;
	this->yPos = 0.0;

	this->name = "";
	this->level = 1;
	this->exp = 0;
	this->expNext = 0;
	
	this->strength = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligence = 0;

	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->staminaMax = 0; 
	this->damageMin = 0;
	this->damageMax = 0;
	this->defence = 0;
	this->luck = 0;
	
	this->statPoints = 0;
	this->skillPoints = 0;
	
	

}


Character::~Character() 
{


}


    //Functions
void Character::initialize (const std::string name)
{
	
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = 
	static_cast<int>((50 / 3) * ((pow(level, 3) - 
		6 * pow(level, 2)) +
		(17 * level) - 12)) + 100 ;

	this->strength = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;
	
	this->hp = 10;
	this->hpMax = 10;
	this->stamina = 10;
	this->staminaMax = 10;
	this->damageMin = 2;
	this->damageMax = 4;
	this->defence = 0;
	this->luck = 1;
	
	this->statPoints = 0;
	this->skillPoints = 0;
	
	
}

void Character:: printStats() const
{
	std::cout << "Character Sheet =" << std::endl;
	std::cout << "= Name: " << this->name << std::endl;
	std::cout << "= Health Points: " << this->hp<< "/" <<this->hpMax << std::endl;
	std::cout << "= Level: " << this->level << std::endl;
	
	std::cout << std::endl;

	std::cout << "= Experience Points: " << this->exp<< std::endl;
	std::cout << "= Experience Points till Next Level: " << this->expNext << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "= Strength: " << this->strength << std::endl;
	std::cout << "= Vitality: " << this->vitality << std::endl;
	std::cout << "= Dexterity: " << this->dexterity << std::endl;
	std::cout << "= Intelligence: " << this->intelligence << std::endl;
	
	std::cout << std::endl;

	std::cout << "= Stamina: " << this->stamina << "/" << this->staminaMax << std::endl;
	std::cout << "= Damage: " << this->damageMax << "-" << this->damageMin << std::endl;
	std::cout << "= Defence: " << this->defence << std::endl;
	std::cout << "= Luck: " << this->luck<< std::endl;
	std::cout << std::endl;
}

void Character::LevelUp()
{
	while (this->exp >= this->expNext)
	{
		this->exp -= this->expNext;
		this->level++;
		this->expNext =
			static_cast<int>((50 / 3) * ((pow(level, 3) -
				6 * pow(level, 2)) +
				(17 * level) - 12)) + 100 ;
			


		this->statPoints++;
		this->skillPoints++;
	}

	
}

std::string Character::getAsString() const 
{
	return std::to_string(xPos) + " "
		+ std::to_string(yPos) + " "
		+ name + " "
		+ std::to_string(level) + " "
		+ std::to_string(exp) + " "
		+ std::to_string(strength) + " "
		+ std::to_string(vitality) + " "
		+ std::to_string(dexterity) + " "
		+ std::to_string(intelligence) + " "
		+ std::to_string(hp) + " "
		+ std::to_string(stamina) + " "
		+ std::to_string(statPoints) + " "
		+ std::to_string(skillPoints);


}

void Character::mainMenu()
{
	std::cout << "= MAIN MENU =" << std::endl << std::endl;

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character Sheet" << std::endl;
	std::cout << "6: Create Character" << std::endl;
	std::cout << "7: Save Character" << std::endl;
	std::cout << "8: Load Character" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Make your choice, Champion" << std::endl;
	std::cin >> choice;
	std::cout << std::endl;


	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		characters[activeCharacter].printStats();
		break;

	case 6:
		std::cin.ignore();

		createNewCharacter();
		SaveCharacter();


		break;
	case 7:

		break;
	case 8:

		break;

	default:
		break;
	}
}

void Character::createNewCharacter()
{
	std::string name = " ";
	std::cout << "CHARACTER NAME: ";
	std::getline(std::cin, name);

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialize(name);

}
void Character::SaveCharacter()
{

}
void Character::LoadCharacter()
{

}

