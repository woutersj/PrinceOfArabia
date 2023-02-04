#pragma once

#include <Arduboy2.h>   
#include "../utils/Constants.h"
#include "../../fxdata/fxdata.h"
#include "Level.h"

struct TitleScreenVars {

    private:
        TitleScreenMode mode;

    public:

        uint8_t prevCount;
        uint8_t count;

        Character zaffar;
        Character princess;
        Character prince;

        TitleScreenOptions option;

    void reset() { 

        this->count = 0;
        this->option = TitleScreenOptions::Play;
        this->mode = TitleScreenMode::Intro;
        FX::setFrame(Title_Intro_Frame_NoHigh, 0); 

    }


    TitleScreenMode getMode()               { return this->mode; }

    void setMode(TitleScreenMode mode, Level &level) {

        this->mode = mode;

        switch (this->mode) {
            
            case TitleScreenMode::CutScene_2:
           
                 FX::setFrame(Title_CutScene_2_Frame, 4 - 1);
                 break;
            
            case TitleScreenMode::CutScene_3:
           
                 FX::setFrame(Title_CutScene_3_Frame, 4 - 1);
                 break;
            
            case TitleScreenMode::CutScene_4:

                this->princess.x = 67;
                break;
            
            case TitleScreenMode::CutScene_5:

                this->princess.x = 24;
                break;
            
            case TitleScreenMode::CutScene_6:

                FX::setFrame(Title_CutScene_6_Frame, 2 - 1);
                break;

            case TitleScreenMode::CutScene_9:
                {
                    Item &heart = level.getItem(Constants::Item_LoveHeart);
                    heart.itemType = ItemType::LoveHeart;
                    heart.data.loveHeart.counter = 0;
                    heart.data.location.x = 60;
                    heart.data.location.y = 25;

                    this->princess.x = 30;
                    this->prince.x = 132;

                }
                break;

            default:
                this->zaffar.x = 142;
                this->prince.x = 132;
                this->princess.x = 34;
                break;

        }

    }

    bool update(bool triggerFrame) {

        switch (this->mode) {

            case TitleScreenMode::CutScene_4:

                if (triggerFrame) {
                    
                    this->count++;
                    if (this->count == 48) return true;

                }
 
                return false;

            case TitleScreenMode::CutScene_5:

                if (triggerFrame) {
                    
                    this->count++;
                    if (this->count == 102) return true;

                }
 
                return false;

            case TitleScreenMode::CutScene_9:

                if (triggerFrame) {

                    FX::seekData(static_cast<uint24_t>(CutScene::Scene9 + (this->count * 4)));

                    prince.image = static_cast<int8_t>(FX::readPendingUInt8());
                    prince.x = prince.x + static_cast<int8_t>(FX::readPendingUInt8());
                    princess.image = static_cast<uint8_t>(FX::readPendingUInt8());
                    princess.x = princess.x + static_cast<int8_t>(FX::readPendingUInt8());

                    FX::readEnd();
 
                    this->count++;
                    if (this->count == 128) return true;

                }
 
                return false;

            case TitleScreenMode::IntroGame_9:

                if (triggerFrame) {
                    if (this->count < 224) this->count++;
                    if (this->count == 224) return true;
                }

                return false;                

            default: return false;
        }

        return false;

    }

};
