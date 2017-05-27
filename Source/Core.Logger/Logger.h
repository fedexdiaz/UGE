#include <string>
#include <list>
#include "Appender.h"
#include <iostream>

using std::list;

class Logger {
	private:
		Logger();
		list<Appender*> appenders;
		typedef list<Appender*>::const_iterator AppendersIterator;
		static Logger* instance;
		void LogMessage(const string& message, LogLevelType logLevelType);

	public:
		static Logger* GetInstance(){
			if(Logger::instance == NULL){
				instance = new Logger();
			}
			return instance;
		};
		void AddAppender(Appender* appender);
		void RemoveAppender(Appender* appender);
		void LogFatalMessage(const string& message);
		void LogErrorMessage(const string& message);
		void LogInfoMessage(const string& message);
		void LogDebugMessage(const string& message);
		~Logger();
};
