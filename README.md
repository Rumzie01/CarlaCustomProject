Pre Setup:
- Currently Carla is using a custom engine fork for 5.2 during the transition phase. Until it can merge with offical epic UE repo you will need to download and build the engine from source (Infrequently). See other repo to install engine.

- Python 3.7.2 installed and the default version (very import as carla requires exactly 3.7.2 ....)
- VS 2019 (if you have 2022 installed make sure to uninstall .net 6.0 framework as UE needs to be build with .NET4.0 for carla)


First Time Setup:
- Set a windows environment variable called UE4_ROOT to be the path to your custom engine versions root folder (this is the same as repository root if you are getting it from github.)

- Run Update.bat (this will download all of the carla assets from 4.26  version into the unreal project in this repo. Also takes a long time)

- Switch Project Engine Version in Unreal/CarlaUnreal to path to our custom engine version of carla (right click swithc engine version)

- Generate the project files for the project in Unreal/CarlaUnreal (Right click on uproject)

- Open the solution, do not build yet!

- Go to View->Terminal

- Enter cd ..

- type command 'make rebuild' - This build the carla libraries and python API's

- type command 'make launch' - This is mainly to test that your project builds correctly. Once this launches you can launch from the editor like normal anytime after. 



