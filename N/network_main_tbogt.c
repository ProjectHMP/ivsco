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
    l_U6 = 86.00000000;
    l_U7 = 274.00000000;
    l_U8 = 225;
    l_U15 = 0;
    l_U16 = 1;
    l_U17 = 3;
    l_U19 = 0;
    l_U20 = -1;
    l_U21 = 0;
    l_U22 = 0;
    l_U27 = 1;
    l_U205 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    iVar15 = 0;
    g_U860 = 0;
    g_U861 = 0;
    g_U862 = 0;
    g_U864 = -1;
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_INT_STAT( 363, 3 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 363 );
    SET_HIDE_WEAPON_ICON( 0 );
    FORCE_NOISE_OFF( 0 );
    SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG( 0 );
    SET_NO_RESPRAYS( 0 );
    if (IS_PLAYER_PLAYING( sub_201() ))
    {
        SET_PLAYER_CONTROL( sub_201(), 0 );
    }
    array(ref uVar20._fU0, 30);
    ref uVar20;
    PRINTNL();
    sub_277( ref uVar20, ref uVar19 );
    PRINTNL();
    g_U865 = GET_CURRENT_EPISODE();
    bVar51 = true;
    sub_740();
    StrCopy( ref cVar52, "MPcellphoneNetwork", 32 );
    while (bVar51)
    {
        WAIT( 0 );
        switch (sub_819( ref uVar20, uVar19 ))
        {
            case 13:
            bVar51 = false;
            break;
            case 14:
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
                PRINTSTRING( "\n [rw][filter] returning to single player game \n" );
                SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            }
            TERMINATE_THIS_SCRIPT();
            break;
            default: break;
        }
    }
    sub_3465();
    uVar60 = nil;
    iVar61 = 0;
    array(ref cVar62, 2);
    if (IS_CHAR_DEAD( sub_3576() ))
    {
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), sub_3641( sub_3576() ), 0.00000000 );
        sub_1694( "\n #### network_main.sc - resurrecting player as they are dead. " );
    }
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_3811( sub_3576() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    sub_3870( NETWORK_GET_GAME_MODE(), ref uVar2, ref uVar7, ref bVar6 );
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
    if (NOT (IS_CHAR_DEAD( sub_3576() )))
    {
        sub_4498( GET_PLAYER_ID(), 0 );
        REMOVE_ALL_CHAR_WEAPONS( sub_3576() );
        SET_CHAR_HEALTH( sub_3576(), 300 );
        CLEAR_WANTED_LEVEL( sub_201() );
    }
    SET_FREE_RESPRAYS( 1 );
    sub_4847();
    for ( I = 0; I < 11; I++ )
    {
        SWITCH_CAR_GENERATOR( g_U44651[I], 0 );
    }
    sub_5560();
    sub_1694( "\n #### network_main.sc - about to GET_PLAYERSETTINGS_MODEL_CHOICE. " );
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_3811( sub_3576() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (sub_5843( GET_PLAYERSETTINGS_MODEL_CHOICE() )))
        {
            WAIT( 0 );
            sub_1694( "\n #### network_main.sc - loading player model. " );
        }
        CHANGE_PLAYER_MODEL( sub_201(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
        SET_ANIM_GROUP_FOR_CHAR( sub_3576(), "Move_player" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_201() );
    SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_3576(), 0, IS_CHAR_MALE( sub_3576() ) );
    sub_1694( "\n #### network_main.sc - finished SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE. " );
    while (IS_NETWORK_GAME_PENDING())
    {
        WAIT( 0 );
        sub_1694( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING is returning TRUE. " );
    }
    sub_1694( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING has returned FALSE. " );
    if (NOT IS_NETWORK_GAME_RUNNING())
    {
        sub_1694( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
        TERMINATE_THIS_SCRIPT();
    }
    if (bVar6)
    {
        while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 0 )))
        {
            WAIT( 0 );
            sub_6529( "\n #### network_main.sc - currently loading game mode text ", ref uVar2 );
        }
    }
    if (NOT (COMPARE_STRING( ref uVar7, "NO_TEXTURES" )))
    {
        while (NOT (HAS_STREAMED_TXD_LOADED( ref uVar7 )))
        {
            WAIT( 0 );
            sub_6529( "\n #### network_main.sc - currently loading game mode textures ", ref uVar7 );
        }
    }
    uVar60 = nil;
    while (NOT (sub_6685( ref uVar2 )))
    {
        WAIT( 0 );
        sub_6529( "\n #### network_main.sc - currently loading game script ", ref uVar2 );
    }
    FORCE_LOADING_SCREEN( 0 );
    uVar60 = START_NEW_SCRIPT( ref uVar2, 20240 );
    sub_6529( "\n #### network_main.sc - loaded game script ", ref uVar2 );
    bVar83 = false;
    while (true)
    {
        WAIT( 0 );
        if ((NOT IS_NETWORK_GAME_RUNNING()) || (NETWORK_IS_BEING_KICKED()))
        {
            sub_1694( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
            sub_7027();
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
                                g_U861 = 1;
                                bVar83 = true;
                            }
                        }
                    }
                }
            }
        }
        if ((g_U862) || (DOES_GAME_CODE_WANT_TO_LEAVE_NETWORK_SESSION()))
        {
            sub_7027();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
            }
            if (NETWORK_IS_SESSION_STARTED())
            {
                sub_1694( "\n #### network_main.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
                if (NETWORK_END_SESSION())
                {
                    sub_1694( "\n #### network_main.sch - called NETWORK_END_SESSION. " );
                    while (NETWORK_END_SESSION_PENDING())
                    {
                        WAIT( 0 );
                        sub_1694( "\n #### network_main.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    }
                }
            }
            sub_1694( "\n #### network_main.sch - NETWORK_LEAVE_GAME been called. " );
            NETWORK_LEAVE_GAME();
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1694( "\n #### network_main.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
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
        else if (g_U861)
        {
            sub_7027();
            sub_1694( "\n #### network_main.sc - about to call NETWORK_IS_RENDEZVOUS_HOST. " );
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                {
                    if (NETWORK_RETURN_TO_RENDEZVOUS())
                    {
                        while (NETWORK_RETURN_TO_RENDEZVOUS_PENDING())
                        {
                            WAIT( 0 );
                            sub_1694( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_PENDING returning TRUE. " );
                        }
                        if (NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED())
                        {
                            sub_1694( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED returned TRUE. " );
                            g_U861 = 0;
                        }
                        else
                        {
                            sub_1694( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED() returned FALSE, returning to single player. " );
                            g_U862 = 1;
                            g_U861 = 0;
                        }
                    }
                    else
                    {
                        sub_1694( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS() returned FALSE, returning to single player. " );
                        g_U862 = 1;
                        g_U861 = 0;
                    }
                }
            }
        }
        else if (g_U860)
        {
            sub_7027();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
                sub_1694( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
            }
            sub_1694( "\n #### network_main.sc - about to call closeAndStartNetworkGame. " );
            g_U942._fU656 = sub_8574();
            sub_8623();
            sub_1694( "\n #### network_main.sc - finished closeAndStartNetworkGame. " );
            sub_1694( "\n #### network_main.sc - about to call Start_A_Network_Game_From_A_Network_Game. " );
            sub_9770();
            TERMINATE_THIS_SCRIPT();
        }
        else if ((g_U864 != -1) AND (IS_THIS_MACHINE_THE_SERVER()))
        {
            sub_7027();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
                sub_1694( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
            }
            iVar17 = sub_10149( g_U864 );
            iVar18 = NETWORK_GET_MAX_PRIVATE_SLOTS();
            if (iVar18 > iVar17)
            {
                iVar18 = iVar17;
            }
            while (NETWORK_GET_NUM_UNFILLED_RESERVATIONS() != 0)
            {
                WAIT( 0 );
            }
            if (NETWORK_CHANGE_GAME_MODE( g_U864, iVar17, iVar18, sub_2875( g_U864 ) ))
            {
                sub_1888( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE changing to ", g_U864 );
                sub_1694( ". " );
                g_U942._fU656 = sub_8574();
                sub_9364();
                while (NETWORK_CHANGE_GAME_MODE_PENDING())
                {
                    WAIT( 0 );
                    sub_1694( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_PENDING returning TRUE" );
                }
                if (NETWORK_CHANGE_GAME_MODE_SUCCEEDED())
                {
                    sub_1694( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED returned TRUE" );
                }
                else
                {
                    sub_1694( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED() returned FALSE, returning to single player. " );
                    g_U862 = 1;
                    g_U864 = -1;
                }
            }
            else
            {
                sub_1694( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE() returned FALSE, returning to single player. " );
                g_U862 = 1;
                g_U864 = -1;
            }
        };;;;
        if (NOT (IS_THREAD_ACTIVE( uVar60 )))
        {
            sub_1694( "\n #### network_main.sc - game script nolonger running. " );
            if (TIMERA() >= 10000)
            {
                sub_1694( "\n #### network_main.sc - DOING TEMP SHUTDOWN. " );
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

void sub_201()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_277(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
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

    PRINTNL();
    NETWORK_RESTORE_GAME_CONFIG( uParam0 );
    PRINTNL();
    array(ref uVar4._fU0, 10);
    ref uVar4;
    if (RESTORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar4 ))
    {
        g_U942._fU40 = uVar4._fU0[0];
        g_U942._fU108 = uVar4._fU0[1];
        g_U942._fU112 = uVar4._fU0[2];
        SET_MOBILE_RING_TYPE( g_U942._fU112 );
        g_U942._fU396 = uVar4._fU0[3];
        if (g_U942._fU396 == 13)
        {
            g_U942._fU396 = 14;
        }
        uVar4._fU0[3] = 0;
        if (uVar4._fU0[4] == 1)
        {
            g_U942._fU500 = 1;
        }
        else
        {
            g_U942._fU500 = 0;
        }
        if (uVar4._fU0[5] == 1)
        {
            g_U942._fU524 = 1;
        }
        else
        {
            g_U942._fU524 = 0;
        }
        (uParam1^) = uVar4._fU0[5];
        g_U942._fU656 = uVar4._fU0[6];
        if (uVar4._fU0[7] == 0)
        {
            g_U942._fU1488 = 1;
        }
        else
        {
            g_U942._fU1488 = 1;
        }
    }
    else
    {
        g_U942._fU40 = 2;
        g_U942._fU108 = 0;
        g_U942._fU112 = 0;
        g_U942._fU396 = 13;
        g_U942._fU524 = 1;
        g_U942._fU500 = GET_IS_HIDEF();
        g_U942._fU656 = -1;
        g_U942._fU1488 = 0;
        (uParam1^) = 0;
    }
    SET_MOBILE_RING_TYPE( g_U942._fU112 );
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar4 );
    return;
}

void sub_740()
{
    l_U9 = 0;
    SETTIMERA( 0 );
    return;
}

void sub_819(int iParam0, unknown uParam1)
{
    if (l_U9 == 14)
    {
        return 14;
    }
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            sub_867();
            return 14;
        }
    }
    else if ((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0))
    {
        sub_867();
        return 14;
    }
    else if ((NOT NETWORK_IS_NETWORK_AVAILABLE()) AND (IS_IN_LAN_MODE() == 1))
    {
        sub_867();
        return 14;
    };;;
    if (TIMERA() >= 60000)
    {
        sub_867();
    }
    else
    {
        switch (l_U9)
        {
            case 0:
            if (iParam0->_fU0[4] != GET_CURRENT_EPISODE())
            {
                sub_1694( "\n ##### SETTING UP FREEMODE AS EPISODES ARE NOT THE SAME" );
                iParam0->_fU0[0] = 16;
                iParam0->_fU0[1] = 0;
                iParam0->_fU0[2] = 32;
                iParam0->_fU0[3] = 0;
                iParam0->_fU0[4] = GET_CURRENT_EPISODE();
                iParam0->_fU0[5] = 0;
                iParam0->_fU0[20] = 0;
                iParam0->_fU0[21] = 0;
                iParam0->_fU0[23] = 0;
                iParam0->_fU0[22] = 0;
            }
            sub_1694( "\n ##### networkSetup.sch going to find game" );
            sub_1888( "\n ## Gamemode  : ", iParam0->_fU0[0] );
            sub_1888( "\n ## Ranked    : ", iParam0->_fU0[1] );
            sub_1888( "\n ## Slots     : ", iParam0->_fU0[2] );
            sub_1888( "\n ## Private   : ", iParam0->_fU0[3] );
            sub_1888( "\n ## Episode   : ", iParam0->_fU0[4] );
            sub_1888( "\n ## Max Teams : ", iParam0->_fU0[5] );
            sub_1694( "\n" );
            if (NETWORK_HAVE_SUMMONS())
            {
                SET_HOST_MATCH_ON( 0 );
                l_U9 = 3;
                break;
            }
            else if (iParam0->_fU0[0] == 8)
            {
                SET_HOST_MATCH_ON( 0 );
                l_U9 = 10;
                break;
            }
            else if (GET_START_FROM_FILTER_MENU() == 1)
            {
                SET_HOST_MATCH_ON( 0 );
                SET_START_FROM_FILTER_MENU( 0 );
                l_U9 = 7;
                break;
            }
            else if (GET_HOST_MATCH_ON())
            {
                SET_HOST_MATCH_ON( 0 );
                l_U9 = 9;
                break;
            };;;;
            l_U9 = 1;
            case 1:
            if ((iParam0->_fU0[1] == 0) AND (iParam0->_fU0[3] > 0))
            {
                l_U9 = 9;
                break;
            }
            NETWORK_FIND_GAME( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[4], iParam0->_fU0[5] );
            sub_1888( "\n #### NETWORK_FIND_GAME(", iParam0->_fU0[0] );
            sub_1888( ", ", iParam0->_fU0[1] );
            sub_1888( ", ", iParam0->_fU0[4] );
            sub_1888( ", ", iParam0->_fU0[5] );
            sub_1694( ") \n" );
            l_U9 = 2;
            case 2:
            if (NETWORK_FIND_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_GET_NUMBER_OF_GAMES() == 0)
            {
                l_U9 = 9;
                break;
            }
            l_U10 = 0;
            SETTIMERA( 0 );
            case 5:
            if (l_U9 == 5)
            {
                if (l_U10 < (NETWORK_GET_NUMBER_OF_GAMES() - 1))
                {
                    l_U10++;
                }
                else
                {
                    l_U9 = 9;
                    break;
                }
            }
            else
            {
                l_U9 = 5;
            }
            if (TIMERA() < 20000)
            {
                if (NOT (NETWORK_JOIN_GAME( l_U10 )))
                {
                    break;
                }
            }
            else
            {
                l_U9 = 9;
                break;
            }
            l_U9 = 6;
            break;
            case 4:
            case 6:
            if (NETWORK_JOIN_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_JOIN_GAME_SUCCEEDED())
            {
                if (l_U9 == 4)
                {
                    NETWORK_CLEAR_SUMMONS();
                }
                l_U9 = 13;
            }
            else
            {
                switch (l_U9)
                {
                    case 4:
                    sub_867();
                    break;
                    default:
                    l_U9 = 5;
                    break;
                }
            }
            break;
            case 3:
            if (NOT NETWORK_JOIN_SUMMONS())
            {
                NETWORK_CLEAR_SUMMONS();
                sub_867();
                break;
            }
            l_U9 = 4;
            break;
            case 7:
            if (TIMERA() < 20000)
            {
                l_U10 = GET_SERVER_ID();
                if ((NETWORK_JOIN_GAME( l_U10 )) == 0)
                {
                    break;
                }
            }
            else
            {
                l_U9 = 14;
                break;
            }
            l_U9 = 8;
            break;
            case 8:
            if (NETWORK_JOIN_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_JOIN_GAME_SUCCEEDED())
            {
                l_U9 = 13;
            }
            else
            {
                l_U9 = 14;
            }
            break;
            case 9:
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (iParam0->_fU0[1] == 1)
                {
                    if ((sub_2875( iParam0->_fU0[0] )) == 2)
                    {
                        iParam0->_fU0[2] = NETWORK_GET_NUM_PARTY_MEMBERS() * 2;
                    }
                }
            }
            if (NOT (NETWORK_HOST_GAME_E1( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[2], iParam0->_fU0[3], iParam0->_fU0[4], iParam0->_fU0[5] )))
            {
                sub_867();
                break;
            }
            l_U9 = 11;
            g_U23804 = 0;
            case 11:
            if (NETWORK_HOST_GAME_PENDING())
            {
                break;
            }
            if (NOT NETWORK_HOST_GAME_SUCCEEDED())
            {
                sub_867();
                break;
            }
            l_U9 = 13;
            break;
            case 10:
            sub_3077( iParam0 );
            if (NOT (NETWORK_HOST_RENDEZVOUS_E1( iParam0->_fU0[0], iParam0->_fU0[2], iParam0->_fU0[4] )))
            {
                sub_867();
                break;
            }
            l_U9 = 11;
            break;
        }
    }
    return l_U9;
}

void sub_867()
{
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            if (# -NULL-0xc27bfa())
            {
                sub_928( "CP_ERROR_1PC" );
            }
            else if (# -NULL-0xc27c84())
            {
                sub_928( "CP_ERROR_1" );
            }
            else
            {
                sub_928( "WARNING_1PS3" );
            }
        }
    }
    else if ((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0))
    {
        if (# -NULL-0xc27bfa())
        {
            sub_928( "CP_ERROR_0PC" );
        }
        else if (# -NULL-0xc27c84())
        {
            sub_928( "CP_ERROR_1" );
        }
        else
        {
            sub_928( "WARNING_1PS3" );
        }
    }
    else if ((NOT NETWORK_IS_NETWORK_AVAILABLE()) AND (IS_IN_LAN_MODE() == 1))
    {
        if (# -NULL-0xc27bfa())
        {
            sub_928( "CP_ERROR_2PC" );
        }
    }
    else
    {
        switch (l_U9)
        {
            case 3:
            case 4:
            sub_928( "INVITE_FAILED" );
            break;
            default:
            if (# -NULL-0xc27c84())
            {
                sub_928( "CP_ERROR_0" );
            }
            else if (# -NULL-0xc27bfa())
            {
                if (# -sub_BDB8D0-0xbdd9a9())
                {
                    sub_928( "MP_NOPASS" );
                }
                else
                {
                    sub_928( "CP_ERROR_0PC" );
                }
            }
            else
            {
                sub_928( "WARNING_1PS3" );
            }
            break;
        }
    };;;
    return;
}

void sub_928(unknown uParam0)
{
    FORCE_LOADING_SCREEN( 0 );
    SET_MSG_FOR_LOADING_SCREEN( uParam0 );
    l_U9 = 14;
    return;
}

void sub_1694(unknown uParam0)
{
    return;
}

void sub_1888(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2875(unknown uParam0)
{
    switch (uParam0)
    {
        case 27:
        return 8;
        break;
        default:
    }
    return 0;
}

void sub_3077(int iParam0)
{
    int I;

    for ( I = 0; I <= (iParam0->_fU0 - 1); I++ )
    {
        iParam0->_fU0[I] = 0;
    }
    iParam0->_fU0[0] = 8;
    iParam0->_fU0[1] = 0;
    iParam0->_fU0[2] = 8;
    iParam0->_fU0[3] = 8;
    iParam0->_fU0[4] = 2;
    g_U865 = 2;
    iParam0->_fU0[5] = 0;
    return;
}

void sub_3465()
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

void sub_3576()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3641(unknown uParam0)
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

void sub_3811(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_3870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    (uParam3^) = 0;
    StrCopy( (uParam2^), "network", 32 );
    REQUEST_STREAMED_TXD( uParam2, 1 );
    switch (uParam0)
    {
        case 26:
        case 27:
        StrCopy( (uParam1^), "e2_deathmatch", 16 );
        break;
        case 28:
        case 29:
        StrCopy( (uParam1^), "e2_races", 16 );
        REQUEST_ADDITIONAL_TEXT( "RACESE2", 0 );
        (uParam3^) = 1;
        break;
        case 25:
        StrCopy( (uParam1^), "e2_quickDM", 16 );
        break;
        case 16:
        StrCopy( (uParam1^), "e2_freemode", 16 );
        break;
        case 8:
        StrCopy( (uParam1^), "e2_party_mode", 16 );
        break;
        default:
        sub_1888( "\n #### network_main.sc - Can't find script for this gameMode ", uParam0 );
        sub_1694( "\n" );
        StrCopy( (uParam1^), "e2_freemode", 16 );
        g_U864 = 16;
        break;
    }
    return;
}

void sub_4498(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_4509( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_4547( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4547( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_4547( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_4547( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_4547( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_4509( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_4547( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_4547( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_4547( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_4509( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_4547( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_4547( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4547( uParam0 ) );
        }
    }
    return;
}

void sub_4509(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_4547(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_4847()
{
    CREATE_CAR_GENERATOR( 2247.48900000, 756.15060000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 788747387, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[0] );
    CREATE_CAR_GENERATOR( 2230.76200000, 737.58500000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[1] );
    CREATE_CAR_GENERATOR( 2213.96600000, 719.40220000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 788747387, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[2] );
    CREATE_CAR_GENERATOR( 2133.43000000, 441.15310000, 22.71320000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[3] );
    CREATE_CAR_GENERATOR( 259.80000000, -361.48000000, 162.28000000, -0.50700000, -0.86200000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[4] );
    CREATE_CAR_GENERATOR( 390.21430000, -743.72410000, 3.69180000, 0.00000000, 2.00000000, 3.00000000, 788747387, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[5] );
    CREATE_CAR_GENERATOR( -177.28000000, -736.38000000, 185.86000000, -0.90300000, 0.43100000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[6] );
    CREATE_CAR_GENERATOR( -1111.64000000, -983.83000000, 8.15000000, 0.82300000, 0.56800000, 3.00000000, 788747387, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[7] );
    CREATE_CAR_GENERATOR( -708.67830000, 357.50220000, 3.07230000, 0.00000000, 2.00000000, 3.00000000, 788747387, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[8] );
    CREATE_CAR_GENERATOR( -2125.71500000, 145.09910000, 17.71310000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[9] );
    CREATE_CAR_GENERATOR( 63.27090000, 1254.96000000, 29.21610000, 0.00000000, 2.00000000, 3.00000000, 353883353, -1, -1, -1, -1, 1, 0, 0, ref g_U44651[10] );
    return;
}

void sub_5560()
{
    sub_5571( 0, 29 );
    sub_5571( 1, 9 );
    sub_5571( 2, 31 );
    sub_5571( 3, 30 );
    sub_5571( 4, 33 );
    sub_5571( 5, 32 );
    sub_5571( 6, 14 );
    sub_5571( 7, 34 );
    sub_5571( 8, 16 );
    sub_5571( 9, 35 );
    sub_5571( 10, 5 );
    sub_5571( 11, 36 );
    sub_5571( 12, 21 );
    sub_5571( 13, 1 );
    sub_5571( 14, 3 );
    return;
}

void sub_5571(unknown uParam0, unknown uParam1)
{
    g_U44678[uParam0] = uParam1;
    return;
}

int sub_5843(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_6529(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6685(unknown uParam0)
{
    REQUEST_SCRIPT( uParam0 );
    if (HAS_SCRIPT_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_7027()
{
    FORCE_LOADING_SCREEN( 1 );
    FAKE_DEATHARREST();
    WAIT( 0 );
    return;
}

void sub_8574()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

void sub_8623()
{
    sub_8632();
    sub_9364();
    g_U860 = 1;
    return;
}

void sub_8632()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U44650 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_1694( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_1694( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_1694( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U44650 = 1;
                }
            }
        }
        if ((NOT NETWORK_IS_RENDEZVOUS()) || (NETWORK_HAVE_ACCEPTED_INVITE()))
        {
            NETWORK_LEAVE_GAME();
            sub_1694( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1694( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U44650 = 1;
            }
        }
        else
        {
            sub_1694( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_1694( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_9364()
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
    uVar2._fU0[0] = g_U942._fU40;
    uVar2._fU0[1] = g_U942._fU108;
    uVar2._fU0[2] = g_U942._fU112;
    uVar2._fU0[3] = g_U942._fU396;
    if (g_U942._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (g_U942._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = g_U942._fU656;
    if ((g_U16862[12]._fU212._fU0) || (g_U942._fU1488))
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

void sub_9770()
{
    int iVar2;

    iVar2 = GET_CURRENT_EPISODE();
    PRINTSTRING( "Just entered Start_A_Network_Game_From_A_Network_Game\n" );
    if (iVar2 != g_U865)
    {
        switch (g_U865)
        {
            case 0:
            if (g_U942._fU396 != 0)
            {
                g_U942._fU396 = 0;
            }
            break;
            case 1:
            if (g_U942._fU396 != 13)
            {
                g_U942._fU396 = 13;
            }
            break;
        }
    }
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U865 );
    WAIT( 0 );
    return;
}

void sub_10149(unknown uParam0)
{
    return sub_10161( uParam0, 0 );
}

int sub_10161(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        switch (uParam0)
        {
            case 28: return 16;
            case 29: return 16;
            case 26: return 16;
            case 27: return 16;
            case 16: return 16;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 26: return 32;
            case 27: return 32;
            case 25: return 32;
            case 28: return 32;
            case 29: return 32;
            case 16: return 32;
            case 8: return 8;
        }
    }
    PRINTSTRING( "##### MAX_PLAYERS_FOR_GAMEMODE has been passed in the gamemode " );
    PRINTINT( uParam0 );
    PRINTNL();
    return -1;
}
