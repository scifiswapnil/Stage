///////////////////////////////////////////////////////////////////////////
//
// File: broadcastdevice.cc
// Author: Andrew Howard
// Date: 12 Jan 2000
// Desc: Simulates the laser-based broadcast detector
//
// CVS info:
//  $Source: /home/tcollett/stagecvs/playerstage-cvs/code/stage/src/broadcastdevice.cc,v $
//  $Author: gerkey $
//  $Revision: 1.8 $
//
// Usage:
//  (empty)
//
// Theory of operation:
//  This is really just a place-holder; the real work is done by the
//  real broadcast device in Player.
//
// Known bugs:
//  (empty)
//
// Possible enhancements:
//  (empty)
//
///////////////////////////////////////////////////////////////////////////

#include <stage.h>
#include "world.hh"
#include "broadcastdevice.hh"


///////////////////////////////////////////////////////////////////////////
// Default constructor
//
CBroadcastDevice::CBroadcastDevice(CWorld *world, CEntity *parent )
  : CEntity(world, parent )
{
    // set the Player IO sizes correctly for this type of Entity
    m_data_len    = sizeof( player_broadcast_data_t ); 
    m_command_len = sizeof( player_broadcast_cmd_t );
    m_config_len  = 0;//sizeof( player_broadcast_config_t );
 
    m_player_type = PLAYER_BROADCAST_CODE;
    m_stage_type= BroadcastType;
}


///////////////////////////////////////////////////////////////////////////
// Startup routine
//
bool CBroadcastDevice::Startup()
{
    if (!CEntity::Startup())
        return false;
    return true;
}


///////////////////////////////////////////////////////////////////////////
// Update the broadcast data
void CBroadcastDevice::Update( double sim_time )
{
}
