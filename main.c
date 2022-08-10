
/**
 * @file main
 *
 */

#define _DEFAULT_SOURCE /* needed for usleep() */
#include <unistd.h>
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "lvgl/lvgl.h"
#include "lv_drivers/sdl/sdl.h"
#include "ui/ui.h"

static void hal_init(void);

int main(int argc, char **argv)
{
  lv_init();

  hal_init();

  ui_init();

  while (1)
  {
    lv_timer_handler();
    usleep(5 * 1000);
  }

  return 0;
}

static void hal_init(void)
{
  sdl_init();

  static lv_color_t buf[SDL_HOR_RES * SDL_VER_RES];
  static lv_disp_draw_buf_t disp_draw_buf;
  lv_disp_draw_buf_init(&disp_draw_buf, buf, NULL, SDL_HOR_RES * SDL_VER_RES);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv); /*Basic initialization*/
  disp_drv.draw_buf = &disp_draw_buf;
  disp_drv.flush_cb = sdl_display_flush;
  disp_drv.hor_res = SDL_HOR_RES;
  disp_drv.ver_res = SDL_VER_RES;
  lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv); /*Basic initialization*/
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = sdl_mouse_read;
  lv_indev_drv_register(&indev_drv);
}
