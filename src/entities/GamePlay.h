#pragma once

#include "../utils/Arduboy2Ext.h"
#include "../utils/Constants.h"

struct GamePlay {

    GameState gameState = GameState::SplashScreen_Init;

    uint16_t frameCount = 0;
    uint8_t level = 1;
    uint8_t timer_Sec = 0;
    uint8_t timer_Min = 60;

    uint8_t crouchTimer = 0;
    uint8_t timeRemaining = 0;


    void init(Arduboy2Ext & arduboy, uint8_t level) {

        this->frameCount = arduboy.getFrameCount();
        this->frameCount = 0;

        this->level = level;
        this->timer_Sec = 0;
        this->timer_Min = 60;

        this->timeRemaining = 124;
        this->gameState = GameState::Game;

    }

    void restartLevel(Arduboy2Ext & arduboy) {

        this->frameCount = arduboy.getFrameCount();
        this->frameCount = 0;

        this->timeRemaining = 124;
        this->gameState = GameState::Game;

    }

    void update(Arduboy2Ext & arduboy) {

        if ((arduboy.getFrameCount() - this->frameCount) % Constants::FrameRate == 0) {

            if (this->timer_Sec == 0) {
                this->timer_Sec = 60;
                this->timer_Min--;
            }

            this->timer_Sec--;

        }

        if (this->timeRemaining > 0) this->timeRemaining--;

    }

    void incLevel() {

        level++;

    }

    bool isGameOver() {

        if (this->timer_Min > 0) return false;
        if (this->timer_Sec > 0) return false;

        return true;
        
    }

};
