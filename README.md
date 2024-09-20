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
1、首先我们先找到我们想要的0-10张图片，图片要求背景白色或者无色，并且大小为150✖️150。  
2、我们需要将图片转换为十六进制形式的数组，每16位为一个单位也就是0X0000的RGB565的十六进制形式，此次我们提供给大家两种取模方式，第一种是基于Windows系统，采用Lcdimg2进行取模。首先我们先下载好Lcdimg2（网络上有许多教程），设置分辨率为48*48（测试得出可以获得）4608的0X00单位的十六进制数，然后我们自己编写了一个小的程序，将该4608个单位转换成2304个0X0000的十六进制形式，来达到我们所需要的RGB565的十六进制的格式。  
3、第二种方式则是使用ChatGPT，给其图片先将图片切割为150✖️150的大小，再让他输出RGB565格式的0X0000的十六进制点C文件。  
4、通过其中任意一种方式获得.C文件后，我们会获得如图所示的十六进制进制数据，我们将数据复制下来。  

![QQ_1726811953404](https://github.com/user-attachments/assets/8b591bc5-a7a5-416c-938f-9da808154194)  

5、我们在image文件夹中新建一个.h文件，命名为图片的名字例如：Ghostface.h，在文件中写入如下代码，并且保存  
```
#include <Arduino.h>//引入Arduino文件库
const uint16_t PROGMEM Ghostface[] = {//数组名字需要和文件名称一致
  //将我们刚才复制的所有十六进制复制进来
}
```
![QQ_1726812224766](https://github.com/user-attachments/assets/a6a0305a-0f8a-4271-a708-937936538f91)  

6、然后打开我们的slot_symbols.h文件,输入如下代码  

```
#include "Ghostface.h"//引入我们刚才所写的文件、
#define SYM

#define SYM_WIDTH 48    //图标宽度
#define SYM_HEIGHT 48   //图标高度
#define SYM_COUNT 1     //图标数量  //添加图标后  数字需要增加  有几个图标数字就是多少

const uint16_t *slot_symbols[] = {//此数组中的名字来源于，我们编写的十六进制数据的.h文件中
	Ghostface//我们刚才命名的数组名称，将十六进制数据放入slot_symbols指针数组中
};
```

7、然后打开我们的M5StickCPlus2_slot.ino项目文件，在第一部分中已经介绍过，此处能够更改我们的图片，其中的数字代表*slot_symbols指针数组中的十六进制数据所代表的图片，例如我们在例子中写了Ghostface，我们放在了第一位，那么在下图symbolIndices数组中就写入数字0，为什么是数字0呢，因为数字的起始坐标为0，所以如果我们放入了两张图片那么我们写入的就是0以及1，如果三张那么就是0，1，2。不建议相同数字靠在一起。并且在symbolIndices数组中数字只能在合理范围

![QQ_1726813215593](https://github.com/user-attachments/assets/41581cf8-2213-48c1-bd82-9850d648586d)  

8、如果需要添加多张图片同样是使用前面几个步骤的方法，依次放入即可，最多支持10张图片。  

### compile and run
1、After completing the installation of the dependencies, open the good downloaded zip archive

![QQ_1726107516108](https://github.com/user-attachments/assets/cb2362f7-1871-418e-94dd-92ddfe7284b7)  

2、Connect the Plus2 to your computer using USB-C, select Tools->Port to choose your own port

![QQ_1726107673971](https://github.com/user-attachments/assets/17f0392a-b753-4aba-946c-ede75ba9092f)  

3、Click on compile and then click on upload when the compilation is complete

![QQ_1726107957719](https://github.com/user-attachments/assets/c1f953ad-5355-44e8-af0c-ac5da7542aa6)  

## Instructions for use
- ### Order and number of pictures
The slot machine has five columns, each of which can hold up to 10 icons, and you can adjust their order at will!💡At the moment, we have prepared six 48x48 pixel material icons, their RGB565 hexadecimal data is already in the code, corresponding to elements 0 to 5 in the slot_symbols array. If you want to change the order and number of icons in each column, you can easily change the number in the symbolIndices array to change the display of the icons in each column!🔧🎨  

![QQ_1726108827608](https://github.com/user-attachments/assets/45b5878d-3624-47b5-a671-fc40937d1898)

- ### Column-to-column and figure-to-figure spacing
By changing PAD_X and PAD_Y, you can change the spacing between columns and graphs, usually the default is 2 and 0. 

![QQ_1726109192019](https://github.com/user-attachments/assets/3e14c412-8342-486d-ba00-b6a0f4d357ac)

- ### Turntable rotation speed, stop reduction speed
```
#define Speed_MAX 800           //Maximum speed of slot machine rotation
#define Speed_MIN 50            //Slot machine rotation minimum speed
#define Acceleration_MAX 12     //Acceleration when the slot machine is accelerating
#define Acceleration_MIN -20    //The acceleration when the slot machine is slowing down.
```
  ![QQ_1726109492610](https://github.com/user-attachments/assets/aaa6b4a0-79b1-491a-8dbd-ca76cc8c1eee)

## Next Issue Preview
In the next issue, we will explain in detail how to change the picture of the slot machine, we will get the hexadecimal parameters of the picture by taking the model of the picture and adjusting it to the format we want, and then present the picture we want on the slot machine __Stay tuned!!!__

![QQ_1726122393803](https://github.com/user-attachments/assets/71507de5-dad0-4688-84bf-56cc25878e35)

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

