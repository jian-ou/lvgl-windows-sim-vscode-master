/**
 * @file lv_conf.h
 * Configuration file for v7.5.0-dev
 */

/*
 * COPY THIS FILE AS `lv_conf.h` NEXT TO the `lvgl` FOLDER
 */

#if 1 /*Set it to "1" to enable content*/

#ifndef LV_CONF_H
#define LV_CONF_H
/* clang-format off */

#include <stdint.h>

/*====================
   Graphical settings
 *====================*/

/* Maximal horizontal and vertical resolution to support by the library.*/
#define LV_HOR_RES_MAX          (320)
#define LV_VER_RES_MAX          (240)

/* Color depth:
 * - 1:  1 byte per pixel
 * - 8:  RGB332
 * - 16: RGB565
 * - 32: ARGB8888
 */
#define LV_COLOR_DEPTH     16

/* Swap the 2 bytes of RGB565 color.
 * Useful if the display has a 8 bit interface (e.g. SPI)*/
#define LV_COLOR_16_SWAP   0

/* 1: Enable screen transparency.
 * Useful for OSD or other overlapping GUIs.
 * Requires `LV_COLOR_DEPTH = 32` colors and the screen's style should be modified: `style.body.opa = ...`*/
#define LV_COLOR_SCREEN_TRANSP    0

/*Images pixels with this color will not be drawn (with chroma keying)*/
#define LV_COLOR_TRANSP    LV_COLOR_LIME         /*LV_COLOR_LIME: pure green*/

/* Enable anti-aliasing (lines, and radiuses will be smoothed) */
#define LV_ANTIALIAS        1

/* Default display refresh period.
 * Can be changed in the display driver (`lv_disp_drv_t`).*/
#define LV_DISP_DEF_REFR_PERIOD      30      /*[ms]*/

/* Dot Per Inch: used to initialize default sizes.
 * E.g. a button with width = LV_DPI / 2 -> half inch wide
 * (Not so important, you can adjust it to modify default sizes and spaces)*/
#define LV_DPI              130     /*[px]*/

/* The the real width of the display changes some default values:
 * default object sizes, layout of examples, etc.
 * According to the width of the display (hor. res. / dpi)
 * the displays fall in 4 categories.
 * The 4th is extra large which has no upper limit so not listed here
 * The upper limit of the categories are set below in 0.1 inch unit.
 */
#define LV_DISP_SMALL_LIMIT  30
#define LV_DISP_MEDIUM_LIMIT 50
#define LV_DISP_LARGE_LIMIT  70

/* Type of coordinates. Should be `int16_t` (or `int32_t` for extreme cases) */
typedef int16_t lv_coord_t;

/*=========================
   Memory manager settings
 *=========================*/

/* LittelvGL's internal memory manager's settings.
 * The graphical objects and other related data are stored here. */

/* 1: use custom malloc/free, 0: use the built-in `lv_mem_alloc` and `lv_mem_free` */
#define LV_MEM_CUSTOM      0
#if LV_MEM_CUSTOM == 0
/* Size of the memory used by `lv_mem_alloc` in bytes (>= 2kB)*/
#  define LV_MEM_SIZE    (300U * 1024U)

/* Complier prefix for a big array declaration */
#  define LV_MEM_ATTR

/* Set an address for the memory pool instead of allocating it as an array.
 * Can be in external SRAM too. */
#  define LV_MEM_ADR          0

/* Automatically defrag. on free. Defrag. means joining the adjacent free cells. */
#  define LV_MEM_AUTO_DEFRAG  1
#else       /*LV_MEM_CUSTOM*/
#  define LV_MEM_CUSTOM_INCLUDE <stdlib.h>   /*Header for the dynamic memory function*/
#  define LV_MEM_CUSTOM_ALLOC   malloc       /*Wrapper to malloc*/
#  define LV_MEM_CUSTOM_FREE    free         /*Wrapper to free*/
#endif     /*LV_MEM_CUSTOM*/

/* Use the standard memcpy and memset instead of LVGL's own functions.
 * The standard functions might or might not be faster depending on their implementation. */
#define LV_MEMCPY_MEMSET_STD    0

/* Garbage Collector settings
 * Used if lvgl is binded to higher level language and the memory is managed by that language */
#define LV_ENABLE_GC 0
#if LV_ENABLE_GC != 0
#  define LV_GC_INCLUDE "gc.h"                           /*Include Garbage Collector related things*/
#  define LV_MEM_CUSTOM_REALLOC   your_realloc           /*Wrapper to realloc*/
#  define LV_MEM_CUSTOM_GET_SIZE  your_mem_get_size      /*Wrapper to lv_mem_get_size*/
#endif /* LV_ENABLE_GC */

/*=======================
   Input device settings
 *=======================*/

/* Input device default settings.
 * Can be changed in the Input device driver (`lv_indev_drv_t`)*/

/* Input device read period in milliseconds */
#define LV_INDEV_DEF_READ_PERIOD          30

/* Drag threshold in pixels */
#define LV_INDEV_DEF_DRAG_LIMIT           10

/* Drag throw slow-down in [%]. Greater value -> faster slow-down */
#define LV_INDEV_DEF_DRAG_THROW           10

/* Long press time in milliseconds.
 * Time to send `LV_EVENT_LONG_PRESSSED`) */
#define LV_INDEV_DEF_LONG_PRESS_TIME      400

/* Repeated trigger period in long press [ms]
 * Time between `LV_EVENT_LONG_PRESSED_REPEAT */
#define LV_INDEV_DEF_LONG_PRESS_REP_TIME  100


/* Gesture threshold in pixels */
#define LV_INDEV_DEF_GESTURE_LIMIT        50

/* Gesture min velocity at release before swipe (pixels)*/
#define LV_INDEV_DEF_GESTURE_MIN_VELOCITY 3

/*==================
 * Feature usage
 *==================*/

/*1: Enable the Animations */
#define LV_USE_ANIMATION        1
#if LV_USE_ANIMATION

/*Declare the type of the user data of animations (can be e.g. `void *`, `int`, `struct`)*/
typedef void * lv_anim_user_data_t;

#endif

/* 1: Enable shadow drawing on rectangles*/
#define LV_USE_SHADOW           1
#if LV_USE_SHADOW
/* Allow buffering some shadow calculation
 * LV_SHADOW_CACHE_SIZE is the max. shadow size to buffer,
 * where shadow size is `shadow_width + radius`
 * Caching has LV_SHADOW_CACHE_SIZE^2 RAM cost*/
#define LV_SHADOW_CACHE_SIZE    0
#endif

/*1: enable outline drawing on rectangles*/
#define LV_USE_OUTLINE  1

/*1: enable pattern drawing on rectangles*/
#define LV_USE_PATTERN  1

/*1: enable value string drawing on rectangles*/
#define LV_USE_VALUE_STR    1

/* 1: Use other blend modes than normal (`LV_BLEND_MODE_...`)*/
#define LV_USE_BLEND_MODES      1

/* 1: Use the `opa_scale` style property to set the opacity of an object and its children at once*/
#define LV_USE_OPA_SCALE        1

/* 1: Use image zoom and rotation*/
#define LV_USE_IMG_TRANSFORM    1

/* 1: Enable object groups (for keyboard/encoder navigation) */
#define LV_USE_GROUP            1
#if LV_USE_GROUP
typedef void * lv_group_user_data_t;
#endif  /*LV_USE_GROUP*/

/* 1: Enable GPU interface*/
#define LV_USE_GPU              0   /*Only enables `gpu_fill_cb` and `gpu_blend_cb` in the disp. drv- */
#define LV_USE_GPU_STM32_DMA2D  0
/*If enabling LV_USE_GPU_STM32_DMA2D, LV_GPU_DMA2D_CMSIS_INCLUDE must be defined to include path of CMSIS header of target processor
e.g. "stm32f769xx.h" or "stm32f429xx.h" */
#define LV_GPU_DMA2D_CMSIS_INCLUDE

/* 1: Enable file system (might be required for images */
#define LV_USE_FILESYSTEM       0
#if LV_USE_FILESYSTEM
/*Declare the type of the user data of file system drivers (can be e.g. `void *`, `int`, `struct`)*/
typedef void * lv_fs_drv_user_data_t;
#endif

/*1: Add a `user_data` to drivers and objects*/
#define LV_USE_USER_DATA        1

/*1: Show CPU usage and FPS count in the right bottom corner*/
#define LV_USE_PERF_MONITOR     0

/*1: Use the functions and types from the older API if possible */
#define LV_USE_API_EXTENSION_V6  1
#define LV_USE_API_EXTENSION_V7  1

/*========================
 * Image decoder and cache
 *========================*/

/* 1: Enable indexed (palette) images */
#define LV_IMG_CF_INDEXED       1

/* 1: Enable alpha indexed images */
#define LV_IMG_CF_ALPHA         1

/* Default image cache size. Image caching keeps the images opened.
 * If only the built-in image formats are used there is no real advantage of caching.
 * (I.e. no new image decoder is added)
 * With complex image decoders (e.g. PNG or JPG) caching can save the continuous open/decode of images.
 * However the opened images might consume additional RAM.
 * LV_IMG_CACHE_DEF_SIZE must be >= 1 */
#define LV_IMG_CACHE_DEF_SIZE       1

/*Declare the type of the user data of image decoder (can be e.g. `void *`, `int`, `struct`)*/
typedef void * lv_img_decoder_user_data_t;

/*=====================
 *  Compiler settings
 *====================*/

/* For big endian systems set to 1 */
#define LV_BIG_ENDIAN_SYSTEM    0

/* Define a custom attribute to `lv_tick_inc` function */
#define LV_ATTRIBUTE_TICK_INC

/* Define a custom attribute to `lv_task_handler` function */
#define LV_ATTRIBUTE_TASK_HANDLER

/* Define a custom attribute to `lv_disp_flush_ready` function */
#define LV_ATTRIBUTE_FLUSH_READY

/* With size optimization (-Os) the compiler might not align data to
 * 4 or 8 byte boundary. This alignment will be explicitly applied where needed.
 * E.g. __attribute__((aligned(4))) */
#define LV_ATTRIBUTE_MEM_ALIGN

/* Attribute to mark large constant arrays for example
 * font's bitmaps */
#define LV_ATTRIBUTE_LARGE_CONST

/* Prefix performance critical functions to place them into a faster memory (e.g RAM)
 * Uses 15-20 kB extra memory */
#define LV_ATTRIBUTE_FAST_MEM

/* Export integer constant to binding.
 * This macro is used with constants in the form of LV_<CONST> that
 * should also appear on lvgl binding API such as Micropython
 *
 * The default value just prevents a GCC warning.
 */
#define LV_EXPORT_CONST_INT(int_value) struct _silence_gcc_warning

/* Prefix variables that are used in GPU accelerated operations, often these need to be
 * placed in RAM sections that are DMA accessible */
#define LV_ATTRIBUTE_DMA

/*===================
 *  HAL settings
 *==================*/

/* 1: use a custom tick source.
 * It removes the need to manually update the tick with `lv_tick_inc`) */
#define LV_TICK_CUSTOM     0
#if LV_TICK_CUSTOM == 1
#define LV_TICK_CUSTOM_INCLUDE  "Arduino.h"         /*Header for the system time function*/
#define LV_TICK_CUSTOM_SYS_TIME_EXPR (millis())     /*Expression evaluating to current system time in ms*/
#endif   /*LV_TICK_CUSTOM*/

typedef void * lv_disp_drv_user_data_t;             /*Type of user data in the display driver*/
typedef void * lv_indev_drv_user_data_t;            /*Type of user data in the input device driver*/

/*================
 * Log settings
 *===============*/

/*1: Enable the log module*/
#define LV_USE_LOG      0
#if LV_USE_LOG
/* How important log should be added:
 * LV_LOG_LEVEL_TRACE       A lot of logs to give detailed information
 * LV_LOG_LEVEL_INFO        Log important events
 * LV_LOG_LEVEL_WARN        Log if something unwanted happened but didn't cause a problem
 * LV_LOG_LEVEL_ERROR       Only critical issue, when the system may fail
 * LV_LOG_LEVEL_NONE        Do not log anything
 */
#  define LV_LOG_LEVEL    LV_LOG_LEVEL_WARN

/* 1: Print the log with 'printf';
 * 0: user need to register a callback with `lv_log_register_print_cb`*/
#  define LV_LOG_PRINTF   0
#endif  /*LV_USE_LOG*/

/*=================
 * Debug settings
 *================*/

/* If Debug is enabled LittelvGL validates the parameters of the functions.
 * If an invalid parameter is found an error log message is printed and
 * the MCU halts at the error. (`LV_USE_LOG` should be enabled)
 * If you are debugging the MCU you can pause
 * the debugger to see exactly where  the issue is.
 *
 * The behavior of asserts can be overwritten by redefining them here.
 * E.g. #define LV_ASSERT_MEM(p)  <my_assert_code>
 */
#define LV_USE_DEBUG        1
#if LV_USE_DEBUG

/*Check if the parameter is NULL. (Quite fast) */
#define LV_USE_ASSERT_NULL      1

/*Checks is the memory is successfully allocated or no. (Quite fast)*/
#define LV_USE_ASSERT_MEM       1

/*Check the integrity of `lv_mem` after critical operations. (Slow)*/
#define LV_USE_ASSERT_MEM_INTEGRITY       0

/* Check the strings.
 * Search for NULL, very long strings, invalid characters, and unnatural repetitions. (Slow)
 * If disabled `LV_USE_ASSERT_NULL` will be performed instead (if it's enabled) */
#define LV_USE_ASSERT_STR       0

/* Check NULL, the object's type and existence (e.g. not deleted). (Quite slow)
 * If disabled `LV_USE_ASSERT_NULL` will be performed instead (if it's enabled) */
#define LV_USE_ASSERT_OBJ       0

/*Check if the styles are properly initialized. (Fast)*/
#define LV_USE_ASSERT_STYLE     0

#endif /*LV_USE_DEBUG*/
/*==================
 *   FONT USAGE
 *===================*/

/*Montserrat fonts with ASCII range and some symbols using bpp = 4
 *https://fonts.google.com/specimen/Montserrat*/
#define LV_FONT_MONTSERRAT_8  1
#define LV_FONT_MONTSERRAT_10 1
#define LV_FONT_MONTSERRAT_12 1
#define LV_FONT_MONTSERRAT_14 1
#define LV_FONT_MONTSERRAT_16 1
#define LV_FONT_MONTSERRAT_18 1
#define LV_FONT_MONTSERRAT_20 1
#define LV_FONT_MONTSERRAT_22 1
#define LV_FONT_MONTSERRAT_24 1
#define LV_FONT_MONTSERRAT_26 1
#define LV_FONT_MONTSERRAT_28 1
#define LV_FONT_MONTSERRAT_30 1
#define LV_FONT_MONTSERRAT_32 1
#define LV_FONT_MONTSERRAT_34 1
#define LV_FONT_MONTSERRAT_36 1
#define LV_FONT_MONTSERRAT_38 1
#define LV_FONT_MONTSERRAT_40 1
#define LV_FONT_MONTSERRAT_42 1
#define LV_FONT_MONTSERRAT_44 1
#define LV_FONT_MONTSERRAT_46 1
#define LV_FONT_MONTSERRAT_48 1

/*Demonstrate special features*/
#define LV_FONT_MONTSERRAT_12_SUBPX      0
#define LV_FONT_MONTSERRAT_28_COMPRESSED 0  /*bpp = 3*/
#define LV_FONT_DEJAVU_16_PERSIAN_HEBREW 0  /*Hebrew, Arabic, Persian letters and all their forms*/
#define LV_FONT_SIMSUN_16_CJK            0  /*1000 most common CJK radicals*/

/*Pixel perfect monospace fonts*/
#define LV_FONT_UNSCII_8  0
#define LV_FONT_UNSCII_16 0

/*Optionally declare custom fonts here.
 *You can use these fonts as default font too and they will be available globally.
 *E.g. #define LV_FONT_CUSTOM_DECLARE   LV_FONT_DECLARE(my_font_1) LV_FONT_DECLARE(my_font_2)*/
#define LV_FONT_CUSTOM_DECLARE

/*Always set a default font*/
#define LV_FONT_DEFAULT &lv_font_montserrat_14

/*Enable handling large font and/or fonts with a lot of characters.
 *The limit depends on the font size, font face and bpp.
 *Compiler error will be triggered if a font needs it.*/
#define LV_FONT_FMT_TXT_LARGE 0

/*Enables/disables support for compressed fonts.*/
#define LV_USE_FONT_COMPRESSED 0

/*Enable subpixel rendering*/
#define LV_USE_FONT_SUBPX 0
#if LV_USE_FONT_SUBPX
    /*Set the pixel order of the display. Physical order of RGB channels. Doesn't matter with "normal" fonts.*/
    #define LV_FONT_SUBPX_BGR 0  /*0: RGB; 1:BGR order*/
#endif

/*=================
 *  TEXT SETTINGS
 *=================*/

/**
 * Select a character encoding for strings.
 * Your IDE or editor should have the same character encoding
 * - LV_TXT_ENC_UTF8
 * - LV_TXT_ENC_ASCII
 */
#define LV_TXT_ENC LV_TXT_ENC_UTF8

/*Can break (wrap) texts on these chars*/
#define LV_TXT_BREAK_CHARS " ,.;:-_"

/*If a word is at least this long, will break wherever "prettiest"
 *To disable, set to a value <= 0*/
#define LV_TXT_LINE_BREAK_LONG_LEN 0

/*Minimum number of characters in a long word to put on a line before a break.
 *Depends on LV_TXT_LINE_BREAK_LONG_LEN.*/
#define LV_TXT_LINE_BREAK_LONG_PRE_MIN_LEN 3

/*Minimum number of characters in a long word to put on a line after a break.
 *Depends on LV_TXT_LINE_BREAK_LONG_LEN.*/
#define LV_TXT_LINE_BREAK_LONG_POST_MIN_LEN 3

/*The control character to use for signalling text recoloring.*/
#define LV_TXT_COLOR_CMD "#"

/*Support bidirectional texts. Allows mixing Left-to-Right and Right-to-Left texts.
 *The direction will be processed according to the Unicode Bidirectional Algorithm:
 *https://www.w3.org/International/articles/inline-bidi-markup/uba-basics*/
#define LV_USE_BIDI 	1
#if LV_USE_BIDI
    /*Set the default direction. Supported values:
    *`LV_BASE_DIR_LTR` Left-to-Right
    *`LV_BASE_DIR_RTL` Right-to-Left
    *`LV_BASE_DIR_AUTO` detect texts base direction*/
    #define LV_BIDI_BASE_DIR_DEF LV_BASE_DIR_AUTO
#endif

/*Enable Arabic/Persian processing
 *In these languages characters should be replaced with an other form based on their position in the text*/
#define LV_USE_ARABIC_PERSIAN_CHARS 1

/*==================
 *  WIDGET USAGE
 *================*/

/*Documentation of the widgets: https://docs.lvgl.io/latest/en/html/widgets/index.html*/

#define LV_USE_ARC        1

#define LV_USE_ANIMIMG    1

#define LV_USE_BAR        1

#define LV_USE_BTN        1

#define LV_USE_BTNMATRIX  1

#define LV_USE_CANVAS     1

#define LV_USE_CHECKBOX   1

#define LV_USE_DROPDOWN   1   /*Requires: lv_label*/

#define LV_USE_IMG        1   /*Requires: lv_label*/

#define LV_USE_LABEL      1
#if LV_USE_LABEL
    #define LV_LABEL_TEXT_SELECTION 1 /*Enable selecting text of the label*/
    #define LV_LABEL_LONG_TXT_HINT 1  /*Store some extra info in labels to speed up drawing of very long texts*/
#endif

#define LV_USE_LINE       1

#define LV_USE_ROLLER     1   /*Requires: lv_label*/
#if LV_USE_ROLLER
    #define LV_ROLLER_INF_PAGES 7 /*Number of extra "pages" when the roller is infinite*/
#endif

#define LV_USE_SLIDER     1   /*Requires: lv_bar*/

#define LV_USE_SWITCH     1

#define LV_USE_TEXTAREA   1   /*Requires: lv_label*/
#if LV_USE_TEXTAREA != 0
    #define LV_TEXTAREA_DEF_PWD_SHOW_TIME 1500    /*ms*/
#endif

#define LV_USE_TABLE      1

/*==================
 * EXTRA COMPONENTS
 *==================*/

/*-----------
 * Widgets
 *----------*/
#define LV_USE_CALENDAR   1
#if LV_USE_CALENDAR
    #define LV_CALENDAR_WEEK_STARTS_MONDAY 0
    #if LV_CALENDAR_WEEK_STARTS_MONDAY
        #define LV_CALENDAR_DEFAULT_DAY_NAMES {"Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"}
    #else
        #define LV_CALENDAR_DEFAULT_DAY_NAMES {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"}
    #endif

    #define LV_CALENDAR_DEFAULT_MONTH_NAMES {"January", "February", "March",  "April", "May",  "June", "July", "August", "September", "October", "November", "December"}
    #define LV_USE_CALENDAR_HEADER_ARROW 1
    #define LV_USE_CALENDAR_HEADER_DROPDOWN 1
#endif  /*LV_USE_CALENDAR*/

#define LV_USE_CHART      1

#define LV_USE_COLORWHEEL 1

#define LV_USE_IMGBTN     1

#define LV_USE_KEYBOARD   1

#define LV_USE_LED        1

#define LV_USE_LIST       1

#define LV_USE_MENU       1

#define LV_USE_METER      1

#define LV_USE_MSGBOX     1

#define LV_USE_SPINBOX    1

#define LV_USE_SPINNER    1

#define LV_USE_TABVIEW    1

#define LV_USE_TILEVIEW   1

#define LV_USE_WIN        1

#define LV_USE_SPAN       1
#if LV_USE_SPAN
    /*A line text can contain maximum num of span descriptor */
    #define LV_SPAN_SNIPPET_STACK_SIZE 64
#endif

/*-----------
 * Themes
 *----------*/

/*A simple, impressive and very complete theme*/
#define LV_USE_THEME_DEFAULT 1
#if LV_USE_THEME_DEFAULT

    /*0: Light mode; 1: Dark mode*/
    #define LV_THEME_DEFAULT_DARK 0

    /*1: Enable grow on press*/
    #define LV_THEME_DEFAULT_GROW 1

    /*Default transition time in [ms]*/
    #define LV_THEME_DEFAULT_TRANSITION_TIME 80
#endif /*LV_USE_THEME_DEFAULT*/

/*A very simple theme that is a good starting point for a custom theme*/
#define LV_USE_THEME_BASIC 1

/*A theme designed for monochrome displays*/
#define LV_USE_THEME_MONO 1

/*-----------
 * Layouts
 *----------*/

/*A layout similar to Flexbox in CSS.*/
#define LV_USE_FLEX 1

/*A layout similar to Grid in CSS.*/
#define LV_USE_GRID 1

/*---------------------
 * 3rd party libraries
 *--------------------*/

/*File system interfaces for common APIs */

/*API for fopen, fread, etc*/
#define LV_USE_FS_STDIO 0
#if LV_USE_FS_STDIO
    #define LV_FS_STDIO_LETTER 'A'     /*Set an upper cased letter on which the drive will accessible (e.g. 'A')*/
    #define LV_FS_STDIO_PATH ""         /*Set the working directory. File/directory paths ill be appended to it.*/
    #define LV_FS_STDIO_CACHE_SIZE  0   /*>0 to cache this number of bytes in lv_fs_read()*/
#endif

/*API for open, read, etc*/
#define LV_USE_FS_POSIX 0
#if LV_USE_FS_POSIX
    #define LV_FS_POSIX_LETTER '\0'     /*Set an upper cased letter on which the drive will accessible (e.g. 'A')*/
    #define LV_FS_POSIX_PATH ""         /*Set the working directory. File/directory paths ill be appended to it.*/
    #define LV_FS_POSIX_CACHE_SIZE  0   /*>0 to cache this number of bytes in lv_fs_read()*/
#endif

/*API for CreateFile, ReadFile, etc*/
#define LV_USE_FS_WIN32 1
#if LV_USE_FS_WIN32
    #define LV_FS_WIN32_LETTER  '\0'    /*Set an upper cased letter on which the drive will accessible (e.g. 'A')*/
    #define LV_FS_WIN32_PATH ""         /*Set the working directory. File/directory path ill be appended to it.*/
    #define LV_FS_WIN32_CACHE_SIZE 0    /*>0 to cache this number of bytes in lv_fs_read()*/
#endif

/*API for FATFS (needs to be added separately). Uses f_open, f_read, etc*/
#define LV_USE_FS_FATFS  0
#if LV_USE_FS_FATFS
    #define LV_FS_FATFS_LETTER '\0'     /*Set an upper cased letter on which the drive will accessible (e.g. 'A')*/
    #define LV_FS_FATSF_CACHE_SIZE 0    /*>0 to cache this number of bytes in lv_fs_read()*/
#endif

/*PNG decoder library*/
#define LV_USE_PNG 0

/*BMP decoder library*/
#define LV_USE_BMP 1

/* JPG + split JPG decoder library.
 * Split JPG is a custom format optimized for embedded systems. */
#define LV_USE_SJPG 0

/*GIF decoder library*/
#define LV_USE_GIF 1

/*QR code library*/
#define LV_USE_QRCODE 0

/*FreeType library*/
#define LV_USE_FREETYPE 0
#if LV_USE_FREETYPE
    /*Memory used by FreeType to cache characters [bytes] (-1: no caching)*/
    #define LV_FREETYPE_CACHE_SIZE (16 * 1024)
    #if LV_FREETYPE_CACHE_SIZE >= 0
        /* 1: bitmap cache use the sbit cache, 0:bitmap cache use the image cache. */
        /* sbit cache:it is much more memory efficient for small bitmaps(font size < 256) */
        /* if font size >= 256, must be configured as image cache */
        #define LV_FREETYPE_SBIT_CACHE 0
        /* Maximum number of opened FT_Face/FT_Size objects managed by this cache instance. */
        /* (0:use system defaults) */
        #define LV_FREETYPE_CACHE_FT_FACES 0
        #define LV_FREETYPE_CACHE_FT_SIZES 0
    #endif
#endif

/*Rlottie library*/
#define LV_USE_RLOTTIE 0

/*FFmpeg library for image decoding and playing videos
 *Supports all major image formats so do not enable other image decoder with it*/
#define LV_USE_FFMPEG  0
#if LV_USE_FFMPEG
    /*Dump input information to stderr*/
    #define LV_FFMPEG_AV_DUMP_FORMAT 0
#endif

/*-----------
 * Others
 *----------*/

/*1: Enable API to take snapshot for object*/
#define LV_USE_SNAPSHOT 1

/*1: Enable Monkey test*/
#define LV_USE_MONKEY   1

/*1: Enable grid navigation*/
#define LV_USE_GRIDNAV  1

/*==================
* EXAMPLES
*==================*/

/*Enable the examples to be built with the library*/
#define LV_BUILD_EXAMPLES 0

/*===================
 * DEMO USAGE
 ====================*/

/*Show some widget. It might be required to increase `LV_MEM_SIZE` */
#define LV_USE_DEMO_WIDGETS        0
#if LV_USE_DEMO_WIDGETS
#define LV_DEMO_WIDGETS_SLIDESHOW  0
#endif

/*Demonstrate the usage of encoder and keyboard*/
#define LV_USE_DEMO_KEYPAD_AND_ENCODER     0

/*Benchmark your system*/
#define LV_USE_DEMO_BENCHMARK   0

/*Stress test for LVGL*/
#define LV_USE_DEMO_STRESS      0

/*Music player demo*/
#define LV_USE_DEMO_MUSIC       0
#if LV_USE_DEMO_MUSIC
# define LV_DEMO_MUSIC_SQUARE       0
# define LV_DEMO_MUSIC_LANDSCAPE    0
# define LV_DEMO_MUSIC_ROUND        0
# define LV_DEMO_MUSIC_LARGE        0
# define LV_DEMO_MUSIC_AUTO_PLAY    0
#endif

/*--END OF LV_CONF_H--*/

#endif /*LV_CONF_H*/

#endif /*End of "Content enable"*/
