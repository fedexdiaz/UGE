#ifndef APPENDERCONSOLE_H_INCLUDED
#define APPENDERCONSOLE_H_INCLUDED
#include "Appender.h"
#include <string>
#include "LogLevelType.h"

using std::string;

class AppenderConsole : Appender{
	public:
		AppenderConsole(LogLevelType logLevel);
		void Write(const string& message, LogLevelType logLevel);
		~AppenderConsole();
};

#endif
