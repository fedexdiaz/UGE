#ifndef APPENDERFILE_H_INCLUDED
#define APPENDERFILE_H_INCLUDED
#include "Appender.h"
#include "LogLevelType.h"

class AppenderFile : Appender
{
	public:
		AppenderFile(string filePath, LogLevelType logLevel);
		void Write(const string& message, LogLevelType logLevel);
		~AppenderFile();

	private:
		FILE* file;
};

#endif
