/**
 ******************************************************************************
 * @file		GUI_Font24.c
 * @author		门禁开发小组
 * @version		V1.0.0
 * @date		2018-01-20
 * @brief       这种汉字显示方式适合使用等宽字体，非等宽的微软雅黑等字体显示效果较差。
 * @note		
 * @History
 * Date           	Author    	version    				Notes
 * 2018-01-20    	ZSY       	V1.0.0				first version.
 */
	
/* Includes ------------------------------------------------------------------*/
#include "GUI.h"
#include "GUI_Type.h"



GUI_CONST_STORAGE GUI_CHARINFO GUI_FontHZ24_CharInfo[2] =  
{     
      {  12,  12,  2, (void *)"A24"},    
      {  24,  24,  3, (void *)"H24"},        
}; 

GUI_CONST_STORAGE GUI_FONT_PROP GUI_FontHZ24_PropHZ= { 
      0x4081,  
      0xFEFE, 
      &GUI_FontHZ24_CharInfo[1], 
      (void *)0,  
}; 

GUI_CONST_STORAGE  GUI_FONT_PROP GUI_FontHZ24_PropASC= { 
      0x0000,
      0x007F,  
      &GUI_FontHZ24_CharInfo[0], 
      (void GUI_CONST_STORAGE *)&GUI_FontHZ24_PropHZ,  
}; 

GUI_CONST_STORAGE  GUI_FONT GUI_FontHZ24 =  
{ 
	GUI_FONTTYPE_USER,
	24,  
	24,  
	1,   
	1,   
	(void GUI_CONST_STORAGE *)&GUI_FontHZ24_PropASC
}; 

GUI_CONST_STORAGE  GUI_FONT GUI_FontHZ24x2 =  
{ 
	GUI_FONTTYPE_USER,
	24,  
	24,  
	2,   
	2,   
	(void GUI_CONST_STORAGE *)&GUI_FontHZ24_PropASC 
};





