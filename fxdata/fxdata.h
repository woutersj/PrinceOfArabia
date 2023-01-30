#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.13 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xf629;
constexpr uint24_t FX_DATA_BYTES = 640635;

constexpr uint16_t FX_SAVE_PAGE  = 0xfff0;
constexpr uint24_t FX_SAVE_BYTES = 2;

namespace Levels
{
  constexpr uint24_t Level1_FG = 0x000000;
  constexpr uint24_t Level1_BG = 0x00032A;
  constexpr uint24_t level1_Data = 0x000654;
  constexpr uint24_t Level1_Items = 0x00066F;
  constexpr uint24_t Level2_FG = 0x0007D0;
  constexpr uint24_t Level2_BG = 0x000DE8;
  constexpr uint24_t level2_Data = 0x001400;
  constexpr uint24_t Level2_Items = 0x001433;
  constexpr uint24_t Level3_FG = 0x001534;
  constexpr uint24_t Level3_BG = 0x001A7A;
  constexpr uint24_t level3_Data = 0x001FC0;
  constexpr uint24_t Level3_Items = 0x001FD3;
  constexpr uint24_t Level4_FG = 0x002084;
  constexpr uint24_t Level4_BG = 0x0024BC;
  constexpr uint24_t level4_Data = 0x0028F4;
  constexpr uint24_t Level4_Items = 0x002927;
  constexpr uint24_t Level5_FG = 0x002A88;
  constexpr uint24_t Level5_BG = 0x002FCE;
  constexpr uint24_t level5_Data = 0x003514;
  constexpr uint24_t Level5_Items = 0x00353F;
  constexpr uint24_t Level6_FG = 0x003670;
  constexpr uint24_t Level6_BG = 0x0038E6;
  constexpr uint24_t level6_Data = 0x003B5C;
  constexpr uint24_t Level6_Items = 0x003B77;
  constexpr uint24_t Level7_FG = 0x003BD8;
  constexpr uint24_t Level7_BG = 0x004010;
  constexpr uint24_t level7_Data = 0x004448;
  constexpr uint24_t Level7_Items = 0x00446B;
  constexpr uint24_t Level8_FG = 0x0045EC;
  constexpr uint24_t Level8_BG = 0x004B14;
  constexpr uint24_t level8_Data = 0x00503C;
  constexpr uint24_t Level8_Items = 0x005067;
  constexpr uint24_t Level9_FG = 0x0051A8;
  constexpr uint24_t Level9_BG = 0x005568;
  constexpr uint24_t level9_Data = 0x005928;
  constexpr uint24_t Level9_Items = 0x005953;
  constexpr uint24_t Level10_FG = 0x005AB4;
  constexpr uint24_t Level10_BG = 0x005D84;
  constexpr uint24_t level10_Data = 0x006054;
  constexpr uint24_t Level10_Items = 0x00607F;
  constexpr uint24_t Level11_FG = 0x0061E0;
  constexpr uint24_t Level11_BG = 0x006618;
  constexpr uint24_t level11_Data = 0x006A50;
  constexpr uint24_t Level11_Items = 0x006A73;
  constexpr uint24_t Level12_FG = 0x006BF4;
  constexpr uint24_t Level12_BG = 0x007284;
  constexpr uint24_t level12_Data = 0x007914;
  constexpr uint24_t Level12_Items = 0x00792F;
  constexpr uint24_t Level13_FG = 0x0079F8;
  constexpr uint24_t Level13_BG = 0x007AAC;
  constexpr uint24_t level13_Data = 0x007B60;
  constexpr uint24_t Level13_Items = 0x007B6B;
  constexpr uint24_t Level14_StandingJumps_FG = 0x007BBC;
  constexpr uint24_t Level14_StandingJumps_BG = 0x007CAC;
  constexpr uint24_t Level14_StandingJumps_Data = 0x007D9C;
  constexpr uint24_t Level14_StandingJumps_Items = 0x007DA7;
  constexpr uint24_t Level15_RunningJumps_FG = 0x007DA8;
  constexpr uint24_t Level15_RunningJumps_BG = 0x007E7A;
  constexpr uint24_t Level15_RunningJumps_Data = 0x007F4C;
  constexpr uint24_t Level15_RunningJumps_Items = 0x007F57;
  constexpr uint24_t level_FG = 0x007F58;
  constexpr uint24_t Level_BG = 0x007F88;
  constexpr uint24_t level_Data = 0x007FB8;
  constexpr uint24_t Level_Items = 0x007FE8;
}

namespace CutScene
{
  constexpr uint24_t Scene9 = 0x008018;
}

namespace Sounds
{
  constexpr uint24_t Dead = 0x008218;
  constexpr uint24_t Grab1 = 0x008236;
  constexpr uint24_t Grab2 = 0x008260;
  constexpr uint24_t Grab3 = 0x00828A;
  constexpr uint24_t Grab4 = 0x0082C4;
  constexpr uint24_t Seque = 0x00831A;
  constexpr uint24_t Tada = 0x008394;
  constexpr uint24_t Theme = 0x0083B2;
  constexpr uint24_t Triumph = 0x008580;
  constexpr uint24_t Victory = 0x00859E;
  constexpr uint24_t Ending = 0x008610;
  constexpr uint24_t OutOfTime = 0x00888E;
}

namespace Images
{
  constexpr uint24_t PPOT = 0x0088D4;
  constexpr uint16_t PPOT_WIDTH  = 65;
  constexpr uint16_t PPOTHEIGHT  = 31;
  constexpr uint8_t  PPOT_FRAMES = 4;

  constexpr uint24_t Title_PoP = 0x008CE8;
  constexpr uint16_t Title_PoP_width  = 128;
  constexpr uint16_t Title_PoP_height = 33;

  constexpr uint24_t Title_Main_NoHigh = 0x0091EC;
  constexpr uint16_t Title_Main_NoHigh_width  = 128;
  constexpr uint16_t Title_Main_NoHigh_height = 88;

  constexpr uint24_t Title_Main_WithHigh = 0x009770;
  constexpr uint16_t Title_Main_WithHigh_width  = 128;
  constexpr uint16_t Title_Main_WithHigh_height = 88;

  constexpr uint24_t Title_Cursor = 0x009CF4;
  constexpr uint16_t Title_Cursor_width  = 5;
  constexpr uint16_t Title_Cursor_height = 5;

  constexpr uint24_t Title_Credits = 0x009CFD;
  constexpr uint16_t Title_Credits_width  = 73;
  constexpr uint16_t Title_Credits_height = 136;

  constexpr uint24_t TimeRemaining = 0x00A1DA;
  constexpr uint16_t TimeRemainingWidth  = 81;
  constexpr uint16_t TimeRemainingHeight = 15;

  constexpr uint24_t LevelNumber = 0x00A322;
  constexpr uint16_t LevelNumberWidth  = 81;
  constexpr uint16_t LevelNumberHeight = 15;

  constexpr uint24_t GameOver = 0x00A46A;
  constexpr uint16_t GameOverWidth  = 49;
  constexpr uint16_t GameOverHeight = 15;

  constexpr uint24_t PressA = 0x00A532;
  constexpr uint16_t PressAWidth  = 79;
  constexpr uint16_t PressAHeight = 15;

  constexpr uint24_t TimeOut = 0x00A672;
  constexpr uint16_t TimeOutWidth  = 86;
  constexpr uint16_t TimeOutHeight = 114;

  constexpr uint24_t IntroGame_1A = 0x00AB80;
  constexpr uint16_t IntroGame_1A_width  = 118;
  constexpr uint16_t IntroGame_1A_height = 96;

  constexpr uint24_t IntroGame_1B = 0x00B10C;
  constexpr uint16_t IntroGame_1B_width  = 123;
  constexpr uint16_t IntroGame_1B_height = 96;

  constexpr uint24_t IntroGame_9 = 0x00B6D4;
  constexpr uint16_t IntroGame_9_width  = 123;
  constexpr uint16_t IntroGame_9_height = 160;

  constexpr uint24_t Chambers_BG = 0x00C074;
  constexpr uint16_t Chambers_BG_width  = 128;
  constexpr uint16_t Chambers_BG_height = 64;

  constexpr uint24_t Chambers_FG = 0x00C478;
  constexpr uint16_t Chambers_FG_width  = 128;
  constexpr uint16_t Chambers_FG_height = 64;

  constexpr uint24_t Credits_BG = 0x00CC7C;
  constexpr uint16_t Credits_BG_width  = 128;
  constexpr uint16_t Credits_BG_height = 9;

  constexpr uint24_t Mouse = 0x00CD80;
  constexpr uint16_t MouseWidth  = 16;
  constexpr uint16_t MouseHeight = 16;
  constexpr uint8_t  MouseFrames = 3;

  constexpr uint24_t HourGlasses = 0x00CE44;
  constexpr uint16_t HourGlassesWidth  = 19;
  constexpr uint16_t HourGlassesHeight = 23;
  constexpr uint8_t  HourGlassesFrames = 7;

  constexpr uint24_t Menu = 0x00D166;
  constexpr uint16_t MenuWidth  = 42;
  constexpr uint16_t MenuHeight = 64;
  constexpr uint8_t  MenuFrames = 3;

  constexpr uint24_t Sword_Cursor = 0x00D55A;
  constexpr uint16_t Sword_Cursor_width  = 8;
  constexpr uint16_t Sword_Cursor_height = 10;

  constexpr uint24_t HUD_Backgrounds = 0x00D56E;
  constexpr uint16_t HUD_Backgrounds_width  = 8;
  constexpr uint16_t HUD_Backgrounds_height = 64;
  constexpr uint8_t  HUD_Backgrounds_frames = 2;

  constexpr uint24_t Numbers_Upright = 0x00D5F2;
  constexpr uint16_t Numbers_Upright_width  = 7;
  constexpr uint16_t Numbers_Upright_height = 5;
  constexpr uint8_t  Numbers_Upright_frames = 60;

  constexpr uint24_t Numbers = 0x00D79A;
  constexpr uint16_t NumbersWidth  = 11;
  constexpr uint16_t NumbersHeight = 7;
  constexpr uint8_t  NumbersFrames = 60;

  constexpr uint24_t Numbers_Large = 0x00DA32;
  constexpr uint16_t Numbers_Large_width  = 22;
  constexpr uint16_t Numbers_Large_height = 14;
  constexpr uint8_t  Numbers_Large_frames = 60;

  constexpr uint24_t Numbers_Small = 0x00E486;
  constexpr uint16_t Numbers_Small_width  = 5;
  constexpr uint16_t Numbers_Small_height = 7;
  constexpr uint8_t  Numbers_Small_frames = 60;

  constexpr uint24_t Numbers_Divider = 0x00E5B6;
  constexpr uint16_t Numbers_Divider_width  = 4;
  constexpr uint16_t Numbers_Divider_height = 8;

  constexpr uint24_t Healths = 0x00E5BE;
  constexpr uint16_t HealthsWidth  = 5;
  constexpr uint16_t HealthsHeight = 3;
  constexpr uint8_t  HealthsFrames = 2;

  constexpr uint24_t Sword_HUD = 0x00E5CC;
  constexpr uint16_t Sword_HUD_width  = 5;
  constexpr uint16_t Sword_HUD_height = 5;

  constexpr uint24_t Potion_Float_HUD = 0x00E5D5;
  constexpr uint16_t Potion_Float_HUD_width  = 5;
  constexpr uint16_t Potion_Float_HUD_height = 5;

  constexpr uint24_t HighScore = 0x00E5DE;
  constexpr uint16_t HighScoreWidth  = 52;
  constexpr uint16_t HighScoreHeight = 5;

  constexpr uint24_t Sword = 0x00E616;
  constexpr uint16_t SwordWidth  = 14;
  constexpr uint16_t SwordHeight = 5;

  constexpr uint24_t Skeleton = 0x00E636;
  constexpr uint16_t SkeletonWidth  = 15;
  constexpr uint16_t SkeletonHeight = 12;

  constexpr uint24_t Gates = 0x00E676;
  constexpr uint16_t GatesWidth  = 9;
  constexpr uint16_t GatesHeight = 28;
  constexpr uint8_t  GatesFrames = 10;

  constexpr uint24_t Blades = 0x00E94A;
  constexpr uint16_t BladesWidth  = 9;
  constexpr uint16_t BladesHeight = 28;
  constexpr uint8_t  BladesFrames = 6;

  constexpr uint24_t ExitDoors = 0x00EAFE;
  constexpr uint16_t ExitDoorsWidth  = 25;
  constexpr uint16_t ExitDoorsHeight = 33;
  constexpr uint8_t  ExitDoorsFrames = 13;

  constexpr uint24_t Potions_Small = 0x00F15B;
  constexpr uint16_t Potions_Small_width  = 6;
  constexpr uint16_t Potions_Small_height = 15;
  constexpr uint8_t  Potions_Small_frames = 2;

  constexpr uint24_t Potions_Large = 0x00F18F;
  constexpr uint16_t Potions_Large_width  = 6;
  constexpr uint16_t Potions_Large_height = 15;
  constexpr uint8_t  Potions_Large_frames = 2;

  constexpr uint24_t Potions_Poison = 0x00F1C3;
  constexpr uint16_t Potions_Poison_width  = 6;
  constexpr uint16_t Potions_Poison_height = 15;
  constexpr uint8_t  Potions_Poison_frames = 6;

  constexpr uint24_t Potions_Float = 0x00F257;
  constexpr uint16_t Potions_Float_width  = 6;
  constexpr uint16_t Potions_Float_height = 15;
  constexpr uint8_t  Potions_Float_frames = 7;

  constexpr uint24_t DecorativeDoor = 0x00F303;
  constexpr uint16_t DecorativeDoorWidth  = 23;
  constexpr uint16_t DecorativeDoorHeight = 40;

  constexpr uint24_t CollapsedFloor = 0x00F37A;
  constexpr uint16_t CollapsedFloorWidth  = 21;
  constexpr uint16_t CollapsedFloorHeight = 13;

  constexpr uint24_t CollapsingFloors = 0x00F3D2;
  constexpr uint16_t CollapsingFloorsWidth  = 21;
  constexpr uint16_t CollapsingFloorsHeight = 31;
  constexpr uint8_t  CollapsingFloorsFrames = 4;

  constexpr uint24_t FloorButtons_0and1 = 0x00F676;
  constexpr uint16_t FloorButtons_0and1_width  = 21;
  constexpr uint16_t FloorButtons_0and1_height = 32;
  constexpr uint8_t  FloorButtons_0and1_frames = 4;

  constexpr uint24_t FloorButtons_2 = 0x00F91A;
  constexpr uint16_t FloorButtons_2_width  = 12;
  constexpr uint16_t FloorButtons_2_height = 31;
  constexpr uint8_t  FloorButtons_2_frames = 2;

  constexpr uint24_t Torches = 0x00F9DE;
  constexpr uint16_t TorchesWidth  = 3;
  constexpr uint16_t TorchesHeight = 11;
  constexpr uint8_t  TorchesFrames = 5;

  constexpr uint24_t Mirrors = 0x00FA1E;
  constexpr uint16_t MirrorsWidth  = 12;
  constexpr uint16_t MirrorsHeight = 31;
  constexpr uint8_t  MirrorsFrames = 2;

  constexpr uint24_t Spikes_FG_Full = 0x00FA82;
  constexpr uint16_t Spikes_FG_Full_width  = 19;
  constexpr uint16_t Spikes_FG_Full_height = 18;
  constexpr uint8_t  Spikes_FG_Full_frames = 5;

  constexpr uint24_t Spikes_BG_Full = 0x00FCC0;
  constexpr uint16_t Spikes_BG_Full_width  = 19;
  constexpr uint16_t Spikes_BG_Full_height = 18;
  constexpr uint8_t  Spikes_BG_Full_frames = 5;

  constexpr uint24_t Spikes_FG_Half = 0x00FEFE;
  constexpr uint16_t Spikes_FG_Half_width  = 11;
  constexpr uint16_t Spikes_FG_Half_height = 18;
  constexpr uint8_t  Spikes_FG_Half_frames = 5;

  constexpr uint24_t Spikes_BG_Half = 0x01004C;
  constexpr uint16_t Spikes_BG_Half_width  = 11;
  constexpr uint16_t Spikes_BG_Half_height = 18;
  constexpr uint8_t  Spikes_BG_Half_frames = 5;

  constexpr uint24_t Flashes = 0x01019A;
  constexpr uint16_t FlashesWidth  = 22;
  constexpr uint16_t FlashesHeight = 20;
  constexpr uint8_t  FlashesFrames = 4;

  constexpr uint24_t Tiles_Dungeon = 0x0103AE;
  constexpr uint16_t Tiles_Dungeon_width  = 12;
  constexpr uint16_t Tiles_Dungeon_height = 31;
  constexpr uint8_t  Tiles_Dungeon_frames = 100;

  constexpr uint24_t Tile_Dungeon_97 = 0x012932;
  constexpr uint16_t Tile_Dungeon_97_width  = 21;
  constexpr uint16_t Tile_Dungeon_97_height = 31;

  constexpr uint24_t Tile_Dungeon_98 = 0x0129DE;
  constexpr uint16_t Tile_Dungeon_98_width  = 12;
  constexpr uint16_t Tile_Dungeon_98_height = 31;

  constexpr uint24_t Tiles_Dungeon_Torch = 0x012A42;
  constexpr uint16_t Tiles_Dungeon_Torch_width  = 12;
  constexpr uint16_t Tiles_Dungeon_Torch_height = 31;
  constexpr uint8_t  Tiles_Dungeon_Torch_frames = 60;

  constexpr uint24_t Princess = 0x0140C6;
  constexpr uint16_t PrincessWidth  = 32;
  constexpr uint16_t PrincessHeight = 32;
  constexpr uint8_t  PrincessFrames = 40;

  constexpr uint24_t Princess_Bounce = 0x0168CA;
  constexpr uint16_t Princess_Bounce_width  = 48;
  constexpr uint16_t Princess_Bounce_height = 32;
  constexpr uint8_t  Princess_Bounce_frames = 20;

  constexpr uint24_t Hearts = 0x0186CE;
  constexpr uint16_t HeartsWidth  = 7;
  constexpr uint16_t HeartsHeight = 6;
  constexpr uint8_t  HeartsFrames = 4;

  constexpr uint24_t Zaffar = 0x0186EE;
  constexpr uint16_t ZaffarWidth  = 32;
  constexpr uint16_t ZaffarHeight = 32;
  constexpr uint8_t  ZaffarFrames = 30;

  constexpr uint24_t Prince_Left = 0x01A4F2;
  constexpr uint16_t Prince_Left_width  = 36;
  constexpr uint16_t Prince_Left_height = 36;
  constexpr uint8_t  Prince_Left_frames = 225;

  constexpr uint24_t Prince_Right = 0x02E15E;
  constexpr uint16_t Prince_Right_width  = 36;
  constexpr uint16_t Prince_Right_height = 36;
  constexpr uint8_t  Prince_Right_frames = 225;

  constexpr uint24_t Mirror_Right = 0x041DCA;
  constexpr uint16_t Mirror_Right_width  = 36;
  constexpr uint16_t Mirror_Right_height = 36;
  constexpr uint8_t  Mirror_Right_frames = 225;

  constexpr uint24_t Mirror_Left = 0x055A36;
  constexpr uint16_t Mirror_Left_width  = 36;
  constexpr uint16_t Mirror_Left_height = 36;
  constexpr uint8_t  Mirror_Left_frames = 225;

  constexpr uint24_t Enemy_Right = 0x0696A2;
  constexpr uint16_t Enemy_Right_width  = 36;
  constexpr uint16_t Enemy_Right_height = 36;
  constexpr uint8_t  Enemy_Right_frames = 225;

  constexpr uint24_t Enemy_Left = 0x07D30E;
  constexpr uint16_t Enemy_Left_width  = 36;
  constexpr uint16_t Enemy_Left_height = 36;
  constexpr uint8_t  Enemy_Left_frames = 225;

}

namespace Constants
{
  constexpr uint24_t StanceToImageXRefFX = 0x090F7A;
  constexpr uint24_t Stance_XYOffsetsFX = 0x0911FC;
  constexpr uint24_t VertAdjustments = 0x0916FE;
  constexpr uint24_t Prince_ImageDetails = 0x091794;
}

constexpr uint24_t splashScreen_Frame = 0x0919DD;
constexpr uint24_t Title_Intro_Frame_NoHigh = 0x091A01;
constexpr uint24_t Title_Intro_Last_Frame_NoHigh = 0x091E81;
constexpr uint24_t Title_Intro_Frame_WithHigh = 0x091E93;
constexpr uint24_t Title_Intro_Last_Frame_WithHigh = 0x092313;
constexpr uint24_t Title_Main_Frame_NoHigh = 0x092325;
constexpr uint24_t Title_Main_Last_Frame_NoFrame = 0x0924B1;
constexpr uint24_t Title_Main_Frame_WithHigh = 0x0924C3;
constexpr uint24_t Title_Main_Last_Frame_WithHigh = 0x09264F;
constexpr uint24_t Title_Main_Game_Frame_NoHigh = 0x092661;
constexpr uint24_t Title_Main_Game_Frame_WithHigh = 0x09267C;
constexpr uint24_t Title_Main_Credits_Frame_NoHigh = 0x092697;
constexpr uint24_t Title_Main_Credits_Frame_WithHigh = 0x0926B2;
constexpr uint24_t Title_Main_High_Frame_WithHigh = 0x0926CD;
constexpr uint24_t Title_Credits_Frame = 0x0926E8;
constexpr uint24_t Title_TimeOut_Frame = 0x09585F;
constexpr uint24_t Title_High_Frame = 0x0984E1;
constexpr uint24_t Title_IntroGame_1A_Frame = 0x098568;
constexpr uint24_t Title_CutScene_1_Frame = 0x098B3E;
constexpr uint24_t Title_IntroGame_1B_Frame = 0x09C04B;
constexpr uint24_t Chambers_BG_frame = 0x09C621;
constexpr uint24_t Chambers_FG_frame = 0x09C672;
