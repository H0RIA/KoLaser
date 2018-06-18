#include "sci_dll_functions.h"

#ifndef Q_OS_MACOS
#include "Windows.h"
#endif

#ifdef Q_OS_MACOS
void* GetProcAddress( HMODULE,LPCSTR)
{
    // TODO -> call only for windows

}
#endif
/*** DLL interface defintitions *****************************************/

dll_sc_sci_set_card_type              sc_sci_set_card_type;
dll_sc_sci_init_interface             sc_sci_init_interface;
dll_sc_sci_init_optic                 sc_sci_init_optic;
dll_sc_sci_exit                       sc_sci_exit;
dll_sc_sci_set_working_area           sc_sci_set_working_area;
dll_sc_sci_get_working_area           sc_sci_get_working_area;
dll_sc_sci_set_field                  sc_sci_set_field;
dll_sc_sci_get_field                  sc_sci_get_field;
dll_sc_sci_set_device_path            sc_sci_set_device_path;
dll_sc_sci_get_device_path            sc_sci_get_device_path;
dll_sc_sci_set_device_speed           sc_sci_set_device_speed;
dll_sc_sci_move_abs                   sc_sci_move_abs;
dll_sc_sci_move_abs_3d                sc_sci_move_abs_3d;
dll_sc_sci_set_offset                 sc_sci_set_offset;
dll_sc_sci_set_gain                   sc_sci_set_gain;
dll_sc_sci_set_home_position          sc_sci_set_home_position;
dll_sc_sci_set_home_jump              sc_sci_set_home_jump;
dll_sc_sci_set_move_laser_state       sc_sci_set_move_laser_state;
dll_sc_sci_stream_info                sc_sci_stream_info;
dll_sc_sci_flush                      sc_sci_flush;
dll_sc_sci_enable_head_select         sc_sci_enable_head_select;
dll_sc_sci_set_current_head           sc_sci_set_current_head;
dll_sc_sci_set_enable_head            sc_sci_set_enable_head;
dll_sc_sci_set_head_count             sc_sci_set_head_count;
dll_sc_sci_set_device_operation_mode  sc_sci_set_device_operation_mode;
dll_sc_sci_get_device_operation_mode  sc_sci_get_device_operation_mode;
dll_sc_sci_get_device_enable_flags    sc_sci_get_device_enable_flags;
dll_sc_sci_set_device_enable_flags    sc_sci_set_device_enable_flags;
dll_sc_sci_get_device_timer           sc_sci_get_device_timer;
dll_sc_sci_set_device_timer           sc_sci_set_device_timer;
dll_sc_sci_get_device_name            sc_sci_get_device_name;
dll_sc_sci_get_device_data            sc_sci_get_device_data;
dll_sc_sci_set_device_data            sc_sci_set_device_data;
dll_sc_sci_set_execute                sc_sci_set_execute;
dll_sc_sci_get_execute                sc_sci_get_execute;
dll_sc_sci_get_move_laser_state       sc_sci_get_move_laser_state;
dll_sc_sci_set_style_set              sc_sci_set_style_set;
dll_sc_sci_get_style_set              sc_sci_get_style_set;
dll_sc_sci_set_device_delay_d         sc_sci_set_device_delay_d;
dll_sc_sci_get_device_delay_d         sc_sci_get_device_delay_d;
dll_sc_sci_set_device_port_value      sc_sci_set_device_port_value;
dll_sc_sci_get_device_port_value      sc_sci_get_device_port_value;
dll_sc_sci_reset_external_trigger_count sc_sci_reset_external_trigger_count;
dll_sc_sci_get_external_trigger_count sc_sci_get_external_trigger_count;
dll_sc_sci_max_external_trigger_count sc_sci_max_external_trigger_count;
dll_sc_sci_set_continuous_mode        sc_sci_set_continuous_mode;
dll_sc_sci_get_continuous_mode        sc_sci_get_continuous_mode;
dll_sc_sci_set_external_trigger       sc_sci_set_external_trigger;
dll_sc_sci_get_external_trigger       sc_sci_get_external_trigger;
dll_sc_sci_set_message_window         sc_sci_set_message_window;
dll_sc_sci_set_axis_state		      sc_sci_set_axis_state;
dll_sc_sci_get_axis_state			  sc_sci_get_axis_state;
dll_sc_sci_load_settings              sc_sci_load_settings;
dll_sc_sci_save_settings              sc_sci_save_settings;
dll_sc_sci_edit_settings              sc_sci_edit_settings;
dll_sc_sci_get_device_misc_value_d    sc_sci_get_device_misc_value_d;
dll_sc_sci_set_device_misc_value_d    sc_sci_set_device_misc_value_d;
dll_sc_sci_set_rot_angle              sc_sci_set_rot_angle;
dll_sc_sci_get_rot_angle              sc_sci_get_rot_angle;
dll_sc_sci_device_pixel_line          sc_sci_device_pixel_line;
dll_sc_sci_set_speed                  sc_sci_set_speed;
dll_sc_sci_get_speed                  sc_sci_get_speed;
dll_sc_sci_update_device_style        sc_sci_update_device_style;
dll_sc_sci_get_interface_version      sc_sci_get_interface_version;
dll_sc_sci_get_debug_mode             sc_sci_get_debug_mode;
dll_sc_sci_set_debug_mode             sc_sci_set_debug_mode;
dll_sc_sci_is_exposure_end            sc_sci_is_exposure_end;
dll_sc_sci_get_ident_string           sc_sci_get_ident_string;
dll_sc_sci_get_device_map_laser_port  sc_sci_get_device_map_laser_port;
dll_sc_sci_set_device_map_laser_port  sc_sci_set_device_map_laser_port;

/************************************************************************/

void sci_load_dll_functions(HMODULE sc_optic_dll_handle)
{
    sc_sci_set_card_type	 =		  (dll_sc_sci_set_card_type)			 GetProcAddress(sc_optic_dll_handle,"ScSCISetCardType");
    sc_sci_init_interface    =        (dll_sc_sci_init_interface)            GetProcAddress(sc_optic_dll_handle,"ScSCIInitInterface");
    sc_sci_init_optic        =        (dll_sc_sci_init_optic)                GetProcAddress(sc_optic_dll_handle,"ScSCIInitOptic");
    sc_sci_exit  =                    (dll_sc_sci_exit)                      GetProcAddress(sc_optic_dll_handle,"ScSCIExit");
    sc_sci_set_working_area=          (dll_sc_sci_set_working_area)          GetProcAddress(sc_optic_dll_handle,"ScSCISetWorkingArea");
    sc_sci_get_working_area=          (dll_sc_sci_get_working_area)          GetProcAddress(sc_optic_dll_handle,"ScSCIGetWorkingArea");
    sc_sci_set_field=                 (dll_sc_sci_set_field)                 GetProcAddress(sc_optic_dll_handle,"ScSCISetField");
    sc_sci_get_field=                 (dll_sc_sci_get_field)                 GetProcAddress(sc_optic_dll_handle,"ScSCIGetField");
    sc_sci_set_device_path=           (dll_sc_sci_set_device_path)           GetProcAddress(sc_optic_dll_handle,"ScSCISetDevicePath");
    sc_sci_get_device_path=           (dll_sc_sci_get_device_path)           GetProcAddress(sc_optic_dll_handle,"ScSCIGetDevicePath");
    sc_sci_set_device_speed=          (dll_sc_sci_set_device_speed)          GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceSpeed");
    sc_sci_move_abs=                  (dll_sc_sci_move_abs)                  GetProcAddress(sc_optic_dll_handle,"ScSCIMoveAbs");
    sc_sci_move_abs_3d =              (dll_sc_sci_move_abs_3d)               GetProcAddress(sc_optic_dll_handle,"ScSCIMoveAbs3D");
    sc_sci_set_offset=                (dll_sc_sci_set_offset)                GetProcAddress(sc_optic_dll_handle,"ScSCISetOffset");
    sc_sci_set_gain=                  (dll_sc_sci_set_gain)                  GetProcAddress(sc_optic_dll_handle,"ScSCISetGain");
    sc_sci_set_home_position=         (dll_sc_sci_set_home_position)         GetProcAddress(sc_optic_dll_handle,"ScSCISetHomePosition");
    sc_sci_set_home_jump=             (dll_sc_sci_set_home_jump)             GetProcAddress(sc_optic_dll_handle,"ScSCISetHomeJump");
    sc_sci_set_move_laser_state=      (dll_sc_sci_set_move_laser_state)      GetProcAddress(sc_optic_dll_handle,"ScSCISetMoveLaserState");
    sc_sci_stream_info         =      (dll_sc_sci_stream_info)               GetProcAddress(sc_optic_dll_handle,"ScSCIStreamInfo");
    sc_sci_flush               =      (dll_sc_sci_flush)                     GetProcAddress(sc_optic_dll_handle,"ScSCIFlush");
    sc_sci_enable_head_select  =      (dll_sc_sci_enable_head_select)        GetProcAddress(sc_optic_dll_handle,"ScSCIEnableHeadSelect");
    sc_sci_set_current_head=          (dll_sc_sci_set_current_head)          GetProcAddress(sc_optic_dll_handle,"ScSCISetCurrentHead");
    sc_sci_set_enable_head=           (dll_sc_sci_set_enable_head)           GetProcAddress(sc_optic_dll_handle,"ScSCISetEnableHead");
    sc_sci_set_head_count=            (dll_sc_sci_set_head_count)            GetProcAddress(sc_optic_dll_handle,"ScSCISetHeadCount");
    sc_sci_set_device_operation_mode= (dll_sc_sci_set_device_operation_mode) GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceOperationMode");
    sc_sci_get_device_operation_mode= (dll_sc_sci_get_device_operation_mode) GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceOperationMode");
    sc_sci_get_device_enable_flags=   (dll_sc_sci_get_device_enable_flags)   GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceEnableFlags");
    sc_sci_set_device_enable_flags=   (dll_sc_sci_set_device_enable_flags)   GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceEnableFlags");
    sc_sci_get_device_timer=          (dll_sc_sci_get_device_timer)          GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceTimer");
    sc_sci_set_device_timer=          (dll_sc_sci_set_device_timer)          GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceTimer");
    sc_sci_get_device_name=           (dll_sc_sci_get_device_name)           GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceName");
    sc_sci_get_device_data=           (dll_sc_sci_get_device_data)           GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceData");
    sc_sci_set_device_data=           (dll_sc_sci_set_device_data)           GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceData");
    sc_sci_set_execute=               (dll_sc_sci_set_execute)               GetProcAddress(sc_optic_dll_handle,"ScSCISetExecute");
    sc_sci_get_execute=               (dll_sc_sci_get_execute)               GetProcAddress(sc_optic_dll_handle,"ScSCIGetExecute");
    sc_sci_get_move_laser_state=      (dll_sc_sci_get_move_laser_state)      GetProcAddress(sc_optic_dll_handle,"ScSCIGetMoveLaserState");
    sc_sci_set_style_set=             (dll_sc_sci_set_style_set)             GetProcAddress(sc_optic_dll_handle,"ScSCISetStyleSet");
    sc_sci_get_style_set=             (dll_sc_sci_get_style_set)             GetProcAddress(sc_optic_dll_handle,"ScSCIGetStyleSet");
    sc_sci_set_device_delay_d=        (dll_sc_sci_set_device_delay_d)        GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceDelayD");
    sc_sci_get_device_delay_d=        (dll_sc_sci_get_device_delay_d)        GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceDelayD");
    sc_sci_set_device_port_value=     (dll_sc_sci_set_device_port_value)     GetProcAddress(sc_optic_dll_handle,"ScSCISetDevicePortValue");
    sc_sci_get_device_port_value=     (dll_sc_sci_get_device_port_value)     GetProcAddress(sc_optic_dll_handle,"ScSCIGetDevicePortValue");
    sc_sci_reset_external_trigger_count=(dll_sc_sci_reset_external_trigger_count)GetProcAddress(sc_optic_dll_handle,"ScSCIResetExternalTriggerCount");
    sc_sci_get_external_trigger_count=(dll_sc_sci_get_external_trigger_count)GetProcAddress(sc_optic_dll_handle,"ScSCIGetExternalTriggerCount");
    sc_sci_max_external_trigger_count=(dll_sc_sci_max_external_trigger_count)GetProcAddress(sc_optic_dll_handle,"ScSCIMaxExternalTriggerCount");
    sc_sci_set_continuous_mode=       (dll_sc_sci_set_continuous_mode)       GetProcAddress(sc_optic_dll_handle,"ScSCISetContinuousMode");
    sc_sci_get_continuous_mode=       (dll_sc_sci_get_continuous_mode)       GetProcAddress(sc_optic_dll_handle,"ScSCIGetContinuousMode");
    sc_sci_set_external_trigger=      (dll_sc_sci_set_external_trigger)      GetProcAddress(sc_optic_dll_handle,"ScSCISetExternalTrigger");
    sc_sci_get_external_trigger=      (dll_sc_sci_get_external_trigger)      GetProcAddress(sc_optic_dll_handle,"ScSCIGetExternalTrigger");
    sc_sci_set_message_window=        (dll_sc_sci_set_message_window)        GetProcAddress(sc_optic_dll_handle,"ScSCISetMessageWindow");
    sc_sci_set_axis_state=			  (dll_sc_sci_set_axis_state)			 GetProcAddress(sc_optic_dll_handle,"ScSCISetAxisState");
    sc_sci_get_axis_state=			  (dll_sc_sci_get_axis_state)			 GetProcAddress(sc_optic_dll_handle,"ScSCIGetAxisState");
    sc_sci_load_settings=             (dll_sc_sci_load_settings)             GetProcAddress(sc_optic_dll_handle,"ScSCILoadSettings");
    sc_sci_save_settings=             (dll_sc_sci_save_settings)             GetProcAddress(sc_optic_dll_handle,"ScSCISaveSettings");
    sc_sci_edit_settings=             (dll_sc_sci_edit_settings)             GetProcAddress(sc_optic_dll_handle,"ScSCIEditSettings");
    sc_sci_get_device_misc_value_d=   (dll_sc_sci_get_device_misc_value_d)   GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceMiscValueD");
    sc_sci_set_device_misc_value_d=   (dll_sc_sci_set_device_misc_value_d)   GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceMiscValueD");
    sc_sci_set_rot_angle=             (dll_sc_sci_set_rot_angle)             GetProcAddress(sc_optic_dll_handle,"ScSCISetRotAngle");
    sc_sci_get_rot_angle=             (dll_sc_sci_get_rot_angle)             GetProcAddress(sc_optic_dll_handle,"ScSCIGetRotAngle");
    sc_sci_device_pixel_line=         (dll_sc_sci_device_pixel_line)         GetProcAddress(sc_optic_dll_handle,"ScSCIDevicePixelLine");
    sc_sci_set_speed=                 (dll_sc_sci_set_speed)                 GetProcAddress(sc_optic_dll_handle,"ScSCISetSpeed");
    sc_sci_get_speed=                 (dll_sc_sci_get_speed)                 GetProcAddress(sc_optic_dll_handle,"ScSCIGetSpeed");
    sc_sci_update_device_style=       (dll_sc_sci_update_device_style)       GetProcAddress(sc_optic_dll_handle,"ScSCIUpdateDeviceStyle");
    sc_sci_get_interface_version=     (dll_sc_sci_get_interface_version)     GetProcAddress(sc_optic_dll_handle,"ScSCIGetInterfaceVersion");
    sc_sci_get_debug_mode=            (dll_sc_sci_get_debug_mode)            GetProcAddress(sc_optic_dll_handle,"ScSCIGetDebugMode");
    sc_sci_set_debug_mode=            (dll_sc_sci_set_debug_mode)            GetProcAddress(sc_optic_dll_handle,"ScSCISetDebugMode");
    sc_sci_is_exposure_end=           (dll_sc_sci_is_exposure_end)           GetProcAddress(sc_optic_dll_handle,"ScSCIIsExposureEnd");
    sc_sci_get_ident_string=          (dll_sc_sci_get_ident_string)          GetProcAddress(sc_optic_dll_handle,"ScSCIGetIdentString");
    sc_sci_get_device_map_laser_port= (dll_sc_sci_get_device_map_laser_port) GetProcAddress(sc_optic_dll_handle,"ScSCIGetDeviceMapLaserPort");
    sc_sci_set_device_map_laser_port= (dll_sc_sci_set_device_map_laser_port) GetProcAddress(sc_optic_dll_handle,"ScSCISetDeviceMapLaserPort");
}
