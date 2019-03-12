#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <string>
#include <QHash>
#include <memory>
#include "matrixdevice.h"
#include "matrixdata.h"

struct CharAttribute {
    QString name;   //is this even necessary?
    uint8_t baseValue = 0;
    uint8_t modifier = 0;
    QString type;   //maybe enum? phy, psy, none
};

class Character
{
public:
    Character();
    Character(std::string name);
    Character(std::string name, std::unordered_map<std::string, CharAttribute> attributes);
    Character(std::string name, std::unordered_map<std::string, CharAttribute> attributes, std::vector<std::unique_ptr<Matrixdevice>> &&devices);

    std::string getName();

    uint8_t getAttributeBaseValue(const std::string &attribute) const;
    uint8_t getAttributeModifiedValue(const std::string &attribute) const;
    CharAttribute getAttributes(const std::string &attribute);
    Matrixdevice getDevices();

    void setAttributeValue(std::string attr, uint8_t val);
    void setAttributeModifier(std::string attr, uint8_t val);

private:
    std::unordered_map<std::string, CharAttribute> characterAttributes;
    std::unordered_map<MatrixSkills, uint8_t> matrixSkills;

    std::string characterName;

    std::vector<std::unique_ptr<Matrixdevice>> matrixDevices;

    std::unordered_map<std::string, CharAttribute> initAttributes();
};

#endif // CHARACTER_H
