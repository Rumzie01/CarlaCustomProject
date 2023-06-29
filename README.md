Pre Setup:
- Currently Carla is using a custom engine fork for 5.2 during the transition phase. Until it can merge with offical epic UE repo you will need to download and build the engine from source (Infrequently). See other repo to install engine.


- Python dependencies
- Python 3.7.2 installed and the default version (very import as carla requires exactly 3.7.2 ....)
<<<<<<< Updated upstream
-users have the option to install the CARLA Python API using pip3. Version 20.3 or higher is required. To check if you have a suitable version, run the following command:
pip3 -V
If you need to upgrade:

pip3 install --upgrade pip
You must install the following Python dependencies:

pip3 install --user setuptools
pip3 install --user wheel
- VS 2019 (if you have 2022 installed make sure to uninstall .net 6.0 framework as UE needs to be build with .NET4.0 for carla)
=======
- VS 2019 (if you have 2022 installed it may or may not work depending on which SDK's you have installed)
>>>>>>> Stashed changes


First Time Setup:
- Add a windows environment variable called CARLA_UNREAL_ENGINE_ROOT to be the path to your custom engine versions root folder on your machine (this is the same as repository root if you are getting it from github.) (If you have visual studio open when you add this variable you will need to restart it)

- Run Update.bat (this will download all of the carla assets from 4.26  version into the unreal project in this repo. Also takes a long time)
  **WE WILL BE MOVING THIS STEP TO ALREADY CONVERTER GIT LFS ASSETS FOR 5.2**

- Switch Project Engine Version in Unreal/CarlaUnreal to path to our custom engine version of carla (right click swithc engine version)

- Generate the project files for the project in Unreal/CarlaUnreal (Right click on uproject)

- Open the solution, do not build yet!

- Go to View->Terminal

- Enter 'cd ..' 2 times to get to the carla root directory.

- type command 'make rebuild' - This build the carla libraries and python API's

- type command 'make launch' - This builds the carla libraries and python API's and also builds the unreal project (This step is to really just make sure you unreal project compiles, after this step you should be able to open the project with the .uproject file from now on unless there are changes to carla or carla's plugin, then you will 'make launch' again to rebuild unreal project and carla libs.)

- Right click on uproject file and "gernerate project files" so that at least your visual studio instance will get the correct symbols so you dont have a bunch of nonsense intellisense errors.
*NOTE* Normally you could just build with visual studio, however Carla has a very aggressive build system that uses make, and so to build source we must use their build system.



