#include "AppenderFile.h"
#include <cstdio>
#include "LogLevelType.h"

using std::string;

AppenderFile::AppenderFile(string pathFile, LogLevelType logLevel) : Appender(logLevel){
    this->file = fopen(pathFile.c_str(), "a+");
};

void AppenderFile::Write(const string& message, LogLevelType logLevel){
	fprintf(this->file, message.c_str());
};

AppenderFile::~AppenderFile(){
	fclose(this->file);
}
