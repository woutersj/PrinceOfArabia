#pragma once

#include "Arduboy2Ext.h"
#include "../entities/Cookie.h"

#define EEPROM_START                  EEPROM_STORAGE_SPACE_START + 300
#define EEPROM_START_C1               EEPROM_START
#define EEPROM_START_C2               EEPROM_START + 1
#define EEPROM_MIN                    EEPROM_START + 2
#define EEPROM_SEC                    EEPROM_START + 3
#define EEPROM_SAVED_LEVEL            EEPROM_START + 4
#define EEPROM_TOP_START              EEPROM_START + 5


class EEPROM_Utils {

  public: 

    EEPROM_Utils(){};
        
    static void saveGame(Cookie &cookie);
    static void loadGame(Cookie &cookie);
    static bool isSaved();
    static bool hasHighScore();
    static void saveHighScore(uint8_t min, uint8_t sec);
    static uint8_t getMin();
    static uint8_t getSec();

};


/* ---------------------------------------------------------------------------- */

const uint8_t letter1 = 80; 
const uint8_t letter2 = 80; 
const uint8_t savedGame = 87; 


void EEPROM_Utils::saveGame(Cookie &cookie) {

    byte c1 = EEPROM.read(EEPROM_START_C1);
    byte c2 = EEPROM.read(EEPROM_START_C2);

    if (c1 != letter1 || c2 != letter2) {

        EEPROM.update(EEPROM_MIN, 0);
        EEPROM.update(EEPROM_SEC, 0);

    }

    EEPROM.update(EEPROM_START_C1, letter1);
    EEPROM.update(EEPROM_START_C2, letter2);
    EEPROM.update(EEPROM_SAVED_LEVEL, savedGame);
    EEPROM.put(EEPROM_TOP_START, cookie);

}

void EEPROM_Utils::loadGame(Cookie &cookie) {

    EEPROM.get(EEPROM_TOP_START, cookie);

}

bool EEPROM_Utils::isSaved() {

    if (EEPROM.read(EEPROM_START_C1) != letter1) return false;
    if (EEPROM.read(EEPROM_START_C2) != letter2) return false;
    if (EEPROM.read(EEPROM_SAVED_LEVEL) != savedGame) return false;

}

bool EEPROM_Utils::hasHighScore() {

    byte c1 = EEPROM.read(EEPROM_START_C1);
    byte c2 = EEPROM.read(EEPROM_START_C2);

    byte min = EEPROM.read(EEPROM_MIN);
    byte sec = EEPROM.read(EEPROM_SEC);

    return (c1 == letter1 && c2 == letter2 && (min > 0 || sec > 0));

}

uint8_t EEPROM_Utils::getMin() {

    byte min = EEPROM.read(EEPROM_MIN);
    
    return (min > 59 ? 0 : min);

}

uint8_t EEPROM_Utils::getSec() {

    byte sec = EEPROM.read(EEPROM_SEC);

    return (sec > 59 ? 0 : sec);

}

void EEPROM_Utils::saveHighScore(uint8_t min, uint8_t sec) {

    byte minExist = EEPROM.read(EEPROM_MIN);
    byte secExist = EEPROM.read(EEPROM_SEC);

    if (!hasHighScore() || (min * 60) + sec > (minExist * 60) + secExist) {

        EEPROM.update(EEPROM_START_C1, letter1);
        EEPROM.update(EEPROM_START_C2, letter2);
        EEPROM.update(EEPROM_MIN, min);
        EEPROM.update(EEPROM_SEC, sec);

    }

}
