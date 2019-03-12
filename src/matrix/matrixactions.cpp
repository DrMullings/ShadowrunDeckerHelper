#include "../headers/matrixactions.h"

Matrixactions::Matrixactions(Character *chr)
{
    character = chr;
}

//
// free actions
//

// load a program onto your cyberdeck/kommlink
void Matrixactions::loadProgram()
{

}

// reconfigure cyberdeck
void Matrixactions::switchTwoMatrixAttributes()
{

}

// switch one loaded program for another
void Matrixactions::swapTwoPrograms()
{

}

// turn off a running program
void Matrixactions::unloadProgram()
{

}

//
// simple actions
//

// change target icon or self
void Matrixactions::changeIcon()
{
    //Marks: owner
    //Test: none
    //Limit: DTP
}

// get overwatch score from gm
void Matrixactions::checkOverwatchScore()
{
    //Marks: none
    //Electronic Warfare + LOG[SLZ] vs 6D6
    //Limit: SLZ
}

// choose number of marks and duration
void Matrixactions::inviteMark()
{
    //Marks: owner
    //Test: none
    //Limit: DTP
}

//Reboot and dumpshock, roll only if linklocked
void Matrixactions::jackOut()
{
    //Marks: owner
    //Test: Hardware + WIL[FWL] vs LOG + ATK
    //Limit: FWL
}

//send short sentence, image or file to user
void Matrixactions::sendMessage()
{
    //Marks: none
    //Test: none
    //Limit: DTP
}

//AR to VR and vice versa, blocked if linklocked
void Matrixactions::switchInterfaceMode()
{
    //Marks: owner
    //Test: none
    //Limit: DTP
}

//
// complex actions
//

//device is formatted on next boot
void Matrixactions::formatDevice()
{
    //Marks: 3
    //Test: Computer + LOG[SLZ] vs WIL + FWL
    //Limit: SLZ
}

//Dumpshock, can't reboot if linklocked
void Matrixactions::rebootDevice()
{
    //Marks: 3
    //Test: Computer + LOG[DTP] vs WIL + FWL
    //Limit: DTP
}

//send command as though owner
void Matrixactions::spoofCommand()
{
    //Marks: 1
    //Test: Hacking + INT[SLZ] vs LOG + FWL
    //Limit: SLZ
}

//remove file protection
void Matrixactions::crackFile()
{
    //Marks: 1
    //Test: Hacking + LOG[ATK] vs 2 * protection rating
    //Limit: ATK
}

//triggers data bomb on failure
void Matrixactions::disarmDataBomb()
{
    //Marks: none
    //Test: Software + INT[FWL] vs 2 * data bomb rating
    //Limit: FWL
}

//create, change, copy delete or protect any file
void Matrixactions::editFile()
{
    //Marks: 1
    //Test: Computer + LOG[DTP] vs INT + FWL
    //Limit: DTP
}

//choose rating, does (rating)D6 matrix damage
void Matrixactions::setDataBomb()
{
    //Marks: 1
    //Test: Software + LOG[SLZ] vs 2 * data bomb rating
    //Limit: SLZ
}

//opposed if target is running silent
void Matrixactions::matrixPerception()
{
    //Marks: none
    //Test: Computer + INT[SLZ] (vs LOG + SLZ)
    //Limit: DTP
}

//view/record traffic from/to markes device
void Matrixactions::snoop()
{
    //Marks: 1
    //Test: Electronic warfare + INT[SLZ] vs LOG + FWL
    //Limit: SLZ
}

//locate physical location of device/persona
void Matrixactions::traceIcon()
{
    //Marks: 2
    //Test: compuer + INT[DTP] vs WIL+ SLZ
    //Limit: DTP
}

//+1 Mark, optional +1 matrix damage per 2 net hits
void Matrixactions::bruteForceAttack()
{
    //Marks: none
    //Test: Cybercombat + LOG[ATK] vs WIL + FWL
    //Limit: ATK
}

//hop to grid, you don't have access to
void Matrixactions::bruteForceGridHop()
{
    //Marks: none
    //Test: Cybercombat + LOG[ATK] vs 4(local) or 6(global)
    //Limit: ATK
}

//remove marks on single icons from single icon
void Matrixactions::eraseMark()
{
    //Marks: 3 / owner
    //Test: Computer + LOG[ATK] vs WIL + FWL (-4 for 2 marks, -10 for 3 marks)
    //Limit: ATK
}

//+1 mark, +1 matrix perception hit per 2 net hits
void Matrixactions::hackOnTheFly()
{
    //Marks: none
    //Test: Hacking + LOG[SLZ] vs INT + FWL
    //Limit: SLZ
}

//hop to grid, you don't have access to
void Matrixactions::hackOnTheFlyGridHop()
{
    //Marks: none
    //Test: Hacking + LOG[SLZ] vs 4(local) or 6(global)
    //Limit: SLZ
}

//crash a specific program until reboot
void Matrixactions::crashProgram()
{
    //Marks: 1
    //Test: Cybercombat + LOG[ATK] vs INT + FWL
    //Limit: ATK
}

//dmg = ATK + net hits + 2*marks
void Matrixactions::dataSpike()
{
    //Marks: none
    //Test: Cybercombat + LOG[ATK] vs INT + FWL
    //Limit: ATK
}

// enter host on which you have a mark
void Matrixactions::enterHost()
{
    //Marks: 1
    //Test: none
    //Limit: DTP
}

//exit host in which you are
void Matrixactions::exitHost()
{
    //Marks: 1
    //Test: none
    //Limit: DTP
}

//must have permission, must leave host first
void Matrixactions::gridHop()
{
    //Marks: none
    //Test: none
    //Limit: DTP
}

//disappear from target that hasn't marked you
void Matrixactions::hide()
{
    //Marks: 0
    //Test: Electronic Warfare + INT[SLZ] vs INT + DTP
    //Limit: SLZ
}

//add hits to noise rating for 100m
void Matrixactions::jamSignals()
{
    //Marks: owner
    //Test: Electronic Warfare + LOG[ATK]
    //Limit: ATK
}

//no test if owner or has permissions
void Matrixactions::jumpIntoRiggedDevice()
{
    //Marks: 3
    //Test: Electronic Warfare + LOG[DTP] vs WIL + FWL
    //Limit: DTP
}

//costs 10 initiative, adds WIL to defense
void Matrixactions::fullMatrixDefense()
{

}
