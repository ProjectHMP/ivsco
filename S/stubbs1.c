void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U369 = 0;
    l_U370 = 0;
    l_U371 = 0;
    l_U372 = 0;
    l_U373 = 1;
    l_U374 = 1;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U378 = 0;
    l_U379 = 0;
    l_U380 = 0;
    l_U381 = 0;
    l_U382 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 0;
    l_U390 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U393 = 0;
    l_U394 = 0;
    l_U395 = 0;
    l_U396 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 1;
    l_U400 = 1;
    l_U401 = 0;
    l_U402 = 1;
    l_U403 = 0;
    l_U404 = 0;
    l_U405 = 0;
    l_U406 = 0;
    l_U407 = 0;
    l_U408 = 0;
    l_U409 = 0;
    l_U410 = 0;
    l_U411 = 0;
    l_U412 = 0;
    l_U413 = 0;
    l_U414 = 0;
    l_U415 = 1;
    l_U416 = 1;
    l_U417 = 0;
    l_U508 = {2186.94600000, 632.96290000, 5.08790000};
    l_U511 = {-167.82720000, -403.61930000, 13.61440000};
    l_U557 = 60.00000000;
    l_U558 = 20.00000000;
    l_U559 = 2355.39700000;
    l_U560 = 851.85020000;
    l_U561 = 19.21409000;
    l_U562 = 2204.59000000;
    l_U563 = 687.24630000;
    l_U564 = 4.30269400;
    l_U565 = 15.00000000;
    l_U566 = 15.00000000;
    l_U567 = 40.00000000;
    l_U568 = 17.00000000;
    l_U569 = 15.00000000;
    l_U570 = 15.00000000;
    l_U571 = 23.00000000;
    l_U572 = 20.00000000;
    l_U573 = 10.00000000;
    l_U574 = 10.00000000;
    l_U646 = 0;
    l_U647 = 0;
    l_U648 = 0;
    l_U649 = 0;
    l_U650 = 2450;
    l_U651 = 2451;
    l_U652 = 2452;
    l_U653 = 2453;
    l_U654 = 0;
    l_U655 = 0;
    l_U658 = 0;
    l_U659 = 0;
    l_U660 = 0;
    l_U661 = 1;
    l_U663 = 1026055242;
    l_U664 = -322343873;
    l_U665 = -1660661558;
    l_U666 = -92065793;
    l_U667 = 690281432;
    l_U688 = "MISSstubbs_1";
    l_U703 = 0.00000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_971();
        sub_3145();
    }
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    while (l_U373)
    {
        WAIT( 0 );
        if (NOT (l_U369 == 10))
        {
            sub_3857();
        }
        switch (l_U369)
        {
            case 0:
            sub_11312();
            break;
            case 1:
            sub_14579();
            break;
            case 2:
            sub_16682();
            break;
            case 4:
            sub_32854();
            break;
            case 5:
            sub_34116();
            break;
            case 7:
            sub_34654();
            break;
            case 6:
            sub_36559();
            break;
            case 8:
            sub_43370();
            break;
            case 9:
            sub_46727();
            break;
            case 10:
            sub_50299();
            break;
            case 11:
            sub_54433();
            break;
            case 12:
            sub_54685();
            break;
        }
        sub_62894();
    }
    sub_3145();
    return;
}

void sub_971()
{
    sub_980();
    return;
}

void sub_980()
{
    int iVar2;

    iVar2 = 2;
    sub_994( iVar2 );
    sub_2135( iVar2 );
    return;
}

void sub_994(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_1038();
        sub_1246();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1371();
            sub_1423();
            g_U11095 = 1;
        }
    }
    sub_1516();
    sub_1655();
    uVar5 = sub_1768( uParam0 );
    sub_2044( uVar5, 0 );
    return;
}

void sub_1038()
{
    if (g_U10993)
    {
        return;
    }
    sub_1065( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1186();
    }
    return;
}

void sub_1065(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1186()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1246()
{
    sub_1255();
    return;
}

void sub_1255()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1371()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1423()
{
    sub_1432();
    return;
}

void sub_1432()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1516()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1655()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1677();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1677()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1768(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1999( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1999(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2044(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2135(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2144();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2904())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2970();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2144()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2182( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2182( 1, g_U572[I] )) != 0)
            {
                sub_2468( I );
            }
        }
    }
    if (NOT sub_2634())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2182(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2468(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2553( g_U572 - 1 );
    return;
}

void sub_2553(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2634()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2182( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2904()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2970()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3145()
{
    sub_3154();
    g_U10454 = 0;
    g_U10460 = 1;
    FLUSH_PATROL_ROUTE();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    g_U2771 = 0;
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U663 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U664 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U665 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U666 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -145.91540000, -410.07050000, 11.81220000, -141.91540000, -406.07050000, 15.81220000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -182.91980000, -410.60730000, 11.32150000, -178.91980000, -406.60730000, 15.32150000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2190.15400000, 619.07050000, 3.81220000, 2263, 938.07050000, 5.81220000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2190.15400000, 619.07050000, 3.81220000, 2434, 774.07050000, 8.81220000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -137.91540000, -185.07050000, 12.81220000, -35.91540000, -113.07050000, 14.81220000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2087.15400000, 52.07050000, -3.81220000, 2277, 199.07050000, 8.81220000 );
    DONT_SUPPRESS_CAR_MODEL( l_U671 );
    REMOVE_ANIMS( l_U688 );
    DONT_SUPPRESS_CAR_MODEL( l_U663 );
    g_U9260 = 0;
    if (l_U661 == 0)
    {
        RELEASE_SOUND_ID( l_U657 );
    }
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_3702( 2 );
    SET_PED_IS_BLIND_RAGING( sub_3746(), 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3154()
{
    if (l_U18)
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
    l_U16 = 0;
    l_U15 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3702(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_3746()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3857()
{
    if (DOES_CHAR_EXIST( l_U434 ))
    {
        if (IS_CHAR_DEAD( l_U434 ))
        {
            if (DOES_BLIP_EXIST( l_U505 ))
            {
                REMOVE_BLIP( l_U505 );
            }
            if (l_U413 == 0)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2203.78000000, 667.54000000, 6.06000000, 7.00000000, 7.00000000, 40.00000000, 0 )))
                {
                    if ((((((((((((((((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2215.74000000, 662.92000000, 3.80000000, 2263.09000000, 941.96000000, 7.70000000, 200.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2202.90000000, 679.20000000, 12.80000000, 2215.50000000, 671.80000000, 4.00000000, 100.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2149.00000000, 723.00000000, 12.80000000, 2219.90000000, 668.50000000, 4.70000000, 100.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2580.39000000, 357.93000000, 5.90000000, 130.00000000, 600.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2438.39000000, 167.93000000, 5.90000000, 80.00000000, 200.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2300.39000000, 65.93000000, 5.90000000, 175.00000000, 130.00000000, 130.00000000, 0 )))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 2 );
                        sub_5070();
                    }
                }
                else if (l_U415 == 1)
                {
                    PRINT_NOW( "S1_wantd2", 7500, 3 );
                    l_U415 = 0;
                }
                l_U413 = 1;
            }
            if (NOT l_U380)
            {
                if ((NOT (IS_CHAR_IN_ANY_CAR( l_U434 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2220.07000000, 772.51480000, 4.80800000, 100.00000000, 100.00000000, 300.00000000, 0 )))
                {
                    sub_8052();
                    sub_9448();
                    l_U380 = 1;
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 )))
            {
                sub_3154();
                sub_10047();
            }
            else
            {
                sub_3154();
                if ((((((((((((((((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2215.74000000, 662.92000000, 3.80000000, 2263.09000000, 941.96000000, 7.70000000, 200.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2202.62500000, 677.75000000, 12.80000000, 2213.12500000, 671.30000000, 4.70000000, 100.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2149.00000000, 723.00000000, 12.80000000, 2219.90000000, 668.50000000, 4.70000000, 100.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2580.39000000, 357.93000000, 5.90000000, 130.00000000, 600.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2438.39000000, 167.93000000, 5.90000000, 80.00000000, 200.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2300.39000000, 65.93000000, 5.90000000, 175.00000000, 130.00000000, 130.00000000, 0 )))
                {
                    if (l_U413 == 0)
                    {
                        sub_5070();
                        l_U413 = 1;
                    }
                }
                else if (l_U415 == 1)
                {
                    PRINT_NOW( "S1_wantd2", 7500, 3 );
                    l_U415 = 0;
                }
                l_U369 = 10;
            }
        }
    }
    return;
}

void sub_5031()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5070()
{
    l_U660 = 1;
    sub_5097( 2, 4, 16383, 16383, ref l_U680 );
    sub_5444( ref l_U680, 1 );
    sub_5475( ref l_U680, 0 );
    sub_5505( ref l_U680 );
    sub_6278( 2 );
    SETTIMERA( 0 );
    ADD_SCENARIO_BLOCKING_AREA( 2201.90000000, 152.48000000, -5.00000000, 2270.55000000, 192.70000000, 8.00000000 );
    CLEAR_AREA( 2242.39000000, 177.93000000, 4.90000000, 20.00000000, 1 );
    CREATE_CHAR( 26, l_U669, 2242.39000000, 177.93000000, 4.90000000, ref l_U437, 1 );
    SET_CHAR_HEADING( l_U437, 160.00000000 );
    SET_CHAR_RELATIONSHIP( l_U437, 1, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U437, 1 );
    TASK_PLAY_ANIM( l_U437, "guard_IDLE", "MISSstubbs_1", 8.00000000, 1, 0, 0, 0, -1 );
    CREATE_CAR( l_U671, 2404.04000000, 521.89000000, 4.30000000, ref l_U466, 1 );
    SET_CAR_HEADING( l_U466, 96.00000000 );
    CREATE_CAR( l_U671, 2399.75000000, 522.57000000, 4.30000000, ref l_U467, 1 );
    SET_CAR_HEADING( l_U467, 186.00000000 );
    sub_6676( ref l_U480, 2398.93000000, 525.26000000, 4.90000000, 1, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U481, 2409.93000000, 532.26000000, 4.90000000, 357, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U482, 2404.93000000, 530.26000000, 4.90000000, 0, l_U552, l_U554, 1, 1, 1 );
    CREATE_CAR( l_U671, 2465.45000000, 395.48000000, 4.30000000, ref l_U468, 1 );
    SET_CAR_HEADING( l_U468, 96.00000000 );
    CREATE_CAR( l_U671, 2466.54000000, 391.63000000, 4.30000000, ref l_U469, 1 );
    SET_CAR_HEADING( l_U469, 354.00000000 );
    sub_6676( ref l_U483, 2469.93000000, 390.26000000, 4.90000000, 270, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U484, 2471.93000000, 394.26000000, 4.90000000, 300, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U485, 2469.93000000, 402.26000000, 4.90000000, 280, l_U552, l_U554, 1, 1, 1 );
    CREATE_CAR( l_U671, 2399.04000000, 258.89000000, 4.30000000, ref l_U470, 1 );
    SET_CAR_HEADING( l_U470, 265.00000000 );
    CREATE_CAR( l_U671, 2404.04000000, 258.41000000, 4.30000000, ref l_U471, 1 );
    SET_CAR_HEADING( l_U471, 96.00000000 );
    sub_6676( ref l_U486, 2401.93000000, 256.26000000, 4.90000000, 180, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U487, 2407.93000000, 252.26000000, 4.90000000, 180, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U488, 2398.93000000, 249.26000000, 4.90000000, 180, l_U552, l_U554, 1, 1, 1 );
    CREATE_CAR( l_U671, 2493.04000000, 551.89000000, 4.30000000, ref l_U472, 1 );
    SET_CAR_HEADING( l_U472, 310.00000000 );
    CREATE_CAR( l_U671, 2498.04000000, 71.41000000, 4.30000000, ref l_U473, 1 );
    SET_CAR_HEADING( l_U473, 130.00000000 );
    sub_6676( ref l_U489, 2488.93000000, 573.26000000, 4.90000000, 50, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U490, 2481.93000000, 548.26000000, 4.90000000, 60, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U491, 2489.93000000, 571.26000000, 4.90000000, 45, l_U552, l_U554, 1, 1, 1 );
    CREATE_CAR( l_U671, 2412.04000000, 127.89000000, 4.30000000, ref l_U474, 1 );
    SET_CAR_HEADING( l_U474, 45.00000000 );
    CREATE_CAR( l_U671, 2403.04000000, 135.41000000, 4.30000000, ref l_U475, 1 );
    SET_CAR_HEADING( l_U475, 220.00000000 );
    sub_6676( ref l_U492, 2421.93000000, 135.26000000, 4.90000000, 320, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U493, 2422.93000000, 161.26000000, 4.90000000, 350, l_U552, l_U554, 1, 1, 1 );
    sub_6676( ref l_U494, 2416.93000000, 124.26000000, 4.90000000, 330, l_U552, l_U554, 1, 1, 1 );
    ADD_BLIP_FOR_COORD( 2239.39000000, 176.93000000, 4.90000000, ref l_U506 );
    SET_ROUTE( l_U506, 1 );
    l_U406 = 1;
    return;
}

void sub_5097(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_5119( uParam0, 0, iParam4 + 0 );
    sub_5119( uParam1, 1, iParam4 + 0 );
    sub_5119( uParam2, 2, iParam4 + 0 );
    sub_5119( uParam3, 3, iParam4 + 0 );
    sub_5119( 0, 4, iParam4 + 0 );
    sub_5119( 1, 5, iParam4 + 0 );
    sub_5119( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_5119(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_5444(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_5475(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_5505(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_5575())
        {
            sub_2468( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_5702( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2468( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_2182( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_2182( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_5575()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2182( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_2468( I );
            return 1;
        }
    }
    return 0;
}

int sub_5702(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_5767( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_5767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_2182( 0, uParam0 );
        if (iVar14 == (sub_2182( 0, uParam6 )))
        {
            iVar15 = sub_2182( 3, uParam0 );
            if (iVar15 == (sub_2182( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_6278(unknown uParam0)
{
    if (g_U15862[uParam0]._fU196._fU0)
    {
        g_U94._fU72 = uParam0;
    }
    else
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_6676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7, unknown uParam8, boolean bParam9)
{
    CREATE_CHAR( 8, l_U666, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    if (bParam7)
    {
        REMOVE_ALL_CHAR_WEAPONS( (uParam0^) );
        GIVE_WEAPON_TO_CHAR( (uParam0^), 15, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( (uParam0^), 15, 1 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam5 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam6 );
    if (bParam9)
    {
        SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
        }
    }
    SET_CHAR_WILL_DO_DRIVEBYS( (uParam0^), 1 );
    SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
    SET_CHAR_ACCURACY( (uParam0^), 37 );
    return;
}

void sub_8052()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    ALTER_WANTED_LEVEL( sub_5031(), 2 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2220.07000000, 772.51480000, 4.80800000, 100.00000000, 100.00000000, 30.00000000, 0 ))
    {
        GET_GAME_TIMER( ref l_U643 );
        l_U643 += 7000;
        l_U646++;
        sub_8202( "E1S1_COMBAT", ref l_U674, 5, 1 );
    }
    for ( I = 0; I <= 8; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U418[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U418[I], l_U552 );
            SET_CHAR_RELATIONSHIP( l_U418[I], 5, 0 );
            SET_SENSE_RANGE( l_U418[I], 200.00000000 );
            GET_CHAR_COORDINATES( l_U418[I], ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            if (NOT (IS_CHAR_INJURED( sub_3746() )))
            {
                REGISTER_HATED_TARGETS_IN_AREA( l_U418[I], uVar4._fU0, uVar4._fU4, uVar4._fU8, 120.00000000 );
            }
            if (NOT (IS_CHAR_INJURED( sub_3746() )))
            {
                TASK_COMBAT( l_U418[I], sub_3746() );
            }
        }
    }
    if (l_U399 == 1)
    {
        TRIGGER_POLICE_REPORT( "E1_SCANNER_ST1_02" );
        l_U399 = 0;
    }
    l_U378 = 1;
    return;
}

void sub_8202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8225( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_8225(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8279( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8279(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8301( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_8993( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_8301(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8378( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_8378( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_8378( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_8378(unknown uParam0)
{
    return;
}

void sub_8993(int iParam0, int iParam1)
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

void sub_9448()
{
    if (NOT (IS_CHAR_INJURED( l_U428[0] )))
    {
        SET_CHAR_DECISION_MAKER( l_U428[0], l_U552 );
        SET_COMBAT_DECISION_MAKER( l_U428[0], l_U555 );
        SET_CHAR_RELATIONSHIP( l_U428[0], 5, 0 );
        SET_SENSE_RANGE( l_U428[0], 250.00000000 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U428[0], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U428[1] )))
    {
        SET_CHAR_DECISION_MAKER( l_U428[1], l_U552 );
        SET_COMBAT_DECISION_MAKER( l_U428[1], l_U555 );
        SET_CHAR_RELATIONSHIP( l_U428[1], 5, 0 );
        SET_SENSE_RANGE( l_U428[1], 250.00000000 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U428[1], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U436 )))
    {
        SET_CHAR_DECISION_MAKER( l_U436, l_U552 );
        SET_COMBAT_DECISION_MAKER( l_U436, l_U555 );
        SET_CHAR_RELATIONSHIP( l_U436, 5, 0 );
        SET_SENSE_RANGE( l_U436, 250.00000000 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U436, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U431[0] )))
    {
        SET_CHAR_DECISION_MAKER( l_U431[0], l_U552 );
        SET_COMBAT_DECISION_MAKER( l_U431[0], l_U555 );
        SET_CHAR_RELATIONSHIP( l_U431[0], 5, 0 );
        SET_SENSE_RANGE( l_U431[0], 250.00000000 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U431[0], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U431[1] )))
    {
        SET_CHAR_DECISION_MAKER( l_U431[1], l_U552 );
        SET_COMBAT_DECISION_MAKER( l_U431[1], l_U555 );
        SET_CHAR_RELATIONSHIP( l_U431[1], 5, 0 );
        SET_SENSE_RANGE( l_U431[1], 250.00000000 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U431[1], 1 );
    }
    return;
}

void sub_10047()
{
    l_U369 = 12;
    return;
}

void sub_11312()
{
    if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
    {
        # -NULL-0xc215cd( sub_3746(), ref l_U461 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3746() );
        if (IS_VEH_DRIVEABLE( l_U461 ))
        {
            SET_CAR_COORDINATES( l_U461, -38.68380000, 776.88000000, 13.99660000 );
            SET_CAR_HEADING( l_U461, 0.00000000 );
            if (NOT (sub_11433( l_U461 )))
            {
                while (NOT (sub_11500( ref l_U463, -38.68380000, 772.19340000, 13.59660000, 0.00000000 )))
                {
                    WAIT( 0 );
                }
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3746(), -35.92000000, 764.91000000, 13.72000000 );
                SET_CHAR_HEADING( sub_3746(), 90.00000000 );
            }
        }
        else
        {
            SET_CHAR_HEADING( sub_3746(), 90.00000000 );
        }
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3746() );
        while (NOT (sub_11500( ref l_U463, -38.68380000, 762.19340000, 13.59660000, 0.00000000 )))
        {
            WAIT( 0 );
        }
        SET_CHAR_COORDINATES( sub_3746(), -35.92000000, 764.91000000, 13.72000000 );
        SET_CHAR_HEADING( sub_3746(), 90.00000000 );
    }
    g_U10460 = 0;
    LOAD_ADDITIONAL_TEXT( "STUBBS1", 0 );
    sub_13298( "E1S1AUD" );
    LOAD_ADDITIONAL_TEXT( "E1S1AUD", 6 );
    sub_13445( 0, sub_3746(), "JOHNNY", 0 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U553 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U552 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U554 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U555 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U556 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U554, 75 );
    sub_13670( 2 );
    l_U517[0] = {2184.31500000, 458.16790000, 4.93140000};
    l_U517[1] = {2016.23000000, 268.96220000, 4.42890000};
    l_U517[2] = {1557.77000000, 322.25010000, 10.79840000};
    l_U517[3] = {1088.53900000, 248.75460000, 42.73410000};
    l_U517[4] = {788.54470000, 268.77300000, 40.12170000};
    l_U517[5] = {13.66640000, 264.02420000, 13.86480000};
    l_U517[6] = {l_U511};
    l_U654 = 7;
    l_U655 = 0;
    l_U575[0] = {2233.38500000, -75.13140000, -10.57290000};
    l_U600[0] = {2342.04300000, -178.13330000, 27.14920000};
    l_U625[0] = 816.00000000;
    l_U575[1] = {2726.20800000, 226.78510000, -10.91930000};
    l_U600[1] = {2862.47600000, 366.94870000, 27.85000000};
    l_U625[1] = 798.72500000;
    l_U575[2] = {2415.75000000, 161.92500000, -10.81260000};
    l_U600[2] = {2581.73700000, 123.50670000, 20.51700000};
    l_U625[2] = 308.42500000;
    l_U575[3] = {2247.85700000, 186.44040000, -10.86090000};
    l_U600[3] = {2252.61600000, 26.60730000, 36.70830000};
    l_U625[3] = 209.47500000;
    l_U575[4] = {2343.76500000, 257.53440000, -10.81280000};
    l_U600[4] = {2345.53700000, 186.77900000, 36.31290000};
    l_U625[4] = 96.52500000;
    l_U575[5] = {2468.00200000, 377.67860000, -10.86320000};
    l_U600[5] = {2522.38700000, 387.81630000, 36.64000000};
    l_U625[5] = 128.55000000;
    l_U575[6] = {2273.28400000, 616.22190000, -10.08560000};
    l_U600[6] = {2302.15600000, 644.96990000, 36.86300000};
    l_U625[6] = 195.42500000;
    l_U575[7] = {2760.01900000, 465.53490000, -10.82570000};
    l_U600[7] = {2797.46200000, 504.66250000, 36.57900000};
    l_U625[7] = 592.00000000;
    SWITCH_ROADS_OFF( 2190.15400000, 619.07050000, 3.81220000, 2263, 938.07050000, 5.81220000 );
    SWITCH_ROADS_OFF( 2190.15400000, 619.07050000, 3.81220000, 2434, 774.07050000, 8.81220000 );
    SWITCH_ROADS_OFF( 2087.15400000, 52.07050000, -3.81220000, 2277, 199.07050000, 8.81220000 );
    SUPPRESS_CAR_MODEL( l_U663 );
    ADD_SCENARIO_BLOCKING_AREA( 2189.92000000, 667.05000000, 3.00000000, 2258.00000000, 695.65000000, 10.00000000 );
    l_U370 = 0;
    l_U369 = 1;
    return;
}

void sub_11433(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

int sub_11500(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_11509();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_11657( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_11509()
{
    return 301427732;
}

void sub_11657(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_13298(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_13317();
    return;
}

void sub_13317()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_13445(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_13529( "\n PED NUMBER ", uParam0 );
    sub_13569( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_13529(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13569(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13670(int iParam0)
{
    if (iParam0 < 15)
    {
        SWITCH_CAR_GENERATOR( g_U9502[iParam0], 0 );
        g_U9261[iParam0]._fU60 = 1;
    }
    return;
}

void sub_14579()
{
    switch (l_U370)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( sub_3746() )))
        {
            l_U648 = GET_CHAR_DRAWABLE_VARIATION( sub_3746(), 1 );
            l_U649 = GET_CHAR_DRAWABLE_VARIATION( sub_3746(), 2 );
            if (l_U648 == 1)
            {
                SET_CHAR_COMPONENT_VARIATION( sub_3746(), 1, 0, 0 );
            }
            if (l_U649 == 1)
            {
                SET_CHAR_COMPONENT_VARIATION( sub_3746(), 2, 0, 0 );
            }
        }
        if (IS_BIT_SET( g_U10959._fU0, 7 ))
        {
            LOAD_ADDITIONAL_TEXT( "E1S1AUD", 6 );
            START_CUTSCENE_NOW( "TS01_AA" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "TS01_AA" );
            l_U370 = 2;
            g_U39149[9] = 0;
        }
        else
        {
            l_U370 = 7;
        }
        break;
        case 2:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U370 = 7;
        break;
        case 7:
        sub_14926();
        sub_15379();
        sub_16360( 0 );
        if (g_U39149[9] == 0)
        {
            LOAD_SCENE( -38.68380000, 762.19340000, 13.59660000 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_5031(), 1 );
        CLEAR_PRINTS();
        GET_GAME_TIMER( ref l_U645 );
        l_U662 = l_U645 + 5000;
        l_U645 += 60000;
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U461 );
        GET_GAME_TIMER( ref l_U645 );
        l_U390 = 1;
        l_U391 = 0;
        l_U392 = 0;
        l_U369 = 2;
        break;
    }
    return;
}

void sub_14926()
{
    REQUEST_MODEL( l_U663 );
    REQUEST_MODEL( l_U665 );
    REQUEST_MODEL( l_U664 );
    REQUEST_MODEL( l_U666 );
    REQUEST_MODEL( l_U667 );
    LOAD_ALL_OBJECTS_NOW();
    while (((((NOT (HAS_MODEL_LOADED( l_U663 ))) || (NOT (HAS_MODEL_LOADED( l_U665 )))) || (NOT (HAS_MODEL_LOADED( l_U664 )))) || (NOT (HAS_MODEL_LOADED( l_U666 )))) || (NOT (HAS_MODEL_LOADED( l_U667 ))))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( l_U650 );
    REQUEST_CAR_RECORDING( l_U651 );
    REQUEST_CAR_RECORDING( l_U652 );
    REQUEST_CAR_RECORDING( l_U653 );
    while ((((NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U650 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U651 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U652 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U653 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( l_U688 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAVE_ANIMS_LOADED( l_U688 )))
    {
        WAIT( 0 );
    }
    l_U669 = -1464712858;
    l_U671 = -1590284256;
    l_U670 = -1464712858;
    REQUEST_MODEL( l_U669 );
    REQUEST_MODEL( l_U671 );
    while ((NOT (HAS_MODEL_LOADED( l_U669 ))) || (NOT (HAS_MODEL_LOADED( l_U671 ))))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U671 );
    return;
}

void sub_15379()
{
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( sub_3746(), 18, 5, 1 );
    }
    l_U514 = {2253.63600000, 502.16780000, 5.58460000};
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (g_U39149[9] == 0)
        {
            LOAD_SCENE( -38.68380000, 762.19340000, 13.59660000 );
            WAIT( 100 );
        }
        else
        {
            while (NOT (sub_11500( ref l_U463, 2333.01000000, 340.63000000, 5.61000000, 0.00000000 )))
            {
                WAIT( 0 );
            }
            WARP_CHAR_INTO_CAR( sub_3746(), l_U463 );
            SET_CURRENT_CHAR_WEAPON( sub_3746(), 0, 1 );
            LOAD_SCENE( 2333.01000000, 340.63000000, 5.61000000 );
        }
        SET_CAM_BEHIND_PED( sub_3746() );
    }
    GET_TIME_OF_DAY( ref l_U637, ref l_U639 );
    l_U638 = l_U637 + 6;
    l_U641 = GET_CURRENT_DAY_OF_WEEK();
    if (l_U638 > 23)
    {
        l_U638 -= 23;
        l_U641++;
        if (l_U641 > 6)
        {
            l_U641 = 0;
        }
    }
    l_U640 = 30;
    l_U687 = l_U638 - 1;
    sub_15750( ref l_U690, 6, l_U640, 0 );
    return;
}

void sub_15750(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_15803( iParam0, uParam1, uParam2 );
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
        sub_15935( iParam0 + 0 );
    }
    return;
}

void sub_15803(int iParam0, int iParam1, int iParam2)
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
        sub_15935( iParam0 + 0 );
    }
    return;
}

void sub_15935(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_15966( iParam0->_fU4 )))
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

int sub_15966(unknown uParam0)
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

void sub_16360(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_16384( 0, 0 );
    }
    else
    {
        sub_16384( 1, 1 );
    }
    return;
}

void sub_16384(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_16682()
{
    if (l_U410 == 0)
    {
        if (g_U38761 == 1)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 1059.70000000, 114.10000000, 33.20000000, 130.00000000, 160.00000000, 130.00000000, 0 ))
            {
                PRINT_HELP( "S1_GUNSH" );
                g_U38761 = 0;
                l_U410 = 1;
            }
        }
    }
    GET_TIME_OF_DAY( ref l_U637, ref l_U639 );
    if (l_U637 > 23)
    {
        l_U637 -= 23;
    }
    if (l_U637 < l_U687)
    {
        ;
    }
    GET_GAME_TIMER( ref l_U689 );
    if (NOT l_U388)
    {
        ADD_BLIP_FOR_COORD( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U504 );
        SET_ROUTE( l_U504, 1 );
        sub_16943( ref l_U504, 2305.06100000, 557.93600000, 4.96510000, 50.00000000 );
        PRINT_WITH_2_NUMBERS( "S1_GOAL1", l_U638, l_U640, 7500, 3 );
        l_U388 = 1;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 ))
    {
        if (NOT l_U393)
        {
            REMOVE_BLIP( l_U504 );
            REMOVE_BLIP( l_U503 );
            PRINT_NOW( "S1_wanted", 7500, 3 );
            l_U393 = 1;
        }
    }
    else if (l_U393)
    {
        ADD_BLIP_FOR_COORD( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U504 );
        SET_ROUTE( l_U504, 1 );
        sub_16943( ref l_U504, 2258.94900000, 600.58510000, 4.80810000, 170.01190000 );
        l_U393 = 0;
    }
    if (NOT l_U396)
    {
        if (((((((((((((((((((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 700.00000000, 700.00000000, 300.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2257, 868, 65518, 2146, 736, 4, 108, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2190, 619, 65506, 2263, 938, 5, 108, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2190, 619, 65506, 2434, 774, 8, 108, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2595.06000000, 136.50000000, 5.30000000, 200.00000000, 200.00000000, 200.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2403.35000000, 257.71000000, 6.06000000, 40.00000000, 40.00000000, 40.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2400.59000000, 518.54000000, 6.06000000, 10.00000000, 10.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2464.59000000, 394.54000000, 6.06000000, 40.00000000, 40.00000000, 40.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2314.59000000, 69.54000000, 6.06000000, 40.00000000, 40.00000000, 40.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 )))
        {
            sub_18377();
            l_U396 = 1;
        }
    }
    if (sub_20501( l_U690 ))
    {
        l_U371 = 3;
        sub_20757();
    }
    sub_21322();
    sub_21816();
    if (l_U396 == 1)
    {
        sub_23291();
    }
    return;
}

void sub_16943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2765 = (uParam0^);
        g_U2780 = {uParam1};
        g_U2778 = uParam4;
    }
    return;
}

void sub_18377()
{
    sub_18417( ref l_U451[0], -322343873, 2228.47400000, 759.72770000, 4.80790000, 139 );
    sub_18417( ref l_U451[1], -322343873, 2234.60000000, 765.06820000, 4.80790000, 138 );
    sub_18417( ref l_U451[2], -322343873, 2242.22500000, 774.39890000, 4.80790000, 135 );
    ADD_UPSIDEDOWN_CAR_CHECK( l_U451[1] );
    CHANGE_CAR_COLOUR( l_U451[0], 0, 0 );
    CHANGE_CAR_COLOUR( l_U451[1], 0, 0 );
    CHANGE_CAR_COLOUR( l_U451[2], 0, 0 );
    sub_18417( ref l_U455[0], -322343873, 2251.31300000, 765.72660000, 5.36590000, 231 );
    sub_18417( ref l_U455[1], -322343873, 2236.52100000, 780.11240000, 5.36580000, 224 );
    sub_18417( ref l_U455[2], -322343873, 2257.58300000, 740.55470000, 5.36460000, 195 );
    sub_18417( ref l_U455[3], l_U671, 2222.58300000, 685.55470000, 5.36460000, 80 );
    sub_18417( ref l_U455[4], l_U671, 2209.58300000, 704.55470000, 5.36460000, 230 );
    FLUSH_PATROL_ROUTE();
    EXTEND_PATROL_ROUTE( 2240.89600000, 729.37370000, 4.80790000, "NONE", "NONE" );
    EXTEND_PATROL_ROUTE( 2248.13700000, 722.81130000, 4.80800000, "NONE", "NONE" );
    EXTEND_PATROL_ROUTE( 2224.13700000, 760.81130000, 4.80790000, "NONE", "NONE" );
    EXTEND_PATROL_ROUTE( 2261.98800000, 769.48130000, 4.86650000, "NONE", "NONE" );
    EXTEND_PATROL_ROUTE( 2217.98800000, 658.48130000, 4.86650000, "NONE", "NONE" );
    EXTEND_PATROL_ROUTE( 2208.98800000, 666.48130000, 4.86650000, "NONE", "NONE" );
    CREATE_OBJECT_NO_OFFSET( -243292265, 2201.87000000, 679.03000000, 7.60000000, ref l_U501, 1 );
    CREATE_OBJECT_NO_OFFSET( -978551754, 2214.43000000, 671.70000000, 7.60000000, ref l_U502, 1 );
    SET_OBJECT_HEADING( l_U501, 326.00000000 );
    SET_OBJECT_HEADING( l_U502, 150.00000000 );
    SET_OBJECT_DYNAMIC( l_U501, 0 );
    SET_OBJECT_DYNAMIC( l_U502, 0 );
    SET_OBJECT_INVINCIBLE( l_U501, 1 );
    SET_OBJECT_INVINCIBLE( l_U502, 1 );
    FREEZE_OBJECT_POSITION( l_U501, 1 );
    FREEZE_OBJECT_POSITION( l_U502, 1 );
    sub_6676( ref l_U418[0], 2273.00800000, 772.50650000, 4.80790000, 120, l_U553, l_U554, 1, 1, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U418[0], 0, 1 );
    TASK_STAND_GUARD( l_U418[0], 2273.00800000, 772.50650000, 4.80790000, 100.00000000, 20.00000000, 1, -1 );
    sub_6676( ref l_U418[1], 2238.89600000, 722.37370000, 4.80790000, 170, l_U553, l_U554, 1, 0, 0 );
    sub_6676( ref l_U418[2], 2240.13700000, 780.81130000, 4.80800000, 168, l_U553, l_U554, 1, 1, 0 );
    TASK_STAND_GUARD( l_U418[2], 2240.13700000, 780.81130000, 4.80800000, 208.00000000, 20.00000000, 1, -1 );
    sub_6676( ref l_U418[3], 2240.02400000, 776.63930000, 4.80800000, 40, l_U553, l_U554, 1, 0, 0 );
    sub_6676( ref l_U418[4], 2254.22000000, 740.71530000, 5.81250000, 90, l_U553, l_U554, 1, 1, 0 );
    TASK_STAND_GUARD( l_U418[4], 2254.22000000, 74.71530000, 5.81250000, 90.00000000, 20.00000000, 1, -1 );
    SET_CURRENT_CHAR_WEAPON( l_U418[4], 0, 1 );
    sub_6676( ref l_U418[5], 2256.59100000, 745.70830000, 5.81290000, 75, l_U553, l_U554, 1, 0, 0 );
    TASK_START_SCENARIO_IN_PLACE( l_U418[5], "Scenario_SecurityGuard", -1082130432 );
    TASK_STAND_GUARD( l_U418[5], 2273.00800000, 772.50650000, 4.80790000, 100.00000000, 20.00000000, 1, -1 );
    sub_6676( ref l_U418[6], 2200.09100000, 674.87730000, 5.04260000, 180, l_U553, l_U554, 1, 1, 0 );
    sub_13445( 2, l_U418[6], "SECRET_SERVICE_2", 0 );
    sub_6676( ref l_U418[7], 2202.39100000, 675.14970000, 4.85620000, 168, l_U553, l_U554, 1, 1, 0 );
    sub_13445( 1, l_U418[7], "SECRET_SERVICE_1", 0 );
    TASK_START_SCENARIO_IN_PLACE( l_U418[7], "Scenario_StationedCop", -1082130432 );
    sub_6676( ref l_U418[8], 2211.98800000, 670.48130000, 4.86650000, 160, l_U553, l_U554, 1, 0, 0 );
    TASK_STAND_GUARD( l_U418[8], 2211.98800000, 670.48130000, 4.86650000, 160.00000000, 25.00000000, 1, -1 );
    sub_6676( ref l_U428[0], 2254.22000000, 740.71530000, 5.81250000, 168, l_U553, l_U554, 0, 1, 0 );
    WARP_CHAR_INTO_CAR( l_U428[0], l_U451[0] );
    sub_6676( ref l_U428[1], 2256.59100000, 745.70830000, 5.81290000, 168, l_U553, l_U554, 0, 0, 0 );
    GIVE_WEAPON_TO_CHAR( l_U428[1], 13, 2500, 1 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U428[1], l_U451[0], 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U428[1], 0 );
    sub_6676( ref l_U436, 2254.22000000, 740.71530000, 5.81250000, 168, l_U553, l_U554, 0, 1, 0 );
    WARP_CHAR_INTO_CAR( l_U436, l_U451[1] );
    sub_6676( ref l_U431[0], 2254.22000000, 740.71530000, 5.81250000, 168, l_U553, l_U554, 0, 1, 0 );
    WARP_CHAR_INTO_CAR( l_U431[0], l_U451[2] );
    sub_6676( ref l_U431[1], 2256.59100000, 745.70830000, 5.81290000, 168, l_U553, l_U554, 0, 0, 0 );
    GIVE_WEAPON_TO_CHAR( l_U431[1], 13, 2500, 1 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U431[1], l_U451[2], 1 );
    sub_5097( 2, 1, 16383, 16383, ref l_U680 );
    sub_5444( ref l_U680, 1 );
    sub_5475( ref l_U680, 0 );
    sub_5505( ref l_U680 );
    sub_6278( 2 );
    l_U416 = 0;
    return;
}

void sub_18417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 3.00000000, 1 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_CAR_FORWARD_SPEED( (uParam0^), 0.00000010 );
    return;
}

int sub_20501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_20670( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_20670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_20757()
{
    REMOVE_BLIP( l_U505 );
    REMOVE_BLIP( l_U503 );
    REMOVE_BLIP( l_U504 );
    REMOVE_BLIP( l_U504 );
    if (sub_20820( l_U674 ))
    {
        sub_20992( ref l_U674, 0 );
    }
    CLEAR_PRINTS();
    CLEAR_HELP();
    switch (l_U371)
    {
        case 0:
        PRINT( "S1_FAIL1", 7500, 1 );
        break;
        case 2:
        PRINT( "S1_FAIL1", 7500, 1 );
        break;
        case 3:
        PRINT( "S1_FAIL1", 7500, 1 );
        break;
        case 1: break;
    }
    if ((((l_U371 == 1) || (l_U371 == 2)) || (l_U371 == 3)) || (l_U371 == 0))
    {
        l_U370 = 0;
        l_U374 = 1;
    }
    l_U369 = 11;
    return;
}

int sub_20820(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_8378( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8378( "\n speech is not playing" );
    }
    return 0;
}

void sub_20992(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_21322()
{
    int iVar2;

    if (NOT l_U378)
    {
        iVar2 = 0;
        GET_GAME_TIMER( ref iVar2 );
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            if (NOT l_U376)
            {
                if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2205, 650, 12, 2219, 682, 4, l_U558, 0 )) AND (iVar2 > l_U643))
                {
                    sub_8202( "E1S1_CLOSE", ref l_U674, 6, 1 );
                    GET_GAME_TIMER( ref l_U643 );
                    l_U643 += 7000;
                    l_U646++;
                    if ((NOT (IS_CHAR_DEAD( l_U418[7] ))) AND (NOT (IS_CHAR_INJURED( l_U418[7] ))))
                    {
                        TASK_AIM_GUN_AT_CHAR( l_U418[7], sub_3746(), 4000 );
                    }
                }
            }
            else if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2205, 650, 12, 2219, 682, 4, l_U558, 0 )) AND (iVar2 > l_U643))
            {
                sub_8202( "E1S1_PASSG", ref l_U674, 6, 1 );
                GET_GAME_TIMER( ref l_U643 );
                l_U643 += 7000;
                l_U646++;
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2320, 756, 3, 2238, 830, 19, 93, 0 )) AND (iVar2 > l_U642))
            {
                sub_8202( "E1S1_2CLOSE", ref l_U674, 6, 1 );
                l_U647++;
                GET_GAME_TIMER( ref l_U642 );
                l_U642 += 7000;
            }
        }
    }
    return;
}

void sub_21816()
{
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (((NOT l_U375) AND (DOES_CHAR_EXIST( l_U434 ))) AND (NOT (IS_CHAR_DEAD( l_U434 ))))
        {
            if (((((((((((((((((((((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2234.72500000, 738.02700000, -19.15700000, 143.57100000, 136.24900000, 40.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2257, 868, 65518, 2146, 736, 4, 108, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 10.00000000, 10.00000000, 15.00000000, 0 ))) || (l_U379)) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2403.35000000, 257.71000000, 6.06000000, 10.00000000, 10.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2464.59000000, 394.54000000, 6.06000000, 10.00000000, 10.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2314.59000000, 69.54000000, 6.06000000, 10.00000000, 10.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2397.59000000, 69.51000000, 6.06000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2400.59000000, 518.54000000, 6.06000000, 10.00000000, 10.00000000, 20.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2833.25000000, 341.65000000, -30.00000000, 2252.55000000, 1110.35000000, 40.00000000, 1000.00000000, 0 ))) || (sub_20501( l_U690 )))
            {
                REMOVE_BLIP( l_U504 );
                REMOVE_BLIP( l_U503 );
                REMOVE_BLIP( l_U505 );
                if (NOT (IS_CHAR_DEAD( l_U434 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U434, ref l_U505 );
                }
                l_U390 = 0;
                l_U391 = 0;
                l_U392 = 1;
                PRINT_NOW( "S1_GOAL3", 7500, 3 );
                l_U375 = 1;
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 60.00000000, 61.00000000, 60.00000000, 0 ))
                {
                    SYNCH_AMBIENT_PLANES( 2, 64536 );
                    SYNCH_AMBIENT_PLANES( 4, 6250 );
                }
                g_U39149[9] = 1;
            }
        }
    }
    return;
}

void sub_23291()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (sub_23318())
        {
            if (NOT l_U379)
            {
                if (((((((((((((((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 300, 300, 350, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2403.35000000, 257.71000000, 6.06000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2464.59000000, 394.54000000, 6.06000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2314.59000000, 69.54000000, 6.06000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2397.59000000, 69.51000000, 6.06000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 )))
                {
                    SET_WANTED_MULTIPLIER( 0.50000000 );
                    CREATE_CAR( l_U665, 3848.10300000, 409.72700000, 58.29460000, ref l_U450, 1 );
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U450, 1 );
                    START_PLAYBACK_RECORDED_CAR( l_U450, l_U650 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U450 ))
                    {
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U450, 18800.00000000 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[0] )))
                    {
                        TASK_STAND_GUARD( l_U418[0], 2273.00800000, 772.50650000, 4.80790000, 100.00000000, 30.00000000, 1, -1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[2] )))
                    {
                        TASK_STAND_GUARD( l_U418[2], 2240.13700000, 780.81130000, 4.80800000, 208.00000000, 30.00000000, 1, -1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[8] )))
                    {
                        TASK_STAND_GUARD( l_U418[8], 2211.98800000, 670.48130000, 4.86650000, 160.00000000, 30.00000000, 1, -1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[8] )))
                    {
                        TASK_LOOK_AT_VEHICLE( l_U418[8], l_U450, 10000, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[7] )))
                    {
                        TASK_LOOK_AT_VEHICLE( l_U418[7], l_U450, -2, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[5] )))
                    {
                        TASK_LOOK_AT_VEHICLE( l_U418[5], l_U450, -2, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[1] )))
                    {
                        TASK_LOOK_AT_CHAR( l_U418[1], sub_3746(), -2, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[3] )))
                    {
                        TASK_LOOK_AT_CHAR( l_U418[3], sub_3746(), 20000, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U418[4] )))
                    {
                        TASK_LOOK_AT_CHAR( l_U418[4], sub_3746(), -2, 0 );
                    }
                    if (NOT (sub_20501( l_U690 )))
                    {
                        sub_26031( ref l_U434, 3848.10300000, 409.72700000, 70.29460000, 168, l_U553, l_U556, 1, 0, 0 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U434, l_U450, 0 );
                        sub_6676( ref l_U435, 3848.10300000, 409.72700000, 70.29460000, 168, l_U553, l_U554, 1, 0, 0 );
                        sub_26341( l_U435 );
                        WARP_CHAR_INTO_CAR( l_U435, l_U450 );
                    }
                    else if (IS_VEH_DRIVEABLE( l_U451[1] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U450 ))
                        {
                            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U450 );
                        }
                        REMOVE_BLIP( l_U504 );
                        REMOVE_BLIP( l_U503 );
                        REMOVE_BLIP( l_U505 );
                        sub_6676( ref l_U434, 3848.10300000, 409.72700000, 70.29460000, 168, l_U553, l_U554, 1, 0, 0 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U434, l_U451[1], 1 );
                        sub_6676( ref l_U435, 3848.10300000, 409.72700000, 70.29460000, 168, l_U553, l_U554, 1, 0, 0 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U435, l_U451[1], 2 );
                        ADD_BLIP_FOR_CHAR( l_U434, ref l_U505 );
                        if (NOT (IS_CHAR_DEAD( l_U436 )))
                        {
                            PRINT_NOW( "S1_GOAL4", 7500, 3 );
                        }
                        l_U369 = 7;
                        l_U375 = 1;
                        l_U390 = 0;
                        l_U391 = 0;
                        l_U392 = 1;
                    }
                    l_U379 = 1;
                }
                else if (sub_20501( l_U690 ))
                {
                    l_U371 = 3;
                    sub_20757();
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U434 )))
            {
                sub_26815( ref l_U434 );
            }
            if (IS_VEH_DRIVEABLE( l_U450 ))
            {
                if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U450 ))) AND (LOCATE_CAR_2D( l_U450, 2248.00000000, 755.30000000, 20.00000000, 20.00000000, 0 )))
                {
                    if (((IS_VEH_DRIVEABLE( l_U451[1] )) || (NOT (IS_CAR_DEAD( l_U451[1] )))) || (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U451[1], sub_3746() ))))
                    {
                        if (((NOT (IS_CHAR_INJURED( l_U434 ))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_LEAVE_CAR( 0, l_U450 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2236.38800000, 764.96410000, 4.80800000, 2, -2, 0.20000000 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], -2, 1 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( l_U434, uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                            l_U369 = 7;
                        }
                        if (((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_LEAVE_CAR( 0, l_U450 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2236.38800000, 764.96410000, 4.80800000, 2, -2, 0.20000000 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], 30000, 2 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( l_U435, uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                            l_U369 = 7;
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U434 )))
                    {
                        TASK_COWER( l_U434 );
                    }
                    if (((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_LEAVE_CAR( 0, l_U450 );
                        TASK_COMBAT( 0, sub_3746() );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U435, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                }
            }
        }
    }
    if (sub_28043())
    {
        sub_8052();
        REMOVE_BLIP( l_U504 );
        REMOVE_BLIP( l_U503 );
        REMOVE_BLIP( l_U505 );
        if (DOES_CHAR_EXIST( l_U434 ))
        {
            ADD_BLIP_FOR_CHAR( l_U434, ref l_U505 );
        }
        else if (NOT l_U379)
        {
            ADD_BLIP_FOR_COORD( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U504 );
            SET_ROUTE( l_U504, 1 );
            sub_16943( ref l_U504, 2305.06100000, 557.93600000, 4.96510000, 50.00000000 );
        }
        if (sub_26975())
        {
            ;
        }
        SET_PED_IS_BLIND_RAGING( sub_3746(), 1 );
        if (sub_29405())
        {
            if (sub_29483( "E1S1_HELP", "E1S1AUD", 0 ))
            {
                if (sub_20820( l_U674 ))
                {
                    sub_20992( ref l_U674, 0 );
                }
                sub_32507( 2 );
            }
        }
        sub_32690();
        l_U369 = 4;
        l_U390 = 0;
        l_U391 = 0;
        l_U392 = 1;
    }
    return;
}

int sub_23318()
{
    if (l_U379)
    {
        return 1;
    }
    if (sub_20501( l_U690 ))
    {
        return 1;
    }
    if ((((((((((((((((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2234.72500000, 738.02700000, 19.15700000, 143.57100000, 136.24900000, 200.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2257, 868, 18, 2146, 736, 4, 108, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2403.35000000, 257.71000000, 6.06000000, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2464.59000000, 394.54000000, 6.06000000, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2314.59000000, 69.54000000, 6.06000000, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_TRAIN( sub_3746() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_26031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7, unknown uParam8, boolean bParam9)
{
    CREATE_CHAR( 8, l_U667, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    if (bParam7)
    {
        REMOVE_ALL_CHAR_WEAPONS( (uParam0^) );
        GIVE_WEAPON_TO_CHAR( (uParam0^), 15, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( (uParam0^), 15, 1 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam5 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam6 );
    ALLOW_TARGET_WHEN_INJURED( (uParam0^), 1 );
    if (bParam9)
    {
        SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
        }
    }
    SET_CHAR_WILL_DO_DRIVEBYS( (uParam0^), 1 );
    SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
    SET_CHAR_ACCURACY( (uParam0^), 37 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^), 1 );
    return;
}

void sub_26341(unknown uParam0)
{
    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        REMOVE_ALL_CHAR_WEAPONS( uParam0 );
        GIVE_WEAPON_TO_CHAR( uParam0, 13, 2500, 1 );
        if (HAS_CHAR_GOT_WEAPON( uParam0, 13 ))
        {
            SET_CURRENT_CHAR_WEAPON( uParam0, 13, 1 );
        }
    }
    return;
}

void sub_26815(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U16) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U17 + 500))
        {
            l_U16 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3746() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_26975())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U17 );
            l_U16 = 1;
            l_U15 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U15) AND (NOT l_U16))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U15 = 1;
        }
    }
    else if (l_U15)
    {
        if (l_U18)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U15 = 0;
    };;;
    return;
}

int sub_26975()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_28043()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 8; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U418[I] )))
        {
            GET_CHAR_COORDINATES( l_U418[I], ref l_U548._fU0, ref l_U548._fU4, ref l_U548._fU8 );
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U418[I], sub_3746(), 0 ))
            {
                return 1;
            }
            if ((((IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U418[I] )) AND (sub_28177( sub_3746() ))) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U418[I] )) AND (sub_28177( sub_3746() )))) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U548._fU0, l_U548._fU4, l_U548._fU8, 50.00000000, 50.00000000, 300.00000000, 0 )))
            {
                return 1;
            }
            if (((sub_28177( sub_3746() )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U548._fU0, l_U548._fU4, l_U548._fU8, 25.00000000, 25.00000000, 200.00000000, 0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3746() ))))
            {
                return 1;
            }
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U418[I], sub_3746(), 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U450 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3746(), l_U450, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2282, 910, 4, 2153, 722, 16, 90, 0 )) AND (IS_CHAR_SHOOTING( sub_3746() )))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2205, 650, 12, 2219, 682, 4, 20, 0 )) AND (sub_28177( sub_3746() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3746() ))))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2218, 667, 9, 2222, 673, 4, 50, 0 )) AND (NOT l_U376))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2266, 718, 9, 2320, 785, 3, 60, 0 ))
        {
            return 1;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U450 ))
    {
        GET_CAR_COORDINATES( l_U450, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (IS_PROJECTILE_IN_AREA( uVar3._fU0 - 20.00000000, uVar3._fU4 - 20.00000000, uVar3._fU8 - 20.00000000, uVar3._fU0 + 20.00000000, uVar3._fU4 + 20.00000000, uVar3._fU8 + 20.00000000 ))
        {
            WAIT( 4000 );
            if (IS_VEH_DRIVEABLE( l_U450 ))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if ((((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2282, 910, 4, 2153, 722, 16, 90, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2266, 718, 9, 2320, 785, 3, 60, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2218, 667, 9, 2222, 673, 4, 50, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2205, 650, 12, 2219, 682, 4, 20, 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_28177(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CURRENT_CHAR_WEAPON( uParam0, ref iVar3 );
        if ((((((((iVar3 == 7) || (iVar3 == 10)) || (iVar3 == 12)) || (iVar3 == 13)) || (iVar3 == 14)) || (iVar3 == 15)) || (iVar3 == 16)) || (iVar3 == 18))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_29405()
{
    if ((g_U94._fU0 == 1007) || (g_U94._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_29483(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_29591( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_31478( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_29591(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_8378( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_8378( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5031() )))
    {
        sub_8378( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3746() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3746() ))))
    {
        sub_8378( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_8378( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_30106()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((g_U94._fU372) || (NOT bParam8))
            {
                sub_8378( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 5) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 4))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT sub_30106()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_31478( uParam0, ref g_U94._fU176 );
    sub_31874( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_13569( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

int sub_30106()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_30163())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_30163()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5031() )))
    {
        sub_8378( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_8378( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_8378( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_8378( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5031() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3746() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3746(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_8378( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3746() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_8378( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_8378( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5031() )))
    {
        sub_8378( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_31478(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_31874(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_32507(int iParam0)
{
    if (g_U94._fU60 == iParam0)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U94._fU0 != 1000) AND (g_U94._fU0 != 1001))
            {
                g_U94._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_32690()
{
    if ((g_U558 == 1) || (g_U8946 == 4))
    {
        if (g_U94._fU60 != -1)
        {
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U94._fU376 = 0;
        g_U94._fU100 = 1;
    }
    return;
}

void sub_32854()
{
    unknown uVar2;

    if (l_U396 == 1)
    {
        sub_23291();
    }
    sub_21816();
    if (l_U396 == 0)
    {
        sub_18377();
        l_U396 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U434 )))
    {
        sub_26815( ref l_U434 );
    }
    if (l_U400 == 1)
    {
        TRIGGER_POLICE_REPORT( "E1_SCANNER_ST1_01" );
        l_U400 = 0;
    }
    if (((NOT l_U377) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CHAR_INJURED( l_U434 ))))
    {
        GET_GAME_TIMER( ref l_U644 );
        l_U644 += 40000;
        l_U377 = 1;
    }
    GET_GAME_TIMER( ref uVar2 );
    if ((NOT (IS_CHAR_DEAD( l_U435 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
    {
        if (NOT (IS_CHAR_INJURED( l_U434 )))
        {
            if (((IS_CHAR_IN_ANY_HELI( l_U434 )) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U450 )))) AND (LOCATE_CAR_2D( l_U450, 2248.00000000, 755.30000000, 20.00000000, 20.00000000, 0 )))
            {
                if (((((NOT (IS_CHAR_INJURED( l_U434 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] )))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR( 0, l_U450 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], -2, 1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                    l_U369 = 6;
                }
                else if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                }
                l_U369 = 6;;
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U434 )))
            {
                if (((NOT (IS_CHAR_INJURED( l_U434 ))) AND (NOT (IS_CAR_DEAD( l_U451[1] )))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], -2, 1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                    l_U369 = 6;
                }
                else if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                    l_U369 = 6;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U435 )))
        {
            if ((((IS_CHAR_IN_ANY_HELI( l_U435 )) AND (NOT (IS_CAR_DEAD( l_U450 )))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U450 )))) AND (LOCATE_CAR_2D( l_U450, 2248.00000000, 755.30000000, 20.00000000, 20.00000000, 0 )))
            {
                if (((((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR( 0, l_U450 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], 40000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                    l_U369 = 6;
                }
                else if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( 0, sub_3746(), 1000.00000000, -1 );
                    l_U369 = 6;
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U435 )))
            {
                if (((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], 40000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                    l_U369 = 6;
                }
            }
        }
    }
    return;
}

void sub_34116()
{
    vector vVar2;
    vector vVar5;
    float fVar8;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    fVar8 = 0.00000000;
    if (NOT (IS_CAR_DEAD( l_U450 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3746(), ref l_U461 );
            GET_CAR_MODEL( l_U461, ref l_U668 );
            if (TIMERA() > 5000)
            {
                if (IS_THIS_MODEL_A_HELI( l_U668 ))
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CAR( l_U450, l_U461 ))
                    {
                        EXPLODE_CAR( l_U450, 1, 0 );
                        if (l_U399 == 1)
                        {
                            TRIGGER_POLICE_REPORT( "E1_SCANNER_ST1_02" );
                            l_U399 = 0;
                        }
                    }
                    if (IS_CAR_IN_WATER( l_U450 ))
                    {
                        EXPLODE_CAR( l_U450, 1, 0 );
                        if (l_U399 == 1)
                        {
                            TRIGGER_POLICE_REPORT( "E1_SCANNER_ST1_02" );
                            l_U399 = 0;
                        }
                    }
                }
            }
        }
    }
    if (TIMERA() > 20000)
    {
        if (NOT (IS_CAR_DEAD( l_U450 )))
        {
            GET_CHAR_COORDINATES( sub_3746(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
            if (NOT (IS_CHAR_DEAD( l_U434 )))
            {
                GET_CHAR_COORDINATES( l_U434, ref vVar2.x, ref vVar2.y, ref vVar2.z );
                fVar8 = VDIST( vVar5, vVar2 );
                if (fVar8 > 250.00000000)
                {
                    if (NOT (IS_CAR_ON_SCREEN( l_U450 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U434 )))
                        {
                            SET_CHAR_KEEP_TASK( l_U434, 1 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U435 )))
                        {
                            SET_CHAR_KEEP_TASK( l_U435, 1 );
                        }
                        l_U371 = 2;
                        sub_20757();
                    }
                }
            }
        }
    }
    return;
}

void sub_34654()
{
    int iVar2;

    SET_WANTED_MULTIPLIER( 1.00000000 );
    if (NOT (IS_CHAR_DEAD( l_U434 )))
    {
        sub_26815( ref l_U434 );
    }
    if (NOT (sub_20501( l_U690 )))
    {
        ;
    }
    sub_21322();
    sub_21816();
    if (sub_28043())
    {
        SET_PED_IS_BLIND_RAGING( sub_3746(), 1 );
        sub_8052();
        if (NOT (IS_CHAR_INJURED( l_U434 )))
        {
            if (IS_CHAR_IN_ANY_HELI( l_U434 ))
            {
                if (((((NOT (IS_CHAR_INJURED( l_U434 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 )))) AND (NOT (IS_CAR_DEAD( l_U451[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR( 0, l_U450 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], -2, 1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U434 )))
            {
                if (((NOT (IS_CHAR_INJURED( l_U434 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], -2, 1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
        }
        if (l_U401 == 0)
        {
            if ((NOT (IS_VEH_DRIVEABLE( l_U451[1] ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U451[1], sub_3746() )))
            {
                if (NOT (IS_CAR_DEAD( l_U451[1] )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U434, l_U451[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U434 )))
                        {
                            CLEAR_CHAR_TASKS( l_U434 );
                            TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                            SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                            l_U401 = 1;
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                    SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                    l_U401 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U435 )))
        {
            if (IS_CHAR_IN_ANY_HELI( l_U435 ))
            {
                if (((((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] )))) AND (IS_VEH_DRIVEABLE( l_U450 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR( 0, l_U450 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], 40000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U435 )))
            {
                if (((NOT (IS_CHAR_INJURED( l_U435 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (NOT (IS_CAR_DEAD( l_U451[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U451[1], 40000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
            if (NOT (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                if ((NOT (IS_CHAR_INJURED( l_U435 ))) AND (NOT (IS_CHAR_INJURED( sub_3746() ))))
                {
                    TASK_COMBAT( l_U435, sub_3746() );
                }
            }
        }
        l_U369 = 6;
    }
    if (((NOT (IS_CHAR_INJURED( l_U435 ))) AND (NOT (IS_CHAR_INJURED( l_U434 )))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U435, l_U451[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U434, l_U451[1] )))
        {
            CLOSE_ALL_CAR_DOORS( l_U451[1] );
            if ((NOT (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
            {
                REMOVE_BLIP( l_U504 );
                REMOVE_BLIP( l_U503 );
                REMOVE_BLIP( l_U505 );
                if (NOT (IS_CHAR_DEAD( l_U436 )))
                {
                    PRINT_NOW( "S1_GOAL4", 7500, 3 );
                }
                ADD_BLIP_FOR_CHAR( l_U434, ref l_U505 );
                l_U390 = 0;
                l_U391 = 0;
                l_U392 = 1;
                iVar2 = l_U655;
                OPEN_SEQUENCE_TASK( ref l_U551 );
                while (iVar2 < l_U654)
                {
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U451[0], l_U517[iVar2]._fU0, l_U517[iVar2]._fU4, l_U517[iVar2]._fU8, 15.00000000, 0, -322343873, 0, -1, -1 );
                    iVar2++;
                }
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U428[0], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
            if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 12, 15.00000000, 4, -1, -1 );
            }
            if (((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
            {
                TASK_CAR_MISSION( l_U436, l_U451[1], l_U451[0], 12, 15.00000000, 4, -1, -1 );
            }
            SWITCH_ROADS_OFF( -145.91540000, -410.07050000, 11.81220000, -141.91540000, -406.07050000, 15.81220000 );
            SWITCH_ROADS_OFF( -182.91980000, -410.60730000, 11.32150000, -178.91980000, -406.60730000, 15.32150000 );
            SWITCH_ROADS_OFF( -137.91540000, -185.07050000, 12.81220000, -35.91540000, -113.07050000, 14.81220000 );
            l_U369 = 8;
        }
    }
    return;
}

void sub_36559()
{
    int iVar2;

    if (((IS_CAR_DEAD( l_U451[1] )) || (NOT (IS_VEH_DRIVEABLE( l_U451[1] )))) || (l_U401 == 1))
    {
        sub_36613();
        if (l_U401 == 0)
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U434 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U434 )))
                {
                    CLEAR_CHAR_TASKS( l_U434 );
                    TASK_SMART_FLEE_CHAR( l_U434, sub_3746(), 1000.00000000, -1 );
                    SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                    l_U401 = 1;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U434 )))
    {
        sub_26815( ref l_U434 );
        GET_CHAR_COORDINATES( l_U434, ref l_U634._fU0, ref l_U634._fU4, ref l_U634._fU8 );
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 450.00000000, 450.00000000, 200.00000000, 0 ))) AND (IS_CHAR_IN_ANY_CAR( l_U434 )))
            {
                sub_3154();
                l_U371 = 3;
                sub_20757();
            }
        }
        if (l_U397 == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U451[1] )))
            {
                if ((IS_CHAR_IN_CAR( sub_3746(), l_U451[1] )) || (IS_CAR_STUCK_ON_ROOF( l_U451[1] )))
                {
                    if (IS_CHAR_IN_CAR( l_U434, l_U451[1] ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U551 );
                        TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U451[1] );
                        TASK_SMART_FLEE_CHAR( 0, sub_3746(), 1000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U551 );
                        TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                        SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                        if (NOT (IS_CHAR_DEAD( l_U435 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U435, l_U451[1] ))
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( l_U435, l_U451[1] );
                            }
                        }
                        CLEAR_SEQUENCE_TASK( l_U551 );
                        l_U397 = 1;
                    }
                }
                if (IS_CHAR_DEAD( l_U436 ))
                {
                    if (IS_CHAR_IN_CAR( l_U434, l_U451[1] ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U551 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3746(), 1000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U551 );
                        TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                        SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                        CLEAR_SEQUENCE_TASK( l_U551 );
                        l_U397 = 1;
                    }
                }
            }
        }
        if (l_U401 == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U451[1] )))
            {
                if ((NOT (IS_VEH_DRIVEABLE( l_U451[1] ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U451[1], sub_3746() )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U434, l_U451[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U434 )))
                        {
                            CLEAR_CHAR_TASKS( l_U434 );
                            if ((IS_CHAR_IN_ANY_HELI( l_U434 )) AND (NOT (IS_CAR_DEAD( l_U450 ))))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U551 );
                                TASK_LEAVE_CAR( 0, l_U450 );
                                TASK_COWER( 0 );
                                CLOSE_SEQUENCE_TASK( l_U551 );
                                TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                                SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                                CLEAR_SEQUENCE_TASK( l_U551 );
                            }
                            else
                            {
                                TASK_COWER( l_U434 );
                                SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                            }
                            l_U401 = 1;
                        }
                    }
                }
            }
            else if ((NOT (IS_CHAR_INJURED( l_U434 ))) AND (NOT (IS_CAR_DEAD( l_U450 ))))
            {
                CLEAR_CHAR_TASKS( l_U434 );
                if (IS_CHAR_IN_ANY_HELI( l_U434 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR( 0, l_U450 );
                    TASK_COWER( 0 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
                else
                {
                    TASK_COWER( l_U434 );
                    SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                }
                l_U401 = 1;
            }
        }
    }
    if (NOT l_U386)
    {
        if (((((NOT (IS_CHAR_INJURED( l_U435 ))) AND (NOT (IS_CHAR_INJURED( l_U434 )))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] )))
        {
            if (((NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[1] ))) AND (NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[0] )))) AND (NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[2] ))))
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U435, l_U451[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U434, l_U451[1] )))
                {
                    if (((NOT (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U428[0], l_U451[0] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[0], 2451 );
                    }
                    if (((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U436, l_U451[1] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[1], 2452 );
                    }
                    if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U431[0], l_U451[2] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[2], 2453 );
                    }
                    REMOVE_BLIP( l_U503 );
                    REMOVE_BLIP( l_U505 );
                    REMOVE_BLIP( l_U504 );
                    if (NOT (IS_CHAR_INJURED( l_U434 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U434, ref l_U505 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U436 )))
                    {
                        PRINT_NOW( "S1_GOAL4", 7500, 3 );
                    }
                    l_U386 = 1;
                }
            }
        }
        else if (((((NOT (IS_CHAR_INJURED( l_U435 ))) AND (NOT (IS_CHAR_INJURED( l_U434 )))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] )))
        {
            if (((NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[1] ))) AND (NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[0] )))) AND (NOT (IS_CHAR_IN_CAR( sub_3746(), l_U451[2] ))))
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U434, l_U451[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U435, l_U451[1] )))
                {
                    if (((NOT (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U428[0], l_U451[0] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[0], 2451 );
                    }
                    if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U431[0], l_U451[2] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[2], 2452 );
                    }
                    if (((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U436, l_U451[1] )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U451[1], 2453 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U436 )))
                    {
                        PRINT_NOW( "S1_GOAL4", 7500, 3 );
                    }
                    l_U386 = 1;
                }
            }
        }
    }
    else if (NOT l_U383)
    {
        if ((IS_VEH_DRIVEABLE( l_U451[0] )) AND (NOT (IS_CHAR_INJURED( l_U428[0] ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[0] )))
            {
                iVar2 = l_U655;
                OPEN_SEQUENCE_TASK( ref l_U551 );
                while (iVar2 < l_U654)
                {
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U451[0], l_U517[iVar2]._fU0, l_U517[iVar2]._fU4, l_U517[iVar2]._fU8, 15.00000000, 0, -322343873, 0, -1, -1 );
                    iVar2++;
                }
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U428[0], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
                l_U383 = 1;
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U451[0] ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[0] ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U451[0] );
            }
        }
        l_U383 = 1;;
    }
    if (NOT l_U384)
    {
        if (((IS_VEH_DRIVEABLE( l_U451[1] )) AND (NOT (IS_CHAR_INJURED( l_U436 )))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
        {
            if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
            {
                TASK_CAR_MISSION( l_U436, l_U451[1], l_U451[0], 12, 15.00000000, 4, -1, -1 );
                l_U384 = 1;
            }
        }
        else if ((IS_VEH_DRIVEABLE( l_U451[1] )) || (IS_CHAR_DEAD( l_U434 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[1] ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U451[1] );
            }
        }
        l_U384 = 1;;
    }
    if (NOT l_U385)
    {
        if (((IS_VEH_DRIVEABLE( l_U451[2] )) AND (NOT (IS_CHAR_INJURED( l_U431[0] )))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
        {
            if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[2] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 12, 15.00000000, 4, -1, -1 );
                l_U385 = 1;
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U451[2] ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U451[2] ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U451[2] );
            }
        }
        l_U385 = 1;;
    }
    if (((l_U383) AND (l_U384)) AND (l_U385))
    {
        SWITCH_ROADS_OFF( -145.91540000, -410.07050000, 11.81220000, -141.91540000, -406.07050000, 15.81220000 );
        SWITCH_ROADS_OFF( -182.91980000, -410.60730000, 11.32150000, -178.91980000, -406.60730000, 15.32150000 );
        l_U369 = 8;
        l_U387 = 1;
    }
    return;
}

void sub_36613()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    SET_PED_IS_BLIND_RAGING( sub_3746(), 1 );
    if ((NOT l_U381) || (l_U387))
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3746() )))
            {
                if (IS_VEH_DRIVEABLE( l_U451[I] ))
                {
                    if (sub_36712( l_U451[I] ))
                    {
                        l_U381 = 1;
                    }
                    if (sub_36840( l_U451[I] ))
                    {
                        l_U381 = 1;
                        ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 4 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                    }
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U451[I], sub_3746() ))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 2 );
                        l_U381 = 1;
                    }
                    GET_CAR_COORDINATES( l_U451[I], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    if (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), uVar3._fU0 + 15, uVar3._fU4 + 15, uVar3._fU0 - 15, uVar3._fU4 - 15, 0 ))
                    {
                        l_U381 = 1;
                    }
                    if (NOT (IS_CAR_DEAD( l_U451[I] )))
                    {
                        if (IS_CHAR_IN_CAR( sub_3746(), l_U451[I] ))
                        {
                            l_U381 = 1;
                            ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                        }
                    }
                }
                if (IS_CAR_DEAD( l_U451[I] ))
                {
                    l_U381 = 1;
                }
            }
        }
        if ((l_U381) || (l_U387))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2234.72500000, 738.02700000, 19.15700000, 143.57100000, 136.24900000, 200.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2257, 868, 18, 2146, 736, 4, 108, 0 )))
            {
                ;
            }
            if (NOT (IS_CHAR_INJURED( l_U428[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U428[1], l_U552 );
                SET_COMBAT_DECISION_MAKER( l_U428[1], l_U555 );
                SET_CHAR_RELATIONSHIP( l_U428[1], 5, 0 );
                SET_SENSE_RANGE( l_U428[1], 150.00000000 );
                SET_CURRENT_CHAR_WEAPON( l_U428[1], 13, 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U428[1], 0 );
                GET_CHAR_COORDINATES( l_U428[1], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_3746() )))
                {
                    REGISTER_HATED_TARGETS_IN_AREA( l_U428[1], uVar6._fU0, uVar6._fU4, uVar6._fU8, 120.00000000 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U431[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U431[1], l_U552 );
                SET_COMBAT_DECISION_MAKER( l_U431[1], l_U555 );
                SET_CHAR_RELATIONSHIP( l_U431[1], 5, 0 );
                SET_SENSE_RANGE( l_U431[1], 150.00000000 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U431[1], 0 );
                SET_CURRENT_CHAR_WEAPON( l_U431[1], 13, 1 );
                GET_CHAR_COORDINATES( l_U431[1], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_3746() )))
                {
                    REGISTER_HATED_TARGETS_IN_AREA( l_U431[1], uVar6._fU0, uVar6._fU4, uVar6._fU8, 120.00000000 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U435 )))
            {
                SET_CHAR_DECISION_MAKER( l_U435, l_U552 );
                SET_COMBAT_DECISION_MAKER( l_U435, l_U555 );
                SET_CHAR_RELATIONSHIP( l_U435, 5, 0 );
                SET_SENSE_RANGE( l_U435, 150.00000000 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U435, 0 );
                if (HAS_CHAR_GOT_WEAPON( l_U435, 13 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U435, 13, 1 );
                }
                GET_CHAR_COORDINATES( l_U435, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_3746() )))
                {
                    REGISTER_HATED_TARGETS_IN_AREA( l_U435, uVar6._fU0, uVar6._fU4, uVar6._fU8, 120.00000000 );
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
            {
                GET_CAR_CHAR_IS_USING( sub_3746(), ref uVar9 );
                if (((NOT (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_VEH_DRIVEABLE( uVar9 )))
                {
                    TASK_CAR_MISSION_PED_TARGET( l_U428[0], l_U451[0], sub_3746(), 3, 25.00000000, 3, 4, 20 );
                }
                if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
                {
                    TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 7, 25.00000000, 3, 4, 20 );
                }
                if ((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
                {
                    iVar10 = l_U655;
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    while (iVar10 < l_U654)
                    {
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U451[1], l_U517[iVar10]._fU0, l_U517[iVar10]._fU4, l_U517[iVar10]._fU8, 25.00000000, 0, -322343873, 3, -1, -1 );
                        iVar10++;
                    }
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U436, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_3746() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2220.07000000, 772.51480000, 4.80800000, 100.00000000, 100.00000000, 30.00000000, 0 ))
                {
                    sub_8052();
                }
            }
            l_U387 = 0;
            l_U381 = 1;
            SET_WANTED_MULTIPLIER( 0.50000000 );
        }
    }
    else if ((DOES_CHAR_EXIST( l_U434 )) AND (NOT (IS_CHAR_INJURED( l_U434 ))))
    {
        sub_38448();
    }
    return;
}

int sub_36712(unknown uParam0)
{
    if (sub_36723( uParam0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_36723(unknown uParam0)
{
    if (((NOT (IS_CAR_DEAD( uParam0 ))) AND (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_3746() ))) || (IS_CAR_DEAD( uParam0 )))
    {
        return 1;
    }
    return 0;
}

int sub_36840(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_3746(), ref iVar3 );
    if (iVar3 == 18)
    {
        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3746(), uParam0, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            if (IS_CHAR_SHOOTING( sub_3746() ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_38448()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( sub_3746() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3746(), ref l_U461 );
            if ((l_U461 != nil) AND (IS_VEH_DRIVEABLE( l_U461 )))
            {
                GET_CAR_SPEED( l_U461, ref fVar2 );
            }
            else
            {
                fVar2 = 0.00000000;
            }
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U451[2] )) AND (IS_VEH_DRIVEABLE( l_U461 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U431[0] )))
        {
            if ((sub_38636( ref l_U455[2], 15.00000000, 10.00000000, fVar2 + 15, 5 )) || (sub_38636( ref l_U455[2], 15.00000000, 10.00000000, fVar2 + 15, 1 )))
            {
                TASK_CAR_MISSION_PED_TARGET( l_U431[0], l_U451[2], sub_3746(), 3, 60, 4, 4, 20 );
            }
        }
    }
    return;
}

int sub_38636(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3746(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar7 = {sub_38718( uParam0, uParam2 )};
                }
                else
                {
                    uVar7 = {sub_38832( iParam4, uParam2, 0 )};
                }
                return sub_39761( uParam0, uVar7, uParam3 );
            }
        }
    }
    return 0;
}

void sub_38718(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_3746(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_38832(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3746(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_39761(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
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
    int iVar18;
    int iVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3746(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        if (GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar16 ))
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
            {
                GET_CAR_COORDINATES( (uParam0^), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                GET_GAME_VIEWPORT_ID( ref uVar17 );
                if ((NOT (CAM_IS_SPHERE_VISIBLE( uVar17, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 ))) AND ((VDIST2( uVar13, uVar10 )) > 9.00000000))
                {
                    CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                    SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                    GET_KEY_FOR_CHAR_IN_ROOM( sub_3746(), ref iVar18 );
                    GET_KEY_FOR_CAR_IN_ROOM( (uParam0^), ref iVar19 );
                    if (iVar18 != iVar19)
                    {
                        if (iVar18 == 0)
                        {
                            CLEAR_ROOM_FOR_CAR( (uParam0^) );
                        }
                        else
                        {
                            SET_ROOM_FOR_CAR_BY_KEY( (uParam0^), iVar18 );
                        }
                    }
                    uVar21 = {-SIN( uVar16 ), COS( uVar16 ), 0.00000000};
                    GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar20 );
                    if (fVar20 > 90.00000000)
                    {
                        SET_CAR_HEADING( (uParam0^), uVar16 + 180.00000000 );
                    }
                    else
                    {
                        SET_CAR_HEADING( (uParam0^), uVar16 );
                    }
                    SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_43370()
{
    sub_21322();
    sub_36613();
    sub_43389();
    if (l_U378 == 0)
    {
        if (sub_28043())
        {
            sub_8052();
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U434 )))
    {
        sub_26815( ref l_U434 );
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U434, l_U511._fU0, l_U511._fU4, l_U511._fU8, 22.00000000, 11.00000000, 10.00000000, 0 ))
        {
            sub_3154();
            l_U369 = 9;
        }
        else if (l_U655 < (l_U654 - 1))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U434, l_U517[l_U655]._fU0, l_U517[l_U655]._fU4, l_U517[l_U655]._fU8, 20.00000000, 20.00000000, 10.00000000, 0 ))
            {
                l_U655++;
                if (l_U655 >= 4)
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                }
            }
        }
        else
        {
            l_U655 = l_U654 - 1;
        }
        if (l_U397 == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U451[1] )))
            {
                if ((IS_CHAR_IN_CAR( sub_3746(), l_U451[1] )) || (IS_CAR_STUCK_ON_ROOF( l_U451[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U451[1] );
                    TASK_SMART_FLEE_CHAR( 0, sub_3746(), 1000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                    SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                    l_U397 = 1;
                    ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                    if (NOT (IS_CHAR_DEAD( l_U435 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U435, l_U451[1] ))
                        {
                            TASK_LEAVE_CAR_IMMEDIATELY( l_U435, l_U451[1] );
                        }
                    }
                }
                if (IS_CHAR_DEAD( l_U436 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U434 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U551 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3746(), 1000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U551 );
                        TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                        SET_CHAR_RELATIONSHIP( l_U434, 5, 0 );
                        CLEAR_SEQUENCE_TASK( l_U551 );
                        ALTER_WANTED_LEVEL_NO_DROP( sub_5031(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                        l_U397 = 1;
                    }
                }
            }
        }
        GET_CHAR_COORDINATES( l_U434, ref l_U634._fU0, ref l_U634._fU4, ref l_U634._fU8 );
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 450.00000000, 450.00000000, 200.00000000, 0 ))) AND (NOT l_U381))
            {
                sub_3154();
                l_U371 = 3;
                sub_20757();
            }
            if ((l_U381) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 300.00000000, 300.00000000, 100.00000000, 0 ))))
            {
                sub_3154();
                l_U371 = 3;
                sub_20757();
            }
        }
    }
    return;
}

void sub_43389()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;

    bVar2 = true;
    bVar3 = false;
    iVar4 = 0;
    iVar5 = 0;
    if (NOT l_U382)
    {
        if (NOT l_U381)
        {
            if (IS_VEH_DRIVEABLE( l_U451[0] ))
            {
                if (LOCATE_CAR_3D( l_U451[0], 2235.52000000, 711.37800000, 14.05000000, 59.90000000, 77.85000000, 10.92500000, 0 ))
                {
                    bVar2 = false;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U451[1] ))
            {
                if (LOCATE_CAR_3D( l_U451[1], 2235.52000000, 711.37800000, 14.05000000, 59.90000000, 77.85000000, 10.92500000, 0 ))
                {
                    bVar2 = false;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U451[2] ))
            {
                if (LOCATE_CAR_3D( l_U451[2], 2235.52000000, 711.37800000, 14.05000000, 59.90000000, 77.85000000, 10.92500000, 0 ))
                {
                    bVar2 = false;
                }
            }
            if (bVar2)
            {
                if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U451[2] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U431[0], l_U451[2] ))
                        {
                            TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 7, 15.00000000, 4, -1, -1 );
                            GET_GAME_TIMER( ref l_U659 );
                        }
                    }
                }
                if (((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U451[1] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U436, l_U451[1] ))
                        {
                            TASK_CAR_MISSION( l_U436, l_U451[1], l_U451[0], 7, 15.00000000, 0, -1, -1 );
                            GET_GAME_TIMER( ref l_U658 );
                        }
                    }
                }
                l_U382 = 1;
            }
        }
        else
        {
            l_U382 = 1;
        }
    }
    else if (NOT l_U381)
    {
        if (NOT (IS_CHAR_INJURED( l_U428[0] )))
        {
            if (IS_VEH_DRIVEABLE( l_U451[0] ))
            {
                GET_SCRIPT_TASK_STATUS( l_U428[0], 29, ref iVar6 );
                if (iVar6 == 7)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U428[0], l_U511._fU0, l_U511._fU4, l_U511._fU8, 10.00000000, 10.00000000, 5.00000000, 0 ))
                    {
                        bVar3 = true;
                    }
                    else if (NOT (IS_CAR_DEAD( l_U451[0] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U428[0], l_U451[0] ))
                        {
                            iVar4 = l_U655;
                            OPEN_SEQUENCE_TASK( ref l_U551 );
                            while (iVar4 < l_U654)
                            {
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U451[0], l_U517[iVar4]._fU0, l_U517[iVar4]._fU4, l_U517[iVar4]._fU8, 15.00000000, 0, -322343873, 0, -1, -1 );
                                iVar4++;
                            }
                            CLOSE_SEQUENCE_TASK( l_U551 );
                            TASK_PERFORM_SEQUENCE( l_U428[0], l_U551 );
                            CLEAR_SEQUENCE_TASK( l_U551 );
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U436 )))
        {
            if ((IS_VEH_DRIVEABLE( l_U451[1] )) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
            {
                if (bVar3)
                {
                    GET_SCRIPT_TASK_STATUS( l_U436, 15, ref iVar6 );
                    if (iVar6 == 7)
                    {
                        if (NOT (IS_CAR_DEAD( l_U451[1] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U436, l_U451[1] ))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U436, -162.62030000, -406.02740000, 13.80590000, 10.00000000, 10.00000000, 5.00000000, 0 )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U436, l_U451[1], -162.62030000, -406.02740000, 13.80590000, 15.00000000, 0, -322343873, 4, -1, -1 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U436, 49, ref iVar6 );
                    if (iVar6 == 7)
                    {
                        if (NOT (IS_CAR_DEAD( l_U451[1] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U436, l_U451[1] ))
                            {
                                TASK_CAR_MISSION( l_U436, l_U451[1], l_U451[0], 7, 15.00000000, 4, -1, -1 );
                            }
                        }
                    }
                    else if (iVar6 == 1)
                    {
                        GET_CAR_COORDINATES( l_U451[1], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_CAR_COORDINATES( l_U451[0], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        fVar14 = VDIST( uVar7, uVar10 );
                        if (fVar14 >= l_U571)
                        {
                            if (NOT (l_U565 == l_U567))
                            {
                                l_U565 = l_U567;
                                if (IS_CHAR_IN_ANY_CAR( l_U436 ))
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( l_U436, l_U565 );
                                }
                            }
                        }
                        else if (NOT (sub_44851( ref l_U436, ref l_U451[1], ref l_U451[0], fVar14 )))
                        {
                            if (NOT (l_U565 == l_U568))
                            {
                                l_U565 = l_U568;
                                if (IS_CHAR_IN_ANY_CAR( l_U436 ))
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( l_U436, l_U565 );
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U431[0] )))
        {
            if ((IS_VEH_DRIVEABLE( l_U451[2] )) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                if (bVar3)
                {
                    GET_SCRIPT_TASK_STATUS( l_U431[0], 15, ref iVar6 );
                    if (iVar6 == 7)
                    {
                        if (NOT (IS_CAR_DEAD( l_U451[2] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U431[0], l_U451[2] ))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U436, -145.93980000, -406.56860000, 13.79990000, 10.00000000, 10.00000000, 5.00000000, 0 )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U431[0], l_U451[2], -145.93980000, -406.56860000, 13.79990000, 15.00000000, 0, -322343873, 4, -1, -1 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U431[0], 49, ref iVar6 );
                    if (iVar6 == 7)
                    {
                        if (NOT (IS_CAR_DEAD( l_U451[2] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U431[0], l_U451[2] ))
                            {
                                TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 7, 15.00000000, 4, -1, -1 );
                            }
                        }
                    }
                    else if (iVar6 == 1)
                    {
                        GET_CAR_COORDINATES( l_U451[2], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_CAR_COORDINATES( l_U451[1], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        fVar14 = VDIST( uVar7, uVar10 );
                        if (fVar14 >= l_U571)
                        {
                            if (NOT (l_U566 == l_U567))
                            {
                                l_U566 = l_U567;
                                if (IS_CHAR_IN_ANY_CAR( l_U431[0] ))
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( l_U431[0], l_U566 );
                                }
                            }
                        }
                        else if (NOT (sub_44851( ref l_U431[0], ref l_U451[2], ref l_U451[1], fVar14 )))
                        {
                            if (NOT (l_U566 == l_U568))
                            {
                                l_U566 = l_U568;
                                if (IS_CHAR_IN_ANY_CAR( l_U431[0] ))
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( l_U431[0], l_U566 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_44851(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3)
{
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    int iVar11;
    boolean bVar12;

    fVar6 = 0.00000000;
    fVar7 = 0.00000000;
    fVar8 = 0.00000000;
    fVar9 = 0.00000000;
    fVar10 = 0.00000000;
    bVar12 = false;
    if (NOT (IS_CAR_DEAD( (uParam2^) )))
    {
        GET_CAR_SPEED( (uParam2^), ref fVar9 );
    }
    if (NOT (IS_CAR_DEAD( (uParam2^) )))
    {
        GET_CAR_SPEED( (uParam1^), ref fVar8 );
    }
    fVar10 = fVar8 - fVar9;
    if (fParam3 <= (l_U572 / 2.00000000))
    {
        if (fVar10 >= 1.00000000)
        {
            bVar12 = true;
        }
    }
    else if (fParam3 <= l_U572)
    {
        if (fVar10 >= 5.00000000)
        {
            bVar12 = true;
        }
    }
    if (bVar12)
    {
        GET_SCRIPT_TASK_STATUS( (uParam0^), 48, ref iVar11 );
        if (iVar11 == 7)
        {
            TASK_CAR_TEMP_ACTION( (uParam0^), (uParam1^), 24, 2000 );
            return 1;
        }
    }
    return 0;
}

void sub_46727()
{
    int I;
    vector vVar3;

    I = 0;
    if (NOT l_U394)
    {
        if (NOT l_U381)
        {
            if (NOT (IS_CHAR_INJURED( l_U434 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U434 ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
            if (NOT (IS_CHAR_INJURED( l_U435 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U435 ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
            if (NOT (IS_CHAR_INJURED( l_U436 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U436 ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U436, l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
            vVar3 = {-170.44780000, -370.96680000, 13.54680000};
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U428[I] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    if (IS_CHAR_IN_ANY_CAR( l_U428[I] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar3.x, vVar3.y, vVar3.z, 2, -1, -1 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, vVar3, 0.00000000, 20.00000000, -2, vVar3, 20.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U428[I], l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
            vVar3 = {-179.56730000, -354.25890000, 14.43250000};
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U431[I] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    if (IS_CHAR_IN_ANY_CAR( l_U431[I] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar3.x, vVar3.y, vVar3.z, 2, -1, -1 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, vVar3, 0.00000000, 20.00000000, -2, vVar3, 20.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U431[I], l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U434 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U434 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        if (NOT (IS_CHAR_INJURED( l_U435 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U435 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        if (NOT (IS_CHAR_INJURED( l_U436 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U436 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U436, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        vVar3 = {-170.44780000, -370.96680000, 13.54680000};
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U428[I] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U428[I] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar3.x, vVar3.y, vVar3.z, 2, -1, -1 );
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, vVar3, 0.00000000, 20.00000000, -2, vVar3, 20.00000000 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U428[I], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
        }
        vVar3 = {-179.56730000, -354.25890000, 14.43250000};
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U431[I] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U431[I] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar3.x, vVar3.y, vVar3.z, 2, -1, -1 );
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, vVar3, 0.00000000, 20.00000000, -2, vVar3, 20.00000000 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U431[I], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
        }
        l_U394 = 1;
    }
    else if (NOT (IS_CHAR_INJURED( l_U434 )))
    {
        if (NOT l_U381)
        {
            sub_48366();
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U434, -179.01400000, -347.13000000, 17.49000000, 11.15000000, 4.90000000, 3.55000000, 0 ))
        {
            l_U371 = 1;
            sub_20757();
        }
    }
    return;
}

void sub_48366()
{
    vector vVar2;
    int J;
    int I;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    vVar2 = {-170.44780000, -370.96680000, 13.54680000};
    J = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( sub_3746() )))
        {
            if (IS_VEH_DRIVEABLE( l_U451[I] ))
            {
                if (sub_36712( l_U451[I] ))
                {
                    l_U381 = 1;
                }
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U451[I], sub_3746() ))
                {
                    l_U381 = 1;
                }
                GET_CAR_COORDINATES( l_U451[I], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                if (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))
                {
                    l_U381 = 1;
                }
            }
        }
    }
    if (NOT l_U381)
    {
        if (NOT (IS_CHAR_INJURED( l_U434 )))
        {
            GET_CHAR_COORDINATES( l_U434, ref vVar2.x, ref vVar2.y, ref vVar2.z );
            if (((((IS_CHAR_RESPONDING_TO_EVENT( l_U434, 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U434, sub_3746(), 0 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U434 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U434 )))
            {
                l_U381 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U435 )))
        {
            GET_CHAR_COORDINATES( l_U435, ref vVar2.x, ref vVar2.y, ref vVar2.z );
            if (((((IS_CHAR_RESPONDING_TO_EVENT( l_U435, 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U435, sub_3746(), 0 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U435 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U435 )))
            {
                l_U381 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U436 )))
        {
            GET_CHAR_COORDINATES( l_U436, ref vVar2.x, ref vVar2.y, ref vVar2.z );
            if (((((IS_CHAR_RESPONDING_TO_EVENT( l_U436, 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U436, sub_3746(), 0 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U436 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U436 )))
            {
                l_U381 = 1;
            }
        }
        for ( J = 0; J < 2; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U428[J] )))
            {
                GET_CHAR_COORDINATES( l_U428[J], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                if (((((IS_CHAR_RESPONDING_TO_EVENT( l_U428[J], 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U428[J], sub_3746(), 0 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U428[J] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U428[J] )))
                {
                    l_U381 = 1;
                }
            }
        }
        for ( J = 0; J < 2; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U431[J] )))
            {
                GET_CHAR_COORDINATES( l_U431[J], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                if (((((IS_CHAR_RESPONDING_TO_EVENT( l_U431[J], 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U431[J], sub_3746(), 0 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_3746(), vVar2.x + 15, vVar2.y + 15, vVar2.x - 15, vVar2.y - 15, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_5031(), l_U431[J] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5031(), l_U431[J] )))
                {
                    l_U381 = 1;
                }
            }
        }
    }
    if (l_U381)
    {
        if (NOT (IS_CHAR_INJURED( l_U434 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U434 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U434, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        if (NOT (IS_CHAR_INJURED( l_U435 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U435 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U435, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        if (NOT (IS_CHAR_INJURED( l_U436 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U551 );
            if (IS_CHAR_IN_ANY_CAR( l_U436 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -176.09270000, -346.85720000, 16.84160000, 3, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U551 );
            TASK_PERFORM_SEQUENCE( l_U436, l_U551 );
            CLEAR_SEQUENCE_TASK( l_U551 );
        }
        vVar2 = {-170.44780000, -370.96680000, 13.54680000};
        for ( J = 0; J < 2; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U428[J] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U428[J] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_COMBAT( 0, sub_3746() );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U428[J], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
        }
        vVar2 = {-179.56730000, -354.25890000, 14.43250000};
        for ( J = 0; J < 2; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U431[J] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U551 );
                if (IS_CHAR_IN_ANY_CAR( l_U431[J] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_COMBAT( 0, sub_3746() );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U431[J], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
        }
    }
    return;
}

void sub_50299()
{
    if (l_U660 == 1)
    {
        if (l_U661 == 1)
        {
            l_U657 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U657, "TS1_KILL_TARGET_AT_AIRPORT_GATE", l_U501 );
            l_U661 = 0;
        }
        if ((DOES_OBJECT_EXIST( l_U501 )) AND (DOES_OBJECT_EXIST( l_U502 )))
        {
            if ((SLIDE_OBJECT( l_U501, 2205.50000000, 676.19000000, 7.60000000, 0.10000000, 0.10000000, 0.00000000, 0 )) AND (SLIDE_OBJECT( l_U502, 2210.60000000, 673.35000000, 7.60000000, 0.10000000, 0.10000000, 0.00000000, 0 )))
            {
                FREEZE_OBJECT_POSITION( l_U501, 1 );
                FREEZE_OBJECT_POSITION( l_U502, 1 );
                STOP_SOUND( l_U657 );
                l_U660 = 0;
            }
        }
    }
    if (l_U406 == 1)
    {
        if (l_U408 == 0)
        {
            if (((sub_50595( ref l_U680 )) == 3) || (TIMERA() > 4000))
            {
                l_U408 = 1;
                PRINT_NOW( "S1_GOAL6", 7500, 3 );
            }
        }
        if (l_U404 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2528.00000000, 267.90000000, 4.80000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U507 ))
                {
                    ;
                }
                if (NOT (DOES_BLIP_EXIST( l_U506 )))
                {
                    l_U404 = 1;
                }
            }
        }
        if (l_U417 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2242.98000000, 130.97000000, 5.19000000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U417 = 1;
                if (NOT (IS_CHAR_DEAD( l_U437 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U551 );
                    TASK_PLAY_ANIM( 0, "guard_point", "MISSstubbs_1", 8.00000000, 1, 0, 0, 0, 6000 );
                    TASK_PLAY_ANIM( 0, "guard_IDLE", "MISSstubbs_1", 8.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U551 );
                    TASK_PERFORM_SEQUENCE( l_U437, l_U551 );
                    CLEAR_SEQUENCE_TASK( l_U551 );
                }
                g_U10454 = 1;
            }
        }
        if (l_U409 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2239.39000000, 176.93000000, 4.90000000, 5.00000000, 5.00000000, 100.00000000, 1 ))
            {
                l_U409 = 1;
                REMOVE_BLIP( l_U506 );
                if (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 ))
                {
                    PRINT_NOW( "S1_wanted", 7500, 3 );
                    ALTER_WANTED_LEVEL( sub_5031(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                }
                sub_8202( "E1S1_TA", ref l_U674, 6, 1 );
            }
            if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2403.35000000, 257.71000000, 6.06000000, 10.00000000, 10.00000000, 40.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2464.59000000, 394.54000000, 6.06000000, 10.00000000, 10.00000000, 40.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2402.59000000, 521.54000000, 6.06000000, 10.00000000, 10.00000000, 40.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2203.78000000, 667.54000000, 6.06000000, 5.00000000, 5.00000000, 40.00000000, 0 )))
            {
                l_U409 = 1;
                REMOVE_BLIP( l_U506 );
                PRINT_NOW( "S1_wanted", 7500, 3 );
                ALTER_WANTED_LEVEL( sub_5031(), 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
            }
            if (((((((((((((((((((NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 ))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2215.74000000, 662.92000000, 3.80000000, 2263.09000000, 941.96000000, 7.70000000, 200.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2211.39000000, 680.93000000, 4.90000000, 20.00000000, 20.00000000, 20.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2232.39000000, 707.93000000, 5.90000000, 30.00000000, 30.00000000, 30.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2217.39000000, 690.93000000, 5.90000000, 30.00000000, 30.00000000, 30.00000000, 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2317.22000000, 22.10000000, 0.00000000, 2896.96000000, 875.87000000, 58.00000000, 400.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2580.39000000, 357.93000000, 5.90000000, 140.00000000, 600.00000000, 130.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2438.39000000, 167.93000000, 5.90000000, 100.00000000, 200.00000000, 130.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2300.39000000, 65.93000000, 5.90000000, 190.00000000, 130.00000000, 130.00000000, 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 )))) AND (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2203.52500000, 680.54000000, 3.80000000, 2149.35000000, 727.35000000, 50.00000000, 6.50000000, 0 ))))
            {
                l_U409 = 1;
                REMOVE_BLIP( l_U506 );
                if (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 ))
                {
                    PRINT_NOW( "S1_wanted", 7500, 3 );
                    ALTER_WANTED_LEVEL( sub_5031(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                }
            }
            if ((l_U409 == 0) AND (l_U414 == 0))
            {
                if (IS_CHAR_IN_ANY_HELI( sub_3746() ))
                {
                    GET_CHAR_COORDINATES( sub_3746(), ref l_U548._fU0, ref l_U548._fU4, ref l_U548._fU8 );
                    if (l_U548._fU8 > 28.00000000)
                    {
                        l_U414 = 1;
                        REMOVE_BLIP( l_U506 );
                        if (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 ))
                        {
                            PRINT_NOW( "S1_wanted", 7500, 3 );
                            ALTER_WANTED_LEVEL( sub_5031(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5031() );
                        }
                    }
                }
            }
            if (l_U414 == 1)
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( sub_3746() )))
                {
                    if ((((((((((((((((((IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, l_U600[0]._fU0, l_U600[0]._fU4, l_U600[0]._fU8, l_U625[0], 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, l_U600[1]._fU0, l_U600[1]._fU4, l_U600[1]._fU8, l_U625[1], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, l_U600[2]._fU0, l_U600[2]._fU4, l_U600[2]._fU8, l_U625[2], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, l_U600[3]._fU0, l_U600[3]._fU4, l_U600[3]._fU8, l_U625[3], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, l_U600[4]._fU0, l_U600[4]._fU4, l_U600[4]._fU8, l_U625[4], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[5]._fU0, l_U575[5]._fU4, l_U575[5]._fU8, l_U600[5]._fU0, l_U600[5]._fU4, l_U600[5]._fU8, l_U625[5], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[6]._fU0, l_U575[6]._fU4, l_U575[6]._fU8, l_U600[6]._fU0, l_U600[6]._fU4, l_U600[6]._fU8, l_U625[6], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), l_U575[7]._fU0, l_U575[7]._fU4, l_U575[7]._fU8, l_U600[7]._fU0, l_U600[7]._fU4, l_U600[7]._fU8, l_U625[7], 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2215.74000000, 662.92000000, 3.80000000, 2263.09000000, 941.96000000, 7.70000000, 200.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2211.39000000, 680.93000000, 4.90000000, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2232.39000000, 707.93000000, 5.90000000, 30.00000000, 30.00000000, 30.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2217.39000000, 690.93000000, 5.90000000, 30.00000000, 30.00000000, 30.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2317.22000000, 22.10000000, 0.00000000, 2896.96000000, 875.87000000, 58.00000000, 400.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2580.39000000, 357.93000000, 5.90000000, 140.00000000, 600.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2438.39000000, 167.93000000, 5.90000000, 100.00000000, 200.00000000, 130.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2300.39000000, 65.93000000, 5.90000000, 190.00000000, 130.00000000, 130.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2109.85000000, 821.18000000, -12.80000000, 2313.76000000, 1057.08000000, 78.00000000, -1148.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2796.85000000, 556.18000000, 84.80000000, 3000.76000000, 387.08000000, -366.00000000, -948.00000000, 0 )))
                    {
                        l_U414 = 0;
                        ADD_BLIP_FOR_COORD( 2239.39000000, 176.93000000, 4.90000000, ref l_U506 );
                        SET_ROUTE( l_U506, 1 );
                    }
                }
            }
        }
    }
    if (l_U378 == 0)
    {
        if (sub_28043())
        {
            sub_8052();
            SET_PED_IS_BLIND_RAGING( sub_3746(), 1 );
        }
    }
    if (l_U406 == 1)
    {
        if ((l_U409 == 1) || (l_U414 == 1))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 )))
            {
                sub_10047();
            }
        }
    }
    else if (NOT (IS_WANTED_LEVEL_GREATER( sub_5031(), 0 )))
    {
        sub_10047();
    }
    if (l_U403 == 0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3746() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3746(), ref l_U464 );
            GET_CAR_MODEL( l_U464, ref l_U668 );
            if (IS_THIS_MODEL_A_HELI( l_U668 ))
            {
                SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U464, 0 );
                l_U403 = 1;
            }
        }
    }
    if (l_U403 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3746() )))
        {
            l_U403 = 0;
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U464 );
        }
    }
    return;
}

int sub_50595(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_5767( iParam0->_fU0, g_U572[I] ))
            {
                iParam0->_fU24 = I;
                return sub_2182( 4, g_U572[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

void sub_54433()
{
    if (sub_20820( l_U674 ))
    {
        sub_20992( ref l_U674, 0 );
    }
    sub_32507( 2 );
    if (g_U10991 > 1)
    {
        if (IS_PLAYER_PLAYING( sub_5031() ))
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_5031(), 150 );
            SAY_AMBIENT_SPEECH( sub_3746(), "MISSION_FAIL_RAGE", 1, 1, 0 );
        }
    }
    sub_54553();
    l_U373 = 0;
    return;
}

void sub_54553()
{
    sub_54562();
    return;
}

void sub_54562()
{
    int iVar2;

    iVar2 = 2;
    sub_54576( iVar2 );
    sub_2135( iVar2 );
    return;
}

void sub_54576(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5031(), 150 );
    CLEAR_HELP();
    sub_994( uParam0 );
    return;
}

void sub_54685()
{
    if ((((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2234.72500000, 738.02700000, 19.15700000, 143.57100000, 136.24900000, 200.00000000, 0 ))) || (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3746(), 2257, 868, 18, 2146, 736, 4, 108, 0 )))) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 200.00000000, 300.00000000, 300.00000000, 0 )))) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3746(), 2595.06000000, 136.50000000, 5.30000000, 200.00000000, 300.00000000, 300.00000000, 0 ))))
    {
        CLEAR_WANTED_LEVEL( sub_5031() );
    }
    sub_54915( 2, "E1S1_HELP2", "E1S1AUD", 0 );
    if (l_U395 == 0)
    {
        sub_55516( 3000 );
    }
    else
    {
        sub_55516( 2000 );
    }
    sub_55698();
    g_U24 = 82;
    l_U373 = 0;
    UNLOCK_MISSION_NEWS_STORY( 74 );
    sub_62315( 24 );
    return;
}

void sub_54915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_54959( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_54959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
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
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_55516(unknown uParam0)
{
    ADD_SCORE( sub_5031(), uParam0 );
    sub_55541( uParam0 );
    return;
}

void sub_55541(int iParam0)
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

void sub_55698()
{
    sub_55707();
    return;
}

void sub_55707()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_55725();
    sub_55784( iVar2, iVar3, iVar4 );
    return;
}

void sub_55725()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_55784(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_55816( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_55816(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_55912( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_55912( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_55912( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_55912( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_55912( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_55912( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_56489( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_56937( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5031() );
    sub_2144();
    bVar28 = true;
    uVar29 = sub_56489( uParam0, iVar7 );
    uVar30 = sub_1768( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_61227( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_61661();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_61746( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_61825( uParam0 );
                sub_61864( 0 );
                sub_2044( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_62053();
        }
    }
    if (bParam2)
    {
        sub_61661();
        sub_62152();
        sub_61864( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_61661();
        sub_62204();
        sub_61864( 0 );
        sub_2044( uVar30, 0 );
    }
    sub_1655();
    return;
}

void sub_55912(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_56489(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1999( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_56937(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_57033( uParam1 );
        break;
        case 1:
        bVar8 = sub_57564( uParam1 );
        break;
        case 2:
        bVar8 = sub_58297( uParam1 );
        break;
        case 3:
        bVar8 = sub_58534( uParam1 );
        break;
        case 4:
        bVar8 = sub_58700( uParam1 );
        break;
        case 5:
        bVar8 = sub_58899( uParam1 );
        break;
        case 6:
        bVar8 = sub_59094( uParam1 );
        break;
        case 7:
        bVar8 = sub_59299( uParam1 );
        break;
        case 8:
        bVar8 = sub_59504( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_57912( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_56489( uParam0, uParam1 );
    if (bParam3)
    {
        sub_59790( uVar9, uParam0 );
    }
    return 1;
}

int sub_57033(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_57130( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_57130( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_57130( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_57130( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_57471( "Contact 1", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 1", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_57130(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_55516( uParam1 );
    sub_57151( uParam0, 0, uParam2 );
    sub_57151( uParam0, 1, uParam3 );
    sub_57151( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_55725();
    return;
}

void sub_57151(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_57471(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_57564(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_57130( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_57130( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_57130( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_57130( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_57130( iVar3, 0, sub_57790(), sub_58056(), 0, 0 );
        break;
        default:
        sub_57471( "Contact 2", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 2", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57790()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_57912( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_57912(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_58056()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_57912( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_58297(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_57130( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_57130( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_57130( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_57471( "Contact 3", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 3", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58534(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_57471( "Friend 4", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Friend 4", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58700(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_57130( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_57130( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_57471( "Contact 5", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 5", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58899(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_57130( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_57130( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_57471( "Contact 6", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 6", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59094(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_57130( iVar3, 0, sub_57790(), sub_58056(), 0, 0 );
        break;
        default:
        sub_57471( "Friend 7", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Friend 7", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59299(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_57130( iVar3, 0, sub_57790(), sub_58056(), 0, 0 );
        break;
        default:
        sub_57471( "Friend 8", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Friend 8", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59504(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_57130( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_57471( "Contact 9", 1 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57471( "Contact 9", 0 );
        sub_57130( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_59790(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_59851( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_60569( iParam1 );
    }
    return;
}

int sub_59851(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_59991( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_59991(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_60161( 0 );
    return;
}

void sub_60161(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_60406();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_60406()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_60569(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_60800( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_60800( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_60800( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_60800( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_60800( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_60800( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_60800(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_61227(unknown uParam0, unknown uParam1)
{
    sub_61246( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_61246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_61661()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_61746(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_61825(unknown uParam0)
{
    sub_1516();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_61864(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_61915( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_61915(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_62053()
{
    sub_62062();
    return;
}

void sub_62062()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_62152()
{
    sub_62062();
    return;
}

void sub_62204()
{
    sub_62062();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_62315(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_62402( iParam0 ))
    {
        sub_62856( iParam0 );
    }
    return;
}

int sub_62402(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 20 )) || (IS_BIT_SET( g_U1455[uParam0], 21 )))
    {
        return 0;
    }
    sub_15750( ref uVar3, 1, 0, 0 );
    sub_62475( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_8378( "\n ----------------------------------------------------------------" );
    sub_13529( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_8378( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_62475(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_62856(unknown uParam0)
{
    return;
}

void sub_62894()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_10047();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        sub_20757();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 79 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 79 ))
        {
            WAIT( 0 );
        }
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -148.09320000, -365.11430000, 13.69630000, 10.00000000, 787695061, 0 );
        SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -148.09320000, -365.11430000, 13.69630000, 10.00000000, 787695061, 0 );
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -205.03960000, -364.88280000, 13.12090000, 10.00000000, 787695061, 0 );
        SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -205.03960000, -364.88280000, 13.12090000, 10.00000000, 787695061, 0 );
    }
    if (IS_KEYBOARD_KEY_PRESSED( 80 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 80 ))
        {
            WAIT( 0 );
        }
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -148.09320000, -365.11430000, 13.69630000, 10.00000000, 787695061, 1 );
        SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -148.09320000, -365.11430000, 13.69630000, 10.00000000, 787695061, 1 );
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -205.03960000, -364.88280000, 13.12090000, 10.00000000, 787695061, 1 );
        SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -205.03960000, -364.88280000, 13.12090000, 10.00000000, 787695061, 1 );
    }
    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            WAIT( 0 );
        }
        switch (l_U369)
        {
            case 2:
            if (NOT l_U376)
            {
                SET_CHAR_COORDINATES( sub_3746(), l_U514._fU0 + 5.00000000, l_U514._fU4 + 5.00000000, l_U514._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3746(), 2195.90300000, 627.40830000, 4.80670000 );
                SET_CHAR_HEADING( sub_3746(), 43.00000000 );
            }
            break;
            case 4: break;
            case 7:
            SET_CHAR_COORDINATES( sub_3746(), 2195.90300000, 627.40830000, 4.80670000 );
            SET_CHAR_HEADING( sub_3746(), 43.00000000 );
            break;
            case 8:
            if (IS_VEH_DRIVEABLE( l_U451[0] ))
            {
                SET_CAR_COORDINATES( l_U451[0], -135.99150000, -340.99580000, 13.68200000 );
                SET_CAR_HEADING( l_U451[0], 183.88690000 );
            }
            if (IS_VEH_DRIVEABLE( l_U451[1] ))
            {
                SET_CAR_COORDINATES( l_U451[1], -135.80860000, -328.08330000, 13.78220000 );
                SET_CAR_HEADING( l_U451[1], 174.62590000 );
            }
            if (IS_VEH_DRIVEABLE( l_U451[2] ))
            {
                SET_CAR_COORDINATES( l_U451[2], -135.85100000, -313.45930000, 13.68720000 );
                SET_CAR_HEADING( l_U451[2], 177.86510000 );
            }
            if (NOT (IS_CHAR_INJURED( sub_3746() )))
            {
                SET_CHAR_COORDINATES( sub_3746(), -135.19140000, -291.14290000, 13.70550000 );
                SET_CHAR_HEADING( sub_3746(), 178.08780000 );
            }
            LOAD_SCENE( -135.19140000, -291.14290000, 13.70550000 );
            if (((NOT (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                CLEAR_CHAR_TASKS( l_U428[0] );
                OPEN_SEQUENCE_TASK( ref l_U551 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U451[0], -135.27370000, -389.58170000, 13.71940000, 15.00000000, 0, -322343873, 4, -1, -1 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U451[0], -164.92070000, -405.31800000, 13.75180000, 15.00000000, 0, -322343873, 4, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U551 );
                TASK_PERFORM_SEQUENCE( l_U428[0], l_U551 );
                CLEAR_SEQUENCE_TASK( l_U551 );
            }
            if (((NOT (IS_CHAR_INJURED( l_U431[0] ))) AND (IS_VEH_DRIVEABLE( l_U451[2] ))) AND (IS_VEH_DRIVEABLE( l_U451[1] )))
            {
                CLEAR_CHAR_TASKS( l_U431[0] );
                TASK_CAR_MISSION( l_U431[0], l_U451[2], l_U451[1], 7, 15.00000000, 4, -1, -1 );
            }
            if (((NOT (IS_CHAR_INJURED( l_U436 ))) AND (IS_VEH_DRIVEABLE( l_U451[1] ))) AND (IS_VEH_DRIVEABLE( l_U451[0] )))
            {
                CLEAR_CHAR_TASKS( l_U436 );
                TASK_CAR_MISSION( l_U436, l_U451[1], l_U451[0], 7, 15.00000000, 4, -1, -1 );
            }
            l_U655 = l_U654 - 1;
            break;
            case 10: break;
        }
    }
    return;
}
