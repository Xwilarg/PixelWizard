New-Item -ItemType Directory -Force -Path build                  
Set-Location build
conan remote add SFML https://api.bintray.com/conan/bincrafters/public-conan
$ErrorActionPreference = "Stop"
conan install .. --build=missing
cmake ..
cmake --build . --config RELEASE
Copy-Item bin/PixelWizard.exe ..
Set-Location ..