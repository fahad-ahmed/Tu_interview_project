#pragma once
#include <iostream>

enum Mode
{
	sync,
	async

};


class InterfaceUART
{
	public:
		//configuration related
		virtual void setMode(Mode mode) = 0;
		virtual void setPort(int port) = 0;
		virtual void setBandWith(int port) = 0;

		//Read Write related
		virtual std::string read() = 0;
		virtual void write(std::string s) = 0;

		//Connection Related Api
		virtual void Open() = 0;
		virtual void Close() = 0;


};

