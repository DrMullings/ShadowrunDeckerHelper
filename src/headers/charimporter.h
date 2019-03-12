#ifndef CHARIMPORTER_H
#define CHARIMPORTER_H

#include <QObject>
#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QtXml>
#include <QXmlStreamReader>
#include "character.h"
#include "matrixdevice.h"
#include "cyberdeck.h"

class CharImporter : public QWidget
{
public:
    CharImporter(Character *chr);

private:
    QDomDocument readFile();
    void getRoots(QDomDocument);
    QFile charFile;
    void parseCharacter(Character*);
    void parseDevice(Matrixdevice*);

    QDomNode attributes;
    QDomNode characterRoot;
    QDomNode gears;

};

#endif // CHARIMPORTER_H
