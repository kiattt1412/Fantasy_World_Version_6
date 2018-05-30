#pragma once
#include <iostream>
#include "Map.h"
#include "Monster.h"
#include <vector>
#include <memory>


class Hero
{
public:
	Hero();
	~Hero();
	double heroHP;
	int heroAtkDamage;
	int heroPositionX;
	int heroPositionY;
	int monfightID;
	bool isFighting;
	bool isAlive;
	double skill1Cd;
	bool skill1Ac;
	void heroMove(char c, Map &m, std::vector<std::shared_ptr<Monster>> &monStore);
	void heroMoveOut(char c, Map &m, std::vector<std::shared_ptr<Monster>> &monStore);
	void setHeroPosition(int x, int y, Map &m);
	void heroAttack(std::vector<std::shared_ptr<Monster>> &monStore2, Map &m, int, int, int monposX, int monposY);
	void damageCal(std::vector<std::shared_ptr<Monster>> &monStore2, Map &m);
	void skillActive(std::vector<std::shared_ptr<Monster>> &monStore2, Map &m,int skilltype);
	Hero(const Hero& hr) = default;
	Hero& operator = (Hero& hr) = default;
};