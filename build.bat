:: This file needs cmake in the PATH variable and it has to be executed with VS 2013 command line tools for msbuild
:: CMAKE_PREFIX_PATH needs to be adapted to your needs

set CMAKE_PREFIX_PATH=C:\Programme\Qt\5.5\msvc2013\lib\cmake
mkdir build
cd build
cmake .. -G "Visual Studio 12 2013"
msbuild ALL_BUILD.vcxproj