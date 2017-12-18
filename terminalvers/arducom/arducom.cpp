// arducom.cpp: главный файл проекта.

#include "stdafx.h"

using namespace System;
using namespace System::IO::Ports;
int main(array<System::String ^> ^args)
{
	SerialPort port("COM4", 9600);
	port.Open();
	while (true){
		int input = Convert::ToInt32(Console::ReadLine());
		if (input == 1)
		{
			port.Write("1");
		}
		else 
			port.Write("2");
	}
    return 0;
}
