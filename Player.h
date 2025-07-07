#pragma once
#include "GameObject.h"
class SceneGame;
class Player : public GameObject
{
protected:
	sf::Sprite body;
	std::string texId = "graphics/player.png";

	sf::Vector2f direction;
	sf::Vector2f look;
	float speed = 500.0f;

	SceneGame* sceneGame = nullptr;
public:
	Player(const std::string& name = "");
	~Player() override = default;
	// GameObject을(를) 통해 상속됨
	
	void SetPosition(const sf::Vector2f& pos) override;


	 void SetRotation(float rot) override;

	
	 void SetScale(const sf::Vector2f& s) override;

	 void SetOrigin(const sf::Vector2f& o) override;
	 void SetOrigin(Origins preset) override;


	void Init() override;
	void Release() override;
	void Reset() override;
	void Update(float dt) override;
	void Draw(sf::RenderWindow& window) override;


};

