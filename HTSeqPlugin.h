#ifndef HTSEQPLUGIN_H
#define HTSEQPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class HTSeqPlugin : public Plugin
{
public: 
 std::string toString() {return "HTSeq";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
