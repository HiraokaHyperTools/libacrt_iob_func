project(acrt_iob_func)

cmake_minimum_required(VERSION 3.11)

if(STATIC)
    add_library(acrt_iob_func STATIC acrt_iob_func.c)
else()
    add_library(acrt_iob_func SHARED acrt_iob_func.c)
endif()

include(GNUInstallDirs)

install(
    TARGETS acrt_iob_func
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
