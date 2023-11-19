@echo off

:: Create build directory
mkdir build

:: Navigate to the build directory
cd build

:: Run CMake to configure the project
cmake ..

:: Build the project
cmake --build . --config Release

:: Optionally, you can run the executable
:: .\release\MyExecutable

:: Return to the project's root directory
cd ..
