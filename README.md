&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__Hi👋__，In this section, we're going to have some fun - change the picture of the slot machine! 💡 Doesn't it feel cool? Don't worry, the whole process is very simple and doesn't require advanced programming knowledge. You can add as many pictures as you like to your slot machine as you like, whether it's the classic fruit icon 🍒🍋, any other pattern you like, or even your own creative design! Just follow the steps and you'll be able to give your slot machine a new look, making it more personalized and fun.
Ready to make your slot machine unique? Do it with me! 👩‍💻🎨
# M5StickCPlus2_Slot Project
## Project structure
``` 
│── README.md             # Project description file
│── M5StickCPlus2_slot    # Source code folder
  │── M5StickCPlus2_slot.ino   # Source Code Files
  │── Slot.cpp                 # Slot Function Implementation File
  │── SLot.h                   # Slot function definition file
  │── image                    # Image folder
    │── Ghostface.h                # Ghostface icons
    │── Happy.h                    # Happy icon
    │── Kiss.h                     # Kiss icon
    │── Spectre.h                  # Spectre logo
    │── Think.h                    # Think icon
    │── Vomit.h                    # Vomit icon
    │── slot_symbols.h             # Icon Data
```
## Installation and operation

### precondition
Software dependency: __Arduino IDE__, __VScode__ or __text__, etc.  
Hardware requirements: __USB-C cable__, __M5StickCPlus2__, etc.  
Dependencies: __M5StickCPlus2 library__, __Arduino library__, etc.  
### Installation of dependencies
1、First, let's pick out 1-10 images with a clean, white or transparent background, all perfectly sized at 150x150 pixels.  
  
2、To convert the image into a hexadecimal array in RGB565 format (where each 16-bit unit is 0X0000), we have two options for you! The first method uses Windows and the handy tool Lcdimg2. Here's the process:  

Start by downloading Lcdimg2 (you can find plenty of tutorials online if needed).Set the image resolution to 48x48 (this gives you 4608 hex units in the 0X00 format).We've written a small program that takes those 4608 units and converts them into 2304 hex units in the 0X0000 format, giving you the RGB565 format we need!
  
3、The second option is even cooler—just use ChatGPT! Here's the plan:  Upload your image, and ChatGPT will resize it to 150x150 pixels for you.Then, it will work its magic and output the image as a .C file in RGB565 format, with each pixel in 0X0000 hexadecimal form.Fast, easy, and you get your image converted into the format you need without lifting a finger!  

4、Once we have the .C file generated using either method, we’ll have a neatly structured hexadecimal binary dataset—just like the example shown. All we need to do is copy down this data, and we’re all set for the next step!

![QQ_1726811953404](https://github.com/user-attachments/assets/8b591bc5-a7a5-416c-938f-9da808154194)  

5、We create a new .h file in the image folder, name it as the name of the image (e.g. Ghostface.h), write the following code in the file, and save it.
```
#include <Arduino.h>//Introducing the Arduino File Library
const uint16_t PROGMEM Ghostface[] = {// The name of the array needs to match the name of the file.
  //Copy in all the hex we just copied.
}
```
![QQ_1726812224766](https://github.com/user-attachments/assets/a6a0305a-0f8a-4271-a708-937936538f91)  

6、Then open our slot_symbols.h file, and enter the following code.

```
#include "Ghostface.h"//Introduce the file we just wrote
#define SYM

#define SYM_WIDTH 48    //Icon width
#define SYM_HEIGHT 48   //Icon height
#define SYM_COUNT 1     //Number of icons After adding icons, the number of icons needs to be increased The number of icons is the number of icons.

const uint16_t *slot_symbols[] = {//The names in this array are derived from, in the .h file we wrote for the hex data
	Ghostface//With the array name we just named, put the hexadecimal data into the slot_symbols pointer array
};
```

7、Next, open our M5StickCPlus2_slot.ino project file. We've already covered the initial setup, and now we’ll move on to changing the picture. The number represents the *slot_symbols pointer array’s hexadecimal data for each image. For example, if we use the Ghostface image and place it in the first position, then in the symbolIndices array, you would write the number 0. Why 0? Because the starting index is 0.
So, if you have two images, you'd write 0 and 1. If three, then 0, 1, 2. Keep in mind, it’s not recommended to place the same numbers next to each other, and the values in the symbolIndices array must stay within a reasonable range.

![QQ_1726813215593](https://github.com/user-attachments/assets/41581cf8-2213-48c1-bd82-9850d648586d)  

8、If you need to add more than one picture, just follow the same steps as before. You can add up to 10 pictures in total.

### compile and run
1、After completing the installation of the dependencies, open the good downloaded zip archive

![QQ_1726107516108](https://github.com/user-attachments/assets/cb2362f7-1871-418e-94dd-92ddfe7284b7)  

2、Connect the Plus2 to your computer using USB-C, select Tools->Port to choose your own port

![QQ_1726107673971](https://github.com/user-attachments/assets/17f0392a-b753-4aba-946c-ede75ba9092f)  

3、Click on compile and then click on upload when the compilation is complete

![QQ_1726107957719](https://github.com/user-attachments/assets/c1f953ad-5355-44e8-af0c-ac5da7542aa6)  

## Next Issue Preview
In the next update, we’ll make the final improvements to the slot machine by switching from manual to automatic stopping. With just one press, the five columns will stop in sequence, randomly, making the project more complete and much closer to the real-life slot machine experience!
## How to contact the maintainer or developer
__OpenELAB:__   
[![OpenELAB](https://private-user-images.githubusercontent.com/180402004/366379735-e03723c2-c213-421f-a517-e482f67f3660.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MjYwNDU2NTIsIm5iZiI6MTcyNjA0NTM1MiwicGF0aCI6Ii8xODA0MDIwMDQvMzY2Mzc5NzM1LWUwMzcyM2MyLWMyMTMtNDIxZi1hNTE3LWU0ODJmNjdmMzY2MC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwOTExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDkxMVQwOTAyMzJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1mOWE1NGE1ZDhhOTNhMjJmNTRmZmMxYTk1YzA3MDNmNTY5MzQ1NGZkNDEzMDk4OTM4MTdjM2I1ZGNmMDYzODY2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.qnnW0ggDBwf9vP7yfAQU-oMGHnGr0-FJKsb38NDInco)](https://openelab.io)  
__YouTube:__  
[![youtube_logo_200x150](https://private-user-images.githubusercontent.com/180402004/366385591-b212d544-4584-49ac-970d-811a87f367bc.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MjYwNDY1MzAsIm5iZiI6MTcyNjA0NjIzMCwicGF0aCI6Ii8xODA0MDIwMDQvMzY2Mzg1NTkxLWIyMTJkNTQ0LTQ1ODQtNDlhYy05NzBkLTgxMWE4N2YzNjdiYy5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwOTExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDkxMVQwOTE3MTBaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0yNDA0OTllOWFiZTk3ZGM4YjUxMGYxOGFkNmViODYxMTk1YWQ1Nzc0MTdlZDRiNWZjZmI0NjU5ZDg1NmIwMzcxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.A9yqUAA24OPl3lSMY1O71Oa8Jn33ICzTJqlOhf4altc)](https://www.youtube.com/@OpenELAB)  
__X :__  
[ ![X_logo_150x150](https://private-user-images.githubusercontent.com/180402004/366386947-f22637e9-361e-4889-99c5-a940dae19ca8.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MjYwNDY3MDcsIm5iZiI6MTcyNjA0NjQwNywicGF0aCI6Ii8xODA0MDIwMDQvMzY2Mzg2OTQ3LWYyMjYzN2U5LTM2MWUtNDg4OS05OWM1LWE5NDBkYWUxOWNhOC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwOTExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDkxMVQwOTIwMDdaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1hNjgzMjVjZmQwOTk2ZTA5ZWJmYmUzOWNjZjQwODUzYmI2YzUzMDk0ZDljMjlmOWE2ZmUyYTczMmM5MWNiMjNlJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.Xl_OOo_alC9lAL1wOYwLariKbjmPQba5MO6agG-ECmQ)
](https://twitter.com/openelabio)  
__FaceBook:__  
[![facebook_logo_cropped_150x150](https://private-user-images.githubusercontent.com/180402004/366389274-b03aa857-c5d9-4bed-b65c-ddbd0e674111.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MjYwNDcwMjgsIm5iZiI6MTcyNjA0NjcyOCwicGF0aCI6Ii8xODA0MDIwMDQvMzY2Mzg5Mjc0LWIwM2FhODU3LWM1ZDktNGJlZC1iNjVjLWRkYmQwZTY3NDExMS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwOTExJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDkxMVQwOTI1MjhaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1lOWUyMDA4ZThlMmU3N2Y5NzE5NDVlOGMwNTRlNTcwODA0NmZjZGU4M2ZhYmNhYWQ0ZTA1NTVkNTE4Yjk0YzQwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.magjk7X-wGsifZ7FlRZfq5J4-EoMdjJZsNK5e0g4CXQ)](https://www.facebook.com/profile.php?id=61559154729457)  
__Discord__  
[ ![resized_image_150x150](https://private-user-images.githubusercontent.com/180402004/367483377-2d6baa26-ae89-46f9-a91d-a59316fbc007.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MjYyODMxOTUsIm5iZiI6MTcyNjI4Mjg5NSwicGF0aCI6Ii8xODA0MDIwMDQvMzY3NDgzMzc3LTJkNmJhYTI2LWFlODktNDZmOS1hOTFkLWE1OTMxNmZiYzAwNy5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwOTE0JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDkxNFQwMzAxMzVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0zYTU2OGM4N2RlNDk0NzRjNzgzMWFhOWViZDllMzcxM2U4NzU2YTliYjRhMDhhYzY5OTJmN2UzZTJhOWM4MTA2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.Lst8WNRwCLuw2jWENd6e4jONWVMDrBicGpBKFo7C3wk)](https://discord.gg/VQspWyck)

__The source code was adapted from__
[M5StickCPlus](https://github.com/Sarah-C/M5StickC_Plus_Slot_Machine)

