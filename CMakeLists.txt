cmake_minimum_required(VERSION 3.0)

find_package(SCOREC REQUIRED PATHS ${SCOREC_PREFIX} NO_DEFAULT_PATH)
find_package(MPI_REQUIRED)
add_executable(errorAndAdapt errorAndAdapt.cpp)
target_link_libraries(errorAndAdapt SCOREC::core)
