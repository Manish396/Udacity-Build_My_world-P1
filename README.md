# overview
In this project you'll create your simulation world in Gazebo for all your upcoming projects in the Udacity [Robotics Software Engineer Nanodegree Program](https://classroom.udacity.com/nanodegrees/nd209/dashboard/overview).

1. Build a single floor wall structure using the **Building Editor** tool in Gazebo. Apply at least one feature, one color, and optionally one texture to your structure. Make sure there's enough space between the walls for a robot to navigate.
2. Model any object of your choice using the **Model Editor** tool in Gazebo. Your model links should be connected with joints.
3. Import your structure and two instances of your model inside an empty **Gazebo World**.
4. Import at least one model from the Gazebo online library and implement it in your existing Gazebo world.
5. Write a **C++ World Plugin** to interact with your world. Your code should display “Welcome to ’s World!” message as soon as you launch the Gazebo world file.

## Prerequisite/Dependencies

* Gazebo => 11.0.0
* ROS Kinetic
* make => 4.1(mac, linux), 3.81(Windows) or latest

      * Linux: make is installed by default on most Linux distros.
      * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/).
      * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm).
      
* gcc/g++ >= 5.4

      Linux: gcc / g++ is installed by default on most Linux distros
      Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
      Windows: recommend using MinGW
## Setup Instructions (abbreviated)

1. Meet the Prerequisites/Dependencies
2. Open Ubuntu Bash and clone the project repository
3. On the command line execute

       > sudo apt-get update && sudo apt-get upgrade -y
4. Build and run your code.
## Project Description
Directory Structure

      .Build-My-World                    # Build My World Project 
       ├── model                          # Model files 
       │   ├── gokart
       │   │   ├── model.config
       │   │   ├── model.sdf
       │   ├── myfloorplan
       │   │   ├── model.config
       │   │   ├── model.sdf
       │   ├── robot
       │   │   ├── model.config
       │   │   ├── model.sdf
       ├── script                         # Gazebo World plugin C++ script      
       │   ├── welcome.cpp
       ├── world                          # Gazebo main World containing models 
       │   ├── myoffice.world
       ├── CMakeLists.txt                 # Link libraries 
       └──   
* myoffice.world: Gazebo world file that includes the models.
* myfloorplan: A single floor structure designed in the Building Editor tool of Gazebo.
* gokart: A go kart designed in the Model Editor tool of Gazebo.
* robot: A robot designed in the Model Editor tool of Gazebo.
* welcome.cpp: Gazebo world plugin C++ script.
* Overview.png: A screenshot of the final result.
* CMakeLists.txt: File to link the C++ code to libraries.
## Run the Project
* Clone this repository
* At the top level of the project repository, create a build directory:

         mkdir build && cd build
* In /build directory, compile your code with

      cmake .. && make
* Export your plugin folder in the terminal so your world file can find it:

      export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/Udacity-Build-My-World/build
* Launch the world file in Gazebo to load both the world and plugin

      cd /home/workspace/github/Udacity-Build-My-World/world/
      gazebo ManixWorld
* The world should open in Gazebo, and the terminal should display the message:

      Welcome to ManixWorld
