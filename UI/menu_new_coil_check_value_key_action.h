#ifndef __MENU_NEW_COIL_CHECK_VALUE_KEY_ACTION_H
#define __MENU_NEW_COIL_CHECK_VALUE_KEY_ACTION_H
#include "sys.h"

extern u8 menu_new_coil_check_value_key_preaction(u8 pressed_keys, void * key_t);
extern u8 menu_new_coil_check_value_key_trigger_action(void* key_t);
extern u8 menu_new_coil_check_value_key_long_event_action(void * key_t);
extern u8 menu_new_coil_check_value_key_repeat_action(void* key_t);


#endif
