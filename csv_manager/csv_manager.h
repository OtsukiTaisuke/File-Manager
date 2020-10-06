#ifndef CSV_MANAGER_H
#define CSV_MANAGER_H


#include <iostream>
#include "CSVWriter/include/CSVWriter.h"

class CsvManager{
    public:
        CsvManager(void){};

        void newFile();
         std::string fileName = "/home/taisuke/catkin_ws/cam_bag/naname/csv-file/naname.csv";
         void lastFile();
         void write(bool b =true);
        CSVWriter csv;
    private:
        bool exitFile(std::string name);
};
#endif //CSV_MANAGER_H
