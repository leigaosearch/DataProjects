
#include "IRSystem.h""

std::vector <std::string> IRSystem::GetUniqWords() {
    std::vector <std::string>  a;
    return a;
}
void IRSystem::ReadStemmedData(std::string dir) {
    fs::path f(dir);
    if (fs::is_directory(f)) {
        for (fs::recursive_directory_iterator it(f), eit; it != eit; ++it) {
            if (!fs::is_directory(it->path())) {
                std::string tmp = it->path().string();
                if (tmp.rfind("txt")) {
                    titles.push_back(tmp);
                }
            }
        }
    }

    for (auto title:titles) {
        
        std::fopen()
    }
}
void IRSystem::ReadRawData() {

}
void IRSystem::ComputeTFIDF() {

}
double IRSystem::GetTFIDF(std::string word, std::string document) {
    return 0;
}
void IRSystem::Index() {

}
void IRSystem::ReadData(std::string dirname) {

}

int main() {

    IRSystem s;
    std::string datapath = "C:\\source\\DataProjects\\CMP462 HW08 Data\\data";
    s.ReadStemmedData(datapath);
    return 0;
}
