set(APPLICATION "app_cpp")
set(APP_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB SOURCES ${APP_SRC_DIR}/*.c*)

add_executable(${APPLICATION} ${SOURCES})
target_link_libraries(${APPLICATION} MathAPI)
target_include_directories(${APPLICATION} PUBLIC ${API_INC_DIR})