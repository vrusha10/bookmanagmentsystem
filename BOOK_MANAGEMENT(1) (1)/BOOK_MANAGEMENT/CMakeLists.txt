cmake_minimum_required(VERSION 3.5)

project(BOOK_MANAGEMENT VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_subdirectory(database/)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui

        addbook.cpp
        addbook.h
        addbook.ui

        adduser.cpp
        adduser.h
        adduser.ui

        viewbook.cpp
        viewbook.h
        viewbook.ui

        viewuser.cpp
        viewuser.h
        viewuser.ui

        issuebook.cpp
        issuebook.h
        issuebook.ui

        returnbook.cpp
        returnbook.h
        returnbook.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BOOK_MANAGEMENT
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET BOOK_MANAGEMENT APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(BOOK_MANAGEMENT SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(BOOK_MANAGEMENT
            ${PROJECT_SOURCES}
        )
    endif()
endif()


find_package(Qt5 REQUIRED COMPONENTS Sql)
target_link_libraries(BOOK_MANAGEMENT PRIVATE Qt5::Sql)
target_link_directories(BOOK_MANAGEMENT PUBLIC database/)
target_link_libraries(BOOK_MANAGEMENT PUBLIC database)

target_link_libraries(BOOK_MANAGEMENT PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(BOOK_MANAGEMENT PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BOOK_MANAGEMENT)
endif()
