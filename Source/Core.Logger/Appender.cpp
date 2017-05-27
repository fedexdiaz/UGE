#include "Appender.h"
#include "LogLevelType.h"

Appender::Appender(LogLevelType logLevel){
	this->logLevel = logLevel;
}

bool Appender::ShouldLog(LogLevelType logLevel){
	switch(this->logLevel){
		case Info:
			return true;
			break;
		case Debug:
			return logLevel == Debug || logLevel == Error || logLevel == Fatal;
			break;
		case Error:
			return logLevel == Error || logLevel == Fatal;
			break;
		case Fatal:
			return logLevel == Fatal;
			break;
		default:
			//TODO: throw Exception
			return false;
			break;
	}
	return false;
}

Appender::~Appender(){

}
