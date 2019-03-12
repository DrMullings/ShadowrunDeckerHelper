#include "../headers/matrixdevice.h"
using namespace std;

Matrixdevice::Matrixdevice() {

}

Matrixdevice::Matrixdevice(string name,MatrixDeviceType type, uint8_t lvl, unordered_map<MatrixAttribute, uint8_t> atts)
{
    deviceName = name;
    deviceType = type;
    deviceLvl = lvl;
    matrixAttributes = move(atts);
}

Matrixdevice::~Matrixdevice()
{

}

void Matrixdevice::switchAttributes(MatrixAttribute left, MatrixAttribute right)
{
    uint8_t temp = matrixAttributes[left];
    matrixAttributes[left] = matrixAttributes[right];
    matrixAttributes[right] = temp;
}

uint8_t Matrixdevice::getAttributeValue (MatrixAttribute attr) { return matrixAttributes[attr]; }
void Matrixdevice::setAttributeValue(MatrixAttribute attr, uint8_t val) { matrixAttributes[attr] = val; }

string Matrixdevice::getDeviceName(){ return deviceName; }
void Matrixdevice::setDeviceName(string name) { deviceName = name; }

uint8_t Matrixdevice::getDeviceLevel() { return deviceLvl; }
void Matrixdevice::setDeviceLevel(uint8_t lvl) { deviceLvl =  lvl; }

MatrixDeviceType Matrixdevice::getDeviceType() { return deviceType; }
void Matrixdevice::setDeviceType(MatrixDeviceType type) { deviceType = type; }

uint8_t Matrixdevice::getDamage() {return damageCnt; }
void Matrixdevice::addDamage(uint8_t val) { damageCnt += val;  }
void Matrixdevice::repairDamage(uint8_t val) { damageCnt -= val; }

bool Matrixdevice::getWifiState() { return wifiOn; }
void Matrixdevice::setWifiState(bool state) { wifiOn = state; }
