#include <stdint.h>


#define UPDATE_STEAM_EVENT "update_steam"
#define UPDATE_STEAM_FMT "1u1 percent"
typedef struct {
	uint8_t 		percent;
} update_steam_event_t;

#define UPDATE_TEMPERATURE_EVENT "update_temperature"
#define UPDATE_TEMPERATURE_FMT "2u1 usertemp"
typedef struct {
	uint16_t 		usertemp;
} update_temperature_event_t;

#define UPDATE_TIME_EVENT "update_time"
#define UPDATE_TIME_FMT "4u1 timer"
typedef struct {
	uint32_t 		timer;
} update_time_event_t;

#define UPDATE_FANSPEED_EVENT "update_fanspeed"
#define UPDATE_FANSPEED_FMT "1u1 percent"
typedef struct {
	uint8_t 		percent;
} update_fanspeed_event_t;

#define UPDATE_TEMP_PROBE_EVENT "update_temprobe"
#define UPDATE_TEMP_PROBE_FMT "1u1 usertemp"
typedef struct {
	uint8_t 		usertemp;
} update_temp_probe_event_t;

#define UPDATE_TEMP_DELTA_EVENT "update_tempdelta"
#define UPDATE_TEMP_DELTA_FMT "2u1 userdelta"
typedef struct {
	uint16_t 		userdelta;
} update_temp_delta_event_t;

#define UPDATE_WASH_CYCLE_EVENT "update_washcycle"
#define UPDATE_WASH_CYCLE_FMT "1u1 usercycle"
typedef struct {
	uint8_t 		usercycle;
} update_wash_cycle_event_t;

#define TOGGLE_RELAY_SERVICE_EVENT "toggle_relay"
#define TOGGLE_RELAY_SERVICE_FMT "1u1 relay"
typedef struct {
	uint8_t 		relay;
} toggle_relay_service_event_t;

#define SET_WARNING_STATE_EVENT "set_warning"
#define SET_WARNING_STATE_FMT "1u1 warningcode"
typedef struct {
	uint8_t 		warningcode;
} set_warning_state_event_t;


/*
MODE_QUICK_POLISH_EVENT  	"mode_washing1"
MODE_FULL_POLISH_EVENT   	"mode_washing2"
MODE_CLEAN_INTER_EVENT  	"mode_washing3"
MODE_CLEAN_QUICK_EVENT   	"mode_washing4"
MODE_CLEAN_ECO_EVENT   		"mode_washing5"
MODE_CLEAN_MID_EVENT   		"mode_washing6"
MODE_CLEAN_FULL_EVENT   	"mode_washing7"
*/

#define ENABLE_ENCODER_EVENT "enable_encoder"
#define ENABLE_ENCODER_FMT "1u1 parameter"
typedef struct {
	uint8_t 		parameter;
} enable_encoder_event_t;

//ENABLE ENCODER FOR RECIPE CREATION
#define ENABLE_ENCODER_OPT_EVENT "enable_encoder_options"
#define ENABLE_ENCODER_OPT_FMT "4u1 minvalue 4u1 maxvalue 4u1 nowvalue 1u1 stepvalue 1u1 parameter"
typedef struct {
	uint32_t 		minvalue;
	uint32_t		maxvalue;
	uint32_t		nowvalue;
	uint8_t			stepvalue;
	uint8_t			parameter;
} enable_encoder_opt_event_t;//ENABLE ENCODER FOR RECIPE CREATION

//MAIN DATA RECIPE FOR AUTOMATIC MODE
#define RECIPE_INFO_EVENT "update_recipeinfo"
#define RECIPE_INFO_FMT "1u1 totalsteps 1u1 actualstep 1u1 typestep 1u1 currlevel"
typedef struct {
	uint8_t 		totalsteps;
	uint8_t			actualstep;
	uint8_t			typestep;
	uint8_t			currlevel;
} recipe_info_event_t;

//MAIN OVEN PARAMETERS AND STATUS STRUCTURE 
#define COMBIOVEN_UPDATE_EVENT "combioven_update"
#define COMBIOVEN_UPDATE_FMT "4u1 target_time 4u1 encoder_data 2u1 target_temperature 2u1 current_probe 2u1 current_humidity 2u1 current_temperature 1u1 target_steam 1u1 target_fanspeed 1u1 target_probe 1u1 toggle_preheat 1u1 toggle_cooling 1u1 toggle_state 1u1 toggle_probe 1u1 toggle_looptime 1u1 encoder_parameter"
typedef struct {
	uint32_t		target_time;
	uint32_t		encoder_data;
	uint16_t 		target_temperature;
	uint16_t		current_probe;
	uint16_t		current_humidity;
	uint16_t		current_temperature;
	uint8_t 		target_steam;
	uint8_t			target_fanspeed;
	uint8_t			target_probe;		
	uint8_t 		toggle_preheat;
	uint8_t 		toggle_cooling;
	uint8_t			toggle_state;
	uint8_t			toggle_probe;
	uint8_t 		toggle_looptime;
	uint8_t 		encoder_parameter;
} combioven_update_event_t;


//MAIN RELAY BOARD CONTROL AND STATUS STRUCTURE
/// @brief structure to save incoming data from Power PCB
typedef struct {
	uint32_t		hitemp_timeout;
	uint16_t 		current_cam_temperature;
	uint16_t		current_probe_temperature;
	uint16_t		current_humidity;
	uint16_t		delta_temperature;
	uint8_t			encoder_parameter;	
	uint8_t			encoder_activated;
	uint8_t 		door_status;
	uint8_t			washing_mode;
	uint8_t			washing_phase;
	uint8_t			completed_step;
	uint8_t			last_step;
	uint8_t			warning_code;
	uint8_t			toggle_relay;
} relayboard_update_event_t;


typedef enum{
	COMBI_MODE_STOP,
	COMBI_MODE_CONVECTION,
	COMBI_MODE_COMBINED,
	COMBI_MODE_STEAM,
	COMBI_MODE_PREHEAT,
	COMBI_MODE_LOAD,
	COMBI_MODE_COOLING,
	COMBI_MODE_WASHING,
}combi_mode_t;


//EVENTS INCOMING FRONT-END CRANK SOFTWARE
#define MODE_CONVECTION_EVENT   "mode_convection"
#define MODE_COMBINED_EVENT   	"mode_combined"
#define MODE_STEAM_EVENT   		"mode_steam"
#define MODE_LOAD_EVENT   		"mode_load"
#define TOGGLE_MANUAL_EVENT 	"toggle_manual"
#define TOGGLE_AUTOMATIC_EVENT 	"toggle_automatic"
#define TOGGLE_MULTILEVEL_EVENT	"toggle_multilevel"
#define TOGGLE_WASHING_EVENT	"toggle_washing"
#define TOGGLE_FINISHED_EVENT	"toggle_finished"
#define TOGGLE_PREHEAT_EVENT 	"toggle_preheat"
#define TOGGLE_COOLING_EVENT 	"toggle_cooling"
#define TOGGLE_LOOPTIME_EVENT   "toggle_looptime"
#define TOGGLE_PROBE_EVENT   	"toggle_probe"
#define TOGGLE_SPRAY_EVENT   	"toggle_spray"

//EVENTS INCOMING FRONT-END CRANK SOFTWARE
#define MODE_RECIPE_CONVECTION_EVENT   	"mode_recipe_convection"
#define MODE_RECIPE_COMBINED_EVENT   	"mode_recipe_combined"
#define MODE_RECIPE_STEAM_EVENT   		"mode_recipe_steam"

//EVENTS IN/OUT COMING FROM UART RELAYBOARD 1 BYTE
#define MODE_CONVECTION         "#convect"
#define MODE_COMBINED			"#combine"
#define MODE_STEAM				"#steamhi"
#define MODE_PREHEAT		    "#preheat"
#define MODE_COOLING			"#cooling"
#define MODE_WASHING			"#washing"
#define GET_EXTERN_PROBE_TEMP	"#extrnpb"
#define CURRENT_HUMIDITY		"#curh"
#define CURRENT_TEMP_PROBE      "#tprb"
#define	CURRENT_CAM_TEMPERATURE	"#tcam"
#define WARNING_MESSAGE			"#wrng"
#define ENCODER_INCREASE		"#encodr+"
#define ENCODER_DECREASE		"#encodr-"
#define ENCODER_ZERO_POSITION   "#encodr0"
#define ENCODER_ENABLE			"#enabenc"
#define ENCODER_OFF				"#disaenc"
#define PAUSE_STOP_PROCESS		"#paustop"
#define RUNNING_PROCESS			"#running"
#define FINISHED_PROCESS		"#finishd"
#define WATER_SPRAY_SHOT		"#waspray"
#define DOOR_OPEN				"#dooropn"
#define DOOR_CLOSED				"#doorcls"

#define MULTILEVEL_ALERT_01		"#aler001"
#define MULTILEVEL_ALERT_02		"#aler002"
#define MULTILEVEL_ALERT_03		"#aler003"
#define MULTILEVEL_ALERT_04		"#aler004"
#define MULTILEVEL_ALERT_05		"#aler005"
#define MULTILEVEL_ALERT_06		"#aler006"
#define MULTILEVEL_ALERT_07		"#aler007"

//WASH MANAGEMENT ROUTINES TO RELAYBOARD 1 BYTE
#define	PHASE_DRAIN_WASTE		"#phas001"
#define	PHASE_WASH_OUT			"#phas002"
#define	PHASE_COOLING_CAMERA	"#phas003"
#define	PHASE_DRYING_CAMERA		"#phas004"
#define	PHASE_PREHEAT_BOILER	"#phas005"
#define	PHASE_SUPPLY_SOAP		"#phas006"
#define	PHASE_CLEAN_JET			"#phas007"
#define	PHASE_FILL_COLD_CAMERA	"#phas008"
#define	PHASE_RECYCLE_WATER		"#phas009"
#define PHASE_SUPPLY_DISCALER	"#phas010"

//GLobal Variables
#define MAX_TARGET_PERCENT 		100
#define MAX_TARGET_TEMPERATURE  300
#define MAX_TARGET_TEMP_STEAM   138
#define MAX_TARGET_TIME			10800//5999
#define ENCODER_DISABLE			20

//TOGGLE STATES OVEN
#define STOP_OVEN_STATE			0
#define RUN_SUB_STATE			1
#define RUN_MANUAL_STATE		2
#define RUN_AUTO_STATE			3
#define RUN_MULTILEVEL_STATE	4
#define RUN_WASHING_STATE		5
#define RDY_NEXTSTEP_STATE		6
#define PAUSE_BY_DOOR_STATE		7
#define FINISHED_STATE			8
#define CONNECT_WATER_STATE		9
#define WARNING_STATE			10
#define DIRTY_FILTER_STATE		11
#define OVERHEAT_STATE			12
/*Se agrega para identificar los termopar*/
#define PAUSE_THERMO_COLD       13
#define PAUSE_THERMO_MAIN       14
#define PAUSE_THERMO_BOILER     16
/*
	toggle_state :  
	0 = stop
	1 = running free time / preheat / cooling / looptime
	2 = running manual mode with time Ok
	3 = running automatic by steps Ok
	4 = running washing Ok
	5 = ready for next step
	6 = pause / cerrar puerta
	7 = finished state
	8 = conectar agua
	9 = warning state
*/





