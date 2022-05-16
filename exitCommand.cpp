#include "exitCommand.hpp"
#include "StandartIO.hpp"
#include <string.h>
#include "utils/knnGenerate.hpp"
#include "utils/CSVHandler.hpp"
#include "utils/dataHandler.hpp"
#include "utils/findFlowerType.hpp"
#include "ServerDataManagement.hpp"
#include <sstream>
#include <vector>
using namespace std;

ExitCommand::ExitCommand(DefaultIO* dio,ServerDataManagement& manager):Command(dio,manager){
    description="exit";
}

void ExitCommand::execute(){
    dio->closeConnection();
}