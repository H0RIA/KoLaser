#ifndef EXTMOTIONGLOBAL_H
#define EXTMOTIONGLOBAL_H

/**
This header file contains all necessary defines that are used as parameters, return values and
others by the ExtMotionDLL programming interface
*/

#ifndef SC_ENV_USC2_MAIN
    static const TCHAR SC_MOTION_SETTINGS_PATH[] = _T( "\\system\\sc_motion_settings.txt" );
    static const TCHAR *SC_MOTION_IMS                 = _T( "Ims" );
    //@@@@@ //static const TCHAR *SC_MOTION_STANDARD            = _T( "Standard" );
    //@@@@@ //static const TCHAR *SC_MOTION_MICROCON            = _T( "MicroCon" );
    static const TCHAR *SC_MOTION_EXTERNAL_DEVICE     = _T( "external device" );
    static const TCHAR *SC_MOTION_MDRIVE              = _T( "IMS MDrive" );
    static const TCHAR *SC_MOTION_FAULHABER           = _T( "Faulhaber MotionController" );
    static const TCHAR *SC_MOTION_ISEL_IT             = _T( "Isel IT Controller" );
    static const TCHAR *SC_MOTION_STEPPER             = _T( "Generic stepper motor" );
    static const TCHAR *SC_MOTION_RS232               = _T( "Generic RS232 Interface" );
    static const TCHAR *SC_MOTION_SHS                 = _T( "SHS Star 2000 Series" );
    static const TCHAR *SC_MOTION_JENA                = _T( "Jena Ecostep100" );
    static const TCHAR *SC_MOTION_IO_SWITCHER         = _T( "IO-switcher" );
    static const TCHAR *SC_MOTION_ISEL                = _T( "Isel" );
    static const TCHAR *SC_MOTION_STEPPER_CONTROLLER  = _T( "SCAPS stepper controller" );

    static const TCHAR *SC_MOTION_TYPES[] =
    {
        SC_MOTION_IMS,
        _T( "" ), //@@@@@ //SC_MOTION_STANDARD,
        _T( "" ), //@@@@@ //SC_MOTION_MICROCON,
        SC_MOTION_EXTERNAL_DEVICE,
        SC_MOTION_MDRIVE,
        SC_MOTION_FAULHABER,
        SC_MOTION_ISEL_IT,
        SC_MOTION_STEPPER,
        SC_MOTION_RS232,
        SC_MOTION_SHS,
        SC_MOTION_JENA,
        SC_MOTION_IO_SWITCHER,
        SC_MOTION_ISEL,
        SC_MOTION_STEPPER_CONTROLLER
    };
#endif

#define	SC_DEFINE_CONTROL_MOTION_NUM_AXIS   7

// general flag defines for axises

const long SC_AXIS_X = 0x00000001;
const long SC_AXIS_Y = 0x00000002;
const long SC_AXIS_Z = 0x00000004;
const long SC_AXIS_A = 0x00000008;
const long SC_AXIS_B = 0x00000010;
const long SC_AXIS_C = 0x00000020;
const long SC_AXIS_D = 0x00000040;
const long SC_AXIS_E = 0x00000080;
const long SC_AXIS_F = 0x00000100;

// general axis access flag(s) ( bit positioned ) - allows command(s) ( eg. MoveAxis ) to move all or some axis with a single command.
//
const long SC_MOTION_CONTROL_AXIS[] =
{
    SC_AXIS_X, SC_AXIS_Y, SC_AXIS_Z, SC_AXIS_A, SC_AXIS_B, SC_AXIS_C, SC_AXIS_D, SC_AXIS_E, SC_AXIS_F
};

// Defines returned by sc_motion_control_ext_get_caps()
//
const long SC_MOTION_CONTROL_CAPS_HAS_STOP                    = 0x00000001;   // Controller or Drive can be stopped ( e.g. during a move operation ).
const long SC_MOTION_CONTROL_CAPS_HAS_SPEED_CONTROL           = 0x00000002;   // Speed can be set in Controller or Drive.
const long SC_MOTION_CONTROL_CAPS_HAS_POSITION_FEEDBACK       = 0x00000004;   // If controller or drive has NOT this capability, not any position feedback is done by controller or drive.
const long SC_MOTION_CONTROL_CAPS_HAS_HOME                    = 0x00000008;   // If controller or drive has NOT this capability, an initial 'do homing' execute command is called during SamLight startup.

// Axis is avilable.
//
const long SC_MOTION_CONTROL_CAPS_HAS_AXIS[] =
{
    0x00000010, 0x00000020, 0x00000040, 0x00004000, 0x00010000, 0x00040000, 0x00080000, 0x00800000, 0x01000000
};

const long SC_MOTION_CONTROL_CAPS_HAS_RS232_DIRECT_STRING_CMD = 0x00000080;   // Specifies that it is possible to send a control-string to the device directly to perform some specific actions.

// Axis is angular ( default is Position mode ).
//
const long SC_MOTION_CONTROL_CAPS_HAS_AXIS_ANGULAR[] =
{
    0x00000100, 0x00000200, 0x00000400, 0x00001000, 0x00002000, 0x00100000, 0x00200000, 0x02000000, 0x04000000
};

const long SC_MOTION_CONTROL_CAPS_HAS_AXIS_NAME               = 0x00000800;   // Driver is able to return name for each of the axes ( typical one Character ).
const long SC_MOTION_CONTROL_CAPS_ERROR                       = 0x00008000;   // An error occured, the capabilities couldn't be evaluated.
const long SC_MOTION_CONTROL_CAPS_HAS_SINGLE_AXIS_HOME        = 0x00020000;   // Homing axis(es) can be selected through 'Relativ motion' checkbox.
const long SC_MOTION_CONTROL_CAPS_HAS_GUI                     = 0x00400000;   // Motion can be edited.

/** defines for the id-parameter in sc_motion_control_ext_get_value() */
#define	SC_MOTION_CONTROL_GET_VALUE_ACT_POSITION            1       // returns current position of the specified axis [ mm ].
#define	SC_MOTION_CONTROL_GET_VALUE_ACT_ANGLE               2       // returns current angle of the specified axis. [ ° ]
#define	SC_MOTION_CONTROL_GET_VALUE_MIN_SPEED               11      // returns min speed.
#define	SC_MOTION_CONTROL_GET_VALUE_MAX_SPEED               12      // returns max speed.
#define	SC_MOTION_CONTROL_GET_VALUE_DEFAULT_SPEED           13      // returns default speed.
#define	SC_MOTION_CONTROL_GET_VALUE_INCPERROT               21      // returns number of increments/steps per rotation.
#define	SC_MOTION_CONTROL_GET_VALUE_INCPERMM                22      // returns the (average) number of increments/steps per mm.
#define	SC_MOTION_CONTROL_GET_VALUE_HSLIMIT                 23      // returns the speed limit.
#define	SC_MOTION_CONTROL_GET_VALUE_STEPIO                  24      // returns the output pin defined for stepper drives step signal.
#define	SC_MOTION_CONTROL_GET_VALUE_DIRIO                   25      // returns the output pin defined for stepper drives direction signal.
#define SC_MOTION_CONTROL_GET_VALUE_CAPS                    26      // return motion caps.
#define SC_MOTION_CONTROL_GET_VALUE_START_GUI               27      // Start motion GUI.
#define SC_MOTION_CONTROL_GET_VALUE_MAX_POSITION            28      // max ( positive ) position.
#define SC_MOTION_CONTROL_GET_VALUE_MIN_POSITION            29      // min position.
#define SC_MOTION_CONTROL_GET_VALUE_IMPORT_STEPPER          96      // Import text settings to binary settings.
#define SC_MOTION_CONTROL_GET_VALUE_EXPORT_STEPPER          97      // Export binary to text settings.
#define SC_MOTION_CONTROL_GET_VALUE_INITIATE_POS_TO_ZERO    98      // Only IMS and LaserPlus: Set position in controller and in ADIO to zero.
#define SC_MOTION_CONTROL_GET_VALUE_INITIATE_POS_READ       99      // Only IMS: Read position from controller again.
#define SC_MOTION_CONTROL_GET_VALUE_POSITION_OFFSET         1000    // Shift value to current position, hold and completely handled in SC_ControlMotion

#define SC_MOTION_CONTROL_SET_VALUE_POSITION_OFFSET         1000    // Shift value to current position, hold and completely handled in SC_ControlMotion


/** defines for the id-parameter of sc_motion_control_ext_execute() */
#define	SC_MOTION_CONTROL_EXEC_HOME                     1 // Executes homing for the specified axis
#define	SC_MOTION_CONTROL_EXEC_MOVE_TO_POS              2 // starts moving to the specified position
#define	SC_MOTION_CONTROL_EXEC_STOP_MOVE                3 // stops moving for the specified axis
#define	SC_MOTION_CONTROL_EXEC_INIT                     4 // initialize, has to be called once during program start
#define	SC_MOTION_CONTROL_EXEC_EXIT                     5 // deinitialize/exit, will be called once during program exit
#define	SC_MOTION_CONTROL_EXEC_MOVE_TO_ANGLE            6 // starts moving to the specified angle
#define	SC_MOTION_CONTROL_EXEC_MOVE_ALL                 7 // initiates movement of all motion drives
#define SC_MOTION_CONTROL_EXEC_MOVE_INCREMENTS_RELATIVE 8 // initiates movement by the precedingly set number of relative increments
#define SC_MOTION_CONTROL_EXEC_OPEN_GUI                 9 // Opens GUI dialog, returns '1', if something has changed.


/** defines for the id in sc_motion_control_ext_set_value() */
#define	SC_MOTION_CONTROL_SET_VALUE_SPEED               1 // sets the speed for the specified axis
#define	SC_MOTION_CONTROL_SET_VALUE_POS                 2 // sets the position for the specified axis
#define	SC_MOTION_CONTROL_SET_VALUE_ANGLE               3 // sets the angle for the specified axis
#define SC_MOTION_CONTROL_SET_VALUE_INCREMENTS_RELATIVE 4 // sets a new relative incremental position
#define SC_MOTION_CONTROL_SET_VALUE_POS_RELATIVE        5
#define SC_MOTION_CONTROL_SET_VALUE_ANGLE_RELATIVE      6


/** id-defines for sc_motion_control_ext_get_state() */
#define	SC_MOTION_CONTROL_GET_STATE_MOVING     1 // returns a bitpattern of axises that are moving
//#define SC_MOTION_CONTROL_GET_STATE_READY      2 // returns a bitpattern of axises that are ready
//#define SC_MOTION_CONTROL_GET_STATE_TIME_OUT   3 // returns a bitpattern of axises that are out of time

/** error codes that could be returned */
#define SC_MOTION_CONTROL_OK                                0   // no error occured, the operation could be performed successfully
#define SC_MOTION_CONTROL_ERROR_GENERAL                     -1  // general error, no specific information available
#define SC_MOTION_CONTROL_ERROR_INVALID_ID                  -2  // the id handed over as parameter isn't valid
#define SC_MOTION_CONTROL_ERROR_DEVICE_ERROR                -3  // an device-error occured (device not available/not open/not ready/already used)
#define SC_MOTION_CONTROL_ERROR_DEVICE_WRITE_ERROR          -4  // data could not be sent to the device
#define SC_MOTION_CONTROL_ERROR_DEVICE_READ_ERROR           -5  // data could not be read from the device
#define SC_MOTION_CONTROL_ERROR_ENABLE                      -6  // could not enable device or drive
#define SC_MOTION_CONTROL_ERROR_PARAMETER                   -7  // the parameters have been invalid (e.g. no axis specified)
#define SC_MOTION_CONTROL_ERROR_CONFIG                      -8  // at least one parameter in the settings file is invalid
                                                                // (e.g. axis specified that isn't possible for a drive)
#define SC_MOTION_CONTROL_ERROR_DEVICE_MIN_VAL_EXCEEDED     -9
#define SC_MOTION_CONTROL_ERROR_DEVICE_MAX_VAL_EXCEEDED     -10


#define CORRTABLE_MAXLENGTH     5

#ifndef SC_ENV_USC2_MAIN
struct SC_CorrEntry
{
    bool operator != ( const SC_CorrEntry &other )
    {
        ASSERT( this != &other );
        return mm != other.mm || step != other.step;
    }

    double      mm;             // [ mm ]
    double      step;           // [ stepper motion drive steps ]
};
#endif

#endif // EXTMOTIONGLOBAL_H
