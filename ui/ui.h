// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: Futuristic_Ebike

#ifndef _FUTURISTIC_EBIKE_UI_H
#define _FUTURISTIC_EBIKE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../lvgl/lvgl.h"

void Particle1_Animation(lv_obj_t * TargetObject, int delay);
void Particle2_Animation(lv_obj_t * TargetObject, int delay);
void Particle3_Animation(lv_obj_t * TargetObject, int delay);
void Fash_Animation(lv_obj_t * TargetObject, int delay);
void Wave1_Animation(lv_obj_t * TargetObject, int delay);
void Wave2_Animation(lv_obj_t * TargetObject, int delay);
void Off_Animation(lv_obj_t * TargetObject, int delay);
void On_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Driving(lv_event_t * e);
extern lv_obj_t * ui_Driving;
extern lv_obj_t * ui_BG1;
extern lv_obj_t * ui_Speed_Number_2;
extern lv_obj_t * ui_Speed_Number_1;
extern lv_obj_t * ui_Label_Speed;
extern lv_obj_t * ui_Label_kmh1;
extern lv_obj_t * ui_Slider_Speed;
extern lv_obj_t * ui_Slider_Battery;
extern lv_obj_t * ui_Group_Battery_Percent;
extern lv_obj_t * ui_Label_Number1;
extern lv_obj_t * ui_Label_Number2;
extern lv_obj_t * ui_Label_Number3;
extern lv_obj_t * ui_Label_Number4;
extern lv_obj_t * ui_Label_Number5;
extern lv_obj_t * ui_Group_Header;
extern lv_obj_t * ui_Label_Time;
extern lv_obj_t * ui_LabeL_PM;
extern lv_obj_t * ui_Label_Temp;
extern lv_obj_t * ui_Label_Celsius;
extern lv_obj_t * ui_Label_Battery;
extern lv_obj_t * ui_Group_Footer;
extern lv_obj_t * ui_Image_Battery_icon;
extern lv_obj_t * ui_Label_Battery_Number;
extern lv_obj_t * ui_Label_Battery_Percent;
extern lv_obj_t * ui_Button_Group;
extern lv_obj_t * ui_BTN_Driving;
void ui_event_BTN_BG1(lv_event_t * e);
extern lv_obj_t * ui_BTN_BG1;
extern lv_obj_t * ui_ICN_Driving;
extern lv_obj_t * ui_BTN_Battery;
void ui_event_BTN_BG2(lv_event_t * e);
extern lv_obj_t * ui_BTN_BG2;
extern lv_obj_t * ui_ICN_Battery;
extern lv_obj_t * ui_BTN_Lock;
void ui_event_BTN_BG3(lv_event_t * e);
extern lv_obj_t * ui_BTN_BG3;
extern lv_obj_t * ui_ICN_Lock;
extern lv_obj_t * ui_Group_Driving;
extern lv_obj_t * ui_Group_Title;
extern lv_obj_t * ui_Title_BG;
extern lv_obj_t * ui_Label_Driving_Information;
extern lv_obj_t * ui_Group_Content;
extern lv_obj_t * ui_Group_ODO;
extern lv_obj_t * ui_LabeL_ODO;
extern lv_obj_t * ui_Label_ODO_Number;
extern lv_obj_t * ui_Label_km1;
extern lv_obj_t * ui_Group_Trip;
extern lv_obj_t * ui_Label_Trip;
extern lv_obj_t * ui_Label_Trip_Number;
extern lv_obj_t * ui_Label_km2;
extern lv_obj_t * ui_Group_Max_Speed;
extern lv_obj_t * ui_Label_Max_Speed;
extern lv_obj_t * ui_Label_Max_Speed_Number;
extern lv_obj_t * ui_Label_kmh2;
extern lv_obj_t * ui_Group_AVG_Speed;
extern lv_obj_t * ui_Label_AVG_Speed;
extern lv_obj_t * ui_Label_AVG_Speed_Number;
extern lv_obj_t * ui_Label_kmh3;
extern lv_obj_t * ui_Group_ETA;
extern lv_obj_t * ui_Label_ETA;
extern lv_obj_t * ui_Label_ETA_Number;
extern lv_obj_t * ui_Group_Time;
extern lv_obj_t * ui_Label_Time1;
extern lv_obj_t * ui_Label_Arrival_Time_Number1;
extern lv_obj_t * ui_Group_Battery;
extern lv_obj_t * ui_Group_Title1;
extern lv_obj_t * ui_Title_BG1;
extern lv_obj_t * ui_Label_Battery_Information;
extern lv_obj_t * ui_Group_Content1;
extern lv_obj_t * ui_Group_Charging;
extern lv_obj_t * ui_LabeL_Charging;
extern lv_obj_t * ui_Label_Charging_Number;
extern lv_obj_t * ui_Label_Percent1;
extern lv_obj_t * ui_Group_Distance;
extern lv_obj_t * ui_Label_Distance;
extern lv_obj_t * ui_Label_Distance_Number;
extern lv_obj_t * ui_Label_km4;
extern lv_obj_t * ui_Group_Complete;
extern lv_obj_t * ui_Label_Complete;
extern lv_obj_t * ui_Label_Complete_Number;
extern lv_obj_t * ui_Label_Mins;
extern lv_obj_t * ui_Group_Battery_Indicator;
extern lv_obj_t * ui_Particle_Group;
extern lv_obj_t * ui_Image_Particle1;
extern lv_obj_t * ui_Wave_Group;
extern lv_obj_t * ui_Wave1;
extern lv_obj_t * ui_Image_Particle2;
extern lv_obj_t * ui_Wave2;
extern lv_obj_t * ui_Image_Particle3;
extern lv_obj_t * ui_Image_Battery_BG;
extern lv_obj_t * ui_Image_Flash;
extern lv_obj_t * ui_Group_Pin;
extern lv_obj_t * ui_Group_Title2;
extern lv_obj_t * ui_Title_BG2;
extern lv_obj_t * ui_Label_Unlock;
extern lv_obj_t * ui_Group_Pin1;
void ui_event_Button_Pin1(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin1;
extern lv_obj_t * ui_Label_1;
extern lv_obj_t * ui_Pin_Add1;
void ui_event_Button_Pin2(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin2;
extern lv_obj_t * ui_Label_2;
extern lv_obj_t * ui_Pin_Add2;
void ui_event_Button_Pin3(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin3;
extern lv_obj_t * ui_Label_3;
extern lv_obj_t * ui_Pin_Add3;
void ui_event_Button_Pin4(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin4;
extern lv_obj_t * ui_Label_4;
extern lv_obj_t * ui_Pin_Add4;
void ui_event_Button_Pin5(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin5;
extern lv_obj_t * ui_Label_5;
extern lv_obj_t * ui_Pin_Add5;
void ui_event_Button_Pin6(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin6;
extern lv_obj_t * ui_Label_6;
extern lv_obj_t * ui_Pin_Add6;
void ui_event_Button_Pin7(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin7;
extern lv_obj_t * ui_Label_7;
extern lv_obj_t * ui_Pin_Add7;
void ui_event_Button_Pin8(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin8;
extern lv_obj_t * ui_Label_8;
extern lv_obj_t * ui_Pin_Add8;
void ui_event_Button_Pin9(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin9;
extern lv_obj_t * ui_Label_9;
extern lv_obj_t * ui_Pin_Add9;
void ui_event_Button_PinX(lv_event_t * e);
extern lv_obj_t * ui_Button_PinX;
extern lv_obj_t * ui_Pin_Add10;
extern lv_obj_t * ui_Image_X;
void ui_event_Button_Pin0(lv_event_t * e);
extern lv_obj_t * ui_Button_Pin0;
extern lv_obj_t * ui_Label_0;
extern lv_obj_t * ui_Pin_Add11;
void ui_event_Button_PinX1(lv_event_t * e);
extern lv_obj_t * ui_Button_PinX1;
extern lv_obj_t * ui_Pin_Add12;
extern lv_obj_t * ui_Image_Ok;


LV_IMG_DECLARE(ui_img_ebike_bg_png);    // assets\ebike_bg.png
LV_IMG_DECLARE(ui_img_speed_slider_png);    // assets\speed_slider.png
LV_IMG_DECLARE(ui_img_slider_battery_png);    // assets\slider_battery.png
LV_IMG_DECLARE(ui_img_icn_flash_png);    // assets\icn_flash.png
LV_IMG_DECLARE(ui_img_menu_on_png);    // assets\menu_on.png
LV_IMG_DECLARE(ui_img_icn_bike_png);    // assets\icn_bike.png
LV_IMG_DECLARE(ui_img_icn_battery_png);    // assets\icn_battery.png
LV_IMG_DECLARE(ui_img_icn_lock_png);    // assets\icn_lock.png
LV_IMG_DECLARE(ui_img_menu_line_png);    // assets\menu_line.png
LV_IMG_DECLARE(ui_img_particle_1_png);    // assets\particle_1.png
LV_IMG_DECLARE(ui_img_water_2_png);    // assets\water_2.png
LV_IMG_DECLARE(ui_img_particle_3_png);    // assets\particle_3.png
LV_IMG_DECLARE(ui_img_water_1_png);    // assets\water_1.png
LV_IMG_DECLARE(ui_img_particle_2_png);    // assets\particle_2.png
LV_IMG_DECLARE(ui_img_battery_bg_png);    // assets\battery_bg.png
LV_IMG_DECLARE(ui_img_icn_charge_png);    // assets\icn_charge.png
LV_IMG_DECLARE(ui_img_pin_line_png);    // assets\pin_line.png
LV_IMG_DECLARE(ui_img_pin_on_png);    // assets\pin_on.png
LV_IMG_DECLARE(ui_img_icn_x_png);    // assets\icn_x.png
LV_IMG_DECLARE(ui_img_icn_ok_png);    // assets\icn_ok.png


LV_FONT_DECLARE(ui_font_Big);
LV_FONT_DECLARE(ui_font_Medium);
LV_FONT_DECLARE(ui_font_Number);
LV_FONT_DECLARE(ui_font_Small);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
