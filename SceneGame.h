#pragma once
#include "Scene.h"
class Player;
class Zombie;
class SceneGame : public Scene
{
protected:
	sf::Sprite cursor;
	Player* player;
	std::list<Zombie*> zombieList;
	std::list<Zombie*>zombiePool;
public:
	SceneGame();
	~SceneGame() override = default;

	void Init() override;
	void Enter() override;
	void Exit() override;
	void Update(float dt) override;
	void Draw(sf::RenderWindow& window) override;

	void SpawnZombies(int count);
};

