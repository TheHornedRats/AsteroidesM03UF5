#pragma once
#include "GameObject.h"
#include "Utils.h"

class Projectile : public GameObject {
public:
    float lifetime = 1.5f;

    Projectile(SDL_Renderer* renderer, Vector2 pos, float angle, float speedFactor);

    void Update(float dt) override;
    bool IsAlive() const { return lifetime > 0.0f; }

private:
    Vector2 velocity;
    const float maxLife = 2.0f;
};
