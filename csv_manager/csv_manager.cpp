#include "csv_manager.h"
CsvManager::CsvManager(){
    fileName = fileRoot + filePath + fileName;

}
CsvManager::CsvManager(std::string name){
    fileName = fileRoot + filePath + name;
}

void CsvManager::newFile(){
    int num = 1;
    std::string filenum = "." + std::to_string(num);
    if(exitFile(fileName)){
        while(1){
            if(!exitFile(fileName + filenum)){ break;}
            num++;
            filenum = "." + std::to_string(num);
        }
        fileName += filenum;
    }
    std::ofstream newf;
    newf.open(fileName,ios::app);
    newf.close();
    std::cout << "File created:" << std::endl;
    std::cout << fileName << std::endl;
}
void CsvManager::lastFile(){
    int num = 1;
    std::string filenum = "." + std::to_string(num);
    if(exitFile(fileName)){
        while(1){
            if(!exitFile(fileName + filenum)){ break;}
            num++;
            filenum = "." + std::to_string(num);
        }
        num--;
        filenum = "." + std::to_string(num);
        fileName += filenum;
    }

}
bool CsvManager::exitFile(std::string name){
    if (std::ifstream(name))
    {
        //std::cout << "File already exists" << std::endl;
        return true;
    }
    else{
        return false;
    }
}

void CsvManager::write(bool b){
    std::cout <<"*** writing now to "<< fileName << "***" << std::endl;
    csv.writeToFile(fileName,b);
    std::cout <<"***Done writed now ***"<< std::endl;
}
