#pragma once
#include "System.h"

#include <math/vec3.h>
#include <utility>
#include <vector>
#include <ParticleBatch.h>

class Game;
class Event;

class ParticleSystem : public System
{
	using emitters = std::vector<std::pair<float, Particle>>;
public:
	ParticleSystem(Game& game);
	void update(float dt) override;
	void draw_shooting_line(float dt);
	void draw_trail();
	void process_emitters(float dt);
	void reset();
	void draw(float interval);
private:
	void on_collision(const Event& event);
	void on_brick_destroyed(const Event& event);
	void on_brick_respawn(const Event& event);
	void on_game_won(const Event& event);

private:
	emitters m_emitters;
	ParticleBatch* line_handle;
	ParticleBatch* trail_handle;
	ParticleBatch* patricle_handle;

};

