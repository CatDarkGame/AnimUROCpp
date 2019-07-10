// Copyright (c) 2019 CatDark, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Cpt_AnimURO.generated.h"


UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class ANIMATIONUROWITHCPP_API UCpt_AnimURO : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = URO, meta = (AllowPrivateAccess = "true"))
		TArray<int> m_pLOD_FrameRate;

public:
	UCpt_AnimURO();
	virtual void BeginPlay() override;
};