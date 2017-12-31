#ifndef _INC_SC_DEFINES_
#define _INC_SC_DEFINES_

#define SC_LIGHT_MAX_PEN_PATHS_COUNT	5

#define _USE_MATH_DEFINES

#include <math.h>

#if defined(SC_BARE_METAL) || defined(__GNUC__)
#define     SC_PRE_ALIGNMENT(n)         // this define is used for Visual C++
#define     SC_POST_ALIGNMENT(n)        __attribute__ ((aligned (n)))
#else
#define     SC_PRE_ALIGNMENT(n)         __declspec( align( n ) )
#define     SC_POST_ALIGNMENT(n)        // this define is used for GCC
#endif

#ifndef SC_COM_ITEM_STATUS_USED
#define		SC_COM_ITEM_STATUS_USED					0x00000001
#endif

#ifndef SC_DISPID_OFFSET_KERNEL
#define		SC_DISPID_OFFSET_KERNEL		2000
#endif

#ifndef SC_COM_KERNEL_MESSAGE_ACTION_DOWNLOAD
#define		SC_COM_KERNEL_MESSAGE_ACTION_DOWNLOAD		0X9
#endif

#ifndef SC_COM_KERNEL_MESSAGE_ACTION_UPLOAD
#define		SC_COM_KERNEL_MESSAGE_ACTION_UPLOAD		0X9
#endif

#ifndef SC_COM_KERNEL_UNIT_MM
#define	SC_COM_KERNEL_UNIT_MM		1
#endif
#ifndef SC_COM_KERNEL_UNIT_INCH
#define	SC_COM_KERNEL_UNIT_INCH		2
#endif
#ifndef SC_COM_KERNEL_UNIT_MIL
#define	SC_COM_KERNEL_UNIT_MIL		3
#endif
#ifndef SC_COM_KERNEL_UNIT_BIT
#define	SC_COM_KERNEL_UNIT_BIT		4
#endif

#ifndef SC_COM_KERNEL_LONG_VALUE_ID_LIGHT_CTRL_EXISTS
#define     SC_COM_KERNEL_LONG_VALUE_ID_LIGHT_CTRL_EXISTS                                   22
#endif

#ifndef SC_COM_ENTITY_USED
#define		SC_COM_ENTITY_USED			0x1
#endif

//#include "sc_kernel_com_defines.h"

#ifndef SC_DSD_ARM
	#include "sc_errorcodes.h"
#endif

typedef char			sc_char;		// 1 byte
typedef unsigned char	sc_uchar;		// 1 byte
typedef unsigned char	sc_byte;		// 1 byte
typedef short			sc_short;		// 2 byte
typedef unsigned short	sc_ushort;		// 2 byte
typedef long			sc_long;		// 4 byte
typedef unsigned long	sc_ulong;		// 4 byte
#if !defined(SC_DSD_ARM) && !defined(SC_BARE_METAL) && !defined(SC_USC3_NIOS)
typedef unsigned __int64 sc_ulonglong;  // 8 byte
#else
typedef uint64_t 		sc_ulonglong;  // 8 byte
#endif
typedef float			sc_float; 		// 4 byte
typedef double			sc_double; 		// 8 byte
typedef int				sc_bool;		// 4 byte

// working variable
typedef sc_double		sc_real;		// 8 byte
typedef sc_real			sc_angle;
typedef sc_long			sc_result;

#define SC_USHORT_MAX_VALUE	65535
#define SC_USHORT_MIN_VALUE	0
#define SC_REAL_MAX_VALUE	(sc_real)3.4E38
#define SC_REAL_MIN_VALUE	(sc_real)-3.4E38

#define SC_Vertex2D		SC_Point2D
#define SC_Vertex3D		SC_Point3D

#define SC_TRUE		1
#define SC_FALSE	0

// for accessing the coordinates of the vector classes
#define	SC_X		0
#define	SC_Y		1
#define	SC_Z		2

// plane types
#define	SC_PLANE_TYPE_XY		1
#define	SC_PLANE_TYPE_XZ		2
#define	SC_PLANE_TYPE_YZ		3

// standard return values
//#define		SC_OK			1 // defined in sc_errorcodes.h
#define		SC_RES0			2		// standard return value
#define		SC_RES1			3		// standard return value
#define		SC_PACKED		10		// return value for pack-function, if something was packed

#define		SC_ON			SC_TRUE
#define		SC_OFF			SC_FALSE

#ifdef _MSC_VER

const double SC_EPSILON   = 0.0001;
const double SC_EPSILON10 = SC_EPSILON * 10.;
const double SC_EPSILON_SMALL   = 0.00000001;	// equals SC_EPSILON / 10000

const double SC_PI        = 3.1415926535897932384626433832795;
const double SC_PI_HALF   = 1.5707963267948966192313216916398;
const double SC_TWO_PI    = 6.283185307179586476925286766559;
const double SC_SQUAREROOT_TWO = M_SQRT2;
const double SC_ONE_THIRD = 0.33333333333333333333;

#define	SC_CRLF			_T( "\r\n" )
#define	SC_CR			_T( "\r" )

#define	SC_RAD_TO_DEG(rad)			(rad*180./SC_PI)
#define	SC_DEG_TO_RAD(deg)			(deg*SC_PI/180.)
#define	SC_SIGN(val)				((val>=0)? 1 : -1)

#define	SC_PIXEL_MAP_SIZE_DEFAULT					6
#define	SC_PIXEL_MAP_SIZE_MAX						256
#define	SC_MAX_NUM_PEN_PATHS						10

// to switch the unit
#define	SC_KERNEL_UNIT_MM		SC_COM_KERNEL_UNIT_MM
#define	SC_KERNEL_UNIT_INCH		SC_COM_KERNEL_UNIT_INCH
#define	SC_KERNEL_UNIT_MIL		SC_COM_KERNEL_UNIT_MIL
#define	SC_KERNEL_UNIT_BIT		SC_COM_KERNEL_UNIT_BIT


#define		SC_DATA_ITEM_STATUS_RESET					SC_COM_ITEM_STATUS_RESET
#define		SC_DATA_ITEM_STATUS_USED					SC_COM_ITEM_STATUS_USED
#define		SC_DATA_ITEM_STATUS_DONE					SC_COM_ITEM_STATUS_DONE
#define		SC_DATA_ITEM_STATUS_SELECTED				SC_COM_ITEM_STATUS_SELECTED
#define		SC_DATA_ITEM_STATUS_CHANGED					SC_COM_ITEM_STATUS_CHANGED
#define		SC_DATA_ITEM_STATUS_USE_STYLE_FLAGS			SC_COM_ITEM_STATUS_USE_STYLE_FLAGS
#define		SC_DATA_ITEM_STATUS_MARKABLE				SC_COM_ITEM_STATUS_MARKABLE
#define		SC_DATA_ITEM_STATUS_CREATED_FROM_MULTI_HEAD	SC_COM_ITEM_STATUS_CREATED_FROM_MULTI_HEAD
#define		SC_DATA_ITEM_STATUS_CREATED_FROM_LINE_STYLE	SC_COM_ITEM_STATUS_CREATED_FROM_LINE_STYLE
#define		SC_DATA_ITEM_STATUS_LINE_STYLE_LASER_OFF		SC_COM_ITEM_STATUS_LINE_STYLE_LASER_OFF		// switch off and go to the next point


#define		SC_DATA_ITEM_STATUS_SPECIAL_OFFSET			SC_COM_ITEM_STATUS_SPECIAL_OFFSET
#define		SC_DATA_ITEM_STATUS_STYLE_OFFSET			SC_COM_ITEM_STATUS_STYLE_OFFSET
#define		SC_DATA_ITEM_STATUS_STYLE_PARAM				SC_COM_ITEM_STATUS_STYLE_PARAM
#define		SC_DATA_ITEM_STATUS_STYLE_SET				SC_COM_ITEM_STATUS_STYLE_SET
#define		SC_DATA_ITEM_STATUS_STYLE_POINTER			SC_COM_ITEM_STATUS_STYLE_POINTER

#define		SC_DATA_ITEM_STATUS_SET_STATUS				SC_COM_ITEM_STATUS_SET_STATUS

#define		SC_DATA_LINE_ARRAY_ITEM_STATUS_P0_SELECTED	(0x1*SC_DATA_ITEM_STATUS_SPECIAL_OFFSET)
#define		SC_DATA_LINE_ARRAY_ITEM_STATUS_P1_SELECTED	(0x2*SC_DATA_ITEM_STATUS_SPECIAL_OFFSET)

#define		SC_POLY_LINE_ITEM_STATUS_HAS_NEIGHBOUR		(0x1*SC_DATA_ITEM_STATUS_SPECIAL_OFFSET)

//action defines // see SC_GetKernelMessage


#define		SC_ACTION_IMPORT				SC_COM_KERNEL_MESSAGE_ACTION_IMPORT
#define		SC_ACTION_EXPORT				SC_COM_KERNEL_MESSAGE_ACTION_EXPORT
#define		SC_ACTION_SLICE					SC_COM_KERNEL_MESSAGE_ACTION_SLICE
#define		SC_ACTION_CHECK					SC_COM_KERNEL_MESSAGE_ACTION_CHECK
#define		SC_ACTION_DRAW					SC_COM_KERNEL_MESSAGE_ACTION_DRAW
#define		SC_ACTION_OPEN_FILE				SC_COM_KERNEL_MESSAGE_ACTION_OPEN_FILE
#define		SC_ACTION_CALC_OUTLINE			SC_COM_KERNEL_MESSAGE_ACTION_CALC_OUTLINE
#define		SC_ACTION_EXPOSURE				SC_COM_KERNEL_MESSAGE_ACTION_EXPOSURE
#define		SC_ACTION_DOWNLOAD				SC_COM_KERNEL_MESSAGE_ACTION_DOWNLOAD
#define		SC_ACTION_UPLOAD				SC_COM_KERNEL_MESSAGE_ACTION_UPLOAD

#define		SC_ACTION_USER_OFFSET			0x1000

#define		SC_KERNEL_DEBUG_MODE_MESSAGE		                0x00000001
#define		SC_KERNEL_DEBUG_MODE_MESSAGE_BOX	                0x00000002
#define		SC_KERNEL_DEBUG_MODE_NO_OUTPUT		                0x00000004		// switch OFF error output
#define     SC_KERNEL_DEBUG_MODE_ADD_TO_ERR_MSG_ARR             0x00000008
#define		SC_KERNEL_DEBUG_MODE_INTERNAL_MESSAGE_BOX		    0x00008000
#define		SC_KERNEL_DEBUG_MODE_ERROR_LEVEL_MASK_FILE		    0x000F0000
#define		SC_KERNEL_DEBUG_MODE_ERROR_LEVEL_SHIFT_FILE		    0x00010000
#define		SC_KERNEL_DEBUG_MODE_ERROR_LEVEL_MASK_MESSAGE_BOX	0x00F00000
#define		SC_KERNEL_DEBUG_MODE_ERROR_LEVEL_SHIFT_MESSAGE_BOX	0x00100000


/// CLSID defines

#define		SC_KERNEL_CLSID_OPTIC_STYLE				0
#define		SC_KERNEL_CLSID_SCANNER_STYLE			1
#define		SC_KERNEL_CLSID_MATERIALS				2
#define		SC_KERNEL_CLSID_SCAPS					3
#define		SC_KERNEL_CLSID_ENTITY					4
#define		SC_KERNEL_CLSID_RTC_STYLE				5
#define		SC_KERNEL_CLSID_OPTIC_GLOBAL			6
#define		SC_KERNEL_CLSID_RTC2_STYLE				7
#define		SC_KERNEL_CLSID_RTC1000_STYLE			8
#define		SC_KERNEL_CLSID_ARCHIVE_PICTURE			9
#define		SC_KERNEL_CLSID_USER_OPTIC_STYLES		10
#define		SC_KERNEL_CLSID_OPTIC_HEAD				11
#define		SC_KERNEL_CLSID_OPTIC_HEAD_PROPERTIES	12
#define		SC_KERNEL_CLSID_LENS_STORAGE			13
#define		SC_KERNEL_CLSID_LASER_STORAGE			14
#define		SC_KERNEL_CLSID_CFG_STORAGE				15

// ADIO motion control types

#define SC_MOTIONTYPE_NONE              0
#define SC_MOTIONTYPE_IMS               1
//@@@@@ //#define SC_MOTIONTYPE_STANDARD          2
//@@@@@ //#define SC_MOTIONTYPE_MICROCON          3
#define SC_MOTIONTYPE_EXTERNAL_DEV      4
#define SC_MOTIONTYPE_IMS_MDRIVE        5
#define SC_MOTIONTYPE_FAULHABER_MC      6
#define SC_MOTIONTYPE_ISEL_IT           7
#define SC_MOTIONTYPE_STEPPER           8
#define SC_MOTIONTYPE_GENERIC_232       9
#define SC_MOTIONTYPE_SHS_STAR2000      10
#define SC_MOTIONTYPE_JENA_ECOSTEP100   11
#define SC_MOTIONTYPE_IOSWITCHER        12
#define SC_MOTIONTYPE_ISEL              13
#define SC_MOTIONTYPE_SCAPS_STEPPER_CONTROLLER 14

// pixel array flags
#define SC_PIXEL_ARRAY2D_FLAG_USE_PEN_FREQ				0x1
#define SC_PIXEL_ARRAY2D_FLAG_X_SCAN_DIRECTION			0x2
#define SC_PIXEL_ARRAY2D_FLAG_GENERATED_NEW				0x4		// bitmap generated after 18.08.2007 - we can switch to new marking methods
#define SC_PIXEL_ARRAY2D_FLAG_ENABLE_HEIGHT_LIMIT		0x8		// bitmap will be sized to this
#define SC_PIXEL_ARRAY2D_FLAG_ENABLE_WIDTH_LIMIT		0x10	// bitmap will be sized to this
#define SC_PIXEL_ARRAY2D_FLAG_DONT_KEEP_ASPECT_RATIO	0x20
#define SC_PIXEL_ARRAY2D_FLAG_ENABLE_POSITIONING		0x40	// the Entity2D Align Flags are used for this
#define SC_PIXEL_ARRAY2D_FLAG_POINT_GRAYSCALE_MODE		0x80	// the point mode has to be active for this
#define SC_PIXEL_ARRAY2D_FLAG_JUMP_OVER_BLANK_PIXELS	0x100	// in grayscale mode: instead of using Power=0, jump over blank lines
#define SC_PIXEL_ARRAY2D_FLAG_GENERATED_FROM_ENTITY		0x10000	//was generated from other entities , Vector to Bitmap renderer or other Bitmaps


// some property GUID definitions

const GUID SC_ENTITY_CLSID = { 0xa1e6cee2, 0x467f, 0x11d2, { 0x8c, 0xd3, 0x00, 0x80, 0x48, 0xee, 0xdc, 0xb8 } };

const GUID SC_SCAPS_GUID = { 0x35121883, 0xdde3, 0x11d2, { 0x9a, 0xd4, 0x00, 0x80, 0x48, 0xee, 0xe0, 0x0c } };

const GUID SC_BITMAP_GUID = { 0x54b9ccc2, 0xf4b4, 0x11d1, { 0x8e, 0x18, 0x00, 0x80, 0x48, 0xe1, 0xad, 0x3f } };

const long SC_BITMAP_GUID1 = 0x54b9ccc2;
const long SC_BITMAP_GUID2 = 0xf4b411d1;
const long SC_BITMAP_GUID3 = 0x8e180080;
const long SC_BITMAP_GUID4 = 0x48e1ad3f;

const GUID SC_PEN_GUID = { 0x113f7a, 0xcc82, 0x11d1, { 0x8c, 0x6c, 0, 0x80, 0x48, 0xee, 0xdc, 0xb8 } };

const long SC_PEN_GUID1 = 0x00113F7A;
const long SC_PEN_GUID2 = 0xCC8211D1;
const long SC_PEN_GUID3 = 0x8C6C0080;
const long SC_PEN_GUID4 = 0x48EEDCB8;

const GUID SC_HATCH_GUID = { 0x71ab7485, 0xefe8, 0x11d1, { 0x8c, 0x7d, 0x00, 0x80, 0x48, 0xee, 0xdc, 0xb8 } };

const long SC_HATCH_GUID1 = 0x71AB7485;
const long SC_HATCH_GUID2 = 0xEFE811D1;
const long SC_HATCH_GUID3 = 0x8C7D0080;
const long SC_HATCH_GUID4 = 0x48EEDCB8;

// {85EAA7E1-A853-4469-AFD3-2D0ABDB81DE0}
const GUID SC_STYLE_GUID = { 0x85eaa7e1, 0xa853, 0x4469, { 0xaf, 0xd3, 0x2d, 0xa, 0xbd, 0xb8, 0x1d, 0xe0 } };

const long SC_STYLE_GUID1 = 0x85eaa7e1;
const long SC_STYLE_GUID2 = 0xa8534469;
const long SC_STYLE_GUID3 = 0xafd32d0a;
const long SC_STYLE_GUID4 = 0xbdb81de0;

const long SC_PEN_COLOR_ALL       = 0xff000000;

// globally used defines

const long SC_USC_BUFFER_QUEUE_LENGTH   = 6;
const long SC_MAX_PEN_NUM               = 256;
const long SC_MAX_HATCH_NUM             = 10;

const enum TRegisteredMsgLParam
{
    eLParamNone = 0,                                            // default value for lParam
    eLParamSetWaitCursor = 1,                                   // Set Wait cursor
    eLParamResetWaitCursor = 2,                                 // Reset Wait cursor
    eLParamGetCurrentValueOfStopCausedByInterface = 3,          // Get this value as return value of message
    eLParamSetCurrentValueOfStopCausedByInterfaceToTrue = 4,    // Set this value to 'true'
    eLParamSetCurrentValueOfStopCausedByInterfaceToTrueAndExecuteStopExecution = 5
};

const enum TRegisteredMsgWParam
{
    eWParamNotSet = 0,
    eWParamPumpApp = 1,                                 // should pump all application messages, including idle processing.
    eWParamDisableApplicationExit = 2,                  // should disable application exit.
    eWParamEnableApplicationExit = 3,                   // should enable application exit.
    eWParamTriggerWindowShow = 4,                       // send by opticModule, if TriggerWindow is shown up.
    eWParamTriggerWindowHide = 5,                       // send by opticModule, if TriggerWindow is hiding.
    eWParamMotionOnOff = 6,                             // send on 'go' On / Off in motion SC_EventPropertyForm2.
    eWParamPumpAppWithoutMotionStopWithoutIdle = 7,     // Send to be able to stop motion, even no InternalPump is done during motion.
    eWParamPumpAppWithoutMotionStop = 8,                // 'normal' pumping, if NOT in motion.
    eWParamGetMarkDlgHWnd = 9,                          // for disable Trigger window show, because sometimes Trigger window pops up during open MarkDlg.
    eWParamIsSplitOrStepRepeatActive = 10,              // returns '1', if in Samlight splitting / bmp rotary / step repeat is running - with normal mark dialog or mark trigger.
    eWParamStopCausedByInterface = 11,                  // In case stop_execution during optic_module internal do_waits(), Samlight does not recognize
                                                        // this, it must be informed in this case
    eWParamGetUsedIOBitsString = 12,                    // Used in motion GUI.
    eWParamJobUpdated = 13,                             // to notify Samlight of job changes - allows Samlight to asynchronously check job without polling.
    eWParamIsSamlightWaitCursorActive = 14,             // to check, if WaitCursor is active.
    eWParamTriggerWindowStopButtonClicked = 15,         // to set corresponding flag in Samlight
    eWParamCallHomingDialogBecauseMotionStepperHasStopped = 16,
    eWParamCallHomingDialogInCaseMotionStepperHasStopped = 17,
    eWParamIsSplitAngularWithStayInside360Degree = 18,
    eWParamIsBmpSplitActivated = 19,                    // returns '1', if in Samlight bmp rotary is checked.
    eWParamSignalPreSlice = 2000,
    eWParamSignalPostSlice = 2001
};

const long SC_VECTOR_TOOL_CUT_MODE_DO_SPLINE    = 0x5a5a5a5a;   // Enables splining in cut() function.

#endif // ifdef _MSC_VER

#endif

