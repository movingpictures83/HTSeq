#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "HTSeqPlugin.h"

void HTSeqPlugin::input(std::string file) {
 inputfile = file;
}

void HTSeqPlugin::run() {
   
}

void HTSeqPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   std::string command = "htseq-qa "+inputfile+" -t fastq -o"+file;
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<HTSeqPlugin> HTSeqPluginProxy = PluginProxy<HTSeqPlugin>("HTSeq", PluginManager::getInstance());
