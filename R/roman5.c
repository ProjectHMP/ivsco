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
    l_U481 = -1;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = {946.08700000, 330.26000000, 32.43500000};
    l_U519 = {962.29930000, -367.03510000, 17.67500000};
    l_U522 = {1065.23800000, -275.88300000, 22.46400000};
    l_U525 = {0.00000000, 0.00000000, 0.00000000};
    l_U528 = {0.00000000, 0.00000000, 0.00000000};
    l_U531 = {937, 335, 34};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_307();
        sub_2417();
    }
    LOAD_ADDITIONAL_TEXT( "ROMAN5", 0 );
    LOAD_ADDITIONAL_TEXT( "R5AUD", 6 );
    sub_2958( "R5AUD" );
    SET_MISSION_FLAG( 1 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U549 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U550 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U551 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U552 );
    sub_3145( 0, sub_2472(), "NIKO", 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2472(), 0 );
    SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
    STOP_PED_SPEAKING( sub_2472(), 0 );
    g_U9942 = 0;
    PROCESS_MISSION_DELETION_LIST();
    SET_MAX_WANTED_LEVEL( 2 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_3364() ))
        {
            if (l_U492 > 0)
            {
                sub_3419();
            }
            switch (l_U492)
            {
                case 0:
                sub_6857();
                break;
                case 1:
                sub_7867();
                break;
                case 2:
                sub_11479();
                break;
                case 3:
                sub_17199();
                break;
                case 4:
                sub_18020();
                break;
                case 5:
                sub_19709();
                break;
            }
            if (l_U492 > 2)
            {
                if (l_U491 < 2)
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_3364(), 0 )))
                    {
                        if (l_U503)
                        {
                            if (NOT (sub_5863( l_U562 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U545 ))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U546[0] )))
                                        {
                                            SWITCH_CAR_SIREN( l_U546[0], 0 );
                                        }
                                        if (NOT (IS_CAR_DEAD( l_U546[1] )))
                                        {
                                            SWITCH_CAR_SIREN( l_U546[1], 0 );
                                        }
                                        sub_3947( ref l_U562, 1 );
                                        sub_6536( "R5_LOSE", ref l_U562, 6, 1 );
                                        l_U489 = 0;
                                        l_U501 = 0;
                                        l_U503 = 0;
                                        l_U494 = 3;
                                        l_U492 = 4;
                                        SETTIMERA( 0 );
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U503 == 0)
                    {
                        l_U501 = 0;
                        l_U494 = 2;
                        l_U492 = 3;
                        l_U510 = 0;
                        l_U503 = 1;
                        SETTIMERA( 0 );
                    }
                    else if (NOT l_U510)
                    {
                        if (l_U495 > 1)
                        {
                            if (TIMERA() > 4000)
                            {
                                if (IS_VEH_DRIVEABLE( l_U545 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U537 )))
                                    {
                                        if ((IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 )) AND (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 )))
                                        {
                                            sub_6536( "R5_WANT", ref l_U562, 6, 1 );
                                            l_U510 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    };;;
                }
            }
            if (l_U492 > 0)
            {
                if (NOT sub_11755())
                {
                    sub_12086( 2 );
                }
            }
            if (DOES_CHAR_EXIST( l_U537 ))
            {
                if (NOT sub_11706())
                {
                    sub_12086( 1 );
                }
                else if (sub_11755())
                {
                    if ((l_U498 == 0) || (l_U498 > 6))
                    {
                        if ((l_U493 > 4) AND (l_U491 < 2))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U537, l_U545 )))
                            {
                                if (NOT (IS_CAR_UPSIDEDOWN( l_U545 )))
                                {
                                    if (TIMERA() > 4000)
                                    {
                                        if (l_U513 == 0)
                                        {
                                            CLEAR_CHAR_TASKS( l_U537 );
                                            TASK_ENTER_CAR_AS_PASSENGER( l_U537, l_U545, 20000, 1 );
                                            REMOVE_BLIP( l_U534 );
                                            ADD_BLIP_FOR_CHAR( l_U537, ref l_U534 );
                                            SET_BLIP_AS_FRIENDLY( l_U534, 1 );
                                            l_U501 = 0;
                                            l_U513 = 1;
                                        }
                                    }
                                }
                            }
                            else if (l_U513 == 1)
                            {
                                l_U513 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_307()
{
    sub_316();
    return;
}

void sub_316()
{
    int iVar2;

    iVar2 = 0;
    sub_330( iVar2 );
    sub_1506( iVar2 );
    return;
}

void sub_330(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_374();
        sub_535();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_643();
            sub_682();
        }
    }
    sub_758();
    sub_859();
    uVar5 = sub_972( uParam0 );
    sub_1413( uVar5, 0 );
    return;
}

void sub_374()
{
    sub_388( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_488();
    }
    return;
}

void sub_388(int iParam0)
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

void sub_488()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_535()
{
    sub_544();
    return;
}

void sub_544()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_643()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_682()
{
    sub_691();
    return;
}

void sub_691()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_758()
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

void sub_859()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_881();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_881()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_972(unknown uParam0)
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
    sub_1371( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1371(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1413(int iParam0, boolean bParam1)
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

void sub_1506(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1515();
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
        sub_2290();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1515()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1553( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1553( 1, g_U569[I] )) != 0)
            {
                sub_1839( I );
            }
        }
    }
    if (NOT sub_2005())
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

int sub_1553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1839(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1924( g_U569 - 1 );
    return;
}

void sub_1924(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2005()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1553( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2290()
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

void sub_2417()
{
    ENABLE_SCENE_STREAMING( 1 );
    SET_FAKE_WANTED_LEVEL( 0 );
    if (DOES_VEHICLE_EXIST( l_U545 ))
    {
        SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U545, 0 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2472(), 1 );
    sub_2522( 1 );
    g_U9942 = 1;
    SWITCH_ROADS_ON( 999.06590000, -369.22030000, 18.95130000, 980.94450000, -377.36490000, 22.58970000 );
    SWITCH_ROADS_ON( 961.53420000, -392.46890000, 35.64550000, 935.20840000, -417.40050000, 37.56270000 );
    SWITCH_ROADS_ON( 979.76500000, -431.06020000, 24.56730000, 958.92610000, -433.24300000, 26.99120000 );
    SWITCH_ROADS_ON( 1026.37300000, -396.48070000, 18.30530000, 1030.34800000, -377.17590000, 22.40250000 );
    SWITCH_ROADS_ON( 941.81830000, -386.69560000, 14.47480000, 961.28520000, -398.22780000, 17.02180000 );
    SWITCH_ROADS_ON( 980.72930000, -402.68550000, 14.78430000, 962.00280000, -384.36620000, 17.10080000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2472()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2522(unknown uParam0)
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

void sub_2958(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_2977();
    return;
}

void sub_2977()
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

void sub_3145(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3229( "\n PED NUMBER ", uParam0 );
    sub_3269( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3229(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3269(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3364()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3419()
{
    if ((l_U498 == 0) || (l_U498 > 6))
    {
        if (IS_VEH_DRIVEABLE( l_U545 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
            {
                if (NOT l_U514)
                {
                    SET_CAN_BURST_CAR_TYRES( l_U545, 0 );
                    l_U514 = 1;
                }
                if (l_U494 == 0)
                {
                    if (NOT l_U501)
                    {
                        REMOVE_BLIP( l_U534 );
                        REMOVE_BLIP( l_U535 );
                        ADD_BLIP_FOR_COORD( l_U516._fU0, l_U516._fU4, l_U516._fU8, ref l_U535 );
                        SET_ROUTE( l_U535, 1 );
                        PRINT_NOW( "INT4_26", 7500, 1 );
                        l_U511 = 0;
                        l_U501 = 1;
                    }
                }
                if (DOES_CHAR_EXIST( l_U537 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U537 )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 ))
                        {
                            if (l_U494 == 1)
                            {
                                if (NOT l_U501)
                                {
                                    REMOVE_BLIP( l_U534 );
                                    REMOVE_BLIP( l_U535 );
                                    ADD_BLIP_FOR_COORD( l_U519._fU0, l_U519._fU4, l_U519._fU8, ref l_U535 );
                                    SET_ROUTE( l_U535, 1 );
                                    if (NOT sub_3791())
                                    {
                                        PRINT_NOW( "INT4_01", 7500, 1 );
                                    }
                                    l_U501 = 1;
                                    SETTIMERB( 0 );
                                    SETTIMERA( 0 );
                                    l_U511 = 0;
                                }
                            }
                            if (l_U494 == 2)
                            {
                                if (NOT l_U501)
                                {
                                    REMOVE_BLIP( l_U534 );
                                    REMOVE_BLIP( l_U535 );
                                    SET_ROUTE( l_U535, 0 );
                                    if (l_U495 > 1)
                                    {
                                        sub_3947( ref l_U562, 0 );
                                        sub_3947( ref l_U568, 0 );
                                        PRINT_NOW( "INT4_02", 7500, 1 );
                                    }
                                    l_U501 = 1;
                                    SETTIMERB( 0 );
                                    SETTIMERA( 0 );
                                    l_U511 = 0;
                                }
                            }
                            if (l_U494 == 3)
                            {
                                if (NOT l_U501)
                                {
                                    if (NOT sub_3791())
                                    {
                                        REMOVE_BLIP( l_U534 );
                                        REMOVE_BLIP( l_U535 );
                                        ADD_BLIP_FOR_COORD( l_U522._fU0, l_U522._fU4, l_U522._fU8, ref l_U535 );
                                        SET_ROUTE( l_U535, 1 );
                                        PRINT_NOW( "INT4_B6", 7500, 1 );
                                        l_U501 = 1;
                                        SETTIMERB( 0 );
                                        SETTIMERA( 0 );
                                        l_U511 = 0;
                                    }
                                }
                            }
                            if ((l_U492 > 1) AND (l_U492 < 4))
                            {
                                if (l_U512)
                                {
                                    if (TIMERB() > 4000)
                                    {
                                        if (g_U64716 == 0)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            if (l_U498 < 7)
                                            {
                                                sub_4380( "R5_CAR1", ref l_U562, 6, 1 );
                                            }
                                        }
                                        else if (g_U64716 == 1)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            if (l_U498 < 7)
                                            {
                                                sub_4380( "R5_CAR1v2", ref l_U562, 6, 1 );
                                            }
                                        }
                                        l_U512 = 0;
                                    }
                                }
                            }
                            if (l_U492 == 4)
                            {
                                if (l_U512)
                                {
                                    if (TIMERB() > 4000)
                                    {
                                        if (g_U64716 == 0)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            sub_4380( "R5_CAR3", ref l_U562, 6, 1 );
                                        }
                                        else if (g_U64716 == 1)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            sub_4380( "R5_CAR3v2", ref l_U562, 6, 1 );
                                        }
                                        else if (g_U64716 == 2)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            sub_4380( "R5_CAR3", ref l_U562, 6, 1 );
                                        }
                                        else if (g_U64716 == 3)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            sub_4380( "R5_CAR3v2", ref l_U562, 6, 1 );
                                        }
                                        else if (g_U64716 > 3)
                                        {
                                            sub_3947( ref l_U568, 1 );
                                            sub_4380( "R5_CAR3", ref l_U562, 6, 1 );
                                        };;;;;
                                        l_U512 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (l_U514)
            {
                SET_CAN_BURST_CAR_TYRES( l_U545, 1 );
                l_U514 = 0;
            }
            if (l_U492 < 5)
            {
                if (l_U501)
                {
                    l_U512 = 1;
                    REMOVE_BLIP( l_U534 );
                    REMOVE_BLIP( l_U535 );
                    ADD_BLIP_FOR_CAR( l_U545, ref l_U534 );
                    SET_BLIP_AS_FRIENDLY( l_U534, 1 );
                    if (l_U493 > 6)
                    {
                        if (sub_5863( l_U562 ))
                        {
                            sub_6034( ref l_U562 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U545 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U537 )))
                            {
                                if (IS_CHAR_IN_CAR( l_U537, l_U545 ))
                                {
                                    sub_6536( "R5_OUT", ref l_U568, 6, 1 );
                                }
                            }
                        }
                    }
                    SETTIMERB( 0 );
                    l_U501 = 0;
                }
                else if (NOT (sub_5863( l_U568 )))
                {
                    if (TIMERB() > 500)
                    {
                        if (l_U511 == 0)
                        {
                            PRINT_NOW( "INT4_CR", 7500, 1 );
                            l_U511 = 1;
                        }
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U534 ))
            {
                REMOVE_BLIP( l_U534 );
            }
            if (DOES_BLIP_EXIST( l_U535 ))
            {
                REMOVE_BLIP( l_U535 );
            };;;
        }
    }
    return;
}

void sub_3791()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_3947(int iParam0, unknown uParam1)
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

void sub_4380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4403( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_4403(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_4467( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_4467(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4489( iParam1 )))
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
    sub_5181( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4489(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4566( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4566( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4566( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4566(unknown uParam0)
{
    return;
}

void sub_5181(int iParam0, int iParam1)
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

int sub_5863(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4566( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4566( "\n speech is not playing" );
    }
    return 0;
}

int sub_6034(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_4566( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_4566( "\n CONVERSATION PAUSED AT LINE " );
            sub_6190( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_4566( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_4566( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_4566( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_6190(unknown uParam0)
{
    return;
}

void sub_6536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6559( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_6559(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4467( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_6857()
{
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "Rom5_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        CLEAR_NAMED_CUTSCENE( "Rom5_a" );
    }
    SET_NO_RESPRAYS( 1 );
    REQUEST_MODEL( -650575089 );
    REQUEST_ANIMS( "MISSROMAN5" );
    REQUEST_MODEL( -268530289 );
    LOAD_ALL_OBJECTS_NOW();
    while (((NOT (HAS_MODEL_LOADED( -650575089 ))) || (NOT (HAS_MODEL_LOADED( -268530289 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSROMAN5" ))))
    {
        WAIT( 0 );
    }
    while (NOT (sub_7108( ref l_U545 )))
    {
        WAIT( 0 );
    }
    CLEAR_AREA( 810.96340000, -259.98560000, 14.33770000, 2.00000000, 1 );
    SET_CHAR_COORDINATES( sub_2472(), 810.96340000, -259.98560000, 14.33770000 );
    SET_CHAR_HEADING( sub_2472(), 145 );
    SET_CHAR_VISIBLE( sub_2472(), 0 );
    SET_CHAR_VISIBLE( sub_2472(), 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2472() );
    SET_CAM_BEHIND_PED( sub_2472() );
    LOAD_SCENE( 809.71300000, -267.02330000, 16.33780000 );
    SUPPRESS_CAR_MODEL( -1932515764 );
    SET_PLAYER_CONTROL( sub_3364(), 1 );
    SUPPRESS_CAR_MODEL( 2046537925 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 1000 );
    l_U492 = 1;
    l_U501 = 1;
    return;
}

int sub_7108(unknown uParam0)
{
    int iVar3;
    int iVar4;
    vector vVar5;
    float fVar8;

    if (g_U9943[1]._fU0)
    {
        return sub_7134( uParam0 );
    }
    iVar3 = -1932515764;
    iVar4 = -464206860;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar5 = {808.86000000, -265.03120000, 14.53780000};
    fVar8 = 343.59120000;
    CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar5.x, vVar5.y, vVar5.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
    SET_CAR_HEADING( (uParam0^), fVar8 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    return 1;
}

int sub_7134(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -1932515764;
    if (g_U9943[2]._fU0)
    {
        iVar3 = 2006918058;
    }
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {589.28430000, 1430.80900000, 10.00540000};
    fVar7 = 1.95590000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    if (iVar3 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( (uParam0^), 2 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 0.00000000 );
    }
    else
    {
        CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
        SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    }
    return 1;
}

void sub_7867()
{
    if ((l_U493 > 1) AND (l_U493 < 5))
    {
        if (TIMERA() > 500)
        {
            if (sub_7912())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U537 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U545 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U537, l_U545 )))
                        {
                            CLEAR_CHAR_TASKS( l_U537 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U537, l_U545, 1 );
                            CLOSE_ALL_CAR_DOORS( l_U545 );
                        }
                    }
                }
                l_U502 = 1;
                l_U493 = 3;
            }
        }
    }
    switch (l_U493)
    {
        case 0:
        if (IS_VEH_DRIVEABLE( l_U545 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
            {
                if ((LOCATE_CHAR_IN_CAR_3D( sub_2472(), l_U516._fU0, l_U516._fU4, l_U516._fU8, 2.50000000, 2.50000000, 2.50000000, l_U501 )) AND (sub_8340( 1, 1 )))
                {
                    l_U502 = 0;
                    SET_ROUTE( l_U535, 0 );
                    BEGIN_CAM_COMMANDS( ref l_U490 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    DISABLE_FRONTEND_RADIO();
                    sub_8676();
                    CLEAR_PRINTS();
                    SET_PLAYER_CONTROL( sub_3364(), 0 );
                    STOP_PED_SPEAKING( sub_2472(), 1 );
                    SOUND_CAR_HORN( l_U545, 700 );
                    l_U493++;
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                }
            }
        }
        break;
        case 1:
        if (TIMERB() > 1000)
        {
            if (IS_VEH_DRIVEABLE( l_U545 ))
            {
                CLEAR_AREA( 937.70010000, 335.41840000, 32.45610000, 6.00000000, 1 );
                CREATE_CHAR( 26, -650575089, 937.70010000, 335.41840000, 32.45610000, ref l_U537, 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U537, 0 );
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U531._fU0, l_U531._fU4, l_U531._fU8, 1.50000000, -1784940595 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1784940595, l_U531, 1, 0.60000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U531._fU0, l_U531._fU4, l_U531._fU8, 1.50000000, -1784940595 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1784940595, l_U531, 0, 0.00000000 );
                }
                SET_PED_ALPHA( l_U537, 255 );
                SET_AMBIENT_VOICE_NAME( l_U537, "JERMAINE" );
                SET_CHAR_RELATIONSHIP_GROUP( l_U537, 23 );
                SET_RELATIONSHIP( 0, 23, 0 );
                SET_CHAR_HEADING( l_U537, 244.00000000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U537, 23 );
                sub_3145( 1, l_U537, "JERMAINE", 0 );
                SET_WANTED_MULTIPLIER( 0.50000000 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2472(), 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U537, 0 );
                CREATE_OBJECT( -268530289, 937.70000000, 335.40000000, 32.40000000, ref l_U536, 1 );
                ATTACH_OBJECT_TO_PED( l_U536, l_U537, 1232, l_U525, l_U528, 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                OPEN_SEQUENCE_TASK( ref l_U561 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "walk_destroy", "missroman5", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 940.81180000, 333.46490000, 30.21430000, 2, 10000 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U545, 20000, 1 );
                CLOSE_SEQUENCE_TASK( l_U561 );
                if (NOT (IS_CHAR_IN_CAR( l_U537, l_U545 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U537, l_U561 );
                    CLEAR_SEQUENCE_TASK( l_U561 );
                }
                CREATE_CAM( 14, ref l_U553[0] );
                CREATE_CAM( 14, ref l_U553[1] );
                CREATE_CAM( 3, ref l_U558[0] );
                SET_CAM_POS( l_U553[0], 954.79790000, 316.67460000, 31.28733000 );
                SET_CAM_ROT( l_U553[0], 13.77440000, -0.00000000, 31.89154000 );
                SET_CAM_FOV( l_U553[0], 44.00000000 );
                SET_CAM_POS( l_U553[1], 948.34660000, 324.69960000, 32.04241000 );
                SET_CAM_ROT( l_U553[1], 0.85287400, -0.00000000, 42.27483000 );
                SET_CAM_FOV( l_U553[1], 44.00000000 );
                SET_CAM_ACTIVE( l_U558[0], 0 );
                SET_CAM_PROPAGATE( l_U558[0], 0 );
                SET_CAM_ACTIVE( l_U553[0], 0 );
                SET_CAM_PROPAGATE( l_U553[0], 0 );
                SET_CAM_ACTIVE( l_U558[0], 1 );
                SET_CAM_PROPAGATE( l_U558[0], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U558[0], l_U553[0], l_U553[1], 18000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SETTIMERB( 0 );
                l_U493++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U537 )))
        {
            SET_PED_ENABLE_LEG_IK( l_U537, 1 );
        }
        if (TIMERB() > 1000)
        {
            if (NOT (IS_CHAR_INJURED( l_U537 )))
            {
                SETTIMERA( 0 );
                l_U493++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U537 )))
        {
            SET_PED_ENABLE_LEG_IK( l_U537, 1 );
            if (NOT l_U505)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U537, "missroman5", "walk_destroy" ))
                {
                    SET_CHAR_ANIM_CURRENT_TIME( l_U537, "missroman5", "walk_destroy", 0.70000000 );
                    l_U505 = 1;
                }
            }
            if (NOT l_U506)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U537, "missroman5", "walk_destroy" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U537, "missroman5", "walk_destroy", ref l_U499 );
                    if (l_U499 >= 0.85000000)
                    {
                        DETACH_OBJECT( l_U536, 1 );
                        l_U506 = 1;
                    }
                }
            }
        }
        if (TIMERA() > 1500)
        {
            SETTIMERA( 0 );
            l_U493++;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U537 )))
        {
            if (IS_VEH_DRIVEABLE( l_U545 ))
            {
                if (NOT l_U506)
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U537, "missroman5", "walk_destroy" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U537, "missroman5", "walk_destroy", ref l_U499 );
                        if (l_U499 >= 0.92700000)
                        {
                            DETACH_OBJECT( l_U536, 1 );
                            l_U506 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U537 )))
                {
                    SET_PED_ENABLE_LEG_IK( l_U537, 1 );
                }
                if (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 ))
                {
                    sub_10467();
                    ENABLE_FRONTEND_RADIO();
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U537, 1 );
                    SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U537, 1 );
                    SET_PLAYER_CONTROL( sub_3364(), 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_CAM_BEHIND_PED( sub_2472() );
                    END_CAM_COMMANDS( ref l_U490 );
                    DELETE_OBJECT( ref l_U536 );
                    REMOVE_BLIP( l_U535 );
                    ADD_BLIP_FOR_COORD( l_U519._fU0, l_U519._fU4, l_U519._fU8, ref l_U535 );
                    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
                    if (NOT l_U502)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    else
                    {
                        DO_SCREEN_FADE_IN( 500 );
                    }
                    l_U493++;
                    SETTIMERA( 0 );
                }
                else if (TIMERA() > 15000)
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    CLEAR_CHAR_TASKS( l_U537 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U537, l_U545, 5000, 1 );
                    SETTIMERA( 0 );
                }
            }
        }
        break;
        case 5:
        if (TIMERA() > 200)
        {
            if (IS_VEH_DRIVEABLE( l_U545 ))
            {
                if (IS_CHAR_IN_CAR( sub_2472(), l_U545 ))
                {
                    sub_6536( "R5_GO1", ref l_U568, 6, 1 );
                    l_U493++;
                    SETTIMERA( 0 );
                }
            }
        }
        break;
        case 6:
        if (TIMERA() > 100)
        {
            if (NOT (sub_5863( l_U568 )))
            {
                if (IS_VEH_DRIVEABLE( l_U545 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
                    {
                        l_U501 = 0;
                    }
                    else
                    {
                        l_U501 = 1;
                    }
                    l_U494 = 1;
                    l_U493++;
                    sub_6536( "R5_DIRECT", ref l_U568, 6, 1 );
                    SETTIMERA( 0 );
                }
            }
        }
        break;
        case 7:
        if (NOT (sub_5863( l_U568 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
            {
                PRINT_NOW( "INT4_01", 7500, 1 );
            }
            l_U493++;
            SETTIMERA( 0 );
        }
        break;
        case 8:
        if (TIMERA() > 7000)
        {
            if (NOT (IS_CHAR_INJURED( l_U537 )))
            {
                if (IS_VEH_DRIVEABLE( l_U545 ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 )) AND (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 )))
                    {
                        if (g_U64716 == 0)
                        {
                            if (NOT (sub_5863( l_U568 )))
                            {
                                if (sub_6536( "R5_CAR1", ref l_U562, 6, 1 ))
                                {
                                    l_U493++;
                                    l_U492 = 2;
                                    SETTIMERA( 0 );
                                    SETTIMERB( 0 );
                                }
                            }
                        }
                        else if (g_U64716 == 1)
                        {
                            if (NOT (sub_5863( l_U568 )))
                            {
                                if (sub_6536( "R5_CAR1v2", ref l_U562, 6, 1 ))
                                {
                                    l_U493++;
                                    l_U492 = 2;
                                    SETTIMERA( 0 );
                                    SETTIMERB( 0 );
                                }
                            }
                        }
                        else if (g_U64716 > 1)
                        {
                            l_U493++;
                            l_U492 = 2;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        };;;
                    }
                }
            }
        }
        break;
    }
    return;
}

int sub_7912()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_8340(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2472() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2472(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2472() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2472(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2472()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2472() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2472() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3364() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3364() )))
    {
        return 0;
    }
    return 1;
}

void sub_8676()
{
    return sub_8687( 1, 1 );
}

int sub_8687(boolean bParam0, unknown uParam1)
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

void sub_10467()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_11479()
{
    if (l_U504)
    {
        if (sub_7912())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U546[1] )))
            {
                if (l_U498 < 4)
                {
                    START_PLAYBACK_RECORDED_CAR( l_U546[1], 181 );
                }
            }
            l_U498 = 6;
            SETTIMERB( 7500 );
            l_U504 = 0;
            l_U502 = 1;
        }
    }
    switch (l_U498)
    {
        case 0:
        if (sub_11706())
        {
            if (sub_11755())
            {
                if ((((LOCATE_CHAR_IN_CAR_3D( sub_2472(), l_U519._fU0, l_U519._fU4, l_U519._fU8, 2.50000000, 2.50000000, 2.50000000, l_U501 )) AND (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 ))) AND (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))) AND (sub_8340( 1, 1 )))
                {
                    SWITCH_ROADS_OFF( 999.06590000, -369.22030000, 18.95130000, 980.94450000, -377.36490000, 22.58970000 );
                    SWITCH_ROADS_OFF( 961.53420000, -392.46890000, 35.64550000, 935.20840000, -417.40050000, 37.56270000 );
                    SWITCH_ROADS_OFF( 979.76500000, -431.06020000, 24.56730000, 958.92610000, -433.24300000, 26.99120000 );
                    SWITCH_ROADS_OFF( 1026.37300000, -396.48070000, 18.30530000, 1030.34800000, -377.17590000, 22.40250000 );
                    SWITCH_ROADS_OFF( 941.81830000, -386.69560000, 14.47480000, 961.28520000, -398.22780000, 17.02180000 );
                    SWITCH_ROADS_OFF( 980.72930000, -402.68550000, 14.78430000, 962.00280000, -384.36620000, 17.10080000 );
                    SET_CREATE_RANDOM_COPS( 0 );
                    SET_ROUTE( l_U535, 0 );
                    sub_3947( ref l_U562, 0 );
                    l_U502 = 0;
                    SET_PLAYER_CONTROL( sub_3364(), 0 );
                    SET_POLICE_IGNORE_PLAYER( sub_3364(), 1 );
                    BEGIN_CAM_COMMANDS( ref l_U490 );
                    CLEAR_AREA( l_U519._fU0, l_U519._fU4, l_U519._fU8, 5.00000000, 1 );
                    CREATE_CAM( 14, ref l_U553[2] );
                    SET_CAM_POS( l_U553[2], 974.56930000, -364.10510000, 17.77247000 );
                    SET_CAM_ROT( l_U553[2], -11.73481000, 0.00000000, 116.08560000 );
                    SET_CAM_FOV( l_U553[2], 35.00000000 );
                    SET_CAM_ACTIVE( l_U553[2], 1 );
                    SET_CAM_PROPAGATE( l_U553[2], 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    CLEAR_PRINTS();
                    DISPLAY_RADAR( 0 );
                    REQUEST_MODEL( 2046537925 );
                    REQUEST_MODEL( -183203150 );
                    REQUEST_CAR_RECORDING( 180 );
                    REQUEST_CAR_RECORDING( 181 );
                    SETTIMERB( 0 );
                    l_U498++;
                }
            }
        }
        break;
        case 1:
        if (TIMERB() > 500)
        {
            if (sub_11706())
            {
                if (sub_11755())
                {
                    sub_3947( ref l_U562, 0 );
                    sub_6536( "R5_LOCK1", ref l_U562, 6, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U561 );
                    TASK_LEAVE_CAR( 0, l_U545 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, 957.76620000, -371.82460000, 15.54300000, 2, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U561 );
                    SETTIMERB( 0 );
                    l_U498++;
                }
            }
        }
        break;
        case 2:
        if (TIMERB() > 1000)
        {
            if (sub_11706())
            {
                if (sub_11755())
                {
                    TASK_PERFORM_SEQUENCE( l_U537, l_U561 );
                    CLEAR_SEQUENCE_TASK( l_U561 );
                    SETTIMERB( 0 );
                    l_U498++;
                }
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U497 );
        if (TIMERB() > 4000)
        {
            while ((((NOT (HAS_MODEL_LOADED( 2046537925 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 180 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 181 )))) || (NOT (HAS_MODEL_LOADED( -183203150 ))))
            {
                WAIT( 0 );
            }
            CLEAR_AREA_OF_CARS( 944.00000000, -390.00000000, 15.00000000, 30.00000000 );
            CLEAR_AREA_OF_CARS( 954.00000000, -390.00000000, 15.00000000, 30.00000000 );
            CLEAR_AREA_OF_CARS( 964.00000000, -390.00000000, 15.00000000, 30.00000000 );
            CLEAR_HELP();
            CLEAR_AREA( 955.88560000, -390.38170000, 16.17380000, 10.00000000, 1 );
            CREATE_CAR( 2046537925, 951.51980000, -371.24840000, 15.54240000, ref l_U546[0], 1 );
            SET_CAR_HEADING( l_U546[0], 212.95820000 );
            FORCE_CAR_LIGHTS( l_U546[0], 2 );
            SWITCH_CAR_SIREN( l_U546[0], 1 );
            CREATE_CHAR_INSIDE_CAR( l_U546[0], 6, -183203150, ref l_U538[0] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[0], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[0], 7, 30000, 0 );
            CREATE_CHAR_AS_PASSENGER( l_U546[0], 6, -183203150, 0, ref l_U538[1] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[1], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[1], 7, 30000, 0 );
            CREATE_CHAR_AS_PASSENGER( l_U546[0], 6, -183203150, 1, ref l_U538[4] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[4], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[4], 7, 30000, 0 );
            CREATE_CAR( 2046537925, 986.33330000, -389.70540000, 15.78600000, ref l_U546[1], 1 );
            SET_CAR_HEADING( l_U546[1], 346.19230000 );
            FORCE_CAR_LIGHTS( l_U546[1], 2 );
            SWITCH_CAR_SIREN( l_U546[1], 1 );
            CREATE_CHAR_INSIDE_CAR( l_U546[1], 6, -183203150, ref l_U538[2] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[2], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[2], 7, 30000, 0 );
            CREATE_CHAR_AS_PASSENGER( l_U546[1], 6, -183203150, 0, ref l_U538[3] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[3], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[3], 7, 30000, 0 );
            CREATE_CHAR_AS_PASSENGER( l_U546[1], 6, -183203150, 2, ref l_U538[5] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U538[5], 1 );
            GIVE_WEAPON_TO_CHAR( l_U538[5], 7, 30000, 0 );
            SET_CAM_POS( l_U553[2], 969.04940000, -388.56260000, 18.46878000 );
            SET_CAM_ROT( l_U553[2], -8.11214000, -0.00000000, 89.11460000 );
            SET_CAM_FOV( l_U553[2], 35.00000000 );
            CREATE_CAM( 14, ref l_U553[3] );
            SET_CAM_POS( l_U553[3], 967.32440000, -383.66940000, 15.96222000 );
            SET_CAM_ROT( l_U553[3], 13.54909000, 0.00000000, 107.11360000 );
            SET_CAM_FOV( l_U553[3], 35.00000000 );
            CREATE_CAM( 3, ref l_U558[1] );
            SET_CAM_ACTIVE( l_U558[1], 0 );
            SET_CAM_PROPAGATE( l_U558[1], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U558[1], l_U553[2], l_U553[3], 8000, 0 );
            SET_CAM_ACTIVE( l_U558[1], 1 );
            SET_CAM_PROPAGATE( l_U558[1], 1 );
            PRINT_HELP( "VL2_10" );
            if (NOT (IS_CAR_DEAD( l_U546[0] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U546[0], 180 );
            }
            l_U498++;
            l_U504 = 1;
            SETTIMERB( 0 );
        }
        break;
        case 4:
        if (TIMERB() > 1500)
        {
            if (NOT (IS_CAR_DEAD( l_U546[1] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U546[1], 181 );
            }
            SET_CAM_ACTIVE( l_U553[3], 1 );
            SET_CAM_PROPAGATE( l_U553[3], 0 );
            SETTIMERB( 0 );
            l_U498++;
        }
        break;
        case 5:
        if (TIMERB() > 4500)
        {
            SET_CAM_ACTIVE( l_U558[1], 0 );
            SET_CAM_PROPAGATE( l_U558[1], 0 );
            SET_CAM_ACTIVE( l_U553[3], 0 );
            CREATE_CAM( 14, ref l_U553[0] );
            SET_CAM_POS( l_U553[0], 953.99460000, -360.40290000, 19.10296000 );
            SET_CAM_ROT( l_U553[0], -16.04683000, 0.00000000, -165.11520000 );
            SET_CAM_ACTIVE( l_U553[0], 1 );
            SET_CAM_PROPAGATE( l_U553[0], 1 );
            SET_CAM_FOV( l_U553[0], 55.00000000 );
            CREATE_CAM( 14, ref l_U553[1] );
            SET_CAM_POS( l_U553[1], 954.16090000, -361.02880000, 20.25313000 );
            SET_CAM_ROT( l_U553[1], -19.94295000, -0.00000000, -165.11520000 );
            SET_CAM_ACTIVE( l_U553[1], 1 );
            SET_CAM_PROPAGATE( l_U553[1], 0 );
            SET_CAM_FOV( l_U553[1], 55.00000000 );
            CREATE_CAM( 3, ref l_U558[0] );
            SET_CAM_ACTIVE( l_U558[0], 0 );
            SET_CAM_PROPAGATE( l_U558[0], 0 );
            SET_CAM_ACTIVE( l_U553[0], 0 );
            SET_CAM_PROPAGATE( l_U553[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U558[0], l_U553[0], l_U553[1], 13000, 0 );
            SET_CAM_ACTIVE( l_U558[0], 1 );
            SET_CAM_PROPAGATE( l_U558[0], 1 );
            GET_GAME_TIMER( ref l_U496 );
            if (sub_11706())
            {
                if (sub_11755())
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    if (NOT (IS_CAR_DEAD( l_U546[0] )))
                    {
                        TASK_LOOK_AT_VEHICLE( l_U537, l_U546[0], 10000, 0 );
                    }
                    TASK_ENTER_CAR_AS_PASSENGER( l_U537, l_U545, 7000, -1 );
                    sub_3947( ref l_U562, 0 );
                    sub_6536( "R5_LOCK2", ref l_U562, 6, 1 );
                }
            }
            PRINT_HELP( "VL2_28" );
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3364(), 2 )))
            {
                SET_FAKE_WANTED_LEVEL( 2 );
            }
            SETTIMERB( 0 );
            l_U498++;
        }
        break;
        case 6:
        if (TIMERB() > 6500)
        {
            CLEAR_HELP();
            DESTROY_ALL_CAMS();
            if (NOT l_U502)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
            SET_POLICE_IGNORE_PLAYER( sub_3364(), 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            SET_MAX_WANTED_LEVEL( 4 );
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3364(), 2 )))
            {
                SET_FAKE_WANTED_LEVEL( 2 );
            }
            if (NOT (IS_CHAR_INJURED( l_U537 )))
            {
                if (IS_VEH_DRIVEABLE( l_U545 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U537, l_U545 )))
                    {
                        CLEAR_CHAR_TASKS( l_U537 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U537, l_U545, 1 );
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( l_U546[0] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U546[0] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U546[0] );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U546[1] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U546[1] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U546[1] );
                }
            }
            l_U504 = 0;
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            if (IS_VEH_DRIVEABLE( l_U545 ))
            {
                SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U545, 1 );
            }
            END_CAM_COMMANDS( ref l_U490 );
            l_U498++;
            sub_3947( ref l_U562, 0 );
            sub_3947( ref l_U568, 0 );
            GET_CAR_HEADING( l_U545, ref l_U500 );
            sub_6536( "R5_WANT", ref l_U562, 6, 1 );
            REMOVE_BLIP( l_U534 );
            REMOVE_BLIP( l_U535 );
            SET_PLAYER_CONTROL( sub_3364(), 1 );
            SET_CAM_BEHIND_PED( sub_2472() );
            l_U511 = 0;
            l_U501 = 0;
            l_U494 = 2;
            SETTIMERB( 0 );
            SETTIMERA( 0 );
        }
        break;
        case 7:
        if (TIMERB() > 2500)
        {
            if (IS_VEH_DRIVEABLE( l_U545 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))
                {
                    l_U501 = 0;
                }
                else
                {
                    l_U501 = 1;
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3364(), 2 )))
            {
                SET_FAKE_WANTED_LEVEL( 0 );
            }
            ALTER_WANTED_LEVEL_NO_DROP( sub_3364(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3364() );
            SWITCH_ROADS_ON( 941.81830000, -386.69560000, 14.47480000, 961.28520000, -398.22780000, 17.02180000 );
            SWITCH_ROADS_ON( 980.72930000, -402.68550000, 14.78430000, 962.00280000, -384.36620000, 17.10080000 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U546[0] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U546[1] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[1] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[2] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[3] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[4] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[5] );
            SETTIMERB( 0 );
            SETTIMERA( 0 );
            l_U498++;
            l_U492 = 3;
        }
        break;
    }
    return;
}

int sub_11706()
{
    if (IS_CHAR_INJURED( l_U537 ))
    {
        return 0;
        break;
    }
    return 1;
}

int sub_11755()
{
    if (IS_VEH_DRIVEABLE( l_U545 ))
    {
        if (IS_PLAYER_CONTROL_ON( sub_3364() ))
        {
            if (l_U509)
            {
                SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U545, 1 );
                SET_CAR_CAN_BE_DAMAGED( l_U545, 1 );
                l_U509 = 0;
            }
        }
        else if (NOT l_U509)
        {
            SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U545, 0 );
            SET_CAR_CAN_BE_DAMAGED( l_U545, 0 );
            l_U509 = 1;
        }
        if (sub_11893( l_U545 ))
        {
            sub_12086( 4 );
        }
        if (NOT (CHECK_STUCK_TIMER( l_U545, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( l_U545, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( l_U545, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( l_U545, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
        sub_12086( 3 );
    }
    else
    {
        sub_12086( 2 );
    }
    return 0;
}

int sub_11893(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2472(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2472(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2472(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U7) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U7 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U7 );
            }
        }
    }
    return 0;
}

void sub_12086(unknown uParam0)
{
    sub_12095();
    if (DOES_VEHICLE_EXIST( l_U545 ))
    {
        ADD_CAR_TO_MISSION_DELETION_LIST( l_U545 );
    }
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "INT4_MF2", 7000, 1 );
        sub_12355( 0, "R5_JDEAD", "R5AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "INT4_MF", 7000, 1 );
        sub_12355( 0, "R5_TRASH", "R5AUD", 0 );
        break;
        case 3:
        PRINT_NOW( "INT4_MF3", 7000, 1 );
        sub_12355( 0, "R5_TRASH", "R5AUD", 0 );
        break;
        case 4:
        PRINT_NOW( "INT4_MF4", 7000, 1 );
        break;
    }
    g_U64716++;
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3364(), 150 );
        SAY_AMBIENT_SPEECH( sub_2472(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_3364() )))
    {
        DESTROY_ALL_CAMS();
        g_U8219 = 1;
        sub_10467();
        DISPLAY_RADAR( 1 );
        SET_CAM_BEHIND_PED( sub_2472() );
        SET_CHAR_VISIBLE( sub_2472(), 1 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_3364(), 1 );
    }
    sub_2417();
    return;
}

void sub_12095()
{
    sub_12104();
    return;
}

void sub_12104()
{
    int iVar2;

    iVar2 = 0;
    sub_12118( iVar2 );
    sub_1506( iVar2 );
    return;
}

void sub_12118(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3364(), 150 );
    CLEAR_HELP();
    sub_330( uParam0 );
    return;
}

void sub_12355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_12399( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_12399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_17199()
{
    if (IS_WANTED_LEVEL_GREATER( sub_3364(), 0 ))
    {
        if (NOT l_U515)
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2472(), l_U519._fU0, l_U519._fU4, l_U519._fU8, 30.00000000, 30.00000000, 10.00000000, 0 ))) || (l_U495 > 4))
            {
                SET_CREATE_RANDOM_COPS( 1 );
                l_U515 = 1;
            }
        }
        switch (l_U495)
        {
            case 0:
            if (TIMERA() > 4000)
            {
                PRINT_NOW( "INT4_02", 7500, 1 );
                SETTIMERA( 0 );
                l_U495++;
            }
            break;
            case 1:
            if (TIMERA() > 3500)
            {
                if (sub_11706())
                {
                    if (IS_VEH_DRIVEABLE( l_U545 ))
                    {
                        if ((IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 )) AND (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 )))
                        {
                            SETTIMERA( 0 );
                            l_U495++;
                        }
                    }
                }
            }
            break;
            case 2:
            if (TIMERA() > 7000)
            {
                PRINT_HELP( "VL2_29" );
                SETTIMERA( 0 );
                l_U495++;
            }
            break;
            case 3:
            if (TIMERA() > 7000)
            {
                PRINT_HELP( "VL2_30" );
                SETTIMERA( 0 );
                l_U495++;
            }
            break;
            case 4:
            if (TIMERA() > 5000)
            {
                PRINT_HELP( "VL2_31" );
                if (IS_VEH_DRIVEABLE( l_U545 ))
                {
                    SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U545, 0 );
                }
                SETTIMERA( 0 );
                l_U495++;
            }
            break;
            case 5:
            if (TIMERA() > 6000)
            {
                if (PLAYER_HAS_GREYED_OUT_STARS( sub_3364() ))
                {
                    PRINT_HELP( "GREYSTARS" );
                    SETTIMERA( 0 );
                    l_U495++;
                }
            }
            break;
        }
        switch (l_U489)
        {
            case 0:
            if (PLAYER_HAS_FLASHING_STARS_ABOUT_TO_DROP( sub_3364() ))
            {
                sub_3947( ref l_U562, 1 );
                sub_6536( "R5_FLASH", ref l_U562, 6, 1 );
                l_U489++;
                SETTIMERA( 0 );
            }
            break;
            case 1:
            if (TIMERA() > 1500)
            {
                if (NOT l_U508)
                {
                    CLEAR_HELP();
                    PRINT_HELP( "VL2_EVADE" );
                    l_U508 = 1;
                }
                l_U495 = 5;
                l_U489++;
            }
            break;
        }
    }
    return;
}

void sub_18020()
{
    if (l_U504)
    {
        if (sub_7912())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U491 = 6;
            SETTIMERB( 7500 );
            SETTIMERA( 7500 );
            l_U504 = 0;
        }
    }
    if (TIMERA() > 8000)
    {
        if (NOT l_U507)
        {
            if (sub_11706())
            {
                if (IS_VEH_DRIVEABLE( l_U545 ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 )) AND (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 )))
                    {
                        if (g_U64716 == 0)
                        {
                            sub_3947( ref l_U562, 1 );
                            if (sub_6536( "R5_CAR3", ref l_U562, 6, 1 ))
                            {
                                l_U507 = 1;
                            }
                        }
                        else if (g_U64716 == 1)
                        {
                            sub_3947( ref l_U562, 1 );
                            if (sub_6536( "R5_CAR3v2", ref l_U562, 6, 1 ))
                            {
                                l_U507 = 1;
                            }
                        }
                        else if (g_U64716 == 2)
                        {
                            sub_3947( ref l_U562, 1 );
                            if (sub_6536( "R5_CAR3", ref l_U562, 6, 1 ))
                            {
                                l_U507 = 1;
                            }
                        }
                        else if (g_U64716 == 3)
                        {
                            sub_3947( ref l_U562, 1 );
                            if (sub_6536( "R5_CAR3v2", ref l_U562, 6, 1 ))
                            {
                                l_U507 = 1;
                            }
                        }
                        else if (g_U64716 > 3)
                        {
                            sub_3947( ref l_U562, 1 );
                            if (sub_6536( "R5_CAR3", ref l_U562, 6, 1 ))
                            {
                                l_U507 = 1;
                            }
                        };;;;;
                    }
                }
            }
        }
    }
    switch (l_U491)
    {
        case 0:
        SETTIMERA( 0 );
        l_U491++;
        break;
        case 1:
        if (sub_11706())
        {
            if (sub_11755())
            {
                if ((((LOCATE_CHAR_IN_CAR_3D( sub_2472(), l_U522._fU0, l_U522._fU4, l_U522._fU8, 2.50000000, 2.50000000, 2.50000000, l_U501 )) AND (IS_CHAR_SITTING_IN_CAR( l_U537, l_U545 ))) AND (IS_CHAR_SITTING_IN_CAR( sub_2472(), l_U545 ))) AND (sub_8340( 1, 1 )))
                {
                    SET_ROUTE( l_U535, 0 );
                    SET_PLAYER_CONTROL( sub_3364(), 0 );
                    sub_8676();
                    sub_3947( ref l_U562, 1 );
                    sub_3947( ref l_U568, 1 );
                    SETTIMERA( 0 );
                    l_U491++;
                }
            }
        }
        break;
        case 2:
        if (NOT (sub_5863( l_U562 )))
        {
            sub_6536( "R5_FIX", ref l_U562, 6, 1 );
            SETTIMERA( 0 );
            l_U491++;
        }
        break;
        case 3:
        if (sub_11706())
        {
            OPEN_SEQUENCE_TASK( ref l_U561 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1077.46100000, -293.06240000, 20.32160000, 2, -1, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U561 );
            TASK_PERFORM_SEQUENCE( l_U537, l_U561 );
            CLEAR_SEQUENCE_TASK( l_U561 );
            l_U504 = 1;
            BEGIN_CAM_COMMANDS( ref l_U490 );
            l_U491++;
        }
        break;
        case 4:
        if (TIMERA() > 3500)
        {
            SET_NO_RESPRAYS( 0 );
            CLEAR_AREA( 942.57120000, 332.37810000, 30.19710000, 5.00000000, 1 );
            CREATE_CAM( 14, ref l_U553[0] );
            SET_CAM_POS( l_U553[0], 1080.06100000, -277.33370000, 22.68396000 );
            SET_CAM_ROT( l_U553[0], 16.10709000, -0.00000100, 132.71400000 );
            SET_CAM_ACTIVE( l_U553[0], 1 );
            SET_CAM_PROPAGATE( l_U553[0], 1 );
            SET_CAM_FOV( l_U553[0], 45.00000000 );
            CREATE_CAM( 14, ref l_U553[1] );
            SET_CAM_POS( l_U553[1], 1079.76600000, -277.01190000, 28.46785000 );
            SET_CAM_ROT( l_U553[1], -5.72630700, -0.00000000, 138.36310000 );
            SET_CAM_ACTIVE( l_U553[1], 1 );
            SET_CAM_PROPAGATE( l_U553[1], 0 );
            SET_CAM_FOV( l_U553[1], 45.00000000 );
            CREATE_CAM( 3, ref l_U558[0] );
            SET_CAM_ACTIVE( l_U558[0], 0 );
            SET_CAM_PROPAGATE( l_U558[0], 0 );
            SET_CAM_ACTIVE( l_U553[0], 0 );
            SET_CAM_PROPAGATE( l_U553[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U558[0], l_U553[0], l_U553[1], 11000, 0 );
            SET_CAM_ACTIVE( l_U558[0], 1 );
            SET_CAM_PROPAGATE( l_U558[0], 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            PRINT_HELP( "INT4_P2" );
            SETTIMERA( 0 );
            l_U491++;
        }
        break;
        case 5:
        if (TIMERA() > 6000)
        {
            PRINT_HELP( "INT4_P3" );
            SETTIMERA( 0 );
            l_U491++;
        }
        break;
        case 6:
        if (TIMERA() > 5000)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                SET_NO_RESPRAYS( 0 );
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_FREE_RESPRAYS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_2472() );
            SET_PLAYER_CONTROL( sub_3364(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DELETE_CHAR( ref l_U537 );
            END_CAM_COMMANDS( ref l_U490 );
            sub_10467();
            sub_19709();
            l_U491++;
        }
        break;
    }
    return;
}

void sub_19709()
{
    REMOVE_BLIP( l_U534 );
    REMOVE_BLIP( l_U535 );
    sub_19742();
    CLEAR_WANTED_LEVEL( sub_3364() );
    g_U21 = 50;
    sub_12355( 0, "R5_CALL1", "R5AUD", 0 );
    sub_2417();
    return;
}

void sub_19742()
{
    sub_19751();
    return;
}

void sub_19751()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_19769();
    sub_19828( iVar2, iVar3, iVar4 );
    return;
}

void sub_19769()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_19828(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_19859( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_19859(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_19955( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_19955( ref cVar9 );
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
            sub_19955( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_19955( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_19955( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_19955( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_20532( iParam0, iVar7 );;;
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
                sub_20929( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_20929( 0, 4 );
            }
        }
    }
    if (NOT (sub_21018( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3364(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3364() );
    }
    sub_1515();
    bVar27 = true;
    uVar28 = sub_20532( iParam0, iVar7 );
    uVar29 = sub_972( iParam0 );
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
                sub_30394( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_30824();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_30909( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_30966( iParam0 );
                sub_31005( 0 );
                sub_1413( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_31113();
        }
    }
    if (bParam2)
    {
        sub_30824();
        sub_31201();
        sub_31005( 0 );
    }
    if (bParam3)
    {
        sub_30824();
        sub_31241();
        sub_31005( 0 );
        sub_1413( uVar29, 0 );
    }
    sub_859();
    return;
}

void sub_19955(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_20532(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1371( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_20929(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_21018(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_21226( uParam1 );
        break;
        case 1:
        bVar8 = sub_23304( uParam1 );
        break;
        case 2:
        bVar8 = sub_23530( uParam1 );
        break;
        case 3:
        bVar8 = sub_23680( uParam1 );
        break;
        case 4:
        bVar8 = sub_23958( uParam1 );
        break;
        case 5:
        bVar8 = sub_24261( uParam1 );
        break;
        case 6:
        bVar8 = sub_24460( uParam1 );
        break;
        case 7:
        bVar8 = sub_24686( uParam1 );
        break;
        case 8:
        bVar8 = sub_24921( uParam1 );
        break;
        case 9:
        bVar8 = sub_25296( uParam1 );
        break;
        case 10:
        bVar8 = sub_25543( uParam1 );
        break;
        case 11:
        bVar8 = sub_25682( uParam1 );
        break;
        case 12:
        bVar8 = sub_25981( uParam1 );
        break;
        case 13:
        bVar8 = sub_26209( uParam1 );
        break;
        case 14:
        bVar8 = sub_26496( uParam1 );
        break;
        case 15:
        bVar8 = sub_26778( uParam1 );
        break;
        case 16:
        bVar8 = sub_27060( uParam1 );
        break;
        case 17:
        bVar8 = sub_27261( uParam1 );
        break;
        case 18:
        bVar8 = sub_27334( uParam1 );
        break;
        case 19:
        bVar8 = sub_27548( uParam1 );
        break;
        case 20:
        bVar8 = sub_27801( uParam1 );
        break;
        case 21:
        bVar8 = sub_28048( uParam1 );
        break;
        case 22:
        bVar8 = sub_28249( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_22909( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_20532( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_28572( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_21226(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_21505( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_21505( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_21505( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_21505( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_21505( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_21505( iVar3, 0, 3, 1, 0, 0 );
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
        sub_21505( iVar3, 0, sub_22787(), sub_23053(), 0, 0 );
        break;
        default:
        sub_23212( "Friend 1", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Friend 1", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_21505(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_21516( uParam1 );
    sub_21690( uParam0, 0, uParam2 );
    sub_21690( uParam0, 1, uParam3 );
    sub_21690( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_19769();
    return;
}

void sub_21516(unknown uParam0)
{
    ADD_SCORE( sub_3364(), uParam0 );
    sub_21541( uParam0 );
    return;
}

void sub_21541(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1371( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_21690(unknown uParam0, int iParam1, int iParam2)
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
        sub_21847( uParam0 );
    }
    return;
}

void sub_21847(unknown uParam0)
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

int sub_22787()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_22909( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_22909(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_23053()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_22909( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_23212(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_23304(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 2", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 2", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23530(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_23212( "Girl 3", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Girl 3", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23680(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_21505( iVar3, 0, sub_22787(), sub_23053(), 0, 0 );
        break;
        default:
        sub_23212( "Friend 4", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Friend 4", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23958(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 5", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 5", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24261(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 7", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 7", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24460(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 7b", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 7b", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24686(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_21505( iVar3, 0, sub_22787(), sub_23053(), 0, 0 );
        break;
        default:
        sub_23212( "Friend 8", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Friend 8", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24921(unknown uParam0)
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
        sub_21505( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_21505( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_21505( iVar3, 0, sub_22787(), sub_23053(), 0, 0 );
        break;
        default:
        sub_23212( "Friend 9", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Friend 9", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25296(unknown uParam0)
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
        sub_21505( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_21505( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_21505( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_23212( "Contact 10", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_23212( "Contact 10", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25543(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_23212( "Girl 11", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Girl 11", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25682(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_23212( "Contact 12", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 12", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25981(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 13", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 13", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26209(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_21505( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_21505( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_21505( iVar3, 0, sub_22787(), sub_23053(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_23212( "Friend 15", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Friend 15", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 16", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 16", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26778(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_21505( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_23212( "Contact 18", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 18", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27060(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 19", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 19", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27261(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_23212( "Girl 20", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27334(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_23212( "Contact 21", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 21", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27548(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_21505( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_23212( "Contact 22", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 22", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27801(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_21505( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_21505( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_21505( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_23212( "Contact 24", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 24", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28048(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_21505( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_21505( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_21505( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_23212( "Contact 25", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_23212( "Contact 25", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28249(unknown uParam0)
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
        sub_21505( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_23212( "Girl 26", 1 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_23212( "Girl 26", 0 );
        sub_21505( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_28572(int iParam0, int iParam1)
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
    if (sub_28620( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_29351( iParam1 );
    }
    return;
}

int sub_28620(int iParam0, int iParam1)
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
            sub_28760( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_28760(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_28942( 0 );
    return;
}

void sub_28942(boolean bParam0)
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
        sub_29197();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_29197()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_29351(int iParam0)
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
        sub_29684( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_29684( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_29684( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_29684( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_29684( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_29684( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_29684( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_29684( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_29684( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_29684( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_29684( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_29684( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_29684( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_29684( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_29684( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_29684( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_29684( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_29684( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_29684( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_29684(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_30394(unknown uParam0, unknown uParam1)
{
    sub_30413( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_30413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_30824()
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

int sub_30909(int iParam0, int iParam1)
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

void sub_30966(unknown uParam0)
{
    sub_758();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_31005(unknown uParam0)
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

void sub_31113()
{
    sub_31122();
    return;
}

void sub_31122()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_31201()
{
    sub_31122();
    return;
}

void sub_31241()
{
    sub_31122();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}