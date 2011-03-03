/*
 * Configuration of module Os (Os_Cfg.h)
 *
 * Created by: 
 * Configured for (MCU): STM32_F103
 *
 * Module vendor: ArcCore
 * Module version: 2.0.11
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Feb 28 18:42:03 CET 2011
 */


#if !(((OS_SW_MAJOR_VERSION == 2) && (OS_SW_MINOR_VERSION == 0)) )
#error "Os: Configuration file version differs from BSW version."
#endif


#ifndef OS_CFG_H_
#define OS_CFG_H_


// Alarm Id's
#define ALARM_ID_Alarm_4ms	0
#define ALARM_ID_Alarm_WdM	1

// Counter Id's
#define COUNTER_ID_OsTick	0
#define COUNTER_ID_WDFailureCounter	1

// Counter macros
#define OSMAXALLOWEDVALUE_OsTick 65535
#define OSMAXALLOWEDVALUE_WDFailureCounter 65535


// Event masks
#define EVENT_MASK_EVENT_0	0
#define EVENT_MASK_EVENT_1	1
#define EVENT_MASK_EVENT_2	2

// Isr Id's

// Resource Id's

// Linked resource id's

// Resource masks

// Task Id's
#define TASK_ID_OsIdle	0
#define TASK_ID_WDTask	1
#define TASK_ID_btask_3	2
#define TASK_ID_etask_1	3
#define TASK_ID_etask_2	4

// Task entry points
void OsIdle( void );
void WDTask( void );
void btask_3( void );
void etask_1( void );
void etask_2( void );

// Schedule table id's

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048
#define OS_OSIDLE_STACK_SIZE 512

#define OS_ALARM_CNT			2 
#define OS_TASK_CNT				5
#define OS_SCHTBL_CNT			0
#define OS_COUNTER_CNT			2
#define OS_EVENTS_CNT			3
#define OS_ISRS_CNT				0
#define OS_RESOURCE_CNT			0
#define OS_LINKED_RESOURCE_CNT	0

#define CFG_OS_DEBUG				STD_OFF

#define OS_SC1 						STD_ON     
#define OS_STACK_MONITORING			STD_ON
#define OS_STATUS_EXTENDED			STD_ON
#define OS_USE_GET_SERVICE_ID		STD_ON
#define OS_USE_PARAMETER_ACCESS		STD_ON
#define OS_RES_SCHEDULER			STD_ON

#endif /*OS_CFG_H_*/
