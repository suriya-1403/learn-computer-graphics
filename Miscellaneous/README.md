# learn-computer-graphics
> Wrote the Code in C with the help of graphics.h headerfile

## Explanation of structure of the code:
First and formost step is to include `graphics.h` header file which provide us access to call predefined functions like: `line`, `rectangle`, `arc`, `ellipse`, `polygon`, `circle`, etc., <br /> <br />
Second step to initialize the graphics drivers in our computer using `initgraph` function from the `graphics.h` header file. <br />
```CPP
void initgraph(int *graphicsDriver, int *graphicsMode, char *driverDirectoryPath);
```
If your using Turbocpp means:
```CPP
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
```
It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode. It also resets or initializes all graphics settings like color, palette, current position etc, to their default values. Below is the description of input parameters of initgraph function.

<dl>
  <dt>graphicsDriver: </dt>
  <dd>It is a pointer to an integer specifying the graphics driver to be used. It tells the compiler that what graphics driver to use or to automatically detect the drive. In all our programs we will use "DETECT" macro of "graphics.h" library that instruct compiler for auto detection of graphics driver.</dd>

  <dt>graphicsMode: </dt>
  <dd>It is a pointer to an integer that specifies the graphics mode to be used. If "*gd" is set to "DETECT", then initgraph sets "*gm" to the highest resolution available for the detected driver.</dd>
  
  <dt>driverDirectoryPath: </dt>
  <dd>It specifies the directory path where graphics driver files (BGI files) are located. If directory path is not provided, then it will search for driver files in current working directory directory.</dd>
</dl>
After these two steps we are free to use any predefined function from `graphics.h` to create a amazing graphics.

## Predefined Function
### *A Stright Line*
If we want to draw a straight line we need to call `line()` function.
#### Syntax:
```CPP
line(x1,y1 ,x2,y2);
```
Here Elements in the parament are the x and y coordinates of the first point and second point. This `line()` function will draw a line joining these two points. 

