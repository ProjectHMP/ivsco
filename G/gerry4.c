void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 1;
    l_U561 = 0;
    l_U562 = 7;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U587 = 1;
    l_U588 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U605 = 0;
    l_U607 = 0;
    l_U608 = 0;
    l_U619 = 0;
    l_U620 = 0;
    l_U621 = 0;
    l_U622 = 0;
    l_U623 = 0;
    l_U624 = 0;
    l_U625 = 0;
    l_U626 = 0;
    l_U638 = 0;
    l_U663 = 0;
    l_U668 = -583281407;
    l_U669 = 1349725314;
    l_U670 = 1376298265;
    l_U671 = -196312163;
    l_U672 = 510389335;
    l_U673 = 27;
    l_U674 = 13;
    l_U675 = 7;
    l_U676 = 7;
    l_U683 = "GM4_GRACIE";
    l_U690 = "GM4_CAR";
    l_U697 = "GM4_SHOUTS";
    l_U704 = "GM4_ALIVE";
    l_U711 = "GM4_DEAD";
    l_U718 = "GM4_FAIL";
    l_U725 = "GM4_LOSE";
    l_U732 = "GM4_SHOUT1";
    l_U739 = "GM4_SHOUT2";
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_499();
        sub_2609();
    }
    sub_2988();
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_2668() ))
        {
            sub_3741();
            sub_28562();
            if (l_U600 == 1)
            {
                sub_29407();
            }
            if (l_U601 == 1)
            {
                sub_42445();
            }
        }
    }
    return;
}

void sub_499()
{
    sub_508();
    return;
}

void sub_508()
{
    int iVar2;

    iVar2 = 15;
    sub_522( iVar2 );
    sub_1698( iVar2 );
    return;
}

void sub_522(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_566();
        sub_727();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_835();
            sub_874();
        }
    }
    sub_950();
    sub_1051();
    uVar5 = sub_1164( uParam0 );
    sub_1605( uVar5, 0 );
    return;
}

void sub_566()
{
    sub_580( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_680();
    }
    return;
}

void sub_580(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_680()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_727()
{
    sub_736();
    return;
}

void sub_736()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_835()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_874()
{
    sub_883();
    return;
}

void sub_883()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_950()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1051()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1073();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1073()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1164(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1563( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1563(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1605(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1698(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1707();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2482();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1707()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1745( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1745( 1, g_U569[I] )) != 0)
            {
                sub_2031( I );
            }
        }
    }
    if (NOT sub_2197())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2031(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2116( g_U569 - 1 );
    return;
}

void sub_2116(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2197()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1745( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2482()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_2609()
{
    sub_2618();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    g_U2226 = 0;
    if (IS_PLAYER_PLAYING( sub_2668() ))
    {
        SET_PLAYER_CONTROL( sub_2668(), 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U741 )))
    {
        DELETE_CHAR( ref l_U741 );
    }
    if (NOT (IS_CHAR_DEAD( l_U740 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U740 );
    }
    if (DOES_OBJECT_EXIST( l_U779 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U779 );
    }
    g_U64641++;
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( l_U497._fU0 + 50, l_U497._fU4 + 50, l_U497._fU8 + 50, l_U497._fU0 - 30, l_U497._fU4 - 30, l_U497._fU8 - 30, 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2924(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2618()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2668()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2924()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2988()
{
    l_U497 = {-1000.08300000, 1213.34700000, 22.85760000};
    l_U522 = {-1143.58900000, -375.30150000, 5.59850000};
    l_U509 = {-286.92770000, 1541.09500000, 20.41450000};
    l_U512 = 0.00000000;
    sub_3074();
    l_U500 = {-1084.94100000, 1211.63900000, 24.09900000};
    l_U503 = {-1044.41700000, 1235.75000000, 24.06750000};
    l_U513 = {-286.92770000, 1546.09500000, 19.34470000};
    l_U519 = {-286.65710000, 1564.96800000, 19.41450000};
    l_U516 = {0.00000000, -2.00000000, 0.00000000};
    LOAD_ADDITIONAL_TEXT( "GM4", 0 );
    sub_3224( "GM4AUD" );
    sub_3351( 0, sub_2924(), "NIKO", 0 );
    l_U487[0] = 0;
    l_U487[1] = 0;
    l_U487[3] = 0;
    l_U487[4] = 0;
    l_U627[0] = 0;
    l_U627[1] = 0;
    l_U627[3] = 0;
    l_U627[4] = 0;
    l_U609[0] = 0;
    l_U609[1] = 0;
    l_U609[3] = 0;
    l_U609[4] = 0;
    # -sub_C1FFC0-0xc214c8( 0, ref l_U780 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U782 );
    LOAD_COMBAT_DECISION_MAKER( 6, ref l_U783 );
    LOAD_COMBAT_DECISION_MAKER( 6, ref l_U781 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U784 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U783, 100 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U781, 100 );
    return;
}

void sub_3074()
{
    return;
}

void sub_3224(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3243();
    return;
}

void sub_3243()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_3351(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3435( "\n PED NUMBER ", uParam0 );
    sub_3475( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3435(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3475(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3741()
{
    int iVar2;

    switch (l_U484)
    {
        case 0:
        CLEAR_PRINTS();
        if (sub_3867( 1, 1 ))
        {
            SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 1 );
            CLEAR_PRINTS();
            if (IS_CHAR_IN_ANY_CAR( sub_2924() ))
            {
                GET_CAR_CHAR_IS_USING( sub_2924(), ref l_U778 );
            }
            if (g_U9893._fU24)
            {
                LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
                sub_4239();
                START_CUTSCENE_NOW( "GM_4" );
                SET_PLAYER_CONTROL( sub_2668(), 0 );
                l_U484 = 1;
            }
            else
            {
                l_U484 = 1;
            }
        }
        break;
        case 1:
        if (g_U9893._fU24)
        {
            LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                CLEAR_PRINTS();
                WAIT( 0 );
            }
            sub_5191( -1160.27700000, -361.11780000, 1.60220000, 359.55260000, ref l_U778 );
            if (IS_CHAR_IN_ANY_CAR( sub_2924() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2924(), -1144.08900000, -374.65530000, 2.07320000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2924(), -1144.08900000, -374.65530000, 2.07320000 );
            }
            SET_CHAR_HEADING( sub_2924(), 98.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_PRINTS();
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "GM4AUD" );
            if (NOT (IS_CHAR_DEAD( l_U762[0] )))
            {
                DELETE_CHAR( ref l_U762[0] );
            }
            if (NOT (IS_CHAR_DEAD( l_U762[1] )))
            {
                DELETE_CHAR( ref l_U762[1] );
            }
            if (NOT (IS_CHAR_DEAD( l_U762[2] )))
            {
                DELETE_CHAR( ref l_U762[2] );
            }
            if (NOT (IS_CHAR_DEAD( l_U762[3] )))
            {
                DELETE_CHAR( ref l_U762[3] );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1870989171 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 552542187 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1676937780 );
        }
        if (g_U64641 > 0)
        {
            sub_5707();
        }
        SET_CHAR_HEADING( sub_2924(), 98.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_2668(), 1 );
        sub_5976();
        SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 0 );
        l_U484 = 2;
        break;
        case 2:
        if (HAS_MODEL_LOADED( l_U668 ))
        {
            SET_CAM_BEHIND_PED( sub_2924() );
            CREATE_CAR( l_U668, l_U497._fU0, l_U497._fU4, l_U497._fU8, ref l_U767, 1 );
            if (DOES_VEHICLE_EXIST( l_U767 ))
            {
                SET_CAR_HEADING( l_U767, 90 );
                CHANGE_CAR_COLOUR( l_U767, 52, 52 );
                STOP_CAR_BREAKING( l_U767, 1 );
                SET_CAN_BURST_CAR_TYRES( l_U767, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 2, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 3, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 4, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 5, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 6, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 7, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 8, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U767, 9, 1 );
                SET_VEH_HAS_STRONG_AXLES( l_U767, 1 );
            }
            ADD_SCENARIO_BLOCKING_AREA( l_U497._fU0 + 50, l_U497._fU4 + 50, l_U497._fU8 + 50, l_U497._fU0 - 30, l_U497._fU4 - 30, l_U497._fU8 - 30 );
            SET_CAR_GENERATORS_ACTIVE_IN_AREA( l_U497._fU0 + 50, l_U497._fU4 + 50, l_U497._fU8 + 50, l_U497._fU0 - 30, l_U497._fU4 - 30, l_U497._fU8 - 30, 0 );
            ADD_BLIP_FOR_COORD( l_U497._fU0, l_U497._fU4, l_U497._fU8, ref l_U787 );
            if (DOES_BLIP_EXIST( l_U787 ))
            {
                CHANGE_BLIP_COLOUR( l_U787, 5 );
                CHANGE_BLIP_DISPLAY( l_U787, 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                ADD_BLIP_FOR_CAR( l_U767, ref l_U789 );
            }
            if (DOES_BLIP_EXIST( l_U789 ))
            {
                CHANGE_BLIP_COLOUR( l_U789, 3 );
                CHANGE_BLIP_DISPLAY( l_U789, 0 );
            }
            if (g_U9893._fU24)
            {
                CLEAR_NAMED_CUTSCENE( "GM4AUD" );
            }
            LOAD_SCENE( l_U522._fU0, l_U522._fU4, l_U522._fU8 );
            DO_SCREEN_FADE_IN( 1000 );
            SUPPRESS_CAR_MODEL( l_U668 );
            l_U587 = 1;
            l_U484 = 3;
        }
        break;
        case 3:
        GET_INTERIOR_FROM_CHAR( sub_2924(), ref l_U785 );
        if (IS_SCREEN_FADED_IN())
        {
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                sub_6757();
                if (l_U785 == nil)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2924(), l_U767, 15.00000000, 15.00000000, 10.00000000, 0 ))
                    {
                        GET_CAR_HEALTH( l_U767, ref iVar2 );
                        SET_CAR_HEALTH( l_U767, iVar2 + 600 );
                        GET_CAR_HEALTH( l_U767, ref l_U639 );
                        if (DOES_BLIP_EXIST( l_U789 ))
                        {
                            SET_ROUTE( l_U789, 0 );
                        }
                        g_U2226 = 1;
                        SET_PLAYER_CONTROL( sub_2668(), 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2924() )))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( sub_2924(), l_U767, 20000 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U786 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U767, 20000 );
                            CLOSE_SEQUENCE_TASK( l_U786 );
                            TASK_PERFORM_SEQUENCE( sub_2924(), l_U786 );
                            CLEAR_SEQUENCE_TASK( l_U786 );
                        }
                        DO_SCREEN_FADE_OUT( 3000 );
                        l_U484 = 6;
                    }
                }
            }
            else
            {
                l_U603 = 1;
                l_U601 = 1;
            }
        }
        break;
        case 6:
        sub_7296();
        break;
        case 7:
        if (DOES_BLIP_EXIST( l_U787 ))
        {
            REMOVE_BLIP( l_U787 );
        }
        SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 0 );
        ADD_BLIP_FOR_COORD( l_U513._fU0, l_U513._fU4, l_U513._fU8, ref l_U788 );
        if (DOES_BLIP_EXIST( l_U788 ))
        {
            CHANGE_BLIP_COLOUR( l_U788, 5 );
            CHANGE_BLIP_DISPLAY( l_U788, 4 );
        }
        sub_8959();
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2924(), 0 );
        REQUEST_CAR_RECORDING( 2990 );
        if (NOT (IS_CAR_DEAD( l_U767 )))
        {
            SHUT_CAR_DOOR( l_U767, 5 );
        }
        l_U484 = 8;
        break;
        case 8:
        if (HAS_CAR_RECORDING_BEEN_LOADED( 2990 ))
        {
            sub_11037();
            l_U484 = 9;
        }
        break;
        case 9:
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            CLEAR_CHAR_TASKS( sub_2924() );
            if (IS_PLAYER_PLAYING( sub_2668() ))
            {
                SET_PLAYER_CONTROL( sub_2668(), 1 );
            }
            CLEAR_PRINTS();
            if (DOES_BLIP_EXIST( l_U788 ))
            {
                CHANGE_BLIP_DISPLAY( l_U788, 4 );
            }
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                if (DOES_BLIP_EXIST( l_U789 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U789, 0 );
                }
            }
            ADD_SCENARIO_BLOCKING_AREA( l_U513._fU0 - 30, l_U513._fU4 - 30, l_U513._fU8 - 30, l_U513._fU0 + 30, l_U513._fU4 + 30, l_U513._fU8 + 30 );
            l_U587 = 0;
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U484 = 10;
        }
        break;
        case 10:
        if (l_U619 == 0)
        {
            PRINT_NOW( "gerry6_04", 7500, 1 );
            l_U619 = 1;
        }
        if (l_U621 == 0)
        {
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                if (IS_VEH_DRIVEABLE( l_U768[2] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U742[2] )))
                    {
                        if (LOCATE_CAR_3D( l_U767, l_U500._fU0, l_U500._fU4, l_U500._fU8, 65.00000000, 7.00000000, 15.00000000, 0 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U742[2], l_U768[2] ))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U768[2], 2990 );
                                SET_PLAYBACK_SPEED( l_U768[2], 1.20000000 );
                                l_U621 = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (l_U577[2] == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U768[2] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[2] )))
                {
                    if (NOT (# -NULL-0xbfc08d( l_U768[2] )))
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[2], 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U742[2], 0 );
                        TASK_LEAVE_ANY_CAR( l_U742[2] );
                        TASK_CAR_MISSION( l_U742[2], l_U768[2], 0, 5, 0.00000000, 6, 5, 10 );
                        l_U577[2] = 1;
                    }
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            sub_12448();
            sub_14131();
            sub_14594();
            sub_14851();
            sub_26223( 0 );
            sub_26223( 1 );
            sub_26223( 3 );
            sub_26223( 4 );
            sub_26223( 5 );
            sub_26223( 6 );
            sub_26223( 7 );
            sub_26223( 8 );
            GET_DOOR_ANGLE_RATIO( l_U767, 5, ref l_U637 );
            if (l_U637 > 0.00000000)
            {
                SHUT_CAR_DOOR( l_U767, 5 );
            }
            if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_2924(), l_U513._fU0, l_U513._fU4, l_U513._fU8, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    ADD_SCENARIO_BLOCKING_AREA( l_U513._fU0 - 30, l_U513._fU4 - 30, l_U513._fU8 - 30, l_U513._fU0 + 30, l_U513._fU4 + 30, l_U513._fU8 + 30 );
                    sub_27265( 0 );
                    l_U577[0] = 1;
                    sub_27265( 1 );
                    l_U577[1] = 1;
                    sub_27265( 2 );
                    l_U577[2] = 1;
                    sub_27265( 3 );
                    l_U577[3] = 1;
                    sub_27265( 4 );
                    l_U577[4] = 1;
                    l_U587 = 0;
                    l_U484 = 11;
                }
            }
        }
        break;
        case 11:
        sub_22509();
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            CONTROL_CAR_DOOR( l_U767, 5, 1, 0.00000000 );
            STORE_WANTED_LEVEL( sub_2668(), ref l_U664 );
            if (l_U664 == 0)
            {
                if (sub_3867( 1, 1 ))
                {
                    if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_2924(), l_U513._fU0, l_U513._fU4, l_U513._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            SET_PLAYER_CONTROL( sub_2668(), 0 );
                            DO_SCREEN_FADE_OUT( 3000 );
                            l_U484 = 12;
                        }
                    }
                }
            }
        }
        break;
        case 12:
        sub_27639();
        if (sub_3867( 1, 1 ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                SET_PLAYER_CONTROL( sub_2668(), 0 );
                CLEAR_AREA( l_U513._fU0, l_U513._fU4, l_U513._fU8, 20.00000000, 1 );
                SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 1 );
                LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
                if (l_U602 == 0)
                {
                    START_CUTSCENE_NOW( "IMGM4a" );
                    SET_PLAYER_CONTROL( sub_2668(), 0 );
                    l_U484 = 15;
                }
                else
                {
                    l_U623 = 1;
                    START_CUTSCENE_NOW( "IMGM4b" );
                    SET_PLAYER_CONTROL( sub_2668(), 0 );
                    l_U484 = 15;
                }
            }
        }
        break;
        case 15:
        LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            CLEAR_PRINTS();
            WAIT( 0 );
        }
        CLEAR_AREA( l_U519._fU0, l_U519._fU4, l_U519._fU8, 60.00000000, 1 );
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2924(), l_U519._fU0, l_U519._fU4, l_U519._fU8 - 1 );
                SET_CHAR_HEADING( sub_2924(), l_U512 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2924(), l_U519._fU0, l_U519._fU4, l_U519._fU8 - 1 );
                SET_CHAR_HEADING( sub_2924(), l_U512 );
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_PRINTS();
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "IMGM4a" );
        CLEAR_NAMED_CUTSCENE( "IMGM4b" );
        LOAD_SCENE( l_U519._fU0, l_U519._fU4, l_U519._fU8 );
        if (DOES_CHAR_EXIST( l_U741 ))
        {
            DELETE_CHAR( ref l_U741 );
        }
        if (DOES_CHAR_EXIST( l_U740 ))
        {
            DELETE_CHAR( ref l_U740 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2924(), 0 );
        FLUSH_SCENARIO_BLOCKING_AREAS();
        sub_2618();
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PLAYER_CONTROL( sub_2668(), 1 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if ((NOT IS_SCREEN_FADED_IN()) || (NOT IS_SCREEN_FADING_IN()))
        {
            DO_SCREEN_FADE_IN( 3000 );
        }
        if (l_U602 == 0)
        {
            l_U600 = 1;
        }
        else
        {
            l_U601 = 1;
        }
        break;
    }
    return;
}

int sub_3867(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2924() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2924(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2924() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2924(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2924()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2924() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2924() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2668() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2668() )))
    {
        return 0;
    }
    return 1;
}

void sub_4239()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;

    vVar2 = {-1083.16700000, -354.00990000, 6.36380000};
    vVar5 = {-1086.94000000, -358.85000000, 6.36000000};
    vVar8 = {64448, -356.32000000, 6.54000000};
    vVar11 = {64453, -361.35000000, 6.40000000};
    CLEAR_PRINTS();
    REQUEST_MODEL( -1870989171 );
    REQUEST_MODEL( 552542187 );
    REQUEST_MODEL( -1676937780 );
    while (NOT (HAS_MODEL_LOADED( 552542187 )))
    {
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( -1870989171 )))
    {
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( -1676937780 )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
    sub_4510( ref l_U762[0], vVar2.x, vVar2.y, vVar2.z, 180.00000000, -1870989171 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U762[0], "Room_visit" );
    TASK_SIT_DOWN_INSTANTLY( l_U762[0], 0, 0, -2 );
    SET_CHAR_DECISION_MAKER( l_U762[0], l_U780 );
    SET_COMBAT_DECISION_MAKER( l_U762[0], l_U784 );
    sub_4510( ref l_U762[2], vVar8.x, vVar8.y, vVar8.z, 0.00000000, -1870989171 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U762[2], "Room_visit" );
    SET_CHAR_DECISION_MAKER( l_U762[2], l_U780 );
    SET_COMBAT_DECISION_MAKER( l_U762[2], l_U784 );
    sub_4510( ref l_U762[1], vVar5.x, vVar5.y, vVar5.z, 180.00000000, 552542187 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U762[1], "Room_visit" );
    TASK_SIT_DOWN_INSTANTLY( l_U762[1], 0, 0, -2 );
    SET_CHAR_DECISION_MAKER( l_U762[1], l_U780 );
    SET_COMBAT_DECISION_MAKER( l_U762[1], l_U784 );
    sub_4510( ref l_U762[3], vVar11.x, vVar11.y, vVar11.z, 0.00000000, -1676937780 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U762[3], "Room_visit" );
    TASK_SIT_DOWN_INSTANTLY( l_U762[3], 0, 0, -2 );
    SET_CHAR_DECISION_MAKER( l_U762[3], l_U780 );
    SET_COMBAT_DECISION_MAKER( l_U762[3], l_U784 );
    return;
}

void sub_4510(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 8, uParam5, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( (uParam0^), 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
    SET_CHAR_IN_CUTSCENE( (uParam0^), 1 );
    return;
}

void sub_5191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if (IS_VEH_DRIVEABLE( (uParam4^) ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_2924(), (uParam4^) )))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam4^) );
            }
            SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
            GET_CAR_MODEL( (uParam4^), ref uVar7 );
            if (IS_THIS_MODEL_A_CAR( uVar7 ))
            {
                CLOSE_ALL_CAR_DOORS( (uParam4^) );
            }
            SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            SET_CAR_HEADING( (uParam4^), uParam3 );
        }
    }
    return;
}

void sub_5707()
{
    unknown uVar2;
    unknown uVar3;

    REQUEST_MODEL( 1884962369 );
    REQUEST_MODEL( 8772846 );
    while ((NOT (HAS_MODEL_LOADED( 1884962369 ))) || (NOT (HAS_MODEL_LOADED( 8772846 ))))
    {
        WAIT( 0 );
    }
    PROCESS_MISSION_DELETION_LIST();
    CLEAR_AREA( -1172.58900000, -378.35580000, 1.66480000, 20.00000000, 1 );
    CREATE_CAR( 1884962369, -1172.58900000, -378.35580000, 1.66480000, ref uVar2, 1 );
    SET_CAR_HEADING( uVar2, 173.90150000 );
    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
    CREATE_CHAR_INSIDE_CAR( uVar2, 26, 8772846, ref uVar3 );
    SET_CAR_AS_MISSION_CAR( uVar2 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1884962369 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
    return;
}

void sub_5976()
{
    REQUEST_MODEL( l_U668 );
    LOAD_ALL_OBJECTS_NOW();
    return;
}

void sub_6757()
{
    if (l_U587 == 1)
    {
        if (l_U486 == 1)
        {
            CLEAR_PRINTS();
        }
        PRINT( "gerry6_03c", 7500, 1 );
        REMOVE_CARS_FROM_GENERATORS_IN_AREA( l_U497._fU0 + 30, l_U497._fU4 + 30, l_U497._fU8 + 30, l_U497._fU0 - 30, l_U497._fU4 - 30, l_U497._fU8 - 30 );
        SET_ROUTE( l_U787, 1 );
    }
    l_U587 = 0;
    if (DOES_BLIP_EXIST( l_U787 ))
    {
        CHANGE_BLIP_DISPLAY( l_U787, 2 );
    }
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        if (DOES_BLIP_EXIST( l_U789 ))
        {
            CHANGE_BLIP_DISPLAY( l_U789, 0 );
        }
    }
    return;
}

void sub_7296()
{
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        switch (l_U485)
        {
            case 0:
            if (sub_3867( 1, 1 ))
            {
                SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 1 );
                l_U485 = 1;
            }
            break;
            case 1:
            l_U485 = 2;
            break;
            case 2:
            if (sub_3867( 1, 1 ))
            {
                SET_EVERYONE_IGNORE_PLAYER( sub_2668(), 1 );
                CLEAR_PRINTS();
                LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
                START_CUTSCENE_NOW( "IMGER4" );
                SET_PLAYER_CONTROL( sub_2668(), 0 );
                LOAD_ADDITIONAL_TEXT( "GM4AUD", 6 );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    CLEAR_PRINTS();
                    WAIT( 0 );
                }
                CLEAR_AREA( l_U497._fU0, l_U497._fU4, l_U497._fU8, 60.00000000, 1 );
                if (NOT (IS_VEH_DRIVEABLE( l_U767 )))
                {
                    SET_ENGINE_HEALTH( l_U767, 1000 );
                }
                if (IS_VEH_DRIVEABLE( l_U767 ))
                {
                    SET_CAR_COORDINATES( l_U767, l_U497._fU0, l_U497._fU4, l_U497._fU8 );
                    SET_CAR_HEADING( l_U767, 90 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2924() )))
                    {
                        WARP_CHAR_INTO_CAR( sub_2924(), l_U767 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_CAR( sub_2924(), l_U767, -1 );
                    }
                }
                CLEAR_PRINTS();
                SET_GAME_CAM_HEADING( 0.00000000 );
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "IMGER4" );
                sub_7794();
                LOAD_SCENE( l_U497._fU0, l_U497._fU4, l_U497._fU8 );
                l_U485 = 3;
            }
            break;
            case 3:
            if (HAS_MODEL_LOADED( l_U671 ))
            {
                if (HAS_MODEL_LOADED( l_U669 ))
                {
                    if (HAS_MODEL_LOADED( l_U670 ))
                    {
                        if (HAS_MODEL_LOADED( l_U672 ))
                        {
                            if (sub_8706( l_U673 ))
                            {
                                if (HAVE_ANIMS_LOADED( "missgerry4" ))
                                {
                                    if ((NOT IS_SCREEN_FADING_IN()) || (NOT IS_SCREEN_FADED_IN()))
                                    {
                                        DO_SCREEN_FADE_IN( 3000 );
                                    }
                                    CLEAR_PRINTS();
                                    SET_GAME_CAM_HEADING( 0.00000000 );
                                    l_U484 = 7;
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_7794()
{
    REQUEST_MODEL( l_U671 );
    REQUEST_MODEL( l_U669 );
    REQUEST_MODEL( l_U670 );
    REQUEST_MODEL( l_U672 );
    sub_7856( l_U673 );
    REQUEST_ANIMS( "missgerry4" );
    LOAD_ALL_OBJECTS_NOW();
    return;
}

void sub_7856(unknown uParam0)
{
    REQUEST_MODEL( sub_7867( uParam0 ) );
    return;
}

int sub_7867(unknown uParam0)
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
    sub_1563( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_8706(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_7867( uParam0 ) );
}

void sub_8959()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U516 = {0.20000000, -1.88900000, 0.48000000};
    if (NOT (IS_CAR_DEAD( l_U767 )))
    {
        GET_CAR_COORDINATES( l_U767, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_CAR_HEADING( l_U767, ref uVar5 );
        sub_9065( l_U673, ref l_U740, uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5 );
        if (NOT (IS_CHAR_DEAD( l_U740 )))
        {
            SET_CHAR_VISIBLE( l_U740, 0 );
            SET_CHAR_COLLISION( l_U740, 0 );
            sub_3351( 2, 0, "GRACIE", 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U740, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U740, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U740, 2, 0, 0 );
            SET_CHAR_PROOFS( l_U740, 1, 1, 1, 1, 1 );
            TASK_PLAY_ANIM( l_U740, "in_boot_dead", "missgerry4", 8.00000000, 1, 0, 0, 0, -2 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U740, 1 );
            if (NOT (IS_PED_ATTACHED_TO_ANY_CAR( l_U740 )))
            {
                ATTACH_PED_TO_CAR( l_U740, l_U767, 0, l_U516, uVar5, uVar5, 1, 0 );
            }
        }
    }
    return;
}

void sub_9065(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_7867( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9115( uParam0, (uParam1^) );
    return;
}

void sub_9115(unknown uParam0, unknown uParam1)
{
    sub_9127( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_9127(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_9221( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_9765( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_9221(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_9765(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9221( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9221( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_9221( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9221( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9221( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9221( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9221( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9221( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11037()
{
    CLEAR_AREA_OF_CARS( -1089.27100000, 1201.25200000, 22.55490000, 7.00000000 );
    CREATE_CAR( l_U669, -1089.27100000, 1201.25200000, 22.55490000, ref l_U768[2], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[2], l_U675, l_U672, ref l_U742[2] );
    CREATE_CHAR_AS_PASSENGER( l_U768[2], l_U675, l_U672, 0, ref l_U752[2] );
    if (IS_VEH_DRIVEABLE( l_U768[2] ))
    {
        sub_11201( 2, 356.39870000 );
        sub_11350( l_U742[2], l_U781 );
        sub_11350( l_U752[2], l_U783 );
        sub_11504( 2 );
        SET_CAR_HEADING( l_U768[2], 356.39870000 );
        TASK_DRIVE_BY( l_U752[2], sub_2924(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 4, 1, 20 );
        CHANGE_CAR_COLOUR( l_U768[2], 0, 0 );
    }
    return;
}

void sub_11201(unknown uParam0, unknown uParam1)
{
    SET_CAR_HEADING( l_U768[uParam0], uParam1 );
    if (NOT (DOES_BLIP_EXIST( l_U790[uParam0] )))
    {
        ADD_BLIP_FOR_CAR( l_U768[uParam0], ref l_U790[uParam0] );
    }
    if (DOES_BLIP_EXIST( l_U790[uParam0] ))
    {
        CHANGE_BLIP_COLOUR( l_U790[uParam0], 1 );
        CHANGE_BLIP_DISPLAY( l_U790[uParam0], 0 );
    }
    return;
}

void sub_11350(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GIVE_WEAPON_TO_CHAR( uParam0, l_U676, 100, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
        SET_CHAR_DECISION_MAKER( uParam0, l_U782 );
        SET_COMBAT_DECISION_MAKER( uParam0, uParam1 );
        SET_CHAR_SHOOT_RATE( uParam0, 7 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( uParam0, 0 );
        SET_CHAR_WANTED_BY_POLICE( uParam0, 1 );
        SET_CHAR_AS_ENEMY( uParam0, 1 );
    }
    return;
}

void sub_11504(unknown uParam0)
{
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 1, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 2, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 3, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 4, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 7, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 8, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U768[uParam0], 9, 1 );
    return;
}

void sub_12448()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U740 )))
    {
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            GET_CAR_HEADING( l_U767, ref uVar2 );
            SET_CHAR_HEADING( l_U740, uVar2 - 90 );
        }
    }
    switch (l_U638)
    {
        case 0:
        if (l_U563 < l_U562)
        {
            if (l_U620 == 0)
            {
                if (NOT (sub_12594( l_U726 )))
                {
                    if (NOT (sub_12594( l_U733 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U768[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U742[0] )))
                            {
                                if (IS_CHAR_IN_CAR( l_U742[0], l_U768[0] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U742[0], sub_2924(), 5.00000000, 5.00000000, 7.00000000, 0 ))
                                    {
                                        l_U638 = 1;
                                    }
                                }
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U768[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U742[1] )))
                            {
                                if (IS_CHAR_IN_CAR( l_U742[1], l_U768[1] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U742[1], sub_2924(), 5.00000000, 5.00000000, 7.00000000, 0 ))
                                    {
                                        l_U638 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (sub_12594( l_U691 )))
        {
            if (sub_13056( l_U732, ref l_U726, 6, 1 ))
            {
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U767 );
                l_U563++;
                l_U638 = 0;
            }
        }
        break;
        case 2:
        if (NOT (sub_12594( l_U691 )))
        {
            if (sub_13056( l_U739, ref l_U733, 6, 1 ))
            {
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U767 );
                l_U563++;
                l_U638 = 0;
            }
        }
        break;
    }
    return;
}

int sub_12594(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12706( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12706( "\n speech is not playing" );
    }
    return 0;
}

void sub_12706(unknown uParam0)
{
    return;
}

void sub_13056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13079( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_13079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13133( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13133(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13155( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_13835( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13155(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12706( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12706( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12706( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_13835(int iParam0, int iParam1)
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

void sub_14131()
{
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        switch (l_U561)
        {
            case 0:
            if (l_U486 == 5)
            {
                if (NOT (sub_12594( l_U726 )))
                {
                    if (NOT (sub_12594( l_U733 )))
                    {
                        if (NOT (sub_12594( l_U719 )))
                        {
                            if (NOT l_U602)
                            {
                                GET_GAME_TIMER( ref l_U660 );
                                l_U561++;
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            if (NOT (sub_12594( l_U726 )))
            {
                if (NOT (sub_12594( l_U733 )))
                {
                    if (NOT (sub_12594( l_U719 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
                        {
                            if (l_U602)
                            {
                                l_U561--;
                                break;
                            }
                            GET_GAME_TIMER( ref l_U661 );
                            l_U662 = l_U661 - l_U660;
                            if (l_U662 > 8000)
                            {
                                PLAY_AUDIO_EVENT_FROM_VEHICLE( "GM4_KNOCK_ON_INSIDE_OF_BOOT", l_U767 );
                                while (NOT (sub_13056( l_U697, ref l_U691, 6, 1 )))
                                {
                                    WAIT( 0 );
                                }
                                l_U561--;
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U660 );
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U660 );
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U660 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U660 );
            }
            break;
        }
    }
    return;
}

void sub_14594()
{
    switch (l_U564)
    {
        case 0:
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            GET_GAME_TIMER( ref l_U558 );
            if (NOT l_U602)
            {
                l_U564++;
            }
        }
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            GET_GAME_TIMER( ref l_U559 );
            l_U560 = l_U559 - l_U558;
            if (l_U602)
            {
                l_U564--;
                break;
            }
            if (l_U560 > 12000)
            {
                PLAY_AUDIO_EVENT_FROM_VEHICLE( "GM4_KNOCK_ON_INSIDE_OF_BOOT", l_U767 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U767 );
                l_U564--;
            }
        }
        break;
    }
    return;
}

void sub_14851()
{
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        switch (l_U486)
        {
            case 1:
            sub_14945();
            sub_16130();
            l_U577[3] = 1;
            l_U577[4] = 1;
            l_U577[5] = 1;
            l_U577[6] = 1;
            l_U577[7] = 1;
            l_U577[8] = 1;
            if (HAS_MODEL_LOADED( l_U669 ))
            {
                SUPPRESS_CAR_MODEL( l_U669 );
                if (IS_VEH_DRIVEABLE( l_U767 ))
                {
                    if (LOCATE_CAR_3D( l_U767, l_U500._fU0, l_U500._fU4, l_U500._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                    {
                        SET_ROUTE( l_U788, 1 );
                        l_U608 = 0;
                        l_U486 = 0;
                    }
                    if (LOCATE_CAR_3D( l_U767, l_U503._fU0, l_U503._fU4, l_U503._fU8, 7.00000000, 3.00000000, 3.00000000, 0 ))
                    {
                        SET_ROUTE( l_U788, 1 );
                        l_U608 = 0;
                        l_U486 = 2;
                    }
                    if (LOCATE_CAR_3D( l_U767, 64583, 1194, 24, 8.00000000, 1.00000000, 10.00000000, 0 ))
                    {
                        SET_ROUTE( l_U788, 1 );
                        l_U608 = 1;
                        l_U486 = 3;
                    }
                    if (LOCATE_CAR_3D( l_U767, 64494, 1202, 27, 9.00000000, 1.00000000, 7.00000000, 0 ))
                    {
                        SET_ROUTE( l_U788, 1 );
                        l_U608 = 0;
                        l_U486 = 4;
                    }
                    if (LOCATE_CAR_3D( l_U767, 64533, 1198, 24, 11.00000000, 3.00000000, 7.00000000, 0 ))
                    {
                        SET_ROUTE( l_U788, 1 );
                        l_U608 = 0;
                        l_U486 = 4;
                    }
                }
            }
            break;
            case 0:
            sub_17602();
            break;
            case 2:
            sub_19657();
            break;
            case 4:
            sub_20410();
            break;
            case 3:
            sub_21106();
            break;
            case 5:
            sub_22509();
            sub_16130();
            if (l_U608 == 0)
            {
                if (l_U589[0] == 0)
                {
                    sub_23186( 0, 3 );
                }
                if (l_U589[1] == 0)
                {
                    sub_23186( 1, 7 );
                }
                if (l_U605 == 1)
                {
                    if (l_U589[3] == 0)
                    {
                        sub_23186( 3, 3 );
                    }
                    if (l_U589[4] == 0)
                    {
                        sub_23186( 4, 7 );
                    }
                    if (l_U589[5] == 0)
                    {
                        sub_23186( 5, 3 );
                    }
                }
                if (l_U622 == 1)
                {
                    if (l_U589[6] == 0)
                    {
                        sub_23186( 6, 3 );
                    }
                    if (l_U589[7] == 0)
                    {
                        sub_23186( 7, 3 );
                    }
                    if (l_U589[8] == 0)
                    {
                        sub_23186( 8, 3 );
                    }
                }
            }
            else if (l_U589[0] == 0)
            {
                sub_23186( 0, 3 );
            }
            if (l_U589[1] == 0)
            {
                sub_23186( 1, 7 );
            }
            if (l_U589[3] == 0)
            {
                sub_23186( 3, 3 );
            }
            if (l_U589[4] == 0)
            {
                sub_23186( 4, 3 );
            }
            if (l_U589[5] == 0)
            {
                sub_23186( 5, 7 );
            }
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                GET_CHAR_COORDINATES( sub_2924(), ref l_U506._fU0, ref l_U506._fU4, ref l_U506._fU8 );
                if (l_U608 == 0)
                {
                    if (l_U605 == 0)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_2D( sub_2924(), -946.06710000, 1163.96100000, 40.00000000, 40.00000000, 0 ))
                        {
                            sub_23800( 0 );
                            sub_23800( 1 );
                            l_U577[3] = 0;
                            l_U577[4] = 0;
                            l_U577[5] = 0;
                            sub_23953();
                        }
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2924(), -876.64830000, 1179.16100000, 18.16800000, 30.00000000, 30.00000000, 30.00000000, 0 ))
                        {
                            sub_23800( 0 );
                            sub_23800( 1 );
                            l_U577[3] = 0;
                            l_U577[4] = 0;
                            l_U577[5] = 0;
                            sub_23953();
                        }
                        if (IS_VEH_DRIVEABLE( l_U768[4] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U768[4], 30.00000000, 30.00000000, 0 ))
                            {
                                sub_23800( 0 );
                                sub_23800( 1 );
                                l_U577[3] = 0;
                                l_U577[4] = 0;
                                l_U577[5] = 0;
                                sub_23953();
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U768[5] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U768[5], 30.00000000, 30.00000000, 0 ))
                            {
                                sub_23800( 0 );
                                sub_23800( 1 );
                                l_U577[3] = 0;
                                l_U577[4] = 0;
                                l_U577[5] = 0;
                                sub_23953();
                            }
                        }
                    }
                    if (l_U622 == 0)
                    {
                        if (IS_VEH_DRIVEABLE( l_U768[6] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U768[6], 30.00000000, 30.00000000, 0 ))
                            {
                                sub_23800( 3 );
                                sub_23800( 4 );
                                sub_23800( 5 );
                                l_U577[6] = 0;
                                l_U577[7] = 0;
                                l_U577[8] = 0;
                                sub_24769();
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U768[7] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U768[7], 30.00000000, 30.00000000, 0 ))
                            {
                                sub_23800( 3 );
                                sub_23800( 4 );
                                sub_23800( 5 );
                                l_U577[6] = 0;
                                l_U577[7] = 0;
                                l_U577[8] = 0;
                                sub_24769();
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U768[8] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U768[8], 30.00000000, 30.00000000, 0 ))
                            {
                                sub_23800( 3 );
                                sub_23800( 4 );
                                sub_23800( 5 );
                                l_U577[6] = 0;
                                l_U577[7] = 0;
                                l_U577[8] = 0;
                                sub_24769();
                            }
                        }
                    }
                }
                sub_25332( 0 );
                sub_25332( 1 );
                sub_25332( 2 );
                sub_25332( 3 );
                sub_25332( 4 );
                sub_25332( 5 );
                sub_25332( 6 );
                sub_25332( 7 );
                sub_25332( 8 );
                GET_CHAR_COORDINATES( sub_2924(), ref l_U506._fU0, ref l_U506._fU4, ref l_U506._fU8 );
                if (LOCATE_CAR_3D( l_U767, l_U519._fU0, l_U519._fU4, l_U519._fU8, 300.00000000, 300.00000000, 300.00000000, 0 ))
                {
                    if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
                    {
                        if (l_U607 == 0)
                        {
                            sub_23800( 0 );
                            sub_23800( 1 );
                            sub_23800( 2 );
                            if (l_U605 == 1)
                            {
                                sub_23800( 3 );
                                sub_23800( 4 );
                                sub_23800( 5 );
                            }
                            if (l_U622 == 1)
                            {
                                sub_23800( 6 );
                                sub_23800( 7 );
                                sub_23800( 8 );
                            }
                            l_U607 = 1;
                        }
                        sub_25747( 0 );
                        sub_25747( 1 );
                        sub_25747( 2 );
                        if (l_U605 == 1)
                        {
                            sub_25747( 3 );
                            sub_25747( 4 );
                            sub_25747( 5 );
                        }
                        if (l_U622 == 1)
                        {
                            sub_25747( 6 );
                            sub_25747( 7 );
                            sub_25747( 8 );
                        }
                    }
                }
                if ((((((((l_U577[0] == 1) AND (l_U577[1] == 1)) AND (l_U577[3] == 1)) AND (l_U577[4] == 1)) AND (l_U577[5] == 1)) AND (l_U577[6] == 1)) AND (l_U577[7] == 1)) AND (l_U577[8]))
                {
                    while (NOT (sub_13056( l_U725, ref l_U719, 6, 1 )))
                    {
                        WAIT( 0 );
                    }
                    l_U486 = 6;
                }
            }
            break;
            case 6:
            sub_22509();
            break;
        }
    }
    return;
}

void sub_14945()
{
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
        {
            STORE_WANTED_LEVEL( sub_2668(), ref l_U664 );
            if (l_U664 == 0)
            {
                if (l_U587 == 1)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "gerry6_21", 7500, 1 );
                    if (l_U486 > 1)
                    {
                        SET_ROUTE( l_U788, 1 );
                    }
                    REMOVE_CARS_FROM_GENERATORS_IN_AREA( l_U497._fU0 + 30, l_U497._fU4 + 30, l_U497._fU8 + 30, l_U497._fU0 - 30, l_U497._fU4 - 30, l_U497._fU8 - 30 );
                }
                GET_GAME_TIMER( ref l_U665 );
                l_U587 = 0;
                l_U624 = 0;
                if (DOES_BLIP_EXIST( l_U788 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U788, 2 );
                }
                if (IS_VEH_DRIVEABLE( l_U767 ))
                {
                    if (DOES_BLIP_EXIST( l_U789 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U789, 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U768[0] ))
                {
                    if (DOES_BLIP_EXIST( l_U790[0] ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U790[0], 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U768[1] ))
                {
                    if (DOES_BLIP_EXIST( l_U790[1] ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U790[1], 0 );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U788 ))
            {
                CHANGE_BLIP_DISPLAY( l_U788, 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                if (DOES_BLIP_EXIST( l_U789 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U789, 0 );
                }
            }
            sub_15450( 0 );
            sub_15591( 0 );
            if (l_U624 == 0)
            {
                GET_GAME_TIMER( ref l_U666 );
                l_U667 = l_U666 - l_U665;
                if (l_U667 < 7500)
                {
                    l_U587 = 1;
                    SET_ROUTE( l_U788, 0 );
                    l_U625 = 0;
                    PRINT_NOW( "gerry6_Want", 1000, 1 );
                }
                else
                {
                    l_U624 = 1;
                }
            }
        }
        else if (l_U587 == 0)
        {
            PRINT_NOW( "gerry6_02", 7500, 1 );
            if (l_U486 > 1)
            {
                SET_ROUTE( l_U788, 0 );
            }
            l_U587 = 1;
        }
        if (DOES_BLIP_EXIST( l_U788 ))
        {
            CHANGE_BLIP_DISPLAY( l_U788, 0 );
        }
        GET_GAME_TIMER( ref l_U665 );
        l_U624 = 0;
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            if (DOES_BLIP_EXIST( l_U789 ))
            {
                CHANGE_BLIP_DISPLAY( l_U789, 4 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U768[0] ))
        {
            if (DOES_BLIP_EXIST( l_U790[0] ))
            {
                CHANGE_BLIP_DISPLAY( l_U790[0], 0 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U768[1] ))
        {
            if (DOES_BLIP_EXIST( l_U790[1] ))
            {
                CHANGE_BLIP_DISPLAY( l_U790[1], 0 );
            }
        }
    }
    return;
}

void sub_15450(unknown uParam0)
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

void sub_15591(unknown uParam0)
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

void sub_16130()
{
    float fVar2;

    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2924(), l_U767, 100, 70, 0 )))
        {
            if (IS_VEH_DRIVEABLE( l_U768[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[0] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[0], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[0], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[1] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[1], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[1], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[3] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[3] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[3], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[3], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[4] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[4] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[4], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[4], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[5] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[5] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[5], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[5], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[6] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[6] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[6], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[6], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[7] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[7] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[7], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[7], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U768[8] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U742[8] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[8], l_U767, 20, 20, 20, 0 ))
                    {
                        GET_CAR_SPEED( l_U768[8], ref fVar2 );
                        if (fVar2 < 5)
                        {
                            l_U565 = 1;
                            l_U601 = 1;
                        }
                    }
                }
            }
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2924(), l_U767, 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            l_U565 = 1;
            l_U601 = 1;
        }
    }
    return;
}

void sub_17602()
{
    CLEAR_AREA_OF_CARS( -1098.88100000, 1190.65900000, 18.86920000, 7.00000000 );
    CREATE_CAR( l_U669, -1099.88100000, 1196.65900000, 19.86920000, ref l_U768[0], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[0], l_U675, l_U672, ref l_U742[0] );
    CREATE_CHAR_AS_PASSENGER( l_U768[0], l_U675, l_U672, 0, ref l_U752[0] );
    if (IS_VEH_DRIVEABLE( l_U768[0] ))
    {
        sub_11201( 0, 0.96590000 );
        sub_11350( l_U742[0], l_U781 );
        sub_11350( l_U752[0], l_U783 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[0], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[0], 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[0], 0 );
        sub_11504( 0 );
        sub_3351( 4, l_U742[0], "GOON_1", 0 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[0], 1 );
        SET_CAR_FORWARD_SPEED( l_U768[0], 15.00000000 );
        CHANGE_CAR_COLOUR( l_U768[0], 0, 0 );
        l_U577[0] = 0;
    }
    CREATE_CAR( l_U670, -1106.34100000, 1236.24200000, 23.37820000, ref l_U768[1], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[1], l_U675, l_U672, ref l_U742[1] );
    CREATE_CHAR_AS_PASSENGER( l_U768[1], l_U675, l_U672, 0, ref l_U752[1] );
    if (IS_VEH_DRIVEABLE( l_U768[1] ))
    {
        sub_11201( 1, 0 );
        sub_11350( l_U742[1], l_U781 );
        sub_11350( l_U752[1], l_U783 );
        sub_3351( 5, l_U742[1], "GOON_2_GM4", 0 );
        SET_CAR_HEADING( l_U768[1], 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[1], 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[1], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[1], 1 );
        sub_11504( 1 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[1], 1 );
        CHANGE_CAR_COLOUR( l_U768[1], 0, 0 );
        l_U577[1] = 0;
    }
    sub_18253();
    sub_18712();
    l_U486 = 5;
    return;
}

void sub_18253()
{
    vector vVar2;
    float fVar5;

    vVar2 = {-919.32180000, 1129.25400000, 19.01280000};
    fVar5 = 358.52590000;
    CREATE_CAR( l_U670, vVar2.x, vVar2.y, vVar2.z, ref l_U768[3], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[3], l_U675, l_U672, ref l_U742[3] );
    CREATE_CHAR_AS_PASSENGER( l_U768[3], l_U675, l_U672, 0, ref l_U752[3] );
    if (IS_VEH_DRIVEABLE( l_U768[3] ))
    {
        sub_11201( 3, fVar5 );
        FREEZE_CAR_POSITION( l_U768[3], 1 );
        sub_11504( 3 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[3], 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U768[3] );
        CHANGE_CAR_COLOUR( l_U768[3], 0, 0 );
    }
    CREATE_CAR( l_U669, -885.61630000, 1107.03200000, 19.61980000, ref l_U768[5], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[5], l_U675, l_U672, ref l_U742[5] );
    CREATE_CHAR_AS_PASSENGER( l_U768[5], l_U675, l_U672, 0, ref l_U752[5] );
    if ((NOT (IS_CHAR_INJURED( l_U742[5] ))) AND (IS_VEH_DRIVEABLE( l_U768[5] )))
    {
        sub_11201( 5, 90.15050000 );
        FREEZE_CAR_POSITION( l_U768[5], 1 );
        sub_11504( 5 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[5], 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U768[5] );
        CHANGE_CAR_COLOUR( l_U768[5], 0, 0 );
    }
    return;
}

void sub_18712()
{
    CLEAR_AREA_OF_CARS( -625.00600000, 1176.97100000, 18.36940000, 7.00000000 );
    CREATE_CAR( l_U669, -625.00600000, 1176.97100000, 18.36940000, ref l_U768[6], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[6], l_U675, l_U672, ref l_U742[6] );
    CREATE_CHAR_AS_PASSENGER( l_U768[6], l_U675, l_U672, 0, ref l_U752[6] );
    if (IS_VEH_DRIVEABLE( l_U768[6] ))
    {
        sub_11201( 6, 94.51120000 );
        sub_11350( l_U742[6], l_U781 );
        sub_11350( l_U752[6], l_U783 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[6], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[6], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[6], 0 );
        SET_CAR_HEADING( l_U768[6], 94.51120000 );
        sub_11504( 6 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[5], 1 );
        CHANGE_CAR_COLOUR( l_U768[6], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -674.66510000, 1160.34800000, 18.47710000, 7.00000000 );
    CREATE_CAR( l_U669, -674.66510000, 1160.34800000, 18.47710000, ref l_U768[7], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[7], l_U675, l_U672, ref l_U742[7] );
    CREATE_CHAR_AS_PASSENGER( l_U768[7], l_U675, l_U672, 0, ref l_U752[7] );
    if (IS_VEH_DRIVEABLE( l_U768[7] ))
    {
        sub_11201( 7, 332.37630000 );
        sub_11350( l_U742[7], l_U781 );
        sub_11350( l_U752[7], l_U783 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[7], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[7], 1 );
        sub_11504( 7 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[7], 0 );
        SET_CAR_HEADING( l_U768[7], 332.37630000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[7], 1 );
        CHANGE_CAR_COLOUR( l_U768[7], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -586.44830000, 1157.26500000, 18.42290000, 7.00000000 );
    CREATE_CAR( l_U669, -586.44830000, 1157.26500000, 18.42290000, ref l_U768[8], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[8], l_U675, l_U672, ref l_U742[8] );
    CREATE_CHAR_AS_PASSENGER( l_U768[8], l_U675, l_U672, 0, ref l_U752[8] );
    if (IS_VEH_DRIVEABLE( l_U768[8] ))
    {
        sub_11201( 8, 274.44450000 );
        sub_11350( l_U742[8], l_U781 );
        sub_11350( l_U752[8], l_U783 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[8], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[8], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[8], 0 );
        sub_11504( 8 );
        SET_CAR_HEADING( l_U768[8], 274.44450000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[8], 1 );
        CHANGE_CAR_COLOUR( l_U768[8], 0, 0 );
    }
    return;
}

void sub_19657()
{
    CLEAR_AREA_OF_CARS( -1057.67200000, 1240.37900000, 23.33160000, 7.00000000 );
    CREATE_CAR( l_U670, -1057.67200000, 1240.37900000, 23.33160000, ref l_U768[0], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[0], l_U675, l_U672, ref l_U742[0] );
    CREATE_CHAR_AS_PASSENGER( l_U768[0], l_U675, l_U672, 0, ref l_U752[0] );
    if (IS_VEH_DRIVEABLE( l_U768[0] ))
    {
        sub_11201( 0, 280.00400000 );
        sub_11350( l_U742[0], l_U781 );
        sub_11350( l_U752[0], l_U783 );
        sub_3351( 4, l_U742[0], "GOON_1", 0 );
        SET_CAR_HEADING( l_U768[0], 280.00400000 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[0], 1 );
        sub_11504( 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[0], 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[0], 0 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[0], 1 );
        SET_CAR_FORWARD_SPEED( l_U768[0], 10.00000000 );
        CHANGE_CAR_COLOUR( l_U768[0], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -1057.94200000, 1268.87700000, 23.22110000, 7.00000000 );
    CREATE_CAR( l_U669, -1057.94200000, 1268.87700000, 23.22110000, ref l_U768[1], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[1], l_U675, l_U672, ref l_U742[1] );
    CREATE_CHAR_AS_PASSENGER( l_U768[1], l_U675, l_U672, 0, ref l_U752[1] );
    if ((NOT (IS_CHAR_INJURED( l_U742[1] ))) AND (IS_VEH_DRIVEABLE( l_U768[1] )))
    {
        sub_11201( 1, 180.73050000 );
        sub_11350( l_U742[1], l_U781 );
        sub_11350( l_U752[1], l_U783 );
        sub_3351( 5, l_U742[1], "GOON_2_GM4", 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[1], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[1], 0 );
        sub_11504( 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[1], 0 );
        SET_CAR_HEADING( l_U768[0], 180.73050000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[1], 1 );
        SET_CAR_FORWARD_SPEED( l_U768[1], 10.00000000 );
        CHANGE_CAR_COLOUR( l_U768[1], 0, 0 );
    }
    sub_18253();
    sub_18712();
    l_U486 = 5;
    return;
}

void sub_20410()
{
    CLEAR_AREA_OF_CARS( -1109.38600000, 1158.48700000, 15.47900000, 7.00000000 );
    CREATE_CAR( l_U669, -1109.38600000, 1158.48700000, 15.47900000, ref l_U768[0], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[0], l_U675, l_U672, ref l_U742[0] );
    CREATE_CHAR_AS_PASSENGER( l_U768[0], l_U675, l_U672, 0, ref l_U752[0] );
    if (IS_VEH_DRIVEABLE( l_U768[0] ))
    {
        sub_11201( 0, 272.68240000 );
        sub_11350( l_U742[0], l_U781 );
        sub_11350( l_U752[0], l_U783 );
        sub_11504( 0 );
        sub_3351( 4, l_U742[0], "GOON_1", 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[0], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[0], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[0], 0 );
        SET_CAR_HEADING( l_U768[0], 272.68800000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[0], 1 );
        CHANGE_CAR_COLOUR( l_U768[0], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -1034.31300000, 1165.56900000, 15.58880000, 7.00000000 );
    CREATE_CAR( l_U669, -1034.31300000, 1165.56900000, 15.58880000, ref l_U768[1], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[1], l_U675, l_U672, ref l_U742[1] );
    CREATE_CHAR_AS_PASSENGER( l_U768[1], l_U675, l_U672, 0, ref l_U752[1] );
    if (IS_VEH_DRIVEABLE( l_U768[1] ))
    {
        sub_11201( 1, 92.51200000 );
        sub_11350( l_U742[1], l_U781 );
        sub_11350( l_U752[1], l_U783 );
        sub_3351( 5, l_U742[1], "GOON_2_GM4", 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[1], 0 );
        sub_11504( 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[1], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[1], 0 );
        SET_CAR_HEADING( l_U768[1], 92.51200000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[1], 1 );
        CHANGE_CAR_COLOUR( l_U768[1], 0, 0 );
    }
    sub_18253();
    sub_18712();
    l_U486 = 5;
    return;
}

void sub_21106()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U768[0] )))
    {
        CLEAR_AREA_OF_CARS( -872.88540000, 1178.49500000, 16.93990000, 7.00000000 );
        CREATE_CAR( l_U669, -872.88540000, 1178.49500000, 16.93990000, ref l_U768[0], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U768[0], l_U675, l_U672, ref l_U742[0] );
        CREATE_CHAR_AS_PASSENGER( l_U768[0], l_U675, l_U672, 0, ref l_U752[0] );
        if (IS_VEH_DRIVEABLE( l_U768[0] ))
        {
            sub_11201( 0, 100.27970000 );
            sub_11350( l_U742[0], l_U781 );
            sub_11350( l_U752[0], l_U783 );
            sub_3351( 4, l_U742[0], "GOON_1", 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[0], 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[0], 0 );
            sub_11504( 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[0], 1 );
            SET_CAR_HEADING( l_U768[0], 100.27970000 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U752[0], 1 );
            CHANGE_CAR_COLOUR( l_U768[0], 0, 0 );
        }
    }
    CLEAR_AREA_OF_CARS( -885.70100000, 1128.80500000, 19.25810000, 7.00000000 );
    CREATE_CAR( l_U670, -885.70100000, 1128.80500000, 19.25810000, ref l_U768[1], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[1], l_U675, l_U672, ref l_U742[1] );
    CREATE_CHAR_AS_PASSENGER( l_U768[1], l_U675, l_U672, 0, ref l_U752[1] );
    if (IS_VEH_DRIVEABLE( l_U768[1] ))
    {
        sub_11201( 1, 352.73380000 );
        sub_11350( l_U742[1], l_U781 );
        sub_11350( l_U752[1], l_U783 );
        sub_3351( 5, l_U742[1], "GOON_2_GM4", 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[1], 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[1], 0 );
        SET_CAR_HEADING( l_U768[1], 352.73380000 );
        sub_11504( 1 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[1], 1 );
        SET_CAR_FORWARD_SPEED( l_U768[1], 15.00000000 );
        CHANGE_CAR_COLOUR( l_U768[1], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -926.72610000, 1175.37100000, 16.67500000, 7.00000000 );
    CREATE_CAR( l_U670, -926.72610000, 1175.37100000, 16.67500000, ref l_U768[3], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[3], l_U675, l_U672, ref l_U742[3] );
    CREATE_CHAR_AS_PASSENGER( l_U768[3], l_U675, l_U672, 0, ref l_U752[3] );
    if (IS_VEH_DRIVEABLE( l_U768[3] ))
    {
        sub_11201( 3, 89.33720000 );
        sub_11350( l_U742[3], l_U781 );
        sub_11350( l_U752[3], l_U783 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[3], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[3], 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[3], 0 );
        sub_11504( 3 );
        SET_CAR_HEADING( l_U768[3], 89.33720000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[3], 1 );
        CHANGE_CAR_COLOUR( l_U768[3], 0, 0 );
    }
    CLEAR_AREA_OF_CARS( -957.39810000, 1177.63800000, 16.83370000, 7.00000000 );
    CREATE_CAR( l_U669, -957.39810000, 1177.63800000, 16.83370000, ref l_U768[4], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U768[4], l_U675, l_U672, ref l_U742[4] );
    CREATE_CHAR_AS_PASSENGER( l_U768[4], l_U675, l_U672, 0, ref l_U752[4] );
    if (IS_VEH_DRIVEABLE( l_U768[4] ))
    {
        sub_11201( 4, 161.81580000 );
        sub_11350( l_U742[4], l_U781 );
        sub_11350( l_U752[4], l_U783 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[4], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[4], 1 );
        sub_11504( 4 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U742[4], 0 );
        SET_CAR_HEADING( l_U768[4], 161.81580000 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U752[4], 1 );
        CHANGE_CAR_COLOUR( l_U768[4], 0, 0 );
    }
    if (DOES_VEHICLE_EXIST( l_U768[0] ))
    {
        if (DOES_VEHICLE_EXIST( l_U768[1] ))
        {
            if (DOES_VEHICLE_EXIST( l_U768[3] ))
            {
                if (DOES_VEHICLE_EXIST( l_U768[4] ))
                {
                    l_U608 = 1;
                    l_U486 = 5;
                }
            }
        }
    }
    return;
}

void sub_22509()
{
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        STORE_WANTED_LEVEL( sub_2668(), ref l_U664 );
        if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
        {
            if (l_U664 == 0)
            {
                GET_GAME_TIMER( ref l_U665 );
                l_U624 = 0;
                if (l_U587 == 1)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "gerry6_21", 7500, 1 );
                    if (l_U486 > 1)
                    {
                        SET_ROUTE( l_U788, 1 );
                    }
                }
                l_U587 = 0;
                l_U625 = 0;
                if (DOES_BLIP_EXIST( l_U788 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U788, 2 );
                }
                if (IS_VEH_DRIVEABLE( l_U767 ))
                {
                    if (DOES_BLIP_EXIST( l_U789 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U789, 0 );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U788 ))
            {
                CHANGE_BLIP_DISPLAY( l_U788, 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U767 ))
            {
                if (DOES_BLIP_EXIST( l_U789 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U789, 0 );
                }
            }
            sub_15450( 0 );
            sub_15591( 0 );
            if (l_U624 == 0)
            {
                GET_GAME_TIMER( ref l_U666 );
                l_U667 = l_U666 - l_U665;
                if (l_U667 < 7500)
                {
                    l_U587 = 1;
                    SET_ROUTE( l_U788, 0 );
                    l_U625 = 0;
                    PRINT_NOW( "gerry6_Want", 1000, 1 );
                }
                else
                {
                    l_U624 = 1;
                }
            }
        }
        else if (l_U625 == 0)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "gerry6_02", 7500, 1 );
            if (l_U486 > 1)
            {
                SET_ROUTE( l_U788, 0 );
            }
        }
        GET_GAME_TIMER( ref l_U665 );
        l_U624 = 0;
        l_U587 = 1;
        l_U625 = 1;
        if (DOES_BLIP_EXIST( l_U788 ))
        {
            CHANGE_BLIP_DISPLAY( l_U788, 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U767 ))
        {
            if (DOES_BLIP_EXIST( l_U789 ))
            {
                CHANGE_BLIP_DISPLAY( l_U789, 4 );
            }
        }
    }
    return;
}

void sub_23186(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( l_U768[uParam0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[uParam0] )))
        {
            TASK_CAR_MISSION( l_U742[uParam0], l_U768[uParam0], l_U767, uParam1, 60, 2, -2, 20 );
            if (NOT (IS_CHAR_INJURED( l_U752[uParam0] )))
            {
                TASK_DRIVE_BY( l_U752[uParam0], sub_2924(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 4, 1, 20 );
                SET_CHAR_WILL_DO_DRIVEBYS( l_U752[uParam0], 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U752[uParam0], 0 );
            }
            l_U589[uParam0] = 1;
        }
    }
    return;
}

void sub_23800(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( l_U768[uParam0] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[uParam0] )))
        {
            if (NOT (IS_CAR_DEAD( l_U767 )))
            {
                TASK_CAR_MISSION( l_U742[uParam0], l_U768[uParam0], l_U767, 8, 7.00000000, 2, 100, 5 );
            }
        }
    }
    return;
}

void sub_23953()
{
    if (IS_VEH_DRIVEABLE( l_U768[3] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[3] )))
        {
            FREEZE_CAR_POSITION( l_U768[3], 0 );
            sub_11350( l_U742[3], l_U781 );
            sub_11350( l_U752[3], l_U783 );
            SET_CAR_FORWARD_SPEED( l_U768[3], 15.00000000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[3] );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U768[4] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[4] )))
        {
            FREEZE_CAR_POSITION( l_U768[4], 0 );
            sub_11350( l_U742[4], l_U781 );
            sub_11350( l_U752[4], l_U783 );
            SET_CAR_FORWARD_SPEED( l_U768[4], 15.00000000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[4] );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U768[5] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[5] )))
        {
            FREEZE_CAR_POSITION( l_U768[5], 0 );
            sub_11350( l_U742[5], l_U781 );
            sub_11350( l_U752[5], l_U783 );
            SET_CAR_FORWARD_SPEED( l_U768[5], 10.00000000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[5] );
        }
    }
    l_U605 = 1;
    return;
}

void sub_24769()
{
    if (IS_VEH_DRIVEABLE( l_U768[6] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[6] )))
        {
            FREEZE_CAR_POSITION( l_U768[6], 0 );
            sub_11350( l_U742[6], l_U781 );
            sub_11350( l_U752[6], l_U783 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[6] );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U768[7] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[7] )))
        {
            FREEZE_CAR_POSITION( l_U768[7], 0 );
            sub_11350( l_U742[7], l_U781 );
            sub_11350( l_U752[7], l_U783 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[7] );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U768[8] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U742[8] )))
        {
            FREEZE_CAR_POSITION( l_U768[8], 0 );
            sub_11350( l_U742[8], l_U781 );
            sub_11350( l_U752[8], l_U783 );
            SET_CAR_ON_GROUND_PROPERLY( l_U768[8] );
        }
    }
    l_U622 = 1;
    return;
}

void sub_25332(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( l_U742[uParam0] )))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U768[uParam0] ))) || (IS_CHAR_INJURED( l_U742[uParam0] )))
        {
            if (DOES_BLIP_EXIST( l_U790[uParam0] ))
            {
                CHANGE_BLIP_DISPLAY( l_U790[uParam0], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U742[uParam0] )))
            {
                CLEAR_CHAR_TASKS( l_U742[uParam0] );
            }
            l_U577[uParam0] = 1;
        }
    }
    return;
}

void sub_25747(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( l_U768[uParam0] ))
    {
        if (NOT (LOCATE_CHAR_IN_CAR_CAR_3D( sub_2924(), l_U768[uParam0], 110.00000000, 110.00000000, 110.00000000, 0 )))
        {
            if (DOES_BLIP_EXIST( l_U790[uParam0] ))
            {
                CHANGE_BLIP_DISPLAY( l_U790[uParam0], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U742[uParam0] )))
            {
                CLEAR_CHAR_TASKS( l_U742[uParam0] );
            }
            if (NOT (IS_CAR_ON_SCREEN( l_U768[uParam0] )))
            {
                DELETE_CHAR( ref l_U742[uParam0] );
                DELETE_CAR( ref l_U768[uParam0] );
            }
            l_U577[uParam0] = 1;
        }
    }
    else
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U768[uParam0] );
        l_U577[uParam0] = 1;
    }
    return;
}

void sub_26223(unknown uParam0)
{
    int iVar3;
    float fVar4;

    if (NOT (IS_CAR_DEAD( l_U767 )))
    {
        if (NOT (IS_CAR_DEAD( l_U768[uParam0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U742[uParam0] )))
            {
                if ((NOT (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))) AND (NOT (sub_26314( uParam0 ))))
                {
                    switch (l_U640[uParam0])
                    {
                        case 0:
                        GET_CAR_SPEED( l_U768[uParam0], ref fVar4 );
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U742[uParam0], l_U767, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (fVar4 < 7))
                        {
                            l_U650[uParam0] = 0;
                            l_U640[uParam0]++;
                        }
                        break;
                        case 1:
                        GET_DRIVER_OF_CAR( l_U767, ref iVar3 );
                        if (iVar3 == nil)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U742[uParam0], l_U767, -2 );
                            l_U640[uParam0]++;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_IN_CAR( l_U742[uParam0], l_U767 ))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U742[uParam0], l_U767, 20.00000000, 2 );
                            l_U640[uParam0]++;
                        }
                        break;
                        case 3:
                        if (IS_CHAR_IN_CAR( l_U742[uParam0], l_U767 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U742[uParam0], sub_2924(), 100.00000000, 100.00000000, 100.00000000, 0 )))
                            {
                                l_U565 = 1;
                                l_U601 = 1;
                            }
                        }
                        break;
                    }
                }
                else
                {
                    switch (l_U650[uParam0])
                    {
                        case 0:
                        if (NOT (IS_CHAR_IN_CAR( l_U742[uParam0], l_U768[uParam0] )))
                        {
                            GET_DRIVER_OF_CAR( l_U768[uParam0], ref iVar3 );
                            if (iVar3 == nil)
                            {
                                l_U640[uParam0] = 0;
                                TASK_ENTER_CAR_AS_DRIVER( l_U742[uParam0], l_U768[uParam0], -2 );
                                l_U650[uParam0]++;
                            }
                        }
                        break;
                        case 1:
                        if (IS_CHAR_IN_CAR( l_U742[uParam0], l_U768[uParam0] ))
                        {
                            sub_23186( uParam0, 3 );
                            l_U650[uParam0]--;
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

int sub_26314(int iParam0)
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U742[I] )))
        {
            if (I != iParam0)
            {
                if (IS_CHAR_IN_CAR( l_U742[I], l_U767 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_27265(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( l_U742[uParam0] )))
    {
        DELETE_CHAR( ref l_U742[uParam0] );
    }
    if (NOT (IS_CAR_DEAD( l_U768[uParam0] )))
    {
        DELETE_CAR( ref l_U768[uParam0] );
    }
    return;
}

void sub_27639()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1091423958 );
    REMOVE_ANIMS( "missgerry4" );
    REMOVE_CAR_RECORDING( 2990 );
    sub_27695( l_U673 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U672 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U670 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U669 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U671 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U668 );
    return;
}

void sub_27695(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7867( uParam0 ) );
    return;
}

void sub_28562()
{
    int iVar2;
    int iVar3;

    if ((l_U484 == 10) || (l_U484 == 11))
    {
        if (DOES_CHAR_EXIST( l_U741 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U741, sub_2924(), 0 ))
            {
                l_U604 = 1;
                l_U601 = 1;
            }
        }
    }
    if (l_U484 != 12)
    {
        if (l_U484 != 15)
        {
            if (l_U484 != 0)
            {
                if (l_U484 != 1)
                {
                    if (l_U484 != 2)
                    {
                        if (DOES_VEHICLE_EXIST( l_U767 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U767 )))
                            {
                                if (l_U484 != 3)
                                {
                                    if (sub_28755( l_U767 ))
                                    {
                                        if ((((((l_U484 == 0) || (l_U484 == 4)) || (l_U484 == 1)) || (l_U484 == 5)) || (l_U484 == 2)) || (l_U484 == 3))
                                        {
                                            l_U603 = 1;
                                        }
                                        else
                                        {
                                            l_U602 = 1;
                                        }
                                        l_U601 = 1;
                                    }
                                }
                                if (NOT (IS_VEH_DRIVEABLE( l_U767 )))
                                {
                                    if ((((((l_U484 == 0) || (l_U484 == 4)) || (l_U484 == 1)) || (l_U484 == 5)) || (l_U484 == 2)) || (l_U484 == 3))
                                    {
                                        l_U603 = (1) || (l_U484 == 2);
                                    }
                                    else
                                    {
                                        l_U602 = 1;
                                    }
                                    l_U601 = 1;
                                }
                            }
                            else if ((((((l_U484 == 0) || (l_U484 == 4)) || (l_U484 == 1)) || (l_U484 == 5)) || (l_U484 == 2)) || (l_U484 == 3))
                            {
                                l_U603 = (1) || (l_U484 == 2);
                            }
                            else
                            {
                                l_U602 = 1;
                            }
                            l_U601 = 1;;
                        }
                    }
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U767 ))
    {
        GET_CAR_HEALTH( l_U767, ref iVar2 );
    }
    if (l_U484 != 0)
    {
        if (l_U484 != 12)
        {
            if (l_U484 != 15)
            {
                if (l_U484 >= 10)
                {
                    if (IS_VEH_DRIVEABLE( l_U767 ))
                    {
                        iVar3 = l_U639 - iVar2;
                        if (IS_CHAR_IN_CAR( sub_2924(), l_U767 ))
                        {
                            if (l_U620 == 0)
                            {
                                if (iVar3 > 100)
                                {
                                    GET_GAME_TIMER( ref l_U556 );
                                    l_U557 = l_U556 - l_U555;
                                    if (l_U557 < 7500)
                                    {
                                        PRINT_HELP( "gerry6_warn" );
                                        l_U620 = 1;
                                    }
                                    else
                                    {
                                        l_U620 = 1;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U555 );
                                }
                            }
                            if (iVar2 < 400)
                            {
                                l_U602 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_28755(unknown uParam0)
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

void sub_29407()
{
    sub_29416();
    sub_41005();
    TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
    sub_41070( 29 );
    sub_2609();
    return;
}

void sub_29416()
{
    sub_29425();
    return;
}

void sub_29425()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_29443();
    sub_29502( iVar2, iVar3, iVar4 );
    return;
}

void sub_29443()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_29502(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_29535( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_29535(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_29631( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_29631( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_29631( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_29631( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_29631( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_29631( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_30208( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_30605( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_30605( 0, 4 );
            }
        }
    }
    if (NOT (sub_30694( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2668(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2668() );
    }
    sub_1707();
    bVar27 = true;
    uVar28 = sub_30208( iParam0, iVar7 );
    uVar29 = sub_1164( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_40070( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_40500();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_40585( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_40642( iParam0 );
                sub_40681( 0 );
                sub_1605( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_40789();
        }
    }
    if (bParam2)
    {
        sub_40500();
        sub_40877();
        sub_40681( 0 );
    }
    if (bParam3)
    {
        sub_40500();
        sub_40917();
        sub_40681( 0 );
        sub_1605( uVar29, 0 );
    }
    sub_1051();
    return;
}

void sub_29631(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_30208(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1563( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_30605(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_30694(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_30902( uParam1 );
        break;
        case 1:
        bVar8 = sub_32980( uParam1 );
        break;
        case 2:
        bVar8 = sub_33206( uParam1 );
        break;
        case 3:
        bVar8 = sub_33356( uParam1 );
        break;
        case 4:
        bVar8 = sub_33634( uParam1 );
        break;
        case 5:
        bVar8 = sub_33937( uParam1 );
        break;
        case 6:
        bVar8 = sub_34136( uParam1 );
        break;
        case 7:
        bVar8 = sub_34362( uParam1 );
        break;
        case 8:
        bVar8 = sub_34597( uParam1 );
        break;
        case 9:
        bVar8 = sub_34972( uParam1 );
        break;
        case 10:
        bVar8 = sub_35219( uParam1 );
        break;
        case 11:
        bVar8 = sub_35358( uParam1 );
        break;
        case 12:
        bVar8 = sub_35657( uParam1 );
        break;
        case 13:
        bVar8 = sub_35885( uParam1 );
        break;
        case 14:
        bVar8 = sub_36172( uParam1 );
        break;
        case 15:
        bVar8 = sub_36454( uParam1 );
        break;
        case 16:
        bVar8 = sub_36736( uParam1 );
        break;
        case 17:
        bVar8 = sub_36937( uParam1 );
        break;
        case 18:
        bVar8 = sub_37010( uParam1 );
        break;
        case 19:
        bVar8 = sub_37224( uParam1 );
        break;
        case 20:
        bVar8 = sub_37477( uParam1 );
        break;
        case 21:
        bVar8 = sub_37724( uParam1 );
        break;
        case 22:
        bVar8 = sub_37925( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_32585( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_30208( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_38248( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_30902(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_31181( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_31181( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_31181( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_31181( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_31181( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_31181( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_31181( iVar3, 0, sub_32463(), sub_32729(), 0, 0 );
        break;
        default:
        sub_32888( "Friend 1", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Friend 1", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_31181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_31192( uParam1 );
    sub_31366( uParam0, 0, uParam2 );
    sub_31366( uParam0, 1, uParam3 );
    sub_31366( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_29443();
    return;
}

void sub_31192(unknown uParam0)
{
    ADD_SCORE( sub_2668(), uParam0 );
    sub_31217( uParam0 );
    return;
}

void sub_31217(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1563( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_31366(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_31523( uParam0 );
    }
    return;
}

void sub_31523(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_32463()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32585( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32585(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_32729()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32585( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32888(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_32980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 2", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 2", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33206(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_32888( "Girl 3", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Girl 3", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33356(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_31181( iVar3, 0, sub_32463(), sub_32729(), 0, 0 );
        break;
        default:
        sub_32888( "Friend 4", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Friend 4", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33634(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 5", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 5", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33937(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 7", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 7", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34136(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 7b", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 7b", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34362(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_31181( iVar3, 0, sub_32463(), sub_32729(), 0, 0 );
        break;
        default:
        sub_32888( "Friend 8", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Friend 8", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34597(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_31181( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_31181( iVar3, 0, sub_32463(), sub_32729(), 0, 0 );
        break;
        default:
        sub_32888( "Friend 9", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Friend 9", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34972(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_31181( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_31181( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_32888( "Contact 10", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32888( "Contact 10", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35219(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_32888( "Girl 11", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Girl 11", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35358(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_32888( "Contact 12", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 12", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35657(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 13", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 13", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35885(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_31181( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_31181( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_31181( iVar3, 0, sub_32463(), sub_32729(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_32888( "Friend 15", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Friend 15", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36172(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 16", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 16", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36454(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31181( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_32888( "Contact 18", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 18", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36736(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 19", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 19", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36937(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_32888( "Girl 20", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37010(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_32888( "Contact 21", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 21", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37224(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31181( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_32888( "Contact 22", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 22", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37477(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_31181( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31181( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31181( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_32888( "Contact 24", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 24", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37724(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31181( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31181( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_32888( "Contact 25", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32888( "Contact 25", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37925(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_31181( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_32888( "Girl 26", 1 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32888( "Girl 26", 0 );
        sub_31181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_38248(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_38296( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_39027( iParam1 );
    }
    return;
}

int sub_38296(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_38436( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_38436(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_38618( 0 );
    return;
}

void sub_38618(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_38873();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38873()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_39027(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_39360( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_39360( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_39360( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_39360( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_39360( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_39360( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_39360( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_39360( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_39360( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_39360( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_39360( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_39360( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_39360( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_39360( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_39360( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_39360( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_39360( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_39360( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_39360( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_39360(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_40070(unknown uParam0, unknown uParam1)
{
    sub_40089( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_40089(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_40500()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_40585(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_40642(unknown uParam0)
{
    sub_950();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_40681(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_40789()
{
    sub_40798();
    return;
}

void sub_40798()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_40877()
{
    sub_40798();
    return;
}

void sub_40917()
{
    sub_40798();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_41005()
{
    if (IS_PLAYER_PLAYING( sub_2668() ))
    {
        CLEAR_WANTED_LEVEL( sub_2668() );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_41070(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_41225( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_41225( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_41225( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_41225( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_41225( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_41225( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_41225( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_41225( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_41225( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_41225( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_41225( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_41225( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_41225( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_41225( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_41225(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_41278( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_41410( iParam0 + 0 );
    }
    return;
}

void sub_41278(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_41410( iParam0 + 0 );
    }
    return;
}

void sub_41410(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_41441( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_41441(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_42445()
{
    sub_42454();
    sub_42471();
    if (l_U603 == 1)
    {
        PRINT_NOW( "gerry6_desycar", 7000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U740 )))
        {
            DELETE_CHAR( ref l_U740 );
        }
    }
    else if (l_U602 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U767 )))
        {
            if (IS_CAR_UPSIDEDOWN( l_U767 ))
            {
                sub_42705();
                sub_43295( 27, l_U740, 15 );
            }
        }
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2924(), l_U513._fU0, l_U513._fU4, l_U513._fU8, 30.00000000, 30.00000000, 30.00000000, 0 )) AND (l_U623 == 0))
        {
            SET_PLAYER_CONTROL( sub_2668(), 0 );
            WAIT( 1500 );
            DO_SCREEN_FADE_OUT( 3000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA( l_U519._fU0, l_U519._fU4, l_U519._fU8 - 1, 10.00000000, 1 );
            sub_43536( sub_2924(), l_U519._fU0, l_U519._fU4, l_U519._fU8 - 1, l_U512 );
            WAIT( 2000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (DOES_VEHICLE_EXIST( l_U767 ))
            {
                DELETE_CAR( ref l_U767 );
            }
            if (NOT (IS_CHAR_DEAD( l_U740 )))
            {
                DELETE_CHAR( ref l_U740 );
            }
            if (DOES_BLIP_EXIST( l_U787 ))
            {
                REMOVE_BLIP( l_U787 );
            }
            if (DOES_BLIP_EXIST( l_U788 ))
            {
                REMOVE_BLIP( l_U788 );
            }
            DO_SCREEN_FADE_IN( 3000 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_2668(), 1 );
        }
        if (l_U623 == 0)
        {
            sub_43881( l_U674, l_U718, "GM4AUD", 0 );
        }
        PRINT_NOW( "gerry6_kill", 7000, 1 );
    }
    else if (l_U604 == 1)
    {
        PRINT_NOW( "gerry6_goon", 7000, 1 );
    }
    else if (l_U565 == 1)
    {
        PRINT_NOW( "abadoned", 7000, 1 );
    };;;;
    if ((g_U64641 >= 3) || (l_U602 == 1))
    {
        if (IS_PLAYER_PLAYING( sub_2668() ))
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_2668(), 150 );
        }
        if (NOT (IS_CHAR_DEAD( sub_2924() )))
        {
            SAY_AMBIENT_SPEECH( sub_2924(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
    }
    sub_2609();
    return;
}

void sub_42454()
{
    return;
}

void sub_42471()
{
    sub_42480();
    return;
}

void sub_42480()
{
    int iVar2;

    iVar2 = 15;
    sub_42494( iVar2 );
    sub_1698( iVar2 );
    return;
}

void sub_42494(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2668(), 150 );
    CLEAR_HELP();
    sub_522( uParam0 );
    return;
}

void sub_42705()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U516 = {-0.40000000, -1.60000000, 0.73000000};
    if (NOT (IS_CAR_DEAD( l_U767 )))
    {
        if (sub_28755( l_U767 ))
        {
            GET_CAR_COORDINATES( l_U767, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            REQUEST_MODEL( 1091423958 );
            while (NOT (HAS_MODEL_LOADED( 1091423958 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U767 )))
            {
                CREATE_OBJECT( 1091423958, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U779, 1 );
                ATTACH_OBJECT_TO_CAR( l_U779, l_U767, 0, l_U516, 1.54000000, 0, 1.62000000 );
                SET_OBJECT_COLLISION( l_U779, 1 );
                SET_OBJECT_VISIBLE( l_U779, 0 );
            }
            l_U637 = 0.00000000;
            while (l_U637 < 1.00000000)
            {
                WAIT( 0 );
                if (NOT (IS_CHAR_DEAD( l_U740 )))
                {
                    SET_CHAR_VISIBLE( l_U740, 1 );
                }
                if (l_U637 > 0.20000000)
                {
                    if (l_U606 == 0)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U740 )))
                        {
                            SET_CHAR_COLLISION( l_U740, 1 );
                            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U740 ))
                            {
                                DETACH_PED( l_U740, 1 );
                            }
                            if (IS_CHAR_INJURED( l_U740 ))
                            {
                                REVIVE_INJURED_PED( l_U740 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U740 )))
                            {
                                SWITCH_PED_TO_RAGDOLL( l_U740, 0, 20000, 1, 1, 1, 0 );
                                UNLOCK_RAGDOLL( l_U740, 1 );
                            }
                            CLEAR_CHAR_TASKS( l_U740 );
                            SET_CHAR_HEALTH( l_U740, 5 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U740, 0 );
                            l_U606 = 1;
                        }
                    }
                }
                l_U637 += 0.04000000;
                if (NOT (IS_CAR_DEAD( l_U767 )))
                {
                    CONTROL_CAR_DOOR( l_U767, 5, 1, l_U637 );
                }
            }
        }
    }
    return;
}

void sub_43295(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_43536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_2924() )))
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

void sub_43881(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_43925( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_43925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}