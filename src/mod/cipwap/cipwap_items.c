
#include "cw/mbag.h"
#include "cw/item.h"

#include "cipwap_items.h"



const char CIPWAP_ITEM_SSH_ENABLE[]="ssh_enable";
const char CIPWAP_ITEM_TELNET_ENABLE[]="telnet_enable";
const char CIPWAP_ITEM_AC_HASH_VALUE[]="ac_hash_value";
const char CIPWAP_ITEM_LOG_FACILITY[]="log_facility";




struct cw_itemdef cipwap_itemdefs[] = {

	{CIPWAP_ITEM_TELNET_ENABLE,CW_ITEM_NONE,MBAG_BYTE},
	{CIPWAP_ITEM_SSH_ENABLE,CW_ITEM_NONE,MBAG_BYTE},
	{CIPWAP_ITEM_AC_HASH_VALUE,CW_ITEM_NONE,MBAG_BSTR16},
	{CIPWAP_ITEM_LOG_FACILITY,CW_ITEM_NONE,MBAG_BYTE},

	{CW_ITEM_NONE}

};

const char CIPWAP_RADIOITEM80211_OCCUPANCY_LIMIT[]="occupancy_limit";
const char CIPWAP_RADIOITEM80211_CFP_PERIOD[]="cfp_period";
const char CIPWAP_RADIOITEM80211_CFP_MAXIMUM_DURATION[]="cfp_max_duration";

struct cw_itemdef cipwap_radioitemdefs[] = {

	{CIPWAP_RADIOITEM80211_OCCUPANCY_LIMIT,CW_ITEM_NONE,MBAG_WORD},
	{CIPWAP_RADIOITEM80211_CFP_PERIOD,CW_ITEM_NONE,MBAG_BYTE},
	{CIPWAP_RADIOITEM80211_CFP_MAXIMUM_DURATION,CW_ITEM_NONE,MBAG_WORD},

	{CW_ITEM_NONE}

};

