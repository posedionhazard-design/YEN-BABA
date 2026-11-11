namespace offset {

//Pubg 2.2
long GWorld1 = 0x10276dd30;//*
long GWorld2 = 0x108701448;//*
long GName1 = 0x103d384c8;//*
long GName2 = 0x108373600;//*
long LineOfSightTo_Func = 0x104cfc5f4;//*

long FNameEntry_ = 0xc;//*
long ULevel_ = 0x30;//*struct ULevel* PersistentLevel; // Offset: 0x30 // Size: 0x08
long ActorArray_ = 0xA0;//*struct AActor* ObserveTarget; // Offset: 0xa0 // Size: 0x08
//    struct AActor* HostActor; // Offset: 0xa0 // Size: 0x08
long ActorCount_ = 0xA8;//*int MaxPacket; // Offset: 0xa8 // Size: 0x04
//struct AActor* AttachedActor; // Offset: 0xa8 // Size: 0x08
//readLocalPlayerInfo
long NetDriver_ = 0x38;//*ULevel struct UNetDriver* NetDriver; // Offset: 0x38 // Size: 0x08
long ServerConnection_ = 0x78;//*struct UNetConnection* ServerConnection; // Offset: 0x78 // Size: 0x08
long localPlayerController_ = 0x30;//*struct APlayerControll/Users/saudgl/Desktop/Pubg 2.1/Pubg2.1_UE4_SDK_IOS_Saudgl/FullDump.hpper* PlayerController; // Offset: 0x30 // Size: 0x08
long LocalPlayerBase_ = 0x3e0;//*struct AGameModeBase* AuthorityGameMode; // Offset: 0x3e0 // Size: 0x08 || struct APawn* Pawn; // Offset: 0x3e0 // Size: 0x08 //main : struct AGameStateBase : AInfo

long bIsWeaponFiring_ = 0x1500; //* bool isFire//bool bIsWeaponFiring; // Offset: 0x14e8 // Size: 0x01
long weaponManagerComponent_ = 0x1ec8;//*struct UCharacterWeaponManagerComponent* WeaponManagerComponent; // Offset: 0x1e98 // Size: 0x08
long CurrentReloadWeapon_ = 0x2798;//*struct ASTExtraWeapon* CurrentReloadWeapon; // Offset: 0x27a8 // Size: 0x08
long cachedCurUseWeapon1_ = 0x2f0;//*struct FScriptMulticastDelegate LocalBackpackCurerrentWeaponFinishDelegate; // Offset: 0x2f0 // Size: 0x10
long cachedCurUseWeapon_ = 0x580;//*struct ASTExtraWeapon* CurrentWeaponReplicated; // Offset: 0x580 // Size: 0x08
long shootWeaponComponent_ = 0xf48;//*struct UShootWeaponEntity* ShootWeaponEntityComp; // Offset: 0xf48 // Size: 0x08
long ownerShootWeapon_ = 0x208;//*struct ASTExtraShootWeapon* OwnerShootWeapon; // Offset: 0x208 // Size: 0x08
//struct USTExtraShootWeaponComponent : UWeaponLogicBaseComponent {

long playerCameraManager_ = 0x470;//*struct APlayerCameraManager* PlayerCameraManager; // Offset: 0x470 // Size: 0x08
long POV_ = 0x1000; // 0xff0 + 0x10
//struct FTViewTarget ViewTarget; // Offset: 0xff0 // Size: 0x5e0
//struct FMinimalViewInfo POV; // Offset: 0x10 // Size: 0x5c0
long controlRotation_ = 0x408;//*struct FRotator ControlRotation; // Offset: 0x408 // Size: 0x0c

//readPlayerInfo
long rootComponent_ = 0x1c0;//*struct USceneComponent* RootComponent; // Offset: 0x1b8 // Size: 0x08
long PlayerWorldPos_ = 0x160;//*int HitPositionX; // Offset: 0x160 // Size: 0x04// + 4 = y // + 4 = z
long PlayerHP_ = 0xce0;//*float Health; // Offset: 0xcc8 // Size: 0x04
long PlayerMaxHP_ = 0xce4;//*float HealthMax; // Offset: 0xccc // Size: 0x04
//float PlayerSignalHP = 0xcd0;//float SignalHP; // Offset: 0xcd0 // Size: 0x04
//float PlayerSignalHPMax = 0xcdc;//float PreSignalHP; // Offset: 0xcd4 // Size: 0x04
long playerIsDead_ = 0xcfc;//*char bDead : 1; // Offset: 0xd0c // Size: 0x01
long playerState_ = 0xeb8;//* uint64 CurrentStates; // Offset: 0xeb8 // Size: 0x08
long nameAddr_ = 0x890;//*struct FString PlayerName; // Offset: 0x890 // Size: 0x10//struct AUAECharacter : ACharacter
long playerPlayerKey_ = 0x8b0;//struct AUAECharacter : ACharacter {
/////uint32_t PlayerKey; // Offset: 0x8a8 // Size: 0x04
long playerIsAI_ = 0x968;//*bool bIsAI; // Offset: 0x968 // Size: 0x01
long playerTeamNo_ = 0x8d8;//*
//struct AUAECharacter : ACharacter {
//int TeamID; // Offset: 0x8d0 // Size: 0x0401
long mesh_ = 0x438;//*struct ACharacter : APawn {
//struct USkeletalMeshComponent* Mesh; // Offset: 0x438 // Size: 0x08
long  FTransform_ = 0x1a0;//struct FUAETransitionState StartState; // Offset: 0x1a0 // Size: 0x10
long boneArray_ = 0x738;//struct UOceanMeshComponent : UMeshComponent {
//struct TArray<int> ShapeUniformValue; // Offset: 0x738 // Size: 0x10


}
