cmake_minimum_required(VERSION 3.5)
project(ros2_bullet3_qt_example)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
include(FindPkgConfig)
include(modules/CMakeFunctions.cmake)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
set(PROJ_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/bin/inc)
set(PROJ_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(PROJ_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_DEBUG_POSTFIX "d")
set(CMAKE_MODULE_PATH  ${CMAKE_CURRENT_SOURCE_DIR}/modules)
set(BUILD_SHARED_LIBS TRUE)

set(BULLET_ROOT "/opt/bullet3") 

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/modules")

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(Bullet REQUIRED)
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
find_package(Threads REQUIRED)

set(ament_target_dependencies_list 
    "robot_state_publisher"
    "sensor_msgs"
    "std_msgs"
    "geometry_msgs"
    "nav_msgs"
    "jsoncpp"
    "rmw_fastrtps_cpp"
    "hyu_robot_states"
)

find_package(jsoncpp REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rmw_fastrtps_cpp REQUIRED)
find_package(hyu_robot_states REQUIRED)

add_subdirectory(include/BulletSim)
set(BULLETSIM_HEADERS_DIR ${PROJECT_SOURCE_DIR}/include/BulletSim)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
add_executable(${PROJECT_NAME} src/main.cpp src/mainwindow.cpp src/mainwindow.ui src/resources.qrc)
#add_executable(${PROJECT_NAME} src/test.cpp)
target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::Widgets
  Threads::Threads
  ${BULLET_LIBRARIES}
  sub::BulletSim
)
target_include_directories(${PROJECT_NAME} PUBLIC
    ${BULLET_INCLUDE_DIR}
    ${BULLET_ROOT}/src
    ${BULLET_ROOT}/examples
    ${BULLET_ROOT}/examples/SharedMemory
)

target_include_directories(${PROJECT_NAME} PUBLIC
  ${BULLETSIM_HEADERS_DIR}
)

ament_target_dependencies(${PROJECT_NAME} ${ament_target_dependencies_list})
message(${BULLET_ROOT})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
