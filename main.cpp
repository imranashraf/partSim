/*
 * Main.cpp
 *
 */

#include "control.h"
#include "channel.h"
#include "exception.h"
#include "q2xmlfile.h"

#include <iostream>

using namespace std;

bool Control::debugging = true;
string Control::QUIPU_HOME = "";
const char *Control::APPNAME = "";

int main(int argc, char *argv[])
{
    try 
    {
        Control control;
        control.start();
    } 
    catch(Exception &e) 
    {
        cout << "Exception occurred at " << e.File() << ":" << e.Line() << endl <<"\twith reason:\"" << e.Reason() << endl;
    }
}
