// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Label24;
lv_obj_t * ui_SWRRED;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label7;
lv_obj_t * ui_WPOLK;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label16;
lv_obj_t * ui_WGREEN;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label6;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        Key_Menu(e);
    }
}
static void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        Key_Mode(e);
    }
}
static void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        Key_Range(e);
    }
}
static void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        Key_Alarm(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image1

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_943020738);

    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, 0);

    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 5);
    lv_obj_set_y(ui_Label8, 28);

    lv_label_set_text(ui_Label8, "FWD");

    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 5);
    lv_obj_set_y(ui_Label9, 44);

    lv_label_set_text(ui_Label9, "PEP:");

    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, 5);
    lv_obj_set_y(ui_Label10, 60);

    lv_label_set_text(ui_Label10, "AVG:");

    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label20

    ui_Label20 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label20, 5);
    lv_obj_set_y(ui_Label20, 76);

    lv_label_set_text(ui_Label20, "PK:");

    lv_obj_set_style_text_color(ui_Label20, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label21

    ui_Label21 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label21, 286);
    lv_obj_set_y(ui_Label21, 28);

    lv_label_set_text(ui_Label21, "REV");

    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label22

    ui_Label22 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label22, 227);
    lv_obj_set_y(ui_Label22, 44);

    lv_label_set_text(ui_Label22, "PEP:");

    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label23

    ui_Label23 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label23, 227);
    lv_obj_set_y(ui_Label23, 60);

    lv_label_set_text(ui_Label23, "AVG:");

    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label24

    ui_Label24 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label24, 227);
    lv_obj_set_y(ui_Label24, 76);

    lv_label_set_text(ui_Label24, "PK:");

    lv_obj_set_style_text_color(ui_Label24, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SWRRED

    ui_SWRRED = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_SWRRED, 259);
    lv_obj_set_height(ui_SWRRED, 119);

    lv_obj_set_x(ui_SWRRED, 31);
    lv_obj_set_y(ui_SWRRED, 111);

    lv_obj_clear_flag(ui_SWRRED, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_SWRRED, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SWRRED, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SWRRED, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SWRRED, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_SWRRED);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, -115);
    lv_obj_set_y(ui_Label11, 50);

    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label11, "0");

    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_SWRRED);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, -10);

    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label12, "5");

    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_SWRRED);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, 114);
    lv_obj_set_y(ui_Label13, 53);

    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label13, "10");

    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_SWRRED);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 1);
    lv_obj_set_y(ui_Label7, -47);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "SWR");

    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_WPOLK

    ui_WPOLK = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_WPOLK, 320);
    lv_obj_set_height(ui_WPOLK, 240);

    lv_obj_set_x(ui_WPOLK, 0);
    lv_obj_set_y(ui_WPOLK, 0);

    lv_obj_clear_flag(ui_WPOLK, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_WPOLK, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WPOLK, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WPOLK, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WPOLK, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_WPOLK);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 200);

    lv_label_set_text(ui_Label14, "0");

    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label15

    ui_Label15 = lv_label_create(ui_WPOLK);

    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label15, 230);
    lv_obj_set_y(ui_Label15, 5);

    lv_label_set_text(ui_Label15, "10");

    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label16

    ui_Label16 = lv_label_create(ui_WPOLK);

    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label16, 100);
    lv_obj_set_y(ui_Label16, 85);

    lv_label_set_text(ui_Label16, "5");

    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x8000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_WGREEN

    ui_WGREEN = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_WGREEN, 320);
    lv_obj_set_height(ui_WGREEN, 240);

    lv_obj_set_x(ui_WGREEN, 0);
    lv_obj_set_y(ui_WGREEN, 0);

    lv_obj_clear_flag(ui_WGREEN, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_WGREEN, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WGREEN, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WGREEN, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WGREEN, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label17

    ui_Label17 = lv_label_create(ui_WGREEN);

    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label17, 0);
    lv_obj_set_y(ui_Label17, 200);

    lv_obj_set_align(ui_Label17, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Label17, "0");

    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label18

    ui_Label18 = lv_label_create(ui_WGREEN);

    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label18, -230);
    lv_obj_set_y(ui_Label18, 5);

    lv_obj_set_align(ui_Label18, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Label18, "10");

    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label19

    ui_Label19 = lv_label_create(ui_WGREEN);

    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label19, -100);
    lv_obj_set_y(ui_Label19, 85);

    lv_obj_set_align(ui_Label19, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Label19, "5");

    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button4

    ui_Button4 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button4, 320);
    lv_obj_set_height(ui_Button4, 190);

    lv_obj_set_x(ui_Button4, 0);
    lv_obj_set_y(ui_Button4, 0);

    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Button4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 37);

    lv_obj_set_x(ui_Button1, 0);
    lv_obj_set_y(ui_Button1, 240);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x4244FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Button1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, -8);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "Menu");

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 8);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "Text");

    // ui_Button2

    ui_Button2 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 37);

    lv_obj_set_x(ui_Button2, 110);
    lv_obj_set_y(ui_Button2, 240);

    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x4244FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Button2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Button2);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, -8);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "Range");

    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Button2);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 8);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "Text");

    // ui_Button3

    ui_Button3 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button3, 100);
    lv_obj_set_height(ui_Button3, 37);

    lv_obj_set_x(ui_Button3, 220);
    lv_obj_set_y(ui_Button3, 240);

    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x4244FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Button3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Button3);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, -8);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Alarm");

    // ui_Label6

    ui_Label6 = lv_label_create(ui_Button3);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 8);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "Text");

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

