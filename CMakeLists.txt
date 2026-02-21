cmake_minimum_required(VERSION 3.16)

project(my_app VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt components
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Enable automatic processing of Qt resource files, MOC, and UI
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Define the source files
qt_add_executable(my_app
    main.cpp
    resources.qrc
)

target_link_libraries(my_app PRIVATE Qt6::Quick)

# Important for deployment: define install rules
install(TARGETS my_app
    BUNDLE DESTINATION .
    RUNTIME DESTINATION bin
)