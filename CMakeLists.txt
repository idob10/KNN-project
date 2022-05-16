cmake_minimum_required(VERSION 3.0.0)
project(run VERSION 0.1.0)

include(CTest)
enable_testing()

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

file(GLOB utils_SRC utils/*.cpp)
add_executable(runClient src/client.cpp ${utils_SRC})
            
add_executable(runServer src/tcpServer.cpp src/Command.cpp src/ClassifyCommand.cpp src/StandartIO.cpp src/UploadCommand.cpp src/confusionMatrixCommand.cpp
src/AlgorithmSettingsCommand.cpp src/displayResCommand.cpp src/downloadResCommand.cpp src/exitCommand.cpp src/CLI.cpp
src/SocketIO.cpp src/ServerDataManagement.cpp ${utils_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
