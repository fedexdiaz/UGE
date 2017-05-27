#include "Logger.h"
#include "Appender.h"

void Logger::Logger::AddAppender(Appender* appender){
	this->appenders.push_back(appender);
}

void Logger::Logger::RemoveAppender(Appender* appender){
	this->appenders.remove(appender);
}

void Logger::Logger::LogFatalMessage(const string& message){
	LogMessage(message, LogLevelType::Fatal);
}

void Logger::Logger::LogErrorMessage(const string& message){
	LogMessage(message, LogLevelType::Error);
}

void Logger::Logger::LogInfoMessage(const string& message){
	LogMessage(message, LogLevelType::Info);
}

void Logger::Logger::LogDebugMessage(const string& message){
	LogMessage(message, LogLevelType::Debug);
}

void Logger::LogMessage(const string& message, LogLevelType logLevelType){
	AppendersIterator iterator;
	for(iterator = this->appenders.begin();
		iterator != this->appenders.end();
		iterator++){
		(*iterator)->Write(message, logLevelType);
	}
}

Logger::~Logger(){
	AppendersIterator iterator;
	for(iterator = this->appenders.begin();
		iterator != this->appenders.end();
		iterator++){
		delete (*iterator);
	}
}
