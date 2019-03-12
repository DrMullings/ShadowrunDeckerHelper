#include "../headers/character.h"
using namespace std;

Character::Character()
{
    characterAttributes = initAttributes();
}

Character::Character(string name)
{
    characterName = name;
}

Character::Character(string name, unordered_map<string, CharAttribute> attributes)
{
    characterName = name;
    characterAttributes = attributes;
}

Character::Character(string name, unordered_map<string, CharAttribute> attributes, vector<unique_ptr<Matrixdevice>> &&devices)
{
    characterName = name;
    characterAttributes = move(attributes);
    matrixDevices = move(devices);
}

void Character::setAttributeValue(string attr, uint8_t val)
{
    characterAttributes[attr].baseValue = val;
}

void Character::setAttributeModifier(string attr, uint8_t val)
{
    characterAttributes[attr].modifier = val;
}

unordered_map<string, CharAttribute> Character::initAttributes()
{
    return unordered_map<string, CharAttribute>{
        {"BOD", CharAttribute{"Body", 0, 0}},
        {"AGI", CharAttribute{"Agility"}},
        {"REA", CharAttribute{"Reaction"}},
        {"STR", CharAttribute{"Strength"}},
        {"CHA", CharAttribute{"Charisma"}},
        {"INT", CharAttribute{"Intuition"}},
        {"LOG", CharAttribute{"Logic"}},
        {"WIL", CharAttribute{"Willpower"}},
        {"EDG", CharAttribute{"Edge"}},
        {"INI", CharAttribute{"Initiative"}},
        {"MAG", CharAttribute{"Magic"}},
        {"ESS", CharAttribute{"Essence"}},
        {"RES", CharAttribute{"Resonance"}}
    };
}

