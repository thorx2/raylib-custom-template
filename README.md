## How to use this template
### Windows
* Download Visual studio Tools from [here](https://visualstudio.microsoft.com/downloads/)
* Install **Desktop development with C++**
    * If Cmake tools for windows was not installed along with previous do the same from the **Individual Components** tab in from the installer
* Install VSCode from [here](https://code.visualstudio.com/)
* Install the CMake tools for VSCode from [here](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)
* Checkout this template (assuming you already have Git/Github installed)
* Download the Raylib Framework from [here](https://github.com/raysan5/raylib/releases) assuming you are building on the windows platform choose either **win32_msvc16.zip** or **win64_msvc16.zip** based of your target architecture preferences.
* Unzip the zip file and search for the **raylib.lib** file and place the same inside the **deps** folder of the checkout repo.
* Open with VSCode here on the folder which contains the CMakeLists.txt (Tools should auto detect an guide you through the rest of the process)
* Profit