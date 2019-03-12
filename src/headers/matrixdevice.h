#ifndef MATRIXDEVICE_H
#define MATRIXDEVICE_H

#include <cstdint>
#include <string>
#include <unordered_map>
#include "matrixdata.h"

enum MatrixDeviceType {Kommlink, Deck, Other};

class Matrixdevice
{
public:
    Matrixdevice();
    Matrixdevice(std::string name,MatrixDeviceType type, uint8_t lvl, std::unordered_map<MatrixAttribute, uint8_t> atts);
    ~Matrixdevice();

    uint8_t getAttributeValue(MatrixAttribute);
    uint8_t getDeviceLevel();
    std::string getDeviceName();
    MatrixDeviceType getDeviceType();

    void switchAttributes(MatrixAttribute, MatrixAttribute);

    bool getWifiState();
    void setWifiState(bool);

    uint8_t getDamage();
    void addDamage(uint8_t);
    void repairDamage(uint8_t);

    uint8_t getMarks();
    void setMark();
    void deleteMark();

protected:
    //Non-Matrix attributes
    std::string deviceName;
    MatrixDeviceType deviceType;
    uint8_t deviceLvl;            //Geraetestufe

    //Matrix attributes
    std::unordered_map<MatrixAttribute, uint8_t> matrixAttributes;
    uint8_t damageCnt;            //Matrixschaden
    uint8_t marksCnt;             //Marken TODO refactor
    bool wifiOn;

    void setAttributeValue(MatrixAttribute attr, uint8_t val);
    void setDeviceName(std::string name);
    void setDeviceLevel(uint8_t lvl);
    void setDeviceType(MatrixDeviceType type);
};

#endif // MATRIXDEVICE_H
