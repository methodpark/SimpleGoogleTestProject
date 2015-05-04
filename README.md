Simple google test / mock example repository
============================================

This repository contains a simple google test and google mock example solution.
It consits of two projects a static library for the source code and a console application for the google test / mock code.
The following steps show how to setup your environment to build the solution and run the tests.

1. Install [git](https://git-scm.com/)
2. Install Visual Studio 2012 or 2013 (C++)
3. Open Visual Studio and install Extension "GoogleTest Runner" (via TOOLS->Extensions and Updates...)
4. Clone this repository
 * Open Git Bash
 * Choose base directory to clone to
 * Execute "git clone https://github.com/methodpark/SimpleGoogleTestProject.git" 
5. Got to the folder "gmock-1.7.0\msvc\2010" open the solution and build it
6. Open the Cars.sln
7. Build it
8. The tests should be displayed in the Test Explorer and should run "green"