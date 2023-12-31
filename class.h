#ifndef		CLASS_H
#define		CLASS_H

#include"base.h"
#include"struct.h"

#pragma pack(1)

template <typename T>
class TArray
{
public:

    void Initialize()
    {
        Data = new T[2];
        Count = 0;
        Max = 0;
    }

    void push(T Actor, T Actor1)
    {
        Data = new T[2];
        Data[0] = Actor;
        Data[1] = Actor1;
        Count = 2;
        Max = 2;
    };

    void Pop()
    {
        delete[] Data;
    };

    T* Data;
    int Count;
    int Max;
};
class USceneComponent
{
public:
    //char pa_0000[0x0000250];
    //FTransform ComponentToWorld; //����

    char pa_00[0x238];
    double ModelYaw;
};

class APlayerCameraManager
{
public:
    char pa_0000[0x2230];
    Vector3 Pos;
};

class AController
{
public:
    char pa_0000[0x0330];
    APlayerCameraManager* PlayerCameraManager;

};

class UHealthStatsComponent
{
public:
    char pa_0000[0x00E0];
    char Health;
    bool bIsAlive;
    bool bHealthProtection;
    char pa_00E3[0x0001];
    float LastTimeTakeDamage;
    float Stamina;
};

class AActor
{

public:
    char pa_0000[0x000190];
    USceneComponent* RootComponent;
    char pa_00198[0x100];
    class APlayerState* PlayerState;  //���״̬ƫ��0x298

    char pa_02A0[0x010];
    AController* Controller; // 2B0

    char pa_002B8[0x40]; //2F8
    void* Mesh;//����
    char pa_0300[0x033C];
    float ControllerPitchRotation; // 0x063C(0x0004)
    float ControllerYawRotation; // 0x0640(0x0004)

    char pa_0644[0x00CC];
    UHealthStatsComponent* HealthStatsComponent;

public:
    string GetName();

    bool IsVisible(AActor* LocalPlayer, int32_t BoneIndex);
};

class ULevel
{
public:
    char pa_0000[0x00098];
    TArray<AActor*> Actors;
};
class UObject
{
    char pa_0000[0x00028];                                     // 0x0000(0x0028)
};

class APlayerState  //�������
{
public:
    char pa_0000[0x0002F0];
    class  AActor* PawnPrivate; //�������
    char pa_0002f8[0x00108];
    char Team;//0x400
    char pa_0401[0x17];//0x400
    class UInventoryComponent_Game* InventoryComponent;
};
class AItem_Weapon_General
{
public:
    char pa_0000[0x0322];
    enum class EWeaponShootingType WeaponShootingType;
    char pa_0323[0x0001];
    int32_t WeaponDamage;
    float DamageMultiplierHead;
    char pa_032C[0x0004];
    void* DamageCurve;
    int32_t MaxMagazineAmmo;
    int32_t MaxStockAmmo;
    float TimeBetweenShots;
    float WeaponUpRecoil;
    float WeaponBackwardRecoil;
    float WeaponRecoilAlphaPerShot;
    float WeaponRecoilLift;
    float AccuracyHip;
    float AccuracySight;
    float SpreadShot;
    float Mobility;
    char pa_0364[0x0004];
    void* ProjectileClass;
    float MuzzleVelocityMultiplier;
};
class UInventoryComponent_Game
{
public:
    char pa_0000[0x000F0];
    AItem_Weapon_General* CurrentWeapon; //��ǰ����
};
class AGmeStateBase
{
public:
    char pa_0000[0x000290];
    TArray<APlayerState*>  PlayerArray;

};
class UGameInstance
{
public:
    void* GetPlayerController();

    AActor* GetPlayer();
};

class UWorld : public UObject
{
public:
    char  pa_0028[0x0008];                                     // 0x0028(0x0008)
    ULevel* PersistentLevel;                                   // 0x0030(0x0008)
    void* NetDriver;                                           // 0x0038(0x0008)
    void* LineBatcher;                                         // 0x0040(0x0008)
    void* PersistentLineBatcher;                               // 0x0048(0x0008)
    void* ForegroundLineBatcher;                               // 0x0050(0x0008)
    void* NetworkManager;                                      // 0x0058(0x0008)
    void* PhysicsCollisionHandler;                             // 0x0060(0x0008)
    TArray<UObject*> ExtraReferencedObjects;                   // 0x0068(0x0010)
    TArray<UObject*> PerModuleDataObjects;                     // 0x0078(0x0010)
    TArray<void*>     StreamingLevels;                         // 0x0088(0x0010)
    char  pa_0098[0x00038];                                    // 0x0098(0x0028)
    void* CurrentLevelPendingVisibility;                       // 0x00D0(0x0008)
    void* CurrentLevelPendingInvisibility;                     // 0x00D8(0x0008)
    void* DemoNetDriver;                                       // 0x00E0(0x0008)
    void* MyParticleEventManager;                              // 0x00E8(0x0008)
    void* DefaultPhysicsVolume;                                // 0x00F0(0x0008)
    char  pa_00F8[0x001E];                                    // 0x00F8(0x001E)
    char bAreConstraintsDirty;                                 // 0x0116(0x0001)
    char pa_0117[0x0009];                                      // 0x0117(0x0009)
    void* NavigationSystem;                                    // 0x0120(0x0008)
    void* AuthorityGameMode;                                   // 0x0128(0x0008)
    AGmeStateBase* GameState;                                   // 0x0130(0x0008)
    void* AISystem;                                            // 0x0138(0x0008)
    void* AvoidanceManager;                                    // 0x0140(0x0008)
    TArray<ULevel*> Levels;                                    // 0x0148(0x0010)
    char  pa_0168[0x0038];                                     // 0x0168(0x0028)
    UGameInstance* OwningGameInstance;                         // 0x0190(0x0008)
};
#endif // CLASS_H
