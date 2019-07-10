// Copyright (c) 2019 CatDark, All Rights Reserved.

#include "Cpt_AnimURO.h"
#include "Components/SkinnedMeshComponent.h"

UCpt_AnimURO::UCpt_AnimURO()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCpt_AnimURO::BeginPlay()
{
	Super::BeginPlay();
	if (m_pLOD_FrameRate.Num() <= 0) return;

	UActorComponent* pCpt = GetOwner()->GetComponentByClass(USkinnedMeshComponent::StaticClass());
	if (pCpt != nullptr)
	{
		USkinnedMeshComponent* pSKMesh = Cast<USkinnedMeshComponent>(pCpt);
		pSKMesh->bEnableUpdateRateOptimizations = true;
		pSKMesh->AnimUpdateRateParams->bShouldUseLodMap = true;

		for (int i = 0; i < m_pLOD_FrameRate.Num(); i++)
		{
			pSKMesh->AnimUpdateRateParams->LODToFrameSkipMap.Add(i, m_pLOD_FrameRate[i]);
		}


	}
}
