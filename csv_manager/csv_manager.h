#ifndef CSV_MANAGER_H
#define CSV_MANAGER_H


#include <iostream>
#include "CSVWriter/include/CSVWriter.h"

class CsvManager{
    public:
        CsvManager();
        CsvManager(std::string name);

        void newFile();
        std::string fileRoot = "/home/taisuke/catkin_ws/cam_bag";
        std::string filePath = "/naname_up/csv-file/powerpo5/rate2";
        std::string fileName = "/adjust_gain.csv";
        void lastFile();
        void write(bool b =true);
        CSVWriter csv;
    private:
        bool exitFile(std::string name);
};
#endif //CSV_MANAGER_H
