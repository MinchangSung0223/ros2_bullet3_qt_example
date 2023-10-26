cmake_minimum_required(VERSION 3.8)
project(Publisher LANGUAGES CXX)

set(CMAKE_DEBUG_POSTFIX "d")
file(GLOB SOURCE_FILES "*.cpp" "*.c" "*.h")

add_library(${PROJECT_NAME} SHARED STATIC
            ${SOURCE_FILES}
            )

add_library(sub::Publisher ALIAS ${PROJECT_NAME}
)


find_package(Eigen3 3.0 REQUIRED NO_MODULE)
find_package(Threads REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(ros2_bullet3_qt_example REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen   Threads::Threads)
ament_target_dependencies(${PROJECT_NAME}  rclcpp std_msgs)
target_include_directories( ${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR})

