#include "AppenderConsole.h"
#include <cstdio>
#include "LogLevelType.h"

using std::string;

AppenderConsole::AppenderConsole(LogLevelType logLevel) : Appender(logLevel){}

void AppenderConsole::Write(const string& message, LogLevelType logLevel){
	printf(message.c_str());
}

AppenderConsole::~AppenderConsole(){

}
