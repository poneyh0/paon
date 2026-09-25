add_library(paon_core src/version.cpp)
add_library(paon::core ALIAS paon_core)

target_include_directories(paon_core PUBLIC include)
