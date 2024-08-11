cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDARD 11)

# ------------------------------------------------
# Create a library
# ------------------------------------------------
set(TARGET_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(API_SRC_DIR ${TARGET_DIR}/src)
set(API_INC_DIR ${TARGET_DIR}/interface)
set(TARGET_NAME MathAPI)

file(GLOB SOURCES ${API_SRC_DIR}/*.c*)

add_library(${TARGET_NAME} SHARED ${SOURCES})
target_include_directories(${TARGET_NAME} PUBLIC ${API_INC_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
# set_property(TARGET ${TARGET_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)
set_target_properties(${TARGET_NAME} PROPERTIES 
                        OUTPUT_NAME "MathApi"
                        PUBLIC_HEADER "${API_INC_DIR}/api.h"
                        )


# ------------------------------------------------
# Add an application for c++
# ------------------------------------------------
add_subdirectory(application_for_cpp)

# ------------------------------------------------
# Add an application for c
# ------------------------------------------------
# add_subdirectory(application_for_c)