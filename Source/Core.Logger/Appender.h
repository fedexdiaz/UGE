#ifndef APPENDER_H_INCLUDED
#define APPENDER_H_INCLUDED
#include <string>
#include <cstdio>
#include "LogLevelType.h"

using std::string;

class Appender
{
	public:
		Appender(LogLevelType logLevel);
		virtual void Write(const string& message, LogLevelType logLevel) = 0;
		virtual ~Appender();

	private:
		LogLevelType logLevel;

	protected:
		bool ShouldLog(LogLevelType logLevel);
};

#endif
