#define _DEFAULT_SOURCE  /* needed for usleep() */
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/

#include <io.h>
#include <stdlib.h>
#include <process.h>

#include "lvgl/lvgl.h"
#include "lv_ex_conf.h"
#include "SDL2/include/SDL.h"
#include "lv_drivers/display/monitor.h"
#include "lv_drivers/indev/mouse.h"
#include "lv_drivers/indev/keyboard.h"
#include "lv_drivers/indev/mousewheel.h"

#include "ui/ui.h"
#include "ui/ui_helpers.h"

static void hal_init(void);
static int tick_thread(void *data);

lv_disp_draw_buf_t disp_buf1;
lv_color_t buf1_1[LV_HOR_RES_MAX * 120];
lv_disp_drv_t disp_drv;
lv_indev_drv_t mouse_drv;
lv_indev_drv_t keyb_drv;
lv_indev_drv_t enc_drv;

int main(int argc, char **argv)
{
  lv_init();
  hal_init();

  ui_init(); // 导入SquareLine Studio绘制的界面

  while (1)
  {
    lv_task_handler();
    usleep(5 * 1000);
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
      mouse_handler(&event);
      keyboard_handler(&event);
      mousewheel_handler(&event);
    }
  }
  return 0;
}

static void hal_init(void)
{
  monitor_init();
  lv_disp_draw_buf_init(&disp_buf1, buf1_1, NULL, LV_HOR_RES_MAX * 120);
  lv_disp_drv_init(&disp_drv);
  disp_drv.draw_buf = &disp_buf1;
  disp_drv.flush_cb = monitor_flush;
  lv_disp_drv_register(&disp_drv);

  mouse_init();
  lv_indev_drv_init(&mouse_drv);
  mouse_drv.type = LV_INDEV_TYPE_POINTER;
  mouse_drv.read_cb = mouse_read;
  lv_indev_t *mouse_indev = lv_indev_drv_register(&mouse_drv);

  keyboard_init();
  lv_indev_drv_init(&keyb_drv);
  keyb_drv.type = LV_INDEV_TYPE_KEYPAD;
  keyb_drv.read_cb = keyboard_read;
  lv_indev_drv_register(&keyb_drv);

  mousewheel_init();
  lv_indev_drv_init(&enc_drv);
  enc_drv.type = LV_INDEV_TYPE_ENCODER;
  enc_drv.read_cb = mousewheel_read;
  lv_indev_drv_register(&enc_drv);

  SDL_CreateThread(tick_thread, "tick", NULL);
}

static int tick_thread(void *data)
{
  while (1)
  {
    SDL_Delay(5);   /*Sleep for 5 millisecond*/
    lv_tick_inc(5); /*Tell LittelvGL that 5 milliseconds were elapsed*/
  }
  return 0;
}
