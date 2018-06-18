#ifndef SCI_DLL_FUNCTIONS_H
#define SCI_DLL_FUNCTIONS_H

/*** DLL interface defintitions *****************************************/
#include <Qt>

#ifndef Q_OS_MACOS
#include <windows.h>
#endif

#ifndef _WIN32
typedef char* LPSTR;
typedef const char* LPCSTR;
typedef void* HMODULE;
#endif // !_WIN32

typedef long (*dll_sc_sci_set_card_type)(char *card_type);
typedef long (*dll_sc_sci_init_interface)(void);
typedef long (*dll_sc_sci_init_optic)(void);
typedef void (*dll_sc_sci_exit)(void);
typedef long (*dll_sc_sci_set_working_area)(double XMin, double YMin, double XMax, double YMax);
typedef long (*dll_sc_sci_get_working_area)(double *XMin, double *YMin, double *XMax, double *YMax);
typedef long (*dll_sc_sci_set_field)(double XMin, double YMin, double XMax, double YMax);
typedef long (*dll_sc_sci_get_field)(double *XMin, double *YMin, double *XMax, double *YMax);
typedef long (*dll_sc_sci_set_device_path)(long path_id,LPCSTR Path);
typedef long (*dll_sc_sci_get_device_path)(long path_id,LPSTR Path);
typedef long (*dll_sc_sci_set_device_speed)(long SpeedId,double Value);
typedef long (*dll_sc_sci_move_abs)(double X,double Y);
typedef long (*dll_sc_sci_move_abs_3d)(double X, double Y, double Z);
typedef long (*dll_sc_sci_set_offset)(double OffsetX, double OffsetY);
typedef long (*dll_sc_sci_set_gain)(double GainX, double GainY);
typedef long (*dll_sc_sci_set_home_position)(double HomeX, double HomeY);
typedef long (*dll_sc_sci_set_home_jump)(long Value);
typedef long (*dll_sc_sci_set_move_laser_state)(long Value);
typedef long (*dll_sc_sci_stream_info)(long ident,long i_1,long i_2);
typedef long (*dll_sc_sci_flush)(void);
typedef long (*dll_sc_sci_enable_head_select)(int Enable);
typedef long (*dll_sc_sci_set_current_head)(long HeadId);
typedef long (*dll_sc_sci_set_enable_head)(long Value);
typedef long (*dll_sc_sci_set_head_count)(unsigned long Count);
typedef long (*dll_sc_sci_get_device_operation_mode)(long *Value);
typedef long (*dll_sc_sci_set_device_operation_mode)(long Value);
typedef long (*dll_sc_sci_set_device_enable_flags)(long FlagsId, long Flags);
typedef long (*dll_sc_sci_get_device_enable_flags)(long FlagsId, long *Flags);
typedef long (*dll_sc_sci_get_device_timer)(long TimerId,double *Value);
typedef long (*dll_sc_sci_set_device_timer)(long TimerId,double Value);
typedef long (*dll_sc_sci_get_device_name)(long NameId,LPCSTR Name);
typedef long (*dll_sc_sci_get_device_data)(long DataId, long DataLength, unsigned char *Data);
typedef long (*dll_sc_sci_set_device_data)(long DataId, long DataLength, unsigned char *Data);
typedef long (*dll_sc_sci_set_execute)(long Value);
typedef long (*dll_sc_sci_get_execute)(long *Value);
typedef long (*dll_sc_sci_get_move_laser_state)(long *Value);
typedef long (*dll_sc_sci_set_style_set)(unsigned long Style);
typedef long (*dll_sc_sci_get_style_set)(unsigned long *Style);
typedef long (*dll_sc_sci_set_device_delay_d)(long DelayId, double Value);
typedef long (*dll_sc_sci_get_device_delay_d)(long DelayId, double *Value);
typedef long (*dll_sc_sci_set_device_port_value)(long PortId,long Value);
typedef long (*dll_sc_sci_get_device_port_value)(long PortId,long *Value);
typedef long (*dll_sc_sci_reset_external_trigger_count)(void);
typedef long (*dll_sc_sci_get_external_trigger_count)(long *Count);
typedef long (*dll_sc_sci_max_external_trigger_count)(long Count);
typedef long (*dll_sc_sci_set_continuous_mode)(long Mode);
typedef long (*dll_sc_sci_get_continuous_mode)(long *Mode);
typedef long (*dll_sc_sci_set_external_trigger)(long Value);
typedef long (*dll_sc_sci_get_external_trigger)(long *Value);
typedef long (*dll_sc_sci_set_message_window)(long hwnd);
typedef long (*dll_sc_sci_set_axis_state)(long State);
typedef long (*dll_sc_sci_get_axis_state)(long *State);
typedef long (*dll_sc_sci_load_settings)(LPCSTR file_name);
typedef long (*dll_sc_sci_save_settings)(LPCSTR file_name);
typedef long (*dll_sc_sci_edit_settings)(void);
typedef long (*dll_sc_sci_get_device_misc_value_d)(long MiscId, double *Value);
typedef long (*dll_sc_sci_set_device_misc_value_d)(long MiscId, double Value);
typedef long (*dll_sc_sci_set_rot_angle)(double Angle);
typedef long (*dll_sc_sci_get_rot_angle)(double *Angle);
typedef long (*dll_sc_sci_device_pixel_line)(float *PixelLine, long PixelCount, double dx, double dy, double dz);
typedef long (*dll_sc_sci_set_speed)(double Speed);
typedef long (*dll_sc_sci_get_speed)(double *Speed);
typedef long (*dll_sc_sci_update_device_style)(void);
typedef long (*dll_sc_sci_get_interface_version)(long *Version);
typedef long (*dll_sc_sci_get_debug_mode)(long *Flags);
typedef long (*dll_sc_sci_set_debug_mode)(long Flags);
typedef long (*dll_sc_sci_is_exposure_end)(long *Value);
typedef long (*dll_sc_sci_get_ident_string)(char *Ident);
typedef long (*dll_sc_sci_get_device_map_laser_port)(long *Port);
typedef long (*dll_sc_sci_set_device_map_laser_port)(long Port);

extern dll_sc_sci_set_card_type              sc_sci_set_card_type;
extern dll_sc_sci_init_interface             sc_sci_init_interface;
extern dll_sc_sci_init_optic                 sc_sci_init_optic;
extern dll_sc_sci_exit                       sc_sci_exit;
extern dll_sc_sci_set_working_area           sc_sci_set_working_area;
extern dll_sc_sci_get_working_area           sc_sci_get_working_area;
extern dll_sc_sci_set_field                  sc_sci_set_field;
extern dll_sc_sci_get_field                  sc_sci_get_field;
extern dll_sc_sci_set_device_path            sc_sci_set_device_path;
extern dll_sc_sci_get_device_path            sc_sci_get_device_path;
extern dll_sc_sci_set_device_speed           sc_sci_set_device_speed;
extern dll_sc_sci_move_abs                   sc_sci_move_abs;
extern dll_sc_sci_move_abs_3d                sc_sci_move_abs_3d;
extern dll_sc_sci_set_offset                 sc_sci_set_offset;
extern dll_sc_sci_set_gain                   sc_sci_set_gain;
extern dll_sc_sci_set_home_position          sc_sci_set_home_position;
extern dll_sc_sci_set_home_jump              sc_sci_set_home_jump;
extern dll_sc_sci_set_move_laser_state       sc_sci_set_move_laser_state;
extern dll_sc_sci_stream_info                sc_sci_stream_info;
extern dll_sc_sci_flush                      sc_sci_flush;
extern dll_sc_sci_enable_head_select         sc_sci_enable_head_select;
extern dll_sc_sci_set_current_head           sc_sci_set_current_head;
extern dll_sc_sci_set_enable_head            sc_sci_set_enable_head;
extern dll_sc_sci_set_head_count             sc_sci_set_head_count;
extern dll_sc_sci_set_device_operation_mode  sc_sci_set_device_operation_mode;
extern dll_sc_sci_get_device_operation_mode  sc_sci_get_device_operation_mode;
extern dll_sc_sci_get_device_enable_flags    sc_sci_get_device_enable_flags;
extern dll_sc_sci_set_device_enable_flags    sc_sci_set_device_enable_flags;
extern dll_sc_sci_get_device_timer           sc_sci_get_device_timer;
extern dll_sc_sci_set_device_timer           sc_sci_set_device_timer;
extern dll_sc_sci_get_device_name            sc_sci_get_device_name;
extern dll_sc_sci_get_device_data            sc_sci_get_device_data;
extern dll_sc_sci_set_device_data            sc_sci_set_device_data;
extern dll_sc_sci_set_execute                sc_sci_set_execute;
extern dll_sc_sci_get_execute                sc_sci_get_execute;
extern dll_sc_sci_get_move_laser_state       sc_sci_get_move_laser_state;
extern dll_sc_sci_set_style_set              sc_sci_set_style_set;
extern dll_sc_sci_get_style_set              sc_sci_get_style_set;
extern dll_sc_sci_set_device_delay_d         sc_sci_set_device_delay_d;
extern dll_sc_sci_get_device_delay_d         sc_sci_get_device_delay_d;
extern dll_sc_sci_set_device_port_value      sc_sci_set_device_port_value;
extern dll_sc_sci_get_device_port_value      sc_sci_get_device_port_value;
extern dll_sc_sci_reset_external_trigger_count sc_sci_reset_external_trigger_count;
extern dll_sc_sci_get_external_trigger_count sc_sci_get_external_trigger_count;
extern dll_sc_sci_max_external_trigger_count sc_sci_max_external_trigger_count;
extern dll_sc_sci_set_continuous_mode        sc_sci_set_continuous_mode;
extern dll_sc_sci_get_continuous_mode        sc_sci_get_continuous_mode;
extern dll_sc_sci_set_external_trigger       sc_sci_set_external_trigger;
extern dll_sc_sci_get_external_trigger       sc_sci_get_external_trigger;
extern dll_sc_sci_set_message_window         sc_sci_set_message_window;
extern dll_sc_sci_set_axis_state		     sc_sci_set_axis_state;
extern dll_sc_sci_get_axis_state		     sc_sci_get_axis_state;
extern dll_sc_sci_load_settings              sc_sci_load_settings;
extern dll_sc_sci_save_settings              sc_sci_save_settings;
extern dll_sc_sci_edit_settings              sc_sci_edit_settings;
extern dll_sc_sci_get_device_misc_value_d    sc_sci_get_device_misc_value_d;
extern dll_sc_sci_set_device_misc_value_d    sc_sci_set_device_misc_value_d;
extern dll_sc_sci_set_rot_angle              sc_sci_set_rot_angle;
extern dll_sc_sci_get_rot_angle              sc_sci_get_rot_angle;
extern dll_sc_sci_device_pixel_line          sc_sci_device_pixel_line;
extern dll_sc_sci_set_speed                  sc_sci_set_speed;
extern dll_sc_sci_get_speed                  sc_sci_get_speed;
extern dll_sc_sci_update_device_style        sc_sci_update_device_style;
extern dll_sc_sci_get_interface_version      sc_sci_get_interface_version;
extern dll_sc_sci_get_debug_mode             sc_sci_get_debug_mode;
extern dll_sc_sci_set_debug_mode             sc_sci_set_debug_mode;
extern dll_sc_sci_is_exposure_end            sc_sci_is_exposure_end;
extern dll_sc_sci_get_ident_string           sc_sci_get_ident_string;
extern dll_sc_sci_get_device_map_laser_port  sc_sci_get_device_map_laser_port;
extern dll_sc_sci_set_device_map_laser_port  sc_sci_set_device_map_laser_port;

void sci_load_dll_functions(HMODULE sc_optic_dll_handle);

#endif
