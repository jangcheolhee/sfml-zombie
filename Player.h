#pragma once
#include "GameObject.h"
#include "HitBox.h"
class SceneGame;
class Bullet;
class Player : public GameObject
{
protected:
	sf::Sprite body;
	std::string texId = "graphics/player.png";

	sf::Vector2f direction;
	sf::Vector2f look;
	float speed = 500.0f;

	SceneGame* sceneGame = nullptr;
	HitBox hitBox;

	std::list <Bullet*> bulletList;
	std::list <Bullet*> bulletPool;

	float shootInterval = 0.1f;
	float shootTimer = 0.f;

	int hp = 0;
	int maxHp = 100;



public:
	bool IsAlive() { return hp > 0; }
	Player(const std::string& name = "");
	~Player() override = default;
	// GameObject��(��) ���� ��ӵ�

	void SetPosition(const sf::Vector2f& pos) override;


	void SetRotation(float rot) override;


	void SetScale(const sf::Vector2f& s) override;

	void SetOrigin(const sf::Vector2f& o) override;
	void SetOrigin(Origins preset) override;

	sf::FloatRect GetLocalBounds() const override
	{
		return body.getLocalBounds();
	}
	sf::FloatRect GetGlobalBounds() const override
	{
		return body.getGlobalBounds();
	}

	void Init() override;
	void Release() override;
	void Reset() override;
	void Update(float dt) override;
	void Draw(sf::RenderWindow& window) override;

	void Shoot();

	void OnDamage(int damage);
	const HitBox& GetHitBox() const { return hitBox; }

};

