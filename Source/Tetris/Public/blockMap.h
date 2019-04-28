// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define MAX_HEIGHT 15
#define WIDTH 13

/**
 * 
 */
class TETRIS_API blockMap
{
public:
	blockMap();
	~blockMap();
	int map[MAX_HEIGHT][WIDTH];
	void updateMap();
};
