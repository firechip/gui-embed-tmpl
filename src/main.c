/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "lvgl.h"
#include "app_hal.h"

#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

lv_ui guider_ui;

int main(void)
{
  lv_init();

  hal_setup();

  setup_ui(&guider_ui);
  events_init(&guider_ui);
  custom_init(&guider_ui);

  hal_loop();
}