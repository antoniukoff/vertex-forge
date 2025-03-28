#pragma once
#include "System.h"

class Game;
class Event;

class HealthSystem : public System
{
public:
	HealthSystem(Game& game);

	void update(float dt) override {};
private:
	void on_collision_event(const Event& event);
};

