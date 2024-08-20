void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    int I;
    int iVar17;
    int iVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    boolean bVar51;
    char[32] cVar52;
    unknown uVar60;
    int iVar61;
    char[12] cVar62;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    boolean bVar83;

    l_U0 = -1;
    l_U1 = 1;
    l_U2 = 0;
    l_U5 = 86.00000000;
    l_U6 = 274.00000000;
    l_U7 = 225;
    l_U14 = 0;
    l_U15 = 1;
    l_U16 = 3;
    l_U18 = 0;
    l_U19 = -1;
    l_U20 = 0;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = 0;
    l_U28 = -1;
    l_U140 = 15.00000000;
    l_U141 = 35.00000000;
    l_U142 = 16.00000000;
    l_U143 = 0.00000000;
    l_U149 = 1000.00000000;
    l_U150 = 7500.00000000;
    l_U159 = 1;
    l_U160 = 30.00000000;
    l_U161 = 30.00000000;
    l_U162 = 2.00000000;
    l_U172 = 0.00000000;
    l_U173 = 0.00000000;
    l_U185 = 1;
    l_U186 = 0;
    l_U187 = -1;
    l_U188 = 1;
    l_U189 = -1;
    l_U190 = -1;
    l_U191 = 15.00000000;
    l_U218 = 0;
    l_U219 = -1949702649;
    l_U220 = 2075870698;
    l_U225 = 0.12000000;
    l_U236 = 1;
    l_U237 = 1;
    l_U356 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    iVar15 = 0;
    g_U11 = 0;
    g_U12 = 0;
    g_U13 = 0;
    g_U15 = -1;
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_INT_STAT( 363, 3 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 363 );
    SET_HIDE_WEAPON_ICON( 0 );
    FORCE_NOISE_OFF( 0 );
    SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG( 0 );
    SET_NO_RESPRAYS( 0 );
    if (IS_PLAYER_PLAYING( sub_423() ))
    {
        SET_PLAYER_CONTROL( sub_423(), 0 );
    }
    array(ref uVar20._fU0, 30);
    ref uVar20;
    sub_492( ref uVar20, ref uVar19 );
    g_U16 = 1;
    bVar51 = true;
    sub_956();
    StrCopy( ref cVar52, "MPcellphoneNetwork", 32 );
    while (bVar51)
    {
        PRINTSTRING( "\n [rw][filter] should be looping \n" );
        WAIT( 0 );
        switch (sub_1079( ref uVar20, uVar19 ))
        {
            case 13:
            bVar51 = false;
            break;
            case 14:
            PRINTSTRING( "\n [rw][filter] net state failed \n" );
            if (GET_RETURN_TO_FILTER_MENU())
            {
                PRINTSTRING( "\n [rw][filter] RETURNING TO CUSTOM MATCH and faking cellphone script-calls \n" );
                REQUEST_SCRIPT( ref cVar52 );
                while (NOT (HAS_SCRIPT_LOADED( ref cVar52 )))
                {
                    WAIT( 0 );
                }
                START_NEW_SCRIPT( ref cVar52, 16888 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar52 );
            }
            else
            {
                PRINTSTRING( "\n [rw][filter] returning to single player game \n" );
                SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            }
            TERMINATE_THIS_SCRIPT();
            break;
            default:
            PRINTSTRING( "\n [rw][filter] default state \n" );
            break;
        }
    }
    sub_3933();
    uVar60 = nil;
    iVar61 = 0;
    array(ref cVar62, 2);
    if (IS_CHAR_DEAD( sub_4044() ))
    {
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), sub_4109( sub_4044() ), 0.00000000 );
        sub_1954( "\n #### network_main.sc - resurrecting player as they are dead. " );
    }
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_4279( sub_4044() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    sub_4338( NETWORK_GET_GAME_MODE(), ref uVar2, ref uVar7, ref bVar6 );
    REQUEST_SCRIPT( ref uVar2 );
    StrCopy( ref cVar62[0], "MPcellphone", 32 );
    StrCopy( ref cVar62[1], "speechControl_net", 32 );
    while (iVar61 < cVar62)
    {
        WAIT( 0 );
        iVar61 = 0;
        for ( I = 0; I <= (Length(cVar62) - 1); I++ )
        {
            REQUEST_SCRIPT( ref cVar62[I] );
            if (HAS_SCRIPT_LOADED( ref cVar62[I] ))
            {
                iVar61++;
            }
        }
    }
    for ( I = 0; I <= (Length(cVar62) - 1); I++ )
    {
        START_NEW_SCRIPT( ref cVar62[I], 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar62[I] );
    }
    if (NOT (IS_CHAR_DEAD( sub_4044() )))
    {
        sub_5218( GET_PLAYER_ID(), 0 );
        REMOVE_ALL_CHAR_WEAPONS( sub_4044() );
        SET_CHAR_HEALTH( sub_4044(), 300 );
        CLEAR_WANTED_LEVEL( sub_423() );
    }
    SET_FREE_RESPRAYS( 1 );
    sub_5567();
    for ( I = 0; I < 11; I++ )
    {
        SWITCH_CAR_GENERATOR( g_U39249[I], 0 );
    }
    sub_6217();
    sub_1954( "\n #### network_main.sc - about to GET_PLAYERSETTINGS_MODEL_CHOICE. " );
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_4279( sub_4044() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (sub_6490( GET_PLAYERSETTINGS_MODEL_CHOICE() )))
        {
            WAIT( 0 );
            sub_1954( "\n #### network_main.sc - loading player model. " );
        }
        CHANGE_PLAYER_MODEL( sub_423(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
        SET_ANIM_GROUP_FOR_CHAR( sub_4044(), "Move_player" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_423() );
    SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_4044(), 0, IS_CHAR_MALE( sub_4044() ) );
    sub_1954( "\n #### network_main.sc - finished SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE. " );
    while (IS_NETWORK_GAME_PENDING())
    {
        WAIT( 0 );
        sub_1954( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING is returning TRUE. " );
    }
    sub_1954( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING has returned FALSE. " );
    if (NOT IS_NETWORK_GAME_RUNNING())
    {
        sub_1954( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
        TERMINATE_THIS_SCRIPT();
    }
    if (bVar6)
    {
        while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 0 )))
        {
            WAIT( 0 );
            sub_7176( "\n #### network_main.sc - currently loading game mode text ", ref uVar2 );
        }
    }
    if (NOT (COMPARE_STRING( ref uVar7, "NO_TEXTURES" )))
    {
        while (NOT (HAS_STREAMED_TXD_LOADED( ref uVar7 )))
        {
            WAIT( 0 );
            sub_7176( "\n #### network_main.sc - currently loading game mode textures ", ref uVar7 );
        }
    }
    uVar60 = nil;
    while (NOT (sub_7332( ref uVar2 )))
    {
        WAIT( 0 );
        sub_7176( "\n #### network_main.sc - currently loading game script ", ref uVar2 );
    }
    FORCE_LOADING_SCREEN( 0 );
    uVar60 = START_NEW_SCRIPT( ref uVar2, 20240 );
    sub_7176( "\n #### network_main.sc - loaded game script ", ref uVar2 );
    bVar83 = false;
    while (true)
    {
        WAIT( 0 );
        if ((NOT IS_NETWORK_GAME_RUNNING()) || (NETWORK_IS_BEING_KICKED()))
        {
            sub_1954( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
            sub_7674();
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT bVar83)
        {
            if (NOT NETWORK_IS_RENDEZVOUS())
            {
                if (NETWORK_IS_TVT())
                {
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                        {
                            if (NETWORK_GET_NUM_PARTY_MEMBERS() == 1)
                            {
                                g_U12 = 1;
                                bVar83 = true;
                            }
                        }
                    }
                }
            }
        }
        if ((g_U13) || (DOES_GAME_CODE_WANT_TO_LEAVE_NETWORK_SESSION()))
        {
            sub_7674();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
            }
            if (NETWORK_IS_SESSION_STARTED())
            {
                sub_1954( "\n #### network_main.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
                if (NETWORK_END_SESSION())
                {
                    sub_1954( "\n #### network_main.sch - called NETWORK_END_SESSION. " );
                    while (NETWORK_END_SESSION_PENDING())
                    {
                        WAIT( 0 );
                        sub_1954( "\n #### network_main.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    }
                }
            }
            sub_1954( "\n #### network_main.sch - NETWORK_LEAVE_GAME been called. " );
            NETWORK_LEAVE_GAME();
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1954( "\n #### network_main.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
            }
            if (GET_RETURN_TO_FILTER_MENU())
            {
                REQUEST_SCRIPT( ref cVar52 );
                while (NOT (HAS_SCRIPT_LOADED( ref cVar52 )))
                {
                    WAIT( 0 );
                }
                START_NEW_SCRIPT( ref cVar52, 16888 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar52 );
            }
            else
            {
                SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            }
        }
        else if (g_U12)
        {
            sub_7674();
            sub_1954( "\n #### network_main.sc - about to call NETWORK_IS_RENDEZVOUS_HOST. " );
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                {
                    if (NETWORK_RETURN_TO_RENDEZVOUS())
                    {
                        while (NETWORK_RETURN_TO_RENDEZVOUS_PENDING())
                        {
                            WAIT( 0 );
                            sub_1954( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_PENDING returning TRUE. " );
                        }
                        if (NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED())
                        {
                            sub_1954( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED returned TRUE. " );
                            g_U12 = 0;
                        }
                        else
                        {
                            sub_1954( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED() returned FALSE, returning to single player. " );
                            g_U13 = 1;
                            g_U12 = 0;
                        }
                    }
                    else
                    {
                        sub_1954( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS() returned FALSE, returning to single player. " );
                        g_U13 = 1;
                        g_U12 = 0;
                    }
                }
            }
        }
        else if (g_U11)
        {
            sub_7674();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
                sub_1954( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
            }
            sub_1954( "\n #### network_main.sc - about to call closeAndStartNetworkGame. " );
            g_U94._fU656 = sub_9203();
            sub_9252();
            sub_1954( "\n #### network_main.sc - finished closeAndStartNetworkGame. " );
            sub_1954( "\n #### network_main.sc - about to call Start_A_Network_Game_From_A_Network_Game. " );
            sub_10397();
            TERMINATE_THIS_SCRIPT();
        }
        else if ((g_U15 != -1) AND (IS_THIS_MACHINE_THE_SERVER()))
        {
            sub_7674();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
                sub_1954( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
            }
            iVar17 = sub_10658( g_U15 );
            iVar18 = NETWORK_GET_MAX_PRIVATE_SLOTS();
            if (iVar18 > iVar17)
            {
                iVar18 = iVar17;
            }
            while (NETWORK_GET_NUM_UNFILLED_RESERVATIONS() != 0)
            {
                WAIT( 0 );
            }
            if (NETWORK_CHANGE_GAME_MODE( g_U15, iVar17, iVar18, sub_3267( g_U15 ) ))
            {
                sub_2148( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE changing to ", g_U15 );
                sub_1954( ". " );
                g_U94._fU656 = sub_9203();
                sub_9993();
                while (NETWORK_CHANGE_GAME_MODE_PENDING())
                {
                    WAIT( 0 );
                    sub_1954( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_PENDING returning TRUE" );
                }
                if (NETWORK_CHANGE_GAME_MODE_SUCCEEDED())
                {
                    sub_1954( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED returned TRUE" );
                }
                else
                {
                    sub_1954( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED() returned FALSE, returning to single player. " );
                    g_U13 = 1;
                    g_U15 = -1;
                }
            }
            else
            {
                sub_1954( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE() returned FALSE, returning to single player. " );
                g_U13 = 1;
                g_U15 = -1;
            }
        };;;;
        if (NOT (IS_THREAD_ACTIVE( uVar60 )))
        {
            sub_1954( "\n #### network_main.sc - game script nolonger running. " );
            if (TIMERA() >= 10000)
            {
                sub_1954( "\n #### network_main.sc - DOING TEMP SHUTDOWN. " );
                SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            }
        }
        else
        {
            SETTIMERA( 0 );
        }
    }
    return;
}

void sub_423()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_492(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    NETWORK_RESTORE_GAME_CONFIG( uParam0 );
    iVar4 = GET_CURRENT_EPISODE();
    array(ref uVar5._fU0, 10);
    ref uVar5;
    if (RESTORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar5 ))
    {
        g_U94._fU40 = uVar5._fU0[0];
        g_U94._fU108 = uVar5._fU0[1];
        g_U94._fU112 = uVar5._fU0[2];
        SET_MOBILE_RING_TYPE( g_U94._fU112 );
        g_U94._fU396 = uVar5._fU0[3];
        if ((iVar4 == 0) AND (uVar5._fU0[3] == 13))
        {
            g_U94._fU396 = 0;
        }
        else if ((iVar4 == 1) AND (uVar5._fU0[3] < 13))
        {
            g_U94._fU396 = 13;
        }
        if (uVar5._fU0[4] == 1)
        {
            g_U94._fU500 = 1;
        }
        else
        {
            g_U94._fU500 = 0;
        }
        if (uVar5._fU0[5] == 1)
        {
            g_U94._fU524 = 1;
        }
        else
        {
            g_U94._fU524 = 0;
        }
        (uParam1^) = uVar5._fU0[5];
        g_U94._fU656 = uVar5._fU0[6];
        if (uVar5._fU0[7] == 0)
        {
            g_U94._fU1488 = 0;
        }
        else
        {
            g_U94._fU1488 = 1;
        }
    }
    else
    {
        g_U94._fU40 = 2;
        g_U94._fU108 = 0;
        g_U94._fU112 = 0;
        g_U94._fU396 = 13;
        g_U94._fU524 = 1;
        g_U94._fU500 = GET_IS_HIDEF();
        g_U94._fU656 = -1;
        g_U94._fU1488 = 0;
        (uParam1^) = 0;
    }
    SET_MOBILE_RING_TYPE( g_U94._fU112 );
    return;
}

void sub_956()
{
    l_U8 = 0;
    SETTIMERA( 0 );
    return;
}

void sub_1079(int iParam0, unknown uParam1)
{
    if (l_U8 == 14)
    {
        return 14;
    }
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            sub_1127();
            return 14;
        }
    }
    else if ((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0))
    {
        sub_1127();
        return 14;
    }
    else if ((NOT NETWORK_IS_NETWORK_AVAILABLE()) AND (IS_IN_LAN_MODE() == 1))
    {
        sub_1127();
        return 14;
    };;;
    if (TIMERA() >= 60000)
    {
        sub_1127();
    }
    else
    {
        switch (l_U8)
        {
            case 0:
            if (iParam0->_fU0[4] != GET_CURRENT_EPISODE())
            {
                sub_1954( "\n ##### SETTING UP FREEMODE AS EPISODES ARE NOT THE SAME" );
                iParam0->_fU0[0] = 16;
                iParam0->_fU0[1] = 0;
                iParam0->_fU0[2] = 32;
                iParam0->_fU0[3] = 0;
                iParam0->_fU0[4] = GET_CURRENT_EPISODE();
                iParam0->_fU0[5] = 0;
                iParam0->_fU0[6] = 0;
                iParam0->_fU0[7] = 0;
                iParam0->_fU0[8] = 0;
                iParam0->_fU0[9] = 0;
            }
            sub_1954( "\n ##### networkSetup.sch going to find game" );
            sub_2148( "\n ## Gamemode  : ", iParam0->_fU0[0] );
            sub_2148( "\n ## Ranked    : ", iParam0->_fU0[1] );
            sub_2148( "\n ## Slots     : ", iParam0->_fU0[2] );
            sub_2148( "\n ## Private   : ", iParam0->_fU0[3] );
            sub_2148( "\n ## Episode   : ", iParam0->_fU0[4] );
            sub_2148( "\n ## Max Teams : ", iParam0->_fU0[5] );
            sub_2148( "\n ## Auto Aim  : ", iParam0->_fU0[6] );
            sub_2148( "\n ## Police    : ", iParam0->_fU0[7] );
            sub_2148( "\n ## Blips     : ", iParam0->_fU0[8] );
            sub_2148( "\n ## Vehicles  : ", iParam0->_fU0[9] );
            sub_1954( "\n" );
            if (NETWORK_HAVE_SUMMONS())
            {
                SET_HOST_MATCH_ON( 0 );
                l_U8 = 3;
                break;
            }
            else if (iParam0->_fU0[0] == 8)
            {
                SET_HOST_MATCH_ON( 0 );
                l_U8 = 10;
                break;
            }
            else if (GET_START_FROM_FILTER_MENU() == 1)
            {
                SET_HOST_MATCH_ON( 0 );
                SET_START_FROM_FILTER_MENU( 0 );
                l_U8 = 7;
                break;
            }
            else if (GET_HOST_MATCH_ON())
            {
                SET_HOST_MATCH_ON( 0 );
                l_U8 = 9;
                break;
            };;;;
            l_U8 = 1;
            case 1:
            if ((iParam0->_fU0[1] == 0) AND (iParam0->_fU0[3] > 0))
            {
                l_U8 = 9;
                break;
            }
            NETWORK_FIND_GAME( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[4], iParam0->_fU0[5] );
            sub_2148( "\n #### NETWORK_FIND_GAME(", iParam0->_fU0[0] );
            sub_2148( ", ", iParam0->_fU0[1] );
            sub_2148( ", ", iParam0->_fU0[4] );
            sub_2148( ", ", iParam0->_fU0[5] );
            sub_1954( ") \n" );
            l_U8 = 2;
            case 2:
            if (NETWORK_FIND_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_GET_NUMBER_OF_GAMES() == 0)
            {
                l_U8 = 9;
                break;
            }
            l_U9 = 0;
            SETTIMERA( 0 );
            case 5:
            if (l_U8 == 5)
            {
                if (l_U9 < (NETWORK_GET_NUMBER_OF_GAMES() - 1))
                {
                    l_U9++;
                }
                else
                {
                    l_U8 = 9;
                    break;
                }
            }
            else
            {
                l_U8 = 5;
            }
            if (TIMERA() < 20000)
            {
                if (NOT (NETWORK_JOIN_GAME( l_U9 )))
                {
                    break;
                }
            }
            else
            {
                l_U8 = 9;
                break;
            }
            l_U8 = 6;
            break;
            case 4:
            case 6:
            if (NETWORK_JOIN_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_JOIN_GAME_SUCCEEDED())
            {
                if (l_U8 == 4)
                {
                    NETWORK_CLEAR_SUMMONS();
                }
                l_U8 = 13;
            }
            else
            {
                switch (l_U8)
                {
                    case 4:
                    sub_1127();
                    break;
                    default:
                    l_U8 = 5;
                    break;
                }
            }
            break;
            case 3:
            if (NOT NETWORK_JOIN_SUMMONS())
            {
                NETWORK_CLEAR_SUMMONS();
                sub_1127();
                break;
            }
            l_U8 = 4;
            break;
            case 7:
            if (TIMERA() < 20000)
            {
                l_U9 = GET_SERVER_ID();
                if ((NETWORK_JOIN_GAME( l_U9 )) == 0)
                {
                    break;
                }
            }
            else
            {
                l_U8 = 14;
                break;
            }
            l_U8 = 8;
            break;
            case 8:
            if (NETWORK_JOIN_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_JOIN_GAME_SUCCEEDED())
            {
                l_U8 = 13;
            }
            else
            {
                l_U8 = 14;
            }
            break;
            case 9:
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (iParam0->_fU0[1] == 1)
                {
                    if ((sub_3267( iParam0->_fU0[0] )) == 2)
                    {
                        iParam0->_fU0[2] = NETWORK_GET_NUM_PARTY_MEMBERS() * 2;
                    }
                }
            }
            if (NOT (NETWORK_HOST_GAME_E1( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[2], iParam0->_fU0[3], iParam0->_fU0[4], iParam0->_fU0[5] )))
            {
                sub_1127();
                break;
            }
            l_U8 = 11;
            g_U20909 = 0;
            case 11:
            if (NETWORK_HOST_GAME_PENDING())
            {
                break;
            }
            if (NOT NETWORK_HOST_GAME_SUCCEEDED())
            {
                sub_1127();
                break;
            }
            l_U8 = 13;
            break;
            case 10:
            if (NOT (NETWORK_HOST_RENDEZVOUS_E1( iParam0->_fU0[0], iParam0->_fU0[2], iParam0->_fU0[4] )))
            {
                sub_1127();
                break;
            }
            l_U8 = 11;
            break;
        }
    }
    return l_U8;
}

void sub_1127()
{
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            if (# -NULL-0xc27bfa())
            {
                sub_1188( "CP_ERROR_1PC" );
            }
            else if (# -NULL-0xc27c84())
            {
                sub_1188( "CP_ERROR_1" );
            }
            else
            {
                sub_1188( "WARNING_1PS3" );
            }
        }
    }
    else if ((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0))
    {
        if (# -NULL-0xc27bfa())
        {
            sub_1188( "CP_ERROR_0PC" );
        }
        else if (# -NULL-0xc27c84())
        {
            sub_1188( "CP_ERROR_1" );
        }
        else
        {
            sub_1188( "WARNING_1PS3" );
        }
    }
    else if ((NOT NETWORK_IS_NETWORK_AVAILABLE()) AND (IS_IN_LAN_MODE() == 1))
    {
        if (# -NULL-0xc27bfa())
        {
            sub_1188( "CP_ERROR_2PC" );
        }
    }
    else
    {
        switch (l_U8)
        {
            case 3:
            case 4:
            sub_1188( "INVITE_FAILED" );
            break;
            default:
            if (# -NULL-0xc27c84())
            {
                sub_1188( "CP_ERROR_0" );
            }
            else if (# -NULL-0xc27bfa())
            {
                if (# -sub_BDB8D0-0xbdd9a9())
                {
                    sub_1188( "MP_NOPASS" );
                }
                else
                {
                    sub_1188( "CP_ERROR_0PC" );
                }
            }
            else
            {
                sub_1188( "WARNING_1PS3" );
            }
            break;
        }
    };;;
    return;
}

void sub_1188(unknown uParam0)
{
    FORCE_LOADING_SCREEN( 0 );
    SET_MSG_FOR_LOADING_SCREEN( uParam0 );
    l_U8 = 14;
    return;
}

void sub_1954(unknown uParam0)
{
    return;
}

void sub_2148(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3267(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        return 8;
        break;
        case 18:
        case 22:
        return 2;
        break;
    }
    return 0;
}

void sub_3933()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        if ((NOT NETWORK_IS_RENDEZVOUS()) AND (NOT NETWORK_IS_SESSION_ADVERTISE()))
        {
            NETWORK_ADVERTISE_SESSION( 1 );
            if ((NOT NETWORK_IS_TVT()) AND (NOT NETWORK_IS_GAME_RANKED()))
            {
                NETWORK_SET_SESSION_INVITABLE( 1 );
            }
        }
    }
    return;
}

void sub_4044()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4109(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

void sub_4279(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_4338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    (uParam3^) = 0;
    StrCopy( (uParam2^), "network", 32 );
    REQUEST_STREAMED_TXD( uParam2, 1 );
    switch (uParam0)
    {
        case 23:
        StrCopy( (uParam1^), "e1_mostwanted", 16 );
        REQUEST_ADDITIONAL_TEXT( "RUNMAE1", 0 );
        (uParam3^) = 1;
        break;
        case 18:
        StrCopy( (uParam1^), "e1_destroyvan", 16 );
        REQUEST_ADDITIONAL_TEXT( "E1VAN", 0 );
        (uParam3^) = 1;
        break;
        case 19:
        StrCopy( (uParam1^), "e1_chapter", 16 );
        REQUEST_ADDITIONAL_TEXT( "CHAPE1", 0 );
        (uParam3^) = 1;
        break;
        case 20:
        StrCopy( (uParam1^), "e1_races", 16 );
        REQUEST_ADDITIONAL_TEXT( "RACESE1", 0 );
        (uParam3^) = 1;
        break;
        case 22:
        StrCopy( (uParam1^), "e1_turfwar", 16 );
        REQUEST_ADDITIONAL_TEXT( "TURFE1", 0 );
        (uParam3^) = 1;
        break;
        case 24:
        case 21:
        StrCopy( (uParam1^), "e1_deathmatch", 16 );
        break;
        case 17:
        StrCopy( (uParam1^), "e1_chopper", 16 );
        REQUEST_ADDITIONAL_TEXT( "RUNMAE1", 0 );
        (uParam3^) = 1;
        break;
        case 25:
        StrCopy( (uParam1^), "e1_quickDM", 16 );
        break;
        case 16:
        StrCopy( (uParam1^), "e1_freemode", 16 );
        break;
        case 8:
        StrCopy( (uParam1^), "e1_party_mode", 16 );
        break;
        default:
        sub_2148( "\n #### network_main.sc - Can't find script for this gameMode ", uParam0 );
        sub_1954( "\n" );
        StrCopy( (uParam1^), "e1_freemode", 16 );
        g_U15 = 16;
        break;
    }
    return;
}

void sub_5218(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_5229( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_5267( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5267( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_5267( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_5267( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_5267( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_5229( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_5267( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_5267( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_5267( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_5229( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_5267( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_5267( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5267( uParam0 ) );
        }
    }
    return;
}

void sub_5229(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_5267(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_5567()
{
    CREATE_CAR_GENERATOR( 2247.48900000, 756.15060000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[0] );
    CREATE_CAR_GENERATOR( 2230.76200000, 737.58500000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[1] );
    CREATE_CAR_GENERATOR( 2213.96600000, 719.40220000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[2] );
    CREATE_CAR_GENERATOR( 2133.43000000, 441.15310000, 22.71320000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[3] );
    CREATE_CAR_GENERATOR( 346.07890000, -716.95970000, 3.69180000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[4] );
    CREATE_CAR_GENERATOR( 390.21430000, -743.72410000, 3.69180000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[5] );
    CREATE_CAR_GENERATOR( 387.26900000, -701.77660000, 3.69190000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[6] );
    CREATE_CAR_GENERATOR( 414.48290000, -657.29790000, 3.69190000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[7] );
    CREATE_CAR_GENERATOR( -708.67830000, 357.50220000, 3.07230000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[8] );
    CREATE_CAR_GENERATOR( -2125.71500000, 145.09910000, 17.71310000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U39249[9] );
    return;
}

void sub_6217()
{
    sub_6228( 0, 27 );
    sub_6228( 1, 9 );
    sub_6228( 2, 26 );
    sub_6228( 3, 22 );
    sub_6228( 4, 12 );
    sub_6228( 5, 13 );
    sub_6228( 6, 14 );
    sub_6228( 7, 15 );
    sub_6228( 8, 16 );
    sub_6228( 9, 17 );
    sub_6228( 10, 5 );
    sub_6228( 11, 28 );
    sub_6228( 12, 21 );
    sub_6228( 13, 1 );
    sub_6228( 14, 3 );
    return;
}

void sub_6228(unknown uParam0, unknown uParam1)
{
    g_U39262[uParam0] = uParam1;
    return;
}

int sub_6490(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_7176(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7332(unknown uParam0)
{
    REQUEST_SCRIPT( uParam0 );
    if (HAS_SCRIPT_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_7674()
{
    FORCE_LOADING_SCREEN( 1 );
    FAKE_DEATHARREST();
    WAIT( 0 );
    return;
}

void sub_9203()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

void sub_9252()
{
    sub_9261();
    sub_9993();
    g_U11 = 1;
    return;
}

void sub_9261()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U39248 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_1954( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_1954( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_1954( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U39248 = 1;
                }
            }
        }
        if ((NOT NETWORK_IS_RENDEZVOUS()) || (NETWORK_HAVE_ACCEPTED_INVITE()))
        {
            NETWORK_LEAVE_GAME();
            sub_1954( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1954( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U39248 = 1;
            }
        }
        else
        {
            sub_1954( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_1954( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_9993()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar2._fU0, 10);
    ref uVar2;
    uVar2._fU0[0] = g_U94._fU40;
    uVar2._fU0[1] = g_U94._fU108;
    uVar2._fU0[2] = g_U94._fU112;
    uVar2._fU0[3] = g_U94._fU396;
    if (g_U94._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (g_U94._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = g_U94._fU656;
    if ((g_U15862[12]._fU196._fU0) || (g_U94._fU1488))
    {
        uVar2._fU0[7] = 1;
    }
    else
    {
        uVar2._fU0[7] = 0;
    }
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar2 );
    return;
}

void sub_10397()
{
    PRINTSTRING( "Just entered Start_A_Network_Game_From_A_Network_Game\n" );
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U16 );
    WAIT( 0 );
    return;
}

void sub_10658(unknown uParam0)
{
    return sub_10670( uParam0, 0 );
}

int sub_10670(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        switch (uParam0)
        {
            case 23: return 8;
            case 18: return 8;
            case 19: return 4;
            case 20: return 16;
            case 22: return 8;
            case 24: return 16;
            case 21: return 16;
            case 16: return 16;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 23: return 16;
            case 18: return 16;
            case 19: return 8;
            case 20: return 32;
            case 22: return 16;
            case 24: return 32;
            case 25: return 16;
            case 21: return 32;
            case 16: return 32;
            case 8: return 8;
            case 17: return 2;
        }
    }
    PRINTSTRING( "##### MAX_PLAYERS_FOR_GAMEMODE has been passed in the gamemode " );
    PRINTINT( uParam0 );
    PRINTNL();
    return -1;
}
