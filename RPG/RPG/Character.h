#pragma once
#include "Game.h"
#include "Inventory.h"
#include <vector>
#include <fstream>


class Character
{
public:
	Character();
	virtual ~Character();

	//Functions 
	void mainMenu();
	void printStats() const;
	void LevelUp();
	void initialize(const std::string name);
	std::string getAsString() const;
	void createNewCharacter();
	void SaveCharacter();
	void LoadCharacter();

	//Accessors
	
	inline	const double& getX() const { return this->xPos; }
	inline	const double& getY() const { return this->yPos; }
	inline const std::string& getName() const { return this->name; }
	inline	const int& getLevel() const { return this->level; }
	inline	const int& getExp() const { return this->exp; }
	inline	const int& getExpNext() const {return this->expNext; }
	inline	const int& getHp() const { return this->hp; }
	inline	const int& getHpMax() const { return this->hpMax; }
	inline	const int& getStaminna() const { return this->stamina; }
	inline	const int& getStaminnaMax() const { return this->staminaMax; }
	inline	const int& getDamageMin() const { return this->damageMin; }
	inline	const int& getDamageMax() const { return this->damageMax; }
	inline	const int& getDefence() const { return this->defence; }


	inline bool getPlaying() const { return this->playing; }
		
	//Modifiers 

private:

	double xPos;
	double yPos;

	std::string name;
	int level;
	int exp;
	int expNext;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;
	int luck;
	
	

	int statPoints;
	int skillPoints;

	std::vector<Character> characters;

	bool playing;
	int activeCharacter;
	int choice;

	std::string fileName;
};

