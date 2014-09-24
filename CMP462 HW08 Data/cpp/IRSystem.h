#include <string>
#include <vector>
#include <unordered_set>
#include "boost/filesystem.hpp"   // includes all needed Boost.Filesystem declarations
#include <iostream>               // for std::cout
namespace fs = boost::filesystem;      // for ease of tutorial presentation;

class IRSystem {
private:
    std::vector <std::string> titles;
    //document contents
    std::vector<std::vector <std::string>> docs;
    //unique vocbulary
    std::unordered_set<std::string> vocab;

    
public:
    std::vector <std::string> GetUniqWords();
    void ReadStemmedData();
    void ReadRawData();
    void ComputeTFIDF();
    double GetTFIDF(std::string word, std::string document);
    void Index();
    void ReadData(std::string dirname);
};

