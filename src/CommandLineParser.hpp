#include <iostream>

class CommandLineParser
{
private:
    int argc; 
    char** argv;
public:
    CommandLineParser(int argcParm, char** argvParm);
    void printArguments();
    ~CommandLineParser();
};

CommandLineParser::CommandLineParser(int argcParm, char **argvParm) : argc(argcParm), argv(argvParm) { };

void CommandLineParser::printArguments()
{
    std::cout << "You have entered " << argc 
         << " arguments:" << std::endl; 
  
    for (int i = 0; i < argc; ++i) 
        std::cout << argv[i] << std::endl;
}

CommandLineParser::~CommandLineParser()
{
}
