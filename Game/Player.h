#pragma once

#include "GameObjectStruct.h"

#define PLAYER_SHOT_SIZE 20

// Public
// 基本的な関数

void InitPlayerObject(void);
void UpdatePlayerObject(void);
void RenderPlayerObject(void);

void UpdatePlayerShotObject(void);
void RenderPlayerShotObject(void);

// Get / Set 

Vector2D GetPlayerPosition(void);	// Player の座標を得る