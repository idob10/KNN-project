#pragma once
#include "Command.hpp"
#include "utils/knnGenerate.hpp"
#include <vector>
#include <string.h>
using namespace std;

class DownloadResCommand : public Command {
    public:
        DownloadResCommand(DefaultIO* dio,ServerDataManagement& manager);
        virtual void execute();
};