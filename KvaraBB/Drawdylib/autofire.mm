uint bIsPressingFireBtn = 0x3348;
uint STPlayerController = 0x3668;
uint LocalController;
LocalController = Read<uint>(self.localPlayer.base + STPlayerController);
Write<bool>(LocalController + bIsPressingFireBtn, true);