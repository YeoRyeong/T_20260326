#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void BeginPlay() override;
	virtual void Tick() override; // 부모한테서 재정의한다고 선언
	virtual void Render() override;

	void ApplyDamage(AActor* Actor);
	
};

