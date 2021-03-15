#include "app_common.h"
#include "gpio.h"

#include "soft_timer.h"
#include "mainloop_timer.h"
#include "misc.h"

#define BLINK_INTERVAL      100

static SoftTimerElem  _blink_timer;

static void
blink_callback(SoftTimerElem* te)
{
  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
  mainloop_timer_schedule(&_blink_timer, BLINK_INTERVAL);
}

void
misc_init(void)
{
  // init blink timer
  soft_timer_init_elem(&_blink_timer);
  _blink_timer.cb    = blink_callback;
  mainloop_timer_schedule(&_blink_timer, BLINK_INTERVAL);
}
