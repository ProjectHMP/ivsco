void main()
{
    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = {0.00000000, 0.00000000, 0.00000000};
    l_U488 = 2.50000000;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = "Boat_house_room";
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 1;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 1;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 1;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 1;
    l_U522 = 1;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    l_U529 = 0;
    l_U669 = 90.00000000;
    l_U670 = 5.00000000;
    l_U671 = 25.00000000;
    l_U672 = 15.00000000;
    l_U673 = 2.00000000;
    l_U674 = 4.00000000;
    l_U675 = 0.50000000;
    l_U676 = 120.00000000;
    l_U677 = 0.00000000;
    l_U678 = 0.00000000;
    l_U680 = 1.00000000;
    l_U681 = 0.00000000;
    l_U682 = 1.00000000;
    l_U683 = 10.00000000;
    l_U684 = 30.00000000;
    l_U686 = 1.00000000;
    l_U688 = 1.00000000;
    l_U689 = 5.00000000;
    l_U690 = 1.00000000;
    l_U691 = 1.00000000;
    l_U696 = 0.30000000;
    l_U697 = 0.50000000;
    l_U698 = 50.00000000;
    l_U737 = 0;
    l_U738 = 0;
    l_U739 = 0;
    l_U740 = 0;
    l_U741 = 1;
    l_U742 = 0;
    l_U743 = 0;
    l_U744 = 0;
    l_U745 = 0;
    l_U746 = -1;
    l_U747 = 0;
    l_U748 = 0;
    l_U749 = 0;
    l_U750 = 0;
    l_U751 = 0;
    l_U752 = 0;
    l_U753 = 0;
    l_U884 = 0;
    l_U885 = 0;
    l_U891 = -1616890832;
    l_U892 = 1390084576;
    l_U893 = 788045382;
    l_U894 = -722019798;
    l_U923 = 0;
    l_U2840 = 0;
    l_U2841 = 0;
    l_U2842 = 1;
    l_U3209 = 0.00000000;
    l_U3213 = {-1247.55500000, 101.29700000, 5.01770000};
    l_U3216 = {-1247.55500000, 101.29700000, 10.71770000};
    l_U3275 = 0;
    l_U3314 = 0;
    l_U3346 = 0;
    l_U3349 = 0;
    l_U3547 = 0;
    l_U3598 = 0.00000000;
    l_U3599 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_935();
        sub_3045();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U2713)
        {
            case 0:
            sub_4374();
            break;
            case 1:
            sub_8906();
            break;
            case 2:
            sub_28819();
            break;
            case 3:
            sub_29209();
            break;
            case 4:
            sub_47472();
            break;
            case 5:
            sub_47472();
            sub_61463();
            break;
            case 6:
            sub_105731();
            break;
            case 7:
            sub_107105( "FIN1A_PASS", 2, 1, 0 );
            break;
            case 8:
            if (sub_123333( 1 ))
            {
                sub_107105( "FIN1A_SCREW", 0, 0, 1 );
            }
            break;
            case 9:
            if (sub_123333( 3 ))
            {
                sub_107105( "FIN1A_DROP", 0, 0, 3 );
            }
            break;
            case 11:
            sub_123636();
            break;
        }
        if (l_U2712)
        {
            sub_124722();
        }
        if (l_U3197)
        {
            if (IS_CHAR_INJURED( l_U2719 ))
            {
                sub_132311( 19, l_U2719, 0 );
                sub_123002( 2 );
            }
        }
    }
    return;
}

void sub_935()
{
    sub_944();
    return;
}

void sub_944()
{
    int iVar2;

    iVar2 = 0;
    sub_958( iVar2 );
    sub_2134( iVar2 );
    return;
}

void sub_958(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1002();
        sub_1163();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1271();
            sub_1310();
        }
    }
    sub_1386();
    sub_1487();
    uVar5 = sub_1600( uParam0 );
    sub_2041( uVar5, 0 );
    return;
}

void sub_1002()
{
    sub_1016( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1116();
    }
    return;
}

void sub_1016(int iParam0)
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

void sub_1116()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1163()
{
    sub_1172();
    return;
}

void sub_1172()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1271()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1310()
{
    sub_1319();
    return;
}

void sub_1319()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1386()
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

void sub_1487()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1509();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1509()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1600(unknown uParam0)
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
    sub_1999( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1999(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2041(int iParam0, boolean bParam1)
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

void sub_2134(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2143();
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
        sub_2918();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2143()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2181( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2181( 1, g_U569[I] )) != 0)
            {
                sub_2467( I );
            }
        }
    }
    if (NOT sub_2633())
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

int sub_2181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2467(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2552( g_U569 - 1 );
    return;
}

void sub_2552(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2633()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2181( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2918()
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

void sub_3045()
{
    int I;

    for ( I = 0; I <= 94; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2424[I] ))
        {
            if (NOT l_U1107[I]._fU4)
            {
                DELETE_CHAR( ref l_U2424[I] );
            }
        }
    }
    ENABLE_CHASE_AUDIO( 0 );
    SET_PED_IS_BLIND_RAGING( sub_3140(), 0 );
    if (DOES_OBJECT_EXIST( l_U890 ))
    {
        DELETE_OBJECT( ref l_U890 );
    }
    if (DOES_PICKUP_EXIST( l_U2816[0] ))
    {
        REMOVE_PICKUP( l_U2816[0] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[1] ))
    {
        REMOVE_PICKUP( l_U2816[1] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[2] ))
    {
        REMOVE_PICKUP( l_U2816[2] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[3] ))
    {
        REMOVE_PICKUP( l_U2816[3] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[4] ))
    {
        REMOVE_PICKUP( l_U2816[4] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[5] ))
    {
        REMOVE_PICKUP( l_U2816[5] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[6] ))
    {
        REMOVE_PICKUP( l_U2816[6] );
    }
    if (DOES_PICKUP_EXIST( l_U2816[7] ))
    {
        REMOVE_PICKUP( l_U2816[7] );
    }
    STOP_PED_SPEAKING( sub_3140(), 1 );
    sub_3511( 0 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_3651(), 0 );
    sub_3690();
    sub_3914();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    g_U9155 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1265.00000000, 117.00000000, 13.00000000, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 0, 0.00000000 );
    SET_CHAR_COMPONENT_VARIATION( sub_3140(), 3, 0, 0 );
    sub_4063();
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U10981[7]._fU144._fU32 = l_U923;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3140()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3511(unknown uParam0)
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

void sub_3651()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3690()
{
    int I;

    if (DOES_BLIP_EXIST( l_U2721 ))
    {
        REMOVE_BLIP( l_U2721 );
    }
    if (DOES_BLIP_EXIST( l_U2722 ))
    {
        REMOVE_BLIP( l_U2722 );
    }
    if (DOES_BLIP_EXIST( l_U2827 ))
    {
        REMOVE_BLIP( l_U2827 );
    }
    if (DOES_BLIP_EXIST( l_U2828 ))
    {
        REMOVE_BLIP( l_U2828 );
    }
    if (DOES_BLIP_EXIST( l_U2836 ))
    {
        REMOVE_BLIP( l_U2836 );
    }
    for ( I = 0; I <= 94; I++ )
    {
        if (DOES_BLIP_EXIST( l_U2616[I] ))
        {
            REMOVE_BLIP( l_U2616[I] );
        }
    }
    return;
}

void sub_3914()
{
    return;
}

void sub_4063()
{
    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4374()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    GET_WEAPONTYPE_MODEL( 7, ref uVar2 );
    GET_WEAPONTYPE_MODEL( 13, ref uVar3 );
    GET_WEAPONTYPE_MODEL( 14, ref uVar4 );
    sub_4411( 19 );
    REQUEST_MODEL( l_U891 );
    REQUEST_MODEL( -1685021548 );
    REQUEST_MODEL( 904750859 );
    while ((((NOT (sub_5151( 19 ))) || (NOT (HAS_MODEL_LOADED( l_U891 )))) || (NOT (HAS_MODEL_LOADED( -1685021548 )))) || (NOT (HAS_MODEL_LOADED( 904750859 ))))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2714 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U2715 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2716 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2716, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2716, 60 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2718 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2718, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2718, 32 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2717 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U2717, 0 );
    sub_5382( "FIN1AAU" );
    sub_5501( 0, sub_3140(), "NIKO", 0 );
    LOAD_ADDITIONAL_TEXT( "FIN1AAU", 6 );
    LOAD_ADDITIONAL_TEXT( "FIN1A", 0 );
    GET_MAX_WANTED_LEVEL( ref l_U2762 );
    sub_5691();
    l_U923 = g_U10981[7]._fU144._fU32;
    g_U10981[7]._fU144._fU32 = 1;
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3140(), 0 );
    sub_5828();
    ADD_SCENARIO_BLOCKING_AREA( -1117.40300000, 346.66160000, 0.00000000, -1006.32900000, 362.69070000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -1302.90000000, -194.94270000, 0.00000000, -910.59520000, 479.04860000, 100.00000000 );
    SET_PED_NON_CREATION_AREA( -1302.90000000, -194.94270000, 0.00000000, -910.59520000, 479.04860000, 100.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    l_U2724 = {-1988.29200000, -18.30290000, 5.53740000};
    l_U2727 = {-1256.16600000, -23.71570000, 6.21030000};
    l_U2837 = {-1271.12900000, 113.20570000, 12.97950000};
    l_U2830 = {-1278.01600000, -122.80230000, 4.24510000};
    l_U2833 = {-1977.41800000, -30.03580000, 6.36200000};
    g_U9155 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1264.18000000, 63.91000000, 1.35100000, 90.00000000, 0.00000000, 79.92000000, ref l_U2816[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[0], l_U493 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1252.62000000, 4.62500000, 10.23900000, -44.64000000, 0.00000000, 0.00000000, ref l_U2816[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[1], l_U493 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1268.00000000, 55.42000000, 13.39400000, 90, 0, 18, ref l_U2816[2] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[2], l_U493 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1272.72000000, 117.90000000, 13.16000000, 0.00000000, 0.00000000, 0.00000000, ref l_U2816[3] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[3], l_U493 );
    CREATE_PICKUP_ROTATE( sub_8577( 11 ), 22, 8, -1265.92000000, 47.68000000, 13.32300000, 90, 0, 136.80000000, ref l_U2816[4] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[4], l_U493 );
    CREATE_PICKUP_ROTATE( sub_8577( 15 ), 22, 30, -1287.59000000, 34.14000000, 10.21000000, 82.66000000, 1.80000000, 61.20000000, ref l_U2816[5] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[5], l_U493 );
    CREATE_PICKUP_ROTATE( sub_8577( 15 ), 22, 30, -1258.96000000, 19.20000000, 3.72000000, 84.40000000, 241.92000000, 284.40000000, ref l_U2816[6] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[6], l_U493 );
    CREATE_PICKUP_ROTATE( sub_8577( 4 ), 22, 3, -1267.02000000, 33.66000000, 7.87500000, 90, 35, -18.72000000, ref l_U2816[7] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2816[7], l_U493 );
    l_U2713 = 1;
    return;
}

void sub_4411(unknown uParam0)
{
    REQUEST_MODEL( sub_4422( uParam0 ) );
    return;
}

int sub_4422(unknown uParam0)
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
    sub_1999( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5151(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4422( uParam0 ) );
}

void sub_5382(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_5399();
    return;
}

void sub_5399()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_5501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5581( "\n PED NUMBER ", uParam0 );
    sub_5621( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5581(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5621(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5691()
{
    if (sub_5700())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_5700()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_5828()
{
    ADD_COVER_BLOCKING_AREA( -1265.10400000, 64.35715000, 5.41488700, -1263.08200000, 66.66310000, 18.10588000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1254.73200000, 3.66940700, 9.78122300, -1250.21100000, 5.58580900, 10.84962000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.37400000, 4.10764600, 13.39764000, -1273.15900000, 5.62372400, 20.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1287.26600000, 13.88623000, 8.39763800, -1285.91300000, 17.95719000, 23.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.55000000, 3.14321700, 8.00000000, -1273.90100000, 6.54016200, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1254.64700000, 3.05736700, 8.00000000, -1249.75000000, 6.64366500, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.88300000, 59.46182000, 8.00000000, -1276.37500000, 63.72981000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.43100000, 70.45605000, 8.00000000, -1275.68600000, 74.97671000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.42200000, 84.32037000, 8.00000000, -1276.60900000, 89.03310000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1278.25900000, 102.02650000, 8.00000000, -1276.92000000, 105.81250000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1252.09400000, 59.14396000, 8.00000000, -1250.40000000, 63.53927000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1251.98500000, 70.34906000, 8.00000000, -1250.48400000, 74.61549000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1251.70100000, 84.82077000, 8.00000000, -1250.48900000, 88.25407000, 50.48214000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( -1251.89700000, 102.39360000, 8.00000000, -1250.67400000, 105.80880000, 50.48214000, 1, 1, 1 );
    ADD_COVER_POINT( -1286.63200000, 35.03290000, 17.37910000, 2, 191.42940000, 0, 0, ref l_U2765[9] );
    ADD_COVER_POINT( -1251.01800000, 4.98280000, 10.14380000, 1, 90.00000000, 0, 0, ref l_U2765[10] );
    ADD_COVER_POINT( -1253.73900000, 4.95520000, 10.14380000, 0, 270.00000000, 0, 0, ref l_U2765[11] );
    ADD_COVER_POINT( -1252.13400000, 4.40530000, 10.14380000, 2, 0.00000000, 0, 0, ref l_U2765[12] );
    ADD_COVER_POINT( -1276.61500000, 5.01990000, 17.37910000, 2, 270.08610000, 0, 0, ref l_U2765[13] );
    ADD_COVER_POINT( -1273.89400000, 4.99810000, 17.37910000, 2, 83.95490000, 0, 0, ref l_U2765[14] );
    ADD_COVER_POINT( -1286.62700000, 14.57910000, 17.37900000, 2, 0.00000000, 0, 0, ref l_U2765[15] );
    ADD_COVER_POINT( -1287.14600000, 16.11220000, 17.37920000, 2, 270.00000000, 0, 1, ref l_U2765[16] );
    ADD_COVER_POINT( -1286.64700000, 17.31060000, 17.37920000, 2, 180.00000000, 0, 0, ref l_U2765[17] );
    ADD_COVER_POINT( -1286.54400000, 15.04420000, 10.14420000, 1, 0.00000000, 0, 0, ref l_U2765[18] );
    ADD_COVER_POINT( -1286.58200000, 17.76400000, 10.14420000, 0, 180.00000000, 0, 0, ref l_U2765[19] );
    ADD_COVER_POINT( -1287.18100000, 16.52050000, 10.14420000, 2, 270.00000000, 0, 0, ref l_U2765[20] );
    ADD_COVER_POINT( -1274.43000000, 5.01360000, 10.14380000, 1, 90.00000000, 0, 0, ref l_U2765[21] );
    ADD_COVER_POINT( -1277.15000000, 4.98140000, 10.14380000, 0, 270.00000000, 0, 0, ref l_U2765[22] );
    ADD_COVER_POINT( -1275.78600000, 4.44600000, 10.14380000, 2, 0.00000000, 0, 0, ref l_U2765[23] );
    ADD_COVER_POINT( -1277.71000000, 59.72030000, 12.00020000, 1, 0.00000000, 0, 0, ref l_U2765[24] );
    ADD_COVER_POINT( -1277.72300000, 62.44120000, 12.00020000, 0, 180.00000000, 0, 0, ref l_U2765[25] );
    ADD_COVER_POINT( -1278.21700000, 61.02970000, 12.00020000, 2, 270.00000000, 0, 0, ref l_U2765[26] );
    ADD_COVER_POINT( -1277.66100000, 70.82320000, 12.00020000, 1, 0.00000000, 0, 0, ref l_U2765[27] );
    ADD_COVER_POINT( -1277.60900000, 73.54460000, 12.00020000, 0, 180.00000000, 0, 0, ref l_U2765[28] );
    ADD_COVER_POINT( -1278.21700000, 72.36560000, 12.00020000, 2, 270.00000000, 0, 0, ref l_U2765[29] );
    ADD_COVER_POINT( -1277.75800000, 85.18740000, 12.00020000, 1, 0.00000000, 0, 0, ref l_U2765[30] );
    ADD_COVER_POINT( -1277.72100000, 87.90810000, 12.00020000, 0, 180.00000000, 0, 0, ref l_U2765[31] );
    ADD_COVER_POINT( -1278.21800000, 86.45890000, 12.00020000, 2, 270.00000000, 0, 0, ref l_U2765[32] );
    ADD_COVER_POINT( -1277.68700000, 102.35190000, 12.00020000, 1, 0.00000000, 0, 0, ref l_U2765[33] );
    ADD_COVER_POINT( -1277.52100000, 105.07100000, 12.00020000, 0, 180.00000000, 0, 0, ref l_U2765[34] );
    ADD_COVER_POINT( -1278.21900000, 103.44320000, 12.00020000, 2, 270.00000000, 0, 0, ref l_U2765[35] );
    ADD_COVER_POINT( -1251.32700000, 59.95660000, 12.00020000, 0, 0.00000000, 0, 0, ref l_U2765[36] );
    ADD_COVER_POINT( -1251.25100000, 62.67800000, 12.00020000, 1, 180.00000000, 0, 0, ref l_U2765[37] );
    ADD_COVER_POINT( -1250.73300000, 61.34420000, 12.00020000, 2, 90.00000000, 0, 0, ref l_U2765[38] );
    ADD_COVER_POINT( -1251.24100000, 71.05830000, 12.00020000, 0, 0.00000000, 0, 0, ref l_U2765[39] );
    ADD_COVER_POINT( -1251.23200000, 73.78100000, 12.00020000, 1, 180.00000000, 0, 0, ref l_U2765[40] );
    ADD_COVER_POINT( -1250.73200000, 72.55140000, 12.00020000, 2, 90.00000000, 0, 0, ref l_U2765[41] );
    ADD_COVER_POINT( -1251.28200000, 85.42360000, 12.00020000, 0, 0.00000000, 0, 0, ref l_U2765[42] );
    ADD_COVER_POINT( -1251.23400000, 88.14510000, 12.00020000, 1, 180.00000000, 0, 0, ref l_U2765[43] );
    ADD_COVER_POINT( -1250.73200000, 87.04610000, 12.00020000, 2, 90.00000000, 0, 0, ref l_U2765[44] );
    ADD_COVER_POINT( -1251.32400000, 102.58880000, 12.00020000, 0, 0.00000000, 0, 0, ref l_U2765[45] );
    ADD_COVER_POINT( -1251.33700000, 105.30890000, 12.00020000, 1, 180.00000000, 0, 0, ref l_U2765[46] );
    ADD_COVER_POINT( -1250.69300000, 103.99620000, 12.00020000, 2, 90.00000000, 0, 0, ref l_U2765[47] );
    ADD_COVER_POINT( -1274.63400000, 111.65280000, 11.97940000, 2, 180.00000000, 0, 0, ref l_U2765[48] );
    ADD_COVER_POINT( -1268.05300000, 111.52970000, 11.97990000, 2, 180.00000000, 0, 0, ref l_U2765[49] );
    return;
}

void sub_8577(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_8906()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT l_U3221)
    {
        if (NOT sub_8926())
        {
            l_U3221 = 1;
        }
    }
    else if (((l_U3220 > 0) AND (NOT l_U3222)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_8926())
        {
            if (l_U3235)
            {
                CLEAR_PRINTS();
                sub_9099( ref l_U3223, 0 );
                sub_9099( ref l_U3229, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U3222 = 1;
                l_U3220 = 2;
            }
        }
    }
    switch (l_U3220)
    {
        case 0:
        if (sub_9337())
        {
            BEGIN_CAM_COMMANDS( ref l_U2730 );
            DISPLAY_RADAR( 0 );
            SET_USE_HIGHDOF( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            SET_PLAYER_CONTROL( sub_3651(), 0 );
            CREATE_CAM( 14, ref l_U2731[0] );
            REQUEST_COLLISION_AT_POSN( -1990.49100000, -31.69830000, 5.44460000 );
            LOAD_SCENE( -1979.53000000, -26.81090000, 6.36200000 );
            CLEAR_AREA( -1990.49100000, -31.69830000, 5.88700000, 2.00000000, 1 );
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3140() )))
            {
                if (NOT (IS_AREA_OCCUPIED( -1993.95200000, -33.99417000, 0.00000000, -1986.36400000, -28.91560000, 40.00000000, 0, 1, 0, 0, 0 )))
                {
                    sub_9659( -1990.49100000, -31.69830000, 5.44460000, 270.70320000, -1685021548 );
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( -1990.49100000, -31.69830000, 5.44460000, 5.00000000 );
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar3 );
                SET_CAR_COORDINATES( uVar3, -1990.49100000, -31.69830000, 5.44460000 );
                SET_CAR_HEADING( uVar3, 270.70320000 );
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3140(), -1979.19700000, -31.77650000, 5.36200000 );
            }
            SET_CHAR_COORDINATES( sub_3140(), -1986.24200000, -18.32430000, 5.46040000 );
            SET_CHAR_HEADING( sub_3140(), 109.26530000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1685021548 );
            TASK_SWAP_WEAPON( sub_3140(), 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3140(), 1 );
            sub_9968( 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U2719, 1 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
            TASK_LOOK_AT_CHAR( 0, sub_3140(), -1, 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U2719, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2719 );
            TASK_LOOK_AT_CHAR( 0, l_U2719, -1, 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( sub_3140(), uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            SET_CAM_POS( l_U2731[0], -1985.74600000, -19.24910000, 6.55652400 );
            SET_CAM_ROT( l_U2731[0], 9.80275300, -0.00000000, 53.60358000 );
            SET_CAM_FOV( l_U2731[0], 56.39997000 );
            SET_CAM_ACTIVE( l_U2731[0], 1 );
            SET_CAM_PROPAGATE( l_U2731[0], 1 );
            SET_CAM_NEAR_DOF( l_U2731[0], 2.00000000 );
            SET_CAM_FAR_DOF( l_U2731[0], 5.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            GET_GAME_TIMER( ref l_U2763 );
            l_U3220 = 1;
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2764 );
        if (NOT l_U3236)
        {
            if (NOT l_U3235)
            {
                if ((l_U2764 - l_U2763) > 1000)
                {
                    if ((NOT IS_SCREEN_FADED_IN()) AND (NOT IS_SCREEN_FADING_IN()))
                    {
                        DO_SCREEN_FADE_IN( 500 );
                    }
                    else if (IS_SCREEN_FADED_IN())
                    {
                        GET_GAME_TIMER( ref l_U2763 );
                        sub_27229( "FIN1A_GREET", ref l_U3229, 6, 1 );
                        l_U3235 = 1;
                    }
                }
            }
            else if (NOT (sub_28207( l_U3229 )))
            {
                sub_27229( "FIN1A_PICKUP", ref l_U3223, 6, 1 );
                l_U3236 = 1;
            }
        }
        else
        {
            l_U3220 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2764 );
        if ((NOT (sub_28207( l_U3223 ))) || (l_U3222))
        {
            if (NOT l_U3222)
            {
                SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1500 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                TASK_CLEAR_LOOK_AT( l_U2719 );
            }
            TASK_CLEAR_LOOK_AT( sub_3140() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_PLAYER_CONTROL( sub_3651(), 1 );
            sub_28632();
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_CAM_ACTIVE( l_U2731[0], 0 );
            SET_CAM_PROPAGATE( l_U2731[0], 0 );
            DESTROY_CAM( l_U2731[0] );
            SET_USE_HIGHDOF( 0 );
            END_CAM_COMMANDS( ref l_U2730 );
            if (l_U3222)
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_3651(), 1 );
            l_U2713 = 3;
            l_U3220 = 3;
        }
        break;
        case 3: break;
    }
    return;
}

int sub_8926()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9099(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_9337()
{
    return sub_9348( 1, 1 );
}

int sub_9348(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_9659(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    CREATE_CAR( uParam4, uParam0, uParam1, uParam2, ref uVar7, 1 );
    SET_CAR_HEADING( uVar7, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( uVar7 );
    APPLY_FORCE_TO_CAR( uVar7, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar7 );
    return;
}

void sub_9968(unknown uParam0)
{
    switch (uParam0)
    {
        case 27:
        if (NOT (DOES_CHAR_EXIST( l_U2424[85] )))
        {
            l_U2424[85] = sub_10285( l_U891, 23, -1289.00000000, 42.73640000, 17.37910000, 180.00000000, 7, l_U493, 1, 0, 1 );
            l_U1107[85]._fU0 = l_U2424[85];
            l_U1107[85]._fU24 = {-1289.00000000, 42.73640000, 17.37910000};
            l_U1107[85]._fU36 = 56;
            l_U1107[85]._fU20 = 1;
            l_U1107[85]._fU48 = l_U2716;
        }
        break;
        case 0:
        if (NOT (DOES_CHAR_EXIST( l_U2719 )))
        {
            sub_10663( 19, ref l_U2719, l_U2724._fU0, l_U2724._fU4, l_U2724._fU8, 270.00000000 );
            SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2719, 24 );
            GIVE_WEAPON_TO_CHAR( l_U2719, 15, 3000, 0 );
            if (NOT l_U2842)
            {
                SET_CHAR_PROOFS( l_U2719, 1, 1, 1, 1, 1 );
            }
            else
            {
                SET_CHAR_HEALTH( l_U2719, 2000 );
            }
            sub_5501( 1, l_U2719, "BELL", 0 );
            l_U3197 = 1;
            l_U2409._fU0 = l_U2719;
        }
        break;
        case 2:
        if (NOT (DOES_CHAR_EXIST( l_U2424[92] )))
        {
            l_U2424[92] = sub_10285( l_U891, 23, -1247.49800000, 3.20680000, 4.31180000, 34.39430000, 13, l_U493, 1, 0, 0 );
            l_U1107[92]._fU0 = l_U2424[92];
            l_U1107[92]._fU24 = {-1258.51400000, 18.48780000, 3.30680000};
            l_U1107[92]._fU36 = 1;
            l_U1107[92]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[93] )))
        {
            l_U2424[93] = sub_10285( l_U891, 23, -1239.51800000, 28.11950000, 4.31180000, 106.36660000, 13, l_U493, 1, 0, 0 );
            l_U1107[93]._fU0 = l_U2424[93];
            l_U1107[93]._fU24 = {-1258.37900000, 29.13690000, 4.31180000};
            l_U1107[93]._fU36 = 2;
            l_U1107[93]._fU48 = l_U2718;
        }
        break;
        case 20:
        CREATE_CAR( 904750859, -1253.46400000, 101.55460000, 1.47970000, ref l_U914[0], 1 );
        SET_CAR_HEADING( l_U914[0], 268.56160000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U914[0] );
        LOCK_CAR_DOORS( l_U914[0], 2 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U914[0], l_U493 );
        CREATE_CAR( 904750859, -1253.87200000, 90.07920000, 1.26390000, ref l_U914[1], 1 );
        SET_CAR_HEADING( l_U914[1], 270.53720000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U914[1] );
        LOCK_CAR_DOORS( l_U914[1], 2 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U914[1], l_U493 );
        CREATE_CAR( 904750859, -1243.23100000, 14.90470000, 3.27160000, ref l_U914[2], 1 );
        SET_CAR_HEADING( l_U914[2], 92.46110000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U914[2] );
        LOCK_CAR_DOORS( l_U914[2], 2 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U914[2], l_U493 );
        break;
        case 21:
        if (NOT (DOES_VEHICLE_EXIST( l_U918 )))
        {
            CREATE_CAR( 904750859, -1232.27400000, 121.03080000, 4.43400000, ref l_U918, 1 );
            SET_CAR_HEADING( l_U918, 2.48880000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U918 );
            SET_CAR_PROOFS( l_U918, 1, 1, 0, 1, 1 );
        }
        break;
        case 1:
        if (NOT (DOES_CHAR_EXIST( l_U2424[65] )))
        {
            l_U2424[65] = sub_10285( l_U891, 23, -1274.28200000, -127.59370000, 3.22310000, 76.07270000, 7, "", 0, 0, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U2424[65], 0, 0 );
            sub_5501( 2, l_U2424[65], "BUYER_FIN1A", 0 );
            SET_CHAR_NEVER_TARGETTED( l_U2424[65], 0 );
            SET_CHAR_VISIBLE( l_U2424[65], 1 );
            SET_CHAR_AS_ENEMY( l_U2424[65], 0 );
        }
        break;
        case 3:
        if (NOT (DOES_CHAR_EXIST( l_U2424[53] )))
        {
            l_U2424[53] = sub_10285( l_U891, 23, -1254.99300000, 23.98730000, 4.30650000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[53]._fU0 = l_U2424[53];
            l_U1107[53]._fU24 = {-1247.91800000, -0.15620000, 4.30650000};
            l_U1107[53]._fU16 = 1;
            l_U1107[53]._fU36 = 13;
            l_U1107[53]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[54] )))
        {
            l_U2424[54] = sub_10285( l_U891, 23, -1259.61500000, 25.63780000, 4.30650000, 88.59250000, 7, l_U493, 1, 0, 0 );
            l_U1107[54]._fU0 = l_U2424[54];
            l_U1107[54]._fU24 = {-1271.14000000, 0.37580000, 4.30650000};
            l_U1107[54]._fU16 = 1;
            l_U1107[54]._fU36 = 13;
            l_U1107[54]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[55] )))
        {
            l_U2424[55] = sub_10285( l_U891, 23, -1254.72300000, 31.28420000, 4.30650000, 286.77340000, 7, l_U493, 1, 0, 0 );
            l_U1107[55]._fU0 = l_U2424[55];
            l_U1107[55]._fU24 = {-1285.83100000, 47.99700000, 4.30660000};
            l_U1107[55]._fU16 = 1;
            l_U1107[55]._fU36 = 13;
            l_U1107[55]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[56] )))
        {
            l_U2424[56] = sub_10285( l_U891, 23, -1251.54300000, 27.16460000, 4.30650000, 212.94090000, 7, l_U493, 1, 0, 0 );
            l_U1107[56]._fU0 = l_U2424[56];
            l_U1107[56]._fU24 = {-1251.73300000, 72.06960000, 2.50380000};
            l_U1107[56]._fU16 = 1;
            l_U1107[56]._fU36 = 13;
            l_U1107[56]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[57] )))
        {
            l_U2424[57] = sub_10285( l_U891, 23, -1255.70300000, 16.13620000, 4.30650000, 127.30790000, 7, l_U493, 1, 0, 0 );
            l_U1107[57]._fU0 = l_U2424[57];
            l_U1107[57]._fU24 = {-1285.79400000, 16.87250000, 4.30640000};
            l_U1107[57]._fU16 = 1;
            l_U1107[57]._fU36 = 13;
            l_U1107[57]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[58] )))
        {
            l_U2424[58] = sub_10285( l_U891, 23, -1256.56800000, 12.03890000, 4.30650000, 104.23750000, 7, l_U493, 1, 0, 0 );
            l_U1107[58]._fU0 = l_U2424[58];
            l_U1107[58]._fU24 = {-1279.95100000, 2.72980000, 4.30650000};
            l_U1107[58]._fU16 = 1;
            l_U1107[58]._fU36 = 13;
            l_U1107[58]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[59] )))
        {
            l_U2424[59] = sub_10285( l_U891, 23, -1250.80000000, 15.40220000, 4.30650000, 357.14490000, 7, l_U493, 1, 0, 0 );
            l_U1107[59]._fU0 = l_U2424[59];
            l_U1107[59]._fU24 = {-1253.86400000, 80.53970000, 2.40000000};
            l_U1107[59]._fU16 = 1;
            l_U1107[59]._fU36 = 13;
            l_U1107[59]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[60] )))
        {
            l_U2424[60] = sub_10285( l_U891, 23, -1246.21800000, 13.66370000, 4.30650000, 110.30700000, 7, l_U493, 1, 0, 0 );
            l_U1107[60]._fU0 = l_U2424[60];
            l_U1107[60]._fU24 = {-1278.17400000, 50.09490000, 4.30640000};
            l_U1107[60]._fU16 = 1;
            l_U1107[60]._fU36 = 13;
            l_U1107[60]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[61] )))
        {
            l_U2424[61] = sub_10285( l_U891, 23, -1249.03100000, 8.84420000, 4.30650000, 106.31930000, 7, l_U493, 1, 0, 0 );
            l_U1107[61]._fU0 = l_U2424[61];
            l_U1107[61]._fU24 = {-1264.60100000, 25.36670000, 4.30650000};
            l_U1107[61]._fU16 = 1;
            l_U1107[61]._fU36 = 13;
            l_U1107[61]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[62] )))
        {
            l_U2424[62] = sub_10285( l_U891, 23, -1257.32500000, 44.13770000, 4.30650000, 232.68530000, 7, l_U493, 1, 0, 0 );
            l_U1107[62]._fU0 = l_U2424[62];
            l_U1107[62]._fU24 = {-1238.74300000, 2.64160000, 4.30650000};
            l_U1107[62]._fU16 = 1;
            l_U1107[62]._fU36 = 13;
            l_U1107[62]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[63] )))
        {
            l_U2424[63] = sub_10285( l_U891, 23, -1255.95800000, 47.41830000, 4.30650000, 211.77120000, 7, l_U493, 1, 0, 0 );
            l_U1107[63]._fU0 = l_U2424[63];
            l_U1107[63]._fU24 = {-1249.49200000, 1.11190000, 4.30650000};
            l_U1107[63]._fU16 = 1;
            l_U1107[63]._fU36 = 13;
            l_U1107[63]._fU44 = 1;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[64] )))
        {
            l_U2424[64] = sub_10285( l_U891, 23, -1254.75100000, 51.77260000, 4.22530000, 183.78890000, 7, l_U493, 1, 0, 0 );
            l_U1107[64]._fU0 = l_U2424[64];
            l_U1107[64]._fU24 = {-1257.26300000, 0.33460000, 4.30640000};
            l_U1107[64]._fU16 = 1;
            l_U1107[64]._fU36 = 13;
            l_U1107[64]._fU44 = 1;
        }
        break;
        case 4:
        if (NOT (DOES_CHAR_EXIST( l_U2424[75] )))
        {
            l_U2424[75] = sub_10285( l_U891, 23, -1259.51600000, 41.37080000, 4.27690000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[75]._fU0 = l_U2424[75];
            l_U1107[75]._fU24 = {-1244.87200000, 27.72890000, 4.27660000};
            l_U1107[75]._fU16 = 1;
            l_U1107[75]._fU36 = 13;
            l_U1107[75]._fU44 = 1;
            l_U1107[75]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[76] )))
        {
            l_U2424[76] = sub_10285( l_U891, 23, -1247.05500000, 3.25220000, 4.27650000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[76]._fU0 = l_U2424[76];
            l_U1107[76]._fU24 = {-1259.68900000, 41.47030000, 4.27670000};
            l_U1107[76]._fU16 = 1;
            l_U1107[76]._fU36 = 13;
            l_U1107[76]._fU44 = 1;
            l_U1107[76]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[77] )))
        {
            l_U2424[77] = sub_10285( l_U891, 23, -1237.84200000, 29.61000000, 3.30690000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[77]._fU0 = l_U2424[77];
            l_U1107[77]._fU24 = {-1271.26800000, 5.31340000, 4.27640000};
            l_U1107[77]._fU16 = 1;
            l_U1107[77]._fU36 = 13;
            l_U1107[77]._fU44 = 1;
            l_U1107[77]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[78] )))
        {
            l_U2424[78] = sub_10285( l_U891, 23, -1260.82400000, 50.20720000, 4.27670000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[78]._fU0 = l_U2424[78];
            l_U1107[78]._fU24 = {-1245.09900000, 27.44500000, 4.27650000};
            l_U1107[78]._fU16 = 1;
            l_U1107[78]._fU36 = 13;
            l_U1107[78]._fU44 = 1;
            l_U1107[78]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[79] )))
        {
            l_U2424[79] = sub_10285( l_U891, 23, -1259.52000000, 31.27730000, 4.27650000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[79]._fU0 = l_U2424[79];
            l_U1107[79]._fU24 = {-1240.02500000, 42.62820000, 4.27650000};
            l_U1107[79]._fU16 = 1;
            l_U1107[79]._fU36 = 13;
            l_U1107[79]._fU44 = 1;
            l_U1107[79]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[80] )))
        {
            l_U2424[80] = sub_10285( l_U891, 23, -1240.92800000, 48.73110000, 4.27630000, 184.12030000, 7, l_U493, 1, 0, 0 );
            l_U1107[80]._fU0 = l_U2424[80];
            l_U1107[80]._fU24 = {-1269.40600000, 4.60300000, 4.27640000};
            l_U1107[80]._fU16 = 1;
            l_U1107[80]._fU36 = 13;
            l_U1107[80]._fU44 = 1;
            l_U1107[80]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[81] )))
        {
            l_U2424[81] = sub_10285( l_U891, 23, -1259.15300000, 20.94340000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[81]._fU0 = l_U2424[81];
            l_U1107[81]._fU24 = {-1259.15300000, 20.94340000, 4.30650000};
            l_U1107[81]._fU36 = 1;
            l_U1107[81]._fU48 = l_U2718;
            l_U1107[81]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[82] )))
        {
            l_U2424[82] = sub_10285( l_U891, 23, -1238.05500000, 29.02310000, 3.30690000, 105.87620000, 15, l_U493, 1, 0, 0 );
            l_U1107[82]._fU0 = l_U2424[82];
            l_U1107[82]._fU24 = {-1259.26700000, 31.18920000, 4.30650000};
            l_U1107[82]._fU36 = 2;
            l_U1107[82]._fU48 = l_U2716;
        }
        break;
        case 12:
        if (NOT (DOES_CHAR_EXIST( l_U2424[84] )))
        {
            l_U2424[84] = sub_10285( l_U891, 23, -1237.33100000, 39.07020000, 3.30630000, 105.87620000, 15, l_U493, 1, 0, 0 );
            l_U1107[84]._fU0 = l_U2424[84];
            l_U1107[84]._fU24 = {-1259.24100000, 42.20810000, 4.30650000};
            l_U1107[84]._fU36 = 3;
            l_U1107[84]._fU48 = l_U2716;
        }
        break;
        case 6:
        if (NOT (DOES_CHAR_EXIST( l_U2424[1] )))
        {
            l_U2424[1] = sub_10285( l_U891, 23, -1286.84400000, 45.85680000, 15.31930000, 180.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[1]._fU0 = l_U2424[1];
            l_U1107[1]._fU24 = {-1286.98300000, 35.26230000, 18.37910000};
            l_U1107[1]._fU36 = 31;
            l_U1107[1]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[2] )))
        {
            l_U2424[2] = sub_10285( l_U891, 23, -1289.12200000, 49.42110000, 14.77910000, 203.28650000, 7, l_U493, 1, 0, 1 );
            l_U1107[2]._fU0 = l_U2424[2];
            l_U1107[2]._fU24 = {-1287.28800000, 43.46380000, 18.11160000};
            l_U1107[2]._fU36 = 31;
            l_U1107[2]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[3] )))
        {
            l_U2424[3] = sub_10285( l_U891, 23, -1288.71200000, 40.07440000, 11.17900000, 20.28650000, 7, l_U493, 1, 0, 1 );
            l_U1107[3]._fU0 = l_U2424[3];
            l_U1107[3]._fU24 = {-1288.56700000, 49.52520000, 14.77910000};
            l_U1107[3]._fU36 = 49;
            l_U1107[3]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[5] )))
        {
            l_U2424[5] = sub_10285( l_U891, 23, -1287.50500000, 27.76950000, 10.17920000, 20.28650000, 13, l_U493, 1, 0, 1 );
            l_U1107[5]._fU0 = l_U2424[5];
            l_U1107[5]._fU24 = {-1286.60700000, 32.78280000, 10.17920000};
            l_U1107[5]._fU36 = 32;
            l_U1107[5]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[70] )))
        {
            l_U2424[70] = sub_10285( l_U891, 23, -1275.52500000, 4.33480000, 10.14380000, 64.93730000, 13, l_U493, 1, 0, 1 );
            l_U1107[70]._fU0 = l_U2424[70];
            l_U1107[70]._fU24 = {-1287.79500000, 14.17620000, 10.14420000};
            l_U1107[70]._fU36 = 54;
            l_U1107[70]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[71] )))
        {
            l_U2424[71] = sub_10285( l_U891, 23, -1252.08100000, 3.89730000, 10.14380000, 90.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[71]._fU0 = l_U2424[71];
            l_U1107[71]._fU24 = {-1272.68300000, 3.41920000, 10.14380000};
            l_U1107[71]._fU36 = 53;
            l_U1107[71]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[91] )))
        {
            l_U2424[91] = sub_10285( l_U891, 23, -1275.34100000, 4.19050000, 10.17900000, 90.00000000, 13, l_U493, 1, 1, 0 );
            l_U1107[91]._fU0 = l_U2424[91];
            l_U1107[91]._fU24 = {-1275.34100000, 4.19050000, 10.17900000};
            l_U1107[91]._fU36 = 53;
            l_U1107[91]._fU48 = l_U2716;
            TASK_DUCK( l_U2424[91], -2 );
        }
        break;
        case 7:
        if (NOT (DOES_CHAR_EXIST( l_U2424[8] )))
        {
            l_U2424[8] = sub_10285( l_U891, 23, -1241.81200000, 4.69160000, 15.57940000, 90.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[8]._fU0 = l_U2424[8];
            l_U1107[8]._fU24 = {-1250.40100000, 4.85890000, 18.37920000};
            l_U1107[8]._fU36 = 34;
            l_U1107[8]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[9] )))
        {
            l_U2424[9] = sub_10285( l_U891, 23, -1238.11200000, 2.82530000, 14.77910000, 90.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[9]._fU0 = l_U2424[9];
            l_U1107[9]._fU24 = {-1244.21700000, 4.61950000, 18.37910000};
            l_U1107[9]._fU36 = 34;
            l_U1107[9]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[10] )))
        {
            l_U2424[10] = sub_10285( l_U891, 23, -1245.58200000, 2.41400000, 11.17900000, 299.00000000, 7, l_U493, 1, 0, 0 );
            l_U1107[10]._fU0 = l_U2424[10];
            l_U1107[10]._fU24 = {-1237.97900000, 3.27300000, 14.77910000};
            l_U1107[10]._fU36 = 34;
            l_U1107[10]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[11] )))
        {
            l_U2424[11] = sub_10285( l_U891, 23, -1266.41100000, 3.23280000, 10.14380000, 270.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[11]._fU24 = {-1256.48300000, 3.65280000, 10.14380000};
            l_U1107[11]._fU36 = 33;
            l_U1107[11]._fU0 = l_U2424[11];
            l_U1107[11]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[72] )))
        {
            l_U2424[72] = sub_10285( l_U891, 23, -1238.36300000, 3.48530000, 6.54400000, 91.80410000, 13, l_U493, 1, 0, 0 );
            l_U1107[72]._fU0 = l_U2424[72];
            l_U1107[72]._fU24 = {-1238.36300000, 3.48530000, 6.54400000};
            l_U1107[72]._fU36 = 55;
            l_U1107[72]._fU48 = l_U2716;
        }
        break;
        case 10:
        if (NOT (DOES_CHAR_EXIST( l_U2424[11] )))
        {
            l_U2424[11] = sub_10285( l_U891, 23, -1240.35000000, 4.40420000, 7.21880000, 90.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[11]._fU24 = {-1250.44300000, 3.48730000, 10.14380000};
            l_U1107[11]._fU36 = 33;
            l_U1107[11]._fU0 = l_U2424[11];
            l_U1107[11]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[72] )))
        {
            l_U2424[72] = sub_10285( l_U891, 23, -1238.36300000, 3.48530000, 6.54400000, 91.80410000, 13, l_U493, 1, 0, 0 );
            l_U1107[72]._fU0 = l_U2424[72];
            l_U1107[72]._fU24 = {-1238.36300000, 3.48530000, 6.54400000};
            l_U1107[72]._fU36 = 55;
            l_U1107[72]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[12] )))
        {
            l_U2424[12] = sub_10285( l_U891, 23, -1238.57300000, 4.41960000, 7.57910000, 91.80410000, 7, l_U493, 1, 0, 1 );
            l_U1107[12]._fU0 = l_U2424[12];
            l_U1107[12]._fU24 = {-1238.57300000, 4.41960000, 7.57910000};
            l_U1107[12]._fU36 = 34;
            l_U1107[12]._fU48 = l_U2716;
        }
        break;
        case 11:
        if (NOT (DOES_CHAR_EXIST( l_U2424[73] )))
        {
            l_U2424[73] = sub_10285( l_U891, 23, -1287.75600000, 16.11620000, 10.14420000, 180.00000000, 13, l_U493, 1, 0, 1 );
            l_U1107[73]._fU0 = l_U2424[73];
            l_U1107[73]._fU24 = {-1277.78200000, 3.82210000, 10.14380000};
            l_U1107[73]._fU36 = 53;
            l_U1107[73]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[74] )))
        {
            l_U2424[74] = sub_10285( l_U891, 23, -1287.95200000, 33.72660000, 10.14420000, 180.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[74]._fU0 = l_U2424[74];
            l_U1107[74]._fU24 = {-1288.52300000, 19.67720000, 10.14420000};
            l_U1107[74]._fU36 = 54;
            l_U1107[74]._fU48 = l_U2716;
        }
        break;
        case 5: break;
        case 14:
        if (NOT (DOES_CHAR_EXIST( l_U2424[15] )))
        {
            l_U2424[15] = sub_10285( l_U891, 23, -1282.85600000, 18.12350000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[15]._fU0 = l_U2424[15];
            l_U1107[15]._fU24 = {-1282.85600000, 18.12350000, 4.30650000};
            l_U1107[15]._fU36 = 6;
            l_U1107[15]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[16] )))
        {
            l_U2424[16] = sub_10285( l_U891, 23, -1287.93000000, 7.09560000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[16]._fU0 = l_U2424[16];
            l_U1107[16]._fU24 = {-1284.82400000, 9.37950000, 4.30650000};
            l_U1107[16]._fU36 = 5;
            l_U1107[16]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[17] )))
        {
            l_U2424[17] = sub_10285( l_U891, 23, -1283.22900000, 27.27530000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[17]._fU0 = l_U2424[17];
            l_U1107[17]._fU24 = {-1283.22900000, 27.27530000, 4.30650000};
            l_U1107[17]._fU36 = 7;
            l_U1107[17]._fU48 = l_U2716;
        }
        break;
        case 13:
        if (NOT (DOES_CHAR_EXIST( l_U2424[22] )))
        {
            l_U2424[22] = sub_10285( l_U891, 23, -1245.26300000, 27.11840000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
            l_U1107[22]._fU0 = l_U2424[22];
            l_U1107[22]._fU24 = {-1245.26300000, 27.11840000, 4.30650000};
            l_U1107[22]._fU36 = 14;
            l_U1107[22]._fU48 = l_U2716;
        }
        break;
        case 8:
        if (NOT (DOES_CHAR_EXIST( l_U2424[28] )))
        {
            l_U2424[28] = sub_10285( l_U891, 23, -1251.53300000, 57.01810000, 3.76900000, 185.92430000, 13, l_U493, 1, 0, 0 );
            l_U1107[28]._fU0 = l_U2424[28];
            l_U1107[28]._fU24 = {-1262.91100000, 48.90350000, 4.30650000};
            l_U1107[28]._fU36 = 16;
            l_U1107[28]._fU48 = l_U2716;
            l_U2424[29] = sub_10285( l_U891, 23, -1249.09200000, 56.22600000, 3.88280000, 181.74940000, 13, l_U493, 1, 0, 0 );
            l_U1107[29]._fU0 = l_U2424[29];
            l_U1107[29]._fU24 = {-1258.13700000, 40.76600000, 4.30650000};
            l_U1107[29]._fU36 = 3;
            l_U1107[29]._fU48 = l_U2716;
        }
        break;
        case 9:
        if (IS_CHAR_INJURED( l_U2424[81] ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U2424[19] )))
            {
                l_U2424[19] = sub_10285( l_U891, 23, -1259.15300000, 20.94340000, 4.30650000, 0.00000000, 13, l_U493, 1, 0, 0 );
                l_U1107[19]._fU0 = l_U2424[19];
                l_U1107[19]._fU24 = {-1259.15300000, 20.94340000, 4.30650000};
                l_U1107[19]._fU36 = 1;
                l_U1107[19]._fU48 = l_U2716;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[23] )))
        {
            l_U2424[23] = sub_10285( l_U891, 23, -1245.09900000, 28.21790000, 4.30650000, 105.87620000, 13, l_U493, 1, 0, 0 );
            l_U1107[23]._fU0 = l_U2424[23];
            l_U1107[23]._fU24 = {-1250.53500000, 25.09310000, 4.30650000};
            l_U1107[23]._fU36 = 14;
            l_U1107[23]._fU48 = l_U2718;
        }
        if (IS_CHAR_INJURED( l_U2424[82] ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U2424[24] )))
            {
                l_U2424[24] = sub_10285( l_U891, 23, -1242.34800000, 29.98630000, 4.30650000, 105.87620000, 13, l_U493, 1, 0, 0 );
                l_U1107[24]._fU0 = l_U2424[24];
                l_U1107[24]._fU24 = {-1259.26700000, 31.18920000, 4.30650000};
                l_U1107[24]._fU36 = 2;
                l_U1107[24]._fU48 = l_U2716;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[25] )))
        {
            l_U2424[25] = sub_10285( l_U891, 23, -1241.62300000, 29.73420000, 4.30650000, 105.87620000, 15, l_U493, 1, 0, 0 );
            l_U1107[25]._fU0 = l_U2424[25];
            l_U1107[25]._fU24 = {-1259.24100000, 42.20810000, 4.30650000};
            l_U1107[25]._fU36 = 3;
            l_U1107[25]._fU48 = l_U2718;
        }
        break;
        case 16:
        if (NOT (DOES_CHAR_EXIST( l_U2424[30] )))
        {
            l_U2424[30] = sub_10285( l_U891, 23, -1263.64000000, 68.02850000, 2.26390000, 151.52200000, 13, l_U493, 1, 0, 0 );
            l_U1107[30]._fU0 = l_U2424[30];
            l_U1107[30]._fU24 = {-1263.64000000, 68.02850000, 2.26390000};
            l_U1107[30]._fU36 = 9;
            l_U1107[30]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[31] )))
        {
            l_U2424[31] = sub_10285( l_U891, 23, -1265.89200000, 84.95980000, 2.26390000, 215.80780000, 13, l_U493, 1, 0, 0 );
            l_U1107[31]._fU0 = l_U2424[31];
            l_U1107[31]._fU24 = {-1252.80700000, 83.23530000, 2.26300000};
            l_U1107[31]._fU36 = 18;
            l_U1107[31]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[33] )))
        {
            l_U2424[33] = sub_10285( l_U891, 23, -1267.02700000, 86.30160000, 2.26390000, 215.80780000, 13, l_U493, 1, 0, 0 );
            l_U1107[33]._fU0 = l_U2424[33];
            l_U1107[33]._fU24 = {-1276.07900000, 83.23720000, 2.26060000};
            l_U1107[33]._fU36 = 22;
            l_U1107[33]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[32] )))
        {
            l_U2424[32] = sub_10285( l_U891, 23, -1264.12900000, 98.83680000, 2.25000000, 191.87060000, 13, l_U493, 1, 0, 0 );
            l_U1107[32]._fU0 = l_U2424[32];
            l_U1107[32]._fU24 = {-1253.15900000, 96.94260000, 2.25980000};
            l_U1107[32]._fU36 = 19;
            l_U1107[32]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[51] )))
        {
            l_U2424[51] = sub_10285( l_U891, 23, -1262.51900000, 116.76240000, 13.00000000, 209.08620000, 14, l_U493, 1, 0, 0 );
            l_U1107[51]._fU0 = l_U2424[51];
            l_U1107[51]._fU24 = {-1255.29900000, 108.56480000, 9.39990000};
            l_U1107[51]._fU36 = 35;
            TASK_DUCK( l_U1107[51]._fU0, -2 );
            l_U1107[51]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[39] )))
        {
            l_U2424[39] = sub_10285( l_U891, 23, -1251.62600000, 115.89060000, 13.00000000, 180.00000000, 14, l_U493, 1, 0, 0 );
            l_U1107[39]._fU0 = l_U2424[39];
            l_U1107[39]._fU24 = {-1255.29900000, 108.56480000, 9.39990000};
            l_U1107[39]._fU36 = 28;
            l_U1107[39]._fU20 = 1;
            l_U1107[39]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[40] )))
        {
            l_U2424[40] = sub_10285( l_U891, 23, -1278.64900000, 115.50590000, 13.00000000, 180.00000000, 7, l_U493, 1, 1, 0 );
            l_U1107[40]._fU0 = l_U2424[40];
            l_U1107[40]._fU24 = {-1274.59600000, 94.45120000, 13.00000000};
            l_U1107[40]._fU36 = 28;
            l_U1107[40]._fU20 = 1;
            l_U1107[40]._fU48 = l_U2716;
        }
        break;
        case 15:
        if (NOT (DOES_CHAR_EXIST( l_U2424[36] )))
        {
            l_U2424[36] = sub_10285( l_U891, 23, -1278.18100000, 116.14100000, 12.00000000, 196.87410000, 7, l_U493, 1, 1, 0 );
            l_U1107[36]._fU0 = l_U2424[36];
            l_U1107[36]._fU24 = {-1248.35200000, 83.26570000, 2.26400000};
            l_U1107[36]._fU36 = 27;
            l_U1107[36]._fU20 = 1;
            l_U1107[36]._fU48 = l_U2716;
            SET_CHAR_NEVER_TARGETTED( l_U2424[36], 0 );
            SET_CHAR_VISIBLE( l_U2424[36], 1 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[37] )))
        {
            l_U2424[37] = sub_10285( l_U891, 23, -1251.83300000, 115.69670000, 13.00000000, 196.87410000, 13, l_U493, 1, 0, 0 );
            l_U1107[37]._fU0 = l_U2424[37];
            l_U1107[37]._fU24 = {-1248.35200000, 83.26570000, 2.26400000};
            l_U1107[37]._fU36 = 27;
            l_U1107[37]._fU20 = 1;
            l_U1107[37]._fU48 = l_U2718;
            SET_CHAR_NEVER_TARGETTED( l_U2424[37], 0 );
            SET_CHAR_VISIBLE( l_U2424[37], 1 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[38] )))
        {
            l_U2424[38] = sub_10285( l_U891, 23, -1266.90300000, 54.95900000, 13.00000000, 196.87410000, 13, l_U493, 1, 1, 0 );
            l_U1107[38]._fU0 = l_U2424[38];
            l_U1107[38]._fU24 = {-1248.35200000, 83.26570000, 2.26400000};
            l_U1107[38]._fU36 = 27;
            l_U1107[38]._fU20 = 1;
            l_U1107[38]._fU48 = l_U2718;
            SET_CHAR_NEVER_TARGETTED( l_U2424[38], 0 );
            SET_CHAR_VISIBLE( l_U2424[38], 1 );
        }
        break;
        case 17:
        if (NOT (DOES_CHAR_EXIST( l_U2424[49] )))
        {
            l_U2424[49] = sub_10285( l_U891, 23, -1264.40800000, 84.32750000, 2.26390000, 196.87410000, 13, l_U493, 1, 0, 0 );
            l_U1107[49]._fU0 = l_U2424[49];
            l_U1107[49]._fU24 = {-1249.43200000, 56.78020000, 3.82340000};
            l_U1107[49]._fU36 = 13;
            l_U1107[49]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[50] )))
        {
            l_U2424[50] = sub_10285( l_U891, 23, -1262.56300000, 83.87100000, 2.26390000, 196.87410000, 13, l_U493, 1, 0, 0 );
            l_U1107[50]._fU0 = l_U2424[50];
            l_U1107[50]._fU24 = {-1254.27700000, 56.22530000, 3.77550000};
            l_U1107[50]._fU36 = 13;
            l_U1107[50]._fU48 = l_U2716;
        }
        break;
        case 18:
        if (IS_CHAR_INJURED( l_U2424[48] ))
        {
            l_U2424[48] = sub_10285( l_U891, 23, -1264.06000000, 116.40960000, 12.99980000, 223.42270000, 14, l_U493, 1, 1, 0 );
            l_U1107[48]._fU0 = l_U2424[48];
            l_U1107[48]._fU24 = {-1252.14900000, 100.31450000, 13.00000000};
            l_U1107[48]._fU36 = 27;
            l_U1107[48]._fU20 = 1;
            l_U1107[48]._fU48 = l_U2718;
        }
        if (IS_CHAR_INJURED( l_U2424[47] ))
        {
            l_U2424[47] = sub_10285( l_U891, 23, -1275.90400000, 115.89870000, 12.97860000, 111.59140000, 7, l_U493, 1, 1, 0 );
            l_U1107[47]._fU0 = l_U2424[47];
            l_U1107[47]._fU24 = {-1278.51000000, 91.96700000, 13.00000000};
            l_U1107[47]._fU36 = 27;
            l_U1107[47]._fU20 = 1;
            l_U1107[47]._fU48 = l_U2716;
        }
        if (IS_CHAR_INJURED( l_U2424[45] ))
        {
            l_U2424[45] = sub_10285( l_U891, 23, -1266.60500000, 110.34900000, 12.97950000, 108.94390000, 14, l_U493, 1, 0, 0 );
            l_U1107[45]._fU0 = l_U2424[45];
            l_U1107[45]._fU24 = {-1268.08000000, 110.34820000, 12.97950000};
            l_U1107[45]._fU36 = 36;
            TASK_DUCK( l_U2424[45], -2 );
            l_U1107[45]._fU48 = l_U2716;
        }
        if (IS_CHAR_INJURED( l_U2424[46] ))
        {
            l_U2424[46] = sub_10285( l_U891, 23, -1275.96000000, 110.36120000, 12.97960000, 235.25110000, 13, l_U493, 1, 1, 0 );
            l_U1107[46]._fU0 = l_U2424[46];
            l_U1107[46]._fU24 = {-1275.08800000, 110.56240000, 12.97950000};
            l_U1107[46]._fU36 = 36;
            l_U1107[46]._fU48 = l_U2718;
        }
        break;
        case 19:
        if (NOT (DOES_CHAR_EXIST( l_U2424[52] )))
        {
            l_U2424[52] = sub_10285( l_U891, 23, -1266.61000000, 110.70370000, 11.97950000, 64.99450000, 13, l_U493, 1, 0, 0 );
            l_U1107[52]._fU0 = l_U2424[52];
            l_U1107[52]._fU24 = {-1266.61000000, 110.70370000, 11.97950000};
            l_U1107[52]._fU36 = 13;
            l_U1107[52]._fU48 = l_U2716;
            if (NOT l_U2423)
            {
                TASK_DUCK( l_U2424[52], -2 );
            }
            SET_CURRENT_CHAR_WEAPON( l_U2424[52], 0, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U2424[52], 1 );
            SET_CHAR_PROOFS( l_U2424[52], 1, 1, 0, 1, 1 );
            SET_CHAR_VISIBLE( l_U2424[52], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U2424[52], 1 );
        }
        break;
        case 22:
        if (NOT (DOES_CHAR_EXIST( l_U924[1] )))
        {
            l_U924[1] = sub_24281( l_U894, 24, -1087.44000000, 351.74070000, 12.60970000, 53.83580000, "", 0 );
            l_U945[1]._fU0 = l_U924[1];
            l_U945[1]._fU4 = 1;
            l_U945[1]._fU8 = 36100.00000000;
        }
        if (NOT (DOES_CHAR_EXIST( l_U924[2] )))
        {
            l_U924[2] = sub_24281( l_U894, 24, -1085.83400000, 350.25200000, 12.60970000, 28.62690000, "", 0 );
            l_U945[2]._fU0 = l_U924[2];
            l_U945[2]._fU4 = 1;
            l_U945[2]._fU8 = 36100.00000000;
        }
        break;
        case 23:
        if (NOT (DOES_CHAR_EXIST( l_U924[3] )))
        {
            l_U924[3] = sub_24281( l_U894, 24, -1080.62100000, 351.05620000, 8.44120000, 0.00000000, "", 0 );
            l_U945[3]._fU0 = l_U924[3];
            l_U945[3]._fU4 = 1;
            l_U945[3]._fU8 = 36100.00000000;
        }
        if (NOT (DOES_CHAR_EXIST( l_U924[4] )))
        {
            l_U924[4] = sub_24281( l_U894, 24, -1079.80200000, 350.62990000, 12.60970000, 196.64390000, "", 0 );
            l_U945[4]._fU0 = l_U924[4];
            l_U945[4]._fU4 = 1;
            l_U945[4]._fU8 = 36100.00000000;
        }
        break;
        case 24:
        if (NOT (DOES_CHAR_EXIST( l_U924[6] )))
        {
            l_U924[6] = sub_24281( l_U894, 24, -1041.90400000, 351.10690000, 12.61030000, 213.12300000, "", 0 );
            l_U945[6]._fU0 = l_U924[6];
            l_U945[6]._fU4 = 1;
            l_U945[6]._fU8 = 40300.00000000;
        }
        break;
        case 25:
        l_U924[8] = sub_24281( l_U894, 24, -1073.34500000, 355.03090000, 4.49770000, 0.00000000, "", 0 );
        l_U945[8]._fU0 = l_U924[8];
        l_U945[8]._fU8 = 35156.00000000;
        l_U945[8]._fU12 = 1;
        l_U945[8]._fU20 = {-1037.49400000, 357.84150000, 3.50290000};
        l_U924[9] = sub_24281( l_U894, 24, -1069.95700000, 352.84530000, 4.49570000, 353.66370000, "", 0 );
        l_U945[9]._fU0 = l_U924[9];
        l_U945[9]._fU8 = 35156.00000000;
        l_U945[9]._fU12 = 1;
        l_U945[9]._fU20 = {-1032.23900000, 356.70420000, 3.50290000};
        l_U924[10] = sub_24281( l_U894, 24, -1060.91800000, 352.79730000, 4.49700000, 125.35230000, "", 0 );
        l_U945[10]._fU0 = l_U924[10];
        l_U945[10]._fU8 = 36116.00000000;
        l_U945[10]._fU12 = 1;
        l_U945[10]._fU20 = {-1056.36700000, 338.24670000, 4.49580000};
        l_U924[11] = sub_24281( l_U894, 24, -1056.30200000, 355.66660000, 4.49950000, 10.79230000, "", 0 );
        l_U945[11]._fU0 = l_U924[11];
        l_U945[11]._fU8 = 36116.00000000;
        l_U945[11]._fU12 = 1;
        l_U945[11]._fU20 = {-1053.02800000, 338.93620000, 4.50010000};
        l_U924[12] = sub_24281( l_U894, 24, -1049.02200000, 353.68530000, 4.50280000, 60.18850000, "", 0 );
        l_U945[12]._fU0 = l_U924[12];
        l_U945[12]._fU8 = 36443.00000000;
        l_U945[12]._fU12 = 1;
        l_U945[12]._fU20 = {-1008.24400000, 354.45990000, 3.50300000};
        l_U924[13] = sub_24281( l_U894, 24, -1046.21600000, 352.72410000, 3.50260000, 359.26660000, "", 0 );
        l_U945[13]._fU0 = l_U924[13];
        l_U945[13]._fU8 = 36443.00000000;
        l_U945[13]._fU12 = 1;
        l_U945[13]._fU20 = {-1010.02000000, 356.49550000, 3.50300000};
        break;
        case 26:
        if (NOT (DOES_CHAR_EXIST( l_U2424[66] )))
        {
            l_U2424[66] = sub_10285( l_U891, 23, -1255.13300000, 104.00690000, 2.25820000, 196.87410000, 12, l_U493, 1, 0, 0 );
            l_U1107[66]._fU0 = l_U2424[66];
            l_U1107[66]._fU24 = {-1219.57500000, 105.63200000, 4.20650000};
            l_U1107[66]._fU36 = 52;
            l_U1107[66]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[67] )))
        {
            l_U2424[67] = sub_10285( l_U891, 23, -1250.30200000, 99.82160000, 2.25980000, 196.87410000, 12, l_U493, 1, 0, 0 );
            l_U1107[67]._fU0 = l_U2424[67];
            l_U1107[67]._fU24 = {-1216.16900000, 97.55860000, 4.20880000};
            l_U1107[67]._fU36 = 52;
            l_U1107[67]._fU48 = l_U2718;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[68] )))
        {
            l_U2424[68] = sub_10285( l_U891, 23, -1252.96400000, 100.20030000, 2.25980000, 196.87410000, 12, l_U493, 1, 0, 0 );
            l_U1107[68]._fU0 = l_U2424[68];
            l_U1107[68]._fU24 = {-1232.89300000, 100.92690000, 4.08970000};
            l_U1107[68]._fU36 = 52;
            l_U1107[68]._fU48 = l_U2718;
        }
        break;
        case 28:
        if (NOT (DOES_CHAR_EXIST( l_U2424[86] )))
        {
            l_U2424[86] = sub_10285( l_U891, 23, -1250.36400000, 72.64150000, 12.00020000, 196.87410000, 7, l_U493, 1, 1, 0 );
            l_U1107[86]._fU0 = l_U2424[86];
            l_U1107[86]._fU24 = {-1250.36400000, 72.64150000, 12.00020000};
            l_U1107[86]._fU36 = 57;
            l_U1107[86]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[87] )))
        {
            l_U2424[87] = sub_10285( l_U891, 23, -1249.92400000, 106.05000000, 12.00000000, 196.87410000, 7, l_U493, 1, 1, 0 );
            l_U1107[87]._fU0 = l_U2424[87];
            l_U1107[87]._fU24 = {-1249.92400000, 106.05000000, 12.00000000};
            l_U1107[87]._fU36 = 58;
            l_U1107[87]._fU48 = l_U2716;
        }
        break;
        case 29:
        if (NOT (DOES_CHAR_EXIST( l_U2424[88] )))
        {
            l_U2424[88] = sub_10285( l_U891, 23, -1264.44600000, 93.47650000, 1.26400000, 0.00000000, 7, l_U493, 1, 1, 0 );
            l_U1107[88]._fU0 = l_U2424[88];
            l_U1107[88]._fU24 = {-1264.44600000, 93.47650000, 1.26400000};
            l_U1107[88]._fU36 = 11;
            l_U1107[88]._fU48 = l_U2716;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2424[89] )))
        {
            l_U2424[89] = sub_10285( l_U891, 23, -1264.26900000, 105.98350000, 1.24990000, 0.00000000, 7, l_U493, 1, 1, 0 );
            l_U1107[89]._fU0 = l_U2424[89];
            l_U1107[89]._fU24 = {-1264.26900000, 105.98350000, 1.24990000};
            l_U1107[89]._fU36 = 12;
            l_U1107[89]._fU48 = l_U2718;
        }
        break;
    }
    return;
}

void sub_10285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9, boolean bParam10)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U2714 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    if (bParam8)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam7 );
    }
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    if (NOT bParam9)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    if (bParam10)
    {
        SET_CHAR_IS_TARGET_PRIORITY( Result, 1 );
    }
    SET_CHAR_NEVER_TARGETTED( Result, 1 );
    SET_CHAR_VISIBLE( Result, 0 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    return Result;
}

void sub_10663(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_4422( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_10713( uParam0, (uParam1^) );
    return;
}

void sub_10713(unknown uParam0, unknown uParam1)
{
    sub_10725( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_10725(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_10819( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_11363( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_10819(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_11363(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10819( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_10819( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_10819( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10819( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_10819( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10819( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10819( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_10819( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_24281(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U2714 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    if (bParam7)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam6 );
    }
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    return Result;
}

void sub_27229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_27250( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_27250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_27304( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_27304(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_27326( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_28014( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_27326(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_27403( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_27403( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_27403( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_27403(unknown uParam0)
{
    return;
}

void sub_28014(int iParam0, int iParam1)
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

int sub_28207(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_27403( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_27403( "\n speech is not playing" );
    }
    return 0;
}

void sub_28521()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_28632()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_28819()
{
    switch (l_U3586)
    {
        case 0:
        if (NOT (DOES_CHAR_EXIST( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), l_U2724._fU0, l_U2724._fU4, l_U2724._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                sub_9968( 0 );
                if (DOES_BLIP_EXIST( l_U2722 ))
                {
                    REMOVE_BLIP( l_U2722 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U2721 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    SET_BLIP_AS_FRIENDLY( l_U2721, 1 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U2722 )))
            {
                ADD_BLIP_FOR_COORD( l_U2724._fU0, l_U2724._fU4, l_U2724._fU8, ref l_U2722 );
                CHANGE_BLIP_COLOUR( l_U2722, 3 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    REMOVE_BLIP( l_U2721 );
                }
                SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                CLEAR_PRINTS();
                l_U3586 = 2;
                l_U2713 = 3;
            }
        }
        break;
        default:
    }
    return;
}

void sub_29209()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U2723)
    {
        ;
    }
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2719 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
    }
    switch (l_U889)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                        CLEAR_PRINTS();
                    }
                }
                else
                {
                    GET_GROUND_Z_FOR_3D_COORD( l_U2830._fU0, l_U2830._fU4, 100.00000000, ref uVar3 );
                    if ((LOCATE_CHAR_ON_FOOT_3D( sub_3140(), l_U2830._fU0, l_U2830._fU4, l_U2830._fU8 + (2.50000000 / 1.70000000), 2.50000000, 2.50000000, 2.50000000, 1 )) || ((LOCATE_CHAR_IN_CAR_3D( sub_3140(), l_U2830._fU0, l_U2830._fU4, l_U2830._fU8 + (2.50000000 / 1.70000000), 2.50000000, 2.50000000, 2.50000000, 1 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() ))))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_3651(), 0 )))
                        {
                            if (DOES_BLIP_EXIST( l_U2828 ))
                            {
                                REMOVE_BLIP( l_U2828 );
                            }
                            g_U9155 = 1;
                            sub_9099( ref l_U3554, 1 );
                            SET_WANTED_MULTIPLIER( 0.00000000 );
                            if (NOT (IS_CHAR_INJURED( l_U2424[65] )))
                            {
                                l_U889 = 1;
                            }
                            else
                            {
                                l_U2713 = 8;
                            }
                        }
                        else if (NOT l_U895[13])
                        {
                            PRINT_NOW( "FIN1A_13", 7500, 1 );
                            l_U895[13] = 1;
                        }
                    }
                    else if (NOT l_U3584)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2424[65] )))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_3140(), -1297.63000000, -117.20390000, 5.85360000, 2.00000000, 16.00000000, 3.00000000, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2520[65] );
                                TASK_LOOK_AT_CHAR( 0, sub_3140(), -2, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1275.92600000, -126.61380000, 3.22290000, 2, -2, 0.50000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                                CLOSE_SEQUENCE_TASK( l_U2520[65] );
                                if (NOT (IS_CHAR_INJURED( l_U2424[65] )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2424[65], l_U2520[65] );
                                }
                                CLEAR_SEQUENCE_TASK( l_U2520[65] );
                                l_U3584 = 1;
                            }
                        }
                    }
                    else if (sub_30153( l_U2424[65], 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2520[65] );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                        CLOSE_SEQUENCE_TASK( l_U2520[65] );
                        if (NOT (IS_CHAR_INJURED( l_U2424[65] )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2424[65], l_U2520[65] );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2520[65] );
                    }
                    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
                        if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2828 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U2830._fU0, l_U2830._fU4, l_U2830._fU8, ref l_U2828 );
                                SET_ROUTE( l_U2828, 1 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "FIN1A_05", 7500, 1 );
                            }
                            if (DOES_BLIP_EXIST( l_U2721 ))
                            {
                                REMOVE_BLIP( l_U2721 );
                            }
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT (sub_28207( l_U3554 )))
                                {
                                    if (NOT l_U3549)
                                    {
                                        if (g_U64733 == 0)
                                        {
                                            sub_27229( "FIN1A_B1V1", ref l_U3554, 6, 0 );
                                            l_U3549 = 1;
                                            g_U64733++;
                                        }
                                        else if (g_U64733 == 1)
                                        {
                                            sub_27229( "FIN1A_B1V2", ref l_U3554, 6, 0 );
                                            l_U3549 = 1;
                                            g_U64733++;
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U2719, "LISTEN_TO_RADIO", 1, 1, 0 );
                                            l_U3549 = 1;
                                        }
                                    }
                                    else if (sub_30775( l_U3554 ))
                                    {
                                        if (g_U64733 == 1)
                                        {
                                            sub_30834( "FIN1A_B1V1", ref l_U3554, 6, 1 );
                                        }
                                        else if (g_U64733 == 2)
                                        {
                                            sub_30834( "FIN1A_B1V2", ref l_U3554, 6, 1 );
                                        }
                                    }
                                }
                            }
                        }
                        else if (sub_28207( l_U3554 ))
                        {
                            sub_31014( ref l_U3554 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U2828 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U2830._fU0, l_U2830._fU4, l_U2830._fU8, ref l_U2828 );
                        SET_ROUTE( l_U2828, 1 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "FIN1A_05", 7500, 1 );
                    }
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        REMOVE_BLIP( l_U2721 );
                    }
                    if (sub_28207( l_U3554 ))
                    {
                        sub_31590( ref l_U3554 );
                    };;;
                }
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
                if (DOES_BLIP_EXIST( l_U2828 ))
                {
                    REMOVE_BLIP( l_U2828 );
                }
                if (sub_28207( l_U3554 ))
                {
                    sub_31014( ref l_U3554 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "FIN1A_01", 7500, 1 );
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_01", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                ;
            }
        }
        if (NOT l_U3553)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1274.28200000, -127.59370000, 3.22310000, 100.00000000, 100.00000000, 30.00000000, 0 ))
            {
                sub_9968( 1 );
                l_U3583 = 1;
                OPEN_SEQUENCE_TASK( ref l_U2520[65] );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                CLOSE_SEQUENCE_TASK( l_U2520[65] );
                TASK_PERFORM_SEQUENCE( l_U2424[65], l_U2520[65] );
                CLEAR_SEQUENCE_TASK( l_U2520[65] );
                l_U3553 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U2424[65] )))
        {
            if (sub_30153( l_U2424[65], 1, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U2520[65] );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                CLOSE_SEQUENCE_TASK( l_U2520[65] );
                TASK_PERFORM_SEQUENCE( l_U2424[65], l_U2520[65] );
                CLEAR_SEQUENCE_TASK( l_U2520[65] );
            }
        }
        else
        {
            l_U2713 = 8;
        }
        break;
        case 1:
        sub_32581();
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                        CLEAR_PRINTS();
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), l_U2727._fU0, l_U2727._fU4, l_U2727._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (DOES_CHAR_EXIST( l_U2424[65] ))
                    {
                        l_U3583 = 0;
                        DELETE_CHAR( ref l_U2424[65] );
                    }
                    if (DOES_BLIP_EXIST( l_U2827 ))
                    {
                        REMOVE_BLIP( l_U2827 );
                    }
                    REMOVE_CHAR_FROM_GROUP( l_U2719 );
                    ADD_SCENARIO_BLOCKING_AREA( -1304.80800000, -4.98150000, 0.00000000, -1230.09400000, 126.70960000, 100.00000000 );
                    l_U889 = 4;
                }
                else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
                    if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U2827 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U2727._fU0, l_U2727._fU4, l_U2727._fU8, ref l_U2827 );
                            SET_ROUTE( l_U2827, 1 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "FIN1A_02", 7500, 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U2827 )))
                {
                    ADD_BLIP_FOR_COORD( l_U2727._fU0, l_U2727._fU4, l_U2727._fU8, ref l_U2827 );
                    SET_ROUTE( l_U2827, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_02", 7500, 1 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    REMOVE_BLIP( l_U2721 );
                };;;;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
                if (DOES_BLIP_EXIST( l_U2827 ))
                {
                    REMOVE_BLIP( l_U2827 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "FIN1A_01", 7500, 1 );
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_01", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                ;
            }
        }
        break;
        case 4:
        sub_34053();
        break;
        case 5:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U2723)
            {
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1299.16500000, 15.97990000, 4.65400000, 3, -2, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1284.28500000, 55.06420000, 4.28210000, 3, -2, 3.00000000 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                CLEAR_SEQUENCE_TASK( l_U2720 );
                l_U2723 = 1;
            }
            else if (NOT l_U3548)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U2719 )))
                    {
                        SET_PLAYER_CONTROL( sub_3651(), 1 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        DISPLAY_RADAR( 1 );
                        l_U3548 = 1;
                    }
                }
            }
            if (sub_30153( l_U2719, 1, 0 ))
            {
                l_U889 = 6;
            }
        }
        break;
        case 6:
        if (l_U2841)
        {
            sub_3690();
            SET_CHAR_COORDINATES( sub_3140(), -1282.84900000, 49.48620000, 21.58860000 );
            SET_CHAR_HEADING( sub_3140(), 184.96040000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                SET_CHAR_COORDINATES( l_U2719, -1281.75600000, 49.36120000, 21.58860000 );
                SET_CHAR_HEADING( l_U2719, 184.96040000 );
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    ;
                }
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1289.62500000, 6.84070000, 21.58860000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                CLEAR_SEQUENCE_TASK( l_U2720 );
            }
            ADD_SCENARIO_BLOCKING_AREA( -1304.80800000, -4.98150000, 0.00000000, -1230.09400000, 126.70960000, 100.00000000 );
            l_U2723 = 0;
            l_U889 = 8;
        }
        else if (NOT l_U3585)
        {
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    if (NOT l_U3552)
                    {
                        sub_27229( "FIN1A_ROOF", ref l_U3560, 6, 1 );
                        l_U3552 = 1;
                    }
                }
                UNLOCK_RAGDOLL( l_U2719, 0 );
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1281.54500000, 53.69290000, 21.29780000, 3, -1, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1281.29200000, 52.02410000, 20.29800000, 2, -2, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 211.05310000 );
                TASK_CLIMB( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                CLEAR_SEQUENCE_TASK( l_U2720 );
            }
            ADD_SCENARIO_BLOCKING_AREA( -1304.80800000, -4.98150000, 0.00000000, -1230.09400000, 126.70960000, 100.00000000 );
            l_U3585 = 1;
            l_U2723 = 0;
            l_U889 = 7;
        }
        break;
        case 7:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (sub_43870())
            {
                if (sub_30153( l_U2719, 1, 0 ))
                {
                    if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1281.94200000, 49.66830000, 22.58850000, 3.00000000, 3.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1286.76300000, 26.01070000, 22.65620000, 7.00000000, 25.00000000, 2.00000000, 0 ))) || (l_U921)) || (l_U922))
                    {
                        if (sub_44578())
                        {
                            if (NOT (sub_28207( l_U3560 )))
                            {
                                sub_27229( "FIN1A_FOLLO", ref l_U3572, 6, 1 );
                            }
                        }
                        GET_GAME_TIMER( ref l_U3578 );
                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1289.62500000, 6.84070000, 21.58860000, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U2720 );
                        TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                        CLEAR_SEQUENCE_TASK( l_U2720 );
                        l_U889 = 8;
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 30.00000000, 0 ))
                {
                    if (NOT l_U3552)
                    {
                        l_U3552 = 1;
                    }
                }
            }
        }
        break;
        case 8:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U2723)
            {
                if (sub_30153( l_U2719, 1, 0 ))
                {
                    if (l_U921)
                    {
                        if (NOT (sub_28207( l_U3566 )))
                        {
                            if ((NOT l_U3550) AND (NOT l_U922))
                            {
                                sub_42498();
                                WAIT( 0 );
                                sub_27229( "FIN1A_LOOKY", ref l_U3566, 6, 1 );
                                OPEN_SEQUENCE_TASK( ref l_U2720 );
                                TASK_TURN_CHAR_TO_FACE_COORD( 0, -1286.49100000, 3.53790000, 17.37920000 );
                                TASK_LOOK_AT_COORD( 0, -1286.49100000, 3.53790000, 17.37920000, -1, 0 );
                                CLOSE_SEQUENCE_TASK( l_U2720 );
                                if (NOT (IS_CHAR_INJURED( l_U2719 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U2720 );
                                l_U3550 = 1;
                            }
                            else
                            {
                                l_U889 = 9;
                            }
                        }
                    }
                    else if (NOT (sub_28207( l_U3572 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 15.00000000, 15.00000000, 15.00000000, 0 ))
                        {
                            GET_GAME_TIMER( ref l_U3579 );
                            if ((l_U3579 - l_U3578) > 5000)
                            {
                                sub_27229( "FIN1A_FOLLO", ref l_U3572, 6, 1 );
                                GET_GAME_TIMER( ref l_U3578 );
                            }
                        }
                    }
                }
                else if (NOT l_U921)
                {
                    if (NOT (sub_28207( l_U3572 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 30.00000000, 30.00000000, 30.00000000, 0 ))
                        {
                            GET_GAME_TIMER( ref l_U3579 );
                            if ((l_U3579 - l_U3578) > 10000)
                            {
                                sub_27229( "FIN1A_FOLLO", ref l_U3572, 6, 1 );
                                GET_GAME_TIMER( ref l_U3578 );
                            }
                        }
                    }
                }
            }
        }
        break;
        case 9:
        if (sub_45408())
        {
            if (NOT (sub_28207( l_U3537 )))
            {
                if (NOT l_U3551)
                {
                    l_U3551 = 1;
                }
                else if (sub_30153( l_U2719, 1, 0 ))
                {
                    if (NOT l_U895[4])
                    {
                        PRINT_NOW( "FIN1A_04", 7500, 1 );
                        l_U895[4] = 1;
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if ((l_U922) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1288.46700000, 3.24270000, 18.37910000, 2.00000000, 2.00000000, 1.00000000, 0 )))
                    {
                        sub_46282();
                    }
                }
            }
        }
        break;
        case 10: break;
        case 11: break;
    }
    if (NOT l_U921)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1288.49200000, 4.71540000, 22.37000000, 9.00000000, 9.00000000, 2.00000000, 0 ))
        {
            l_U921 = 1;
        }
    }
    if (NOT l_U922)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1288.16300000, 4.01520000, 18.34920000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (l_U3500)
            {
                l_U922 = 1;
                l_U2712 = 1;
                SET_PED_IS_BLIND_RAGING( sub_3140(), 1 );
            }
            else
            {
                l_U2713 = 8;
            }
        }
    }
    if (NOT l_U3582)
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1288.16300000, 4.01520000, 18.34920000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                sub_46282();
                l_U3582 = 1;
            }
        }
    }
    if (NOT (DOES_OBJECT_EXIST( l_U890 )))
    {
        if (NOT l_U3219)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1262.92300000, 48.77020000, 4.31150000, 100.00000000, 100.00000000, 100.00000000, 0 ))
            {
                REQUEST_MODEL( -886672815 );
                l_U3219 = 1;
            }
        }
        else if (HAS_MODEL_LOADED( -886672815 ))
        {
            CREATE_OBJECT_NO_OFFSET( -886672815, l_U3213._fU0, l_U3213._fU4, l_U3213._fU8, ref l_U890, 1 );
            SET_OBJECT_HEADING( l_U890, 0.00000000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U890, l_U493 );
        }
    }
    if (l_U3583)
    {
        if (NOT (IS_CHAR_DEAD( l_U2424[65] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2424[65], sub_3140(), 0 ))
            {
                l_U2713 = 8;
            }
        }
        else
        {
            l_U2713 = 8;
        }
    }
    if (l_U3501)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1267.02500000, 35.63990000, 4.41150000, 38.00000000, 69.00000000, 100.00000000, 0 )))
        {
            if (NOT l_U895[15])
            {
                CLEAR_PRINTS();
                PRINT_NOW( "FIN1A_15", 7500, 1 );
                GET_GAME_TIMER( ref l_U3580 );
                l_U895[15] = 1;
            }
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U3581 );
        if ((l_U3581 - l_U3580) > 15000)
        {
            l_U895[15] = 0;
        }
    }
    if (NOT l_U3320)
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (IS_CHAR_ON_FIRE( l_U2719 ))
            {
                UNLOCK_RAGDOLL( l_U2719, 1 );
                SET_CHAR_HEALTH( l_U2719, 150 );
                l_U3320 = 1;
            }
        }
    }
    return;
}

int sub_30153(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_30775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_30834(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_30855( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_30855(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_27304( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_31014(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_27403( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_27403( "\n CONVERSATION PAUSED AT LINE " );
            sub_31170( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_27403( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_27403( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_27403( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_31170(unknown uParam0)
{
    return;
}

int sub_31590(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_27403( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_27403( "\n CONVERSATION PAUSED AT LINE " );
            sub_31170( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_27403( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_27403( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_27403( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_32581()
{
    if (NOT l_U3529)
    {
        if (NOT sub_8926())
        {
            l_U3529 = 1;
        }
    }
    else if ((l_U3528 > 0) AND (NOT l_U3530))
    {
        if (sub_8926())
        {
            CLEAR_PRINTS();
            sub_9099( ref l_U3531, 0 );
            l_U3530 = 1;
        }
    }
    switch (l_U3528)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3651(), 0 );
        DISPLAY_RADAR( 0 );
        HINT_CAM( -1274.37300000, -127.49270000, 4.33748400, 0, 0, 0, 100000 );
        if (NOT (IS_CHAR_INJURED( l_U2424[65] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U2520[65] );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
            CLOSE_SEQUENCE_TASK( l_U2520[65] );
            TASK_PERFORM_SEQUENCE( l_U2424[65], l_U2520[65] );
            CLEAR_SEQUENCE_TASK( l_U2520[65] );
            if (NOT (IS_CHAR_INJURED( l_U2719 )))
            {
                TASK_LOOK_AT_CHAR( l_U2719, l_U2424[65], -1, 0 );
            }
        }
        sub_27229( "FIN1A_ARR", ref l_U3531, 6, 1 );
        l_U3528 = 1;
        break;
        case 1:
        if ((NOT (sub_28207( l_U3531 ))) || (l_U3530))
        {
            HINT_CAM( -1274.37300000, -127.49270000, 4.33748400, 0, 0, 0, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2424[65] )))
            {
                CLEAR_CHAR_TASKS( l_U2424[65] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U2424[65], sub_3140() );
            }
            SET_PLAYER_CONTROL( sub_3651(), 1 );
            DISPLAY_RADAR( 1 );
            l_U3528 = 2;
            l_U889 = 2;
        }
        break;
    }
    return;
}

void sub_34053()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U3491 > 0)
    {
        if (NOT l_U3498)
        {
            if (NOT sub_8926())
            {
                l_U3498 = 1;
            }
        }
        else if (((l_U3491 > 0) AND (NOT l_U3499)) AND (IS_SCREEN_FADED_IN()))
        {
            if (sub_8926())
            {
                CLEAR_PRINTS();
                sub_9099( ref l_U3492, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U3499 = 1;
                l_U3491 = 5;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2719 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
    }
    switch (l_U3491)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3651(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "missfinale1a" );
        while (NOT (HAVE_ANIMS_LOADED( "missfinale1a" )))
        {
            WAIT( 0 );
        }
        g_U9155 = 0;
        BEGIN_CAM_COMMANDS( ref l_U2730 );
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        SET_USE_HIGHDOF( 1 );
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U2719, uVar2 )))
                {
                    if (IS_CAR_PASSENGER_SEAT_FREE( uVar2, 0 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U2719 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2719, uVar2, 0 );
                        }
                        else
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U2719, ref uVar3 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U2719, uVar2, 0 );
                        }
                    }
                }
            }
            CLEAR_AREA( -1257.20800000, -21.08300000, 5.63170000, 50.00000000, 1 );
            SET_CAR_COORDINATES( uVar2, -1257.20800000, -21.08300000, 5.63170000 );
            SET_CAR_HEADING( uVar2, 180.00000000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
        }
        else
        {
            REQUEST_ANIMS( "gestures@niko" );
            while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
            {
                WAIT( 0 );
            }
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
            if (DOES_VEHICLE_EXIST( uVar2 ))
            {
                if (NOT (IS_CAR_DEAD( uVar2 )))
                {
                    if (LOCATE_CAR_3D( uVar2, -1257.20700000, -21.11120000, 5.73040000, 7.00000000, 8.00000000, 2.00000000, 0 ))
                    {
                        GET_CAR_MODEL( uVar2, ref uVar4 );
                        SET_CAR_AS_MISSION_CAR( uVar2 );
                        SET_CAR_COORDINATES( uVar2, -1257.08700000, -38.58890000, 5.23940000 );
                        SET_CAR_HEADING( uVar2, 0.00000000 );
                        if (NOT (IS_THIS_MODEL_A_BOAT( uVar4 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                        }
                        else if (IS_THIS_MODEL_A_CAR( uVar4 ))
                        {
                            CLOSE_ALL_CAR_DOORS( uVar2 );
                        }
                        APPLY_FORCE_TO_CAR( uVar2, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                    }
                }
            }
            CLEAR_AREA_OF_CARS( -1257.20700000, -21.11120000, 5.73040000, 50.00000000 );
            CLEAR_CHAR_TASKS( sub_3140() );
            SET_CHAR_COORDINATES( sub_3140(), -1257.20800000, -21.08300000, 5.63170000 );
            SET_CHAR_HEADING( sub_3140(), 180.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U2719 );
                }
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U2719 )))
                {
                    SET_CHAR_COORDINATES( l_U2719, -1256.21800000, -22.06170000, 5.20450000 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U2719, -1256.21800000, -22.06170000, 5.20450000 );
                }
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U2719, sub_3140() );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
        CREATE_CAM( 14, ref l_U2731[1] );
        CREATE_CAM( 14, ref l_U2731[2] );
        CREATE_CAM( 3, ref l_U2731[3] );
        CREATE_CAM( 14, ref l_U2731[4] );
        CREATE_CAM( 14, ref l_U2731[5] );
        CREATE_CAM( 3, ref l_U2731[6] );
        CREATE_CAM( 14, ref l_U2731[7] );
        ATTACH_CAM_TO_PED( l_U2731[1], sub_3140() );
        POINT_CAM_AT_PED( l_U2731[1], sub_3140() );
        SET_CAM_ATTACH_OFFSET( l_U2731[1], 6.10000000, 2.00000000, 0.50000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[1], 1 );
        SET_CAM_POINT_OFFSET( l_U2731[1], 0.00000000, 0.80000000, 1.00000000 );
        SET_CAM_ACTIVE( l_U2731[1], 1 );
        SET_CAM_FOV( l_U2731[1], 41.00000000 );
        SET_CAM_PROPAGATE( l_U2731[1], 1 );
        SET_CAM_NEAR_DOF( l_U2731[1], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2731[1], 8.00000000 );
        ATTACH_CAM_TO_PED( l_U2731[2], sub_3140() );
        POINT_CAM_AT_PED( l_U2731[2], sub_3140() );
        SET_CAM_ATTACH_OFFSET( l_U2731[2], 4.30000000, 3.60000000, 0.50000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[2], 1 );
        SET_CAM_POINT_OFFSET( l_U2731[2], 0.00000000, -1.50000000, 1.00000000 );
        SET_CAM_FOV( l_U2731[2], 41.00000000 );
        SET_CAM_ACTIVE( l_U2731[2], 1 );
        SET_CAM_PROPAGATE( l_U2731[2], 0 );
        SET_CAM_NEAR_DOF( l_U2731[2], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2731[2], 8.00000000 );
        SET_CAM_ACTIVE( l_U2731[3], 0 );
        SET_CAM_PROPAGATE( l_U2731[3], 0 );
        ATTACH_CAM_TO_PED( l_U2731[4], sub_3140() );
        POINT_CAM_AT_PED( l_U2731[4], sub_3140() );
        SET_CAM_ATTACH_OFFSET( l_U2731[4], -1.00000000, 4.30000000, 0.40000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[4], 1 );
        SET_CAM_POINT_OFFSET( l_U2731[4], -1.50000000, 0.80000000, 0.80000000 );
        SET_CAM_FOV( l_U2731[4], 47.50000000 );
        SET_CAM_ACTIVE( l_U2731[4], 0 );
        SET_CAM_PROPAGATE( l_U2731[4], 0 );
        SET_CAM_NEAR_DOF( l_U2731[4], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2731[4], 6.00000000 );
        ATTACH_CAM_TO_PED( l_U2731[5], sub_3140() );
        POINT_CAM_AT_PED( l_U2731[5], sub_3140() );
        SET_CAM_ATTACH_OFFSET( l_U2731[5], -1.00000000, 4.30000000, 0.40000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[5], 1 );
        SET_CAM_POINT_OFFSET( l_U2731[5], -1.50000000, 0.80000000, 0.80000000 );
        SET_CAM_FOV( l_U2731[5], 51.50000000 );
        SET_CAM_ACTIVE( l_U2731[5], 0 );
        SET_CAM_PROPAGATE( l_U2731[5], 0 );
        SET_CAM_NEAR_DOF( l_U2731[5], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2731[5], 6.00000000 );
        SET_CAM_ACTIVE( l_U2731[6], 0 );
        SET_CAM_PROPAGATE( l_U2731[6], 0 );
        SET_CAM_POS( l_U2731[7], -1257.33400000, -33.77399000, 5.56571300 );
        SET_CAM_ROT( l_U2731[7], 13.32655000, -0.00000000, 19.15757000 );
        SET_CAM_FOV( l_U2731[7], 35.00000000 );
        SET_CAM_ACTIVE( l_U2731[7], 0 );
        SET_CAM_PROPAGATE( l_U2731[7], 0 );
        SET_CAM_NEAR_DOF( l_U2731[7], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2731[7], 13.50000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        while (NOT (sub_36493( 25, "FIN1A_CDIMI", "FIN1AAU", 2000, g_U480 )))
        {
            WAIT( 0 );
        }
        GET_GAME_TIMER( ref l_U2763 );
        WAIT( 1000 );
        DO_SCREEN_FADE_IN( 500 );
        l_U3491 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) > 100)
        {
            SET_CAM_ACTIVE( l_U2731[1], 0 );
            SET_CAM_PROPAGATE( l_U2731[1], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2731[3], l_U2731[1], l_U2731[2], 40000, 0 );
            SET_CAM_ACTIVE( l_U2731[3], 1 );
            SET_CAM_PROPAGATE( l_U2731[3], 1 );
            GET_GAME_TIMER( ref l_U2763 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                TASK_LOOK_AT_CHAR( l_U2719, sub_3140(), -2, 0 );
            }
            l_U3491 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2764 );
        if (sub_40603( 1 ))
        {
            SET_CAM_ACTIVE( l_U2731[4], 1 );
            SET_CAM_PROPAGATE( l_U2731[4], 1 );
            SET_CAM_ACTIVE( l_U2731[3], 0 );
            SET_CAM_PROPAGATE( l_U2731[3], 0 );
            SET_CAM_ACTIVE( l_U2731[2], 0 );
            SET_CAM_PROPAGATE( l_U2731[2], 0 );
            GET_GAME_TIMER( ref l_U2763 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                TASK_CLEAR_LOOK_AT( l_U2719 );
            }
            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3140(), "niko_incar_partial", "Missfinale1a", 1.00000000, 1, 0, 0, 0, 0 );
            l_U3491 = 3;
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) > 100)
        {
            SET_CAM_ACTIVE( l_U2731[4], 0 );
            SET_CAM_PROPAGATE( l_U2731[4], 0 );
            SET_CAM_ACTIVE( l_U2731[5], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2731[6], l_U2731[4], l_U2731[5], 20000, 0 );
            SET_CAM_ACTIVE( l_U2731[6], 1 );
            SET_CAM_PROPAGATE( l_U2731[6], 1 );
            l_U2840 = 1;
            if (g_U64734 == 0)
            {
                while (NOT (sub_27229( "FIN1A_TELLS", ref l_U3492, 6, 1 )))
                {
                    WAIT( 0 );
                }
                g_U64734++;
            }
            else
            {
                while (NOT (sub_27229( "FIN1A_DOING", ref l_U3492, 6, 1 )))
                {
                    WAIT( 0 );
                }
            }
            l_U2840 = 0;
            GET_GAME_TIMER( ref l_U2763 );
            l_U3491 = 4;
        }
        break;
        case 4:
        if (NOT l_U3502)
        {
            GET_GAME_TIMER( ref l_U2764 );
            if ((l_U2764 - l_U2763) > 2000)
            {
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3140(), "niko_incar_partial", "Missfinale1a", 8.00000000, 1, 0, 0, 0, 0 );
                l_U3502 = 1;
            }
        }
        if (NOT (sub_28207( l_U3492 )))
        {
            SET_CAM_ACTIVE( l_U2731[7], 1 );
            SET_CAM_PROPAGATE( l_U2731[7], 1 );
            SET_CAM_ACTIVE( l_U2731[6], 0 );
            SET_CAM_PROPAGATE( l_U2731[6], 0 );
            SET_CAM_ACTIVE( l_U2731[5], 0 );
            OPEN_SEQUENCE_TASK( ref l_U2720 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1270.71700000, -21.10230000, 5.21090000, 2, -2, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U2720 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
            }
            CLEAR_SEQUENCE_TASK( l_U2720 );
            l_U3491 = 5;
        }
        else if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
        break;
        case 5:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1261.72100000, -21.43300000, 6.21160000, 1.00000000, 4.00000000, 1.00000000, 0 )) || (l_U3499))
            {
                SET_CAM_ACTIVE( l_U2731[1], 0 );
                SET_CAM_PROPAGATE( l_U2731[1], 0 );
                SET_CAM_ACTIVE( l_U2731[2], 0 );
                SET_CAM_PROPAGATE( l_U2731[2], 0 );
                SET_CAM_ACTIVE( l_U2731[3], 0 );
                SET_CAM_PROPAGATE( l_U2731[3], 0 );
                SET_CAM_ACTIVE( l_U2731[4], 0 );
                SET_CAM_PROPAGATE( l_U2731[4], 0 );
                SET_CAM_ACTIVE( l_U2731[5], 0 );
                SET_CAM_PROPAGATE( l_U2731[5], 0 );
                SET_CAM_ACTIVE( l_U2731[6], 0 );
                SET_CAM_PROPAGATE( l_U2731[6], 0 );
                SET_CAM_ACTIVE( l_U2731[7], 0 );
                SET_CAM_PROPAGATE( l_U2731[7], 0 );
                DESTROY_CAM( l_U2731[3] );
                DESTROY_CAM( l_U2731[1] );
                DESTROY_CAM( l_U2731[2] );
                DESTROY_CAM( l_U2731[6] );
                DESTROY_CAM( l_U2731[4] );
                DESTROY_CAM( l_U2731[5] );
                DESTROY_CAM( l_U2731[7] );
                SET_USE_HIGHDOF( 0 );
                if (l_U3499)
                {
                    sub_42160( 25 );
                    CLEAR_CHAR_TASKS( sub_3140() );
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                        if (IS_CHAR_IN_ANY_CAR( l_U2719 ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U2719, -1267.06400000, -22.07660000, 5.20920000 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( l_U2719, -1267.06400000, -22.07660000, 5.20920000 );
                        }
                        SET_CHAR_HEADING( l_U2719, 90.00000000 );
                    }
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                sub_42498();
                TASK_CLEAR_LOOK_AT( sub_3140() );
                CLEAR_CHAR_TASKS( sub_3140() );
                SET_GAME_CAM_HEADING( 0.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if (NOT l_U3499)
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 0 );
                        SET_CHAR_COORDINATES( l_U2719, -1267.06400000, -22.07660000, 5.20920000 );
                        SET_CHAR_HEADING( l_U2719, 73.98780000 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U2721 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                        SET_BLIP_AS_FRIENDLY( l_U2721, 1 );
                    }
                }
                END_CAM_COMMANDS( ref l_U2730 );
                DISPLAY_RADAR( 1 );
                SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                sub_28632();
                if (l_U3499)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_PLAYER_MOOD_PISSED_OFF( sub_3651(), 50 );
                SET_PLAYER_CONTROL( sub_3651(), 1 );
                REMOVE_ANIMS( "gestures@niko" );
                PRINT_NOW( "FIN1A_04", 7500, 1 );
                l_U3500 = 1;
                l_U3501 = 1;
                l_U2723 = 0;
                l_U3491 = 6;
                l_U889 = 5;
            }
        }
        break;
    }
    return;
}

void sub_36493(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_36553( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, uParam4, 1, 0, 0 );
}

int sub_36553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_27403( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_27403( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3651() )))
    {
        sub_27403( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3140() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() ))))
    {
        sub_27403( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_27403( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_37068()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_27403( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_37068()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_38440( uParam0, ref g_U91._fU176 );
    sub_39821( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_5621( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_37068()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_37125())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_37125()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3651() )))
    {
        sub_27403( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_27403( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_27403( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_27403( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3651() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3140() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3140(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_27403( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3140() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_27403( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_27403( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3651() )))
    {
        sub_27403( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_38440(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_39821(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_40603(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3140(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_27403( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_42160(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1000) AND (g_U91._fU0 != 1001))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_42498()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

int sub_43870()
{
    unknown uVar2;

    if (l_U3547)
    {
        return 1;
    }
    if (NOT (IS_CHAR_INJURED( l_U2719 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1281.89600000, 49.62850000, 22.59370000, 2.00000000, 2.00000000, 1.00000000, 0 ))
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1282.63400000, 49.82190000, 22.58860000, 3, -2, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 349.15120000 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U2719, uVar2 );
            UNLOCK_RAGDOLL( l_U2719, 1 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U3547 = 1;
            return 1;
        }
    }
    if (NOT l_U3546)
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1281.00300000, 52.58880000, 21.30310000, 2.00000000, 2.00000000, 1.00000000, 0 ))
            {
                GET_GAME_TIMER( ref l_U3544 );
                l_U3546 = 1;
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        GET_GAME_TIMER( ref l_U3545 );
        if ((l_U3545 - l_U3544) > 60000)
        {
            CLEAR_CHAR_TASKS( l_U2719 );
            SET_CHAR_COORDINATES( l_U2719, -1281.46100000, 50.78600000, 21.58800000 );
        }
        else if (sub_30153( l_U2719, 1, 0 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1281.89600000, 49.62850000, 22.59370000, 2.00000000, 2.00000000, 1.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1281.29200000, 52.02410000, 20.29800000, 2, -2, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 211.05310000 );
                TASK_CLIMB( 0, 1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U2719 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2719, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
        }
    }
    return 0;
}

int sub_44578()
{
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_45408()
{
    switch (l_U3543)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            UNLOCK_RAGDOLL( l_U2719, 0 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U2719, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U2719, 15, 0 );
            l_U3543 = 1;
        }
        break;
        case 1:
        if (NOT l_U922)
        {
            if (NOT (IS_NON_FRAG_OBJECT_SMASHED( -1287.71400000, 4.21362000, 21.40138000, 6.00000000, 430287076 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_SHOOT_AT_COORD( 0, -1287.81900000, 4.47447700, 21.01740000, 1000, 5 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                if (NOT (IS_CHAR_INJURED( l_U2719 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                }
                CLEAR_SEQUENCE_TASK( l_U2720 );
                l_U3543 = 2;
            }
            else
            {
                l_U3543 = 3;
            }
        }
        else
        {
            l_U3543 = 3;
        }
        break;
        case 2:
        if (sub_30153( l_U2719, 1, 0 ))
        {
            if ((l_U922) || (IS_NON_FRAG_OBJECT_SMASHED( -1287.71400000, 4.21362000, 21.40138000, 6.00000000, 430287076 )))
            {
                l_U3543 = 3;
            }
            else
            {
                l_U3543 = 1;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (sub_30153( l_U2719, 1, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1288.73400000, 3.64790000, 18.37920000, 2, -2 );
                TASK_ACHIEVE_HEADING( 0, 15.34800000 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                CLEAR_SEQUENCE_TASK( l_U2720 );
                if (NOT l_U922)
                {
                    sub_27229( "FIN1A_SHOOT", ref l_U3537, 6, 1 );
                }
                l_U3543 = 4;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (l_U922)
            {
                if (NOT (sub_28207( l_U3537 )))
                {
                    STOP_PED_SPEAKING( l_U2719, 1 );
                    l_U3543 = 5;
                }
            }
            else
            {
                STOP_PED_SPEAKING( l_U2719, 1 );
                l_U3543 = 5;
            }
        }
        break;
        case 5:
        return 1;
        break;
    }
    return 0;
}

void sub_46282()
{
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
        sub_3511( 0 );
        if (DOES_BLIP_EXIST( l_U2721 ))
        {
            REMOVE_BLIP( l_U2721 );
        }
        SET_CHAR_HEALTH( l_U2719, 2000 );
        if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
        {
            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
        }
        SET_ALL_RANDOM_PEDS_FLEE( sub_3651(), 1 );
        SET_COMBAT_DECISION_MAKER( l_U2719, l_U2717 );
        SET_CHAR_DECISION_MAKER( l_U2719, l_U2715 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U2719, 0 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U2719, 0 );
        ADD_SCENARIO_BLOCKING_AREA( -1304.80800000, -4.98150000, 0.00000000, -1230.09400000, 126.70960000, 100.00000000 );
        ADD_BLIP_FOR_COORD( l_U2837._fU0, l_U2837._fU4, l_U2837._fU8, ref l_U2836 );
        SET_ROUTE( l_U2836, 1 );
        PRINT_NOW( "FIN1A_03", 7500, 1 );
        l_U2712 = 1;
        STOP_PED_SPEAKING( l_U2719, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U2719, 0 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        l_U2713 = 4;
        l_U889 = 11;
    }
    return;
}

void sub_47472()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2719 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
    }
    switch (l_U3314)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 35.00000000, 35.00000000, 35.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                    {
                        if (l_U3274)
                        {
                            l_U3274 = 0;
                        }
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                        CLEAR_PRINTS();
                        if (NOT l_U2423)
                        {
                            l_U3315 = 1;
                            if (NOT (DOES_BLIP_EXIST( l_U2836 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U2837._fU0, l_U2837._fU4, l_U2837._fU8, ref l_U2836 );
                                SET_ROUTE( l_U2836, 1 );
                                PRINT_NOW( "FIN1A_03", 7500, 1 );
                            }
                        }
                    }
                }
                else if (NOT l_U2423)
                {
                    if (NOT l_U3315)
                    {
                        l_U3315 = 1;
                    }
                    if (sub_48028( 41 ))
                    {
                        if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U2719 );
                        }
                        if (DOES_BLIP_EXIST( l_U2836 ))
                        {
                            REMOVE_BLIP( l_U2836 );
                        }
                        l_U2422 = 1;
                        sub_49852( ref l_U2409 );
                        sub_49970();
                        SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                        l_U2409._fU24 = {-1278.56000000, 62.60210000, 13.00000000};
                        l_U2409._fU36 = 41;
                        l_U2409._fU4 = 1;
                        l_U3314 = 11;
                    }
                }
                else
                {
                    l_U3314 = 20;
                }
            }
            else
            {
                l_U3315 = 0;
                l_U3274 = 1;
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
                if (DOES_BLIP_EXIST( l_U2836 ))
                {
                    REMOVE_BLIP( l_U2836 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        ;
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_01", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                ;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (l_U889 == 11)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_49970();
                    l_U2409._fU24 = {-1286.57500000, 14.58010000, 18.37940000};
                    l_U2409._fU36 = 46;
                    l_U2409._fU4 = 1;
                    l_U2422 = 1;
                    l_U3315 = 1;
                    l_U3314 = 2;
                }
            }
        }
        break;
        case 2:
        if (sub_48028( 48 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1287.60000000, 42.38750000, 18.37920000};
            l_U2409._fU36 = 48;
            l_U2409._fU4 = 1;
            l_U3314 = 3;
        }
        break;
        case 3:
        if (sub_48028( 49 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1288.43000000, 48.97990000, 14.77900000};
            l_U2409._fU36 = 49;
            l_U2409._fU4 = 1;
            l_U3314 = 4;
        }
        break;
        case 4:
        if (sub_48028( 50 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1287.86500000, 42.06530000, 11.17900000};
            l_U2409._fU36 = 50;
            l_U2409._fU4 = 1;
            l_U3314 = 5;
        }
        break;
        case 5:
        if (sub_48028( 37 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1288.21900000, 48.91480000, 7.57920000};
            l_U2409._fU36 = 37;
            l_U2409._fU4 = 1;
            l_U3314 = 7;
        }
        break;
        case 7:
        if (sub_48028( 39 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1281.75000000, 50.59510000, 4.30650000};
            l_U2409._fU36 = 39;
            l_U2409._fU4 = 1;
            l_U3314 = 8;
        }
        break;
        case 6:
        if ((sub_48792( l_U2719 )) == 1)
        {
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U2719 );
                }
                SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                sub_49852( ref l_U2409 );
                sub_49970();
                l_U2409._fU24 = {-1281.75000000, 50.59510000, 4.30650000};
                l_U2409._fU36 = 39;
                l_U2409._fU4 = 1;
                l_U2422 = 1;
                l_U3315 = 1;
                GET_GAME_TIMER( ref l_U3321 );
                l_U3314 = 8;
            }
        }
        else if (((sub_48792( l_U2719 )) == 0) || ((sub_48792( sub_3140() )) == 0))
        {
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U2719 );
                }
                SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                sub_49852( ref l_U2409 );
                sub_49970();
                l_U2409._fU24 = {-1259.10000000, 8.87400000, 4.30650000};
                l_U2409._fU36 = 0;
                l_U2409._fU4 = 1;
                l_U2422 = 1;
                l_U3315 = 1;
                GET_GAME_TIMER( ref l_U3321 );
                l_U3314 = 15;
            }
        }
        break;
        case 8:
        if (sub_48028( 51 ))
        {
            sub_49852( ref l_U2409 );
            sub_49970();
            l_U2409._fU24 = {-1267.77000000, 54.34510000, 13.00000000};
            l_U2409._fU36 = 51;
            l_U2409._fU4 = 1;
            l_U3314 = 10;
        }
        break;
        case 10:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U895[4])
            {
                if (NOT (sub_28207( l_U3277 )))
                {
                    PRINT_NOW( "FIN1A_04", 7500, 1 );
                    l_U895[4] = 1;
                    if (NOT (DOES_BLIP_EXIST( l_U2721 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    }
                }
            }
        }
        if (sub_48028( 41 ))
        {
            if (sub_51508())
            {
                sub_49852( ref l_U2409 );
                l_U2409._fU24 = {-1278.56000000, 62.60210000, 13.00000000};
                l_U2409._fU36 = 41;
                l_U2409._fU4 = 1;
                l_U3314 = 11;
            }
        }
        break;
        case 11:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U895[4])
            {
                if (NOT (sub_28207( l_U3277 )))
                {
                    PRINT_NOW( "FIN1A_04", 7500, 1 );
                    l_U895[4] = 1;
                    if (NOT (DOES_BLIP_EXIST( l_U2721 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                        CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    }
                }
            }
        }
        if ((sub_48028( 42 )) AND (l_U895[4]))
        {
            sub_51848();
            sub_49852( ref l_U2409 );
            l_U2409._fU24 = {-1278.56000000, 72.60210000, 13.00000000};
            l_U2409._fU36 = 42;
            l_U2409._fU4 = 1;
            l_U3314 = 12;
        }
        break;
        case 12:
        if (sub_48028( 43 ))
        {
            sub_51848();
            sub_49852( ref l_U2409 );
            l_U2409._fU24 = {-1278.56500000, 87.13430000, 13.00000000};
            l_U2409._fU36 = 43;
            l_U2409._fU4 = 1;
            l_U3314 = 14;
        }
        break;
        case 14:
        if (sub_48028( 45 ))
        {
            sub_51848();
            sub_49852( ref l_U2409 );
            l_U2409._fU24 = {-1277.80000000, 114.22460000, 13.00000000};
            l_U2409._fU36 = 45;
            l_U2409._fU4 = 1;
            l_U3314 = 19;
        }
        break;
        case 15:
        if (sub_48028( 1 ))
        {
            sub_49852( ref l_U2409 );
            sub_51848();
            l_U2409._fU24 = {-1259.53800000, 18.96380000, 4.30650000};
            l_U2409._fU36 = 1;
            l_U2409._fU4 = 1;
            l_U3314 = 16;
        }
        break;
        case 16:
        if (sub_48028( 2 ))
        {
            sub_49852( ref l_U2409 );
            sub_51848();
            l_U2409._fU24 = {-1259.14900000, 29.14380000, 4.30650000};
            l_U2409._fU36 = 2;
            l_U2409._fU4 = 1;
            l_U3314 = 17;
        }
        break;
        case 17:
        if (sub_48028( 3 ))
        {
            sub_49852( ref l_U2409 );
            sub_51848();
            l_U2409._fU24 = {-1259.14900000, 29.14380000, 4.30650000};
            l_U2409._fU36 = 3;
            l_U2409._fU4 = 1;
            l_U3314 = 18;
        }
        break;
        case 18:
        if (sub_48028( 39 ))
        {
            sub_49970();
            sub_49852( ref l_U2409 );
            l_U2409._fU24 = {-1281.75000000, 50.59510000, 4.30650000};
            l_U2409._fU36 = 39;
            l_U2409._fU4 = 1;
            l_U3314 = 8;
        }
        break;
        case 19:
        if (NOT l_U2423)
        {
            if (NOT (sub_28207( l_U3295 )))
            {
                if (NOT l_U3335)
                {
                    if (sub_52641( l_U2719 ))
                    {
                        l_U3315 = 0;
                        sub_27229( "FIN1A_YELLS", ref l_U3295, 6, 1 );
                        l_U3335 = 1;
                    }
                }
                else if (NOT l_U895[6])
                {
                    PRINT_NOW( "FIN1A_06", 7500, 1 );
                    l_U895[6] = 1;
                    l_U3314 = 20;
                }
            }
            if (NOT l_U3339)
            {
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U2719, -1278.23900000, 115.85830000, 13.00560000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        l_U2422 = 0;
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                        SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -1277.54800000, 115.05560000, 12.00060000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U2720 );
                        if (NOT (IS_CHAR_INJURED( l_U2719 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2720 );
                        l_U3339 = 1;
                    }
                }
            }
        }
        else
        {
            l_U3314 = 20;
        }
        break;
        case 20:
        if (l_U3316)
        {
            if (NOT l_U3245)
            {
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                            {
                                if (DOES_BLIP_EXIST( l_U2721 ))
                                {
                                    REMOVE_BLIP( l_U2721 );
                                }
                                SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                                CLEAR_PRINTS();
                            }
                        }
                        else if (IS_CHAR_DEAD( l_U2424[52] ))
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "FIN1A_14", 7500, 1 );
                            CLEAR_CHAR_TASKS( l_U2719 );
                            l_U3314 = 21;
                        }
                        else if (l_U3315)
                        {
                            l_U3315 = 0;
                        }
                        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
                            if (NOT l_U3345)
                            {
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U892 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U893 );
                            }
                            if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
                            {
                                if (NOT l_U3340)
                                {
                                    l_U3340 = 1;
                                    SET_CAR_STRONG( uVar2, 1 );
                                }
                                if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                                {
                                    if (l_U3318)
                                    {
                                        l_U3318 = 0;
                                    }
                                    if (NOT (DOES_BLIP_EXIST( l_U2616[52] )))
                                    {
                                        ADD_BLIP_FOR_CHAR( l_U2424[52], ref l_U2616[52] );
                                        CLEAR_PRINTS();
                                        PRINT_NOW( "FIN1A_07", 7500, 1 );
                                    }
                                    if (NOT l_U3317)
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2719, 1 );
                                        GIVE_WEAPON_TO_CHAR( l_U2719, 12, 3000, 0 );
                                        SET_CURRENT_CHAR_WEAPON( l_U2719, 12, 1 );
                                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                                        TASK_DRIVE_BY( 0, l_U2424[52], 0, 0.00000000, 0.00000000, 0.00000000, 60.00000000, 8, 1, 60 );
                                        CLOSE_SEQUENCE_TASK( l_U2720 );
                                        TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                                        CLEAR_SEQUENCE_TASK( l_U2720 );
                                        l_U3317 = 1;
                                    }
                                    else if (sub_30153( l_U2719, 1, 0 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                                        TASK_DRIVE_BY( 0, l_U2424[52], 0, 0.00000000, 0.00000000, 0.00000000, 60.00000000, 8, 1, 60 );
                                        CLOSE_SEQUENCE_TASK( l_U2720 );
                                        TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                                        CLEAR_SEQUENCE_TASK( l_U2720 );
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U2719 )))
                                    {
                                        ;
                                    };;;
                                }
                                if (DOES_BLIP_EXIST( l_U2721 ))
                                {
                                    REMOVE_BLIP( l_U2721 );
                                }
                            }
                            else if (NOT l_U3340)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT l_U895[17])
                                    {
                                        PRINT_NOW( "FIN1A_17", 7500, 1 );
                                        l_U895[17] = 1;
                                    }
                                }
                                if (NOT (DOES_BLIP_EXIST( l_U2721 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                                }
                                if (DOES_BLIP_EXIST( l_U2616[52] ))
                                {
                                    REMOVE_BLIP( l_U2616[52] );
                                }
                            }
                        }
                        else if (NOT l_U3318)
                        {
                            CLEAR_CHAR_TASKS( l_U2719 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2719, 0 );
                            l_U3317 = 0;
                            l_U3318 = 1;
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U3336)
                            {
                                sub_27229( "FIN1A_RUNS", ref l_U3323, 6, 1 );
                                l_U3336 = 1;
                            }
                            else if (NOT l_U3337)
                            {
                                if (sub_54173())
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                                    SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                                    sub_27229( "FIN1A_2DO", ref l_U3251, 6, 1 );
                                    l_U3337 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2616[52] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U2424[52], ref l_U2616[52] );
                                CLEAR_PRINTS();
                                PRINT_NOW( "FIN1A_07", 7500, 1 );
                            }
                        }
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        };;;;
                    }
                    else
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U2719 );
                        if (DOES_BLIP_EXIST( l_U2616[52] ))
                        {
                            REMOVE_BLIP( l_U2616[52] );
                        }
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U2719 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                                {
                                    REMOVE_BLIP( l_U2721 );
                                    SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                                    CLEAR_PRINTS();
                                }
                            }
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                ;
                            }
                        }
                        else
                        {
                            ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                            CHANGE_BLIP_COLOUR( l_U2721, 3 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "FIN1A_01", 7500, 1 );
                        }
                    }
                    if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                    {
                        ;
                    }
                }
            }
        }
        break;
        case 21:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                        CLEAR_PRINTS();
                    }
                }
                else if (NOT l_U3338)
                {
                    if (l_U3319)
                    {
                        sub_27229( "FIN1A_GETS", ref l_U3329, 6, 1 );
                        l_U3338 = 1;
                    }
                    else if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
                        if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U3341 )))
                            {
                                ADD_BLIP_FOR_OBJECT( l_U3266, ref l_U3341 );
                                CHANGE_BLIP_COLOUR( l_U3341, 2 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "FIN1A_14", 7500, 1 );
                            }
                            if (DOES_BLIP_EXIST( l_U2721 ))
                            {
                                REMOVE_BLIP( l_U2721 );
                            }
                        }
                    }
                    else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        ;
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U3341 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U3266 ))
                        {
                            ADD_BLIP_FOR_OBJECT( l_U3266, ref l_U3341 );
                            CHANGE_BLIP_COLOUR( l_U3341, 2 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "FIN1A_14", 7500, 1 );
                        }
                    }
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        REMOVE_BLIP( l_U2721 );
                    };;;
                }
                else if (NOT (sub_28207( l_U3329 )))
                {
                    l_U3314 = 22;
                    l_U2713 = 6;
                };;;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
                if (DOES_BLIP_EXIST( l_U3341 ))
                {
                    REMOVE_BLIP( l_U3341 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "FIN1A_01", 7500, 1 );
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_01", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                ;
            }
        }
        break;
        case 22: break;
    }
    if (l_U3315)
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            GET_GAME_TIMER( ref l_U3322 );
            if ((l_U3322 - l_U3321) > 8000)
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FIN1A_03", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    if (IS_CHAR_SHOOTING( l_U2719 ))
                    {
                        if (sub_55998())
                        {
                            GET_GAME_TIMER( ref l_U3321 );
                        }
                    }
                }
            }
        }
    }
    if ((l_U3197) AND (l_U2712))
    {
        sub_56204();
    }
    if (l_U2422)
    {
        sub_56743();
    }
    if (NOT l_U3320)
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (IS_CHAR_ON_FIRE( l_U2719 ))
            {
                UNLOCK_RAGDOLL( l_U2719, 1 );
                SET_CHAR_HEALTH( l_U2719, 150 );
                l_U3320 = 1;
            }
        }
    }
    return;
}

int sub_48028(unknown uParam0)
{
    unknown[10] uVar3;
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
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
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
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;

    array(ref uVar3, 10);
    switch (uParam0)
    {
        case 48:
        uVar3[0] = {l_U1107[1]};
        uVar3[1] = {l_U1107[2]};
        if ((sub_48189( ref uVar3, 2, 2, 1, 1 )) || (sub_48358( sub_3140() )))
        {
            return 1;
        }
        break;
        case 49:
        uVar3[0] = {l_U1107[3]};
        if ((sub_48189( ref uVar3, 1, 1, 1, 1 )) || (sub_48486( sub_3140() )))
        {
            return 1;
        }
        break;
        case 50:
        uVar3[0] = {l_U1107[5]};
        if ((sub_48189( ref uVar3, 1, 1, 1, 1 )) || (sub_48486( sub_3140() )))
        {
            return 1;
        }
        break;
        case 37:
        if ((sub_48189( ref uVar3, 2, 2, 1, 1 )) || (sub_48649( sub_3140() )))
        {
            return 1;
        }
        break;
        case 39:
        uVar3[0] = {l_U1107[15]};
        uVar3[1] = {l_U1107[17]};
        if ((sub_48189( ref uVar3, 2, 2, 1, 1 )) || ((sub_48792( sub_3140() )) == 1))
        {
            return 1;
        }
        break;
        case 41:
        uVar3[0] = {l_U1107[30]};
        if (sub_48962( sub_3140() ))
        {
            return 1;
        }
        break;
        case 51:
        uVar3[0] = {l_U1107[30]};
        if ((sub_48189( ref uVar3, 1, 1, 1, 1 )) || (sub_48962( sub_3140() )))
        {
            return 1;
        }
        break;
        case 42:
        uVar3[0] = {l_U1107[36]};
        uVar3[1] = {l_U1107[37]};
        uVar3[2] = {l_U1107[38]};
        if ((sub_48189( ref uVar3, 3, 3, 1, 1 )) || (sub_49175( sub_3140() )))
        {
            return 1;
        }
        break;
        case 43:
        uVar3[0] = {l_U1107[39]};
        uVar3[1] = {l_U1107[40]};
        uVar3[2] = {l_U1107[47]};
        if ((sub_48189( ref uVar3, 3, 3, 1, 1 )) || (sub_49339( sub_3140() )))
        {
            return 1;
        }
        break;
        case 45:
        uVar3[0] = {l_U1107[45]};
        uVar3[1] = {l_U1107[46]};
        if ((sub_48189( ref uVar3, 2, 2, 1, 1 )) || (sub_49339( sub_3140() )))
        {
            return 1;
        }
        break;
        case 1:
        uVar3[0] = {l_U1107[19]};
        uVar3[1] = {l_U1107[22]};
        uVar3[2] = {l_U1107[23]};
        if ((sub_48189( ref uVar3, 3, 3, 1, 1 )) || (sub_49566( sub_3140() )))
        {
            return 1;
        }
        break;
        case 2:
        uVar3[0] = {l_U1107[24]};
        if ((sub_48189( ref uVar3, 1, 1, 1, 1 )) || (sub_49566( sub_3140() )))
        {
            return 1;
        }
        break;
        case 3:
        uVar3[0] = {l_U1107[25]};
        if ((sub_48189( ref uVar3, 1, 1, 1, 1 )) || (sub_49566( sub_3140() )))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_48189(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
{
    int I;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (((uParam0^)[I]._fU4) || (NOT bParam4))
        {
            if ((IS_CHAR_DEAD( (uParam0^)[I]._fU0 )) || (IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )))
            {
                iVar8++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar8++;
                }
            }
        }
    }
    if (iVar8 >= iParam2)
    {
        return 1;
    }
    return 0;
}

int sub_48358(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1288.23100000, 37.86650000, 18.37910000, 2.00000000, 6.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_48486(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1288.38200000, 41.91050000, 11.17900000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_48649(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1288.22000000, 49.13410000, 7.57900000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_48792(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1242.07300000, 3.51880000, 4.30650000, 2.00000000, 3.00000000, 3.00000000, 0 ))
        {
            return 0;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1288.10900000, 45.51570000, 4.30650000, 4.00000000, 2.00000000, 2.50000000, 0 ))
        {
            return 1;
        }
    }
    return -1;
}

int sub_48962(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1263.59600000, 55.10400000, 2.26390000, 18.00000000, 1.00000000, 4.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_49175(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1265.54700000, 68.05090000, 13.00000000, 17.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_49339(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1264.36500000, 94.30640000, 13.00000000, 17.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_49566(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1262.84600000, 15.62920000, 4.30650000, 30.00000000, 18.00000000, 22.00000000, 0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_49852(int iParam0)
{
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        SET_CHAR_DECISION_MAKER( iParam0->_fU0, l_U2714 );
    }
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

void sub_49970()
{
    sub_9099( ref l_U3289, 0 );
    if (NOT (sub_28207( l_U3277 )))
    {
        sub_27229( "FIN1A_FOLLO", ref l_U3277, 6, 0 );
    }
    return;
}

int sub_51508()
{
    if (NOT (sub_28207( l_U3303 )))
    {
        if (sub_28207( l_U3283 ))
        {
            sub_9099( ref l_U3283, 0 );
        }
        if (sub_28207( l_U3289 ))
        {
            sub_9099( ref l_U3289, 0 );
        }
        sub_27229( "FIN1A_SPLIT", ref l_U3303, 7, 1 );
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_51848()
{
    int iVar2;

    sub_9099( ref l_U3289, 0 );
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        if (l_U3301 < 7)
        {
            if (NOT (sub_28207( l_U3283 )))
            {
                sub_27229( "FIN1A_COVER", ref l_U3283, 5, 0 );
                l_U3301++;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (iVar2 < 1)
                {
                    SAY_AMBIENT_SPEECH( l_U2719, "COVER_ME", 1, 1, 0 );
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U2719, "MOVE_IN", 1, 1, 0 );
                }
            }
        }
    }
    return;
}

int sub_52641(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1279.15700000, 115.36440000, 13.00000000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_54173()
{
    if (l_U3196)
    {
        ;
    }
    if (l_U3196)
    {
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if (IS_CAR_ON_SCREEN( l_U918 ))
            {
                return 1;
            }
        }
    }
    else if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1240.97000000, 106.82730000, 4.15170000, 6.00000000, 1.00000000, 100.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1240.62900000, 96.05800000, 3.24630000, 6.00000000, 1.00000000, 100.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1241.55400000, 100.80220000, 3.03030000, 1.00000000, 6.00000000, 100.00000000, 0 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U2721 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U2719 )))
                {
                    if (NOT (sub_54460( -1251.45100000, 103.59300000, 1.25790000, 2.00000000 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                        SET_CHAR_COORDINATES( l_U2719, -1251.45100000, 103.59300000, 1.25790000 );
                        SET_CHAR_HEADING( l_U2719, 270.00000000 );
                    }
                }
            }
        }
        l_U3196 = 1;
    }
    return 0;
}

int sub_54460(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_55998()
{
    if (((NOT (sub_28207( l_U3277 ))) AND (NOT (sub_28207( l_U3283 )))) AND (NOT (sub_28207( l_U3289 ))))
    {
        if (l_U3302 < 5)
        {
            sub_27229( "FIN1A_GOONS", ref l_U3289, 6, 0 );
            l_U3302++;
            return 1;
        }
        else if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            SAY_AMBIENT_SPEECH( l_U2719, "SHOOT_AT_ENEMY", 1, 1, 0 );
            return 1;
        }
    }
    return 0;
}

int sub_56204()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        GET_CHAR_HEALTH( l_U2719, ref iVar2 );
        if (iVar2 > 100)
        {
            iVar2 -= 100;
            iVar3 = 100 * (iVar2 / 1900);
            if (iVar3 <= 20)
            {
                if (NOT l_U3309[0])
                {
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        PRINT_NOW( "FIN1A_09", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "FIN1A_16", 7500, 1 );
                    }
                    l_U3309[0] = 1;
                    return 1;
                }
            }
            else if ((iVar3 > 20) AND (iVar3 <= 40))
            {
                if (NOT l_U3309[1])
                {
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        PRINT_NOW( "FIN1A_09", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "FIN1A_16", 7500, 1 );
                    }
                    l_U3309[1] = 1;
                    return 1;
                }
            }
            else if ((iVar3 > 40) AND (iVar3 <= 60))
            {
                if (NOT l_U3309[2])
                {
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        PRINT_NOW( "FIN1A_09", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "FIN1A_16", 7500, 1 );
                    }
                    l_U3309[2] = 1;
                    return 1;
                }
            }
            else if ((iVar3 > 60) AND (iVar3 <= 80))
            {
                if (NOT l_U895[3])
                {
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        PRINT_NOW( "FIN1A_09", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "FIN1A_16", 7500, 1 );
                    }
                    l_U895[3] = 1;
                    return 1;
                }
            };;;;
        }
    }
    return 0;
}

void sub_56743()
{
    int iVar2;
    unknown uVar3;

    if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
    {
        SCRIPT_ASSERT( "BUDDY_MOVE_ATTACK() called while group member!" );
    }
    if (l_U2713 == 11)
    {
        SCRIPT_ASSERT( "BUDDY_MOVE_ATTACK() called while mission_prog = TEST" );
    }
    iVar2 = 0;
    if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
    {
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (l_U2409._fU4)
            {
                if (NOT l_U2409._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U2409._fU0, l_U2714 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    TASK_TOGGLE_DUCK( 0, 1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U2409._fU24._fU0, l_U2409._fU24._fU4, l_U2409._fU24._fU8, 3, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U2409._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U2409._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U2409._fU8 = 1;
                }
                else if (NOT l_U2409._fU16)
                {
                    if (NOT l_U2409._fU12)
                    {
                        if (sub_30153( l_U2409._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U2409._fU0, l_U2715 );
                            SET_COMBAT_DECISION_MAKER( l_U2409._fU0, l_U2717 );
                            sub_57216( ref l_U2409._fU0, l_U2409._fU36 );
                            SET_CHAR_RELATIONSHIP( l_U2409._fU0, 1, 0 );
                            SET_CHAR_RELATIONSHIP( l_U2409._fU0, 5, 23 );
                            iVar2 = sub_60873();
                            if (iVar2 != -1)
                            {
                                if (l_U2409._fU24._fU0 == -1273.00500000)
                                {
                                    SCRIPT_ASSERT( "Got ped" );
                                }
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                if (NOT (IS_CHAR_DEAD( l_U2424[iVar2] )))
                                {
                                    TASK_COMBAT( 0, l_U2424[iVar2] );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                                if (NOT (IS_CHAR_INJURED( l_U2409._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2409._fU0, uVar3 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                            l_U2409._fU12 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_57216(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1259.39200000, 11.87400000, 5.80650000, -1259.39200000, 7.87400000, 2.80650000, 3.50000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1259.47500000, 21.95070000, 5.80650000, -1259.47500000, 17.95070000, 2.80650000, 3.50000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1259.36700000, 32.15940000, 5.80650000, -1259.36700000, 28.15940000, 2.80650000, 3.50000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1259.42200000, 42.33820000, 5.80650000, -1259.42200000, 38.33820000, 2.80650000, 3.50000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1259.36100000, 52.51790000, 5.80650000, -1259.36100000, 48.51790000, 2.80650000, 3.50000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1283.20500000, 11.87400000, 5.80650000, -1283.20500000, 7.87400000, 2.80650000, 3.50000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1283.11900000, 24.61140000, 5.80650000, -1283.11900000, 18.11140000, 2.80650000, 3.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1282.65000000, 33.90840000, 5.80650000, -1282.65000000, 26.90840000, 2.80650000, 4.50000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1282.98200000, 42.33920000, 5.80650000, -1282.98200000, 38.33920000, 2.80650000, 3.50000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.78700000, 69.52350000, 3.76390000, -1264.78700000, 62.52350000, 0.26390000, 6.00000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.31200000, 84.20340000, 3.76390000, -1264.31200000, 80.70340000, 0.26390000, 4.50000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.35400000, 97.40280000, 3.26890000, -1264.35400000, 92.40280000, 0.76890000, 3.50000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.17300000, 108.98450000, 3.25510000, -1264.17300000, 104.98450000, 0.75510000, 3.50000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1265.12300000, 118.36070000, 20.80650000, -1265.12300000, -1.13930000, 1.30650000, 55.00000000 );
        break;
        case 14:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1246.08500000, 19.98260000, 6.30650000, -1246.08500000, 29.98260000, 2.30650000, 2.00000000 );
        break;
        case 15:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1261.38400000, 22.54570000, 13.17900000, -1291.38400000, 22.54570000, 9.17900000, 42.50000000 );
        break;
        case 16:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1267.26800000, 49.47130000, 6.30650000, -1267.26800000, 46.47130000, 2.80650000, 11.50000000 );
        break;
        case 17:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1248.40900000, 67.41630000, 4.42550000, -1248.40900000, 63.91630000, 1.42550000, 1.50000000 );
        break;
        case 18:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1252.68200000, 84.20340000, 3.76350000, -1252.68200000, 80.70340000, 0.76350000, 2.00000000 );
        break;
        case 19:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1252.69400000, 97.69180000, 3.75980000, -1252.69400000, 94.19180000, 0.75980000, 2.00000000 );
        break;
        case 20:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1252.62100000, 108.48350000, 3.75740000, -1252.62100000, 104.98350000, 0.75740000, 2.00000000 );
        break;
        case 21:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1275.97500000, 67.42700000, 3.76120000, -1275.97500000, 63.92700000, 0.76120000, 2.00000000 );
        break;
        case 22:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1275.93400000, 84.20330000, 3.76120000, -1275.93400000, 80.70330000, 0.76120000, 2.00000000 );
        break;
        case 23:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1276.09900000, 97.26200000, 3.76020000, -1276.09900000, 93.76200000, 0.76020000, 2.00000000 );
        break;
        case 24:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1275.82300000, 108.48450000, 3.74970000, -1275.82300000, 104.98450000, 0.74970000, 2.00000000 );
        break;
        case 25:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.26000000, 118.39230000, 4.25970000, -1264.26000000, 60.89230000, 0.25970000, 38.00000000 );
        break;
        case 26:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1265.91900000, 58.21980000, 10.89990000, -1265.91900000, 53.21980000, 7.89990000, 2.50000000 );
        break;
        case 27:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.53400000, 118.32620000, 14.50000000, -1264.53400000, 51.82620000, 11.50000000, 32.50000000 );
        break;
        case 28:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.34200000, 95.41520000, 14.50000000, -1264.34200000, 92.41520000, 11.50000000, 26.50000000 );
        break;
        case 29:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1264.68100000, 69.48670000, 14.50000000, -1264.68100000, 66.48670000, 11.50000000, 26.50000000 );
        break;
        case 30:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1265.08200000, 56.56410000, 14.50000000, -1265.08200000, 53.56410000, 11.50000000, 26.50000000 );
        break;
        case 31:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1288.16600000, 50.58760000, 19.37920000, -1288.16600000, 31.08760000, 2.37920000, 5.00000000 );
        break;
        case 32:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1288.33500000, 44.21930000, 14.17910000, -1288.33500000, 30.71930000, 9.17910000, 4.50000000 );
        break;
        case 34:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1251.41900000, 3.34330000, 19.87910000, -1236.41900000, 3.34330000, 2.87910000, 4.50000000 );
        break;
        case 33:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1244.31800000, 3.54940000, 12.67910000, -1255.31800000, 3.54940000, 9.67910000, 4.50000000 );
        break;
        case 35:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1255.28000000, 117.78240000, 14.40000000, -1255.28000000, 106.78240000, 4.90000000, 4.50000000 );
        break;
        case 36:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1271.09900000, 109.55790000, 13.97950000, -1271.09900000, 112.05790000, 11.97950000, 8.50000000 );
        break;
        case 37:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1288.47900000, 47.42880000, 9.07910000, -1288.47900000, 50.42880000, 6.07910000, 4.50000000 );
        break;
        case 46:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1286.15800000, 15.74780000, 19.37920000, -1288.15800000, 15.74780000, 16.87920000, 3.50000000 );
        break;
        case 38:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1271.66500000, 49.72140000, 5.30650000, -1274.16500000, 49.72140000, 3.30650000, 3.00000000 );
        break;
        case 39:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1281.75000000, 52.09510000, 5.30650000, -1281.75000000, 49.59510000, 2.80650000, 3.00000000 );
        break;
        case 40:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1271.46200000, 55.82570000, 6.79990000, -1274.96200000, 55.82570000, 4.79990000, 5.00000000 );
        break;
        case 41:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1276.94000000, 61.67470000, 14.00000000, -1279.44000000, 61.67470000, 12.00000000, 4.50000000 );
        break;
        case 42:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1277.06000000, 72.60210000, 14.00000000, -1279.06000000, 72.60210000, 11.50000000, 4.50000000 );
        break;
        case 43:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1276.96100000, 86.97680000, 14.00000000, -1278.96100000, 86.97680000, 11.50000000, 4.50000000 );
        break;
        case 44:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1276.86100000, 104.11190000, 14.00000000, -1278.86100000, 104.11190000, 11.50000000, 4.50000000 );
        break;
        case 45:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1277.14100000, 115.50120000, 13.99990000, -1278.94100000, 115.50120000, 11.49990000, 2.00000000 );
        break;
        case 47:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1285.76100000, 33.53040000, 19.37910000, -1288.26100000, 33.53040000, 16.87910000, 3.50000000 );
        break;
        case 48:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1287.80700000, 43.76540000, 19.37910000, -1287.80700000, 41.26540000, 16.87910000, 5.00000000 );
        break;
        case 49:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1288.18600000, 47.27650000, 15.77900000, -1288.18600000, 49.77650000, 13.27900000, 5.00000000 );
        break;
        case 50:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1288.27400000, 44.22940000, 12.17900000, -1288.27400000, 41.72940000, 9.67900000, 5.00000000 );
        break;
        case 51:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1267.87000000, 55.38940000, 14.00000000, -1267.87000000, 53.88940000, 11.50000000, 3.00000000 );
        break;
        case 52:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1213.56800000, 101.40840000, 6.70640000, -1237.56000000, 102.04460000, 2.20640000, 14.00000000 );
        break;
        case 53:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1275.85800000, 6.44600000, 12.14880000, -1275.85800000, 3.44600000, 9.64880000, 3.00000000 );
        break;
        case 54:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1285.79600000, 16.47330000, 12.14920000, -1288.79600000, 16.47330000, 9.64920000, 3.00000000 );
        break;
        case 55:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1239.86300000, 3.48530000, 8.54900000, -1236.36300000, 3.48530000, 5.54900000, 5.00000000 );
        break;
        case 56:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1289.00000000, 41.73640000, 19.88410000, -1289.00000000, 43.23640000, 16.88410000, 2.50000000 );
        break;
        case 57:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1251.73200000, 72.44610000, 14.50520000, -1249.73200000, 72.44610000, 11.50520000, 3.50000000 );
        break;
        case 58:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1251.73200000, 86.79230000, 14.50520000, -1249.73200000, 86.79230000, 11.50520000, 3.50000000 );
        break;
        case 59:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 468.44520000, 1090.60300000, 13.36130000, 468.44520000, 1087.60300000, 10.86130000, 2.50000000 );
        break;
    }
    return;
}

void sub_60873()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int I;
    int Result;
    float fVar10;
    float fVar11;

    I = 0;
    Result = -1;
    fVar10 = 0.00000000;
    fVar11 = 1000.00000000;
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        GET_CHAR_COORDINATES( l_U2719, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        for ( I = 0; I <= 94; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U2424[I] )))
            {
                GET_CHAR_COORDINATES( l_U2424[I], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if ((ABSF( uVar5._fU8 - uVar2._fU8 )) < 1.00000000)
                {
                    sub_61091( ABSF( uVar5._fU8 - uVar2._fU8 ), "ABSF( vGangLoc.z - vBuddyLoc.z)...." );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar10 );
                    if (fVar10 < fVar11)
                    {
                        Result = I;
                        fVar11 = fVar10;
                    }
                }
            }
        }
    }
    if (Result > 1)
    {
        ;
    }
    return Result;
}

void sub_61091(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_61463()
{
    int I;
    int iVar3;
    float fVar4;

    switch (l_U3239)
    {
        case 0:
        sub_61556();
        break;
        case 1:
        sub_68842();
        SWITCH_GARBAGE_TRUCKS( 0 );
        CREATE_CAR( l_U892, -1239.52100000, 111.56960000, 3.79850000, ref l_U919, 1 );
        SET_CAR_HEADING( l_U919, 270.87860000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U919 );
        TURN_OFF_VEHICLE_EXTRA( l_U919, 2, 1 );
        CHANGE_CAR_COLOUR( l_U919, 0, 2 );
        SET_VEH_HAS_STRONG_AXLES( l_U919, 1 );
        CREATE_CAR( l_U893, -1239.08300000, 115.30760000, 3.15560000, ref l_U920, 1 );
        SET_CAR_HEADING( l_U920, 270.87860000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U920 );
        CHANGE_CAR_COLOUR( l_U920, 27, 27 );
        SET_VEH_HAS_STRONG_AXLES( l_U920, 1 );
        if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
        {
            sub_49852( ref l_U1107[52] );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2424[52] );
            SET_CHAR_DECISION_MAKER( l_U2424[52], l_U2714 );
            SET_CHAR_COORDINATES( l_U2424[52], -1245.15500000, 108.23460000, 3.15410000 );
            SET_CHAR_HEADING( l_U2424[52], 331.55950000 );
            ADD_BLIP_FOR_CHAR( l_U2424[52], ref l_U2616[52] );
        }
        else
        {
            CREATE_CHAR( 26, l_U891, -1245.15500000, 108.23460000, 3.15410000, ref l_U2424[52], 1 );
            SET_CHAR_HEADING( l_U2424[52], 331.55950000 );
            ADD_BLIP_FOR_CHAR( l_U2424[52], ref l_U2616[52] );
            SET_CHAR_DECISION_MAKER( l_U2424[52], l_U2714 );
            GIVE_WEAPON_TO_CHAR( l_U2424[52], 13, 3000, 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            WARP_CHAR_INTO_CAR( l_U2424[52], l_U918 );
            CLEAR_ROOM_FOR_CHAR( l_U2424[52] );
            LOCK_CAR_DOORS( l_U918, 2 );
        }
        PRINT_NOW( "FIN1A_07", 7500, 1 );
        l_U3316 = 1;
        l_U3239 = 3;
        break;
        case 2:
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) || (sub_28207( l_U3323 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
            {
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2520[52] );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U918, -2 );
                    CLOSE_SEQUENCE_TASK( l_U2520[52] );
                    CLEAR_SEQUENCE_TASK( l_U2520[52] );
                    l_U3239 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if (sub_54173())
            {
                SET_PED_IS_BLIND_RAGING( sub_3140(), 0 );
                START_PLAYBACK_RECORDED_CAR( l_U918, 475 );
                ENABLE_CHASE_AUDIO( 1 );
                l_U3350 = 1;
                l_U3239 = 5;
            }
        }
        else
        {
            l_U3239 = 6;
        }
        break;
        case 4:
        sub_71925();
        break;
        case 5:
        if (IS_VEH_DRIVEABLE( l_U918 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
            {
                fVar4 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
                if (fVar4 < 20000)
                {
                    l_U3486 = 0.90000000;
                }
                else
                {
                    l_U3486 = 1.00000000;
                }
                sub_75595( l_U918, sub_3140(), ref l_U3485, l_U3486, 1084227584, 1101004800, 1123680256, 1073741824, 1065353216, 1060320051, 1 );
                SET_PLAYBACK_SPEED( l_U918, l_U3485 );
                sub_78711( l_U918, l_U3485 );
            }
            else
            {
                for ( I = 0; I <= 94; I++ )
                {
                    if (I != 52)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[I] ))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2424[I] );
                        }
                    }
                }
                SET_PED_DENSITY_MULTIPLIER( 0.40000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                {
                    SET_CHAR_COMPONENT_VARIATION( l_U2424[52], 8, 0, 0 );
                    sub_95177( 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U2424[52], 0 );
                    SET_CHAR_PROOFS( l_U2424[52], 0, 0, 0, 0, 0 );
                    SET_CAR_PROOFS( l_U918, 0, 0, 0, 0, 0 );
                    LOCK_CAR_DOORS( l_U918, 1 );
                    TASK_CAR_DRIVE_WANDER( l_U2424[52], l_U918, 30.00000000, 2 );
                    SET_WANTED_MULTIPLIER( 0.20000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -1360.40000000, 43.50580000, 0.00000000, -1290.37400000, 248.48690000, 100.00000000 );
                    l_U3488 = 1;
                    l_U3239 = 6;
                }
            }
        }
        else if (NOT l_U3488)
        {
            l_U3488 = 1;
        }
        sub_95177( 0 );
        SET_WANTED_MULTIPLIER( 0.20000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -1360.40000000, 43.50580000, 0.00000000, -1290.37400000, 248.48690000, 100.00000000 );
        l_U3239 = 6;;
        break;
        case 6:
        if (IS_CHAR_DEAD( l_U2424[52] ))
        {
            sub_4063();
            GET_DEAD_CHAR_PICKUP_COORDS( l_U2424[52], ref l_U3342._fU0, ref l_U3342._fU4, ref l_U3342._fU8 );
            CREATE_OBJECT( -460143149, l_U3342._fU0, l_U3342._fU4, l_U3342._fU8, ref l_U3266, 1 );
            l_U3488 = 1;
            ADD_BLIP_FOR_OBJECT( l_U3266, ref l_U3341 );
            CHANGE_BLIP_COLOUR( l_U3341, 2 );
            REQUEST_ANIMS( "MISSPASS" );
            if (DOES_BLIP_EXIST( l_U2616[52] ))
            {
                REMOVE_BLIP( l_U2616[52] );
            }
            if (IS_CAR_DEAD( l_U918 ))
            {
                sub_95826();
            }
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            l_U3239 = 7;
        }
        else if (NOT l_U3487)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U918 )))
            {
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    if (IS_CHAR_IN_CAR( l_U2424[52], l_U918 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2520[52] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, sub_3140() );
                        CLOSE_SEQUENCE_TASK( l_U2520[52] );
                        SET_CHAR_DECISION_MAKER( l_U2424[52], l_U2715 );
                        SET_COMBAT_DECISION_MAKER( l_U2424[52], l_U2716 );
                        TASK_PERFORM_SEQUENCE( l_U2424[52], l_U2520[52] );
                        CLEAR_SEQUENCE_TASK( l_U2520[52] );
                        l_U3487 = 1;
                    }
                }
                else
                {
                    sub_95826();
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U2424[52] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2520[52] );
                TASK_COMBAT( 0, sub_3140() );
                CLOSE_SEQUENCE_TASK( l_U2520[52] );
                SET_CHAR_DECISION_MAKER( l_U2424[52], l_U2715 );
                SET_COMBAT_DECISION_MAKER( l_U2424[52], l_U2716 );
                TASK_PERFORM_SEQUENCE( l_U2424[52], l_U2520[52] );
                CLEAR_SEQUENCE_TASK( l_U2520[52] );
                l_U3487 = 1;
            }
            else if (IS_CHAR_IN_CAR( l_U2424[52], l_U918 ))
            {
                if (NOT l_U3490)
                {
                    GET_CAR_HEALTH( l_U918, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        SET_ENGINE_HEALTH( l_U918, 0 );
                        l_U3490 = 1;
                    }
                }
            };;;
        }
        break;
        case 7: break;
        case 8: break;
    }
    sub_96446( ref l_U2424[52] );
    if (l_U3265)
    {
        sub_97134();
        sub_98516();
        sub_100944();
        sub_102186();
    }
    if (l_U3488)
    {
        if (DOES_OBJECT_EXIST( l_U3266 ))
        {
            GET_OBJECT_COORDINATES( l_U3266, ref l_U3342._fU0, ref l_U3342._fU4, ref l_U3342._fU8 );
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3140(), l_U3342._fU0, l_U3342._fU4, l_U3342._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                ENABLE_CHASE_AUDIO( 0 );
                SET_DRAW_PLAYER_COMPONENT( 3, 1 );
                if (DOES_BLIP_EXIST( l_U3341 ))
                {
                    REMOVE_BLIP( l_U3341 );
                }
                if (DOES_OBJECT_EXIST( l_U3266 ))
                {
                    DELETE_OBJECT( ref l_U3266 );
                }
                l_U3319 = 1;
                l_U3488 = 0;
            }
        }
    }
    if (NOT l_U3489)
    {
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if (LOCATE_CAR_3D( l_U918, -920.58610000, 776.44260000, 0.02070000, 1.00000000, 10.00000000, 3.00000000, 0 ))
            {
                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U918, 1 );
                l_U3489 = 1;
            }
        }
    }
    sub_54173();
    return;
}

void sub_61556()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (l_U3261 > 0)
    {
        if (NOT l_U3263)
        {
            if (NOT sub_8926())
            {
                l_U3263 = 1;
            }
        }
        else if (((l_U3261 > 0) AND (NOT l_U3264)) AND (IS_SCREEN_FADED_IN()))
        {
            if (sub_8926())
            {
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                if (NOT l_U3265)
                {
                    l_U3265 = 1;
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U3264 = 1;
                l_U3261 = 2;
            }
        }
    }
    sub_61759( l_U3261, "target_flee_prog...." );
    switch (l_U3261)
    {
        case 0:
        sub_61939( "****************************************** START ***********************************" );
        l_U2423 = 1;
        l_U2422 = 0;
        CLEAR_PRINTS();
        REQUEST_ANIMS( "missfinale1a" );
        REQUEST_MODEL( -460143149 );
        while ((NOT (HAVE_ANIMS_LOADED( "missfinale1a" ))) || (NOT (HAS_MODEL_LOADED( -460143149 ))))
        {
            WAIT( 0 );
        }
        FORCE_WEATHER( 1 );
        LOAD_SCENE( -1278.33900000, 116.82950000, 12.00000000 );
        SET_PLAYER_CONTROL( sub_3651(), 0 );
        BEGIN_CAM_COMMANDS( ref l_U2730 );
        DISPLAY_RADAR( 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3140() )))
        {
            SET_CHAR_COORDINATES( sub_3140(), -1278.19100000, 92.34550000, 12.00020000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3140(), l_U493 );
            CLEAR_AREA_OF_CARS( -1278.19100000, 92.34550000, 12.00020000, 20.00000000 );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar4 );
            SET_CAR_COORDINATES( uVar4, -1275.63600000, 93.76280000, 12.00010000 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3140(), -1278.19100000, 92.34550000, 12.00020000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3140(), l_U493 );
        }
        REMOVE_PLAYER_HELMET( sub_3651(), 1 );
        SET_CHAR_HEADING( sub_3140(), 0.00000000 );
        SET_USE_HIGHDOF( 1 );
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            UNLOCK_RAGDOLL( l_U2719, 1 );
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
            }
            if (DOES_BLIP_EXIST( l_U2721 ))
            {
                REMOVE_BLIP( l_U2721 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
            SET_CHAR_COORDINATES( l_U2719, -1278.09700000, 116.28920000, 12.00520000 );
            SET_CHAR_HEADING( l_U2719, 270.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U2719, l_U493 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );
        sub_9968( 19 );
        SET_CHAR_COMPONENT_VARIATION( sub_3140(), 3, 1, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2424[52], "searchped_loop", "missfinale1a", 8.00000000, 1, 0, 0, 0, 0 );
        SET_CHAR_COORDINATES( l_U2424[52], -1267.68500000, 112.31860000, 11.97930000 );
        SET_CHAR_HEADING( l_U2424[52], 155.83290000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U2424[52], l_U493 );
        SET_PED_IS_BLIND_RAGING( sub_3140(), 0 );
        CREATE_CAM( 14, ref l_U2731[19] );
        CREATE_CAM( 14, ref l_U2731[20] );
        CREATE_CAM( 3, ref l_U2731[21] );
        CREATE_CAM( 14, ref l_U2731[22] );
        CREATE_CAM( 14, ref l_U2731[23] );
        CREATE_CAM( 14, ref l_U2731[24] );
        CREATE_CAM( 14, ref l_U2731[25] );
        CREATE_CAM( 14, ref l_U2731[26] );
        CREATE_CAM( 3, ref l_U2731[27] );
        CREATE_CAM( 14, ref l_U2731[28] );
        SET_CAM_POS( l_U2731[19], -1266.98000000, 112.67630000, 13.55569000 );
        SET_CAM_ROT( l_U2731[19], 1.68982100, 0.00000000, 141.21230000 );
        SET_CAM_ACTIVE( l_U2731[19], 0 );
        SET_CAM_PROPAGATE( l_U2731[19], 0 );
        SET_CAM_FOV( l_U2731[19], 41.00000000 );
        SET_CAM_POS( l_U2731[20], -1266.98000000, 112.67630000, 13.55569000 );
        SET_CAM_ROT( l_U2731[20], 1.68982100, 0.00000000, 141.21230000 );
        SET_CAM_ACTIVE( l_U2731[20], 0 );
        SET_CAM_PROPAGATE( l_U2731[20], 0 );
        SET_CAM_FOV( l_U2731[20], 35.00000000 );
        SET_CAM_ACTIVE( l_U2731[21], 0 );
        SET_CAM_PROPAGATE( l_U2731[21], 0 );
        SET_CAM_POS( l_U2731[22], -1278.13500000, 118.46240000, 13.80863000 );
        SET_CAM_ROT( l_U2731[22], -9.44646500, -0.00000000, -171.49400000 );
        SET_CAM_ACTIVE( l_U2731[22], 1 );
        SET_CAM_PROPAGATE( l_U2731[22], 1 );
        SET_CAM_FOV( l_U2731[22], 35.00000000 );
        SET_CAM_NEAR_DOF( l_U2731[22], 0.50000000 );
        SET_CAM_FAR_DOF( l_U2731[22], 4.00000000 );
        SET_CAM_POS( l_U2731[23], -1267.26600000, 111.76930000, 12.46744000 );
        SET_CAM_ROT( l_U2731[23], 10.00008000, 0.00000000, 57.22421000 );
        SET_CAM_ACTIVE( l_U2731[23], 0 );
        SET_CAM_PROPAGATE( l_U2731[23], 0 );
        SET_CAM_FOV( l_U2731[23], 44.40000000 );
        SET_CAM_NEAR_DOF( l_U2731[23], 0.50000000 );
        SET_CAM_FAR_DOF( l_U2731[23], 4.00000000 );
        SET_CAM_POS( l_U2731[24], -1278.76900000, 113.73330000, 12.26140000 );
        SET_CAM_ROT( l_U2731[24], 15.99289000, 0.00000000, -36.68760000 );
        SET_CAM_ACTIVE( l_U2731[24], 0 );
        SET_CAM_PROPAGATE( l_U2731[24], 0 );
        SET_CAM_FOV( l_U2731[24], 55.00000000 );
        SET_CAM_NEAR_DOF( l_U2731[24], 0.50000000 );
        SET_CAM_FAR_DOF( l_U2731[24], 4.00000000 );
        SET_CAM_POS( l_U2731[25], -1279.38600000, 116.54550000, 13.71406000 );
        SET_CAM_ROT( l_U2731[25], -2.83665400, 0.00000000, -90.71153000 );
        SET_CAM_ACTIVE( l_U2731[25], 0 );
        SET_CAM_PROPAGATE( l_U2731[25], 0 );
        SET_CAM_FOV( l_U2731[25], 35.10000000 );
        SET_CAM_NEAR_DOF( l_U2731[25], 10.00000000 );
        SET_CAM_FAR_DOF( l_U2731[25], 15.00000000 );
        SET_CAM_POS( l_U2731[26], -1279.38600000, 116.54550000, 13.71406000 );
        SET_CAM_ROT( l_U2731[26], -2.83665400, 0.00000000, -90.71153000 );
        SET_CAM_ACTIVE( l_U2731[26], 0 );
        SET_CAM_PROPAGATE( l_U2731[26], 0 );
        SET_CAM_FOV( l_U2731[26], 26.50000000 );
        SET_CAM_NEAR_DOF( l_U2731[26], 10.00000000 );
        SET_CAM_FAR_DOF( l_U2731[26], 15.00000000 );
        SET_CAM_ACTIVE( l_U2731[27], 0 );
        SET_CAM_PROPAGATE( l_U2731[27], 0 );
        SET_CAM_POS( l_U2731[28], -1264.75200000, 112.19410000, 19.76196000 );
        SET_CAM_ROT( l_U2731[28], -48.53447000, -0.00000000, -91.99676000 );
        SET_CAM_ACTIVE( l_U2731[28], 0 );
        SET_CAM_PROPAGATE( l_U2731[28], 0 );
        SET_CAM_FOV( l_U2731[28], 30.60004000 );
        OPEN_SEQUENCE_TASK( ref l_U1106 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1278.59700000, 111.91810000, 12.00000000, 3, -2, 0.50000000 );
        CLOSE_SEQUENCE_TASK( l_U1106 );
        TASK_PERFORM_SEQUENCE( sub_3140(), l_U1106 );
        CLEAR_SEQUENCE_TASK( l_U1106 );
        CREATE_OBJECT( -460143149, -1268.78300000, 112.95500000, 11.97930000, ref l_U3266, 1 );
        SET_OBJECT_HEADING( l_U3266, 90.00000000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3266, l_U493 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U3269 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U3269, l_U493 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U2723 = 0;
        l_U3261 = 5;
        GET_GAME_TIMER( ref l_U2763 );
        break;
        case 1: break;
        case 5:
        GET_GAME_TIMER( ref l_U2764 );
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U2723)
            {
                SET_DRAW_PLAYER_COMPONENT( 3, 0 );
                SET_CHAR_COORDINATES( l_U2719, -1278.09700000, 116.28920000, 12.00520000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2719, l_U493 );
                TASK_PLAY_ANIM_WITH_FLAGS( l_U2719, "plyr_shldropen", "missfinale1a", 8.00000000, 0, 64 );
                DO_SCREEN_FADE_IN( 500 );
                sub_61091( fVar2, "fTempAnimTime before fTempAnimTime...." );
                if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                {
                    SET_CHAR_COORDINATES( l_U2424[52], -1268.06900000, 112.97330000, 11.97930000 );
                    SET_CHAR_HEADING( l_U2424[52], 90.76440000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U2424[52], l_U493 );
                }
                l_U2723 = 1;
            }
            else if (IS_CHAR_PLAYING_ANIM( l_U2719, "missfinale1a", "plyr_shldropen" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U2719, "missfinale1a", "plyr_shldropen", ref fVar2 );
                if (((fVar2 >= 0.30000000) AND (fVar2 < 0.32000000)) || ((fVar2 >= 0.47000000) AND (fVar2 < 0.49000000)))
                {
                    if ((fVar2 >= 0.30000000) AND (fVar2 < 0.32000000))
                    {
                        sub_61091( fVar2, "Moving door open FIRST TIME because fTempAnimTime is...." );
                        l_U3267 = 1;
                    }
                    if ((fVar2 >= 0.47000000) AND (fVar2 < 0.49000000))
                    {
                        if (NOT l_U3267)
                        {
                            ;
                        }
                        sub_61091( fVar2, "Moving door open SECOND TIME because fTempAnimTime is...." );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00800000 );
                }
                else if (fVar2 >= 0.57000000)
                {
                    sub_61091( fVar2, "cutting cam because fTempAnimTime is...." );
                    l_U1107[52]._fU8 = 0;
                    SET_CAM_ACTIVE( l_U2731[23], 1 );
                    SET_CAM_PROPAGATE( l_U2731[23], 1 );
                    SET_CAM_ACTIVE( l_U2731[22], 0 );
                    SET_CAM_PROPAGATE( l_U2731[22], 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                    SET_CHAR_COORDINATES( l_U2719, -1278.09700000, 116.28920000, 12.00520000 );
                    SET_CHAR_HEADING( l_U2719, 270.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U2719, l_U493 );
                    GET_GAME_TIMER( ref l_U2763 );
                    l_U2723 = 0;
                    l_U3261 = 3;
                }
                sub_61091( fVar2, "Closing door because fTempAnimTime is...." );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );;
            }
            else
            {
                sub_61939( "Not playing anim...." );
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U2764 );
        if ((((l_U2764 - l_U2763) > 500) AND ((l_U2764 - l_U2763) < 700)) || (((l_U2764 - l_U2763) > 2000) AND ((l_U2764 - l_U2763) < 2200)))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.01500000 );
        }
        else
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );
        }
        if ((l_U2764 - l_U2763) > 2000)
        {
            if (NOT l_U1107[52]._fU8)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1265.00000000, 117.00000000, 13.00000000, 1, -1.00000000 );
                l_U1107[52]._fU8 = 1;
            }
        }
        if ((l_U2764 - l_U2763) > 2000)
        {
            SET_CAM_ACTIVE( l_U2731[24], 1 );
            SET_CAM_PROPAGATE( l_U2731[24], 1 );
            SET_CAM_ACTIVE( l_U2731[23], 0 );
            SET_CAM_PROPAGATE( l_U2731[23], 0 );
            DELETE_OBJECT( ref l_U3266 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1258.17900000, 116.17160000, 12.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1254.52100000, 109.12470000, 1.25430000, 3, -2, 0.50000000 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
            {
                SET_CHAR_COMPONENT_VARIATION( l_U2424[52], 8, 4, 0 );
                TASK_PERFORM_SEQUENCE( l_U2424[52], uVar3 );
            }
            CLEAR_SEQUENCE_TASK( uVar3 );
            GET_GAME_TIMER( ref l_U2763 );
            l_U3261 = 6;
        }
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U2723)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2719, "plyr_shldropen", "missfinale1a", 8.00000000, 0, 0, 0, 1, 0 );
                l_U2723 = 1;
            }
            else if (IS_CHAR_PLAYING_ANIM( l_U2719, "missfinale1a", "plyr_shldropen" ))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U2719, "missfinale1a", "plyr_shldropen", 0.38000000 );
            }
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) < 60000)
        {
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U2719, "missfinale1a", "plyr_shldropen" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U2719, "missfinale1a", "plyr_shldropen", ref fVar2 );
                    if (fVar2 >= 0.80000000)
                    {
                        if (NOT (IS_CAM_ACTIVE( l_U2731[25] )))
                        {
                            SET_CAM_ACTIVE( l_U2731[25], 1 );
                            SET_CAM_PROPAGATE( l_U2731[25], 1 );
                            SET_CAM_ACTIVE( l_U2731[24], 0 );
                            SET_CAM_PROPAGATE( l_U2731[24], 0 );
                        }
                        if (sub_66261( 0.25000000 ))
                        {
                            SET_CAM_ACTIVE( l_U2731[25], 0 );
                            SET_CAM_PROPAGATE( l_U2731[25], 0 );
                            SET_CAM_ACTIVE( l_U2731[26], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U2731[27], l_U2731[25], l_U2731[26], 8000, 0 );
                            SET_CAM_ACTIVE( l_U2731[27], 1 );
                            SET_CAM_PROPAGATE( l_U2731[27], 1 );
                            GET_GAME_TIMER( ref l_U2763 );
                            l_U3261 = 4;
                        }
                    }
                    else if ((fVar2 >= 0.47000000) AND (fVar2 < 0.49000000))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00800000 );
                    }
                    else
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );
                    }
                }
            }
        }
        else
        {
            l_U3261 = 4;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U2764 );
        if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U2424[52], -1254.56500000, 111.01290000, 10.30340000, 1.00000000, 1.00000000, 1.00000000, 0 )) || ((l_U2764 - l_U2763) > 800))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2424[52] );
                SET_CHAR_COORDINATES( l_U2424[52], -1261.58100000, 116.43000000, 12.00500000 );
                SET_CHAR_HEADING( l_U2424[52], 270.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2424[52], l_U493 );
                OPEN_SEQUENCE_TASK( ref l_U2520[52] );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "escaperun", "missFinale1a", 8.00000000, 0, 1, 1, 0, 0 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "escapedownstairs", "missFinale1a", 8.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U2520[52] );
                TASK_PERFORM_SEQUENCE( l_U2424[52], l_U2520[52] );
                CLEAR_SEQUENCE_TASK( l_U2520[52] );
                SET_CAM_ACTIVE( l_U2731[28], 1 );
                SET_CAM_PROPAGATE( l_U2731[28], 1 );
                SET_CAM_ACTIVE( l_U2731[27], 0 );
                SET_CAM_PROPAGATE( l_U2731[27], 0 );
                SET_CAM_ACTIVE( l_U2731[26], 0 );
                SET_CAM_PROPAGATE( l_U2731[26], 0 );
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                    SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                    SET_CHAR_COORDINATES( l_U2719, -1272.68700000, 113.34060000, 11.97940000 );
                    SET_CHAR_HEADING( l_U2719, 324.44420000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U2719, l_U493 );
                    GIVE_WEAPON_TO_CHAR( l_U2719, 13, 3000, 0 );
                }
                GET_GAME_TIMER( ref l_U2763 );
                l_U3261 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2764 );
        if (NOT l_U3265)
        {
            l_U3265 = 1;
        }
        if (((l_U2764 - l_U2763) > 6000) || (l_U3264))
        {
            SET_CHAR_COORDINATES( sub_3140(), -1272.72400000, 115.61640000, 11.98430000 );
            SET_CHAR_HEADING( sub_3140(), 275.83870000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3140(), l_U493 );
            if (l_U3264)
            {
                if (DOES_OBJECT_EXIST( l_U3266 ))
                {
                    DELETE_OBJECT( ref l_U3266 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                {
                    CLEAR_AREA( -1231.95100000, 103.68800000, 3.16700000, 10.00000000, 1 );
                    SET_CHAR_COORDINATES( l_U2424[52], -1231.95100000, 103.68800000, 3.16700000 );
                    CLEAR_ROOM_FOR_CHAR( l_U2424[52] );
                }
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                    SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                    SET_CHAR_COORDINATES( l_U2719, -1272.68700000, 113.34060000, 11.97940000 );
                    SET_CHAR_HEADING( l_U2719, 324.44420000 );
                    GIVE_WEAPON_TO_CHAR( l_U2719, 13, 3000, 0 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U2719, l_U493 );
                }
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                }
                STOP_PED_SPEAKING( l_U2719, 1 );
            }
            SET_CAM_ACTIVE( l_U2731[19], 0 );
            SET_CAM_PROPAGATE( l_U2731[19], 0 );
            SET_CAM_ACTIVE( l_U2731[20], 0 );
            SET_CAM_PROPAGATE( l_U2731[20], 0 );
            SET_CAM_ACTIVE( l_U2731[21], 0 );
            SET_CAM_PROPAGATE( l_U2731[21], 0 );
            SET_CAM_ACTIVE( l_U2731[22], 0 );
            SET_CAM_PROPAGATE( l_U2731[22], 0 );
            SET_CAM_ACTIVE( l_U2731[23], 0 );
            SET_CAM_PROPAGATE( l_U2731[23], 0 );
            SET_CAM_ACTIVE( l_U2731[24], 0 );
            SET_CAM_PROPAGATE( l_U2731[24], 0 );
            SET_CAM_ACTIVE( l_U2731[25], 0 );
            SET_CAM_PROPAGATE( l_U2731[25], 0 );
            SET_CAM_ACTIVE( l_U2731[26], 0 );
            SET_CAM_PROPAGATE( l_U2731[26], 0 );
            SET_CAM_ACTIVE( l_U2731[27], 0 );
            SET_CAM_PROPAGATE( l_U2731[27], 0 );
            SET_CAM_ACTIVE( l_U2731[28], 0 );
            SET_CAM_PROPAGATE( l_U2731[28], 0 );
            DESTROY_CAM( l_U2731[21] );
            DESTROY_CAM( l_U2731[19] );
            DESTROY_CAM( l_U2731[20] );
            DESTROY_CAM( l_U2731[22] );
            DESTROY_CAM( l_U2731[23] );
            DESTROY_CAM( l_U2731[24] );
            DESTROY_CAM( l_U2731[27] );
            DESTROY_CAM( l_U2731[25] );
            DESTROY_CAM( l_U2731[26] );
            DESTROY_CAM( l_U2731[28] );
            SET_USE_HIGHDOF( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref uVar5 );
            GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar5, ref uVar6 );
            SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar5, uVar6 );
            END_CAM_COMMANDS( ref l_U2730 );
            DISPLAY_RADAR( 1 );
            if (l_U3264)
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            SET_PLAYER_CONTROL( sub_3651(), 1 );
            if (NOT (IS_CAR_DEAD( l_U914[0] )))
            {
                LOCK_CAR_DOORS( l_U914[0], 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U914[1] )))
            {
                LOCK_CAR_DOORS( l_U914[1], 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U914[2] )))
            {
                LOCK_CAR_DOORS( l_U914[2], 1 );
            }
            l_U2423 = 0;
            l_U3262 = 4;
            l_U3239 = 1;
            l_U3261 = 7;
            l_U2840 = 0;
            sub_61939( "****************************************** FINISHED ***********************************" );
        }
        break;
        case 7:
        l_U2423 = 0;
        break;
    }
    sub_68600();
    return;
}

void sub_61759(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_61939(unknown uParam0)
{
    return;
}

int sub_66261(unknown uParam0)
{
    if (NOT l_U3210[0])
    {
        if (l_U3209 <= 1.00000000)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, l_U3209 );
            l_U3209 += uParam0;
        }
        else
        {
            l_U3210[0] = 1;
        }
    }
    if (l_U3210[0])
    {
        l_U3209 = 0.00000000;
        l_U3210[0] = 0;
        return 1;
    }
    return 0;
}

void sub_68600()
{
    if (NOT l_U3260)
    {
        GET_GAME_TIMER( ref l_U3257 );
        GENERATE_RANDOM_INT_IN_RANGE( 500, 3001, ref l_U3259 );
        l_U3260 = 1;
    }
    else
    {
        GET_GAME_TIMER( ref l_U3258 );
        if ((l_U3258 - l_U3257) > l_U3259)
        {
            sub_61939( "About to play gunshot audio......" );
            PLAY_SOUND_FROM_POSITION( -1, "FIN1A_PRICE_IS_RIGHT_GUNFIRE", -1272.31400000, 61.91560000, 1.26190000 );
            sub_61939( "Playing gunshot...." );
            l_U3260 = 0;
        }
    }
    return;
}

void sub_68842()
{
    sub_9968( 21 );
    REQUEST_CAR_RECORDING( 475 );
    REQUEST_MODEL( l_U892 );
    while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 475 ))) || (NOT (HAS_MODEL_LOADED( l_U892 ))))
    {
        WAIT( 0 );
    }
    sub_68924( 1, 1 );
    l_U782[0] = {-1198.20800000, 414.06370000, 4.40260000};
    l_U565[0] = -0.00270000;
    l_U581[0] = -0.00480000;
    l_U597[0] = 0.72330000;
    l_U613[0] = 0.69050000;
    l_U703[0] = 476;
    l_U629[0] = 5280.00000000;
    l_U645[0] = 1.00000000;
    l_U758[0] = -1987130134;
    l_U782[1] = {-1103.14400000, 402.53230000, 4.39650000};
    l_U565[1] = 0.00990000;
    l_U581[1] = 0.00180000;
    l_U597[1] = 0.73370000;
    l_U613[1] = 0.67940000;
    l_U703[1] = 477;
    l_U629[1] = 0.00000000;
    l_U645[1] = 1.00000000;
    l_U758[1] = 1491375716;
    l_U782[2] = {-964.41670000, 325.16810000, 4.41220000};
    l_U565[2] = -0.00010000;
    l_U581[2] = -0.00410000;
    l_U597[2] = 0.99990000;
    l_U613[2] = 0.01130000;
    l_U703[2] = 487;
    l_U629[2] = 18000.00000000;
    l_U645[2] = 0.97000000;
    l_U758[2] = -1987130134;
    l_U782[3] = {-1124.03600000, 146.01810000, 4.20850000};
    l_U565[3] = 0.00050000;
    l_U581[3] = -0.00010000;
    l_U597[3] = 0.00150000;
    l_U613[3] = 1.00000000;
    l_U703[3] = 488;
    l_U629[3] = 55000.00000000;
    l_U645[3] = 1.00000000;
    l_U758[3] = -1099960214;
    l_U782[4] = {-1256.21300000, -16.73530000, 5.89030000};
    l_U565[4] = 0.00220000;
    l_U581[4] = -0.00250000;
    l_U597[4] = 0.71560000;
    l_U613[4] = -0.69850000;
    l_U703[4] = 489;
    l_U629[4] = 72000.00000000;
    l_U645[4] = 1.00000000;
    l_U758[4] = 1353720154;
    l_U782[5] = {-1289.93400000, -24.19460000, 5.71200000};
    l_U565[5] = 0.01120000;
    l_U581[5] = 0.01940000;
    l_U597[5] = -0.07520000;
    l_U613[5] = 0.99690000;
    l_U703[5] = 490;
    l_U629[5] = 76000.00000000;
    l_U645[5] = 1.00000000;
    l_U758[5] = 1491375716;
    l_U782[6] = {-1237.25800000, 383.43580000, 4.01290000};
    l_U565[6] = -0.00250000;
    l_U581[6] = 0.00250000;
    l_U597[6] = -0.70380000;
    l_U613[6] = 0.71040000;
    l_U703[6] = 491;
    l_U629[6] = 0.00000000;
    l_U645[6] = 1.00000000;
    l_U758[6] = 1353720154;
    l_U782[7] = {-1256.81300000, -24.48700000, 5.88580000};
    l_U565[7] = -0.00430000;
    l_U581[7] = 0.00030000;
    l_U597[7] = -0.70090000;
    l_U613[7] = 0.71320000;
    l_U703[7] = 492;
    l_U629[7] = 67000.00000000;
    l_U645[7] = 1.00000000;
    l_U758[7] = 1353720154;
    return;
}

void sub_68924(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U513 = 1;
    l_U523 = 0;
    l_U737 = 0;
    l_U738 = 0;
    l_U739 = 0;
    l_U740 = 0;
    l_U741 = 1;
    l_U742 = 0;
    l_U743 = 0;
    l_U744 = 0;
    l_U745 = 0;
    l_U746 = -1;
    l_U747 = 0;
    l_U748 = 0;
    l_U749 = 0;
    l_U750 = 0;
    l_U679 = 0.00000000;
    l_U526 = 0;
    if (IS_PLAYER_PLAYING( sub_3651() ))
    {
        GET_CHAR_COORDINATES( sub_3140(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U834._fU0 = uVar4._fU0 - 100.00000000;
        l_U834._fU4 = uVar4._fU4 - 100.00000000;
        l_U834._fU8 = uVar4._fU8 - 100.00000000;
        l_U837._fU0 = uVar4._fU0 + 100.00000000;
        l_U837._fU4 = uVar4._fU4 + 100.00000000;
        l_U837._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U834._fU0, l_U834._fU4, l_U834._fU8, l_U837._fU0, l_U837._fU4, l_U837._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_69265();
    l_U525 = 0;
    if (IS_PLAYER_PLAYING( sub_3651() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3651(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_69443();
    return;
}

void sub_69265()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_69443()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        l_U846[I] = nil;
        l_U774[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U551[I] = 0.00000000;
        l_U553[I] = 0.00000000;
        l_U555[I] = 0.00000000;
        l_U557[I] = 0.00000000;
        l_U699[I] = 0;
        l_U559[I] = 0.00000000;
        l_U701[I] = 0;
        l_U754[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U848[I] = nil;
    }
    l_U745 = 0;
    l_U737 = 0;
    l_U738 = 0;
    for ( I = 0; I < 1; I++ )
    {
        l_U855[I] = nil;
        l_U778[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U661[I] = 0.00000000;
        l_U663[I] = 0.00000000;
        l_U665[I] = 0.00000000;
        l_U667[I] = 0.00000000;
        l_U735[I] = 0;
        l_U756[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U873[I] = nil;
    }
    l_U744 = 0;
    l_U740 = 0;
    for ( I = 0; I < 15; I++ )
    {
        l_U857[I] = nil;
        l_U782[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U565[I] = 0.00000000;
        l_U581[I] = 0.00000000;
        l_U597[I] = 0.00000000;
        l_U613[I] = 0.00000000;
        l_U703[I] = 0;
        l_U629[I] = 0.00000000;
        l_U719[I] = 0;
        l_U758[I] = 0;
    }
    l_U739 = 0;
    l_U747 = 0;
    l_U751 = 0;
    l_U752 = 0;
    l_U753 = 0;
    return;
}

void sub_71925()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U3240 > 0)
    {
        if (NOT l_U3249)
        {
            if (NOT sub_8926())
            {
                l_U3249 = 1;
            }
        }
        else if (((l_U3240 > 0) AND (NOT l_U3250)) AND (IS_SCREEN_FADED_IN()))
        {
            if (sub_8926())
            {
                CLEAR_PRINTS();
                sub_9099( ref l_U3251, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U3250 = 1;
                l_U3240 = 2;
            }
        }
    }
    switch (l_U3240)
    {
        case 0:
        if (sub_72163( 1, 1 ))
        {
            if (sub_9337())
            {
                l_U3245 = 1;
                SET_PLAYER_CONTROL( sub_3651(), 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                LOAD_SCENE( -1247.87200000, 103.00830000, 2.26510000 );
                if (DOES_OBJECT_EXIST( l_U890 ))
                {
                    SET_OBJECT_COORDINATES( l_U890, l_U3216._fU0, l_U3216._fU4, l_U3216._fU8 );
                }
                ADD_SCENARIO_BLOCKING_AREA( -1302.90000000, -194.94270000, 0.00000000, -910.59520000, 479.04860000, 100.00000000 );
                CLEAR_AREA( -1247.87200000, 103.00830000, 2.26510000, 20.00000000, 1 );
                if (DOES_VEHICLE_EXIST( l_U914[0] ))
                {
                    if (NOT (IS_CAR_DEAD( l_U914[0] )))
                    {
                        GET_CAR_COORDINATES( l_U914[0], ref l_U3241._fU0, ref l_U3241._fU4, ref l_U3241._fU8 );
                        GET_CAR_HEADING( l_U914[0], ref l_U3244 );
                        CLEAR_AREA( -1259.96900000, 59.13110000, 1.26400000, 30.00000000, 1 );
                        SET_CAR_COORDINATES( l_U914[0], -1259.96900000, 59.13110000, 1.26400000 );
                        SET_CAR_HEADING( l_U914[0], 0.00000000 );
                        l_U3246 = 1;
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U2719 );
                    }
                    if (DOES_BLIP_EXIST( l_U2721 ))
                    {
                        REMOVE_BLIP( l_U2721 );
                    }
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                    SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                    SET_CHAR_COORDINATES( l_U2719, -1250.16600000, 101.13490000, 1.26010000 );
                    SET_CHAR_HEADING( l_U2719, 270.00000000 );
                    TASK_TOGGLE_DUCK( l_U2719, 1 );
                    SET_CURRENT_CHAR_WEAPON( l_U2719, 15, 0 );
                }
                SET_CHAR_COORDINATES( sub_3140(), -1248.55000000, 102.43230000, 1.26010000 );
                SET_CHAR_HEADING( sub_3140(), 270.00000000 );
                TASK_TOGGLE_DUCK( sub_3140(), 1 );
                BEGIN_CAM_COMMANDS( ref l_U2730 );
                DISPLAY_RADAR( 0 );
                CREATE_CAM( 14, ref l_U2731[12] );
                CREATE_CAM( 14, ref l_U2731[13] );
                CREATE_CAM( 3, ref l_U2731[14] );
                CREATE_CAM( 14, ref l_U2731[15] );
                CREATE_CAM( 14, ref l_U2731[16] );
                CREATE_CAM( 14, ref l_U2731[17] );
                CREATE_CAM( 3, ref l_U2731[18] );
                SET_CAM_POS( l_U2731[12], -1252.40300000, 101.61530000, 1.53868000 );
                SET_CAM_ROT( l_U2731[12], 4.72896500, -0.00000000, -93.59084000 );
                SET_CAM_ACTIVE( l_U2731[12], 1 );
                SET_CAM_PROPAGATE( l_U2731[12], 1 );
                SET_CAM_FOV( l_U2731[12], 35.00000000 );
                SET_CAM_POS( l_U2731[13], -1236.53900000, 101.48190000, 2.96782000 );
                SET_CAM_ROT( l_U2731[13], 7.22471200, -0.00000000, -90.27698000 );
                SET_CAM_ACTIVE( l_U2731[13], 1 );
                SET_CAM_PROPAGATE( l_U2731[13], 0 );
                SET_CAM_FOV( l_U2731[13], 35.00000000 );
                SET_CAM_ACTIVE( l_U2731[14], 0 );
                SET_CAM_PROPAGATE( l_U2731[14], 0 );
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    CLEAR_AREA( -1232.27400000, 121.03080000, 4.43400000, 50.00000000, 1 );
                    ATTACH_CAM_TO_VEHICLE( l_U2731[15], l_U918 );
                    POINT_CAM_AT_VEHICLE( l_U2731[15], l_U918 );
                    SET_CAM_ATTACH_OFFSET( l_U2731[15], -2.10000000, -0.10000000, -1.00000000 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[15], 1 );
                    SET_CAM_POINT_OFFSET( l_U2731[15], 0.00000000, -8.40000000, 0.20000000 );
                    SET_CAM_ACTIVE( l_U2731[15], 0 );
                    SET_CAM_FOV( l_U2731[15], 35.00000000 );
                    SET_CAM_PROPAGATE( l_U2731[15], 0 );
                }
                ATTACH_CAM_TO_PED( l_U2731[16], sub_3140() );
                POINT_CAM_AT_PED( l_U2731[16], sub_3140() );
                SET_CAM_ATTACH_OFFSET( l_U2731[16], -0.30000000, 1.00000000, 0.20000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[16], 1 );
                SET_CAM_POINT_OFFSET( l_U2731[16], 0.00000000, 0.00000000, 0.50000000 );
                SET_CAM_ACTIVE( l_U2731[16], 0 );
                SET_CAM_PROPAGATE( l_U2731[16], 0 );
                SET_CAM_FOV( l_U2731[16], 35.00000000 );
                ATTACH_CAM_TO_PED( l_U2731[17], sub_3140() );
                POINT_CAM_AT_PED( l_U2731[17], sub_3140() );
                SET_CAM_ATTACH_OFFSET( l_U2731[17], 0.80000000, 1.00000000, 0.20000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2731[17], 1 );
                SET_CAM_POINT_OFFSET( l_U2731[17], 0.00000000, 0.00000000, 0.50000000 );
                SET_CAM_ACTIVE( l_U2731[17], 0 );
                SET_CAM_PROPAGATE( l_U2731[17], 0 );
                SET_CAM_FOV( l_U2731[17], 35.00000000 );
                SET_CAM_ACTIVE( l_U2731[18], 0 );
                SET_CAM_PROPAGATE( l_U2731[18], 0 );
                OPEN_SEQUENCE_TASK( ref l_U1106 );
                TASK_TOGGLE_DUCK( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1233.59300000, 102.43230000, 3.08270000, 3, -2, 0.50000000 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_ACHIEVE_HEADING( 0, 0.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1106 );
                TASK_PERFORM_SEQUENCE( sub_3140(), l_U1106 );
                CLEAR_SEQUENCE_TASK( l_U1106 );
                OPEN_SEQUENCE_TASK( ref l_U2720 );
                TASK_TOGGLE_DUCK( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1232.43500000, 100.95320000, 3.10680000, 3, -2, 0.50000000 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_ACHIEVE_HEADING( 0, 0.00000000 );
                CLOSE_SEQUENCE_TASK( l_U2720 );
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                }
                CLEAR_SEQUENCE_TASK( l_U2720 );
                GET_GAME_TIMER( ref l_U2763 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U3240 = 1;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2764 );
        GET_SCRIPT_TASK_STATUS( sub_3140(), 29, ref uVar2 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1245.85700000, 102.05870000, 2.44210000, 2.00000000, 4.00000000, 2.00000000, 0 ))
        {
            DO_SCREEN_FADE_IN( 500 );
            SET_CAM_ACTIVE( l_U2731[12], 0 );
            SET_CAM_PROPAGATE( l_U2731[12], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2731[14], l_U2731[12], l_U2731[13], 7000, 0 );
            SET_CAM_COMPONENT_SHAKE( l_U2731[14], 0, 3, 7000, 0.05100000, 0.90000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2731[14], 1, 3, 7000, 0.05100000, 0.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2731[14], 3, 3, 7000, 0.01500000, 0.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2731[14], 4, 3, 7000, 0.01500000, 0.80000000, 0.00000000 );
            SET_CAM_ACTIVE( l_U2731[14], 1 );
            SET_CAM_PROPAGATE( l_U2731[14], 1 );
            GET_GAME_TIMER( ref l_U2763 );
            l_U3240 = 3;
        }
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1234.61500000, 100.97210000, 3.99060000, 1.00000000, 5.00000000, 2.00000000, 0 ))
        {
            SET_CAM_ACTIVE( l_U2731[15], 1 );
            SET_CAM_PROPAGATE( l_U2731[15], 1 );
            SET_CAM_ACTIVE( l_U2731[14], 0 );
            SET_CAM_PROPAGATE( l_U2731[14], 0 );
            SET_CAM_ACTIVE( l_U2731[13], 0 );
            SET_CAM_PROPAGATE( l_U2731[13], 0 );
            GET_GAME_TIMER( ref l_U2763 );
            l_U3240 = 4;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) > 1000)
        {
            if (NOT (IS_CAR_DEAD( l_U918 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U918, 475 );
                GET_GAME_TIMER( ref l_U2763 );
                l_U3240 = 5;
            }
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) > 2500)
        {
            SET_CAM_ACTIVE( l_U2731[16], 1 );
            SET_CAM_PROPAGATE( l_U2731[16], 1 );
            SET_CAM_ACTIVE( l_U2731[17], 1 );
            SET_CAM_PROPAGATE( l_U2731[17], 0 );
            SET_CAM_ACTIVE( l_U2731[15], 0 );
            SET_CAM_PROPAGATE( l_U2731[15], 0 );
            GET_GAME_TIMER( ref l_U2763 );
            l_U3240 = 6;
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U2764 );
        if ((l_U2764 - l_U2763) > 100)
        {
            SET_CAM_ACTIVE( l_U2731[16], 0 );
            SET_CAM_PROPAGATE( l_U2731[16], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2731[18], l_U2731[16], l_U2731[17], 5000, 0 );
            SET_CAM_ACTIVE( l_U2731[18], 1 );
            SET_CAM_PROPAGATE( l_U2731[18], 1 );
            GET_GAME_TIMER( ref l_U2763 );
            sub_27229( "FIN1A_2DO", ref l_U3251, 6, 1 );
            l_U3240 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2764 );
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if ((NOT l_U3247) AND (NOT l_U3250))
            {
                if ((l_U2764 - l_U2763) > 2000)
                {
                    if (NOT l_U3248)
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U918 );
                            REQUEST_CAR_RECORDING( 475 );
                            l_U3248 = 1;
                        }
                    }
                    else if (HAS_CAR_RECORDING_BEEN_LOADED( 475 ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U918, 475 );
                        l_U3247 = 1;
                    }
                }
            }
            else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
            {
                sub_75480( l_U918, sub_3140(), ref uVar3, 1101004800, 1084227584, 1109393408, 1058642330, 1073741824, 1065353216 );
                SET_PLAYBACK_SPEED( l_U918, uVar3 );
                sub_78711( l_U918, uVar3 );
            }
        }
        if (((l_U2764 - l_U2763) > 6000) || (l_U3250))
        {
            if (l_U3246)
            {
                if (NOT (IS_CAR_DEAD( l_U914[0] )))
                {
                    SET_CAR_COORDINATES( l_U914[0], l_U3241._fU0, l_U3241._fU4, l_U3241._fU8 );
                    SET_CAR_HEADING( l_U914[0], l_U3244 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U914[0] );
                }
            }
            if (l_U3250)
            {
                if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                    SET_CHAR_COORDINATES( l_U2719, -1232.43500000, 100.95320000, 3.10680000 );
                    SET_CHAR_HEADING( l_U2719, 0.00000000 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3140() );
                SET_CHAR_COORDINATES( sub_3140(), -1233.59300000, 102.43230000, 3.08270000 );
                SET_CHAR_HEADING( sub_3140(), 0.00000000 );
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U918, 475 );
                    }
                }
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            SET_CAM_ACTIVE( l_U2731[12], 0 );
            SET_CAM_PROPAGATE( l_U2731[12], 0 );
            SET_CAM_ACTIVE( l_U2731[13], 0 );
            SET_CAM_PROPAGATE( l_U2731[13], 0 );
            SET_CAM_ACTIVE( l_U2731[14], 0 );
            SET_CAM_PROPAGATE( l_U2731[14], 0 );
            SET_CAM_ACTIVE( l_U2731[15], 0 );
            SET_CAM_PROPAGATE( l_U2731[15], 0 );
            SET_CAM_ACTIVE( l_U2731[16], 0 );
            SET_CAM_PROPAGATE( l_U2731[16], 0 );
            SET_CAM_ACTIVE( l_U2731[17], 0 );
            SET_CAM_PROPAGATE( l_U2731[17], 0 );
            SET_CAM_ACTIVE( l_U2731[18], 0 );
            SET_CAM_PROPAGATE( l_U2731[18], 0 );
            DESTROY_CAM( l_U2731[14] );
            DESTROY_CAM( l_U2731[12] );
            DESTROY_CAM( l_U2731[13] );
            DESTROY_CAM( l_U2731[15] );
            DESTROY_CAM( l_U2731[18] );
            DESTROY_CAM( l_U2731[16] );
            DESTROY_CAM( l_U2731[17] );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2730 );
            DISPLAY_RADAR( 1 );
            SET_PLAYER_CONTROL( sub_3651(), 1 );
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2719 );
                SET_CHAR_DECISION_MAKER( l_U2719, l_U2714 );
                SET_GROUP_MEMBER( sub_28521(), l_U2719 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U2616[52] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2424[52], ref l_U2616[52] );
                }
            }
            CLEAR_PRINTS();
            if (l_U3250)
            {
                DO_SCREEN_FADE_IN( 1000 );
            }
            PRINT_NOW( "FIN1A_07", 7500, 1 );
            l_U3245 = 0;
            l_U3239 = 5;
            l_U3240 = 7;
        }
        break;
    }
    return;
}

int sub_72163(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3140()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3651() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3651() )))
    {
        return 0;
    }
    return 1;
}

void sub_75480(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, unknown uParam5, float fParam6, unknown uParam7, float fParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;

    if (NOT (fParam4 < fParam3))
    {
        fParam4 = fParam3 - 0.10000000;
    }
    if (fParam6 > fParam8)
    {
        fParam8 = fParam6;
    }
    fVar11 = uParam7 / fParam8;
    fVar12 = fParam6 / fParam8;
    fVar13 = ((uParam5 - fParam3) * (1.00000000 / 0.40000000)) + fParam3;
    sub_75595( uParam0, uParam1, uParam2, fParam8, fParam4, fParam3, fVar13, fVar11, 1.00000000, fVar12, 1 );
    return;
}

void sub_75595(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U526 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U526 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U691;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_76933( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_77260( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_77643( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_77776( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U527 = 1;
            }
            else if (l_U527)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U527 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U696 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U697 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_CAR( uVar23 )) || (IS_THIS_MODEL_A_BIKE( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U689 - l_U690;
                                fVar14 += l_U690;
                                l_U688 = fVar14;
                                if (l_U688 < l_U690)
                                {
                                    l_U688 = l_U690;
                                }
                                if (l_U688 > l_U689)
                                {
                                    l_U688 = l_U689;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3651(), l_U688 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_76933(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_77260(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_77481( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_77481(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_77643(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10._fU8 = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_77776(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13._fU0 );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13._fU4 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_78711(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U886 += fVar5;
    l_U887 += fVar5;
    l_U888 += fVar5;
    l_U687 = fParam1;
    if (NOT l_U516)
    {
        if (l_U515)
        {
            sub_69265();
            l_U525 = 0;
            if (IS_PLAYER_PLAYING( sub_3651() ))
            {
                GET_CHAR_COORDINATES( sub_3140(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U516 = 1;
        }
    }
    else if (NOT l_U515)
    {
        sub_78962();
        l_U525 = 1;
        l_U516 = 0;
    }
    if (l_U515)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U506)
    {
        if (l_U497)
        {
            l_U682 = 0.00000000;
        }
        else
        {
            l_U682 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3651() ))
                {
                    if (sub_77260( sub_3140(), uParam0 ))
                    {
                        l_U514 = 1;
                    }
                    else
                    {
                        l_U514 = 0;
                    }
                }
                l_U679 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U746 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U680) * l_U682 );
                if (l_U501)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U513)
                {
                    if (l_U685 > 1000.00000000)
                    {
                        sub_79401( uParam0, l_U679 );
                        sub_80006( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U679;
                            fVar5 += 4000.00000000;
                            sub_80232( uParam0, fVar5, l_U684 );
                        }
                        l_U685 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U685 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((l_U679 == 0) || (IS_SCREEN_FADED_OUT()))
        {
            iVar10 = 1;
        }
        if ((iVar10) AND (NOT l_U528))
        {
            if (NOT l_U494)
            {
                sub_80864( uParam0, (fParam1 * l_U680) * l_U682 );
                sub_86772( ref uParam0 );
                sub_87332( ref uParam0 );
            }
            if (l_U499)
            {
                sub_87839( uParam0 );
            }
            if (NOT l_U494)
            {
                sub_88979( uParam0, (fParam1 * l_U680) * l_U682 );
            }
        }
        if (l_U508)
        {
            if (IS_PLAYER_PLAYING( sub_3651() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref l_U880 );
                    GET_CAR_COORDINATES( l_U880, ref l_U828._fU0, ref l_U828._fU4, ref l_U828._fU8 );
                    GET_VEHICLE_QUATERNION( l_U880, ref l_U561, ref l_U562, ref l_U563, ref l_U564 );
                }
            }
            l_U508 = 0;
        }
        if (l_U507)
        {
            if (DOES_VEHICLE_EXIST( l_U880 ))
            {
                sub_81705( l_U881 );
                l_U881 = l_U880;
            }
            if (IS_VEH_DRIVEABLE( l_U881 ))
            {
                SET_CAR_COORDINATES( l_U881, l_U828._fU0, l_U828._fU4, l_U828._fU8 );
                SET_VEHICLE_QUATERNION( l_U881, l_U561, l_U562, l_U563, l_U564 );
            }
            l_U678 = l_U681;
            l_U494 = 1;
            l_U507 = 0;
        }
        if (l_U494)
        {
            while (NOT (sub_92911( ref uParam0, l_U678 )))
            {
                WAIT( 0 );
            }
            l_U497 = 1;
        }
    }
    return;
}

void sub_78962()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_78985();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_78985()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_79401(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_79450();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U698 * -1.00000000, l_U698 * -1.00000000, l_U698 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U698, l_U698, l_U698))};
    l_U840 = {vVar6};
    l_U843 = {vVar9};
    SWITCH_ROADS_OFF( l_U834._fU0, l_U834._fU4, l_U834._fU8, l_U837._fU0, l_U837._fU4, l_U837._fU8 );
    SWITCH_ROADS_OFF( l_U840._fU0, l_U840._fU4, l_U840._fU8, l_U843._fU0, l_U843._fU4, l_U843._fU8 );
    return;
}

void sub_79450()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U840._fU0, l_U840._fU4, l_U840._fU8, l_U843._fU0, l_U843._fU4, l_U843._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U834._fU0, l_U834._fU4, l_U834._fU8, l_U837._fU0, l_U837._fU4, l_U837._fU8 );
    return;
}

void sub_80006(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U516)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3651() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_3140(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_80232(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_80361( vVar6, fVar15 );
        }
    }
    return;
}

void sub_80361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U516)
    {
        if (NOT (sub_80391( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3651() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_80391(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U516)
        {
            if (NOT l_U494)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3651() ))
                    {
                        GET_CHAR_COORDINATES( sub_3140(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_80864(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U748 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 1; I++ )
        {
            if (I < l_U747)
            {
                I = l_U747;
            }
            if (l_U701[I] == 0)
            {
                if (((l_U699[I] > 0) AND (l_U699[I] < 3000)) AND (NOT (l_U754[I] == 0)))
                {
                    if (NOT l_U494)
                    {
                        if (l_U679 > (l_U559[I] - (7000.00000000 * uParam1)))
                        {
                            l_U753++;
                            l_U701[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U679 - l_U559[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_81136( l_U699[I] )))
                            {
                                l_U753++;
                                l_U701[I]++;
                            }
                            else
                            {
                                sub_81262( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_81262( I, 1090519040 );
                }
            }
            if (l_U701[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U699[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U699[I] );
                }
                else if (l_U754[I] == sub_81984())
                {
                    if (HAS_MODEL_LOADED( sub_82012() ))
                    {
                        l_U701[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_82012() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U701[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_82127() ))
                {
                    l_U701[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_82127() );
                };;;;
            }
            if (l_U701[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U754[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U846[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_82127() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_82127() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_80391( l_U774[I], 5.00000000, 1120403456 ))) AND (NOT (sub_82370( l_U774[I] ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U520)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U513)
                                {
                                    sub_80361( l_U774[I], l_U684 );
                                }
                                CREATE_CAR( l_U754[I], l_U774[I]._fU0, l_U774[I]._fU4, l_U774[I]._fU8, ref l_U846[I], 1 );
                                if (l_U754[I] == sub_81984())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U846[I], 6, sub_82012(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82012() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U846[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U846[I], 4, sub_82127(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82127() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U846[I], l_U551[I], l_U553[I], l_U555[I], l_U557[I] );
                                FREEZE_CAR_POSITION( l_U846[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U846[I], 1 );
                                SET_CAR_COLLISION( l_U846[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U754[I] );
                                sub_82894( l_U846[I] );
                                GET_INTERIOR_FROM_CAR( l_U846[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U846[I] );
                                }
                                l_U753--;
                                l_U701[I]++;
                            }
                            else if (l_U679 > l_U559[I])
                            {
                                l_U753--;
                                sub_81262( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U754[I] );
                }
            }
            if (l_U701[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U699[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U699[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U846[I] ))
                {
                    if (l_U679 > l_U559[I])
                    {
                        if (6 > l_U737)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U679 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U679 - l_U559[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U699[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U699[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U846[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U699[I], fVar14, ref uVar11 );
                                    if ((NOT (sub_80391( uVar8, 5.00000000, 1120403456 ))) AND (sub_80391( uVar11, 5.00000000, 1120403456 )))
                                    {
                                        sub_81262( I, 1090519040 );
                                    }
                                    else if (sub_83483( ref l_U846[I], l_U699[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U846[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U846[I], uParam1 );
                                        sub_83849( ref l_U846[I] );
                                        l_U737++;
                                        l_U701[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_81262( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_81262( I, 1090519040 );
                        }
                    }
                    else if ((l_U514) AND (NOT l_U529))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_81262( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_81262( I, 1090519040 );
                }
            }
            if (l_U701[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U846[I] ))
                {
                    SET_CAR_COLLISION( l_U846[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U846[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U846[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3651() ))
                                {
                                    if ((((IS_CHAR_TOUCHING_VEHICLE( sub_3140(), l_U846[I] )) AND (NOT l_U500)) AND (NOT l_U497)) AND (NOT l_U509))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar7 );
                                            if (NOT (sub_84707( l_U846[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_84869( uVar7, l_U846[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_85100( l_U846[I] );
                                                l_U701[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_84869( l_U846[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U846[I], uParam1 );
                                    }
                                    else if ((sub_85227( uParam0, l_U846[I] )) AND (NOT l_U509))
                                    {
                                        sub_85100( l_U846[I] );
                                        l_U701[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U846[I], uParam1 );
                                    }
                                    if (l_U502)
                                    {
                                        # -NULL-0xbfc99f( l_U846[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U846[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                        }
                    }
                    else
                    {
                        l_U701[I]++;
                    }
                }
                else
                {
                    l_U701[I]++;
                }
            }
            if (l_U701[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U846[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U846[I] )))
                    {
                        l_U701[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U846[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U846[I], uParam1 );
                                if (l_U502)
                                {
                                    # -NULL-0xbfc99f( l_U846[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U846[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U699[I] ))
                        {
                            if (l_U679 > (l_U559[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U699[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                        }
                    }
                }
                else
                {
                    l_U701[I]++;
                }
            }
            if (l_U701[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U846[I] )))
                {
                    GET_CAR_SPEED( l_U846[I], ref uVar15 );
                }
                sub_86340( ref l_U846[I] );
                l_U737--;
                sub_81262( I, uVar15 );
            }
            l_U748++;
        }
    }
    else
    {
        sub_86499();
    }
    return;
}

void sub_81136(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_81262(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U754[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U754[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U846[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U846[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U846[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U846[iParam0] ))
    {
        sub_81432( l_U846[iParam0] );
        SET_CAR_COLLISION( l_U846[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U846[iParam0], 0 );
    }
    if (NOT l_U498)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_81671( uVar5 );
        }
        sub_81705( l_U846[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U846[iParam0] ))
    {
        DELETE_CAR( ref l_U846[iParam0] );
    }
    if (iParam0 >= l_U747)
    {
        for ( I = 0; I < 1; I++ )
        {
            if (NOT (l_U701[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 0)
                    {
                        l_U747 = iParam0 + 1;
                    }
                }
                I = 1;
            }
        }
    }
    l_U701[iParam0] = 99;
    return;
}

void sub_81432(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_3140()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_81671(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_81705(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_81984()
{
    return 2046537925;
}

int sub_82012()
{
    return -183203150;
}

int sub_82127()
{
    return -2139064254;
}

int sub_82370(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U530[I] ))
        {
            if (LOCATE_CAR_3D( l_U530[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_82894(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_83483(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 > 0) AND (iParam1 < 3000))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_83849(unknown uParam0)
{
    int iVar3;

    if (l_U510)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_83883();
            if (NOT (iVar3 == -1))
            {
                l_U530[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U530[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U530[iVar3], ref l_U537[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_83883()
{
    int Result;

    for ( Result = 0; Result < 6; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U530[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_84707(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_77481( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_84869(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_77481( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_85100(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_81432( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_85227(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_85240( uParam0, uParam1 );
    fVar5 = sub_85464( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_85240(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_85464(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_86340(unknown uParam0)
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (l_U530[I] == (uParam0^))
        {
            l_U530[I] = nil;
            if (DOES_BLIP_EXIST( l_U537[I] ))
            {
                REMOVE_BLIP( l_U537[I] );
            }
            return;
        }
    }
    return;
}

void sub_86499()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U846[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U846[I] )))
            {
                SET_CAR_COLLISION( l_U846[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U846[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U846[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                }
            }
            sub_81432( l_U846[I] );
            sub_81705( l_U846[I] );
        }
        l_U701[I] = 0;
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U754[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U754[I] );
        }
    }
    l_U747 = 0;
    l_U737 = 0;
    return;
}

void sub_86772(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U747 - 5;
    iVar5 = iVar4 + 15;
    if (l_U886 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3651() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
            }
            for ( I = 0; I < 1; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U846[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U846[I] ))
                    {
                        if ((sub_86939( l_U846[I], (uParam0^) )) || (sub_86939( l_U846[I], uVar6 )))
                        {
                            SOUND_CAR_HORN( l_U846[I], 3000 );
                            l_U886 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 1;
                }
            }
        }
    }
    return;
}

int sub_86939(unknown uParam0, unknown uParam1)
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

    if ((DOES_VEHICLE_EXIST( uParam0 )) AND (DOES_VEHICLE_EXIST( uParam1 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_84707( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if (((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_87332(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U747 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3651() ))
    {
        switch (l_U884)
        {
            case 0:
            if (l_U887 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
                }
                for ( I = 0; I < 1; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U846[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U846[I] ))
                        {
                            if ((sub_86939( l_U846[I], (uParam0^) )) || (sub_86939( l_U846[I], uVar6 )))
                            {
                                l_U883 = l_U846[I];
                                l_U887 = 0.00000000;
                                I = 1;
                                l_U884++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 1;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U883 ))
            {
                if (l_U887 < 1000.00000000)
                {
                    if (l_U888 > 100.00000000)
                    {
                        if (NOT l_U885)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U883, 2.00000000 );
                            l_U885 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U883, 1.00000000 );
                            l_U885 = 0;
                        }
                        l_U888 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U883, 1.00000000 );
                    l_U884 = 0;
                    l_U887 = 0.00000000;
                    l_U885 = 0;
                }
            }
            else
            {
                l_U884 = 0;
                l_U887 = 0.00000000;
                l_U885 = 0;
            }
            break;
        }
    }
    return;
}

void sub_87839(unknown uParam0)
{
    int I;
    int iVar4;

    l_U750 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 1; I++ )
        {
            if (I < l_U749)
            {
                I = l_U749;
            }
            if (l_U735[I] == 0)
            {
                if (NOT (l_U756[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U778[I]._fU0, l_U778[I]._fU4, l_U676, l_U676, 0 ))
                    {
                        l_U751++;
                        l_U735[I]++;
                    }
                }
                else
                {
                    sub_88019( I );
                }
            }
            if (l_U735[I] == 1)
            {
                if (6 > l_U740)
                {
                    if (HAS_MODEL_LOADED( l_U756[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U855[I] )))
                        {
                            if (((NOT (sub_80391( l_U778[I], 5.00000000, 1120403456 ))) || (l_U494)) || (l_U520))
                            {
                                if (l_U513)
                                {
                                    sub_80361( l_U778[I], l_U684 );
                                }
                                CREATE_CAR( l_U756[I], l_U778[I]._fU0, l_U778[I]._fU4, l_U778[I]._fU8, ref l_U855[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U855[I], l_U661[I], l_U663[I], l_U665[I], l_U667[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U756[I] );
                                if (IS_CAR_MODEL( l_U855[I], sub_81984() ))
                                {
                                    SWITCH_CAR_SIREN( l_U855[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U855[I], sub_88456() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U855[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U855[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U855[I] );
                                }
                                l_U751--;
                                l_U740++;
                                l_U735[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U756[I] );
                    }
                }
            }
            if (l_U735[I] == 2)
            {
                if (NOT (sub_84869( l_U855[I], uParam0 )))
                {
                    if (NOT l_U498)
                    {
                        sub_81705( l_U855[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U855[I] );
                    }
                    l_U740--;
                    sub_88019( I );
                }
            }
            l_U750++;
            if (l_U750 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_88762();
    }
    return;
}

void sub_88019(int iParam0)
{
    int I;

    if (iParam0 >= l_U749)
    {
        for ( I = 0; I < 1; I++ )
        {
            if (NOT (l_U735[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 0)
                    {
                        l_U749 = iParam0 + 1;
                    }
                }
                I = 1;
            }
        }
    }
    l_U735[iParam0] = 99;
    return;
}

int sub_88456()
{
    return 1264341792;
}

void sub_88762()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U855[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U855[I] )))
            {
                SET_CAR_COLLISION( l_U855[I], 1 );
            }
            sub_81705( l_U855[I] );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U756[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U756[I] );
        }
    }
    l_U749 = 0;
    l_U740 = 0;
    return;
}

void sub_88979(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 15; I++ )
        {
            if (((l_U703[I] > 0) AND (l_U703[I] < 3000)) AND (NOT (l_U758[I] == 0)))
            {
                if (l_U719[I] == 0)
                {
                    if (NOT l_U494)
                    {
                        if (l_U679 > (l_U629[I] - (7000.00000000 * uParam1)))
                        {
                            l_U719[I]++;
                            l_U752++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U679 - l_U629[I];
                        fVar13 *= l_U645[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_81136( l_U703[I] )))
                            {
                                l_U719[I]++;
                                l_U752++;
                            }
                            else
                            {
                                l_U719[I] = 99;
                            }
                        }
                    }
                }
                if (l_U719[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U703[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U703[I] );
                    }
                    else if (l_U758[I] == sub_81984())
                    {
                        if (HAS_MODEL_LOADED( sub_82012() ))
                        {
                            l_U719[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_82012() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U719[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_82127() ))
                    {
                        l_U719[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_82127() );
                    };;;;
                }
                if (l_U719[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U758[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U857[I] )))
                        {
                            bVar15 = false;
                            if (l_U758[I] == sub_81984())
                            {
                                if (HAS_MODEL_LOADED( sub_82012() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_82012() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_82127() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_82127() );
                            };;;
                            if (bVar15)
                            {
                                if ((NOT (sub_80391( l_U782[I], 5.00000000, 1120403456 ))) || (l_U520))
                                {
                                    CREATE_CAR( l_U758[I], l_U782[I]._fU0, l_U782[I]._fU4, l_U782[I]._fU8, ref l_U857[I], 1 );
                                    if (l_U758[I] == sub_81984())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U857[I], 6, sub_82012(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82012() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U857[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U857[I], 26, sub_82127(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82127() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_81671( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U857[I], l_U565[I], l_U581[I], l_U597[I], l_U613[I] );
                                    FREEZE_CAR_POSITION( l_U857[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U758[I] );
                                    sub_82894( l_U857[I] );
                                    GET_INTERIOR_FROM_CAR( l_U857[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U857[I] );
                                    }
                                    l_U719[I]++;
                                    l_U752--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U758[I] );
                    }
                }
                if (l_U719[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U703[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U703[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U857[I] ))
                    {
                        if (l_U679 > l_U629[I])
                        {
                            if (6 > l_U739)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U679 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U679 - l_U629[I];
                                fVar13 *= l_U645[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U703[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U703[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U857[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U703[I], fVar13, ref uVar10 );
                                        if (((NOT (sub_80391( uVar7, 5.00000000, 1120403456 ))) AND (sub_80391( uVar10, 5.00000000, 1120403456 ))) AND (NOT l_U520))
                                        {
                                            l_U739++;
                                            l_U719[I]++;
                                        }
                                        else if (sub_83483( ref l_U857[I], l_U703[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U857[I], uParam1 * l_U645[I] );
                                            if (IS_VEH_DRIVEABLE( l_U857[I] ))
                                            {
                                                if (l_U758[I] == sub_81984())
                                                {
                                                    SWITCH_CAR_SIREN( l_U857[I], 1 );
                                                }
                                            }
                                            if (l_U511)
                                            {
                                                # -NULL-0xbfc99f( l_U857[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U857[I], 0 );
                                            }
                                            l_U739++;
                                            l_U719[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U739++;
                                        l_U719[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U739++;
                                l_U719[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U739++;
                        l_U719[I]++;
                    }
                }
                if (l_U719[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U857[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U857[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U857[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3651() ))
                                    {
                                        if (((IS_CHAR_TOUCHING_VEHICLE( sub_3140(), l_U857[I] )) AND (NOT l_U500)) AND (NOT l_U497))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
                                                if (NOT (sub_91135( l_U857[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_84869( uVar6, l_U857[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_91420( uVar6, l_U857[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_85100( l_U857[I] );
                                                    l_U719[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U857[I], uParam1 * l_U645[I] );
                                            if (l_U511)
                                            {
                                                # -NULL-0xbfc99f( l_U857[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U857[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                            }
                        }
                        else
                        {
                            l_U719[I]++;
                        }
                    }
                    else
                    {
                        l_U719[I]++;
                    }
                }
                if (l_U719[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U857[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U857[I] )))
                        {
                            l_U719[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U857[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U857[I], uParam1 * l_U645[I] );
                                    if (l_U511)
                                    {
                                        # -NULL-0xbfc99f( l_U857[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U857[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U703[I] ))
                            {
                                if (l_U679 > (l_U629[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U703[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U719[I]++;
                    }
                }
                if (l_U719[I] == 6)
                {
                    if (NOT (l_U857[I] == l_U882))
                    {
                        if (IS_VEH_DRIVEABLE( l_U857[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U857[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U857[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U498)
                        {
                            sub_81705( l_U857[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U857[I] ))
                        {
                            DELETE_CAR( ref l_U857[I] );
                        }
                    }
                    l_U739--;
                    l_U719[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_92399();
    }
    return;
}

int sub_91135(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_77481( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_91420(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) > fParam2) || ((uVar5 - uVar6) < (fParam2 * -1.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_92399()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U857[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U857[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U857[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                }
            }
            sub_81432( l_U857[I] );
            sub_81705( l_U857[I] );
        }
        l_U719[I] = 0;
    }
    for ( I = 0; I < 15; I++ )
    {
        if (NOT (l_U758[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U758[I] );
        }
    }
    return;
}

int sub_92911(unknown uParam0, unknown uParam1)
{
    if (NOT l_U523)
    {
        l_U494 = 1;
        sub_92937();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U746 == -1))
            {
                while (NOT (sub_83483( uParam0, l_U746, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U505)
                {
                    l_U497 = 1;
                    l_U682 = 0.00000000;
                    l_U747 = 0;
                    l_U749 = 0;
                    l_U737 = 0;
                    l_U739 = 0;
                    l_U740 = 0;
                    l_U751 = 0;
                    l_U752 = 0;
                    l_U753 = 0;
                }
            }
        }
        l_U523 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U680) * l_U682 );
            sub_83483( uParam0, l_U746, uParam1, 1, 0, 0 );
        }
    }
    l_U679 = uParam1;
    sub_88979( (uParam0^), (1.00000000 * l_U680) * l_U682 );
    sub_80864( (uParam0^), (1.00000000 * l_U680) * l_U682 );
    if (((l_U751 == 0) AND (l_U752 == 0)) AND (l_U753 == 0))
    {
        l_U497 = 0;
        l_U494 = 0;
        l_U523 = 0;
        return 1;
    }
    return 0;
}

void sub_92937()
{
    sub_92946();
    sub_93158();
    sub_93302();
    return;
}

void sub_92946()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U846[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U846[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U846[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U846[I] );
                }
            }
            DELETE_CAR( ref l_U846[I] );
        }
        l_U701[I] = 0;
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U754[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U754[I] );
        }
    }
    l_U747 = 0;
    l_U737 = 0;
    return;
}

void sub_93158()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U855[I] ))
        {
            DELETE_CAR( ref l_U855[I] );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U756[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U756[I] );
        }
    }
    l_U749 = 0;
    l_U740 = 0;
    return;
}

void sub_93302()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U857[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U857[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U857[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U857[I] );
                }
            }
            DELETE_CAR( ref l_U857[I] );
        }
        l_U719[I] = 0;
    }
    for ( I = 0; I < 15; I++ )
    {
        if (NOT (l_U758[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U758[I] );
        }
    }
    return;
}

void sub_95177(boolean bParam0)
{
    l_U526 = 0;
    sub_78962();
    l_U525 = 1;
    sub_79450();
    if (IS_PLAYER_PLAYING( sub_3651() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3651(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3651(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82127() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_88456() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_81984() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_82012() );
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam0))
    {
        sub_86499();
        sub_88762();
        sub_92399();
    }
    else
    {
        sub_92937();
        sub_69443();
    }
    return;
}

void sub_95826()
{
    int I;

    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U3382[I] ))
        {
            DELETE_OBJECT( ref l_U3382[I] );
        }
    }
    return;
}

void sub_96446(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U482) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3140() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_96614())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U481) AND (NOT l_U482))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_96614()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_97134()
{
    if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
    {
        if (l_U3350)
        {
            if ((sub_97191( sub_3140(), l_U2424[52] )) > 205.00000000)
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U2424[52] )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (l_U3340)
                        {
                            if (NOT l_U3351)
                            {
                                l_U2723 = 0;
                                l_U2713 = 9;
                            }
                        }
                        else
                        {
                            l_U3351 = 1;
                        }
                    }
                }
            }
            else if ((sub_97191( sub_3140(), l_U2424[52] )) > (0.90000000 * 205.00000000))
            {
                ;
            }
            else if ((sub_97191( sub_3140(), l_U2424[52] )) > (0.70000000 * 205.00000000))
            {
                if (l_U3340)
                {
                    if (NOT l_U3351)
                    {
                        if (NOT l_U3347)
                        {
                            sub_27229( "FIN1A_LOSING", ref l_U3352, 6, 1 );
                            l_U3347 = 1;
                        }
                    }
                }
                else
                {
                    l_U3351 = 1;
                }
            }
            else if (((sub_97191( sub_3140(), l_U2424[52] )) < (0.65000000 * 205.00000000)) AND ((sub_97191( sub_3140(), l_U2424[52] )) > 40.00000000))
            {
                if (l_U3351)
                {
                    l_U3351 = 0;
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (l_U3347)
                    {
                        l_U3347 = 0;
                    }
                }
            }
            else if ((sub_97191( sub_3140(), l_U2424[52] )) < 40.00000000)
            {
                if (l_U3351)
                {
                    l_U3351 = 0;
                }
                if (sub_97733())
                {
                    if (sub_28207( l_U3352 ))
                    {
                        sub_9099( ref l_U3352, 0 );
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT l_U3348)
                        {
                            sub_27229( "FIN1A_INWAY", ref l_U3358, 6, 1 );
                            GET_GAME_TIMER( ref l_U3372 );
                            l_U3348 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U3373 );
                            if ((l_U3373 - l_U3372) > 6000)
                            {
                                sub_27229( "FIN1A_INWAY", ref l_U3358, 6, 1 );
                                GET_GAME_TIMER( ref l_U3372 );
                            }
                        }
                    }
                }
                else if (sub_98166())
                {
                    if (sub_28207( l_U3352 ))
                    {
                        sub_9099( ref l_U3352, 0 );
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT l_U3348)
                        {
                            GET_GAME_TIMER( ref l_U3370 );
                            sub_27229( sub_98321(), ref l_U3358, 6, 1 );
                            l_U3348 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U3371 );
                            if ((l_U3371 - l_U3370) > 12000)
                            {
                                sub_27229( sub_98321(), ref l_U3358, 6, 1 );
                                GET_GAME_TIMER( ref l_U3370 );
                            }
                        }
                    }
                }
            };;;;;
        }
    }
    return;
}

void sub_97191(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
            return Result;
        }
    }
    return Result;
}

int sub_97733()
{
    unknown uVar2;
    float fVar3;

    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
            if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
            {
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
                    {
                        fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
                        if ((fVar3 >= 18000) AND (fVar3 <= 23500))
                        {
                            return 1;
                        }
                        else if ((fVar3 >= 36500) AND (fVar3 <= 41500))
                        {
                            return 1;
                        }
                        else if ((fVar3 >= 62000) AND (fVar3 <= 63500))
                        {
                            return 1;
                        }
                        else if ((fVar3 >= 99000) AND (fVar3 <= 102000))
                        {
                            return 1;
                        };;;;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_98166()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
            if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_98321()
{
    string Result;

    switch (l_U3346)
    {
        case 0:
        Result = "FIN1A_CAR";
        l_U3346++;
        break;
        case 1:
        Result = "FIN1A_CLOSE";
        l_U3346 = 0;
        break;
    }
    return Result;
}

void sub_98516()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U3378)
    {
        case 0:
        if (sub_98585())
        {
            if (NOT (IS_CAR_DEAD( l_U918 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, -0.95000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[0], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[0], l_U918, 0, -0.95000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, -0.35000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[1], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[1], l_U918, 0, -0.35000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, 0.85000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[3], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[3], l_U918, 0, 0.85000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, 0.20000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[4], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[4], l_U918, 0, 0.20000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, -0.45000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[5], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[5], l_U918, 0, -0.45000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, -0.95000000, -1.80000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[6], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[6], l_U918, 0, -0.95000000, -1.80000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                l_U3378 = 2;
            }
        }
        break;
        case 2:
        if (sub_99449())
        {
            l_U3378 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            GET_GAME_TIMER( ref l_U3381 );
            if ((l_U3381 - l_U3379) > 3000)
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, 0.30000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[2], 1 );
                ATTACH_OBJECT_TO_CAR( l_U3382[2], l_U918, 0, 0.30000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_GAME_TIMER( ref l_U3381 );
                l_U3378 = 5;
            }
        }
        break;
        case 5:
        if (sub_100078())
        {
            GET_GAME_TIMER( ref l_U3380 );
            if ((l_U3380 - l_U3381) > 5000)
            {
                DETACH_OBJECT( l_U3382[2], 1 );
                APPLY_FORCE_TO_OBJECT( l_U3382[2], 1, 0.00000000, -15.00000000, 0.00000000, 0.00000000, 0.30000000, 1.00000000, 0, 1, 1, 1 );
                if (sub_100288( 0.50000000 ))
                {
                    l_U3378 = 3;
                }
                else
                {
                    l_U3378 = 1;
                }
                GET_GAME_TIMER( ref l_U3379 );
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U3380 );
        if ((l_U3380 - l_U3379) > sub_100398())
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, 0.30000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[2], 1 );
            ATTACH_OBJECT_TO_CAR( l_U3382[2], l_U918, 0, 0.30000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
            WAIT( 0 );
            DETACH_OBJECT( l_U3382[2], 1 );
            APPLY_FORCE_TO_OBJECT( l_U3382[2], 1, 0.00000000, -15.00000000, 0.00000000, 0.00000000, 0.30000000, 1.00000000, 0, 1, 1, 1 );
            GET_GAME_TIMER( ref l_U3379 );
            if (sub_100288( 0.90000000 ))
            {
                l_U3378 = 4;
            }
            else
            {
                l_U3378 = 1;
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U3380 );
        if ((l_U3380 - l_U3379) > sub_100398())
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U918, 0.30000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U3382[2], 1 );
            ATTACH_OBJECT_TO_CAR( l_U3382[2], l_U918, 0, 0.30000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
            WAIT( 0 );
            DETACH_OBJECT( l_U3382[2], 1 );
            APPLY_FORCE_TO_OBJECT( l_U3382[2], 1, 0.00000000, -15.00000000, 0.00000000, 0.00000000, 0.30000000, 1.00000000, 0, 1, 1, 1 );
            GET_GAME_TIMER( ref l_U3379 );
            l_U3378 = 1;
        }
        break;
    }
    return;
}

int sub_98585()
{
    float fVar2;

    if (NOT (IS_CAR_DEAD( l_U918 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
        {
            fVar2 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
            if (fVar2 > 16583.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_99449()
{
    float fVar2;
    float fVar3;

    switch (l_U3375)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            CONTROL_CAR_DOOR( l_U918, 2, 1, 1.00000000 );
            SET_CAR_DOOR_LATCHED( l_U918, 2, 0, 0 );
            CONTROL_CAR_DOOR( l_U918, 3, 1, 1.00000000 );
            SET_CAR_DOOR_LATCHED( l_U918, 3, 0, 0 );
            l_U3375++;
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if (NOT l_U3376)
            {
                GET_DOOR_ANGLE_RATIO( l_U918, 2, ref fVar2 );
                if ((fVar2 > 0.70000000) || (IS_CAR_DOOR_DAMAGED( l_U918, 2 )))
                {
                    BREAK_CAR_DOOR( l_U918, 2, 0 );
                    l_U3376 = 1;
                }
                sub_61091( fVar2, "fRearLeftOpen...." );
            }
            if (NOT l_U3377)
            {
                GET_DOOR_ANGLE_RATIO( l_U918, 3, ref fVar3 );
                if ((fVar3 > 0.70000000) || (IS_CAR_DOOR_DAMAGED( l_U918, 3 )))
                {
                    sub_61091( fVar3, "fRearRightOpen...." );
                    BREAK_CAR_DOOR( l_U918, 3, 0 );
                    l_U3377 = 1;
                }
                sub_61091( fVar3, "fRearRightOpen...." );
            }
            if ((l_U3376) AND (l_U3377))
            {
                return 1;
            }
        }
        break;
    }
    return 0;
}

int sub_100078()
{
    float fVar2;

    if (NOT (IS_CAR_DEAD( l_U918 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
        {
            fVar2 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
            if (((fVar2 > 22002.00000000) AND (fVar2 < 35154.60000000)) || (fVar2 > 43060.00000000))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_100288(float fParam0)
{
    float fVar3;

    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref fVar3 );
    if (fVar3 < fParam0)
    {
        return 1;
    }
    return 0;
}

void sub_100398()
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( 400, 1001, ref Result );
    return Result;
}

void sub_100944()
{
    int I;
    float fVar3;

    switch (l_U3484)
    {
        case 0:
        if (((NOT (HAS_MODEL_LOADED( -1439285074 ))) || (NOT (HAS_MODEL_LOADED( -638831925 )))) || (NOT (HAS_MODEL_LOADED( -1958629038 ))))
        {
            if (NOT l_U3472)
            {
                REQUEST_MODEL( -1439285074 );
                REQUEST_MODEL( -638831925 );
                REQUEST_MODEL( -1958629038 );
                l_U3394[0]._fU4 = -1958629038;
                l_U3394[0]._fU8 = {-1221.25400000, 73.67420000, 3.71040000};
                l_U3394[0]._fU20 = 90.00000000;
                l_U3394[0]._fU24 = 100.00000000;
                l_U3394[0]._fU28 = 85.00000000;
                l_U3394[1]._fU4 = -1958629038;
                l_U3394[1]._fU8 = {-1261.84600000, -35.68790000, 5.74450000};
                l_U3394[1]._fU20 = 90.00000000;
                l_U3394[1]._fU24 = 100.00000000;
                l_U3394[1]._fU28 = 110000.00000000;
                l_U3394[1]._fU32 = 1;
                l_U3394[2]._fU4 = -1439285074;
                l_U3394[2]._fU8 = {0.00000000, 0.00000000, 0.00000000};
                l_U3394[2]._fU20 = 180.00000000;
                l_U3394[2]._fU24 = 100.00000000;
                l_U3394[2]._fU28 = 50000.00000000;
                l_U3394[3]._fU4 = -1439285074;
                l_U3394[3]._fU8 = {-1082.68900000, 349.27020000, 3.50200000};
                l_U3394[3]._fU20 = 180.00000000;
                l_U3394[3]._fU24 = 100.00000000;
                l_U3394[3]._fU28 = 50000.00000000;
                l_U3394[4]._fU4 = -1439285074;
                l_U3394[4]._fU8 = {0.00000000, 0.00000000, 0.00000000};
                l_U3394[4]._fU20 = 180.00000000;
                l_U3394[4]._fU24 = 100.00000000;
                l_U3394[4]._fU28 = 50000.00000000;
                l_U3394[5]._fU4 = -638831925;
                l_U3394[5]._fU8 = {-1217.73300000, 331.03330000, 3.37560000};
                l_U3394[5]._fU20 = 0.00000000;
                l_U3394[5]._fU24 = 100.00000000;
                l_U3394[5]._fU28 = 30000.00000000;
                l_U3472 = 1;
            }
        }
        else
        {
            l_U3484++;
        }
        break;
        case 1:
        if (NOT (DOES_OBJECT_EXIST( l_U3474[0] )))
        {
            ;
        }
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT l_U3394[I]._fU36)
            {
                if (NOT (IS_CHAR_DEAD( l_U2424[52] )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U2424[52], l_U3394[I]._fU8._fU0, l_U3394[I]._fU8._fU4, l_U3394[I]._fU8._fU8, l_U3394[I]._fU24, l_U3394[I]._fU24, l_U3394[I]._fU24, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), l_U3394[I]._fU8._fU0, l_U3394[I]._fU8._fU4, l_U3394[I]._fU8._fU8, l_U3394[I]._fU24, l_U3394[I]._fU24, l_U3394[I]._fU24, 0 )))
                    {
                        CREATE_OBJECT_NO_OFFSET( l_U3394[I]._fU4, l_U3394[I]._fU8._fU0, l_U3394[I]._fU8._fU4, l_U3394[I]._fU8._fU8, ref l_U3394[I]._fU0, 1 );
                        SET_OBJECT_HEADING( l_U3394[I]._fU0, l_U3394[I]._fU20 );
                        l_U3394[I]._fU36 = 1;
                    }
                }
            }
            else if (NOT l_U3394[I]._fU40)
            {
                if (NOT (IS_CAR_DEAD( l_U918 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
                    {
                        fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
                        if (fVar3 > l_U3394[I]._fU28)
                        {
                            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U3394[I]._fU0 );
                            if (l_U3394[I]._fU32)
                            {
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3394[I]._fU4 );
                            }
                            l_U3394[I]._fU40 = 1;
                        }
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_102186()
{
    switch (l_U3393)
    {
        case 0:
        REQUEST_MODEL( l_U894 );
        while (NOT (HAS_MODEL_LOADED( l_U894 )))
        {
            WAIT( 0 );
        }
        l_U3393 = 1;
        break;
        case 1:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1089.28900000, 350.70940000, 8.49890000, 100.00000000, 100.00000000, 50.00000000, 0 ))
        {
            if ((DOES_OBJECT_EXIST( l_U3394[2]._fU0 )) AND (NOT (sub_102379( l_U918, 37307, 0 ))))
            {
                ;
            }
            sub_9968( 25 );
            l_U3393 = 2;
        }
        break;
        case 2:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1040.98300000, 351.49380000, 8.43600000, 100.00000000, 100.00000000, 50.00000000, 0 ))
        {
            if ((DOES_OBJECT_EXIST( l_U3394[3]._fU0 )) AND (NOT (sub_102379( l_U918, 37307, 0 ))))
            {
                ;
            }
            l_U3393 = 3;
        }
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1040.98300000, 351.49380000, 8.43600000, 100.00000000, 100.00000000, 50.00000000, 0 ))
        {
            if ((DOES_OBJECT_EXIST( l_U3394[4]._fU0 )) AND (NOT (sub_102379( l_U918, 40178, 0 ))))
            {
                l_U3393 = 4;
            }
        }
        break;
        case 4: break;
    }
    if (sub_102691())
    {
        sub_102847();
    }
    sub_103751();
    return;
}

void sub_102379(unknown uParam0, float fParam1, boolean bParam2)
{
    int Result;
    float fVar6;

    Result = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            fVar6 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
            if (bParam2)
            {
                ;
            }
            if (fVar6 > fParam1)
            {
                Result = 1;
            }
        }
    }
    return Result;
}

int sub_102691()
{
    float fVar2;

    if (NOT l_U3374)
    {
        if (NOT (IS_CAR_DEAD( l_U918 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
            {
                fVar2 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
                if (fVar2 > 55000.00000000)
                {
                    sub_9968( 26 );
                    l_U1107[66]._fU4 = 1;
                    l_U1107[67]._fU4 = 1;
                    l_U1107[68]._fU4 = 1;
                    l_U3374 = 1;
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_102847()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 94; I++ )
    {
        if (I == l_U3237)
        {
            ;
        }
        if (l_U1107[I]._fU4)
        {
            if (I == l_U3237)
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( l_U1107[I]._fU0 )))
            {
                if (I == l_U3237)
                {
                    ;
                }
                if (NOT l_U1107[I]._fU8)
                {
                    if (I == l_U3237)
                    {
                        ;
                    }
                    SET_CHAR_NEVER_TARGETTED( l_U1107[I]._fU0, 0 );
                    SET_CHAR_VISIBLE( l_U1107[I]._fU0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U1107[I]._fU0, l_U2714 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    if (I == l_U3237)
                    {
                        ;
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1107[I]._fU24._fU0, l_U1107[I]._fU24._fU4, l_U1107[I]._fU24._fU8, 3, -2, 0.50000000 );
                    if (l_U1107[I]._fU16)
                    {
                        TASK_DUCK( 0, -2 );
                    }
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U1107[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1107[I]._fU0, uVar3 );
                    }
                    else if (I == l_U3237)
                    {
                        ;
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U1107[I]._fU8 = 1;
                }
                else if (I == l_U3237)
                {
                    ;
                }
                if (NOT l_U1107[I]._fU12)
                {
                    if (I == l_U3237)
                    {
                        ;
                    }
                    if (NOT l_U1107[I]._fU16)
                    {
                        if (I == l_U3237)
                        {
                            ;
                        }
                        if (sub_30153( l_U1107[I]._fU0, 1, 0 ))
                        {
                            if (I == l_U3237)
                            {
                                ;
                            }
                            SET_CHAR_DECISION_MAKER( l_U1107[I]._fU0, l_U2715 );
                            SET_COMBAT_DECISION_MAKER( l_U1107[I]._fU0, l_U1107[I]._fU48 );
                            sub_57216( ref l_U1107[I]._fU0, l_U1107[I]._fU36 );
                            SET_CHAR_RELATIONSHIP( l_U1107[I]._fU0, 5, 0 );
                            SET_CHAR_RELATIONSHIP( l_U1107[I]._fU0, 5, 24 );
                            if (I == l_U3237)
                            {
                                ;
                            }
                            if (I == l_U3237)
                            {
                                ;
                            }
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            TASK_COMBAT( 0, sub_3140() );
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            if (NOT (IS_CHAR_INJURED( l_U1107[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1107[I]._fU0, uVar3 );
                            }
                            else if (I == l_U3237)
                            {
                                ;
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U1107[I]._fU12 = 1;
                        }
                        else if (I == l_U3237)
                        {
                            ;
                        }
                    }
                    else if (I == l_U3237)
                    {
                        ;
                    }
                    if (sub_30153( l_U1107[I]._fU0, 1, 0 ))
                    {
                        SCRIPT_ASSERT( "Finished combat seq!" );
                    }
                }
                else if (I == l_U3237)
                {
                    ;
                };;;
            }
            else if (I == l_U3237)
            {
                ;
            }
        }
    }
    return;
}

void sub_103751()
{
    int I;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CAR_DEAD( l_U918 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U918 ))
        {
            fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U918 );
        }
    }
    if (NOT l_U945[8]._fU16)
    {
        if (NOT (IS_CHAR_DEAD( l_U945[8]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1072.70300000, 351.33880000, 3.50290000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1073.34500000, 355.03090000, 4.49770000, 2, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar4, 1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U945[8]._fU0, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            l_U945[8]._fU16 = 1;
        }
    }
    if (NOT l_U945[9]._fU16)
    {
        if (NOT (IS_CHAR_DEAD( l_U945[9]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1065.63700000, 352.90150000, 3.50290000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1069.95700000, 352.84530000, 4.49570000, 2, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar4, 1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U945[9]._fU0, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            l_U945[9]._fU16 = 1;
        }
    }
    if (NOT l_U945[10]._fU16)
    {
        if (NOT (IS_CHAR_DEAD( l_U945[10]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1059.25700000, 349.99450000, 3.50290000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1060.91800000, 352.79730000, 4.49700000, 2, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar4, 1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U945[10]._fU0, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            l_U945[10]._fU16 = 1;
        }
    }
    if (NOT l_U945[11]._fU16)
    {
        if (NOT (IS_CHAR_DEAD( l_U945[11]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1052.77100000, 356.36040000, 3.50290000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1056.30200000, 355.66660000, 4.49950000, 2, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar4, 1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U945[11]._fU0, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            l_U945[11]._fU16 = 1;
        }
    }
    for ( I = 0; I <= 19; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U945[I]._fU0 )))
        {
            if (l_U945[I]._fU4)
            {
                if (fVar3 > l_U945[I]._fU8)
                {
                    uVar5 = {sub_104570( l_U2424[52], l_U945[I]._fU0, 1 )};
                    sub_105024( l_U945[I]._fU0, uVar5, 5000, 3.50290000 );
                    l_U945[I]._fU4 = 0;
                }
            }
            if (l_U945[I]._fU12)
            {
                if (fVar3 > l_U945[I]._fU8)
                {
                    OPEN_SEQUENCE_TASK( ref uVar4 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U945[I]._fU20._fU0, l_U945[I]._fU20._fU4, l_U945[I]._fU20._fU8, 4, -1 );
                    TASK_SMART_FLEE_CHAR( 0, sub_3140(), 30.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( uVar4 );
                    TASK_PERFORM_SEQUENCE( l_U945[I]._fU0, uVar4 );
                    CLEAR_SEQUENCE_TASK( uVar4 );
                    l_U945[I]._fU12 = 0;
                }
            }
        }
    }
    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_CHAR_EXIST( l_U945[I]._fU0 ))
        {
            if (fVar3 > (l_U945[I]._fU8 + 15000))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U945[I]._fU0 );
            }
        }
    }
    return;
}

void sub_104570(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    }
    else
    {
        SCRIPT_ASSERT( "First ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar11.x, ref vVar11.y, ref vVar11.z );
    }
    else
    {
        SCRIPT_ASSERT( "Second ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    vVar14 = {vVar11 - vVar8};
    sub_104806( vVar8, "vFirstPedLoc...." );
    sub_104806( vVar11, "vSecondPedLoc...." );
    sub_104806( vVar14, "vFirstSecondPed...." );
    sub_61091( VMAG( vVar14 ), "VMAG(vFirstSecondPed)...." );
    if (bParam2)
    {
        Result = {vVar14 / (VMAG( vVar14 ))};
    }
    else
    {
        Result = {vVar14};
    }
    sub_104806( Result, "Vreturn...." );
    return Result;
}

void sub_104806(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_105024(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar8 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, uParam4, 1, uParam1, uParam5, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_105731()
{
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2719 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U2719, 1 );
        }
    }
    switch (l_U3503)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3140(), l_U2719, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2719, sub_28521() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                        CLEAR_PRINTS();
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), l_U2833._fU0, l_U2833._fU4, l_U2833._fU8 + 1.00000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (DOES_BLIP_EXIST( l_U2829 ))
                    {
                        REMOVE_BLIP( l_U2829 );
                    }
                    sub_9099( ref l_U3504, 0 );
                    l_U2723 = 0;
                    l_U2713 = 7;
                    l_U3503 = 1;
                }
                else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3140() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref l_U3511 );
                    if (IS_CHAR_IN_CAR( l_U2719, l_U3511 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U2829 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U2833._fU0, l_U2833._fU4, l_U2833._fU8, ref l_U2829 );
                            SET_ROUTE( l_U2829, 1 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "FIN1A_08", 7500, 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U2721 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT (sub_28207( l_U3504 )))
                            {
                                if (NOT l_U3510)
                                {
                                    if (g_U64735 == 0)
                                    {
                                        sub_27229( "FIN1A_B3V1", ref l_U3504, 6, 0 );
                                        l_U3510 = 1;
                                        g_U64735++;
                                    }
                                    else if (g_U64735 == 1)
                                    {
                                        sub_27229( "FIN1A_B3V2", ref l_U3504, 6, 0 );
                                        l_U3510 = 1;
                                        g_U64735++;
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U2719, "LISTEN_TO_RADIO", 1, 1, 0 );
                                        l_U3510 = 1;
                                    }
                                }
                                else if (sub_30775( l_U3504 ))
                                {
                                    if (g_U64735 == 1)
                                    {
                                        sub_30834( "FIN1A_B3V1", ref l_U3504, 6, 1 );
                                    }
                                    else if (g_U64735 == 2)
                                    {
                                        sub_30834( "FIN1A_B3V2", ref l_U3504, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                    else if (sub_28207( l_U3504 ))
                    {
                        sub_31014( ref l_U3504 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U2829 )))
                {
                    ADD_BLIP_FOR_COORD( l_U2833._fU0, l_U2833._fU4, l_U2833._fU8, ref l_U2829 );
                    SET_ROUTE( l_U2829, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_08", 7500, 1 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    REMOVE_BLIP( l_U2721 );
                }
                if (sub_28207( l_U3504 ))
                {
                    sub_31590( ref l_U3504 );
                };;;;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2719 );
                if (DOES_BLIP_EXIST( l_U2829 ))
                {
                    REMOVE_BLIP( l_U2829 );
                }
                if (sub_28207( l_U3504 ))
                {
                    sub_31014( ref l_U3504 );
                }
                if (DOES_BLIP_EXIST( l_U2721 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2719 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3140(), l_U2719, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2721 );
                            SET_GROUP_MEMBER( sub_28521(), l_U2719 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "FIN1A_01", 7500, 1 );
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2719, ref l_U2721 );
                    CHANGE_BLIP_COLOUR( l_U2721, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FIN1A_01", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
            {
                ;
            }
        }
        break;
        default:
    }
    return;
}

void sub_107105(unknown uParam0, int iParam1, boolean bParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    if (NOT l_U3515)
    {
        if (NOT sub_8926())
        {
            l_U3515 = 1;
        }
    }
    else if (((l_U3525 > 0) AND (NOT l_U3516)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_8926())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U3516 = 1;
            l_U3525 = 2;
        }
    }
    switch (l_U3525)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (sub_72163( 1, 1 ))
            {
                if (NOT l_U3514)
                {
                    if (NOT l_U2723)
                    {
                        if (sub_9337())
                        {
                            if ((NOT bParam2) || (NOT sub_107352()))
                            {
                                l_U3527 = 1;
                            }
                            if (IS_HINT_RUNNING())
                            {
                                HINT_CAM( -1274.37300000, -127.49270000, 4.33748400, 0, 0, 0, 0 );
                            }
                            sub_3690();
                            BEGIN_CAM_COMMANDS( ref l_U2730 );
                            SET_PLAYER_CONTROL( sub_3651(), 0 );
                            if (DOES_VEHICLE_EXIST( l_U3511 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U3511 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U3511 );
                                }
                            }
                            if (l_U3527)
                            {
                                DO_SCREEN_FADE_OUT( 500 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                REQUEST_ANIMS( "gestures@niko" );
                                while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
                                {
                                    WAIT( 0 );
                                }
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U891 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U894 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( 904750859 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( -886672815 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( -1439285074 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( -638831925 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( -1958629038 );
                                CLEAR_AREA_OF_CARS( -1977.46000000, -29.58220000, 5.80220000, 5.00000000 );
                            }
                            REQUEST_ANIMS( "MISSPASS" );
                            while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
                            {
                                WAIT( 0 );
                            }
                            CLEAR_AREA_OF_CARS( -1975.59300000, -36.19850000, 5.36260000, 3.00000000 );
                            if (DOES_BLIP_EXIST( l_U2616[52] ))
                            {
                                REMOVE_BLIP( l_U2616[52] );
                            }
                            sub_3511( 1 );
                            CLEAR_PRINTS();
                            if (NOT (IS_CHAR_DEAD( l_U2719 )))
                            {
                                if (IS_GROUP_MEMBER( l_U2719, sub_28521() ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U2719 );
                                }
                                SET_CURRENT_CHAR_WEAPON( l_U2719, 0, 0 );
                            }
                            DISPLAY_RADAR( 0 );
                            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                            CREATE_CAM( 14, ref l_U2731[0] );
                            SET_CAM_POS( l_U2731[0], -1971.28200000, -37.98561000, 7.05817000 );
                            SET_CAM_ROT( l_U2731[0], 5.05090000, -0.00000000, 39.88176000 );
                            SET_CAM_FOV( l_U2731[0], 31.20004000 );
                            SET_CAM_ACTIVE( l_U2731[0], 1 );
                            SET_CAM_PROPAGATE( l_U2731[0], 1 );
                            CREATE_CAM( 14, ref l_U2731[1] );
                            SET_CAM_POS( l_U2731[1], -1971.28200000, -37.98561000, 6.74455300 );
                            SET_CAM_ROT( l_U2731[1], 5.05090000, -0.00000000, 39.88176000 );
                            SET_CAM_FOV( l_U2731[1], 31.20004000 );
                            SET_CAM_ACTIVE( l_U2731[1], 1 );
                            SET_CAM_PROPAGATE( l_U2731[1], 0 );
                            CREATE_CAM( 3, ref l_U2731[2] );
                            SET_CAM_ACTIVE( l_U2731[2], 0 );
                            SET_CAM_PROPAGATE( l_U2731[2], 0 );
                            if (NOT (IS_CHAR_DEAD( l_U2719 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
                                {
                                    if (l_U3527)
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
                                        GET_CAR_MODEL( uVar6, ref uVar9 );
                                        if (NOT (IS_THIS_MODEL_A_BOAT( uVar9 )))
                                        {
                                            if (NOT (IS_CHAR_IN_CAR( l_U2719, uVar6 )))
                                            {
                                                if (IS_CAR_PASSENGER_SEAT_FREE( uVar6, 0 ))
                                                {
                                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2719, uVar6, 0 );
                                                }
                                                else
                                                {
                                                    uVar6 = sub_108487( -344943009, -1977.46000000, -29.58220000, 6.36130000, 179.29880000, 0 );
                                                }
                                            }
                                            SET_CAR_COORDINATES( uVar6, -1977.46000000, -29.58220000, 5.36400000 );
                                            SET_CAR_HEADING( uVar6, 179.29880000 );
                                            SET_CAR_ON_GROUND_PROPERLY( uVar6 );
                                            GET_CAR_HEADING( uVar6, ref uVar8 );
                                            sub_61091( uVar8, "FTempCarHeading...." );
                                            ADD_BLIP_FOR_CAR( uVar6, ref l_U3526 );
                                        }
                                        else
                                        {
                                            uVar6 = sub_108487( -344943009, -1977.46000000, -29.58220000, 5.80220000, 179.29880000, 1 );
                                        }
                                    }
                                }
                                else if (bParam2)
                                {
                                    SET_CHAR_COORDINATES( l_U2719, -1977.03100000, -28.94870000, 5.36260000 );
                                    SET_CHAR_HEADING( l_U2719, 118.34120000 );
                                    SET_CHAR_COORDINATES( sub_3140(), -1978.46100000, -29.10400000, 5.36260000 );
                                    SET_CHAR_HEADING( sub_3140(), 276.19790000 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_3140(), l_U2719 );
                                    if (DOES_VEHICLE_EXIST( l_U3511 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U3511 )))
                                        {
                                            if (LOCATE_CAR_3D( l_U3511, -1977.79100000, -35.17400000, 6.36790000, 6.00000000, 6.00000000, 2.00000000, 0 ))
                                            {
                                                GET_CAR_MODEL( l_U3511, ref uVar7 );
                                                CLEAR_AREA_OF_CARS( -1990.89000000, -37.55460000, 5.45380000, 3.00000000 );
                                                SET_CAR_COORDINATES( l_U3511, -1990.89000000, -37.55460000, 5.45380000 );
                                                SET_CAR_HEADING( l_U3511, 269.23300000 );
                                                SET_CAR_ON_GROUND_PROPERLY( l_U3511 );
                                                if (IS_THIS_MODEL_A_CAR( uVar7 ))
                                                {
                                                    CLOSE_ALL_CAR_DOORS( l_U3511 );
                                                }
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    uVar6 = sub_108487( -344943009, -1977.46000000, -29.58220000, 5.80220000, 179.29880000, 0 );
                                }
                            }
                            SET_CAM_ACTIVE( l_U2731[0], 0 );
                            SET_CAM_PROPAGATE( l_U2731[0], 0 );
                            SET_CAM_INTERP_STYLE_CORE( l_U2731[2], l_U2731[0], l_U2731[1], 12000 + (iParam1 * 5000), 0 );
                            SET_CAM_ACTIVE( l_U2731[2], 1 );
                            SET_CAM_PROPAGATE( l_U2731[2], 1 );
                            if (l_U3527)
                            {
                                LOAD_SCENE( -1977.46000000, -29.58220000, 5.80220000 );
                            }
                            CLEAR_PRINTS();
                            CLEAR_HELP();
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            if (l_U3527)
                            {
                                DO_SCREEN_FADE_IN( 500 );
                            }
                            l_U3525 = 1;
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
            GET_CAR_HEADING( uVar6, ref uVar8 );
            sub_61091( uVar8, "FTempCarHeading...." );
        }
        if (NOT (IS_CHAR_DEAD( l_U2719 )))
        {
            if (NOT l_U3514)
            {
                if (NOT l_U2723)
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U2719 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bye", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U2720 );
                        TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                        CLEAR_SEQUENCE_TASK( l_U2720 );
                    }
                    else
                    {
                        TASK_LOOK_AT_CHAR( l_U2719, sub_3140(), -1, 0 );
                    }
                    TASK_LOOK_AT_CHAR( sub_3140(), l_U2719, -1, 0 );
                    l_U2723 = 1;
                    sub_27229( uParam0, ref l_U3517, 6, 1 );
                    l_U3514 = 1;
                    l_U2723 = 0;
                }
            }
            else if (NOT l_U2723)
            {
                if (NOT (sub_28207( l_U3517 )))
                {
                    if (sub_30153( l_U2719, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2720 );
                        TASK_CLEAR_LOOK_AT( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1971.31500000, -42.61930000, 6.36530000, 3, -1, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U2720 );
                        TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                        CLEAR_SEQUENCE_TASK( l_U2720 );
                        GET_GAME_TIMER( ref l_U3523 );
                        l_U2723 = 1;
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U2719 )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U2719 ))
                    {
                        iVar10 = sub_109972( l_U3517 );
                        if (iVar10 >= iParam1)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U2720 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3140() );
                            if (sub_110086())
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "wave_in_car", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                            }
                            else
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "wave", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U2720 );
                            if (NOT (IS_CHAR_INJURED( l_U2719 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U2719, l_U2720 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U2720 );
                        }
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U3524 );
                if ((sub_30153( l_U2719, 1, 0 )) || ((l_U3524 - l_U3523) > 6000))
                {
                    l_U3525 = 2;
                }
            }
        }
        break;
        case 2:
        DELETE_CHAR( ref l_U2719 );
        if (NOT l_U3516)
        {
            ;
        }
        else
        {
            sub_9099( ref l_U3517, 0 );
            if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar6 );
                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3140() )))
                {
                    CLOSE_ALL_CAR_DOORS( uVar6 );
                }
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_ACTIVE( l_U2731[0], 0 );
        SET_CAM_PROPAGATE( l_U2731[0], 0 );
        SET_CAM_ACTIVE( l_U2731[1], 0 );
        SET_CAM_PROPAGATE( l_U2731[1], 0 );
        SET_CAM_ACTIVE( l_U2731[2], 0 );
        SET_CAM_PROPAGATE( l_U2731[2], 0 );
        DESTROY_CAM( l_U2731[0] );
        DESTROY_CAM( l_U2731[1] );
        DESTROY_CAM( l_U2731[2] );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_28632();
        DISPLAY_RADAR( 1 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        if (l_U3516)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        REMOVE_ANIMS( "gestures@niko" );
        END_CAM_COMMANDS( ref l_U2730 );
        SET_PLAYER_CONTROL( sub_3651(), 1 );
        if (bParam2)
        {
            sub_110756();
        }
        else
        {
            sub_123002( uParam3 );
            l_U3525 = 3;
        }
        break;
    }
    return;
}

int sub_107352()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
            if (IS_CHAR_IN_CAR( l_U2719, uVar2 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_108487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    unknown Result;
    unknown uVar9;

    REQUEST_MODEL( uParam0 );
    while (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    if (bParam5)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar9 );
        SET_CAR_COORDINATES( uVar9, -1962.56900000, -14.81220000, 5.42260000 );
    }
    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
    {
        WARP_CHAR_FROM_CAR_TO_CAR( sub_3140(), Result, -1 );
    }
    else
    {
        WARP_CHAR_INTO_CAR( sub_3140(), Result );
    }
    if (NOT (IS_CHAR_DEAD( l_U2719 )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2719, Result, 0 );
    }
    if (DOES_VEHICLE_EXIST( uVar9 ))
    {
        DELETE_CAR( ref uVar9 );
    }
    return Result;
}

void sub_109972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_28207( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_110086()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3140(), ref uVar2 );
        GET_CAR_MODEL( uVar2, ref uVar9 );
        GET_MODEL_DIMENSIONS( uVar9, ref uVar3, ref uVar6 );
        if (((uVar6._fU8 - uVar3._fU8) < 1.35000000) AND ((uVar6._fU0 - uVar3._fU0) > 1.50000000))
        {
            return 1;
        }
    }
    return 0;
}

void sub_110756()
{
    sub_110765();
    CLEAR_WANTED_LEVEL( sub_3651() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 66 );
    sub_122396( 0, "MF3_ROM7", "MF3AUD", 0 );
    sub_3045();
    return;
}

void sub_110765()
{
    sub_110774();
    return;
}

void sub_110774()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_110792();
    sub_110851( iVar2, iVar3, iVar4 );
    return;
}

void sub_110792()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_110851(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_110882( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_110882(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_110978( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_110978( ref cVar9 );
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
            sub_110978( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_110978( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_110978( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_110978( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_111555( iParam0, iVar7 );;;
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
                sub_111952( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_111952( 0, 4 );
            }
        }
    }
    if (NOT (sub_112041( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3651(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3651() );
    }
    sub_2143();
    bVar27 = true;
    uVar28 = sub_111555( iParam0, iVar7 );
    uVar29 = sub_1600( iParam0 );
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
                sub_121417( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_121847();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_121932( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_121989( iParam0 );
                sub_122028( 0 );
                sub_2041( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_122136();
        }
    }
    if (bParam2)
    {
        sub_121847();
        sub_122224();
        sub_122028( 0 );
    }
    if (bParam3)
    {
        sub_121847();
        sub_122264();
        sub_122028( 0 );
        sub_2041( uVar29, 0 );
    }
    sub_1487();
    return;
}

void sub_110978(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_111555(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1999( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_111952(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_112041(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_112249( uParam1 );
        break;
        case 1:
        bVar8 = sub_114327( uParam1 );
        break;
        case 2:
        bVar8 = sub_114553( uParam1 );
        break;
        case 3:
        bVar8 = sub_114703( uParam1 );
        break;
        case 4:
        bVar8 = sub_114981( uParam1 );
        break;
        case 5:
        bVar8 = sub_115284( uParam1 );
        break;
        case 6:
        bVar8 = sub_115483( uParam1 );
        break;
        case 7:
        bVar8 = sub_115709( uParam1 );
        break;
        case 8:
        bVar8 = sub_115944( uParam1 );
        break;
        case 9:
        bVar8 = sub_116319( uParam1 );
        break;
        case 10:
        bVar8 = sub_116566( uParam1 );
        break;
        case 11:
        bVar8 = sub_116705( uParam1 );
        break;
        case 12:
        bVar8 = sub_117004( uParam1 );
        break;
        case 13:
        bVar8 = sub_117232( uParam1 );
        break;
        case 14:
        bVar8 = sub_117519( uParam1 );
        break;
        case 15:
        bVar8 = sub_117801( uParam1 );
        break;
        case 16:
        bVar8 = sub_118083( uParam1 );
        break;
        case 17:
        bVar8 = sub_118284( uParam1 );
        break;
        case 18:
        bVar8 = sub_118357( uParam1 );
        break;
        case 19:
        bVar8 = sub_118571( uParam1 );
        break;
        case 20:
        bVar8 = sub_118824( uParam1 );
        break;
        case 21:
        bVar8 = sub_119071( uParam1 );
        break;
        case 22:
        bVar8 = sub_119272( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_113932( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_111555( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_119595( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_112249(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_112528( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_112528( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_112528( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_112528( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_112528( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_112528( iVar3, 0, 3, 1, 0, 0 );
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
        sub_112528( iVar3, 0, sub_113810(), sub_114076(), 0, 0 );
        break;
        default:
        sub_114235( "Friend 1", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Friend 1", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_112528(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_112539( uParam1 );
    sub_112713( uParam0, 0, uParam2 );
    sub_112713( uParam0, 1, uParam3 );
    sub_112713( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_110792();
    return;
}

void sub_112539(unknown uParam0)
{
    ADD_SCORE( sub_3651(), uParam0 );
    sub_112564( uParam0 );
    return;
}

void sub_112564(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1999( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_112713(unknown uParam0, int iParam1, int iParam2)
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
        sub_112870( uParam0 );
    }
    return;
}

void sub_112870(unknown uParam0)
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

int sub_113810()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_113932( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_113932(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_114076()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_113932( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_114235(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_114327(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 2", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 2", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_114553(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_114235( "Girl 3", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Girl 3", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_114703(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_112528( iVar3, 0, sub_113810(), sub_114076(), 0, 0 );
        break;
        default:
        sub_114235( "Friend 4", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Friend 4", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_114981(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 5", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 5", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_115284(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 7", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 7", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_115483(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 7b", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 7b", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_115709(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_112528( iVar3, 0, sub_113810(), sub_114076(), 0, 0 );
        break;
        default:
        sub_114235( "Friend 8", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Friend 8", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_115944(unknown uParam0)
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
        sub_112528( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_112528( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_112528( iVar3, 0, sub_113810(), sub_114076(), 0, 0 );
        break;
        default:
        sub_114235( "Friend 9", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Friend 9", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_116319(unknown uParam0)
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
        sub_112528( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_112528( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_112528( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_114235( "Contact 10", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_114235( "Contact 10", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_116566(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_114235( "Girl 11", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Girl 11", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_116705(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_114235( "Contact 12", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 12", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_117004(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 13", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 13", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_117232(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_112528( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_112528( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_112528( iVar3, 0, sub_113810(), sub_114076(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_114235( "Friend 15", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Friend 15", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_117519(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 16", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 16", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_117801(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_112528( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_114235( "Contact 18", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 18", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_118083(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 19", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 19", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_118284(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_114235( "Girl 20", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_118357(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_114235( "Contact 21", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 21", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_118571(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_112528( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_114235( "Contact 22", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 22", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_118824(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_112528( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_112528( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_112528( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_114235( "Contact 24", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 24", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_119071(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_112528( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_112528( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_112528( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_114235( "Contact 25", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_114235( "Contact 25", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_119272(unknown uParam0)
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
        sub_112528( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_114235( "Girl 26", 1 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_114235( "Girl 26", 0 );
        sub_112528( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_119595(int iParam0, int iParam1)
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
    if (sub_119643( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_120374( iParam1 );
    }
    return;
}

int sub_119643(int iParam0, int iParam1)
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
            sub_119783( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_119783(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_119965( 0 );
    return;
}

void sub_119965(boolean bParam0)
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
        sub_120220();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_120220()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_120374(int iParam0)
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
        sub_120707( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_120707( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_120707( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_120707( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_120707( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_120707( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_120707( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_120707( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_120707( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_120707( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_120707( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_120707( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_120707( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_120707( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_120707( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_120707( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_120707( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_120707( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_120707( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_120707(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_121417(unknown uParam0, unknown uParam1)
{
    sub_121436( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_121436(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_121847()
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

int sub_121932(int iParam0, int iParam1)
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

void sub_121989(unknown uParam0)
{
    sub_1386();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_122028(unknown uParam0)
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

void sub_122136()
{
    sub_122145();
    return;
}

void sub_122145()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_122224()
{
    sub_122145();
    return;
}

void sub_122264()
{
    sub_122145();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_122396(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_122440( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_122440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_123002(unknown uParam0)
{
    sub_3511( 0 );
    sub_123017();
    SET_PLAYER_MOOD_PISSED_OFF( sub_3651(), 150 );
    SAY_AMBIENT_SPEECH( sub_3140(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    switch (uParam0)
    {
        case 0: break;
        case 1: break;
        case 2:
        PRINT_NOW( "FIN1A_10", 7000, 1 );
        sub_122396( 22, "FIN1A_PBDIES", "FIN1AAU", 0 );
        break;
        case 3: break;
    }
    sub_3045();
    return;
}

void sub_123017()
{
    sub_123026();
    return;
}

void sub_123026()
{
    int iVar2;

    iVar2 = 0;
    sub_123040( iVar2 );
    sub_2134( iVar2 );
    return;
}

void sub_123040(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3651(), 150 );
    CLEAR_HELP();
    sub_958( uParam0 );
    return;
}

int sub_123333(unknown uParam0)
{
    string sVar3;

    if (DOES_BLIP_EXIST( l_U2828 ))
    {
        REMOVE_BLIP( l_U2828 );
    }
    if (DOES_BLIP_EXIST( l_U2616[52] ))
    {
        REMOVE_BLIP( l_U2616[52] );
    }
    if (NOT l_U3513)
    {
        if (NOT l_U3512)
        {
            switch (uParam0)
            {
                case 1:
                sVar3 = "FIN1A_11";
                break;
                case 3:
                sVar3 = "FIN1A_12";
                break;
            }
            CLEAR_PRINTS();
            sub_3511( 0 );
            PRINT_NOW( sVar3, 7000, 1 );
            l_U3512 = 1;
        }
        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U3513 = 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_123636()
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
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    switch (l_U3590)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_3140(), 3, 1, 0 );
        l_U3590 = 99;
        break;
        case 1:
        if (IS_KEYBOARD_KEY_PRESSED( 2 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                CREATE_OBJECT( -268530289, 937.70000000, 335.40000000, 32.40000000, ref l_U3593, 1 );
                ATTACH_OBJECT_TO_PED( l_U3593, l_U2719, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 3 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 3 ))
            {
                WAIT( 0 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3140() ))
            {
                GET_CAR_CHAR_IS_USING( sub_3140(), ref l_U3591 );
                GET_CAR_MODEL( l_U3591, ref uVar8 );
                GET_MODEL_DIMENSIONS( uVar8, ref uVar2, ref uVar5 );
                sub_123938( uVar2, "Minimum...." );
                sub_123938( uVar5, "Maximum...." );
                sub_124001( uVar5._fU0 - uVar2._fU0, "X change...." );
                sub_124001( uVar5._fU4 - uVar2._fU4, "Y change...." );
                sub_124001( uVar5._fU8 - uVar2._fU8, "Z change...." );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 4 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 4 ))
            {
                WAIT( 0 );
            }
            REQUEST_ANIMS( "missgerry2" );
            while (NOT (HAVE_ANIMS_LOADED( "missgerry2" )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2719 )))
            {
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3140(), "keystart", "missgerry2", 1.00000000, 0, 0, 0, 0, 0 );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 5 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 5 ))
            {
                WAIT( 0 );
            }
            SET_WANTED_MULTIPLIER( 1.00000000 );
            ALTER_WANTED_LEVEL( sub_3651(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3651() );
            SCRIPT_ASSERT( "HOuld be set..." );
        }
        if (IS_KEYBOARD_KEY_PRESSED( 6 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 6 ))
            {
                WAIT( 0 );
            }
            PLAY_SOUND_FROM_POSITION( -1, "FIN1A_PRICE_IS_RIGHT_GUNFIRE", -1976.97600000, -32.47651000, 7.14084800 );
        }
        break;
        case 2:
        if (sub_40603( 0 ))
        {
            sub_27229( "FIN1A_TELLS", ref l_U3492, 6, 1 );
            l_U3590++;
        }
        break;
    }
    if (NOT (IS_CAR_DEAD( l_U3591 )))
    {
        ;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 8 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 8 ))
        {
            WAIT( 0 );
        }
        sub_27229( "FIN1A_INWAY", ref uVar10, 6, 1 );
        if (sub_72163( 1, 1 ))
        {
            ;
        }
    }
    if (IS_KEYBOARD_KEY_PRESSED( 4 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 4 ))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( l_U894 );
        while (NOT (HAS_MODEL_LOADED( l_U894 )))
        {
            WAIT( 0 );
        }
        SET_DRAW_PLAYER_COMPONENT( 3, 0 );
    }
    if (DOES_CHAR_EXIST( l_U945[8]._fU0 ))
    {
        ;
    }
    return;
}

void sub_123938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_124001(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_124722()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown[10] uVar7;
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
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
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
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;

    switch (l_U3262)
    {
        case 0:
        sub_9968( 20 );
        sub_9968( 15 );
        sub_9968( 3 );
        sub_9968( 27 );
        sub_9968( 2 );
        l_U1107[92]._fU4 = 1;
        l_U1107[93]._fU4 = 1;
        l_U1107[85]._fU4 = 1;
        l_U3262 = 1;
        break;
        case 1:
        if ((sub_124884( sub_3140() )) || (sub_124884( l_U2719 )))
        {
            SET_PED_IS_BLIND_RAGING( sub_3140(), 1 );
            sub_9968( 6 );
            sub_9968( 13 );
            l_U1107[1]._fU4 = 1;
            l_U1107[15]._fU4 = 1;
            l_U1107[17]._fU4 = 1;
            l_U1107[22]._fU4 = 1;
            if (NOT l_U1107[2]._fU4)
            {
                if (((IS_CHAR_INJURED( l_U2424[1] )) || (sub_48358( sub_3140() ))) || (sub_48358( l_U2719 )))
                {
                    l_U1107[2]._fU4 = 1;
                }
            }
            else if (NOT l_U1107[3]._fU4)
            {
                if (((IS_CHAR_INJURED( l_U2424[2] )) || (sub_48358( sub_3140() ))) || (sub_48358( l_U2719 )))
                {
                    l_U1107[3]._fU4 = 1;
                }
            }
        }
        if (NOT l_U1107[5]._fU4)
        {
            if (sub_125211())
            {
                if (sub_54460( -1288.57900000, 16.00000000, 11.00000000, 3.00000000 ))
                {
                    l_U1107[5]._fU4 = 1;
                    l_U1107[70]._fU4 = 1;
                }
                if (NOT l_U1107[9]._fU4)
                {
                    if (DOES_CHAR_EXIST( l_U2424[9] ))
                    {
                        DELETE_CHAR( ref l_U2424[9] );
                    }
                }
                if (NOT l_U1107[10]._fU4)
                {
                    if (DOES_CHAR_EXIST( l_U2424[10] ))
                    {
                        DELETE_CHAR( ref l_U2424[10] );
                    }
                }
                if (NOT l_U1107[11]._fU4)
                {
                    if (DOES_CHAR_EXIST( l_U2424[11] ))
                    {
                        DELETE_CHAR( ref l_U2424[11] );
                    }
                }
            }
        }
        if (NOT l_U1107[73]._fU4)
        {
            if (NOT l_U1107[11]._fU4)
            {
                if (sub_125591())
                {
                    if (sub_54460( -1274.17400000, 2.97120600, 11.11076000, 3.00000000 ))
                    {
                        sub_9968( 11 );
                        l_U1107[11]._fU4 = 1;
                        l_U1107[73]._fU4 = 1;
                    }
                    if (NOT l_U1107[2]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[2] ))
                        {
                            DELETE_CHAR( ref l_U2424[2] );
                        }
                    }
                    if (NOT l_U1107[3]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[3] ))
                        {
                            DELETE_CHAR( ref l_U2424[3] );
                        }
                    }
                    if (NOT l_U1107[5]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[5] ))
                        {
                            DELETE_CHAR( ref l_U2424[5] );
                        }
                    }
                    if (NOT l_U1107[70]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[70] ))
                        {
                            DELETE_CHAR( ref l_U2424[70] );
                        }
                    }
                    if (NOT l_U1107[71]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[71] ))
                        {
                            DELETE_CHAR( ref l_U2424[71] );
                        }
                    }
                    if (NOT l_U1107[91]._fU4)
                    {
                        if (DOES_CHAR_EXIST( l_U2424[91] ))
                        {
                            DELETE_CHAR( ref l_U2424[91] );
                        }
                    }
                }
            }
        }
        else if (NOT l_U1107[74]._fU4)
        {
            if ((sub_126134()) AND (sub_54460( -1288.17500000, 20.67130000, 11.14920000, 3.00000000 )))
            {
                l_U1107[74]._fU4 = 1;
            }
        }
        if (NOT l_U1107[71]._fU4)
        {
            if ((sub_126294()) AND (sub_54460( -1268.90600000, 3.31663500, 11.23222000, 3.00000000 )))
            {
                if (sub_54460( -1268.90600000, 3.31663500, 11.23222000, 3.00000000 ))
                {
                    ;
                }
                l_U1107[71]._fU4 = 1;
            }
        }
        if (NOT l_U1107[91]._fU4)
        {
            l_U2343[0] = {l_U1107[70]};
            if ((sub_48189( ref l_U2343, 1, 1, 1, 1 )) || (l_U1107[71]._fU4))
            {
                l_U1107[91]._fU4 = 1;
            }
        }
        if (NOT l_U1107[11]._fU4)
        {
            if ((sub_126565()) AND (sub_54460( -1242.90100000, 2.45690000, 11.26900000, 3.00000000 )))
            {
                sub_9968( 10 );
                l_U1107[11]._fU4 = 1;
                l_U1107[72]._fU4 = 1;
            }
        }
        if (NOT l_U1107[16]._fU4)
        {
            if (l_U1107[15]._fU4)
            {
                l_U2343[0] = {l_U1107[15]};
                if (sub_48189( ref l_U2343, 1, 1, 1, 1 ))
                {
                    l_U1107[16]._fU4 = 1;
                }
            }
        }
        if ((sub_48792( sub_3140() )) == 1)
        {
            sub_126819();
            sub_9968( 8 );
            l_U3262 = 2;
        }
        if ((sub_126952( sub_3140() )) || (sub_126952( l_U2719 )))
        {
            SET_PED_IS_BLIND_RAGING( sub_3140(), 1 );
            sub_9968( 7 );
            sub_9968( 13 );
            l_U1107[8]._fU4 = 1;
            l_U1107[72]._fU4 = 1;
            if (NOT l_U1107[9]._fU4)
            {
                if ((IS_CHAR_INJURED( l_U2424[8] )) || (sub_127136( sub_3140() )))
                {
                    l_U1107[9]._fU4 = 1;
                }
            }
            else if (NOT l_U1107[10]._fU4)
            {
                if ((IS_CHAR_INJURED( l_U2424[9] )) || (sub_48358( sub_3140() )))
                {
                    l_U1107[10]._fU4 = 1;
                }
            }
        }
        if (NOT l_U1107[12]._fU4)
        {
            if (l_U1107[11]._fU4)
            {
                l_U2343[0] = {l_U1107[11]};
                if (sub_48189( ref l_U2343, 1, 1, 1, 1 ))
                {
                    if (NOT sub_125591())
                    {
                        l_U1107[12]._fU24 = {-1244.19100000, 4.21820000, 10.95410000};
                        l_U1107[12]._fU4 = 1;
                    }
                    else if (NOT l_U1107[12]._fU4)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2424[12] )))
                        {
                            if (NOT (IS_CHAR_ON_SCREEN( l_U2424[12] )))
                            {
                                DELETE_CHAR( ref l_U2424[12] );
                                l_U1107[12]._fU4 = 1;
                            }
                            else
                            {
                                l_U1107[12]._fU24 = {-1238.36300000, 3.48530000, 6.54400000};
                                l_U1107[12]._fU36 = 55;
                                l_U1107[12]._fU4 = 1;
                            }
                        }
                    }
                    l_U1107[13]._fU4 = 1;
                    l_U1107[22]._fU4 = 1;
                }
                else if (sub_127593( sub_3140() ))
                {
                    l_U1107[12]._fU24 = {-1238.57300000, 4.41960000, 7.57910000};
                    l_U1107[12]._fU4 = 1;
                    l_U1107[13]._fU4 = 1;
                    l_U1107[22]._fU4 = 1;
                }
            }
        }
        if ((sub_48792( sub_3140() )) == 0)
        {
            sub_9968( 14 );
            l_U1107[15]._fU4 = 1;
            l_U1107[16]._fU4 = 1;
            l_U1107[17]._fU4 = 1;
            if (NOT l_U1107[74]._fU4)
            {
                l_U1107[74]._fU4 = 1;
            }
            sub_127828();
            sub_9968( 9 );
            l_U1107[19]._fU4 = 1;
            l_U3262 = 2;
        }
        else if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1285.01100000, 25.23190000, 4.31140000, 7.00000000, 25.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1269.83800000, 5.98210000, 4.31150000, 25.00000000, 7.00000000, 3.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1240.41800000, 7.64250000, 4.31160000, 4.00000000, 2.00000000, 2.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1240.41800000, 7.64250000, 4.31160000, 4.00000000, 1.00000000, 2.00000000, 0 )))
        {
            SET_PED_IS_BLIND_RAGING( sub_3140(), 1 );
            sub_9968( 9 );
            sub_9968( 14 );
            l_U3262 = 2;
            for ( I = 0; I <= 94; I++ )
            {
                if (DOES_CHAR_EXIST( l_U1107[I]._fU0 ))
                {
                    if (NOT l_U1107[I]._fU4)
                    {
                        l_U1107[I]._fU4 = 1;
                    }
                }
            }
            l_U3262 = 2;
        }
        break;
        case 2:
        if (NOT l_U3272)
        {
            sub_128297();
            l_U3272 = 1;
        }
        if (NOT l_U1107[16]._fU4)
        {
            l_U1107[16]._fU4 = 1;
        }
        if (NOT l_U1107[28]._fU4)
        {
            if (sub_54460( -1254.20000000, 45.16840000, 4.30650000, 5.00000000 ))
            {
                l_U1107[28]._fU4 = 1;
                l_U1107[29]._fU4 = 1;
                l_U1107[35]._fU4 = 1;
            }
        }
        if (NOT l_U1107[23]._fU4)
        {
            if (sub_54460( -1248.69700000, 26.05110000, 4.30650000, 5.00000000 ))
            {
                l_U1107[23]._fU4 = 1;
                l_U1107[24]._fU4 = 1;
                l_U1107[25]._fU4 = 1;
            }
        }
        if (NOT l_U1107[83]._fU4)
        {
            if ((sub_128741()) AND (NOT sub_128838()))
            {
                sub_9968( 12 );
                l_U1107[83]._fU4 = 1;
                l_U1107[84]._fU4 = 1;
            }
        }
        if (sub_49566( sub_3140() ))
        {
            sub_9968( 16 );
            l_U1107[30]._fU4 = 1;
            l_U1107[39]._fU4 = 1;
            l_U1107[40]._fU4 = 1;
            l_U1107[49]._fU4 = 1;
            l_U1107[50]._fU4 = 1;
            if (l_U1107[36]._fU36 != 29)
            {
                sub_49852( ref l_U1107[36] );
                sub_49852( ref l_U1107[37] );
                sub_49852( ref l_U1107[38] );
                l_U1107[36]._fU24 = {-1269.03300000, 67.51390000, 13.00020000};
                l_U1107[36]._fU36 = 29;
                l_U1107[36]._fU4 = 1;
                l_U1107[37]._fU24 = {-1269.24200000, 67.86060000, 13.00000000};
                l_U1107[37]._fU36 = 29;
                l_U1107[37]._fU4 = 1;
                l_U1107[38]._fU24 = {-1261.62000000, 68.03030000, 13.00000000};
                l_U1107[38]._fU36 = 29;
                l_U1107[38]._fU4 = 1;
            }
        }
        if (sub_48962( sub_3140() ))
        {
            l_U1107[51]._fU4 = 1;
            l_U1107[31]._fU4 = 1;
            l_U1107[33]._fU4 = 1;
            l_U1107[32]._fU4 = 1;
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1265.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );
        }
        if (sub_129396( sub_3140() ))
        {
            sub_9968( 18 );
            sub_9968( 19 );
            l_U2343[0] = {l_U1107[36]};
            l_U2343[1] = {l_U1107[37]};
            l_U2343[2] = {l_U1107[38]};
            if (sub_48189( ref l_U2343, 3, 2, 1, 1 ))
            {
                sub_9968( 28 );
                l_U1107[86]._fU4 = 1;
                l_U1107[87]._fU4 = 1;
            }
            l_U1107[48]._fU4 = 1;
            l_U1107[47]._fU4 = 1;
            l_U3262 = 3;
        }
        break;
        case 3:
        if (sub_49175( sub_3140() ))
        {
            l_U1107[45]._fU4 = 1;
            l_U1107[46]._fU4 = 1;
        }
        break;
        case 4:
        if (NOT l_U2423)
        {
            sub_9968( 29 );
            l_U1107[88]._fU4 = 1;
            l_U1107[89]._fU4 = 1;
        }
        break;
        case 6:
        SCRIPT_ASSERT( "GUARDS_DONE... Shouldn't get here!" );
        break;
        case 5: break;
    }
    if (NOT l_U3271)
    {
        if (sub_129807( sub_3140() ))
        {
            if (NOT l_U3274)
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_PLAYER_CONTROL( sub_3651(), 0 );
                REQUEST_MODEL( l_U893 );
                while (NOT (HAS_MODEL_LOADED( l_U893 )))
                {
                    WAIT( 0 );
                }
                l_U3262 = 5;
                sub_130039( 1 );
                if (DOES_BLIP_EXIST( l_U2836 ))
                {
                    REMOVE_BLIP( l_U2836 );
                }
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1265.00000000, 117.00000000, 13.00000000, 0, 0.00000000 );
                SET_OBJECT_COORDINATES( l_U890, l_U3216._fU0, l_U3216._fU4, l_U3216._fU8 );
                l_U3271 = 1;
                l_U2713 = 5;
            }
        }
    }
    sub_102847();
    if (NOT l_U3270)
    {
        if ((sub_130248()) AND (sub_54460( -1257.16800000, 69.41875000, 4.08437300, 3.00000000 )))
        {
            sub_9968( 4 );
            l_U1107[81]._fU4 = 1;
            l_U1107[82]._fU4 = 1;
            l_U3270 = 1;
        }
        else if ((sub_130248()) AND (sub_54460( -1236.95000000, 23.95876000, 7.26301500, 3.00000000 )))
        {
            sub_9968( 4 );
            l_U1107[81]._fU4 = 1;
            l_U1107[82]._fU4 = 1;
            l_U3270 = 1;
        }
        else if (NOT sub_130248())
        {
            ;
        }
        if (NOT (sub_54460( -1257.16800000, 69.41875000, 4.08437300, 3.00000000 )))
        {
            ;
        }
        if (NOT (sub_54460( -1236.95000000, 23.95876000, 7.26301500, 3.00000000 )))
        {
            ;
        };;;
    }
    if (NOT l_U3273)
    {
        if (l_U1107[70]._fU4)
        {
            if (DOES_CHAR_EXIST( l_U2424[70] ))
            {
                if (IS_CHAR_FATALLY_INJURED( l_U2424[70] ))
                {
                    GET_DEAD_CHAR_PICKUP_COORDS( l_U2424[70], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_WEAPONTYPE_MODEL( 4, ref uVar6 );
                    CREATE_PICKUP_WITH_AMMO( uVar6, 3, 20, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U3276 );
                    l_U3273 = 1;
                }
            }
        }
    }
    if (NOT l_U3275)
    {
        array(ref uVar7, 10);
        uVar7[0] = {l_U1107[39]};
        uVar7[1] = {l_U1107[40]};
        uVar7[2] = {l_U1107[41]};
        uVar7[3] = {l_U1107[42]};
        uVar7[4] = {l_U1107[43]};
        uVar7[5] = {l_U1107[44]};
        uVar7[6] = {l_U1107[51]};
        if (sub_130824( ref uVar7 ))
        {
            l_U3275 = 1;
        }
    }
    sub_130969();
    sub_132050();
    return;
}

int sub_124884(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1288.12800000, 28.01600000, 18.37920000, 2.00000000, 21.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_125211()
{
    if (NOT l_U3189)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1288.49400000, 49.83630000, 14.74930000, 3.00000000, 3.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1288.87000000, 45.13540000, 12.75870000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_125591()
{
    if (NOT l_U3190)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1237.98700000, 3.49680000, 14.74950000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1242.98700000, 3.49680000, 12.74950000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_126134()
{
    if (NOT l_U3192)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1272.13000000, 3.49460000, 11.14880000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3192 = 1;
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_126294()
{
    if (NOT l_U3191)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1288.21300000, 21.27020000, 11.14920000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3191 = 1;
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_126565()
{
    if (NOT l_U3193)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1283.39000000, 2.28310000, 11.14880000, 2.00000000, 4.00000000, 2.00000000, 0 ))
        {
            l_U3193 = 1;
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_126819()
{
    l_U1107[8]._fU4 = 1;
    l_U1107[11]._fU4 = 1;
    l_U1107[15]._fU4 = 1;
    l_U1107[17]._fU4 = 1;
    l_U1107[9]._fU4 = 1;
    l_U1107[10]._fU4 = 1;
    l_U1107[12]._fU4 = 1;
    l_U1107[16]._fU4 = 1;
    l_U1107[13]._fU4 = 1;
    return;
}

int sub_126952(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1262.00600000, 3.21750000, 18.37920000, 22.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_127136(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1248.36700000, 3.43200000, 18.37910000, 6.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_127593(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1245.30300000, 3.43900000, 11.17900000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_127828()
{
    l_U1107[1]._fU4 = 1;
    l_U1107[5]._fU4 = 1;
    l_U1107[15]._fU4 = 1;
    l_U1107[17]._fU4 = 1;
    l_U1107[22]._fU4 = 1;
    l_U1107[2]._fU4 = 1;
    l_U1107[3]._fU4 = 1;
    l_U1107[7]._fU4 = 1;
    l_U1107[6]._fU4 = 1;
    l_U1107[16]._fU4 = 1;
    return;
}

void sub_128297()
{
    sub_128314( l_U2424[1] );
    sub_128314( l_U2424[2] );
    sub_128314( l_U2424[3] );
    sub_128314( l_U2424[5] );
    sub_128314( l_U2424[70] );
    sub_128314( l_U2424[71] );
    sub_128314( l_U2424[91] );
    sub_128314( l_U2424[1] );
    sub_128314( l_U2424[8] );
    sub_128314( l_U2424[9] );
    sub_128314( l_U2424[73] );
    sub_128314( l_U2424[12] );
    sub_128314( l_U2424[11] );
    return;
}

void sub_128314(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SET_CHAR_IS_TARGET_PRIORITY( uParam0, 0 );
    }
    return;
}

int sub_128741()
{
    if (NOT l_U3194)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1265.23900000, 19.53050000, 4.41150000, 28.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U3194 = 1;
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_128838()
{
    if (NOT l_U3195)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1264.65600000, 30.53020000, 4.31150000, 28.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U3195 = 1;
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_129396(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1272.94800000, 56.62160000, 12.99990000, 3.00000000, 3.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_129807(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1278.57000000, 114.30460000, 13.00500000, 2.00000000, 7.00000000, 2.00000000, 0 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1020105872, -1277.00000000, 117.00000000, 13.00000000, 1, 0.00000000 );
            return 1;
        }
    }
    return 0;
}

void sub_130039(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        for ( I = 0; I <= 94; I++ )
        {
            if (DOES_CHAR_EXIST( l_U2424[I] ))
            {
                DELETE_CHAR( ref l_U2424[I] );
            }
        }
    }
    return;
}

int sub_130248()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3140(), -1259.48500000, 3.37140000, 11.18440000, 18.50000000, 3.00000000, 2.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_130824(unknown uParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
        {
            if ((uParam0^)[I]._fU4)
            {
                if ((uParam0^)[I]._fU12)
                {
                    SET_SENSE_RANGE( (uParam0^)[I]._fU0, 100 );
                    iVar4++;
                }
            }
        }
    }
    if (iVar4 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

void sub_130969()
{
    unknown uVar2;
    int I;
    int iVar4;

    if (NOT l_U1107[36]._fU8)
    {
        if (NOT (IS_CHAR_DEAD( l_U1107[36]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1269.64100000, 94.41430000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1251.49600000, 65.14800000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1274.50900000, 54.43970000, 12.99990000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1274.50900000, 54.43970000, 12.99990000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1278.48200000, 97.77000000, 13.00000000, 3, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U1107[36]._fU0, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U1107[36]._fU8 = 1;
        }
    }
    if (NOT l_U1107[37]._fU8)
    {
        if (NOT (IS_CHAR_DEAD( l_U1107[37]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1252.28700000, 69.54730000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1279.08700000, 61.54950000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1257.03100000, 55.01130000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1251.52700000, 99.94970000, 13.00000000, 3, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U1107[37]._fU0, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U1107[37]._fU8 = 1;
        }
    }
    if (NOT l_U1107[38]._fU8)
    {
        if (NOT (IS_CHAR_DEAD( l_U1107[38]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1278.64700000, 66.34370000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1250.97400000, 73.72070000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1262.37400000, 94.25700000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1278.30100000, 79.22670000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1263.97700000, 67.75280000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1251.44100000, 54.63700000, 13.00000000, 3, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1276.31900000, 54.27640000, 13.00000000, 3, -2, 0.50000000 );
            SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U1107[38]._fU0, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U1107[38]._fU8 = 1;
        }
    }
    for ( I = 0; I <= 94; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U2424[I] )))
        {
            if (l_U1107[I]._fU44 == 1)
            {
                if (NOT l_U1107[I]._fU4)
                {
                    GET_GAME_TIMER( ref l_U1107[I]._fU40 );
                    l_U1107[I]._fU4 = 1;
                }
                else if (l_U1107[I]._fU8)
                {
                    GET_GAME_TIMER( ref iVar4 );
                    if ((sub_30153( l_U1107[I]._fU0, 1, 0 )) || ((iVar4 - l_U1107[I]._fU40) > 10000))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1107[I]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U1107[I]._fU0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_132050()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    for ( I = 0; I <= 94; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U2424[I] )))
        {
            if (l_U1107[I]._fU20)
            {
                GET_CHAR_HEALTH( l_U2424[I], ref iVar3 );
                if ((iVar3 < 200) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2424[I], sub_3140(), 1 )))
                {
                    uVar7 = {sub_104570( sub_3140(), l_U2424[I], 1 )};
                    uVar4 = {uVar7};
                    sub_105024( l_U2424[I], uVar4, 5000, 1.26180000 );
                    if (NOT (IS_CHAR_DEAD( l_U2424[I] )))
                    {
                        ;
                    }
                    l_U1107[I]._fU20 = 0;
                }
            }
        }
    }
    return;
}

void sub_132311(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}