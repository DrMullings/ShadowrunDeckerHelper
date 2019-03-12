#include "../headers/cyberdeck.h"
using namespace std;

Cyberdeck::Cyberdeck() {}

Cyberdeck::Cyberdeck(unordered_map<MatrixAttribute, uint8_t> atts, uint8_t lvl, uint8_t prgCnt) {
    matrixAttributes = atts;
    concurrentPrgCnt = prgCnt;
    deviceType = Deck;
    deviceLvl = lvl;
    //programme laden
    //standardanordnung der werte laden
}
