# lvgl-windows-sim-vscode-master

---

* LVGL版本：8.3.4
* CMake版本：3.24.0
* vscode
* minGW
* SDL2 2.26.4
* SquareLine Studio版本：1.2.1

  由于要使用官方的设计工具SquareLine Studio，官方也是生成对应lvgl 8.2版本的文件，尝试过使用把官方的代码用不同版本的LVGL库去跑，应该是有一点小问题，一些函数的名字是对应不上的。

---

* 最近使用Arduino写ESP32系列的单片机，在界面设计方面选择了LVGL，但是遇到了一个问题，算上项目本体和各种各样的库，导致编译速度十分缓慢。
* 故而采用PC模拟器，然后去找资料，发现官方提供的版本采用Makefile编译，不知道是因为什么原因（应该是语法问题），始终提示编译不过。
* 同时在网上找到模拟器都是一些相对较老版本的LVGL，一是用不了官方的UI设计软件，二是Makefile文件中的命令应该是分时段去写的，有些语法应该是无法在Win平台使用。
* 现采用CMake重写了配置文件，可以编译通过。

---

* lv_drivers 文件夹对应 [github](https://github.com/lvgl/lv_drivers)

  * 包含显示驱动，各种外设的驱动
* lvgl 文件夹对应[github](https://github.com/lvgl/lvgl)

  * 核心逻辑代码，各种组件代码
  * 去掉了与核心逻辑关系不大的部分代码和演示用的Demo
* SDL2 文件夹对应[官方网址](https://www.libsdl.org/)

  * 下载自官方的SDL2库文件，都在/SDL2/include下，SDL2运行文件也来自官方网址
* ui 文件夹对应官方UI设计软件SquareLine Studio生成的代码，在主函数调用  **ui_init()** 即可显示界面

  * ![这是图片](/assets/img/2.png "生成代码")
  * 修改生成的ui文件夹中的报错，由于生成的文件应该在根目录下，所以对应的库文件的相对路径包含有点小问题需要把所有的 **#define "lvgl/lvgl.h"  改成 #define "../lvgl/lvgl.h"**
  * 修改lv_conf.h文件的颜色深度需要和生成的代码颜色深度匹配 **#define LV_COLOR_DEPTH  32**
  * 修改lv_drv_conf.h文件的显示大小需要和生成的代码显示大小匹配 **#define SDL_HOR_RE  800** 和 **#define SDL_VER_RES  480**

---

待解决：

* 无

---

编译完成后生成的可执行文件在EXE路径下，同时生成的过程文件也在build路径下。

---

* V1.0.0 SquareLine Studio官方样例无法运行，不过自己生成的几套界面都可以正常使用。
* V1.0.1 修复配置文件和LVGL版本不匹配的问题，可以打开官方样例了。
* V1.0.2 省去安装SDL库,直接可以使用
