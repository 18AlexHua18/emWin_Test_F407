//
// Created by 014242 on 24-12-17.
//

#include "GUI_Calibration.h"

#include "delay.h"
#include "GUI.h"
#include "touch.h"

void emwin_calibration()
{
    GUI_PID_STATE TouchState;
    int xPhys;
    int yPhys;
    // GUI_Init();
    GUI_SetFont(&GUI_Font20_ASCII);
    GUI_CURSOR_Show();
    GUI_CURSOR_Select(&GUI_CursorCrossL);
    GUI_SetBkColor(GUI_WHITE);
    GUI_SetColor(GUI_BLACK);
    GUI_Clear();
    GUI_DispString("Measurement of\nA/D converter values");
    while (1)
    {
        GUI_TOUCH_GetState(&TouchState); /* 以像素为单位获取触摸位置 */
        xPhys = GUI_TOUCH_GetxPhys(); /* 在 x 中得到 AD 测量结果 */
        yPhys = GUI_TOUCH_GetyPhys(); /* 在 y 中得到 AD 测量结果 */
        GUI_SetColor(GUI_BLUE);
        GUI_DispStringAt("Analog input:\n", 0, 40);
        GUI_GotoY(GUI_GetDispPosY() + 2);
        GUI_DispString("x:");
        GUI_DispDec(xPhys, 4);
        GUI_DispString(", y:");
        GUI_DispDec(yPhys, 4);
        GUI_SetColor(GUI_RED);
        GUI_GotoY(GUI_GetDispPosY() + 4);
        GUI_DispString("\nPosition:\n");
        GUI_GotoY(GUI_GetDispPosY() + 2);
        GUI_DispString("x:");
        GUI_DispDec(TouchState.x, 4);
        GUI_DispString(", y:");
        GUI_DispDec(TouchState.y, 4);
        delay_ms(50);
    }
}
