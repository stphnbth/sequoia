cmake_minimum_required(VERSION 3.0.0)
project(sequoia VERSION 0.1.0)

include(CTest)
enable_testing()

set(BASEDIR base)
set(INCLDIR include)

set(SOURCES ${BASEDIR}/main.c ${BASEDIR}/linked.c ${BASEDIR}/${INCLDIR}/linked.h ${BASEDIR}/${INCLDIR}/memory.h)

add_executable(sequoia ${SOURCES})
target_include_directories(sequoia PRIVATE ${BASEDIR}/${INCLDIR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
