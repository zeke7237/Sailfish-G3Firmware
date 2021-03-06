// DO NOT EDIT THIS FILE
// This file was automatically generated from menu_es.txt by ./locale
// Wed Oct 17 20:52:14 2012

#ifndef MENU_L10N_H_
#define MENU_L10N_H_

#ifdef LOCALIZE
#undef LOCALIZE
#endif

#define LOCALIZE(s) s##_es


// ---------------------------------------------------------
// Menu.cc strings

// Splash screen
const static PROGMEM prog_uchar splash1_es[] = "  Sailfish FW   ";
const static PROGMEM prog_uchar splash2_es[] = " -------------- ";
const static PROGMEM prog_uchar splash3_es[] = "Thing 32084 4.0z";
const static PROGMEM prog_uchar splash4_es[] = " Revision: ____ ";

// User view menu
const static PROGMEM prog_uchar uv_msg_es[] = "Direccion X/Y:";
const static PROGMEM prog_uchar uv_model_es[] = "Vista normal";
const static PROGMEM prog_uchar uv_user_es[] = "Inversa";

// JogMode menu
const static PROGMEM prog_uchar j_jog1_es[] = "Modo: ";
const static PROGMEM prog_uchar j_jog2_es[] = "   Y+         Z+";
const static PROGMEM prog_uchar j_jog3_es[] = "X- V  X+  (modo)";
const static PROGMEM prog_uchar j_jog4_es[] = "   Y-         Z-";
const static PROGMEM prog_uchar j_jog2_user_es[] = "  Y           Z+";
const static PROGMEM prog_uchar j_jog3_user_es[] = "X V X     (modo)";
const static PROGMEM prog_uchar j_jog4_user_es[] = "  Y           Z-";

const static PROGMEM prog_uchar j_distance0_1mm_es[] = ".1 mm";
const static PROGMEM prog_uchar j_distance1mm_es[] = "1 mm";
const static PROGMEM prog_uchar j_distanceCont_es[] = "Continuo";

// ExtruderMode menu
const static PROGMEM prog_uchar e_extrude1_es[] = "Extrusor: ";
const static PROGMEM prog_uchar e_extrude2_es[] = "  (rpm)      Ade";
const static PROGMEM prog_uchar e_extrude3_es[] = "(detener)  (dur)";
const static PROGMEM prog_uchar e_extrude4_es[] = "---/---\001     Rev";
const static PROGMEM prog_uchar e_secs_es[] = "segs";
const static PROGMEM prog_uchar e_blank_es[] = "       ";
const static PROGMEM prog_uchar e_units_es[] = " mm/s ";
const static PROGMEM prog_uchar e_message1_es[] = "Velocidad extr:";

// Extruder Too Cold menu
const static PROGMEM prog_uchar etc_warning_es[] = "Extrusor frio!";
const static PROGMEM prog_uchar etc_cancel_es[] = "Detener";
const static PROGMEM prog_uchar etc_override_es[] = "Ignorar";

// Mood Light Mode menu
const static PROGMEM prog_uchar ml_mood1_es[] = "Modo: ";
const static PROGMEM prog_uchar ml_mood3_1_es[] = "(definir)";
const static PROGMEM prog_uchar ml_msg4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar ml_blank_es[] = "          ";
const static PROGMEM prog_uchar ml_moodNotPresent1_es[] = "No hay control";
const static PROGMEM prog_uchar ml_moodNotPresent2_es[] = "de luces";
const static PROGMEM prog_uchar ml_moodNotPresent3_es[] = "Vea Thingiverse";
const static PROGMEM prog_uchar ml_moodNotPresent4_es[] = "   thing:15347";

// Mood Light Set RGB menu
const static PROGMEM prog_uchar mlsrgb_message1_red_es[] = "Rojo:";
const static PROGMEM prog_uchar mlsrgb_message1_green_es[] = "Verde:";
const static PROGMEM prog_uchar mlsrgb_message1_blue_es[] = "Azul:";
const static PROGMEM prog_uchar mlsrgb_message4_es[] = "Arriba/Abajo  OK";

// Monitor menu
const static PROGMEM prog_uchar mon_extruder_temp_es[] = "Extr:  ---/---\001";
const static PROGMEM prog_uchar mon_platform_temp_es[] = "Plat:  ---/---\001";
const static PROGMEM prog_uchar mon_elapsed_time_es[] = "Tiempo:    0h00m";
const static PROGMEM prog_uchar mon_completed_percent_es[] = "Progreso:    0% ";
const static PROGMEM prog_uchar mon_time_left_es[] = "Restante:  0h00m";
const static PROGMEM prog_uchar mon_time_left_secs_es[] = "segs";
const static PROGMEM prog_uchar mon_time_left_none_es[] = "   n/a ";
const static PROGMEM prog_uchar mon_zpos_es[] = "Altura:         ";
const static PROGMEM prog_uchar mon_speed_es[] = "Vel:            ";
const static PROGMEM prog_uchar mon_zpos_mm_es[] = " mm";
const static PROGMEM prog_uchar mon_filament_es[] = "Material:0.00m  ";
const static PROGMEM prog_uchar mon_copies_es[] = "Copia:          ";
const static PROGMEM prog_uchar mon_of_es[] = " de ";
const static PROGMEM prog_uchar mon_error_es[] = "error!";

// Version menu
const static PROGMEM prog_uchar v_version1_es[] = "Placa madre: _._";
const static PROGMEM prog_uchar v_version2_es[] = "   Extrusor: _._";
const static PROGMEM prog_uchar v_version3_es[] = "   Revision:___";
const static PROGMEM prog_uchar v_version4_es[] = "RAM Libre: ";

// Cancel Build menu
const static PROGMEM prog_uchar cb_choose_es[] = "Opciones:";
const static PROGMEM prog_uchar cb_abort_es[] = "Detener proceso";
const static PROGMEM prog_uchar cb_printAnother_es[] = "Imprimir otro";
const static PROGMEM prog_uchar cb_pauseZ_es[] = "Programar pausa";
const static PROGMEM prog_uchar cb_pause_es[] = "Pausar         ";
const static PROGMEM prog_uchar cb_pauseNoHeat_es[] = "Pausar/enfriar";
const static PROGMEM prog_uchar cb_back_es[] = "Continuar";

// Main menu
const static PROGMEM prog_uchar main_monitor_es[] = "Estado";
const static PROGMEM prog_uchar main_build_es[] = "Imprimir objeto";
const static PROGMEM prog_uchar main_jog_es[] = "Posicionamiento";
const static PROGMEM prog_uchar main_preheat_es[] = "Temperaturas";
const static PROGMEM prog_uchar main_extruder_es[] = "Extrusor";
const static PROGMEM prog_uchar main_homeAxis_es[] = "Ejes al inicio";
const static PROGMEM prog_uchar main_advanceABP_es[] = "Avanzar ABP";
const static PROGMEM prog_uchar main_steppersS_es[] = "Bloqueo motores";
const static PROGMEM prog_uchar main_moodlight_es[] = "Control luces";
const static PROGMEM prog_uchar main_buzzer_es[] = "Alarma sonora";
const static PROGMEM prog_uchar main_buildSettings_es[] = "Opciones";
const static PROGMEM prog_uchar main_profiles_es[] = "Perfiles";
const static PROGMEM prog_uchar main_extruderFan_es[] = "Ventilador";
const static PROGMEM prog_uchar main_calibrate_es[] = "Calibrador";
const static PROGMEM prog_uchar main_homeOffsets_es[] = "Desplazamientos";
const static PROGMEM prog_uchar main_filamentUsed_es[] = "Uso material";
const static PROGMEM prog_uchar main_currentPosition_es[] = "Posicion actual";
const static PROGMEM prog_uchar main_endStops_es[] = "Prueba sensores";
const static PROGMEM prog_uchar main_homingRates_es[] = "Velocidades";
const static PROGMEM prog_uchar main_versions_es[] = "Acerca de";
const static PROGMEM prog_uchar main_eeprom_es[] = "EEPROM";

// Value Set screen
const static PROGMEM prog_uchar vs_message4_es[] = "Arriba/Abajo  OK";

// Preheat menu
const static PROGMEM prog_uchar ph_heat_es[] = "Calentar ";
const static PROGMEM prog_uchar ph_cool_es[] = "Enfriar ";
const static PROGMEM prog_uchar ph_tool0_es[] = "Extr";
const static PROGMEM prog_uchar ph_platform_es[] = "Plat";
const static PROGMEM prog_uchar ph_tool0set_es[] = "Ajustar Extr";
const static PROGMEM prog_uchar ph_platset_es[] = "Ajustar Plat";
const static PROGMEM prog_uchar ph_message1_es[] = "Temp Extrusor:";
const static PROGMEM prog_uchar ph_message2_es[] = "Temp Plataforma:";

// Home axis menu
const static PROGMEM prog_uchar ha_home1_es[] = "Mover al inicio:";
const static PROGMEM prog_uchar ha_home2_es[] = "  Y            Z";
const static PROGMEM prog_uchar ha_home3_es[] = "X   X (sensores)";
const static PROGMEM prog_uchar ha_home4_es[] = "  Y            Z";

// Enable Disable menu
const static PROGMEM prog_uchar ed_disable_es[] = "Desactivado";
const static PROGMEM prog_uchar ed_enable_es[] = "Activado";

// Test End Stops menu
const static PROGMEM prog_uchar tes_test1_es[] = "Prueba sensores:";
const static PROGMEM prog_uchar tes_test2_es[] = "XMin:0    XMax:0";
const static PROGMEM prog_uchar tes_test3_es[] = "YMin:0    YMax:0";
const static PROGMEM prog_uchar tes_test4_es[] = "ZMin:0    ZMax:0";
const static PROGMEM prog_uchar tes_strY_es[] = "1";
const static PROGMEM prog_uchar tes_strN_es[] = "0";

// Pause menu
const static PROGMEM prog_uchar p_waitForCurrentCommand_es[] = "Pausando...     ";
const static PROGMEM prog_uchar p_retractFilament_es[] = "Ajustando...    ";
const static PROGMEM prog_uchar p_clearingBuild_es[] = "Preparando...   ";
const static PROGMEM prog_uchar p_heating_es[] = "Calentando...   ";
const static PROGMEM prog_uchar p_leavingPaused_es[] = "Continuando...  ";
const static PROGMEM prog_uchar p_paused1_es[] = "Pausa (";
const static PROGMEM prog_uchar p_paused2_es[] = "   Y+         Z+";
const static PROGMEM prog_uchar p_paused3_es[] = "X- Rev X+  (Ade)";
const static PROGMEM prog_uchar p_paused4_es[] = "   Y-         Z-";

// Pause @ ZPos menu
const static PROGMEM prog_uchar pz_message1_es[] = "Altura de pausa:";
const static PROGMEM prog_uchar pz_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar pz_mm_es[] = "mm   ";

// Advance ABP menu
const static PROGMEM prog_uchar abp_msg1_es[] = "Avanzar ABP:";
const static PROGMEM prog_uchar abp_msg2_es[] = "pulse y mantenga";
const static PROGMEM prog_uchar abp_msg3_es[] = "       (avanzar)";

// Calibrate menu
const static PROGMEM prog_uchar c_calib1_es[] = "Calibrador:";
const static PROGMEM prog_uchar c_calib2_es[] = "Mueva la";
const static PROGMEM prog_uchar c_calib3_es[] = "plataforma al";
const static PROGMEM prog_uchar c_calib4_es[] = "     (siguiente)";
const static PROGMEM prog_uchar c_calib5_es[] = "centro, con el";
const static PROGMEM prog_uchar c_calib6_es[] = "extrusor tocando";
const static PROGMEM prog_uchar c_calib7_es[] = "suavemente la";
const static PROGMEM prog_uchar c_calib8_es[] = "superficie de la";
const static PROGMEM prog_uchar c_calib9_es[] = "plataforma.";
const static PROGMEM prog_uchar c_homeZ_es[] = "Calibrando Z...";
const static PROGMEM prog_uchar c_homeY_es[] = "Calibrando Y...";
const static PROGMEM prog_uchar c_homeX_es[] = "Calibrando X...";
const static PROGMEM prog_uchar c_done_es[] = "Calibracion";
const static PROGMEM prog_uchar c_regen_es[] = "lista!";
const static PROGMEM prog_uchar c_reset_es[] = "     (reiniciar)";

// Home Offsets menu
const static PROGMEM prog_uchar ho_message1x_es[] = "Limite eje X:";
const static PROGMEM prog_uchar ho_message1y_es[] = "Limite eje Y:";
const static PROGMEM prog_uchar ho_message1z_es[] = "Limite eje Z:";
const static PROGMEM prog_uchar ho_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar ho_mm_es[] = "mm";

// Buzzer Set Repeats menu
const static PROGMEM prog_uchar bsr_message1_es[] = "Alarma sonora:";
const static PROGMEM prog_uchar bsr_message2_es[] = "(0=Apagado)";
const static PROGMEM prog_uchar bsr_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar bsr_times_es[] = " veces ";

// Filament Used Reset menu
const static PROGMEM prog_uchar fur_msg_es[] = "Colocar a cero?";
const static PROGMEM prog_uchar fur_no_es[] = "No";
const static PROGMEM prog_uchar fur_yes_es[] = "Si";

// Filament Used menu
const static PROGMEM prog_uchar fu_lifetime_es[] = "Uso total:    ";
const static PROGMEM prog_uchar fu_trip_es[] = "Uso actual:   ";
const static PROGMEM prog_uchar fu_but_life_es[] = "(actual)(borrar)";
const static PROGMEM prog_uchar fu_but_trip_es[] = "(total) (borrar)";

// Build Settings menu
const static PROGMEM prog_uchar bs_item1_es[] = "Ignorar Temp";
const static PROGMEM prog_uchar bs_item2_es[] = "Copias ABP (SD)";
const static PROGMEM prog_uchar bs_item3_es[] = "Imprimir doble";
const static PROGMEM prog_uchar bs_item4_es[] = "Modo impresion";
const static PROGMEM prog_uchar bs_item5_es[] = "Aceleracion";
// ABP Copies Set menu
const static PROGMEM prog_uchar abp_message1_es[] = "Copias ABP (SD):";
const static PROGMEM prog_uchar abp_message4_es[] = "Arriba/Abajo  OK";

// Acceleration On Off menu
const static PROGMEM prog_uchar aof_msg1_es[] = "Modo de impresion";
const static PROGMEM prog_uchar aof_msg2_es[] = "a utilizar:";
const static PROGMEM prog_uchar aof_off_es[] = "Normal";
const static PROGMEM prog_uchar aof_on_es[] = "Acelerado";

// Profiles menu
const static PROGMEM prog_uchar pro_defaultProfile_es[] = "Perfil ?";

// Profile Sub menu
const static PROGMEM prog_uchar ps_msg1_es[] = "Cargar perfil";
const static PROGMEM prog_uchar ps_msg2_es[] = "Ver detalles";
const static PROGMEM prog_uchar ps_msg3_es[] = "Cambiar nombre";
const static PROGMEM prog_uchar ps_msg4_es[] = "Guardar perfil";

// Profile Change Name menu
const static PROGMEM prog_uchar pcn_message1_es[] = "Nombre perfil:";
const static PROGMEM prog_uchar pcn_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar pcn_blank_es[] = " ";

// Profile Display Settings menu
const static PROGMEM prog_uchar pds_xOffset_es[] = "XOff: ";
const static PROGMEM prog_uchar pds_yOffset_es[] = "YOff: ";
const static PROGMEM prog_uchar pds_zOffset_es[] = "ZOff: ";
const static PROGMEM prog_uchar pds_hbp_es[] = "Plat Temp:  ";
const static PROGMEM prog_uchar pds_tool0_es[] = "Extr Temp:  ";
const static PROGMEM prog_uchar pds_extruder_es[] = "Extr MM/s:  ";

// Current Position menu
const static PROGMEM prog_uchar cp_msg1_es[] = "X:";
const static PROGMEM prog_uchar cp_msg2_es[] = "Y:";
const static PROGMEM prog_uchar cp_msg3_es[] = "Z:";
const static PROGMEM prog_uchar cp_msg4_es[] = "A:";
const static PROGMEM prog_uchar cp_mm_es[] = " mm";

// Unable To Open File menu
const static PROGMEM prog_uchar utof_msg1_es[] = "Error: El nombre";
const static PROGMEM prog_uchar utof_msg2_es[] = "del archivo es";
const static PROGMEM prog_uchar utof_msg3_es[] = "demasiado largo";
const static PROGMEM prog_uchar utof_cont_es[] = "Continuar";

// Accelerated Settings menu
const static PROGMEM prog_uchar as_message1xMaxAccelRate_es[] = "X Max Accel:";
const static PROGMEM prog_uchar as_message1yMaxAccelRate_es[] = "Y Max Accel:";
const static PROGMEM prog_uchar as_message1zMaxAccelRate_es[] = "Z Max Accel:";
const static PROGMEM prog_uchar as_message1aMaxAccelRate_es[] = "Right Max Accel:";
const static PROGMEM prog_uchar as_message1bMaxAccelRate_es[] = "Left Max Accel:";
const static PROGMEM prog_uchar as_message1ExtruderNorm_es[] = "Max Accel:";
const static PROGMEM prog_uchar as_message1ExtruderRetract_es[] = "Max Accel Extdr:";
const static PROGMEM prog_uchar as_message1AdvanceK_es[] = "JKN Advance K:";
const static PROGMEM prog_uchar as_message1AdvanceK2_es[] = "JKN Advance K2:";
const static PROGMEM prog_uchar as_message1ExtruderDeprimeA_es[] = "Extdr.DeprimeR:";
const static PROGMEM prog_uchar as_message1ExtruderDeprimeB_es[] = "Extdr.DeprimeL:";
const static PROGMEM prog_uchar as_message1SlowdownLimit_es[] = "SlowdownEnabled:";
const static PROGMEM prog_uchar as_message1MaxSpeedChangeX_es[] = "MaxSpeedChangeX:";
const static PROGMEM prog_uchar as_message1MaxSpeedChangeY_es[] = "MaxSpeedChangeY:";
const static PROGMEM prog_uchar as_message1MaxSpeedChangeZ_es[] = "MaxSpeedChangeZ:";
const static PROGMEM prog_uchar as_message1MaxSpeedChangeA_es[] = "MaxSpeedChangeR:";
const static PROGMEM prog_uchar as_message1MaxSpeedChangeB_es[] = "MaxSpeedChangeL:";
const static PROGMEM prog_uchar as_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar as_blank_es[] = "    ";

// End Stop Config menu
const static PROGMEM prog_uchar esc_message1_es[] = "EndstopsPresent:";
const static PROGMEM prog_uchar esc_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar esc_blank_es[] = " ";

// Homing Feed Rates menu
const static PROGMEM prog_uchar hfr_message1x_es[] = "Velocidad eje X:";
const static PROGMEM prog_uchar hfr_message1y_es[] = "Velocidad eje Y:";
const static PROGMEM prog_uchar hfr_message1z_es[] = "Velocidad eje Z:";
const static PROGMEM prog_uchar hfr_message4_es[] = "Arriba/Abajo  OK";
const static PROGMEM prog_uchar hfr_mm_es[] = "mm/min ";

// Eeprom menu 1
const static PROGMEM prog_uchar e_message_dump_es[] = "EEPROM -> SD";
const static PROGMEM prog_uchar e_message_restore_es[] = "SD -> EEPROM";
const static PROGMEM prog_uchar e_message_erase_es[] = "Borrar EEPROM";

// Eeprom menu 2
const static PROGMEM prog_uchar eeprom_message_dump_es[] = "Guardando...";
const static PROGMEM prog_uchar eeprom_message_restore_es[] = "Restaurando...";
const static PROGMEM prog_uchar eeprom_message_erase_es[] = "Borrando...";
const static PROGMEM prog_uchar eeprom_message_error_es[] = "Error:";

const static PROGMEM prog_uchar eeprom_msg1_es[] = "Estas opciones";
const static PROGMEM prog_uchar eeprom_msg2_es[] = "deben ser usadas";
const static PROGMEM prog_uchar eeprom_msg3_es[] = "con cuidado.";
const static PROGMEM prog_uchar eeprom_msg4_es[] = "Presione (Y+)";
const static PROGMEM prog_uchar eeprom_msg5_es[] = "Fallo al leer!";
const static PROGMEM prog_uchar eeprom_msg6_es[] = "La EEPROM puede";
const static PROGMEM prog_uchar eeprom_msg7_es[] = "estar corrupta";
const static PROGMEM prog_uchar eeprom_msg8_es[] = "No hay archivo!";
const static PROGMEM prog_uchar eeprom_msg9_es[] = "* Pulse ";
const static PROGMEM prog_uchar eeprom_msg10_es[] = " veces!";
const static PROGMEM prog_uchar eeprom_msg11_es[] = "Escritura fallo!";
const static PROGMEM prog_uchar eeprom_msg12_es[] = "Archivo existe!";
const static PROGMEM prog_uchar eeprom_blank_es[] = "                ";

// Steppers menu
const static PROGMEM prog_uchar step_msg1_es[] = "Bloquear motores:";
const static PROGMEM prog_uchar step_msg2_es[] = "";

// Extruder Fan menu
const static PROGMEM prog_uchar ext_msg1_es[] = "Ventilador";
const static PROGMEM prog_uchar ext_msg2_es[] = "del extrusor:";

// Override GCode Temp menu
const static PROGMEM prog_uchar ogct_msg1_es[] = "Ignorar temps";
const static PROGMEM prog_uchar ogct_msg2_es[] = "del GCode:";

// Ditto Print menu
const static PROGMEM prog_uchar dp_msg1_es[] = "Ambos extrusores";
const static PROGMEM prog_uchar dp_msg2_es[] = "imprimen igual:";

// ---------------------------------------------------------
// MoodLightController.cc strings

const static PROGMEM prog_uchar mood_script0_es[] = "(Estado)";
const static PROGMEM prog_uchar mood_script1_es[] = "Personal";
const static PROGMEM prog_uchar mood_script2_es[] = "Apagado";
const static PROGMEM prog_uchar mood_script3_es[] = "Blanco";
const static PROGMEM prog_uchar mood_script4_es[] = "Rojo";
const static PROGMEM prog_uchar mood_script5_es[] = "Verde";
const static PROGMEM prog_uchar mood_script6_es[] = "Azul";
const static PROGMEM prog_uchar mood_script7_es[] = "Cian";
const static PROGMEM prog_uchar mood_script8_es[] = "Purpura";
const static PROGMEM prog_uchar mood_script9_es[] = "Amarillo";
const static PROGMEM prog_uchar mood_script10_es[] = "Purpura";
const static PROGMEM prog_uchar mood_script11_es[] = "Naranjo";
const static PROGMEM prog_uchar mood_script12_es[] = "Almendra";
const static PROGMEM prog_uchar mood_script13_es[] = "Durazno";
const static PROGMEM prog_uchar mood_script14_es[] = "Menta";
const static PROGMEM prog_uchar mood_script15_es[] = "Azul suave";
const static PROGMEM prog_uchar mood_script16_es[] = "Lavanda";
const static PROGMEM prog_uchar mood_script17_es[] = "Rosa suave";
const static PROGMEM prog_uchar mood_script18_es[] = "Pizarra";
const static PROGMEM prog_uchar mood_script19_es[] = "Gris";
const static PROGMEM prog_uchar mood_script20_es[] = "Gris suave";
const static PROGMEM prog_uchar mood_script21_es[] = "Azul noche";
const static PROGMEM prog_uchar mood_script22_es[] = "Azulado";
const static PROGMEM prog_uchar mood_script23_es[] = "Oliva";
const static PROGMEM prog_uchar mood_script24_es[] = "Bosque";
const static PROGMEM prog_uchar mood_script25_es[] = "Oro";
const static PROGMEM prog_uchar mood_script26_es[] = "Rosado";
const static PROGMEM prog_uchar mood_script27_es[] = "Lino";
const static PROGMEM prog_uchar mood_script100_es[] = "WRGB*";
const static PROGMEM prog_uchar mood_script101_es[] = "RGB*";
const static PROGMEM prog_uchar mood_script102_es[] = "Blanco*";
const static PROGMEM prog_uchar mood_script103_es[] = "Rojo*";
const static PROGMEM prog_uchar mood_script104_es[] = "Verde*";
const static PROGMEM prog_uchar mood_script105_es[] = "Azul*";
const static PROGMEM prog_uchar mood_script106_es[] = "Cian*";
const static PROGMEM prog_uchar mood_script107_es[] = "Magenta*";
const static PROGMEM prog_uchar mood_script108_es[] = "Amarillo*";
const static PROGMEM prog_uchar mood_script109_es[] = "Negro";
const static PROGMEM prog_uchar mood_script110_es[] = "Tonos*";
const static PROGMEM prog_uchar mood_script111_es[] = "Animo*";
const static PROGMEM prog_uchar mood_script112_es[] = "Velas*";
const static PROGMEM prog_uchar mood_script113_es[] = "Agua*";
const static PROGMEM prog_uchar mood_script114_es[] = "Neon*";
const static PROGMEM prog_uchar mood_script115_es[] = "Estacione*";
const static PROGMEM prog_uchar mood_script116_es[] = "Tormenta*";
const static PROGMEM prog_uchar mood_script117_es[] = " ";
const static PROGMEM prog_uchar mood_script118_es[] = "S.O.S.*";
const static PROGMEM prog_uchar mood_script_unknown_es[] = "DESCONOCIDO";

// ---------------------------------------------------------
// LiquidCrystral.cc strings

const static PROGMEM prog_uchar lc_overflow_es[] = "overflow";

#endif // MENU_L10N_H_
