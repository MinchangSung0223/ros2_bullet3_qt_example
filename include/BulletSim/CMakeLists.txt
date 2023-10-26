cmake_minimum_required(VERSION 3.8)
project(BulletSim LANGUAGES CXX)

set(BULLET_ROOT "/opt/bullet3") 
set(CMAKE_DEBUG_POSTFIX "d")
file(GLOB SOURCE_FILES "*.cpp" "*.c" "*.h")

add_library(${PROJECT_NAME} SHARED STATIC
            ${SOURCE_FILES}
            )

add_library(sub::BulletSim ALIAS ${PROJECT_NAME}
)


find_package(Eigen3 3.0 REQUIRED NO_MODULE)
find_package(Bullet REQUIRED)
find_package(Threads REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen    ${BULLET_LIBRARIES} Threads::Threads)
target_include_directories( ${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR})

target_include_directories(${PROJECT_NAME} PUBLIC
    ${BULLET_INCLUDE_DIR}
    ${BULLET_ROOT}/src
    ${BULLET_ROOT}/examples
    ${BULLET_ROOT}/examples/SharedMemory
)
