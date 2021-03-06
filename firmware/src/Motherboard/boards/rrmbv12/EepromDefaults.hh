//
// MBI Firmware Defaults
//
#define EEPROM_DEFAULT_AXIS_INVERSION			(uint8_t)((1<<1) | (1<<7))	// Y axis = 1
#define EEPROM_DEFAULT_ENDSTOP_INVERSION		(uint8_t)0b00011111	// All endstops inverted

#define EEPROM_DEFAULT_MACHINE_NAME			0			// name is null

// Not strictly MBI defaults, but we but them here as we never want these values to be overwritten
#define EEPROM_DEFAULT_FILAMENT_LIFETIME		0
#define EEPROM_DEFAULT_FILAMENT_TRIP			0




//
// Jetty Firmware Defaults
//
#define EEPROM_DEFAULT_JOG_MODE_SETTINGS                0

// The next 4 entries, aren't really the defaults, but they're used in EEPROM_DEFAULT_STEPS_PER_MM_?, so we include
// them here so we don't miss them if we change scaling
#define STEPS_PER_MM_PADDING     5
#define STEPS_PER_MM_PRECISION   10
#define STEPS_PER_MM_LOWER_LIMIT 10000000
#define STEPS_PER_MM_UPPER_LIMIT 200000000000000

// These defaults are appropriate for a Cupcake with the original stepper driver and
// a Mk7, Mk6+, or Mk5+Mk6 upgrade

#define EEPROM_DEFAULT_STEPS_PER_MM_X			117674630000	//  11.767463
#define EEPROM_DEFAULT_STEPS_PER_MM_Y			117674630000	//  11.767463
#define EEPROM_DEFAULT_STEPS_PER_MM_Z		       3200000000000	// 320.0
#define EEPROM_DEFAULT_STEPS_PER_MM_A			502354788069	//  50.2354788069
#define EEPROM_DEFAULT_STEPS_PER_MM_B			502354788069	//  50.2354788069

#define EEPROM_DEFAULT_ACCELERATION_ON			0x01

#define EEPROM_DEFAULT_ACCEL_MAX_FEEDRATE_X		(100*60)
#define EEPROM_DEFAULT_ACCEL_MAX_FEEDRATE_Y		(100*60)
#define EEPROM_DEFAULT_ACCEL_MAX_FEEDRATE_Z		(8*60)
#define EEPROM_DEFAULT_ACCEL_MAX_FEEDRATE_A		(100*60)
#define EEPROM_DEFAULT_ACCEL_MAX_FEEDRATE_B		(100*60)

#define EEPROM_DEFAULT_ACCEL_MAX_ACCELERATION_X		500
#define EEPROM_DEFAULT_ACCEL_MAX_ACCELERATION_Y		500
#define EEPROM_DEFAULT_ACCEL_MAX_ACCELERATION_Z		100
#define EEPROM_DEFAULT_ACCEL_MAX_ACCELERATION_A		10000
#define EEPROM_DEFAULT_ACCEL_MAX_ACCELERATION_B		10000

#define EEPROM_DEFAULT_ACCEL_MAX_EXTRUDER_NORM		2000
#define EEPROM_DEFAULT_ACCEL_MAX_EXTRUDER_RETRACT	4000

#define EEPROM_DEFAULT_ACCEL_ADVANCE_K			850		// 0.00850 Multiplied by 100000
#define EEPROM_DEFAULT_ACCEL_ADVANCE_K2			900		// 0.00900 Multiplied by 100000

#define EEPROM_DEFAULT_ACCEL_EXTRUDER_DEPRIME_A		20		// Steps
#define EEPROM_DEFAULT_ACCEL_EXTRUDER_DEPRIME_B		20		// Steps

#define EEPROM_DEFAULT_ACCEL_SLOWDOWN_FLAG		1

#define EEPROM_DEFAULT_ACCEL_MAX_SPEED_CHANGE_X		300		// mm/s Multiplied by 10
#define EEPROM_DEFAULT_ACCEL_MAX_SPEED_CHANGE_Y		300		// mm/s Multiplied by 10
#define EEPROM_DEFAULT_ACCEL_MAX_SPEED_CHANGE_Z		25		// mm/s Multiplied by 10
#define EEPROM_DEFAULT_ACCEL_MAX_SPEED_CHANGE_A		300		// mm/s Multiplied by 10
#define EEPROM_DEFAULT_ACCEL_MAX_SPEED_CHANGE_B		300		// mm/s Multiplied by 10

#define EEPROM_DEFAULT_DITTO_PRINT_ENABLED		0

#define EEPROM_DEFAULT_AXIS_LENGTH			1000		//Steps

#define EEPROM_DEFAULT_TOOL_COUNT			1

#define EEPROM_DEFAULT_EXTRUDER_HOLD			0
