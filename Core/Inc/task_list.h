#ifndef __TASK_LIST__
#define __TASK_LIST__

#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"
/* Private defines -----------------------------------------------------------*/
#define BLINK_LD3 1

int getDataFromQueue(uint8_t* Buf);


#endif
