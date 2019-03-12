#pragma once
#include "matrixdevice.h"
#include "character.h"
#include "matrixdata.h"

class Matrixactions
{
public:
    Matrixactions(Character *chr);

    // free actions
    void loadProgram();
    void switchTwoMatrixAttributes();
    void swapTwoPrograms();
    void unloadProgram();

    // simple actions
    void changeIcon();
    void checkOverwatchScore();
    void inviteMark();
    void jackOut();
    void sendMessage();
    void switchInterfaceMode();

    // complex actions
    void formatDevice();
    void rebootDevice();
    void spoofCommand();
    void crackFile();
    void disarmDataBomb();
    void editFile();
    void setDataBomb();
    void matrixPerception();
    void snoop();
    void traceIcon();
    void bruteForceAttack();
    void bruteForceGridHop();
    void eraseMark();
    void hackOnTheFly();
    void hackOnTheFlyGridHop();
    void crashProgram();
    void dataSpike();
    void enterHost();
    void exitHost();
    void gridHop();
    void hide();
    void jamSignals();
    void jumpIntoRiggedDevice();

    // interrupt actions

    void fullMatrixDefense();

private:
    Character *character;
};
