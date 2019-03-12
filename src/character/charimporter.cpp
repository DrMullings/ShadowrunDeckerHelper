#include "../headers/charimporter.h"
#include <QMessageBox>

/*
We want:
<character>
    <name></name>
    <attributes>
        <name>BOD</name>
        <totalvalue>THIS</totalvalue>
    For all attributes
    </attributes>
    <gear>
        <cyberdeck>
            <name>
            <wirelesson>
            <page>
            <devicerating>
            <attack><sleaze><dataprocessing><firewall>
            <attributearray>
            <gear>
                <children>
                    <name>Commlink Functionality</name>
                </children>
            </gear>
        <cyberdeck/>
    </gear>
</character>
*/
CharImporter::CharImporter(Character *chr)
{
    getRoots(readFile());
    parseCharacter(chr);
}

QDomDocument CharImporter::readFile() {

    QString filename = QFileDialog::getOpenFileName(this,"Load Character","","Chummer(*.chum5);;All Files(*)");
    QDomDocument xmlChar;

    if (filename.isEmpty()) {
        QMessageBox::information(this,"File seems to be empty", charFile.errorString());
        exit(1);
    }
    else {
        QFile charFile(filename);

        if(!charFile.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this,"Unable to open file", charFile.errorString());
            exit(1);
        }
        xmlChar.setContent(&charFile);
        charFile.close();
    }
    return xmlChar;
}

void CharImporter::getRoots(QDomDocument xml) {

    characterRoot = xml.namedItem("character");
    gears = characterRoot.namedItem("gears");
    attributes = characterRoot.namedItem("attributes");
}

void CharImporter::parseCharacter(Character *chr)
{
    string name = characterRoot.namedItem("name").nodeValue().toStdString();

    QMessageBox::information(this,QString::fromStdString(name),"Name is " + QString::fromStdString(name));

    QDomElement attribute = attributes.firstChild().toElement();
    while (!attribute.isNull()) {
        string attributeName = attribute.namedItem("name").nodeValue().toStdString();
        uint8_t attributeValue = uint8_t(attribute.namedItem("totalvalue").nodeValue().toUInt());
        QMessageBox::information(this, "Title", "Attribute " + QString::fromStdString(attributeName));
        chr->setAttributeValue(attributeName, attributeValue);

        attribute = attribute.nextSibling().toElement();
    }
    // get matrix skills

}

void CharImporter::parseDevice(Matrixdevice *dev)
{
    QDomElement gear = gears.firstChild().toElement();
    while (!gear.isNull()){
        //find cyberdeck/commlink
        if (gear.namedItem("Category").nodeValue() == "Cyberdecks") {

            // read cyberdeck values
            string name = gear.namedItem("name").nodeValue().toStdString();
            uint8_t prgCnt = gear.namedItem("programlimit").nodeValue().toUInt();
            uint8_t atk = gear.namedItem("attack").nodeValue().toUInt();
            uint8_t slz = gear.namedItem("sleaze").nodeValue().toUInt();
            uint8_t dtp = gear.namedItem("dataprocessing").nodeValue().toUInt();
            uint8_t fwl = gear.namedItem("firewall").nodeValue().toUInt();

            //parse programs
            /*
                <gear> <category> Hacking Programs </category> </gear>
                <gear> <category> Common Programs </category> </gear>
            */
        }
    gear = gear.nextSibling().toElement();
    }
}

