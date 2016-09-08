#pragma once


enum MGType {
  MG_KEY_TRANS,
  MG_REL_TRANS,
  MG_AXIS_TRANS,
  MG_TRANS,
  MG_ADVANCED_TRANS,
  MG_KEY,
  MG_AXIS,
  MG_REL,
  MG_STRING,
  MG_INT,
  MG_FLOAT, //Not implemented...
  MG_BOOL,
  MG_SLOT,
  MG_KEYBOARD_SLOT,
  MG_NULL,
};

enum event_state { 
  EVENT_ACTIVE, //Device can currently send this event.
  EVENT_INACTIVE, //Device might be able to send this event, but not right now.
  EVENT_DISABLED, //Device will NEVER be able to send this event.
  //This last one is because all events of a manager are inherited, but a device might not support all.
};

enum entry_type {
  NO_ENTRY,
  DEV_OPTION,
  DEV_KEY,
  DEV_AXIS,
  DEV_REL,
};

enum device_claim {
  DEVICE_CLAIMED,
  DEVICE_UNCLAIMED,
};

enum mg_result_codes {
  SUCCESS = 0,
  FAILURE = -1,
};
  
