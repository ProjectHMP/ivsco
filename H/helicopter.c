void main()
{
    int iVar2;

    l_U4 = 0;
    l_U5 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 0;
    l_U126 = -1;
    l_U130 = 0;
    l_U131 = 1;
    l_U132 = 1;
    l_U140 = 150.00000000;
    l_U230 = 0;
    l_U231 = 150.00000000;
    l_U281 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U574 = 8;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U580 = -1;
    l_U581 = -1;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U605 = 0;
    l_U606 = 0;
    l_U607 = 0;
    l_U608 = 0;
    l_U609 = {787.80880000, 153.64460000, 30.75240000};
    l_U612 = 196.71320000;
    l_U613 = {785.50150000, 152.45710000, 30.75240000};
    l_U616 = 339.37170000;
    l_U617 = {786.69010000, 150.08610000, 30.75240000};
    l_U620 = 128.98470000;
    l_U621 = {788.66780000, 150.67280000, 30.75240000};
    l_U624 = 65.41830000;
    l_U628 = {786.56450000, 150.86870000, 26.83720000};
    l_U631 = 72.18380000;
    l_U632 = {711.11080000, 91.03560000, 5.72270000};
    l_U641 = "BHR1_GOBB";
    l_U648 = "BHR1_BB";
    l_U655 = "BHR1_GOCIV";
    l_U662 = "BHR1_CIV";
    l_U669 = "BHR1_GODHP";
    l_U676 = "BHR1_DHP";
    l_U683 = "BHR1_ZIR";
    l_U690 = "BHR1_GOZIR";
    l_U697 = "BHR1_GOCC";
    l_U704 = "BHR1_CC";
    l_U711 = "BHR1_GOTRI";
    l_U718 = "BHR1_TRI";
    l_U725 = "BHR1_GOGET";
    l_U732 = "BHR1_GET";
    l_U739 = "BHR1_GOGET2";
    l_U746 = "BHR1_GET2";
    l_U753 = "BHR1_LOW";
    l_U760 = "BHR1_HIGH";
    l_U767 = "BHR1_CRASH";
    l_U774 = "BHR1_BACK";
    l_U781 = "BHR1_DONE";
    l_U788 = "BHR1_DRIVE";
    l_U795 = "FCB3_HELI1";
    l_U802 = "FCB3_HELI2";
    l_U809 = "FCB3_HELI3";
    l_U816 = "FCB3_GIRL1A";
    l_U823 = "FCB3_GIRL2A";
    l_U830 = "FCB3_GIRL3A";
    l_U837 = "FCB3_GIRL4A";
    l_U844 = "FCB3_GIRL5A";
    l_U851 = "FCB3_GIRL6A";
    l_U858 = "FCB2_ARRHELI";
    l_U865 = "FCB2_ACNLG";
    l_U866 = -1660661558;
    l_U867 = 1473654742;
    l_U868 = 8;
    l_U897 = 0;
    l_U898 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1088();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_1297() ))
        {
            sub_2306();
            iVar2 = 0;
            switch (l_U484)
            {
                case 0:
                sub_5240();
                sub_6602();
                l_U484 = 1;
                break;
                case 1:
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    if (DOES_BLIP_EXIST( l_U893 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U893, 0 );
                    }
                    sub_7504();
                    iVar2 = sub_7694( ref l_U869 );
                    GET_GROUP_SIZE( sub_7748(), ref l_U549, ref l_U550 );
                    if (l_U550 == 1)
                    {
                        GET_GROUP_MEMBER( sub_7748(), 0, ref l_U896 );
                    }
                    else if (l_U550 == 2)
                    {
                        GET_GROUP_MEMBER( sub_7748(), 0, ref l_U896 );
                        GET_GROUP_MEMBER( sub_7748(), 1, ref l_U894 );
                    }
                    else if (l_U550 == 3)
                    {
                        GET_GROUP_MEMBER( sub_7748(), 0, ref l_U896 );
                        GET_GROUP_MEMBER( sub_7748(), 1, ref l_U894 );
                        GET_GROUP_MEMBER( sub_7748(), 2, ref l_U895 );
                    };;;
                    GET_GAME_TIMER( ref l_U571 );
                    FREEZE_CAR_POSITION( l_U870, 1 );
                    sub_7976();
                    l_U484 = 2;
                }
                break;
                case 2:
                sub_8076();
                GET_GAME_TIMER( ref l_U601 );
                l_U602 = l_U601 - l_U600;
                if (l_U602 > 1000)
                {
                    if (l_U897 > 3)
                    {
                        if (IS_SCREEN_FADED_IN())
                        {
                            if (sub_9247())
                            {
                                l_U484 = 5;
                            }
                        }
                    }
                }
                break;
                case 5:
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    sub_1270( 0 );
                    if (DOES_CAM_EXIST( l_U899 ))
                    {
                        DESTROY_CAM( l_U899 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U896 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U896 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U894 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U894 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U895 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U895 );
                    }
                    sub_9525( sub_1390(), l_U870, -1 );
                    sub_9525( l_U896, l_U870, 0 );
                    sub_9525( l_U894, l_U870, 1 );
                    sub_9525( l_U895, l_U870, 2 );
                    if (NOT (IS_CHAR_DEAD( l_U896 )))
                    {
                        sub_2640( 0, sub_1390(), "NIKO", 0 );
                        sub_2640( 1, l_U896, "BRUCIE", 0 );
                    }
                    RESET_STUCK_TIMER( l_U870, 3 );
                    RESET_STUCK_TIMER( l_U870, 2 );
                    RESET_STUCK_TIMER( l_U870, 1 );
                    CLOSE_ALL_CAR_DOORS( l_U870 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    FREEZE_CAR_POSITION( l_U870, 0 );
                    LOCK_CAR_DOORS( l_U870, 4 );
                }
                GET_GAME_TIMER( ref l_U568 );
                l_U484 = 6;
                break;
                case 6:
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U896 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U896, l_U870 ))
                        {
                            l_U494 = 1;
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U894 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U894, l_U870 ))
                        {
                            l_U495 = 1;
                        }
                    }
                    else
                    {
                        l_U495 = 1;
                    }
                    if (NOT (IS_CHAR_DEAD( l_U895 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U895, l_U870 ))
                        {
                            l_U496 = 1;
                        }
                    }
                    else
                    {
                        l_U496 = 1;
                    }
                    if (((l_U496 == 1) AND (l_U495 == 1)) AND (l_U494 == 1))
                    {
                        CLEAR_PRINTS();
                        sub_10105( l_U896 );
                        sub_10105( l_U894 );
                        sub_10105( l_U895 );
                        SET_PLAYER_CONTROL( sub_1297(), 1 );
                        l_U484 = 7;
                    }
                }
                break;
                case 7:
                sub_10215();
                sub_11960();
                break;
                case 8:
                sub_10215();
                sub_13033( l_U561 );
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    if (LOCATE_CAR_3D( l_U870, l_U524[l_U561]._fU0, l_U524[l_U561]._fU4, l_U524[l_U561]._fU8, 60.00000000, 60.00000000, 75.00000000, 0 ))
                    {
                        sub_1576( 0 );
                        if (DOES_BLIP_EXIST( l_U883[l_U561] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U883[l_U561], 0 );
                        }
                        SET_PLAYER_CONTROL( sub_1297(), 0 );
                        TASK_HELI_MISSION( sub_1390(), l_U870, 0, 0, l_U499[l_U561]._fU0, l_U499[l_U561]._fU4, l_U499[l_U561]._fU8, 1, 30.00000000, 30, 0.00000000, 70, 60 );
                        g_U64602[l_U561] = 1;
                        l_U484 = 9;
                    }
                    else
                    {
                        sub_14826();
                    }
                }
                break;
                case 9:
                sub_16173();
                break;
                case 11:
                sub_21132();
                break;
                case 12:
                switch (l_U575)
                {
                    case 0:
                    GET_GAME_TIMER( ref l_U572 );
                    l_U573 = l_U572 - l_U571;
                    INCREMENT_INT_STAT_NO_MESSAGE( 67, l_U573 );
                    if (IS_PLAYER_PLAYING( sub_1297() ))
                    {
                        CLEAR_WANTED_LEVEL( sub_1297() );
                    }
                    l_U575++;
                    break;
                    case 1:
                    SET_PLAYER_CONTROL( sub_1297(), 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U575++;
                    break;
                    case 2:
                    sub_1088();
                    break;
                }
                break;
            }
        }
    }
    return;
}

void sub_1088()
{
    CLEAR_PRINTS();
    sub_1105( 0 );
    if (l_U484 == 9)
    {
        if (l_U486 == 2)
        {
            sub_1270( 0 );
            sub_1543( ref l_U579 );
        }
    }
    sub_1105( 0 );
    sub_1576( 0 );
    sub_1716();
    CLEAR_PRINTS();
    if (l_U490 == 1)
    {
        sub_1782( 3 );
        sub_1958();
    }
    else if (l_U491 == 1)
    {
        sub_1782( 6 );
        sub_1958();
    }
    else if (l_U492 == 1)
    {
        sub_1782( 4 );
        sub_1958();
    }
    else if (l_U493 == 1)
    {
        sub_1782( 0 );
        sub_1958();
    }
    else
    {
        sub_1782( 3 );
        sub_1958();
    };;;;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1105(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 1) AND (g_U8392 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_1270(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_1297() ))
    {
        SET_PLAYER_CONTROL( sub_1297(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_1297(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_1390() )))
    {
        CLEAR_CHAR_TASKS( sub_1390() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1390(), 1 );
    }
    else
    {
        sub_1481();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1390(), 0 );
    }
    return;
}

void sub_1297()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1390()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1481()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1543(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_1576(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_1716()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1782(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_1849( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

int sub_1849(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

void sub_1958()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_2013();
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU20 == 8)
        {
            g_U32898._fU20 = 3;
        }
    }
    else if (NOT (g_U32898._fU4 == 9))
    {
        if (g_U32898._fU16 == 8)
        {
            g_U32898._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U32898._fU28 = 1;
    return;
}

void sub_2013()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_2306()
{
    switch (l_U576)
    {
        case 0:
        if (l_U870 != nil)
        {
            if (NOT (IS_CAR_DEAD( l_U870 )))
            {
                if (sub_2403( l_U870 ))
                {
                    sub_2509();
                    sub_2935( l_U767, ref l_U761, 6, 1 );
                    l_U491 = 1;
                    l_U576++;
                }
                if (NOT (IS_VEH_DRIVEABLE( l_U870 )))
                {
                    sub_2509();
                    sub_2935( l_U767, ref l_U761, 6, 1 );
                    l_U491 = 1;
                    l_U576++;
                }
            }
        }
        if (l_U896 != nil)
        {
            if (DOES_CHAR_EXIST( l_U896 ))
            {
                if (IS_CHAR_INJURED( l_U896 ))
                {
                    l_U492 = 1;
                    l_U576++;
                }
            }
        }
        if (l_U894 != nil)
        {
            if (DOES_CHAR_EXIST( l_U894 ))
            {
                if (IS_CHAR_INJURED( l_U894 ))
                {
                    l_U492 = 1;
                    l_U576++;
                }
            }
        }
        if (l_U895 != nil)
        {
            if (DOES_CHAR_EXIST( l_U895 ))
            {
                if (IS_CHAR_INJURED( l_U895 ))
                {
                    l_U492 = 1;
                    l_U576++;
                }
            }
        }
        break;
        case 1:
        CLEAR_HELP();
        sub_1716();
        if (NOT (sub_4190( l_U761 )))
        {
            DO_SCREEN_FADE_OUT( 3000 );
            l_U576++;
        }
        break;
        case 2:
        CLEAR_HELP();
        sub_1716();
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_CHAR_DEAD( sub_1390() )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1390() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_1390(), l_U632._fU0, l_U632._fU4, l_U632._fU8 - 1 );
                    SET_CHAR_HEADING( sub_1390(), l_U631 - 180 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_1390(), l_U632._fU0, l_U632._fU4, l_U632._fU8 - 1 );
                    SET_CHAR_HEADING( sub_1390(), l_U631 - 180 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U896 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U896 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U896, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U896, l_U631 - 180 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U896, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U896, l_U631 - 180 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U894 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U894 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U894, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U894, l_U631 - 180 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U894, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U894, l_U631 - 180 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U895 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U895 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U895, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U895, l_U631 - 180 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U895, l_U628._fU0 - 5, l_U628._fU4, l_U628._fU8 - 1 );
                    SET_CHAR_HEADING( l_U895, l_U631 - 180 );
                }
            }
            SET_CAM_BEHIND_PED( sub_1390() );
            l_U576++;
        }
        break;
        case 3:
        if (IS_PLAYER_PLAYING( sub_1297() ))
        {
            SET_PLAYER_CONTROL( sub_1297(), 1 );
        }
        l_U576++;
        break;
        case 4:
        sub_1088();
        break;
    }
    return;
}

int sub_2403(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if ((((CHECK_STUCK_TIMER( uParam0, 3, 60000 )) || (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))) || (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))) || (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2509()
{
    sub_2521( "" );
    sub_2640( 0, sub_1390(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U896 )))
    {
        sub_2640( 1, l_U896, "BRUCIE", 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U894 )))
    {
        sub_2640( 2, l_U894, "BRUCIE_BABE_1", 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U895 )))
    {
        sub_2640( 3, l_U895, "BRUCIE_BABE_2", 0 );
    }
    return;
}

void sub_2521(unknown uParam0)
{
    StrCopy( ref l_U7._fU0, uParam0, 16 );
    sub_2538();
    return;
}

void sub_2538()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U7._fU16[I]._fU0 = nil;
        StrCopy( ref l_U7._fU16[I]._fU4, "", 32 );
        l_U7._fU344[I] = 0;
    }
    return;
}

void sub_2640(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U7._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U7._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2720( "\n PED NUMBER ", uParam0 );
    sub_2760( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2720(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2760(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2935(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_2956( uParam0, ref l_U7._fU0, uParam1, uParam2, uParam3 );
}

void sub_2956(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_3010( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_3010(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_3032( iParam1 )))
    {
        return 0;
    }
    l_U7._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_3720( ref g_U8395, ref l_U7 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_3032(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3109( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_3109( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_3109( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_3109(unknown uParam0)
{
    return;
}

void sub_3720(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_4190(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3109( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3109( "\n speech is not playing" );
    }
    return 0;
}

void sub_5240()
{
    sub_5249();
    if (DOES_BLIP_EXIST( l_U892 ))
    {
        REMOVE_BLIP( l_U892 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U892 )))
    {
        ADD_BLIP_FOR_COORD( l_U628._fU0, l_U628._fU4, l_U628._fU8, ref l_U892 );
    }
    if (DOES_BLIP_EXIST( l_U892 ))
    {
        CHANGE_BLIP_COLOUR( l_U892, 5 );
        CHANGE_BLIP_DISPLAY( l_U892, 0 );
    }
    REQUEST_MODEL( l_U866 );
    while (NOT (HAS_MODEL_LOADED( l_U866 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U867 );
    while (NOT (HAS_MODEL_LOADED( l_U867 )))
    {
        WAIT( 0 );
    }
    sub_5606( l_U868 );
    while (NOT (sub_6335( l_U868 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_IN_ANY_HELI( sub_1390() )))
    {
        if (HAS_MODEL_LOADED( l_U866 ))
        {
            CREATE_CAR( l_U866, l_U628._fU0, l_U628._fU4, l_U628._fU8, ref l_U870, 1 );
            SET_CAR_HEADING( l_U870, l_U631 );
            SET_VEH_HAS_STRONG_AXLES( l_U870, 1 );
            CHANGE_CAR_COLOUR( l_U870, 113, 76 );
        }
    }
    else
    {
        GET_CAR_CHAR_IS_USING( sub_1390(), ref l_U870 );
    }
    if (IS_VEH_DRIVEABLE( l_U870 ))
    {
        ADD_BLIP_FOR_CAR( l_U870, ref l_U893 );
        CHANGE_BLIP_COLOUR( l_U893, 3 );
        CHANGE_BLIP_DISPLAY( l_U893, 0 );
    }
    sub_2521( "" );
    return;
}

void sub_5249()
{
    int J;
    int I;
    int iVar4;

    iVar4 = 0;
    for ( J = 0; J <= (l_U574 - 1); J++ )
    {
        if (g_U64602[J] == 1)
        {
            iVar4++;
        }
        if (J == (l_U574 - 1))
        {
            if (iVar4 == (l_U574 - 1))
            {
                for ( I = 0; I <= (l_U574 - 1); I++ )
                {
                    g_U64602[I] = 0;
                }
            }
        }
    }
    return;
}

void sub_5606(unknown uParam0)
{
    REQUEST_MODEL( sub_5617( uParam0 ) );
    return;
}

int sub_5617(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_6280( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6280(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6335(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5617( uParam0 ) );
}

void sub_6602()
{
    int I;

    l_U499[0] = {546, 65180, 55};
    l_U499[1] = {153, 65133, 26.70000000};
    l_U499[2] = {65419, 65160, 136};
    l_U499[3] = {65461, 65380, 39};
    l_U499[4] = {18, 52, 230};
    l_U499[5] = {5.80000000, 143, 251};
    l_U499[6] = {65511, 485, 61};
    l_U499[7] = {-229.08410000, -153.25510000, 289.48960000};
    l_U524[0] = {546, 65180, 55};
    l_U524[1] = {106, 65104, 43};
    l_U524[2] = {65419, 65160, 136};
    l_U524[3] = {65458, 65405, 40};
    l_U524[4] = {18, 52, 225};
    l_U524[5] = {-4, 181, 249};
    l_U524[6] = {65514, 565, 78};
    l_U524[7] = {65255, 65439, 313};
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    sub_6985( "CIA5", 0 );
    sub_7135( "CIA5" );
    for ( I = 0; I <= (l_U574 - 1); I++ )
    {
        if (NOT (DOES_BLIP_EXIST( l_U883[I] )))
        {
            ADD_BLIP_FOR_COORD( l_U524[I]._fU0, l_U524[I]._fU4, l_U524[I]._fU8, ref l_U883[I] );
            CHANGE_BLIP_COLOUR( l_U883[I], 5 );
            CHANGE_BLIP_DISPLAY( l_U883[I], 0 );
        }
    }
    return;
}

void sub_6985(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_7021())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_7021()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_7135(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_7504()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_7583();
        }
        return;
    }
    g_U10978 = 1;
    sub_7655();
    return;
}

void sub_7583()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_7655()
{
    g_U32896._fU4 = 0;
    return;
}

int sub_7694(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_7748()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_7976()
{
    sub_2521( "FCB2AU" );
    sub_2640( 0, sub_1390(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U896 )))
    {
        sub_2640( 1, l_U896, "BRUCIE", 0 );
    }
    return;
}

void sub_8076()
{
    if (NOT (IS_CHAR_INJURED( l_U896 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U894 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U895 )))
            {
                switch (l_U897)
                {
                    case 0:
                    if (NOT (sub_4190( l_U859 )))
                    {
                        if (IS_SCREEN_FADED_IN())
                        {
                            DO_SCREEN_FADE_OUT( 3000 );
                        }
                        sub_8243( l_U896 );
                        sub_8243( l_U894 );
                        sub_8243( l_U895 );
                        l_U897 = 1;
                    }
                    break;
                    case 1:
                    if (IS_SCREEN_FADED_OUT())
                    {
                        SET_PLAYER_CONTROL( sub_1297(), 0 );
                        sub_8384( l_U895, 789.05850000, 144.25330000, 26.83650000, 41.26820000 );
                        sub_8384( l_U894, 790.82980000, 147.04410000, 26.83720000, 135.30350000 );
                        sub_8384( sub_1390(), 787.35030000, 147.72600000, 26.83610000, 86.69440000 );
                        sub_8384( l_U896, 792.79080000, 152.91750000, 26.83720000, 73.64710000 );
                        LOAD_SCENE( 792.79080000, 152.91750000, 26.83720000 );
                        GET_GAME_TIMER( ref l_U900 );
                        l_U897 = 2;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref l_U901 );
                    l_U902 = l_U901 - l_U900;
                    if (l_U902 > 1000)
                    {
                        if (IS_VEH_DRIVEABLE( l_U870 ))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( sub_1390(), l_U870, -1 );
                            if (NOT (IS_CHAR_INJURED( l_U896 )))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U896, l_U870, -1, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U894 )))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U894, l_U870, -1, 1 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U895 )))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U895, l_U870, -1, 2 );
                            }
                        }
                        sub_8875( 760.65570000, 116.55500000, 58.21360000, -49.09748000, -0.00000100, -55.91641000, 45, l_U899 );
                        DO_SCREEN_FADE_IN( 3000 );
                        l_U897 = 3;
                    }
                    break;
                    case 3:
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_7976();
                        if (sub_2956( l_U858, "FCB2AU", ref l_U852, 6, 1 ))
                        {
                            GET_GAME_TIMER( ref l_U900 );
                            l_U897 = 4;
                        }
                    }
                    break;
                    case 4:
                    GET_GAME_TIMER( ref l_U901 );
                    l_U902 = l_U901 - l_U900;
                    if (l_U902 > 4000)
                    {
                        if (NOT (sub_4190( l_U852 )))
                        {
                            l_U897 = 11;
                        }
                    }
                    break;
                    case 11:
                    l_U484 = 5;
                    break;
                }
            }
        }
    }
    return;
}

void sub_8243(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_GROUP_MEMBER( uParam0, sub_7748() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
    }
    return;
}

void sub_8384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_1390() )))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
        else
        {
            SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
    }
    return;
}

void sub_8875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( uParam7 ))
    {
        DESTROY_CAM( uParam7 );
    }
    CREATE_CAM( 14, ref uParam7 );
    SET_CAM_POS( uParam7, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( uParam7, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_FOV( uParam7, uParam6 );
    SET_CAM_ACTIVE( uParam7, 1 );
    SET_CAM_PROPAGATE( uParam7, 1 );
    return;
}

int sub_9247()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9525(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_1390() )))
            {
                WARP_CHAR_FROM_CAR_TO_CAR( uParam0, uParam1, iParam2 );
            }
            else if (iParam2 == -1)
            {
                WARP_CHAR_INTO_CAR( uParam0, uParam1 );
            }
            else
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( uParam0, uParam1, iParam2 );
            }
        }
    }
    return;
}

void sub_10105(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_7748() )))
        {
            SET_GROUP_MEMBER( sub_7748(), uParam0 );
        }
    }
    return;
}

void sub_10215()
{
    int iVar2;
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( l_U896 )))
    {
        switch (l_U488)
        {
            case 0:
            if (l_U576 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U870 ))
                {
                    GET_GAME_TIMER( ref l_U572 );
                    l_U573 = l_U572 - l_U571;
                    if (l_U607 == 0)
                    {
                        sub_10370();
                    }
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (IS_CONTROL_PRESSED( 0, 3 ))
                        {
                            GET_GAME_TIMER( ref l_U569 );
                            l_U570 = l_U569 - l_U568;
                            iVar2 = 6000 - l_U570;
                            uVar3 = TO_FLOAT( iVar2 / 1000 );
                            l_U608 = (FLOOR( uVar3 )) + 1;
                            switch (l_U605)
                            {
                                case 0:
                                if (l_U608 > 1)
                                {
                                    PRINT_HELP_WITH_NUMBER( "Heli_warn1", l_U608 );
                                }
                                else
                                {
                                    PRINT_HELP_WITH_NUMBER( "Heli_warn2", l_U608 );
                                }
                                l_U606 = l_U608;
                                l_U605++;
                                break;
                                case 1:
                                if (l_U606 != l_U608)
                                {
                                    l_U605--;
                                }
                                break;
                            }
                            if (l_U570 > 6000)
                            {
                                SET_PLAYER_CONTROL( sub_1297(), 0 );
                                TASK_HELI_MISSION( sub_1390(), l_U870, 0, 0, l_U628._fU0, l_U628._fU4, l_U628._fU8, 5, 0.00000000, 0, -1, -1, -1 );
                                sub_1105( 0 );
                                l_U490 = 1;
                                l_U488 = 1;
                            }
                        }
                        else
                        {
                            l_U605 = 0;
                            sub_11289( "Heli_warn1", l_U606 );
                            sub_11289( "Heli_warn2", l_U606 );
                            GET_GAME_TIMER( ref l_U568 );
                        }
                    }
                }
            }
            break;
            case 1:
            sub_11399( "brucheli_quitA" );
            DO_SCREEN_FADE_OUT( 2000 );
            l_U488 = 2;
            break;
            case 2:
            if (IS_SCREEN_FADED_OUT())
            {
                l_U488 = 3;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_1390() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_1390(), l_U609._fU0, l_U609._fU4, l_U609._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_1390(), l_U609._fU0, l_U609._fU4, l_U609._fU8 );
            }
            SET_CHAR_HEADING( sub_1390(), l_U612 );
            if (IS_CHAR_IN_ANY_CAR( l_U896 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U896, l_U613._fU0, l_U613._fU4, l_U613._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U896, l_U613._fU0, l_U613._fU4, l_U613._fU8 );
            }
            SET_CHAR_HEADING( l_U896, l_U616 );
            if (NOT (IS_CHAR_DEAD( l_U894 )))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U894, l_U617._fU0, l_U617._fU4, l_U617._fU8 );
                SET_CHAR_HEADING( l_U894, l_U620 );
            }
            if (NOT (IS_CHAR_DEAD( l_U895 )))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U895, l_U621._fU0, l_U621._fU4, l_U621._fU8 );
                SET_CHAR_HEADING( l_U895, l_U624 );
            }
            SET_CAM_BEHIND_PED( sub_1390() );
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                DELETE_CAR( ref l_U870 );
            }
            GET_GAME_TIMER( ref l_U562 );
            l_U488 = 4;
            break;
            case 4:
            GET_GAME_TIMER( ref l_U563 );
            l_U564 = l_U563 - l_U562;
            l_U488 = 5;
            break;
            case 5:
            l_U484 = 12;
            break;
        }
    }
    return;
}

void sub_10370()
{
    if (g_U64660 == 0)
    {
        if (NOT (IS_CONTROL_PRESSED( 0, 3 )))
        {
            switch (l_U603)
            {
                case 0:
                if (# -NULL-0xc238b5( 0 ))
                {
                    PRINT_HELP( "6CIA5_HELP1" );
                }
                else
                {
                    PRINT_HELP( "CIA5_HELP1" );
                }
                GET_GAME_TIMER( ref l_U597 );
                l_U603++;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U598 );
                l_U599 = l_U598 - l_U597;
                if (l_U599 > 6000)
                {
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        PRINT_HELP( "6CIA5_HELP2" );
                    }
                    else
                    {
                        PRINT_HELP( "CIA5_HELP2" );
                    }
                    GET_GAME_TIMER( ref l_U597 );
                    l_U603++;
                }
                break;
                case 2:
                GET_GAME_TIMER( ref l_U598 );
                l_U599 = l_U598 - l_U597;
                if (l_U599 > 6000)
                {
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        PRINT_HELP( "6CIA5_HELP3" );
                    }
                    else
                    {
                        PRINT_HELP( "CIA5_HELP3" );
                    }
                    GET_GAME_TIMER( ref l_U597 );
                    l_U603++;
                }
                case 3:
                GET_GAME_TIMER( ref l_U598 );
                l_U599 = l_U598 - l_U597;
                if (l_U599 > 6000)
                {
                    sub_1716();
                    PRINT_HELP( "brucheli_quitA" );
                    l_U607 = 1;
                }
                break;
            }
        }
    }
    else
    {
        PRINT_HELP( "brucheli_quitA" );
        l_U607 = 1;
    }
    return;
}

void sub_11289(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_11399(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_11960()
{
    switch (l_U485)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U574, ref l_U561 );
        if (g_U64602[l_U561] == 0)
        {
            l_U485 = 2;
        }
        break;
        case 2:
        sub_2509();
        if (l_U561 == 0)
        {
            if (sub_2935( l_U641, ref l_U635, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 1)
        {
            if (sub_2935( l_U669, ref l_U663, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 2)
        {
            if (sub_2935( l_U655, ref l_U649, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 3)
        {
            if (sub_2935( l_U711, ref l_U705, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 4)
        {
            if (sub_2935( l_U725, ref l_U719, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 5)
        {
            if (sub_2935( l_U683, ref l_U677, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 6)
        {
            if (sub_2935( l_U697, ref l_U691, 6, 1 ))
            {
                l_U485 = 1;
            }
        }
        else if (l_U561 == 7)
        {
            if (sub_2935( l_U739, ref l_U733, 6, 1 ))
            {
                l_U485 = 1;
            }
        };;;;;;;;
        if (l_U564 > 11500)
        {
            l_U485 = 1;
        }
        break;
        case 1:
        if (DOES_BLIP_EXIST( l_U883[l_U561] ))
        {
            CHANGE_BLIP_DISPLAY( l_U883[l_U561], 4 );
            l_U485 = 3;
        }
        break;
        case 3:
        if (NOT (sub_4190( l_U733 )))
        {
            if (NOT (sub_4190( l_U691 )))
            {
                if (NOT (sub_4190( l_U677 )))
                {
                    if (NOT (sub_4190( l_U719 )))
                    {
                        if (NOT (sub_4190( l_U705 )))
                        {
                            if (NOT (sub_4190( l_U649 )))
                            {
                                if (NOT (sub_4190( l_U663 )))
                                {
                                    if (NOT (sub_4190( l_U635 )))
                                    {
                                        if (l_U561 == 0)
                                        {
                                            PRINT_NOW( "bridge", 7500, 1 );
                                        }
                                        else if (l_U561 == 1)
                                        {
                                            PRINT_NOW( "DHeart", 7500, 1 );
                                        }
                                        else if (l_U561 == 2)
                                        {
                                            PRINT_NOW( "Citadel", 7500, 1 );
                                        }
                                        else if (l_U561 == 3)
                                        {
                                            PRINT_NOW( "Triangle", 7500, 1 );
                                        }
                                        else if (l_U561 == 4)
                                        {
                                            PRINT_NOW( "GetALife", 7500, 1 );
                                        }
                                        else if (l_U561 == 5)
                                        {
                                            PRINT_NOW( "Zircon", 7500, 1 );
                                        }
                                        else if (l_U561 == 6)
                                        {
                                            PRINT_NOW( "Church", 7500, 1 );
                                        }
                                        else if (l_U561 == 7)
                                        {
                                            PRINT_NOW( "erection", 7500, 1 );
                                        };;;;;;;;
                                        GET_GAME_TIMER( ref l_U562 );
                                        l_U485 = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U563 );
        l_U564 = l_U563 - l_U562;
        if (l_U564 > 7500)
        {
            l_U484 = 8;
        }
        break;
    }
    return;
}

void sub_13033(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( l_U870 ))
    {
        if (LOCATE_CAR_2D( l_U870, l_U524[l_U561]._fU0, l_U524[l_U561]._fU4, 100.00000000, 100.00000000, 0 ))
        {
            GET_CAR_COORDINATES( l_U870, ref l_U625._fU0, ref l_U625._fU4, ref l_U625._fU8 );
            switch (l_U577)
            {
                case 0:
                if (l_U625._fU8 > (l_U499[uParam0]._fU8 + 50))
                {
                    sub_13218();
                    sub_2509();
                    sub_2935( l_U753, ref l_U747, 6, 1 );
                    l_U577 = 1;
                }
                if (l_U625._fU8 < (l_U499[uParam0]._fU8 - 50))
                {
                    sub_13218();
                    sub_2509();
                    sub_2935( l_U760, ref l_U754, 6, 1 );
                    l_U577 = 2;
                }
                break;
                case 1:
                if (NOT (sub_4190( l_U747 )))
                {
                    GET_GAME_TIMER( ref l_U562 );
                    sub_14016();
                    l_U577 = 3;
                }
                break;
                case 2:
                if (NOT (sub_4190( l_U754 )))
                {
                    GET_GAME_TIMER( ref l_U562 );
                    sub_14016();
                    l_U577 = 3;
                }
                break;
                case 3:
                GET_GAME_TIMER( ref l_U563 );
                l_U564 = l_U563 - l_U562;
                if (l_U564 > 500)
                {
                    l_U577 = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_13218()
{
    if (sub_4190( l_U789 ))
    {
        sub_13247( ref l_U789 );
    }
    if (sub_4190( l_U796 ))
    {
        sub_13247( ref l_U796 );
    }
    if (sub_4190( l_U803 ))
    {
        sub_13247( ref l_U803 );
    }
    if (sub_4190( l_U810 ))
    {
        sub_13247( ref l_U810 );
    }
    if (sub_4190( l_U817 ))
    {
        sub_13247( ref l_U817 );
    }
    if (sub_4190( l_U824 ))
    {
        sub_13247( ref l_U824 );
    }
    if (sub_4190( l_U831 ))
    {
        sub_13247( ref l_U831 );
    }
    if (sub_4190( l_U838 ))
    {
        sub_13247( ref l_U838 );
    }
    if (sub_4190( l_U845 ))
    {
        sub_13247( ref l_U845 );
    }
    return;
}

int sub_13247(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_3109( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_3109( "\n CONVERSATION PAUSED AT LINE " );
            sub_13403( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_3109( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_3109( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_3109( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_13403(unknown uParam0)
{
    return;
}

void sub_14016()
{
    if (sub_14031( l_U789 ))
    {
        sub_14068( l_U795, ref l_U789, 6, 1 );
    }
    if (sub_14031( l_U796 ))
    {
        sub_14068( l_U802, ref l_U796, 6, 1 );
    }
    if (sub_14031( l_U803 ))
    {
        sub_14068( l_U809, ref l_U803, 6, 1 );
    }
    if (sub_14031( l_U810 ))
    {
        sub_14068( l_U816, ref l_U810, 6, 1 );
    }
    if (sub_14031( l_U817 ))
    {
        sub_14068( l_U823, ref l_U817, 6, 1 );
    }
    if (sub_14031( l_U824 ))
    {
        sub_14068( l_U830, ref l_U824, 6, 1 );
    }
    if (sub_14031( l_U831 ))
    {
        sub_14068( l_U837, ref l_U831, 6, 1 );
    }
    if (sub_14031( l_U838 ))
    {
        sub_14068( l_U844, ref l_U838, 6, 1 );
    }
    if (sub_14031( l_U845 ))
    {
        sub_14068( l_U851, ref l_U845, 6, 1 );
    }
    return;
}

void sub_14031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_14068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14089( uParam0, ref l_U7._fU0, uParam1, uParam2, uParam3 );
}

int sub_14089(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_3010( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_14826()
{
    if (NOT (IS_CHAR_INJURED( l_U896 )))
    {
        switch (l_U581)
        {
            case -1:
            if (NOT (sub_4190( l_U635 )))
            {
                if (NOT (sub_4190( l_U663 )))
                {
                    if (NOT (sub_4190( l_U649 )))
                    {
                        if (NOT (sub_4190( l_U705 )))
                        {
                            if (NOT (sub_4190( l_U719 )))
                            {
                                if (NOT (sub_4190( l_U677 )))
                                {
                                    if (NOT (sub_4190( l_U691 )))
                                    {
                                        if (NOT (sub_4190( l_U733 )))
                                        {
                                            GET_GAME_TIMER( ref l_U592 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U596 );
                                            if (g_U9130[0]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 0;
                                            }
                                            else if (g_U9130[1]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 1;
                                            }
                                            else if (g_U9130[2]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 2;
                                            }
                                            else if (g_U9130[3]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 3;
                                            }
                                            else if (g_U9130[4]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 4;
                                            }
                                            else if (g_U9130[5]._fU0 == 0)
                                            {
                                                sub_15118();
                                                l_U581 = 5;
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( l_U896, "LISTEN_TO_RADIO", 0, 0, 0 );
                                                l_U581 = 6;
                                            };;;;;;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 0:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U816, ref l_U810, 6, 1 ))
                {
                    g_U9130[0]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U823, ref l_U817, 6, 1 ))
                {
                    g_U9130[1]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U830, ref l_U824, 6, 1 ))
                {
                    g_U9130[2]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U837, ref l_U831, 6, 1 ))
                {
                    g_U9130[3]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 4:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U844, ref l_U838, 6, 1 ))
                {
                    g_U9130[4]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 5:
            GET_GAME_TIMER( ref l_U593 );
            l_U594 = l_U593 - l_U592;
            if (l_U594 > l_U596)
            {
                if (sub_2935( l_U851, ref l_U845, 6, 1 ))
                {
                    g_U9130[5]._fU0 = 1;
                    l_U581 = 6;
                }
            }
            break;
            case 6:
            if (NOT (sub_4190( l_U810 )))
            {
                if (NOT (sub_4190( l_U817 )))
                {
                    if (NOT (sub_4190( l_U824 )))
                    {
                        if (NOT (sub_4190( l_U831 )))
                        {
                            if (NOT (sub_4190( l_U838 )))
                            {
                                if (NOT (sub_4190( l_U845 )))
                                {
                                    l_U581++;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 7: break;
        }
    }
    return;
}

void sub_15118()
{
    sub_2521( "FCB4AUD" );
    sub_2640( 0, sub_1390(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U896 )))
    {
        sub_2640( 1, l_U896, "BRUCIE", 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U894 )))
    {
        sub_2640( 2, l_U894, "BRUCIE_BABE_1", 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U895 )))
    {
        sub_2640( 3, l_U895, "BRUCIE_BABE_2", 0 );
    }
    return;
}

void sub_16173()
{
    if (IS_VEH_DRIVEABLE( l_U870 ))
    {
        switch (l_U486)
        {
            case 0:
            sub_11399( "brucheli_quitA" );
            sub_1105( 0 );
            sub_1576( 0 );
            CLEAR_PRINTS();
            TASK_HELI_MISSION( sub_1390(), l_U870, 0, 0, l_U499[l_U561]._fU0, l_U499[l_U561]._fU4, l_U499[l_U561]._fU8, 4, 2.50000000, 0, 90.00000000, 50, 10 );
            SET_PLAYER_CONTROL( sub_1297(), 0 );
            sub_16374();
            sub_16512( l_U561 );
            break;
            case 1:
            sub_19884( ref l_U579 );
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                SET_CAR_COORDINATES( l_U870, l_U499[l_U561]._fU0, l_U499[l_U561]._fU4, l_U499[l_U561]._fU8 );
                SET_CAR_HEADING( l_U870, l_U631 );
            }
            SET_CAM_ACTIVE( l_U871, 1 );
            SET_CAM_PROPAGATE( l_U871, 1 );
            SET_CAM_SPLINE_PROGRESS( l_U871, 0.00000000 );
            sub_1270( 1 );
            GET_GAME_TIMER( ref l_U562 );
            l_U486 = 2;
            break;
            case 2:
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                RESET_STUCK_TIMER( l_U870, 3 );
                RESET_STUCK_TIMER( l_U870, 2 );
                RESET_STUCK_TIMER( l_U870, 1 );
            }
            sub_20125();
            GET_GAME_TIMER( ref l_U563 );
            l_U564 = l_U563 - l_U562;
            if (l_U564 > 1000)
            {
                if (sub_9247())
                {
                    l_U486 = 3;
                }
            }
            if (l_U578 == -1)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U486 = 3;
            }
            break;
            case 3:
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 2000 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_1270( 0 );
            SET_PLAYER_CONTROL( sub_1297(), 1 );
            sub_20928();
            sub_1543( ref l_U579 );
            sub_21043();
            break;
        }
    }
    return;
}

void sub_16374()
{
    if (IS_VEH_DRIVEABLE( l_U870 ))
    {
        FREEZE_CAR_POSITION( l_U870, 1 );
    }
    WAIT( 0 );
    if (IS_VEH_DRIVEABLE( l_U870 ))
    {
        FREEZE_CAR_POSITION( l_U870, 0 );
    }
    TASK_FLUSH_ROUTE();
    TASK_EXTEND_ROUTE( 0.00000000, 0.00000000, 40.00000000 );
    TASK_DRIVE_POINT_ROUTE( sub_1390(), l_U870, 5 );
    return;
}

void sub_16512(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U560 = 0;
        l_U551[0] = 15000;
        RESET_CAM_INTERP_CUSTOM_SPEED_GRAPH();
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[0] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[0];
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], 441.72650000, -336.69130000, 130.10550000 );
        SET_CAM_ROT( l_U874[1], -47.90328000, 0.00000100, -130.92760000 );
        SET_CAM_FOV( l_U874[1], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], 855.04840000, -407.77210000, 130.10550000 );
        SET_CAM_ROT( l_U874[2], -30.02699000, -0.00000000, 90.07277000 );
        SET_CAM_FOV( l_U874[2], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
    }
    else if (iParam0 == 1)
    {
        l_U560 = 0;
        l_U551[1] = 10000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[1] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[1];
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], 168.17780000, -434.21690000, 27.89385000 );
        SET_CAM_ROT( l_U874[1], 8.59836000, 0.00000000, 50.43410000 );
        SET_CAM_FOV( l_U874[1], 56.09997000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], 171.76840000, -394.41030000, 27.90163000 );
        SET_CAM_ROT( l_U874[2], 7.45244600, 0.00000000, 123.88730000 );
        SET_CAM_FOV( l_U874[2], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
    }
    else if (iParam0 == 2)
    {
        l_U560 = 0;
        l_U551[2] = 15000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[2] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[2];
        l_U560 += 8000;
        CREATE_CAM( 14, ref l_U874[0] );
        SET_CAM_POS( l_U874[0], -181.07140000, -456.44020000, 68.33903000 );
        SET_CAM_ROT( l_U874[0], -25.78711000, -0.00000000, -62.12057000 );
        SET_CAM_FOV( l_U874[0], 45.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[0] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], -183.37950000, -457.66130000, 72.02840000 );
        SET_CAM_ROT( l_U874[2], 32.76918000, -0.00000000, -62.12057000 );
        SET_CAM_FOV( l_U874[2], 45.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
    }
    else if (iParam0 == 3)
    {
        l_U560 = 0;
        l_U551[3] = 13000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[3] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[3];
        CREATE_CAM( 14, ref l_U874[4] );
        SET_CAM_POS( l_U874[4], -55.13789000, -167.04700000, 17.20417000 );
        SET_CAM_ROT( l_U874[4], 50.41196000, 0.00000100, 38.70676000 );
        SET_CAM_FOV( l_U874[4], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[4] );
        CREATE_CAM( 14, ref l_U874[5] );
        SET_CAM_POS( l_U874[5], -128.65790000, -167.04700000, 17.20417000 );
        SET_CAM_ROT( l_U874[5], 39.06739000, -0.00000100, -49.52873000 );
        SET_CAM_FOV( l_U874[5], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[5] );
    }
    else if (iParam0 == 4)
    {
        l_U560 = 0;
        l_U551[4] = 15000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[4] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[4];
        CREATE_CAM( 14, ref l_U874[0] );
        SET_CAM_POS( l_U874[0], 18.80561000, 38.68393000, 210.65480000 );
        SET_CAM_ROT( l_U874[0], -2.20694600, 0.00000000, 58.92635000 );
        SET_CAM_FOV( l_U874[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[0] );
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], 55.56130000, 34.68393000, 220.65480000 );
        SET_CAM_ROT( l_U874[1], -2.20694600, 0.00000000, 58.92635000 );
        SET_CAM_FOV( l_U874[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], 104.99650000, -17.94142000, 303.47290000 );
        SET_CAM_ROT( l_U874[2], -51.68477000, 0.00000100, 60.25108000 );
        SET_CAM_FOV( l_U874[2], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
    }
    else if (iParam0 == 5)
    {
        l_U560 = 0;
        l_U551[5] = 30000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[5] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[5];
        CREATE_CAM( 14, ref l_U874[0] );
        SET_CAM_POS( l_U874[0], 4.12169500, 112.74340000, 253.75210000 );
        POINT_CAM_AT_COORD( l_U874[0], -3.54000000, 179.39000000, 254.99000000 );
        SET_CAM_FOV( l_U874[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[0] );
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], 49.25687000, 143.65600000, 250.11080000 );
        POINT_CAM_AT_COORD( l_U874[1], -3.54000000, 179.39000000, 254.99000000 );
        SET_CAM_FOV( l_U874[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], 53.28531000, 212.41150000, 250.11080000 );
        POINT_CAM_AT_COORD( l_U874[2], -3.54000000, 179.39000000, 254.99000000 );
        SET_CAM_FOV( l_U874[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
        CREATE_CAM( 14, ref l_U874[3] );
        SET_CAM_POS( l_U874[3], -30.94307000, 230.44480000, 250.11080000 );
        POINT_CAM_AT_COORD( l_U874[3], -3.54000000, 179.39000000, 254.99000000 );
        SET_CAM_FOV( l_U874[3], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[3] );
        CREATE_CAM( 14, ref l_U874[4] );
        SET_CAM_POS( l_U874[4], -65.29529000, 110.93980000, 250.11080000 );
        SET_CAM_ROT( l_U874[4], -3.31155100, 0.00000000, -63.07890000 );
        SET_CAM_FOV( l_U874[4], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[4] );
    }
    else if (iParam0 == 6)
    {
        l_U560 = 0;
        l_U551[6] = 15000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[6] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[6];
        CREATE_CAM( 14, ref l_U874[0] );
        SET_CAM_POS( l_U874[0], 37.75762000, 385.35440000, 66.30593000 );
        SET_CAM_ROT( l_U874[0], -34.26682000, -0.00000100, 47.44669000 );
        SET_CAM_FOV( l_U874[0], 48.59999000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[0] );
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], 37.75762000, 539.75460000, 66.30593000 );
        SET_CAM_ROT( l_U874[1], -21.66174000, -0.00000000, 140.03670000 );
        SET_CAM_FOV( l_U874[1], 48.59999000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
    }
    else if (iParam0 == 7)
    {
        l_U560 = 0;
        l_U551[7] = 25000;
        CREATE_CAM( 25, ref l_U871 );
        SET_CAM_SPLINE_DURATION( l_U871, l_U551[7] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U871, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U871, 1 );
        l_U560 += l_U551[7];
        CREATE_CAM( 14, ref l_U874[0] );
        SET_CAM_POS( l_U874[0], -209.67520000, -157.67530000, 271.56860000 );
        SET_CAM_ROT( l_U874[0], 46.58487000, 0.00000000, 59.26371000 );
        SET_CAM_FOV( l_U874[0], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[0] );
        CREATE_CAM( 14, ref l_U874[1] );
        SET_CAM_POS( l_U874[1], -64.92835000, -243.74360000, 141.43820000 );
        SET_CAM_ROT( l_U874[1], 31.68796000, -0.00000000, 59.26372000 );
        SET_CAM_FOV( l_U874[1], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[1] );
        CREATE_CAM( 14, ref l_U874[2] );
        SET_CAM_POS( l_U874[2], 0.38493500, -282.57970000, 100.38690000 );
        SET_CAM_ROT( l_U874[2], 26.53134000, 0.00000000, 31.99088000 );
        SET_CAM_FOV( l_U874[2], 51.89998000 );
        ADD_CAM_SPLINE_NODE( l_U871, l_U874[2] );
    };;;;;;;;
    l_U486 = 1;
    return;
}

void sub_19884(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_20125()
{
    switch (l_U578)
    {
        case 0:
        if (IS_SPECIFIC_CAM_INTERPOLATING( l_U871 ))
        {
            l_U578++;
        }
        break;
        case 1:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U871 )))
        {
            DO_SCREEN_FADE_OUT( 2000 );
            l_U578++;
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U565 );
            SET_CAM_ACTIVE( l_U871, 0 );
            SET_CAM_PROPAGATE( l_U871, 0 );
            l_U578 = -1;
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U566 );
        l_U567 = l_U566 - l_U565;
        if (l_U567 > 2000)
        {
            SET_CAM_SPLINE_PROGRESS( l_U872, 0.00000000 );
            DO_SCREEN_FADE_IN( 2000 );
            l_U578++;
        }
        break;
        case 4:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U872 )))
        {
            DO_SCREEN_FADE_OUT( 2000 );
            l_U578++;
        }
        break;
        case 5:
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U565 );
            SET_CAM_ACTIVE( l_U872, 0 );
            SET_CAM_PROPAGATE( l_U872, 0 );
            if (DOES_CAM_EXIST( l_U873 ))
            {
                SET_CAM_ACTIVE( l_U873, 1 );
                SET_CAM_PROPAGATE( l_U873, 1 );
                l_U578++;
            }
            else
            {
                l_U578 = -1;
            }
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U566 );
        l_U567 = l_U566 - l_U565;
        if (l_U567 > 2000)
        {
            SET_CAM_SPLINE_PROGRESS( l_U873, 0.00000000 );
            DO_SCREEN_FADE_IN( 2000 );
            l_U578++;
        }
        break;
        case 7:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U873 )))
        {
            l_U578 = -1;
        }
        break;
        case -1: break;
    }
    return;
}

void sub_20928()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_CAM_EXIST( l_U874[I] ))
        {
            DESTROY_CAM( l_U874[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U871 ))
    {
        DESTROY_CAM( l_U871 );
    }
    return;
}

void sub_21043()
{
    l_U485 = 0;
    l_U486 = 0;
    l_U578 = 0;
    if (DOES_BLIP_EXIST( l_U892 ))
    {
        CHANGE_BLIP_DISPLAY( l_U892, 4 );
    }
    l_U484 = 11;
    return;
}

void sub_21132()
{
    if (NOT (IS_CHAR_INJURED( l_U896 )))
    {
        switch (l_U487)
        {
            case 0:
            sub_10215();
            sub_2509();
            if (l_U561 == 0)
            {
                if (sub_2935( l_U648, ref l_U642, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 1)
            {
                if (sub_2935( l_U676, ref l_U670, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 2)
            {
                if (sub_2935( l_U662, ref l_U656, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 3)
            {
                if (sub_2935( l_U718, ref l_U712, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 4)
            {
                if (sub_2935( l_U732, ref l_U726, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 5)
            {
                if (sub_2935( l_U690, ref l_U684, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 6)
            {
                if (sub_2935( l_U704, ref l_U698, 6, 1 ))
                {
                    l_U487 = 1;
                }
            }
            else if (l_U561 == 7)
            {
                if (sub_2935( l_U746, ref l_U740, 6, 1 ))
                {
                    l_U487 = 1;
                }
            };;;;;;;;
            if (l_U564 > 11500)
            {
                l_U487 = 1;
            }
            break;
            case 1:
            sub_10215();
            if (NOT (sub_4190( l_U740 )))
            {
                if (NOT (sub_4190( l_U698 )))
                {
                    if (NOT (sub_4190( l_U684 )))
                    {
                        if (NOT (sub_4190( l_U726 )))
                        {
                            if (NOT (sub_4190( l_U712 )))
                            {
                                if (NOT (sub_4190( l_U656 )))
                                {
                                    if (NOT (sub_4190( l_U670 )))
                                    {
                                        if (NOT (sub_4190( l_U642 )))
                                        {
                                            PRINT_NOW( "homeheli", 7500, 1 );
                                            GET_GAME_TIMER( ref l_U562 );
                                            l_U487 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 2:
            sub_10215();
            GET_GAME_TIMER( ref l_U563 );
            l_U564 = l_U563 - l_U562;
            if (l_U564 > 7500)
            {
                l_U487 = 3;
            }
            break;
            case 3:
            sub_10215();
            sub_21896();
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                if (LOCATE_CAR_3D( l_U870, l_U628._fU0, l_U628._fU4, l_U628._fU8, 20.00000000, 20.00000000, 10.00000000, 0 ))
                {
                    if (IS_CAR_STOPPED( l_U870 ))
                    {
                        if (IS_VEHICLE_ON_ALL_WHEELS( l_U870 ))
                        {
                            FREEZE_CAR_POSITION( l_U870, 1 );
                            SET_PLAYER_CONTROL( sub_1297(), 0 );
                            if (DOES_BLIP_EXIST( l_U892 ))
                            {
                                CHANGE_BLIP_DISPLAY( l_U892, 0 );
                            }
                            sub_1576( 0 );
                            if (sub_2935( l_U774, ref l_U768, 6, 1 ))
                            {
                                l_U487 = 4;
                            }
                        }
                    }
                }
                else
                {
                    sub_22581();
                }
            }
            break;
            case 4:
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                if (NOT (sub_4190( l_U768 )))
                {
                    TASK_HELI_MISSION( sub_1390(), l_U870, 0, 0, l_U628._fU0, l_U628._fU4, l_U628._fU8, 5, 0.00000000, 0, -1, -1, -1 );
                    LOCK_CAR_DOORS( l_U870, 1 );
                    l_U493 = 1;
                    g_U64660 = 1;
                    DO_SCREEN_FADE_OUT( 3000 );
                    sub_1716();
                    CLEAR_HELP();
                    GET_GAME_TIMER( ref l_U562 );
                    l_U487 = 5;
                }
            }
            break;
            case 5:
            if (IS_SCREEN_FADED_OUT())
            {
                l_U487 = 6;
            }
            break;
            case 6:
            if (IS_CHAR_IN_ANY_CAR( sub_1390() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_1390(), l_U609._fU0, l_U609._fU4, l_U609._fU8 );
                SET_CHAR_HEADING( sub_1390(), l_U612 );
            }
            if (IS_CHAR_IN_ANY_CAR( l_U896 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U896, l_U613._fU0, l_U613._fU4, l_U613._fU8 );
                SET_CHAR_HEADING( l_U896, l_U616 );
            }
            if (NOT (IS_CHAR_DEAD( l_U894 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U894 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U894, l_U617._fU0, l_U617._fU4, l_U617._fU8 );
                    SET_CHAR_HEADING( l_U894, l_U620 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U895 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U895 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U895, l_U621._fU0, l_U621._fU4, l_U621._fU8 );
                    SET_CHAR_HEADING( l_U895, l_U624 );
                }
            }
            SET_CAM_BEHIND_PED( sub_1390() );
            if (IS_VEH_DRIVEABLE( l_U870 ))
            {
                DELETE_CAR( ref l_U870 );
            }
            GET_GAME_TIMER( ref l_U562 );
            l_U487 = 7;
            break;
            case 7:
            CLEAR_HELP();
            sub_1716();
            GET_GAME_TIMER( ref l_U563 );
            l_U564 = l_U563 - l_U562;
            l_U487 = 8;
            break;
            case 8:
            l_U487 = 9;
            break;
            case 9:
            l_U487 = 10;
            break;
            case 10:
            l_U487 = 11;
            break;
            case 11:
            INCREMENT_INT_STAT_NO_MESSAGE( 353, 1 );
            l_U484 = 12;
            break;
        }
    }
    return;
}

void sub_21896()
{
    if (g_U64660 == 0)
    {
        if (NOT (IS_CONTROL_PRESSED( 0, 3 )))
        {
            switch (l_U604)
            {
                case 0:
                if (LOCATE_CHAR_IN_CAR_2D( sub_1390(), l_U628._fU0, l_U628._fU4, 100.00000000, 100.00000000, 0 ))
                {
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        PRINT_HELP( "6CIA5_HELP10" );
                    }
                    else
                    {
                        PRINT_HELP( "CIA5_HELP10" );
                    }
                    GET_GAME_TIMER( ref l_U597 );
                    l_U604++;
                }
                break;
                case 1:
                GET_GAME_TIMER( ref l_U598 );
                l_U599 = l_U598 - l_U597;
                if (l_U599 > 6000)
                {
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        PRINT_HELP( "6CIA5_HELP11" );
                    }
                    else
                    {
                        PRINT_HELP( "CIA5_HELP11" );
                    }
                    GET_GAME_TIMER( ref l_U597 );
                    l_U604++;
                }
                break;
                case 2:
                GET_GAME_TIMER( ref l_U598 );
                l_U599 = l_U598 - l_U597;
                if (l_U599 > 6000)
                {
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        PRINT_HELP( "6CIA5_HELP12" );
                    }
                    else
                    {
                        PRINT_HELP( "CIA5_HELP12" );
                    }
                    GET_GAME_TIMER( ref l_U597 );
                    l_U604++;
                }
                break;
                case 3: break;
            }
        }
    }
    return;
}

void sub_22581()
{
    if (NOT (IS_CHAR_INJURED( l_U896 )))
    {
        switch (l_U580)
        {
            case -1:
            if (NOT (sub_4190( l_U642 )))
            {
                if (NOT (sub_4190( l_U670 )))
                {
                    if (NOT (sub_4190( l_U656 )))
                    {
                        if (NOT (sub_4190( l_U712 )))
                        {
                            if (NOT (sub_4190( l_U726 )))
                            {
                                if (NOT (sub_4190( l_U684 )))
                                {
                                    if (NOT (sub_4190( l_U698 )))
                                    {
                                        if (NOT (sub_4190( l_U740 )))
                                        {
                                            GET_GAME_TIMER( ref l_U589 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U595 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U588 );
                                            if (g_U9117[l_U588] == 0)
                                            {
                                                sub_15118();
                                                l_U580 = l_U588;
                                            }
                                            if (((g_U9117[0] == 1) AND (g_U9117[1] == 1)) AND (g_U9117[2] == 1))
                                            {
                                                l_U580 = 4;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 0:
            GET_GAME_TIMER( ref l_U590 );
            l_U591 = l_U590 - l_U589;
            if (l_U591 > l_U595)
            {
                if (sub_2935( l_U795, ref l_U789, 6, 1 ))
                {
                    g_U9117[0] = 1;
                    l_U580 = 3;
                }
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U590 );
            l_U591 = l_U590 - l_U589;
            if (l_U591 > l_U595)
            {
                if (sub_2935( l_U802, ref l_U796, 6, 1 ))
                {
                    g_U9117[1] = 1;
                    l_U580 = 3;
                }
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U590 );
            l_U591 = l_U590 - l_U589;
            if (l_U591 > l_U595)
            {
                if (sub_2935( l_U809, ref l_U803, 6, 1 ))
                {
                    g_U9117[2] = 1;
                    l_U580 = 3;
                }
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U590 );
            l_U591 = l_U590 - l_U589;
            if (l_U591 > l_U595)
            {
                if (NOT (sub_4190( l_U789 )))
                {
                    if (NOT (sub_4190( l_U796 )))
                    {
                        if (NOT (sub_4190( l_U803 )))
                        {
                            l_U580 = 4;
                        }
                    }
                }
            }
            break;
            case 4: break;
        }
    }
    return;
}
