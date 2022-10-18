# GD-Mod-Setup
Template so I can create projects faster.<br>
For absolute maximum efficiency use this .bat file

```bat
@echo off

set MOD_NAME=%1

git clone https://github.com/Ikszyon/GD-Mod-Setup --recurse "%MOD_NAME%"
cd "%MOD_NAME%"
explorer .
echo|set /p="%MOD_NAME:"=%">env\MOD_NAME
rmdir /S /Q ".git"
del /F /Q "README.md"
start code .

@echo on
```
