// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameLiftServerSDK.h"
#include "MyEpicFriendModeBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(GameServerLog, Log, All);

/**
 * 
 */
UCLASS(minimalapi)
class AMyEpicFriendModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMyEpicFriendModeBase();

protected:
    virtual void BeginPlay() override;

private:
    // Process Parameters needs to remain in scope for the lifetime of the app
    FProcessParameters m_params;

    void InitGameLift();
};