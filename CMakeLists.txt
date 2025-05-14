cmake_minimum_required(VERSION 3.10)
project(NavalCmdControlSim)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ejecutable
add_executable(naval_cmd_control_sim
    src/main.cpp
    src/RadarSensor.cpp
    src/SituationAwareness.cpp
    src/CommandInterface.cpp
)

# Incluye encabezados si los tienes en un directorio separado
target_include_directories(naval_cmd_control_sim PRIVATE ${CMAKE_SOURCE_DIR}/headers)
