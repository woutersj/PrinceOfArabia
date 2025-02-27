#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.13 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xf15c;
constexpr uint24_t FX_DATA_BYTES = 955147;

constexpr uint16_t FX_SAVE_PAGE  = 0xfff0;
constexpr uint24_t FX_SAVE_BYTES = 2;

namespace Levels
{
  constexpr uint24_t Invaders_Items = 0x000000;
  constexpr uint24_t Level1_FG = 0x000189;
  constexpr uint24_t Level1_BG = 0x0004B3;
  constexpr uint24_t level1_Data = 0x0007DD;
  constexpr uint24_t Level1_Items = 0x000818;
  constexpr uint24_t Level2_FG = 0x0009A0;
  constexpr uint24_t Level2_BG = 0x000FB8;
  constexpr uint24_t level2_Data = 0x0015D0;
  constexpr uint24_t Level2_Items = 0x00160B;
  constexpr uint24_t Level3_FG = 0x001793;
  constexpr uint24_t Level3_BG = 0x001CD9;
  constexpr uint24_t level3_Data = 0x00221F;
  constexpr uint24_t Level3_Items = 0x00225A;
  constexpr uint24_t Level4_FG = 0x0023DA;
  constexpr uint24_t Level4_BG = 0x002812;
  constexpr uint24_t level4_Data = 0x002C4A;
  constexpr uint24_t Level4_Items = 0x002C85;
  constexpr uint24_t Level5_FG = 0x002E0D;
  constexpr uint24_t Level5_BG = 0x003353;
  constexpr uint24_t level5_Data = 0x003899;
  constexpr uint24_t Level5_Items = 0x0038D4;
  constexpr uint24_t Level6_FG = 0x003A5C;
  constexpr uint24_t Level6_BG = 0x003CD2;
  constexpr uint24_t level6_Data = 0x003F48;
  constexpr uint24_t Level6_Items = 0x003F83;
  constexpr uint24_t Level7_FG = 0x004103;
  constexpr uint24_t Level7_BG = 0x00453B;
  constexpr uint24_t level7_Data = 0x004973;
  constexpr uint24_t Level7_Items = 0x0049AE;
  constexpr uint24_t Level8_FG = 0x004B36;
  constexpr uint24_t Level8_BG = 0x00505E;
  constexpr uint24_t level8_Data = 0x005586;
  constexpr uint24_t Level8_Items = 0x0055C1;
  constexpr uint24_t Level9_FG = 0x005749;
  constexpr uint24_t Level9_BG = 0x005B09;
  constexpr uint24_t level9_Data = 0x005EC9;
  constexpr uint24_t Level9_Items = 0x005F04;
  constexpr uint24_t Level10_FG = 0x00608C;
  constexpr uint24_t Level10_BG = 0x00635C;
  constexpr uint24_t level10_Data = 0x00662C;
  constexpr uint24_t Level10_Items = 0x006667;
  constexpr uint24_t Level11_FG = 0x0067EF;
  constexpr uint24_t Level11_BG = 0x006C27;
  constexpr uint24_t level11_Data = 0x00705F;
  constexpr uint24_t Level11_Items = 0x00709A;
  constexpr uint24_t Level12_FG = 0x007222;
  constexpr uint24_t Level12_BG = 0x0078B2;
  constexpr uint24_t level12_Data = 0x007F42;
  constexpr uint24_t Level12_Items = 0x007F7D;
  constexpr uint24_t Level13_FG = 0x008105;
  constexpr uint24_t Level13_BG = 0x0081B9;
  constexpr uint24_t level13_Data = 0x00826D;
  constexpr uint24_t Level13_Items = 0x0082A8;
  constexpr uint24_t Level14_StandingJumps_FG = 0x008430;
  constexpr uint24_t Level14_StandingJumps_BG = 0x008520;
  constexpr uint24_t Level14_StandingJumps_Data = 0x008610;
  constexpr uint24_t Level14_StandingJumps_Items = 0x008619;
  constexpr uint24_t Level15_RunningJumps_FG = 0x0087A1;
  constexpr uint24_t Level15_RunningJumps_BG = 0x008963;
  constexpr uint24_t Level15_RunningJumps_Data = 0x008B25;
  constexpr uint24_t Level15_RunningJumps_Items = 0x008B2E;
  constexpr uint24_t Level16_RunningJumps_FG = 0x008CB6;
  constexpr uint24_t Level16_RunningJumps_BG = 0x008E78;
  constexpr uint24_t Level16_RunningJumps_Data = 0x00903A;
  constexpr uint24_t Level16_RunningJumps_Items = 0x009043;
  constexpr uint24_t Level17_RunningJumps_FG = 0x0091CB;
  constexpr uint24_t Level17_RunningJumps_BG = 0x00938D;
  constexpr uint24_t Level17_RunningJumps_Data = 0x00954F;
  constexpr uint24_t Level17_RunningJumps_Items = 0x009558;
  constexpr uint24_t Level18_RunningJumps_FG = 0x0096E0;
  constexpr uint24_t Level18_RunningJumps_BG = 0x0098A2;
  constexpr uint24_t Level18_RunningJumps_Data = 0x009A64;
  constexpr uint24_t Level18_RunningJumps_Items = 0x009A6D;
  constexpr uint24_t Level19_RunningJumps_FG = 0x009BF5;
  constexpr uint24_t Level19_RunningJumps_BG = 0x009DB7;
  constexpr uint24_t Level19_RunningJumps_Data = 0x009F79;
  constexpr uint24_t Level19_RunningJumps_Items = 0x009F82;
  constexpr uint24_t Level20_RunningJumps_FG = 0x00A10A;
  constexpr uint24_t Level20_RunningJumps_BG = 0x00A3DA;
  constexpr uint24_t Level20_RunningJumps_Data = 0x00A6AA;
  constexpr uint24_t Level20_RunningJumps_Items = 0x00A6B3;
  constexpr uint24_t Level21_RunningJumps_FG = 0x00A83B;
  constexpr uint24_t Level21_RunningJumps_BG = 0x00AB0B;
  constexpr uint24_t Level21_RunningJumps_Data = 0x00ADDB;
  constexpr uint24_t Level21_RunningJumps_Items = 0x00ADE4;
  constexpr uint24_t Level22_RunningJumps_FG = 0x00AF6C;
  constexpr uint24_t Level22_RunningJumps_BG = 0x00B23C;
  constexpr uint24_t Level22_RunningJumps_Data = 0x00B50C;
  constexpr uint24_t Level22_RunningJumps_Items = 0x00B515;
  constexpr uint24_t Level23_RunningJumps_FG = 0x00B69D;
  constexpr uint24_t Level23_RunningJumps_BG = 0x00B96D;
  constexpr uint24_t Level23_RunningJumps_Data = 0x00BC3D;
  constexpr uint24_t Level23_RunningJumps_Items = 0x00BC46;
  constexpr uint24_t Level24_RunningJumps_FG = 0x00BDCE;
  constexpr uint24_t Level24_RunningJumps_BG = 0x00C09E;
  constexpr uint24_t Level24_RunningJumps_Data = 0x00C36E;
  constexpr uint24_t Level24_RunningJumps_Items = 0x00C377;
  constexpr uint24_t Level25_RunningJumps_FG = 0x00C4FF;
  constexpr uint24_t Level25_RunningJumps_BG = 0x00C7CF;
  constexpr uint24_t Level25_RunningJumps_Data = 0x00CA9F;
  constexpr uint24_t Level25_RunningJumps_Items = 0x00CAA8;
  constexpr uint24_t Level26_RunningJumps_FG = 0x00CC30;
  constexpr uint24_t Level26_RunningJumps_BG = 0x00CF00;
  constexpr uint24_t Level26_RunningJumps_Data = 0x00D1D0;
  constexpr uint24_t Level26_RunningJumps_Items = 0x00D1D9;
  constexpr uint24_t Level27_RunningJumps_FG = 0x00D361;
  constexpr uint24_t Level27_RunningJumps_BG = 0x00D631;
  constexpr uint24_t Level27_RunningJumps_Data = 0x00D901;
  constexpr uint24_t Level27_RunningJumps_Items = 0x00D90A;
  constexpr uint24_t Level28_RunningJumps_FG = 0x00DA92;
  constexpr uint24_t Level28_RunningJumps_BG = 0x00DCAE;
  constexpr uint24_t Level28_RunningJumps_Data = 0x00DECA;
  constexpr uint24_t Level28_RunningJumps_Items = 0x00DED3;
  constexpr uint24_t Level29_RunningJumps_FG = 0x00E05B;
  constexpr uint24_t Level29_RunningJumps_BG = 0x00E277;
  constexpr uint24_t Level29_RunningJumps_Data = 0x00E493;
  constexpr uint24_t Level29_RunningJumps_Items = 0x00E49C;
  constexpr uint24_t Level30_RunningJumps_FG = 0x00E624;
  constexpr uint24_t Level30_RunningJumps_BG = 0x00E840;
  constexpr uint24_t Level30_RunningJumps_Data = 0x00EA5C;
  constexpr uint24_t Level30_RunningJumps_Items = 0x00EA65;
  constexpr uint24_t Level31_RunningJumps_FG = 0x00EBED;
  constexpr uint24_t Level31_RunningJumps_BG = 0x00EE09;
  constexpr uint24_t Level31_RunningJumps_Data = 0x00F025;
  constexpr uint24_t Level31_RunningJumps_Items = 0x00F02E;
  constexpr uint24_t level_FG = 0x00F1B6;
  constexpr uint24_t Level_BG = 0x00F216;
  constexpr uint24_t level_Data = 0x00F276;
  constexpr uint24_t Level_Items = 0x00F2D6;
}

namespace Sounds
{
  constexpr uint24_t Dead = 0x00F336;
  constexpr uint24_t Grab1 = 0x00F354;
  constexpr uint24_t Grab2 = 0x00F37E;
  constexpr uint24_t Grab3 = 0x00F3A8;
  constexpr uint24_t Grab4 = 0x00F3E2;
  constexpr uint24_t Seque = 0x00F438;
  constexpr uint24_t Tada = 0x00F4B2;
  constexpr uint24_t Theme = 0x00F4D0;
  constexpr uint24_t Triumph = 0x00F69E;
  constexpr uint24_t Victory = 0x00F6BC;
  constexpr uint24_t Ending = 0x00F72E;
  constexpr uint24_t OutOfTime = 0x00F880;
  constexpr uint24_t GateGoingDown = 0x00F8C6;
  constexpr uint24_t GateGoingUp = 0x00F904;
  constexpr uint24_t ChopChop = 0x00F942;
  constexpr uint24_t Thump = 0x00F954;
  constexpr uint24_t Strike = 0x00F966;
  constexpr uint24_t Invader_Wave_Start = 0x00F974;
  constexpr uint24_t Invader_Wave_Success = 0x00F9A2;
  constexpr uint24_t Invader_End_of_Game = 0x00FA48;
  constexpr uint24_t Invader_Player_Fires_Bullet = 0x00FA8E;
  constexpr uint24_t Invader_Enemy_Fires_Bullet = 0x00FA9C;
  constexpr uint24_t Invader_Player_Explosion = 0x00FAAA;
  constexpr uint24_t Invader_Enemy_Explosion = 0x00FAF4;
  constexpr uint24_t Invader_Hit_Barrier = 0x00FB3E;
  constexpr uint24_t Table = 0x00FB48;
}

namespace Images
{
  constexpr uint24_t PPOT = 0x00FB93;
  constexpr uint16_t PPOT_WIDTH  = 65;
  constexpr uint16_t PPOTHEIGHT  = 31;
  constexpr uint8_t  PPOT_FRAMES = 4;

  constexpr uint24_t Title_PoP = 0x00FFA7;
  constexpr uint16_t Title_PoP_width  = 128;
  constexpr uint16_t Title_PoP_height = 33;

  constexpr uint24_t Title_PoA = 0x0104AB;
  constexpr uint16_t Title_PoA_width  = 128;
  constexpr uint16_t Title_PoA_height = 33;

  constexpr uint24_t Title_Main_NC = 0x0109AF;
  constexpr uint16_t Title_Main_NC_width  = 128;
  constexpr uint16_t Title_Main_NC_height = 88;

  constexpr uint24_t Title_Main_NRC = 0x010F33;
  constexpr uint16_t Title_Main_NRC_width  = 128;
  constexpr uint16_t Title_Main_NRC_height = 88;

  constexpr uint24_t Title_Main_NCH = 0x0114B7;
  constexpr uint16_t Title_Main_NCH_width  = 128;
  constexpr uint16_t Title_Main_NCH_height = 88;

  constexpr uint24_t Title_Main_NRCH = 0x011A3B;
  constexpr uint16_t Title_Main_NRCH_width  = 128;
  constexpr uint16_t Title_Main_NRCH_height = 88;

  constexpr uint24_t Title_Cursor = 0x011FBF;
  constexpr uint16_t Title_Cursor_width  = 5;
  constexpr uint16_t Title_Cursor_height = 5;

  constexpr uint24_t Title_Credits = 0x011FC8;
  constexpr uint16_t Title_Credits_width  = 73;
  constexpr uint16_t Title_Credits_height = 136;

  constexpr uint24_t Title_Select = 0x0124A5;
  constexpr uint16_t Title_Select_width  = 64;
  constexpr uint16_t Title_Select_height = 23;

  constexpr uint24_t Saves = 0x012629;
  constexpr uint16_t SavesWidth  = 128;
  constexpr uint16_t SavesHeight = 5;

  constexpr uint24_t TimeRemaining = 0x0126AD;
  constexpr uint16_t TimeRemainingWidth  = 81;
  constexpr uint16_t TimeRemainingHeight = 15;

  constexpr uint24_t LevelNumber = 0x0127F5;
  constexpr uint16_t LevelNumberWidth  = 81;
  constexpr uint16_t LevelNumberHeight = 15;

  constexpr uint24_t GameOver = 0x01293D;
  constexpr uint16_t GameOverWidth  = 49;
  constexpr uint16_t GameOverHeight = 15;

  constexpr uint24_t PressA = 0x012A05;
  constexpr uint16_t PressAWidth  = 79;
  constexpr uint16_t PressAHeight = 15;

  constexpr uint24_t TimeOut_PoP = 0x012B45;
  constexpr uint16_t TimeOut_PoP_width  = 86;
  constexpr uint16_t TimeOut_PoP_height = 114;

  constexpr uint24_t TimeOut_PoA = 0x013053;
  constexpr uint16_t TimeOut_PoA_width  = 86;
  constexpr uint16_t TimeOut_PoA_height = 114;

  constexpr uint24_t IntroGame_1A = 0x013561;
  constexpr uint16_t IntroGame_1A_width  = 118;
  constexpr uint16_t IntroGame_1A_height = 96;

  constexpr uint24_t IntroGame_1B = 0x013AED;
  constexpr uint16_t IntroGame_1B_width  = 123;
  constexpr uint16_t IntroGame_1B_height = 96;

  constexpr uint24_t IntroGame_9_PoP = 0x0140B5;
  constexpr uint16_t IntroGame_9_PoP_width  = 123;
  constexpr uint16_t IntroGame_9_PoP_height = 160;

  constexpr uint24_t IntroGame_9_PoA = 0x014A55;
  constexpr uint16_t IntroGame_9_PoA_width  = 123;
  constexpr uint16_t IntroGame_9_PoA_height = 160;

  constexpr uint24_t Chambers_BG = 0x0153F5;
  constexpr uint16_t Chambers_BG_width  = 128;
  constexpr uint16_t Chambers_BG_height = 64;

  constexpr uint24_t Chambers_BG_01 = 0x0157F9;
  constexpr uint16_t Chambers_BG_01_width  = 128;
  constexpr uint16_t Chambers_BG_01_height = 55;

  constexpr uint24_t Chambers_BG_02 = 0x015B7D;
  constexpr uint16_t Chambers_BG_02_width  = 128;
  constexpr uint16_t Chambers_BG_02_height = 9;

  constexpr uint24_t Chambers_FG = 0x015C81;
  constexpr uint16_t Chambers_FG_width  = 128;
  constexpr uint16_t Chambers_FG_height = 64;

  constexpr uint24_t Credits_BG = 0x016485;
  constexpr uint16_t Credits_BG_width  = 128;
  constexpr uint16_t Credits_BG_height = 9;

  constexpr uint24_t Eeek = 0x016589;
  constexpr uint16_t EeekWidth  = 43;
  constexpr uint16_t EeekHeight = 19;

  constexpr uint24_t LevelRect = 0x01668F;
  constexpr uint16_t LevelRectWidth  = 16;
  constexpr uint16_t LevelRectHeight = 8;

  constexpr uint24_t Mouse = 0x0166A3;
  constexpr uint16_t MouseWidth  = 16;
  constexpr uint16_t MouseHeight = 16;
  constexpr uint8_t  MouseFrames = 3;

  constexpr uint24_t HourGlasses = 0x016767;
  constexpr uint16_t HourGlassesWidth  = 19;
  constexpr uint16_t HourGlassesHeight = 23;
  constexpr uint8_t  HourGlassesFrames = 6;

  constexpr uint24_t Menu = 0x016A17;
  constexpr uint16_t MenuWidth  = 42;
  constexpr uint16_t MenuHeight = 64;
  constexpr uint8_t  MenuFrames = 5;

  constexpr uint24_t Sword_Cursor = 0x0170AB;
  constexpr uint16_t Sword_Cursor_width  = 8;
  constexpr uint16_t Sword_Cursor_height = 10;

  constexpr uint24_t HUD_Backgrounds = 0x0170BF;
  constexpr uint16_t HUD_Backgrounds_width  = 8;
  constexpr uint16_t HUD_Backgrounds_height = 64;
  constexpr uint8_t  HUD_Backgrounds_frames = 3;

  constexpr uint24_t Numbers_Upright = 0x017183;
  constexpr uint16_t Numbers_Upright_width  = 7;
  constexpr uint16_t Numbers_Upright_height = 5;
  constexpr uint8_t  Numbers_Upright_frames = 60;

  constexpr uint24_t Numbers = 0x01732B;
  constexpr uint16_t NumbersWidth  = 11;
  constexpr uint16_t NumbersHeight = 7;
  constexpr uint8_t  NumbersFrames = 60;

  constexpr uint24_t Numbers_Large = 0x0175C3;
  constexpr uint16_t Numbers_Large_width  = 22;
  constexpr uint16_t Numbers_Large_height = 14;
  constexpr uint8_t  Numbers_Large_frames = 60;

  constexpr uint24_t Numbers_Small = 0x018017;
  constexpr uint16_t Numbers_Small_width  = 5;
  constexpr uint16_t Numbers_Small_height = 7;
  constexpr uint8_t  Numbers_Small_frames = 100;

  constexpr uint24_t Numbers_Divider = 0x01820F;
  constexpr uint16_t Numbers_Divider_width  = 4;
  constexpr uint16_t Numbers_Divider_height = 8;

  constexpr uint24_t Healths = 0x018217;
  constexpr uint16_t HealthsWidth  = 5;
  constexpr uint16_t HealthsHeight = 3;
  constexpr uint8_t  HealthsFrames = 2;

  constexpr uint24_t Sword_HUD = 0x018225;
  constexpr uint16_t Sword_HUD_width  = 5;
  constexpr uint16_t Sword_HUD_height = 5;

  constexpr uint24_t Potion_Float_HUD = 0x01822E;
  constexpr uint16_t Potion_Float_HUD_width  = 5;
  constexpr uint16_t Potion_Float_HUD_height = 5;

  constexpr uint24_t HighScore = 0x018237;
  constexpr uint16_t HighScoreWidth  = 52;
  constexpr uint16_t HighScoreHeight = 5;

  constexpr uint24_t Sword = 0x01826F;
  constexpr uint16_t SwordWidth  = 14;
  constexpr uint16_t SwordHeight = 5;

  constexpr uint24_t Skeleton = 0x01828F;
  constexpr uint16_t SkeletonWidth  = 15;
  constexpr uint16_t SkeletonHeight = 12;

  constexpr uint24_t Gates = 0x0182CF;
  constexpr uint16_t GatesWidth  = 9;
  constexpr uint16_t GatesHeight = 28;
  constexpr uint8_t  GatesFrames = 10;

  constexpr uint24_t Blades = 0x0185A3;
  constexpr uint16_t BladesWidth  = 9;
  constexpr uint16_t BladesHeight = 28;
  constexpr uint8_t  BladesFrames = 12;

  constexpr uint24_t ExitDoors = 0x018907;
  constexpr uint16_t ExitDoorsWidth  = 25;
  constexpr uint16_t ExitDoorsHeight = 33;
  constexpr uint8_t  ExitDoorsFrames = 13;

  constexpr uint24_t Potions_Small = 0x018F64;
  constexpr uint16_t Potions_Small_width  = 6;
  constexpr uint16_t Potions_Small_height = 15;
  constexpr uint8_t  Potions_Small_frames = 2;

  constexpr uint24_t Potions_Large = 0x018F98;
  constexpr uint16_t Potions_Large_width  = 6;
  constexpr uint16_t Potions_Large_height = 15;
  constexpr uint8_t  Potions_Large_frames = 2;

  constexpr uint24_t Potions_Poison = 0x018FCC;
  constexpr uint16_t Potions_Poison_width  = 6;
  constexpr uint16_t Potions_Poison_height = 15;
  constexpr uint8_t  Potions_Poison_frames = 6;

  constexpr uint24_t Potions_Float = 0x019060;
  constexpr uint16_t Potions_Float_width  = 6;
  constexpr uint16_t Potions_Float_height = 15;
  constexpr uint8_t  Potions_Float_frames = 7;

  constexpr uint24_t DecorativeDoor = 0x01910C;
  constexpr uint16_t DecorativeDoorWidth  = 23;
  constexpr uint16_t DecorativeDoorHeight = 40;

  constexpr uint24_t CollapsedFloor = 0x019183;
  constexpr uint16_t CollapsedFloorWidth  = 21;
  constexpr uint16_t CollapsedFloorHeight = 13;

  constexpr uint24_t CollapsingFloors = 0x0191DB;
  constexpr uint16_t CollapsingFloorsWidth  = 21;
  constexpr uint16_t CollapsingFloorsHeight = 31;
  constexpr uint8_t  CollapsingFloorsFrames = 4;

  constexpr uint24_t FloorButtons_0and1 = 0x01947F;
  constexpr uint16_t FloorButtons_0and1_width  = 21;
  constexpr uint16_t FloorButtons_0and1_height = 32;
  constexpr uint8_t  FloorButtons_0and1_frames = 4;

  constexpr uint24_t FloorButtons_2 = 0x019723;
  constexpr uint16_t FloorButtons_2_width  = 12;
  constexpr uint16_t FloorButtons_2_height = 31;
  constexpr uint8_t  FloorButtons_2_frames = 2;

  constexpr uint24_t Torches = 0x0197E7;
  constexpr uint16_t TorchesWidth  = 3;
  constexpr uint16_t TorchesHeight = 11;
  constexpr uint8_t  TorchesFrames = 5;

  constexpr uint24_t Mirrors = 0x019827;
  constexpr uint16_t MirrorsWidth  = 12;
  constexpr uint16_t MirrorsHeight = 31;
  constexpr uint8_t  MirrorsFrames = 2;

  constexpr uint24_t Spikes_FG_Full = 0x01988B;
  constexpr uint16_t Spikes_FG_Full_width  = 19;
  constexpr uint16_t Spikes_FG_Full_height = 18;
  constexpr uint8_t  Spikes_FG_Full_frames = 5;

  constexpr uint24_t Spikes_BG_Full = 0x019AC9;
  constexpr uint16_t Spikes_BG_Full_width  = 19;
  constexpr uint16_t Spikes_BG_Full_height = 18;
  constexpr uint8_t  Spikes_BG_Full_frames = 5;

  constexpr uint24_t Spikes_FG_Half = 0x019D07;
  constexpr uint16_t Spikes_FG_Half_width  = 11;
  constexpr uint16_t Spikes_FG_Half_height = 18;
  constexpr uint8_t  Spikes_FG_Half_frames = 5;

  constexpr uint24_t Spikes_BG_Half = 0x019E55;
  constexpr uint16_t Spikes_BG_Half_width  = 11;
  constexpr uint16_t Spikes_BG_Half_height = 18;
  constexpr uint8_t  Spikes_BG_Half_frames = 5;

  constexpr uint24_t Flashes = 0x019FA3;
  constexpr uint16_t FlashesWidth  = 22;
  constexpr uint16_t FlashesHeight = 20;
  constexpr uint8_t  FlashesFrames = 4;

  constexpr uint24_t Tiles_Dungeon = 0x01A1B7;
  constexpr uint16_t Tiles_Dungeon_width  = 12;
  constexpr uint16_t Tiles_Dungeon_height = 31;
  constexpr uint8_t  Tiles_Dungeon_frames = 100;

  constexpr uint24_t Tile_Dungeon_97 = 0x01C73B;
  constexpr uint16_t Tile_Dungeon_97_width  = 21;
  constexpr uint16_t Tile_Dungeon_97_height = 31;

  constexpr uint24_t Tile_Dungeon_98 = 0x01C7E7;
  constexpr uint16_t Tile_Dungeon_98_width  = 12;
  constexpr uint16_t Tile_Dungeon_98_height = 31;

  constexpr uint24_t Tiles_Dungeon_Torch = 0x01C84B;
  constexpr uint16_t Tiles_Dungeon_Torch_width  = 12;
  constexpr uint16_t Tiles_Dungeon_Torch_height = 31;
  constexpr uint8_t  Tiles_Dungeon_Torch_frames = 60;

  constexpr uint24_t Princess = 0x01DECF;
  constexpr uint16_t PrincessWidth  = 32;
  constexpr uint16_t PrincessHeight = 32;
  constexpr uint8_t  PrincessFrames = 40;

  constexpr uint24_t Princess_Bounce = 0x0206D3;
  constexpr uint16_t Princess_Bounce_width  = 48;
  constexpr uint16_t Princess_Bounce_height = 32;
  constexpr uint8_t  Princess_Bounce_frames = 20;

  constexpr uint24_t Hearts = 0x0224D7;
  constexpr uint16_t HeartsWidth  = 7;
  constexpr uint16_t HeartsHeight = 6;
  constexpr uint8_t  HeartsFrames = 4;

  constexpr uint24_t Jaffar = 0x0224F7;
  constexpr uint16_t JaffarWidth  = 32;
  constexpr uint16_t JaffarHeight = 32;
  constexpr uint8_t  JaffarFrames = 30;

  constexpr uint24_t Prince_Left = 0x0242FB;
  constexpr uint16_t Prince_Left_width  = 36;
  constexpr uint16_t Prince_Left_height = 36;
  constexpr uint8_t  Prince_Left_frames = 225;

  constexpr uint24_t Prince_Right = 0x037F67;
  constexpr uint16_t Prince_Right_width  = 36;
  constexpr uint16_t Prince_Right_height = 36;
  constexpr uint8_t  Prince_Right_frames = 225;

  constexpr uint24_t Mirror_Right = 0x04BBD3;
  constexpr uint16_t Mirror_Right_width  = 36;
  constexpr uint16_t Mirror_Right_height = 36;
  constexpr uint8_t  Mirror_Right_frames = 225;

  constexpr uint24_t Mirror_Left = 0x05F83F;
  constexpr uint16_t Mirror_Left_width  = 36;
  constexpr uint16_t Mirror_Left_height = 36;
  constexpr uint8_t  Mirror_Left_frames = 225;

  constexpr uint24_t Enemy_Right = 0x0734AB;
  constexpr uint16_t Enemy_Right_width  = 36;
  constexpr uint16_t Enemy_Right_height = 36;
  constexpr uint8_t  Enemy_Right_frames = 225;

  constexpr uint24_t Enemy_Left = 0x087117;
  constexpr uint16_t Enemy_Left_width  = 36;
  constexpr uint16_t Enemy_Left_height = 36;
  constexpr uint8_t  Enemy_Left_frames = 225;

  constexpr uint24_t Skeleton_Right = 0x09AD83;
  constexpr uint16_t Skeleton_Right_width  = 36;
  constexpr uint16_t Skeleton_Right_height = 36;
  constexpr uint8_t  Skeleton_Right_frames = 225;

  constexpr uint24_t Skeleton_Left = 0x0AE9EF;
  constexpr uint16_t Skeleton_Left_width  = 36;
  constexpr uint16_t Skeleton_Left_height = 36;
  constexpr uint8_t  Skeleton_Left_frames = 225;

  constexpr uint24_t Invaders = 0x0C265B;
  constexpr uint16_t InvadersWidth  = 25;
  constexpr uint16_t InvadersHeight = 23;
  constexpr uint8_t  InvadersFrames = 18;

  constexpr uint24_t Barriers = 0x0C30EB;
  constexpr uint16_t BarriersWidth  = 4;
  constexpr uint16_t BarriersHeight = 2;
  constexpr uint8_t  BarriersFrames = 16;

  constexpr uint24_t Barrier = 0x0C316F;
  constexpr uint16_t BarrierWidth  = 16;
  constexpr uint16_t BarrierHeight = 4;

  constexpr uint24_t Player = 0x0C3183;
  constexpr uint16_t PlayerWidth  = 25;
  constexpr uint16_t PlayerHeight = 25;
  constexpr uint8_t  PlayerFrames = 5;

  constexpr uint24_t Bullet = 0x0C356F;
  constexpr uint16_t BulletWidth  = 1;
  constexpr uint16_t BulletHeight = 3;

  constexpr uint24_t HUD_Spaceship = 0x0C3574;
  constexpr uint16_t HUD_Spaceship_width  = 4;
  constexpr uint16_t HUD_Spaceship_height = 17;
  constexpr uint8_t  HUD_Spaceship_frames = 4;

  constexpr uint24_t Levels = 0x0C35A8;
  constexpr uint16_t LevelsWidth  = 57;
  constexpr uint16_t LevelsHeight = 13;
  constexpr uint8_t  LevelsFrames = 5;

}

namespace Constants
{
  constexpr uint24_t StanceToImageXRefFX = 0x0C3A20;
  constexpr uint24_t Stance_XYOffsetsFX = 0x0C3D3E;
}

namespace Constants
{
  constexpr uint24_t VertAdjustments = 0x0C4378;
  constexpr uint24_t Prince_ImageDetails = 0x0C440E;
}

constexpr uint24_t splashScreen_Frame = 0x0C4663;
constexpr uint24_t Title_Main_Game_PoP_Frame_NC = 0x0C4687;
constexpr uint24_t Title_Main_Game_PoA_Frame_NC = 0x0C4699;
constexpr uint24_t Title_Main_Game_PoP_Frame_NCH = 0x0C46AB;
constexpr uint24_t Title_Main_Game_PoA_Frame_NCH = 0x0C46BD;
constexpr uint24_t Title_Main_Game_PoP_Frame_NRC = 0x0C46CF;
constexpr uint24_t Title_Main_Game_PoA_Frame_NRC = 0x0C46E1;
constexpr uint24_t Title_Main_Game_PoP_Frame_NRCH = 0x0C46F3;
constexpr uint24_t Title_Main_Game_PoA_Frame_NRCH = 0x0C4705;
constexpr uint24_t Title_High_PoP_Frame = 0x0C4717;
constexpr uint24_t Title_High_PoA_Frame = 0x0C47B9;
constexpr uint24_t Title_Cursor_XPos = 0x0C485B;
constexpr uint24_t Invaders_HUD_frame = 0x0C486B;
constexpr uint24_t Title_Intro_PoP_Frame_NC = 0x0C487D;
constexpr uint24_t Title_Intro_Last_PoP_Frame_NC = 0x0C4CFD;
constexpr uint24_t Title_Intro_PoP_Frame_NCH = 0x0C4D0F;
constexpr uint24_t Title_Intro_Last_PoP_Frame_NCH = 0x0C518F;
constexpr uint24_t Title_Intro_PoP_Frame_NRC = 0x0C51A1;
constexpr uint24_t Title_Intro_Last_PoP_Frame_NRC = 0x0C5621;
constexpr uint24_t Title_Intro_PoP_Frame_NRCH = 0x0C5633;
constexpr uint24_t Title_Intro_Last_PoP_Frame_NRCH = 0x0C5AB3;
constexpr uint24_t Title_Intro_PoA_Frame_NC = 0x0C5AC5;
constexpr uint24_t Title_Intro_Last_PoA_Frame_NC = 0x0C5F45;
constexpr uint24_t Title_Intro_PoA_Frame_NCH = 0x0C5F57;
constexpr uint24_t Title_Intro_Last_PoA_Frame_NCH = 0x0C63D7;
constexpr uint24_t Title_Intro_PoA_Frame_NRC = 0x0C63E9;
constexpr uint24_t Title_Intro_Last_PoA_Frame_NRC = 0x0C6869;
constexpr uint24_t Title_Intro_PoA_Frame_NRCH = 0x0C687B;
constexpr uint24_t Title_Intro_Last_PoA_Frame_NRCH = 0x0C6CFB;
constexpr uint24_t Title_Main_PoP_Frame_NC = 0x0C6D0D;
constexpr uint24_t Title_Main_Last_PoP_Frame_NC = 0x0C6E99;
constexpr uint24_t Title_Main_PoP_Frame_NCH = 0x0C6EAB;
constexpr uint24_t Title_Main_Last_PoP_Frame_NCH = 0x0C7037;
constexpr uint24_t Title_Main_PoP_Frame_NRC = 0x0C7049;
constexpr uint24_t Title_Main_Last_PoP_Frame_NRC = 0x0C71D5;
constexpr uint24_t Title_Main_PoP_Frame_NRCH = 0x0C71E7;
constexpr uint24_t Title_Main_Last_PoP_Frame_NRCH = 0x0C7373;
constexpr uint24_t Title_Main_PoA_Frame_NC = 0x0C7385;
constexpr uint24_t Title_Main_Last_PoA_Frame_NC = 0x0C7511;
constexpr uint24_t Title_Main_PoA_Frame_NCH = 0x0C7523;
constexpr uint24_t Title_Main_Last_PoA_Frame_NCH = 0x0C76AF;
constexpr uint24_t Title_Main_PoA_Frame_NRC = 0x0C76C1;
constexpr uint24_t Title_Main_Last_PoA_Frame_NRC = 0x0C784D;
constexpr uint24_t Title_Main_PoA_Frame_NRCH = 0x0C785F;
constexpr uint24_t Title_Main_Last_PoA_Frame_NRCH = 0x0C79EB;
constexpr uint24_t Title_Credits_PoP_Frame = 0x0C79FD;
constexpr uint24_t Title_Credits_PoA_Frame = 0x0CAB74;
constexpr uint24_t Title_TimeOut_PoP_Frame = 0x0CDCEB;
constexpr uint24_t Title_TimeOut_PoA_Frame = 0x0D096D;
constexpr uint24_t Title_IntroGame_1A_Frame = 0x0D35EF;
constexpr uint24_t Title_CutScene_1_Frame = 0x0D3BC5;
constexpr uint24_t Title_IntroGame_1B_Frame = 0x0D70D2;
constexpr uint24_t Title_CutScene_2_Frame = 0x0D76A8;
constexpr uint24_t Title_CutScene_2B_Frame = 0x0D8AE8;
constexpr uint24_t Title_CutScene_3_Frame = 0x0DBA28;
constexpr uint24_t Title_CutScene_4_Frame = 0x0DCE68;
constexpr uint24_t Title_CutScene_5_Frame = 0x0DD888;
constexpr uint24_t Title_CutScene_6_Frame = 0x0DEE0C;
constexpr uint24_t Title_CutScene_7_Frame = 0x0E18D5;
constexpr uint24_t Title_CutScene_End_Frame = 0x0E64FB;
constexpr uint24_t Title_IntroGame_End_PoP_Frame = 0x0E7F6B;
constexpr uint24_t Title_IntroGame_End_PoA_Frame = 0x0E87B7;
constexpr uint24_t TitleFrameIndexTable = 0x0E9003;
constexpr uint24_t RunningJumpStances = 0x0E90FB;
constexpr uint24_t StandingJumpStances = 0x0E924B;
