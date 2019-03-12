#ifndef CYBERDECK_H
#define CYBERDECK_H

#include <QObject>
#include <string>
#include <list>
#include "matrixdevice.h"

using namespace std;
class Cyberdeck : public Matrixdevice
{
public:
    Cyberdeck();
    Cyberdeck(std::unordered_map<MatrixAttribute, uint8_t> atts, uint8_t lvl, uint8_t prgcnt);
private:
    uint8_t concurrentPrgCnt;        //Anzahl gleichzeitig laufender Programme
    list<string> runningPrograms;
    list<string> savedPrograms;
    // sinnvoll?
    list<string> savedAgents;
    list<string> runningAgents;
};

#endif // CYBERDECK_H
