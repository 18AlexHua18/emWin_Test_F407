//
// Created by 014242 on 24-12-10.
//

#ifndef LCD_TESTWITH_TOUCH_H
#define LCD_TESTWITH_TOUCH_H

#include "sys.h"
#include "usart.h"
#include "delay.h"
#include "led.h"
#include "lcd.h"
#include "key.h"
#include "touch.h"

void load_draw_dialog(void);
void lcd_draw_bline(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t size, uint16_t color);
void rtp_test(void);
void ctp_test(void);

#endif //LCD_TESTWITH_TOUCH_H
