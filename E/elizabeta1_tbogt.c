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
    l_U354 = 0;
    l_U381 = -1;
    l_U394 = {536.63000000, 793.31000000, 19.90000000};
    l_U397 = {934.85000000, 1556.49000000, 18.00000000};
    l_U400 = {-225.97420000, 1645.70800000, 18.56770000};
    l_U403 = {547.17470000, 776.03630000, 21.91830000};
    l_U406 = {559.08310000, 765.56440000, 20.11390000};
    l_U409 = {551.66030000, 765.83030000, 20.11390000};
    l_U412 = {559.66830000, 761.17760000, 20.11330000};
    l_U415 = {569.12690000, 764.00270000, 20.11330000};
    l_U418 = {539.54790000, 766.59980000, 20.11390000};
    l_U421 = {381.34310000, 1532.11700000, 15.85600000};
    l_U424 = {380.60290000, 1529.48200000, 15.94230000};
    l_U427 = {867.45610000, 630.13010000, 37.60940000};
    l_U430 = {867.95840000, 627.18020000, 37.51390000};
    l_U433 = {858.36690000, 628.73310000, 37.58210000};
    l_U436 = {849.68360000, 628.63560000, 37.57960000};
    l_U439 = {840.78120000, 628.64370000, 37.67980000};
    l_U442 = {831.24830000, 628.78360000, 37.97270000};
    l_U445 = {947.00000000, -261.20000000, 18.50000000};
    l_U448 = {551.97590000, 763.48410000, 20.11330000};
    l_U454 = 1;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_726();
        sub_2900();
    }
    WAIT( 0 );
    g_U10460 = 0;
    g_U10434 = 0;
    LOAD_ADDITIONAL_TEXT( "ELIZA_1", 0 );
    LOAD_ADDITIONAL_TEXT( "E1E1AUD", 6 );
    sub_3528( "E1E1AUD" );
    sub_3657( 0, sub_2940(), "JOHNNY", 0 );
    GET_GAME_TIMER( ref l_U374 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    PLAY_SOUND_FROM_POSITION( -1, "B1_GET_BILLYS_BIKE_BACK_GARAGE", 934, 1556, 18 );
    g_U2771 = 1;
    PROCESS_MISSION_DELETION_LIST();
    SET_CAR_DENSITY_MULTIPLIER( 0.70000000 );
    REMOVE_COVER_POINT( l_U592[0] );
    REMOVE_COVER_POINT( l_U592[1] );
    REMOVE_COVER_POINT( l_U592[2] );
    REMOVE_COVER_POINT( l_U592[3] );
    REMOVE_COVER_POINT( l_U592[4] );
    ADD_COVER_POINT( l_U406._fU0, l_U406._fU4, l_U406._fU8, 2, 180, 0, 0, ref l_U592[0] );
    ADD_COVER_POINT( l_U409._fU0, l_U409._fU4, l_U409._fU8, 1, 180, 0, 0, ref l_U592[1] );
    ADD_COVER_POINT( l_U412._fU0, l_U412._fU4, l_U412._fU8, 0, 180, 2, 0, ref l_U592[2] );
    ADD_COVER_POINT( l_U415._fU0, l_U415._fU4, l_U415._fU8, 0, 180, 0, 0, ref l_U592[3] );
    ADD_COVER_POINT( l_U418._fU0, l_U418._fU4, l_U418._fU8, 1, 180, 0, 0, ref l_U592[4] );
    SWITCH_GARBAGE_TRUCKS( 0 );
    CLEAR_AREA( 549.80620000, 764.61660000, 19.91830000, 50.00000000, 1 );
    sub_4258( "E1E1AUD", "E1E1_TBACK", "E1E1_CBACK" );
    while (true)
    {
        WAIT( 0 );
        switch (l_U362)
        {
            case 0:
            sub_4403();
            break;
            case 1:
            sub_11113();
            break;
            case 2:
            sub_14780();
            break;
            case 3:
            sub_25705();
            break;
            case 4:
            sub_35255();
            break;
            case 5:
            sub_38524();
            break;
            case 6:
            sub_43853();
            break;
            case 7:
            sub_47542();
            break;
        }
        if (l_U362 > 1)
        {
            if (l_U362 < 6)
            {
                if (l_U362 > 2)
                {
                    if (l_U461)
                    {
                        sub_54447();
                    }
                    if (NOT sub_28993())
                    {
                        if (l_U362 < 6)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U541 )))
                            {
                                sub_29258( 1 );
                            }
                            else
                            {
                                sub_29258( 5 );
                            }
                        }
                    }
                }
            }
            if (l_U362 > 3)
            {
                if (IS_VEH_DRIVEABLE( l_U504[0] ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2940(), l_U504[0], 250, 250, 40, 0 )))
                    {
                        sub_29258( 3 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U541 ))
            {
                if (IS_CHAR_INJURED( l_U541 ))
                {
                    sub_29258( 5 );
                }
            }
            if (DOES_CHAR_EXIST( l_U542 ))
            {
                if (IS_CHAR_INJURED( l_U542 ))
                {
                    sub_29258( 6 );
                }
            }
        }
        if (sub_8479())
        {
            if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
            {
                sub_56483( ref g_U11028[0], 2 );
            }
            if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
            {
                sub_56483( ref g_U11028[1], 2 );
            }
        }
    }
    return;
}

void sub_726()
{
    sub_735();
    return;
}

void sub_735()
{
    int iVar2;

    iVar2 = 4;
    sub_749( iVar2 );
    sub_1890( iVar2 );
    return;
}

void sub_749(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_793();
        sub_1001();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1126();
            sub_1178();
            g_U11095 = 1;
        }
    }
    sub_1271();
    sub_1410();
    uVar5 = sub_1523( uParam0 );
    sub_1799( uVar5, 0 );
    return;
}

void sub_793()
{
    if (g_U10993)
    {
        return;
    }
    sub_820( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_941();
    }
    return;
}

void sub_820(int iParam0)
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

void sub_941()
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

void sub_1001()
{
    sub_1010();
    return;
}

void sub_1010()
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

void sub_1126()
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

void sub_1178()
{
    sub_1187();
    return;
}

void sub_1187()
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

void sub_1271()
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

void sub_1410()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1432();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1432()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1523(unknown uParam0)
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
    sub_1754( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1754(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1799(int iParam0, boolean bParam1)
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

void sub_1890(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1899();
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
    if (NOT sub_2659())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2725();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1899()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1937( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_1937( 1, g_U572[I] )) != 0)
            {
                sub_2223( I );
            }
        }
    }
    if (NOT sub_2389())
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

int sub_1937(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2223(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2308( g_U572 - 1 );
    return;
}

void sub_2308(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2389()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1937( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2659()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2725()
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

void sub_2900()
{
    g_U10436 = 0;
    sub_2916( 0 );
    STOP_PED_SPEAKING( sub_2940(), 0 );
    if (DOES_CHAR_EXIST( l_U542 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U542, 1 );
    }
    if (DOES_CHAR_EXIST( l_U541 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U541, 1 );
    }
    if (DOES_CHAR_EXIST( l_U543 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U543, 1 );
    }
    if (DOES_VEHICLE_EXIST( l_U503 ))
    {
        ADD_CAR_TO_MISSION_DELETION_LIST( l_U503 );
    }
    if (DOES_CHAR_EXIST( l_U537 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U537, 1 );
    }
    if (DOES_CHAR_EXIST( l_U536 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U536, 1 );
    }
    for ( l_U363 = 0; l_U363 < 16; l_U363++ )
    {
        if (DOES_CHAR_EXIST( l_U519[l_U363] ))
        {
            ADD_PED_TO_MISSION_DELETION_LIST( l_U519[l_U363], 1 );
        }
    }
    for ( l_U363 = 0; l_U363 < 6; l_U363++ )
    {
        if (DOES_VEHICLE_EXIST( l_U504[l_U363] ))
        {
            ADD_CAR_TO_MISSION_DELETION_LIST( l_U504[l_U363] );
        }
    }
    sub_3325();
    SWITCH_GARBAGE_TRUCKS( 1 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    g_U10434 = 1;
    g_U2771 = 0;
    g_U10460 = 1;
    SET_PED_IS_BLIND_RAGING( sub_2940(), 0 );
    REMOVE_ANIMS( "Gestures@Niko" );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2916(unknown uParam0)
{
    g_U11132 = uParam0;
    return;
}

void sub_2940()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3325()
{
    g_U39126 = 0;
    return;
}

void sub_3528(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_3547();
    return;
}

void sub_3547()
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

void sub_3657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3741( "\n PED NUMBER ", uParam0 );
    sub_3781( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3741(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3781(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4258(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U39126 = 1;
    StrCopy( ref g_U39127, uParam0, 16 );
    StrCopy( ref g_U39131, uParam1, 32 );
    StrCopy( ref g_U39139, uParam2, 32 );
    return;
}

void sub_4403()
{
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        GET_CURRENT_WEATHER( ref l_U603 );
        FORCE_WEATHER_NOW( 0 );
        ENABLE_SCENE_STREAMING( 0 );
        LOAD_ADDITIONAL_TEXT( "E1E1AUD", 6 );
        START_CUTSCENE_NOW( "ET01_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        CLEAR_NAMED_CUTSCENE( "ET01_AA" );
        FORCE_WEATHER_NOW( l_U603 );
        RELEASE_WEATHER();
        g_U39149[12] = 0;
    }
    else if (g_U39149[12] > 0)
    {
        l_U362++;
        l_U371 = 1;
    }
    CLEAR_AREA( 381.40420000, 1540.09700000, 15.46430000, 30.00000000, 1 );;
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U598 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U599 );
    REQUEST_MODEL( -1962071130 );
    REQUEST_MODEL( 236691815 );
    REQUEST_MODEL( -1695293152 );
    REQUEST_ANIMS( "MISSELIZABETA1" );
    REQUEST_MODEL( sub_4754( 17 ) );
    REQUEST_MODEL( sub_4754( 15 ) );
    REQUEST_CAR_RECORDING( 3005 );
    REQUEST_CAR_RECORDING( 3004 );
    REQUEST_CAR_RECORDING( 3003 );
    REQUEST_CAR_RECORDING( 3002 );
    REQUEST_CAR_RECORDING( 3001 );
    REQUEST_CAR_RECORDING( 3000 );
    if (g_U39149[12] > 0)
    {
        REQUEST_MODEL( -2107556865 );
        REQUEST_MODEL( 977480632 );
        REQUEST_MODEL( -14495224 );
        REQUEST_MODEL( 729783779 );
        REQUEST_MODEL( 2006142190 );
    }
    LOAD_ALL_OBJECTS_NOW();
    while ((((((((((NOT (HAS_MODEL_LOADED( -1962071130 ))) || (NOT (HAS_MODEL_LOADED( 236691815 )))) || (NOT (HAS_MODEL_LOADED( -1695293152 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSELIZABETA1" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3005 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3004 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3003 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3002 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3001 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 3000 ))))
    {
        WAIT( 0 );
        if (NOT (HAS_MODEL_LOADED( 236691815 )))
        {
            PRINTSTRING( "LOADING M_Y_GRyders_01...  " );
        }
        if (NOT (HAS_MODEL_LOADED( -1695293152 )))
        {
            PRINTSTRING( "LOADING W_E1_SWEEPER...  " );
        }
        if (NOT (HAVE_ANIMS_LOADED( "MISSELIZABETA1" )))
        {
            PRINTSTRING( "LOADING MISSELIZABETA1...  " );
        }
    }
    if (g_U39149[12] > 0)
    {
        while (((((NOT (HAS_MODEL_LOADED( 729783779 ))) || (NOT (HAS_MODEL_LOADED( -14495224 )))) || (NOT (HAS_MODEL_LOADED( -2107556865 )))) || (NOT (HAS_MODEL_LOADED( 977480632 )))) || (NOT (HAS_MODEL_LOADED( 2006142190 ))))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 729783779 )))
            {
                PRINTSTRING( "LOADING SLAMVAN...  " );
            }
            if (NOT (HAS_MODEL_LOADED( -14495224 )))
            {
                PRINTSTRING( "LOADING REGINA...  " );
            }
            if (NOT (HAS_MODEL_LOADED( -2107556865 )))
            {
                PRINTSTRING( "LOADING m_y_gangels_06...  " );
            }
            if (NOT (HAS_MODEL_LOADED( 977480632 )))
            {
                PRINTSTRING( "LOADING m_y_gangels_01...  " );
            }
            if (NOT (HAS_MODEL_LOADED( 2006142190 )))
            {
                PRINTSTRING( "LOADING DAEMON...  " );
            }
        }
    }
    CLEAR_AREA_OF_COPS( 379.88760000, 1531.99600000, 15.94810000, 50.00000000 );
    ENABLE_PED_HELMET( sub_2940(), 0 );
    SUPPRESS_CAR_MODEL( -14495224 );
    SUPPRESS_CAR_MODEL( 729783779 );
    SUPPRESS_CAR_MODEL( -1962071130 );
    CLEAR_AREA( 379.88760000, 1531.99600000, 15.94810000, 5.00000000, 1 );
    SET_CHAR_COORDINATES( sub_2940(), 379.88760000, 1531.99600000, 15.94810000 );
    SET_CHAR_HEADING( sub_2940(), 357 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2940() );
    SET_CAM_BEHIND_PED( sub_2940() );
    CLEAR_AREA( 382.05870000, 1529.99900000, 15.93830000, 2.00000000, 1 );
    CREATE_CHAR( 26, 236691815, 382.05870000, 1529.99900000, 15.93830000, ref l_U543, 1 );
    SET_CHAR_HEADING( l_U543, 27 );
    SET_CHAR_HEALTH( l_U543, 300 );
    SET_CHAR_MAX_HEALTH( l_U543, 300 );
    SET_CHAR_BULLETPROOF_VEST( l_U543, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U543, 0 );
    GIVE_WEAPON_TO_CHAR( l_U543, 7, 30000, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U543, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U543, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U543, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U543, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U543, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U543, 4, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U543, 0, 0, 0 );
    SET_CHAR_RELATIONSHIP( l_U543, 3, 23 );
    SET_COMBAT_DECISION_MAKER( l_U543, l_U598 );
    SET_CHAR_ACCURACY( l_U543, 40 );
    CLEAR_AREA( l_U424._fU0, l_U424._fU4, l_U424._fU8, 2.00000000, 1 );
    while (NOT (sub_6449( 17, ref l_U542, 380.60290000, 1529.48200000, 15.94230000, 282.39380000 )))
    {
        WAIT( 0 );
    }
    GET_CHAR_PROP_INDEX( l_U542, 0, ref l_U381 );
    if (NOT (l_U381 == 0))
    {
        SET_CHAR_PROP_INDEX( l_U542, 0, 0 );
    }
    SET_CHAR_HEADING( l_U542, 7 );
    SET_CHAR_HEALTH( l_U542, 300 );
    SET_CHAR_MAX_HEALTH( l_U542, 300 );
    SET_CHAR_BULLETPROOF_VEST( l_U542, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U542, 0 );
    GIVE_WEAPON_TO_CHAR( l_U542, 12, 30000, 1 );
    sub_3657( 6, l_U542, "DESEAN", 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U542, 0 );
    SET_CHAR_RELATIONSHIP( l_U542, 3, 23 );
    SET_COMBAT_DECISION_MAKER( l_U542, l_U598 );
    SET_CHAR_ACCURACY( l_U542, 40 );
    CLEAR_AREA( l_U421._fU0, l_U421._fU4, l_U421._fU8, 2.00000000, 1 );
    while (NOT (sub_6449( 15, ref l_U541, l_U421._fU0, l_U421._fU4, l_U421._fU8, 282.39380000 )))
    {
        WAIT( 0 );
    }
    SET_CHAR_HEADING( l_U541, 14 );
    SET_CHAR_HEALTH( l_U541, 300 );
    SET_CHAR_MAX_HEALTH( l_U541, 300 );
    SET_CHAR_BULLETPROOF_VEST( l_U541, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U541, 0 );
    sub_3657( 1, l_U541, "MALC", 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U541, 0 );
    SET_CHAR_RELATIONSHIP( l_U541, 3, 23 );
    SET_COMBAT_DECISION_MAKER( l_U541, l_U598 );
    SET_CHAR_ACCURACY( l_U541, 40 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 961.33890000, 1550.66900000, 12.83640000, 911.34470000, 1562.85900000, 24.39600000, 0 );
    CLEAR_AREA( 381.40420000, 1540.09700000, 15.46430000, 5.00000000, 1 );
    CREATE_CAR( -1962071130, 381.40420000, 1540.09700000, 15.46430000, ref l_U503, 1 );
    CHANGE_CAR_COLOUR( l_U503, 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U503, 0, 0 );
    SET_CAR_HEADING( l_U503, 318 );
    RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
    if (sub_8410())
    {
        if (NOT l_U483)
        {
            if (sub_8479())
            {
                sub_8522( 1 );
                l_U483 = 1;
            }
        }
        if (l_U483)
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (IS_VEH_DRIVEABLE( g_U11087[0] ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( g_U11081[0] )))
                    {
                        WARP_CHAR_INTO_CAR( g_U11081[0], g_U11087[0] );
                    }
                    SET_CAR_COORDINATES( g_U11087[0], 379.30470000, 1554.27400000, 16.40970000 );
                    SET_CHAR_HEADING( g_U11081[0], 270 );
                }
                else
                {
                    SET_CHAR_COORDINATES( g_U11081[0], 379.30470000, 1554.27400000, 16.40970000 );
                    SET_CHAR_HEADING( g_U11081[0], 270 );
                }
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                if (IS_VEH_DRIVEABLE( g_U11087[1] ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( g_U11081[1] )))
                    {
                        WARP_CHAR_INTO_CAR( g_U11081[1], g_U11087[1] );
                    }
                    SET_CAR_COORDINATES( g_U11087[1], 377.46550000, 1551.97500000, 16.40060000 );
                    SET_CHAR_HEADING( g_U11081[1], 270 );
                }
                else
                {
                    SET_CHAR_COORDINATES( g_U11081[1], 377.46550000, 1551.97500000, 16.40060000 );
                    SET_CHAR_HEADING( g_U11081[1], 270 );
                }
            }
        }
    }
    if (g_U39149[12] == 0)
    {
        LOAD_SCENE( 378.34770000, 1535.40600000, 15.43600000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_9017(), 0 );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    sub_10717( 1 );
    l_U362++;
    return;
}

int sub_4754(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1754( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

int sub_6449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_6460( uParam0 ))
    {
        sub_6508( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_7744( uParam0 );
    return 0;
}

void sub_6460(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4754( uParam0 ) );
}

void sub_6508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_6519( uParam0 ), sub_4754( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_6626( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6732( uParam0, (uParam1^) );
    return;
}

int sub_6519(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_6626(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_6732(unknown uParam0, unknown uParam1)
{
    sub_6744( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_6744(unknown uParam0, int iParam1)
{
    sub_6755( uParam0 );
    if (iParam1 == 22)
    {
        sub_6855( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7514( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_6755(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_6855(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_2940()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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

void sub_7514(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_6855( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6855( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_7744(unknown uParam0)
{
    REQUEST_MODEL( sub_4754( uParam0 ) );
    return;
}

int sub_8410()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_8479()
{
    if (NOT sub_8410())
    {
        return 0;
    }
    return g_U11090;
}

void sub_8522(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_8554( g_U11081[I], uParam0 );
    }
    return;
}

void sub_8554(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_8410())
        {
            if (NOT sub_8479())
            {
                sub_8591();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_8720( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_9017() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_9091( ref g_U11028[iVar5], sub_2940() );
                if (g_U11090)
                {
                    sub_10118( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

void sub_8591()
{
    g_U11090 = 1;
    return;
}

void sub_8720(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_8785( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_8785(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_9017()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_9091(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_9187( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_2940()) AND (iParam1 != sub_2940()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_9672( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_2940())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_9787( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_9787( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_9787( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_9787( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_9787( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_9187(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_9211( uParam0, uParam1 )));
}

boolean sub_9211(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_9672(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_9787(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_2940())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_10118(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_10717(boolean bParam0)
{
    unknown uVar3;

    if (NOT bParam0)
    {
        GET_PED_GROUP_INDEX( sub_2940(), ref uVar3 );
        if (NOT (DOES_GROUP_EXIST( uVar3 )))
        {
            CREATE_GROUP( 0, ref uVar3, 1 );
        }
        if (NOT (IS_GROUP_LEADER( sub_2940(), uVar3 )))
        {
            SET_GROUP_LEADER( uVar3, sub_2940() );
        }
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U542, uVar3 )))
            {
                SET_GROUP_MEMBER( uVar3, l_U542 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U541, uVar3 )))
            {
                SET_GROUP_MEMBER( uVar3, l_U541 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U543 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U543, uVar3 )))
            {
                SET_GROUP_MEMBER( uVar3, l_U543 );
            }
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U542 )))
    {
        REMOVE_CHAR_FROM_GROUP( l_U542 );
    }
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        REMOVE_CHAR_FROM_GROUP( l_U541 );
    }
    if (NOT (IS_CHAR_INJURED( l_U543 )))
    {
        REMOVE_CHAR_FROM_GROUP( l_U543 );
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        REMOVE_GROUP( uVar3 );
    }
    return;
}

void sub_11113()
{
    switch (l_U366)
    {
        case 0:
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        sub_10717( 1 );
        CLEAR_AREA( 377.98570000, 1538.97800000, 15.38260000, 4.00000000, 1 );
        if (sub_11216())
        {
            sub_11250( ref l_U565, 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U503 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U582 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 377.98570000, 1538.97800000, 15.38260000, 2, -2, 2.00000000 );
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            TASK_ENTER_CAR_AS_DRIVER( 0, l_U503, 10000 );
            CLOSE_SEQUENCE_TASK( l_U582 );
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            TASK_PERFORM_SEQUENCE( sub_2940(), l_U582 );
            CLEAR_SEQUENCE_TASK( l_U582 );
            WAIT( 500 );
        }
        if (IS_VEH_DRIVEABLE( l_U503 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U541 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541 );
                GIVE_WEAPON_TO_CHAR( l_U541, 22, 200, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U541, 22, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541, 1 );
                TASK_LOOK_AT_CHAR( sub_2940(), l_U541, 15000, 0 );
                TASK_LOOK_AT_CHAR( l_U541, sub_2940(), 15000, 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U541, 1 );
                TASK_ENTER_CAR_AS_PASSENGER( l_U541, l_U503, 10000, 0 );
                OPEN_SEQUENCE_TASK( ref l_U580 );
                TASK_PAUSE( 0, 1000 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "S_Cleaner_Give", "MISSELIZABETA1", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PAUSE( 0, 2000 );
                TASK_PAUSE( 0, 500 );
                CLOSE_SEQUENCE_TASK( l_U580 );
            }
            if (NOT (IS_CHAR_INJURED( l_U542 )))
            {
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( l_U542, l_U503, 10000, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U543 )))
            {
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( l_U543, l_U503, 10000, 2 );
            }
        }
        CREATE_CAM( 14, ref l_U587[0] );
        SET_CAM_POS( l_U587[0], 382.83850000, 1545.52400000, 17.07279000 );
        SET_CAM_ROT( l_U587[0], -7.39834900, 0.00000000, 168.22640000 );
        SET_CAM_FOV( l_U587[0], 35.00000000 );
        SET_CAM_ACTIVE( l_U587[0], 1 );
        SET_CAM_PROPAGATE( l_U587[0], 1 );
        CREATE_CAM( 14, ref l_U587[1] );
        SET_CAM_POS( l_U587[1], 381.57280000, 1544.16400000, 16.38885000 );
        SET_CAM_ROT( l_U587[1], -5.02579500, -0.00000000, -176.32040000 );
        SET_CAM_FOV( l_U587[1], 35.00000000 );
        SET_CAM_ACTIVE( l_U587[1], 1 );
        SET_CAM_PROPAGATE( l_U587[1], 1 );
        CREATE_CAM( 3, ref l_U590 );
        SET_CAM_INTERP_STYLE_CORE( l_U590, l_U587[0], l_U587[1], 20000, 0 );
        SET_CAM_ACTIVE( l_U590, 1 );
        SET_CAM_PROPAGATE( l_U590, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U492 = 0;
        DO_SCREEN_FADE_IN( 400 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        sub_12289( "E1E1_CAGE", ref l_U565, 6, 1 );
        SETTIMERA( 0 );
        l_U366++;
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U503 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_2940(), l_U503 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( l_U541, l_U503 ))
                    {
                        if (NOT sub_11216())
                        {
                            SETTIMERA( 0 );
                            l_U366 = 2;
                        }
                    }
                }
            }
        }
        if (sub_13385())
        {
            l_U492 = 1;
            l_U366 = 2;
        }
        if (NOT l_U497)
        {
            if (NOT sub_11216())
            {
                sub_12289( "E1E1_BIKES", ref l_U565, 6, 1 );
                l_U497 = 1;
            }
        }
        break;
        case 2:
        if (l_U492 == 1)
        {
            REQUEST_MODEL( -1695293152 );
            while (NOT (HAS_MODEL_LOADED( -1695293152 )))
            {
                WAIT( 0 );
            }
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_OUT_UNHACKED( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U503 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_2940(), l_U503 )))
                {
                    WARP_CHAR_INTO_CAR( sub_2940(), l_U503 );
                }
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U541, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U541, l_U503, 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U542 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U542, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U542, l_U503, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U543 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U543, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U543, l_U503, 2 );
                    }
                }
                CLOSE_ALL_CAR_DOORS( l_U503 );
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
            }
            if (sub_13936( l_U565 ))
            {
                sub_11250( ref l_U565, 0 );
            }
        }
        if (l_U483)
        {
            if (sub_8479())
            {
                sub_8522( 0 );
                l_U483 = 0;
            }
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CAM_BEHIND_PED( sub_2940() );
        SET_PLAYER_CONTROL( sub_9017(), 1 );
        CLEAR_CHAR_TASKS( sub_2940() );
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            CREATE_OBJECT( -1695293152, 381.57280000, 1544.16400000, 16.38885000, ref l_U602, 1 );
            ATTACH_OBJECT_TO_PED( l_U602, l_U541, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
            TASK_PERFORM_SEQUENCE( l_U541, l_U580 );
            CLEAR_SEQUENCE_TASK( l_U580 );
            sub_12289( "E1E1_GUN", ref l_U565, 6, 1 );
        }
        if (NOT l_U492)
        {
            INCREMENT_INT_STAT( 373, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541, 0 );
        }
        sub_14397();
        REMOVE_BLIP( l_U544 );
        ADD_BLIP_FOR_COORD( l_U403._fU0, l_U403._fU4, l_U403._fU8, ref l_U544 );
        SET_ROUTE( l_U544, 1 );
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        DISPLAY_HUD( 1 );
        DISPLAY_RADAR( 1 );
        SETTIMERA( 0 );
        sub_10717( 0 );
        l_U366++;
        l_U362++;
        break;
    }
    return;
}

void sub_11216()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_11250(int iParam0, unknown uParam1)
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

void sub_12289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12312( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_12312(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12366( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12366(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12388( iParam1 )))
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
    sub_13080( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_12388(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12465( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12465( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12465( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_12465(unknown uParam0)
{
    return;
}

void sub_13080(int iParam0, int iParam1)
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

int sub_13385()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13936(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_12465( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12465( "\n speech is not playing" );
    }
    return 0;
}

void sub_14397()
{
    if (((NOT (IS_CHAR_INJURED( l_U543 ))) AND (NOT (IS_CHAR_INJURED( l_U542 )))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U543, 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U542, 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U541, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        if (HAS_CHAR_GOT_WEAPON( l_U541, 22 ))
        {
            REMOVE_WEAPON_FROM_CHAR( l_U541, 22 );
        }
        GIVE_WEAPON_TO_CHAR( l_U541, 12, 30000, 1 );
    }
    if (HAS_CHAR_GOT_WEAPON( sub_2940(), 22 ))
    {
        REMOVE_WEAPON_FROM_CHAR( sub_2940(), 22 );
    }
    GIVE_WEAPON_TO_CHAR( sub_2940(), 22, 200, 1 );
    SET_CURRENT_CHAR_WEAPON( sub_2940(), 22, 1 );
    return;
}

void sub_14780()
{
    switch (l_U371)
    {
        case 0:
        if (l_U455 == 0)
        {
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_2940(), l_U403._fU0, l_U403._fU4, l_U403._fU8, 5.00000000, 5.00000000, 2.00000000, l_U454 )) AND (sub_14908( 1, 1 ))) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_2940() ))))
            {
                SET_PLAYER_CONTROL( sub_9017(), 0 );
                if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
                {
                    GET_CAR_CHAR_IS_USING( sub_2940(), ref l_U511 );
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref l_U511 );
                    WAIT( 200 );
                    if (IS_VEH_DRIVEABLE( l_U511 ))
                    {
                        TASK_EVERYONE_LEAVE_CAR( l_U511 );
                    }
                }
                l_U371++;
            }
            if (l_U372 > 3)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
                {
                    GET_CAR_CHAR_IS_USING( sub_2940(), ref l_U511 );
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref l_U511 );
                    if (NOT l_U498)
                    {
                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U511, ref l_U388 );
                        if (l_U388 < 3)
                        {
                            if (sub_13936( l_U565 ))
                            {
                                sub_15446( ref l_U565 );
                            }
                            PRINT_NOW( "NEWCAR", 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "GOTOTOLL", 7500, 1 );
                            l_U463 = 1;
                            SETTIMERB( 0 );
                        }
                        l_U498 = 1;
                    }
                }
                else if (l_U498)
                {
                    if (sub_13936( l_U565 ))
                    {
                        sub_15446( ref l_U565 );
                    }
                    l_U498 = 0;
                }
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_9017(), 0 ))
        {
            if (l_U455 == 0)
            {
                STOP_PED_SPEAKING( sub_2940(), 0 );
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    STOP_PED_SPEAKING( l_U541, 0 );
                }
                SET_ROUTE( l_U544, 0 );
                REMOVE_BLIP( l_U544 );
                if (sub_13936( l_U565 ))
                {
                    sub_15446( ref l_U565 );
                }
                PRINT_NOW( "LOSEWANT1", 7500, 1 );
                l_U454 = 0;
                l_U455 = 1;
            }
        }
        else if (l_U455 == 1)
        {
            REMOVE_BLIP( l_U544 );
            ADD_BLIP_FOR_COORD( l_U403._fU0, l_U403._fU4, l_U403._fU8, ref l_U544 );
            SET_ROUTE( l_U544, 1 );
            PRINT_NOW( "GOTOTOLL", 7500, 1 );
            SETTIMERB( 0 );
            l_U463 = 1;
            l_U454 = 1;
            l_U455 = 0;
        }
        if ((TIMERB() > 4000) AND (l_U463 == 1))
        {
            sub_16248();
        }
        switch (l_U372)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U541 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U541, 29, ref l_U591 );
                if (NOT (l_U591 == 7))
                {
                    GET_SEQUENCE_PROGRESS( l_U541, ref l_U370 );
                }
            }
            if (l_U370 > 2)
            {
                if (NOT (HAS_CHAR_GOT_WEAPON( sub_2940(), 22 )))
                {
                    GIVE_WEAPON_TO_CHAR( sub_2940(), 22, 50, 1 );
                    SET_CURRENT_CHAR_WEAPON( sub_2940(), 22, 1 );
                }
                if (DOES_OBJECT_EXIST( l_U602 ))
                {
                    DETACH_OBJECT( l_U602, 0 );
                    DELETE_OBJECT( ref l_U602 );
                }
                SETTIMERA( 0 );
                l_U372++;
            }
            break;
            case 1:
            if ((TIMERA() > 1000) AND (NOT sub_11216()))
            {
                sub_12289( "E1E1_GO", ref l_U565, 6, 1 );
                if (g_U39240 == 0)
                {
                    sub_16881();
                }
                else if (g_U39240 == 3)
                {
                    sub_16881();
                }
                SETTIMERA( 0 );
                l_U372++;
            }
            break;
            case 2:
            if ((NOT sub_11216()) AND (TIMERA() > 500))
            {
                PRINT_NOW( "GOTOTOLL", 7500, 1 );
                SETTIMERA( 0 );
                l_U372++;
            }
            break;
            case 3:
            if ((NOT sub_11216()) AND (TIMERA() > 8000))
            {
                if (l_U455 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (g_U39240 == 0)
                        {
                            sub_12289( "E1E1_TB2", ref l_U565, 6, 1 );
                        }
                        else if (g_U39240 == 1)
                        {
                            sub_12289( "E1E1_TB2", ref l_U565, 6, 1 );
                        }
                        SETTIMERA( 0 );
                        l_U372++;
                    }
                }
            }
            break;
            case 4:
            if (g_U39240 < 2)
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, sub_2940(), 20.00000000, 20.00000000, 4.00000000, 0 )))
                    {
                        if (sub_13936( l_U565 ))
                        {
                            sub_11250( ref l_U565, 1 );
                        }
                    }
                }
            }
            if (NOT l_U476)
            {
                if (l_U455 == 0)
                {
                    if ((NOT (sub_13936( l_U565 ))) AND (TIMERA() > 22000))
                    {
                        if (g_U39240 == 0)
                        {
                            sub_12289( "E1E1_MAL1", ref l_U565, 6, 1 );
                            l_U476 = 1;
                        }
                        if (g_U39240 == 1)
                        {
                            sub_12289( "E1E1_MAL2", ref l_U565, 6, 1 );
                            l_U476 = 1;
                        }
                    }
                }
            }
            break;
        }
        break;
        case 1:
        if (g_U39149[12] > 0)
        {
            sub_10717( 1 );
            sub_14397();
            if (IS_VEH_DRIVEABLE( l_U503 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_2940(), l_U503 )))
                {
                    WARP_CHAR_INTO_CAR( sub_2940(), l_U503 );
                }
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U541, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U541, l_U503, 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U542 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U542, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U542, l_U503, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U543 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U543, l_U503 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U543, l_U503, 2 );
                    }
                }
                SET_CAR_COORDINATES( l_U503, 567.30630000, 776.89130000, 20.56250000 );
                SET_CAR_HEADING( l_U503, 16 );
                SET_CAR_ON_GROUND_PROPERLY( l_U503 );
                CLOSE_ALL_CAR_DOORS( l_U503 );
            }
        }
        else
        {
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        SETTIMERA( 0 );
        g_U8764 = 1;
        if (g_U39149[12] == 0)
        {
            while (TIMERA() < 500)
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_OUT_UNHACKED( 2000 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        g_U10436 = 1;
        if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2940(), ref l_U511 );
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref l_U511 );
        }
        if (IS_VEH_DRIVEABLE( l_U511 ))
        {
            SET_CAR_COORDINATES( l_U511, 567.30630000, 776.89130000, 20.56250000 );
            SET_CAR_HEADING( l_U511, 16 );
            SET_CAR_ON_GROUND_PROPERLY( l_U511 );
            CLOSE_ALL_CAR_DOORS( l_U511 );
        }
        if (IS_VEH_DRIVEABLE( l_U503 ))
        {
            SET_CAR_COORDINATES( l_U503, 567.30630000, 776.89130000, 20.56250000 );
            SET_CAR_HEADING( l_U503, 16 );
            SET_CAR_ON_GROUND_PROPERLY( l_U503 );
            CLOSE_ALL_CAR_DOORS( l_U503 );
        }
        if (sub_11216())
        {
            sub_19499( 0 );
            sub_11250( ref l_U565, 0 );
            CLEAR_PRINTS();
        }
        if (g_U39149[12] == 0)
        {
            REQUEST_MODEL( -2107556865 );
            REQUEST_MODEL( 977480632 );
            REQUEST_MODEL( -14495224 );
            REQUEST_MODEL( 729783779 );
            REQUEST_MODEL( 2006142190 );
            LOAD_ALL_OBJECTS_NOW();
            while (((((NOT (HAS_MODEL_LOADED( 729783779 ))) || (NOT (HAS_MODEL_LOADED( -14495224 )))) || (NOT (HAS_MODEL_LOADED( -2107556865 )))) || (NOT (HAS_MODEL_LOADED( 977480632 )))) || (NOT (HAS_MODEL_LOADED( 2006142190 ))))
            {
                WAIT( 0 );
                if (NOT (HAS_MODEL_LOADED( 729783779 )))
                {
                    PRINTSTRING( "LOADING SLAMVAN...  " );
                }
                if (NOT (HAS_MODEL_LOADED( -14495224 )))
                {
                    PRINTSTRING( "LOADING REGINA...  " );
                }
                if (NOT (HAS_MODEL_LOADED( -2107556865 )))
                {
                    PRINTSTRING( "LOADING m_y_gangels_06...  " );
                }
                if (NOT (HAS_MODEL_LOADED( 977480632 )))
                {
                    PRINTSTRING( "LOADING m_y_gangels_01...  " );
                }
                if (NOT (HAS_MODEL_LOADED( 2006142190 )))
                {
                    PRINTSTRING( "LOADING DAEMON...  " );
                }
            }
        }
        CLEAR_AREA( l_U436._fU0, l_U436._fU4, l_U436._fU8, 200, 1 );
        CREATE_CAR( 729783779, l_U436._fU0, l_U436._fU4, l_U436._fU8, ref l_U504[0], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[0], 1 );
        l_U484 = 1;
        SET_CAR_STRONG( l_U504[0], 1 );
        SET_PETROL_TANK_HEALTH( l_U504[0], 2000 );
        TURN_OFF_VEHICLE_EXTRA( l_U504[0], 5, 0 );
        SET_CAR_HEADING( l_U504[0], 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[0] );
        CREATE_CHAR_INSIDE_CAR( l_U504[0], 26, -2107556865, ref l_U536 );
        GIVE_WEAPON_TO_CHAR( l_U536, 12, 30000, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U536, 23 );
        SET_CHAR_RELATIONSHIP( l_U536, 2, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U536, 1 );
        SET_CHAR_AS_ENEMY( l_U536, 1 );
        ADD_ARMOUR_TO_CHAR( l_U536, 50 );
        CREATE_CHAR_AS_PASSENGER( l_U504[0], 26, 977480632, 0, ref l_U537 );
        GIVE_WEAPON_TO_CHAR( l_U537, 12, 30000, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U537, 23 );
        SET_CHAR_RELATIONSHIP( l_U537, 2, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U537, 1 );
        SET_CHAR_AS_ENEMY( l_U537, 1 );
        SET_COMBAT_DECISION_MAKER( l_U537, l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U537, 1, 0 );
        ADD_ARMOUR_TO_CHAR( l_U537, 50 );
        CLEAR_AREA( l_U442._fU0, l_U442._fU4, l_U442._fU8, 300, 1 );
        CREATE_CAR( -14495224, l_U442._fU0, l_U442._fU4, l_U442._fU8, ref l_U504[5], 1 );
        SET_PETROL_TANK_HEALTH( l_U504[5], 2000 );
        SET_CAR_HEADING( l_U504[5], 90 );
        CHANGE_CAR_COLOUR( l_U504[5], 0, 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[5] );
        CREATE_CHAR_INSIDE_CAR( l_U504[5], 26, -2107556865, ref l_U519[11] );
        GIVE_WEAPON_TO_CHAR( l_U519[11], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[11], l_U599 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U519[11], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[5], 26, 977480632, 0, ref l_U519[12] );
        GIVE_WEAPON_TO_CHAR( l_U519[12], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[12], l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U519[12], 1, 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U519[12], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[5], 26, -2107556865, 1, ref l_U519[13] );
        GIVE_WEAPON_TO_CHAR( l_U519[13], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[13], l_U599 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U519[13], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[5], 26, -2107556865, 2, ref l_U519[14] );
        GIVE_WEAPON_TO_CHAR( l_U519[14], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[14], l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U519[14], 1, 0 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U519[14], 0 );
        CREATE_CAR( -14495224, l_U439._fU0, l_U439._fU4, l_U439._fU8, ref l_U504[1], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[1], 1 );
        SET_PETROL_TANK_HEALTH( l_U504[1], 2000 );
        CHANGE_CAR_COLOUR( l_U504[1], 28, 0 );
        SET_CAR_HEADING( l_U504[1], 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[1] );
        CREATE_CHAR_INSIDE_CAR( l_U504[1], 26, 977480632, ref l_U519[0] );
        GIVE_WEAPON_TO_CHAR( l_U519[0], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[0], l_U599 );
        sub_3657( 5, l_U519[0], "CONVOY", 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[1], 26, -2107556865, 0, ref l_U519[1] );
        GIVE_WEAPON_TO_CHAR( l_U519[1], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[1], l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U519[1], 1, 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[1], 26, 977480632, 1, ref l_U519[2] );
        GIVE_WEAPON_TO_CHAR( l_U519[2], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[2], l_U599 );
        CREATE_CHAR_AS_PASSENGER( l_U504[1], 26, -2107556865, 2, ref l_U519[3] );
        GIVE_WEAPON_TO_CHAR( l_U519[3], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[3], l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U519[3], 1, 0 );
        CREATE_CAR( -14495224, l_U433._fU0, l_U433._fU4, l_U433._fU8, ref l_U504[2], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[2], 1 );
        CHANGE_CAR_COLOUR( l_U504[2], 44, 0 );
        SET_PETROL_TANK_HEALTH( l_U504[2], 2000 );
        SET_CAR_HEADING( l_U504[2], 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[2] );
        CREATE_CHAR_INSIDE_CAR( l_U504[2], 26, 977480632, ref l_U519[4] );
        GIVE_WEAPON_TO_CHAR( l_U519[4], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[4], l_U599 );
        CREATE_CHAR_AS_PASSENGER( l_U504[2], 26, -2107556865, 0, ref l_U519[5] );
        GIVE_WEAPON_TO_CHAR( l_U519[5], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[5], l_U598 );
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U519[5], 1, 0 );
        CREATE_CHAR_AS_PASSENGER( l_U504[2], 26, 977480632, 1, ref l_U519[6] );
        GIVE_WEAPON_TO_CHAR( l_U519[6], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[6], l_U599 );
        CREATE_CHAR_AS_PASSENGER( l_U504[2], 26, -2107556865, 2, ref l_U519[7] );
        GIVE_WEAPON_TO_CHAR( l_U519[7], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[7], l_U598 );
        CREATE_CAR( 2006142190, l_U427._fU0, l_U427._fU4, l_U427._fU8, ref l_U504[3], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[3], 1 );
        SET_PETROL_TANK_HEALTH( l_U504[3], 2000 );
        SET_CAR_HEADING( l_U504[3], 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[3] );
        CREATE_CHAR_INSIDE_CAR( l_U504[3], 26, 977480632, ref l_U519[8] );
        GIVE_WEAPON_TO_CHAR( l_U519[8], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[8], l_U599 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[3] );
        CREATE_CHAR_AS_PASSENGER( l_U504[3], 26, -2107556865, 0, ref l_U519[10] );
        GIVE_WEAPON_TO_CHAR( l_U519[10], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[10], l_U599 );
        CREATE_CAR( 2006142190, l_U430._fU0, l_U430._fU4, l_U430._fU8, ref l_U504[4], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[4], 1 );
        SET_PETROL_TANK_HEALTH( l_U504[4], 2000 );
        SET_CAR_HEADING( l_U504[4], 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[4] );
        CREATE_CHAR_INSIDE_CAR( l_U504[4], 26, 977480632, ref l_U519[9] );
        GIVE_WEAPON_TO_CHAR( l_U519[9], 12, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[9], l_U599 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[4] );
        CREATE_CHAR_AS_PASSENGER( l_U504[4], 26, -2107556865, 0, ref l_U519[15] );
        GIVE_WEAPON_TO_CHAR( l_U519[15], 7, 30000, 0 );
        SET_COMBAT_DECISION_MAKER( l_U519[15], l_U599 );
        for ( l_U363 = 0; l_U363 < 16; l_U363++ )
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U519[l_U363], 23 );
            SET_CHAR_RELATIONSHIP( l_U519[l_U363], 3, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U519[l_U363], 1 );
            SET_CHAR_AS_ENEMY( l_U519[l_U363], 1 );
            ADD_ARMOUR_TO_CHAR( l_U519[l_U363], 50 );
            SET_CHAR_HEALTH( l_U519[l_U363], 250 );
            SET_CHAR_MAX_HEALTH( l_U519[l_U363], 250 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[5] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[5], 3005 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[5], 7000.00000000 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[1] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[1], 3004 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[1], 7000.00000000 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[0] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[0], 3003 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[0], 7000.00000000 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[2] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[2], 3002 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[2], 7000.00000000 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[4] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[4], 3001 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[4], 7000.00000000 );
        }
        if (IS_VEH_DRIVEABLE( l_U504[3] ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U504[3], 3000 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[3], 7000.00000000 );
        }
        GET_CHAR_COORDINATES( sub_2940(), ref l_U499, ref l_U500, ref l_U501 );
        GET_CHAR_HEADING( sub_2940(), ref l_U502 );
        CREATE_CAM( 14, ref l_U587[0] );
        SET_CAM_POS( l_U587[0], 832.02800000, 628.22270000, 41.35548000 );
        SET_CAM_ROT( l_U587[0], -17.78393000, 0.00000000, 89.06468000 );
        SET_CAM_FOV( l_U587[0], 35.10003000 );
        SET_CAM_ACTIVE( l_U587[0], 1 );
        SET_CAM_PROPAGATE( l_U587[0], 1 );
        CREATE_CAM( 14, ref l_U587[1] );
        SET_CAM_POS( l_U587[1], 824.49180000, 631.10550000, 44.42839000 );
        SET_CAM_ROT( l_U587[1], -4.72049100, -0.00000000, 88.37712000 );
        SET_CAM_FOV( l_U587[1], 35.10003000 );
        SET_CAM_ACTIVE( l_U587[1], 1 );
        SET_CAM_PROPAGATE( l_U587[1], 1 );
        CREATE_CAM( 3, ref l_U590 );
        SET_CAM_INTERP_STYLE_CORE( l_U590, l_U587[0], l_U587[1], 10000, 0 );
        SET_CAM_ACTIVE( l_U590, 1 );
        SET_CAM_PROPAGATE( l_U590, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2940() )))
        {
            SET_CHAR_COORDINATES( sub_2940(), 769.02420000, 631.73880000, 38.01190000 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_2940(), 769.02420000, 631.73880000, 38.01190000 );
        }
        SET_CHAR_HEADING( sub_2940(), 90 );
        SET_CHAR_VISIBLE( sub_2940(), 0 );
        if (NOT (IS_CHAR_INJURED( l_U543 )))
        {
            CLEAR_AREA( l_U412._fU0, l_U412._fU4, l_U412._fU8, 2.00000000, 1 );
            if (IS_CHAR_IN_ANY_CAR( l_U543 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U543, l_U412._fU0, l_U412._fU4, l_U412._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U543, l_U412._fU0, l_U412._fU4, l_U412._fU8 );
            }
            SET_CHAR_HEADING( l_U543, 180 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U543 );
            GIVE_WEAPON_TO_CHAR( l_U543, 7, 30000, 1 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U543, l_U412, -2 );
            SET_CHAR_NEVER_TARGETTED( l_U543, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            CLEAR_AREA( l_U409._fU0, l_U409._fU4, l_U409._fU8, 2.00000000, 1 );
            if (IS_CHAR_IN_ANY_CAR( l_U542 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U542, l_U409._fU0, l_U409._fU4, l_U409._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U542, l_U409._fU0, l_U409._fU4, l_U409._fU8 );
            }
            SET_CHAR_HEADING( l_U542, 290 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U542 );
            GIVE_WEAPON_TO_CHAR( l_U542, 12, 30000, 1 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U542, l_U409, -2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            CLEAR_AREA( l_U448._fU0, l_U448._fU4, l_U448._fU8, 2.00000000, 1 );
            if (IS_CHAR_IN_ANY_CAR( l_U541 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U541, l_U448._fU0, l_U448._fU4, l_U448._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U541, l_U448._fU0, l_U448._fU4, l_U448._fU8 );
            }
            SET_CHAR_HEADING( l_U541, 262 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541 );
            GIVE_WEAPON_TO_CHAR( l_U541, 12, 30000, 1 );
            TASK_GUARD_CURRENT_POSITION( l_U541, 0.00000000, 1.00000000, 0 );
        }
        if (sub_8410())
        {
            if (NOT sub_8479())
            {
                sub_8591();
            }
            if (NOT l_U483)
            {
                if (sub_8479())
                {
                    sub_8522( 1 );
                    l_U483 = 1;
                }
            }
            if (l_U483)
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( g_U11081[0] ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( g_U11081[0], 569.12690000, 764.00270000, 20.11330000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( g_U11081[0], 569.12690000, 764.00270000, 20.11330000 );
                    }
                    SET_CHAR_HEADING( g_U11081[0], 90 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11081[0] );
                    GIVE_WEAPON_TO_CHAR( g_U11081[0], 12, 30000, 1 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( g_U11081[0], l_U415, -2 );
                    if (IS_VEH_DRIVEABLE( g_U11087[0] ))
                    {
                        SET_CAR_COORDINATES( g_U11087[0], 531.38290000, 773.18700000, 19.91830000 );
                        SET_CAR_HEADING( g_U11087[0], 351 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( g_U11081[1] ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( g_U11081[1], 539.54790000, 766.59980000, 20.11390000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( g_U11081[1], 539.54790000, 766.59980000, 20.11390000 );
                    }
                    SET_CHAR_HEADING( g_U11081[1], 287 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11081[1] );
                    GIVE_WEAPON_TO_CHAR( g_U11081[1], 12, 30000, 1 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( g_U11081[1], l_U418, -2 );
                    if (IS_VEH_DRIVEABLE( g_U11087[1] ))
                    {
                        SET_CAR_COORDINATES( g_U11087[1], 532.58810000, 781.63310000, 19.91830000 );
                        SET_CAR_HEADING( g_U11087[1], 351 );
                    }
                }
            }
        }
        LOAD_SCENE( 769.02420000, 631.73880000, 38.01190000 );
        WAIT( 500 );
        g_U39149[12] = 1;
        DO_SCREEN_FADE_IN_UNHACKED( 2000 );
        CLEAR_HELP();
        SETTIMERA( 0 );
        l_U492 = 0;
        l_U371++;
        GET_GAME_TIMER( ref l_U386 );
        break;
        case 2:
        if (TIMERA() > 4000)
        {
            l_U371 = 3;
            SETTIMERA( 0 );
        }
        if (sub_13385())
        {
            l_U492 = 1;
            l_U371 = 4;
        }
        GET_GAME_TIMER( ref l_U375 );
        break;
        case 3:
        if (TIMERA() > 4000)
        {
            l_U371 = 4;
        }
        if (sub_13385())
        {
            l_U492 = 1;
            l_U371 = 4;
        }
        GET_GAME_TIMER( ref l_U375 );
        break;
        case 4:
        l_U379 = l_U375 - l_U386;
        PRINTSTRING( "\n **************************************************************************************************\n " );
        PRINTINT( l_U379 );
        PRINTSTRING( "\n **************************************************************************************************\n " );
        l_U387 = 8000 - l_U379;
        if (l_U387 < 0)
        {
            l_U387 = 0;
        }
        PRINTSTRING( "\n **************************************************************************************************\n " );
        PRINTINT( l_U387 );
        PRINTSTRING( "\n **************************************************************************************************\n " );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        SETTIMERA( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CHAR_VISIBLE( sub_2940(), 1 );
        if (NOT (IS_CHAR_INJURED( l_U543 )))
        {
            SET_CHAR_HEALTH( l_U543, 500 );
        }
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            SET_CHAR_HEALTH( l_U542, 1000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            SET_CHAR_HEALTH( l_U541, 1000 );
        }
        if (NOT l_U492)
        {
            INCREMENT_INT_STAT( 373, 1 );
        }
        l_U453 = 1;
        SET_CAR_DENSITY_MULTIPLIER( 0.70000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.70000000 );
        l_U371++;
        l_U362++;
        SETTIMERA( 0 );
        break;
    }
    return;
}

int sub_14908(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2940()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2940() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_9017() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_9017() )))
    {
        return 0;
    }
    return 1;
}

int sub_15446(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_12465( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_12465( "\n CONVERSATION PAUSED AT LINE " );
            sub_15586( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_12465( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_12465( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_12465( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_15586(unknown uParam0)
{
    return;
}

void sub_16248()
{
    if (l_U372 > 3)
    {
        if (NOT (sub_13936( l_U565 )))
        {
            if (NOT l_U476)
            {
                if (g_U39240 == 0)
                {
                    sub_16328( "E1E1_TB2", ref l_U565, 6, 1 );
                }
                else if (g_U39240 == 1)
                {
                    sub_16328( "E1E1_TB2", ref l_U565, 6, 1 );
                }
            }
            else if (g_U39240 == 0)
            {
                sub_16328( "E1E1_MAL1", ref l_U565, 6, 1 );
            }
            if (g_U39240 == 1)
            {
                sub_16328( "E1E1_MAL2", ref l_U565, 6, 1 );
            }
            l_U463 = 0;
        }
    }
    return;
}

void sub_16328(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16351( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

int sub_16351(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_12366( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_16881()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT sub_8410())
    {
        array(ref uVar4._fU0._fU0, 3);
        ref uVar4._fU0;
        ref uVar4;
        switch (g_U11134)
        {
            default:
              case 0:
            iVar2 = 1;
            iVar3 = 15;
            break;
            case 1:
            iVar2 = 1;
            iVar3 = 16;
            break;
            case 2:
            iVar2 = 1;
            iVar3 = 17;
            break;
            case 3:
            iVar2 = 1;
            iVar3 = 18;
            break;
        }
        g_U11134++;
        if (g_U11134 > 3)
        {
            g_U11134 = 0;
        }
        sub_17042( iVar2, iVar3, 16383, 16383, ref uVar4 );
        sub_17386( ref uVar4, 1 );
        sub_17414( ref uVar4, 0 );
        sub_17441( ref uVar4 );
    }
    return;
}

void sub_17042(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_17064( uParam0, 0, iParam4 + 0 );
    sub_17064( uParam1, 1, iParam4 + 0 );
    sub_17064( uParam2, 2, iParam4 + 0 );
    sub_17064( uParam3, 3, iParam4 + 0 );
    sub_17064( 0, 4, iParam4 + 0 );
    sub_17064( 1, 5, iParam4 + 0 );
    sub_17064( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_17064(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_17386(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_17414(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_17441(int iParam0)
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
        if (NOT sub_17511())
        {
            sub_2223( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_17638( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2223( iVar9 );
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
                ConcatString(ref cVar5, sub_1937( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1937( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_17511()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1937( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_2223( I );
            return 1;
        }
    }
    return 0;
}

int sub_17638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_17703( uParam0, g_U572[Result] ))
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

int sub_17703(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1937( 0, uParam0 );
        if (iVar14 == (sub_1937( 0, uParam6 )))
        {
            iVar15 = sub_1937( 3, uParam0 );
            if (iVar15 == (sub_1937( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_19499(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 1) AND (g_U8944 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_25705()
{
    switch (l_U365)
    {
        case 0:
        if (sub_25776( 1, 1 ))
        {
            sub_10717( 1 );
            g_U8764 = 1;
            for ( l_U363 = 0; l_U363 < 6; l_U363++ )
            {
                if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                    {
                        PAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                        FREEZE_CAR_POSITION( l_U504[l_U363], 1 );
                    }
                }
            }
            CLEAR_AREA_OF_COPS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA_OF_CHARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA_OF_CARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA( l_U403._fU0, l_U403._fU4, l_U403._fU8, 50.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2940() );
            SET_CHAR_COORDINATES( sub_2940(), 559.60450000, 767.39670000, 19.91830000 );
            SET_CHAR_HEADING( sub_2940(), 101 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_2940(), l_U406, -2 );
            sub_26269();
            LOAD_ADDITIONAL_TEXT( "E1E1AUD", 6 );
            START_CUTSCENE_NOW( "ET01_BA" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "ET01_BA" );
            for ( l_U363 = 0; l_U363 < 6; l_U363++ )
            {
                if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                    {
                        FREEZE_CAR_POSITION( l_U504[l_U363], 0 );
                        UNPAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                    }
                }
            }
            if (l_U492)
            {
                for ( l_U363 = 0; l_U363 < 6; l_U363++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                        {
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U504[l_U363], TO_FLOAT( l_U387 ) );
                        }
                    }
                }
            }
            ENABLE_PED_HELMET( sub_2940(), 0 );
            SET_CREATE_RANDOM_COPS( 1 );
            REMOVE_BLIP( l_U544 );
            SET_PLAYER_CONTROL( sub_9017(), 1 );
            CLEAR_AREA_OF_COPS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA_OF_CHARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA_OF_CARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 100.00000000 );
            CLEAR_AREA( l_U403._fU0, l_U403._fU4, l_U403._fU8, 200.00000000, 1 );
            DISPLAY_HUD( 1 );
            DISPLAY_RADAR( 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            WAIT( 500 );
            sub_2916( 1 );
            sub_4258( "E1E1AUD", "E1E1_HIDE2", "E1E1_HIDE" );
            DO_SCREEN_FADE_IN( 1000 );
            SETTIMERA( 0 );
            l_U365++;
        }
        break;
        case 1:
        if (TIMERA() > 500)
        {
            CLEAR_AREA_OF_COPS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            CLEAR_AREA_OF_CHARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            CLEAR_AREA_OF_CARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            l_U365++;
        }
        break;
        case 2:
        if (TIMERA() > 1000)
        {
            CLEAR_AREA_OF_COPS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            CLEAR_AREA_OF_CHARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            CLEAR_AREA_OF_CARS( l_U403._fU0, l_U403._fU4, l_U403._fU8, 60.00000000 );
            if (IS_VEH_DRIVEABLE( l_U504[0] ))
            {
                REMOVE_BLIP( l_U545 );
                ADD_BLIP_FOR_CAR( l_U504[0], ref l_U545 );
                SET_BLIP_AS_FRIENDLY( l_U545, 1 );
                l_U461 = 1;
            }
            PRINT_NOW( "WAITVAN", 7500, 1 );
            SETTIMERA( 0 );
            l_U365++;
        }
        break;
        case 3:
        if (TIMERA() > 3500)
        {
            if (NOT sub_11216())
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2940(), 559.60450000, 767.39670000, 19.91830000, 20, 20, 3, 0 ))
                {
                    sub_12289( "E1R1_GAGS", ref l_U565, 7, 1 );
                }
                l_U365++;
            }
        }
        break;
        case 4:
        if (TIMERA() > 11000)
        {
            if (NOT sub_11216())
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2940(), 559.60450000, 767.39670000, 19.91830000, 20, 20, 3, 0 ))
                {
                    sub_12289( "E1E1_CON", ref l_U565, 7, 1 );
                }
                l_U365++;
            }
        }
        break;
        case 5:
        if (TIMERA() > 14000)
        {
            if (NOT sub_11216())
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2940(), 559.60450000, 767.39670000, 19.91830000, 20, 20, 3, 0 ))
                {
                    sub_12289( "E1R1_WHISP", ref l_U565, 7, 1 );
                }
                l_U362 = 4;
                l_U365++;
            }
        }
        break;
    }
    sub_27985();
    return;
}

int sub_25776(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2940(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_14908( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

void sub_26269()
{
    if (HAS_CHAR_GOT_WEAPON( sub_2940(), 22 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 22, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 15, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 14, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 13, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 12, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 26, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 26 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 10, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 9, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2940(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2940(), 7, 1 );
    };;;;;;;;;;
    return;
}

void sub_27985()
{
    for ( l_U363 = 0; l_U363 < 6; l_U363++ )
    {
        if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U504[l_U363], sub_2940() ))
            {
                sub_28066( 2 );
            }
        }
        else
        {
            sub_28066( 2 );
        }
    }
    for ( l_U364 = 0; l_U364 < 16; l_U364++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U519[l_U364] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U519[l_U364], sub_2940(), 0 ))
            {
                sub_28066( 2 );
            }
            if (NOT (IS_CHAR_INJURED( l_U519[l_U364] )))
            {
                if (HAS_CHAR_SPOTTED_CHAR( l_U519[l_U364], sub_2940() ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U519[l_U364], sub_2940(), 3.00000000, 14.00000000, 3.00000000, 0 ))
                    {
                        sub_28066( 3 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U519[l_U364] )))
            {
                GET_CHAR_COORDINATES( l_U519[l_U364], ref l_U606[l_U364], ref l_U623[l_U364], ref l_U640[l_U364] );
                if (IS_BULLET_IN_AREA( l_U606[l_U364], l_U623[l_U364], l_U640[l_U364], 10.00000000, 1 ))
                {
                    sub_28066( 2 );
                }
            }
            if (IS_WANTED_LEVEL_GREATER( sub_9017(), 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U519[l_U364], sub_2940(), 15.00000000, 15.00000000, 3.00000000, 0 ))
                {
                    sub_28066( 3 );
                }
            }
        }
        else
        {
            sub_28066( 2 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U536 )))
    {
        if ((HAS_CHAR_SPOTTED_CHAR( l_U536, sub_2940() )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U536, sub_2940(), 3.00000000, 14.00000000, 3.00000000, 0 )))
        {
            sub_28066( 3 );
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U536, sub_2940(), 0 ))
        {
            sub_28066( 2 );
        }
        GET_CHAR_COORDINATES( l_U536, ref l_U606[0], ref l_U623[0], ref l_U640[0] );
        if (IS_BULLET_IN_AREA( l_U606[0], l_U623[0], l_U640[0], 10.00000000, 1 ))
        {
            sub_28066( 2 );
        }
    }
    else
    {
        sub_28066( 2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U537 )))
    {
        if ((HAS_CHAR_SPOTTED_CHAR( l_U537, sub_2940() )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U537, sub_2940(), 3.00000000, 14.00000000, 3.00000000, 0 )))
        {
            sub_28066( 3 );
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U537, sub_2940(), 0 ))
        {
            sub_28066( 2 );
        }
        GET_CHAR_COORDINATES( l_U537, ref l_U606[0], ref l_U623[0], ref l_U640[0] );
        if (IS_BULLET_IN_AREA( l_U606[0], l_U623[0], l_U640[0], 10.00000000, 1 ))
        {
            sub_28066( 2 );
        }
    }
    else
    {
        sub_28066( 2 );
    }
    return;
}

void sub_28066(unknown uParam0)
{
    if (NOT l_U485)
    {
        switch (uParam0)
        {
            case 1:
            PRINT_NOW( "STEALV", 7500, 1 );
            break;
            case 2:
            PRINT_NOW( "SPOOKED", 7500, 1 );
            break;
            case 3:
            PRINT_NOW( "SPOOKED", 7500, 1 );
            break;
            case 4:
            PRINT_NOW( "STEALV", 7500, 1 );
            break;
        }
        if (IS_VEH_DRIVEABLE( l_U504[0] ))
        {
            REMOVE_BLIP( l_U544 );
            REMOVE_BLIP( l_U545 );
            ADD_BLIP_FOR_CAR( l_U504[0], ref l_U545 );
            SET_BLIP_AS_FRIENDLY( l_U545, 1 );
            l_U461 = 1;
        }
        SET_PED_IS_BLIND_RAGING( sub_2940(), 1 );
        sub_10717( 1 );
        for ( l_U363 = 0; l_U363 < 6; l_U363++ )
        {
            if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            SET_CHAR_RELATIONSHIP( l_U541, 5, 23 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U541, 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U541, 0 );
        }
        GENERATE_RANDOM_INT_IN_RANGE( 0, 13, ref l_U377 );
        if (NOT (IS_CHAR_INJURED( l_U519[l_U377] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U542 )))
            {
                CLEAR_CHAR_TASKS( l_U542 );
                SET_CHAR_RELATIONSHIP( l_U542, 5, 23 );
                TASK_COMBAT( l_U542, l_U519[l_U377] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U543 )))
        {
            SET_CHAR_RELATIONSHIP( l_U543, 5, 23 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U543, 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U543, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 13, ref l_U377 );
            if (NOT (IS_CHAR_INJURED( l_U519[l_U377] )))
            {
                TASK_COMBAT( l_U543, l_U519[l_U377] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 13, ref l_U377 );
            if (NOT (IS_CHAR_INJURED( l_U536 )))
            {
                CLEAR_CHAR_TASKS( l_U541 );
                TASK_COMBAT( l_U541, l_U536 );
            }
            else if (NOT (IS_CHAR_INJURED( l_U537 )))
            {
                CLEAR_CHAR_TASKS( l_U541 );
                TASK_COMBAT( l_U541, l_U537 );
            }
            else if (NOT (IS_CHAR_INJURED( l_U519[l_U377] )))
            {
                CLEAR_CHAR_TASKS( l_U541 );
                TASK_COMBAT( l_U541, l_U519[l_U377] );
            };;;
        }
        for ( l_U363 = 0; l_U363 < 16; l_U363++ )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 200, ref l_U378 );
            SETTIMERA( l_U378 );
            while (TIMERA() < 200)
            {
                WAIT( 0 );
                if (l_U362 > 2)
                {
                    if (NOT sub_28993())
                    {
                        if (l_U362 < 6)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U541 )))
                            {
                                sub_29258( 1 );
                            }
                            else
                            {
                                sub_29258( 5 );
                            }
                        }
                    }
                }
                if (DOES_CHAR_EXIST( l_U541 ))
                {
                    if (IS_CHAR_INJURED( l_U541 ))
                    {
                        sub_29258( 5 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U542 ))
                {
                    if (IS_CHAR_INJURED( l_U542 ))
                    {
                        sub_29258( 6 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U519[l_U363] )))
            {
                SET_CHAR_RELATIONSHIP( l_U519[l_U363], 5, 0 );
                TASK_COMBAT( l_U519[l_U363], sub_2940() );
                ADD_BLIP_FOR_CHAR( l_U519[l_U363], ref l_U546[l_U363] );
                SET_BLIP_AS_SHORT_RANGE( l_U546[l_U363], 1 );
                CHANGE_BLIP_SCALE( l_U546[l_U363], 0.50000000 );
                CHANGE_BLIP_DISPLAY( l_U546[l_U363], 2 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U519[l_U363], 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U536 )))
        {
            SET_CHAR_RELATIONSHIP( l_U536, 5, 0 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U536, 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U536, 1 );
            TASK_COMBAT( l_U536, sub_2940() );
            ADD_BLIP_FOR_CHAR( l_U536, ref l_U563 );
            SET_BLIP_AS_SHORT_RANGE( l_U563, 1 );
            CHANGE_BLIP_SCALE( l_U563, 0.50000000 );
            CHANGE_BLIP_DISPLAY( l_U563, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U537 )))
        {
            SET_CHAR_RELATIONSHIP( l_U537, 5, 0 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U537, 0 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U537, 1 );
            TASK_COMBAT( l_U537, sub_2940() );
            ADD_BLIP_FOR_CHAR( l_U537, ref l_U564 );
            SET_BLIP_AS_SHORT_RANGE( l_U564, 1 );
            CHANGE_BLIP_SCALE( l_U564, 0.50000000 );
            CHANGE_BLIP_DISPLAY( l_U564, 2 );
        }
        sub_2916( 0 );
        if (l_U483)
        {
            if (sub_8479())
            {
                sub_8522( 0 );
                l_U483 = 0;
            }
        }
        sub_4258( "E1E1AUD", "E1E1_TROUB2", "E1E1_TROUB" );
        if (IS_VEH_DRIVEABLE( l_U504[0] ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2940(), l_U504[0], 20, 20, 4, 0 ))
            {
                sub_12289( "E1E1_OURS", ref l_U565, 6, 1 );
            }
        }
        l_U362 = 5;
        SETTIMERA( 0 );
        l_U485 = 1;
    }
    return;
}

int sub_28993()
{
    if (IS_VEH_DRIVEABLE( l_U504[0] ))
    {
        if (l_U494 == 1)
        {
            if (sub_29042( l_U504[0] ))
            {
                sub_29258( 3 );
            }
        }
        if (NOT (CHECK_STUCK_TIMER( l_U504[0], 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( l_U504[0], 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( l_U504[0], 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( l_U504[0], 0, 20000 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_29042(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_2940() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2940(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2940(), uParam0, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2940(), uParam0, 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U360 );
                    l_U361 = l_U360 - l_U359;
                    if (l_U361 > 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U359 );
                }
            }
        }
    }
    return 0;
}

void sub_29258(unknown uParam0)
{
    REMOVE_BLIP( l_U545 );
    REMOVE_BLIP( l_U544 );
    CLEAR_PRINTS();
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "haven’t dealt with every fail condition" );
        break;
        case 1:
        PRINT_NOW( "DESTROY", 7000, 1 );
        sub_29456();
        while (NOT (sub_14908( 1, 0 )))
        {
            WAIT( 0 );
        }
        sub_29688( 3 );
        sub_32116( 4, "E1E1_TRUCK", "E1E1AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "STUCK", 7000, 1 );
        sub_29456();
        while (NOT (sub_14908( 1, 0 )))
        {
            WAIT( 0 );
        }
        sub_29688( 3 );
        sub_32116( 4, "E1E1_TRUCK", "E1E1AUD", 0 );
        break;
        case 3:
        PRINT_NOW( "ABANDON", 7000, 1 );
        sub_29456();
        while (NOT (sub_14908( 1, 0 )))
        {
            WAIT( 0 );
        }
        sub_29688( 3 );
        sub_32116( 4, "E1E1_LOCK", "E1E1AUD", 0 );
        break;
        case 4:
        PRINT_NOW( "GOTAWAY", 7000, 1 );
        sub_32116( 4, "E1E1_LOCK", "E1E1AUD", 0 );
        break;
        case 5:
        PRINT_NOW( "MALCDEAD", 7000, 1 );
        sub_29456();
        while (NOT (sub_25776( 1, 1 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            sub_29688( 0 );
        }
        sub_32116( 4, "E1E1_RRDIE", "E1E1AUD", 0 );
        break;
        case 6:
        PRINT_NOW( "DESAUNDEAD", 7000, 1 );
        sub_29456();
        while (NOT (sub_25776( 1, 1 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            sub_29688( 1 );
        }
        sub_32116( 4, "E1E1_RRDIE", "E1E1AUD", 0 );
        break;
        case 7:
        PRINT_NOW( "DESAUNDEAD", 7000, 1 );
        sub_32116( 4, "E1E1_RRDIE", "E1E1AUD", 0 );
        break;
        case 8:
        PRINT_NOW( "PLAYBIKE", 7000, 1 );
        break;
    }
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_9017(), 150 );
        SAY_AMBIENT_SPEECH( sub_2940(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    g_U39240++;
    PLAY_AUDIO_EVENT( "MC_FAIL" );
    sub_33352();
    sub_2900();
    return;
}

void sub_29456()
{
    if (sub_11216())
    {
        sub_29476( 1 );
    }
    SETTIMERA( 0 );
    while (TIMERA() < 3500)
    {
        WAIT( 0 );
    }
    return;
}

void sub_29476(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 4) AND (g_U8944 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_29688(unknown uParam0)
{
    SET_PLAYER_CONTROL( sub_9017(), 0 );
    DO_SCREEN_FADE_OUT( 1000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1962071130 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2107556865 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 977480632 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -14495224 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 729783779 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2006142190 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 236691815 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1695293152 );
    REMOVE_ANIMS( "MISSELIZABETA1" );
    for ( l_U363 = 0; l_U363 < 16; l_U363++ )
    {
        if (DOES_CHAR_EXIST( l_U519[l_U363] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U519[l_U363] );
        }
    }
    for ( l_U363 = 0; l_U363 < 6; l_U363++ )
    {
        if (DOES_VEHICLE_EXIST( l_U504[l_U363] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U504[l_U363] );
        }
    }
    REQUEST_ANIMS( "Gestures@Niko" );
    while (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
    {
        WAIT( 0 );
    }
    if (sub_11216())
    {
        sub_29476( 1 );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2940() );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503 );
    CLEAR_AREA( 371.79750000, 1504.27800000, 15.57470000, 8.00000000, 1 );
    if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_2940(), 371.79750000, 1504.27800000, 15.97470000 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_2940(), 371.79750000, 1504.27800000, 15.97470000 );
    }
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_CHAR_HEADING( sub_2940(), 94 );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    LOAD_SCENE( 365.12650000, 1504.62200000, 16.97980000 );
    CREATE_CAM( 14, ref l_U587[0] );
    SET_CAM_POS( l_U587[0], 373.40270000, 1502.52200000, 17.25429000 );
    SET_CAM_ROT( l_U587[0], 0.80613700, -0.00000000, 59.50562000 );
    SET_CAM_ACTIVE( l_U587[0], 1 );
    SET_CAM_PROPAGATE( l_U587[0], 1 );
    SET_CAM_FOV( l_U587[0], 36.00000000 );
    CREATE_CAM( 14, ref l_U587[1] );
    SET_CAM_POS( l_U587[1], 373.46710000, 1504.14200000, 17.97669000 );
    SET_CAM_ROT( l_U587[1], -14.77831000, -0.00000000, 82.08014000 );
    SET_CAM_FOV( l_U587[1], 36.10003000 );
    CREATE_CAM( 3, ref l_U590 );
    SET_CAM_INTERP_STYLE_CORE( l_U590, l_U587[0], l_U587[1], 16000, 0 );
    SET_CAM_ACTIVE( l_U590, 1 );
    SET_CAM_PROPAGATE( l_U590, 1 );
    switch (uParam0)
    {
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541 );
            if (IS_CHAR_IN_ANY_CAR( l_U541 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U541, 369.42240000, 1503.76300000, 15.96590000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U541, 369.42240000, 1503.76300000, 15.96590000 );
            }
            SET_CHAR_HEADING( l_U541, 250 );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_2940(), l_U541 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U541, sub_2940() );
            TASK_LOOK_AT_CHAR( l_U541, sub_2940(), 10000, 0 );
            DELETE_CHAR( ref l_U543 );
            DELETE_CHAR( ref l_U542 );
            WAIT( 1500 );
            DO_SCREEN_FADE_IN( 1000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_12289( "E1E1_DMAL", ref l_U565, 6, 1 );
            while ((sub_13936( l_U565 )) AND (NOT sub_13385()))
            {
                WAIT( 0 );
            }
        }
        break;
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U542 );
            if (IS_CHAR_IN_ANY_CAR( l_U542 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U542, 369.97930000, 1505.15900000, 15.96990000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U542, 369.97930000, 1505.15900000, 15.96990000 );
            }
            SET_CHAR_HEADING( l_U542, 250 );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_2940(), l_U542 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U542, sub_2940() );
            TASK_LOOK_AT_CHAR( l_U542, sub_2940(), 10000, 0 );
            DELETE_CHAR( ref l_U543 );
            DELETE_CHAR( ref l_U541 );
            WAIT( 1500 );
            DO_SCREEN_FADE_IN( 1000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_12289( "E1E1_DROP", ref l_U565, 6, 1 );
            while ((sub_13936( l_U565 )) AND (NOT sub_13385()))
            {
                WAIT( 0 );
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U541 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541 );
            if (IS_CHAR_IN_ANY_CAR( l_U541 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U541, 369.42240000, 1503.76300000, 15.96590000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U541, 369.42240000, 1503.76300000, 15.96590000 );
            }
            SET_CHAR_HEADING( l_U541, 250 );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_2940(), l_U541 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U541, sub_2940() );
            TASK_LOOK_AT_CHAR( l_U541, sub_2940(), 10000, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U542 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U542 );
            if (IS_CHAR_IN_ANY_CAR( l_U542 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U542, 369.97930000, 1505.15900000, 15.96990000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U542, 369.97930000, 1505.15900000, 15.96990000 );
            }
            SET_CHAR_HEADING( l_U542, 250 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U542, sub_2940() );
            TASK_LOOK_AT_CHAR( l_U542, sub_2940(), 10000, 0 );
        }
        DELETE_CHAR( ref l_U543 );
        WAIT( 1500 );
        DO_SCREEN_FADE_IN( 1000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        sub_12289( "E1E1_DMAL2", ref l_U565, 6, 1 );
        while ((sub_13936( l_U565 )) AND (NOT sub_13385()))
        {
            WAIT( 0 );
        }
        break;
    }
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U541, 361.84070000, 1506.00200000, 15.96500000, 2, -1, 1.00000000 );
    }
    if (NOT (IS_CHAR_INJURED( l_U542 )))
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U542, 361.84070000, 1506.00200000, 15.96500000, 2, -1, 1.00000000 );
    }
    CLEAR_PRINTS();
    DO_SCREEN_FADE_OUT( 1000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (sub_13936( l_U565 ))
    {
        sub_11250( ref l_U565, 0 );
    }
    CLEAR_PRINTS();
    if (DOES_CHAR_EXIST( l_U543 ))
    {
        DELETE_CHAR( ref l_U543 );
    }
    if (DOES_CHAR_EXIST( l_U542 ))
    {
        DELETE_CHAR( ref l_U542 );
    }
    if (DOES_CHAR_EXIST( l_U541 ))
    {
        DELETE_CHAR( ref l_U541 );
    }
    CLEAR_CHAR_TASKS( sub_2940() );
    SET_PLAYER_CONTROL( sub_9017(), 1 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_CAM_BEHIND_PED( sub_2940() );
    SET_WIDESCREEN_BORDERS( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DO_SCREEN_FADE_IN( 1000 );
    return;
}

void sub_32116(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_32160( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_32160(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_33352()
{
    sub_33361();
    return;
}

void sub_33361()
{
    int iVar2;

    iVar2 = 4;
    sub_33375( iVar2 );
    sub_1890( iVar2 );
    return;
}

void sub_33375(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_9017(), 150 );
    CLEAR_HELP();
    sub_749( uParam0 );
    return;
}

void sub_35255()
{
    sub_27985();
    if ((NOT (IS_CHAR_INJURED( l_U519[11] ))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
    {
        switch (l_U367)
        {
            case 0:
            if (NOT l_U480)
            {
                if (IS_VEH_DRIVEABLE( l_U504[5] ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U541, l_U504[5], 30.00000000, 30.00000000, 3.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U519[11], l_U504[5] )))
                        {
                            WARP_CHAR_INTO_CAR( l_U519[11], l_U504[5] );
                            l_U480 = 1;
                        }
                    }
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, l_U519[11], 4.00000000, 4.00000000, 3.00000000, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U541, l_U448._fU0, l_U448._fU4, l_U448._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U519[11] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U541, l_U519[11], 15000, 0 );
                            TASK_LOOK_AT_CHAR( l_U519[11], l_U541, 15000, 0 );
                        }
                    }
                    SETTIMERB( 0 );
                    l_U367++;
                }
                else
                {
                    sub_28066( 3 );
                }
            }
            break;
            case 1:
            if (TIMERB() > 2000)
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U519[11] )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U541, l_U519[11] );
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U519[11], "Give_Money", "MISSELIZABETA1", 8.00000000, 0, 0, 0, 0, 0 );
                    }
                }
                SETTIMERB( 0 );
                l_U367++;
            }
            break;
            case 2:
            if (TIMERB() > 2000)
            {
                if ((NOT (sub_13936( l_U565 ))) AND (NOT (IS_CHAR_INJURED( l_U519[11] ))))
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U541, 20, 20, 3, 0 ))
                        {
                            sub_12289( "E1E1_VAN", ref l_U565, 7, 1 );
                        }
                    }
                    SETTIMERB( 0 );
                    l_U367++;
                }
            }
            break;
            case 3:
            if (TIMERB() > 1000)
            {
                l_U363 = 0;
                for ( l_U363 = 0; l_U363 < 6; l_U363++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                        {
                            PAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                        }
                    }
                }
                l_U367++;
            }
            break;
            case 4:
            if ((NOT (sub_13936( l_U565 ))) AND (NOT (IS_CHAR_INJURED( l_U519[11] ))))
            {
                for ( l_U363 = 0; l_U363 < 6; l_U363++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                        {
                            UNPAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                        }
                    }
                }
                SETTIMERB( 0 );
                g_U10435 = 1;
                l_U367++;
            }
            break;
            case 5:
            if ((NOT (IS_CHAR_INJURED( l_U519[11] ))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
            {
                if ((NOT (sub_13936( l_U565 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, l_U519[11], 4.00000000, 4.00000000, 3.00000000, 0 ))))
                {
                    g_U10435 = 0;
                    l_U367++;
                }
            }
            break;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U519[0] ))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
    {
        switch (l_U368)
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, l_U519[0], 4.00000000, 4.00000000, 3.00000000, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U541, l_U448._fU0, l_U448._fU4, l_U448._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U519[0] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U541 )))
                        {
                            TASK_LOOK_AT_CHAR( l_U519[0], l_U541, 15000, 0 );
                            TASK_LOOK_AT_CHAR( l_U541, l_U519[0], 15000, 0 );
                        }
                    }
                    SETTIMERB( 0 );
                    l_U368++;
                }
                else
                {
                    sub_28066( 3 );
                }
            }
            break;
            case 1:
            if (TIMERB() > 2000)
            {
                if (NOT (IS_CHAR_INJURED( l_U519[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U519[0], "Give_Money", "MISSELIZABETA1", 8.00000000, 0, 0, 0, 0, 0 );
                    }
                }
                SETTIMERB( 0 );
                l_U368++;
            }
            break;
            case 2:
            if (TIMERB() > 2000)
            {
                if ((NOT (sub_13936( l_U565 ))) AND (NOT (IS_CHAR_INJURED( l_U519[0] ))))
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U541, 20, 20, 3, 0 ))
                        {
                            if (g_U39240 == 0)
                            {
                                sub_12289( "E1E1_DELAY1", ref l_U565, 7, 1 );
                            }
                            else if (g_U39240 == 1)
                            {
                                sub_12289( "E1E1_DELAY2", ref l_U565, 7, 1 );
                            }
                            else if (g_U39240 == 2)
                            {
                                sub_12289( "E1E1_DELAY3", ref l_U565, 7, 1 );
                            };;;
                            if (g_U39240 > 2)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U376 );
                                if (l_U376 == 0)
                                {
                                    sub_12289( "E1E1_DELAY1", ref l_U565, 7, 1 );
                                }
                                else if (l_U376 == 1)
                                {
                                    sub_12289( "E1E1_DELAY2", ref l_U565, 7, 1 );
                                }
                                else if (l_U376 == 2)
                                {
                                    sub_12289( "E1E1_DELAY3", ref l_U565, 7, 1 );
                                };;;
                            }
                        }
                    }
                    SETTIMERB( 0 );
                    l_U368++;
                }
            }
            break;
            case 3:
            if (TIMERB() > 2000)
            {
                l_U363 = 0;
                for ( l_U363 = 0; l_U363 < 6; l_U363++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                        {
                            PAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                        }
                    }
                }
                l_U368++;
            }
            break;
            case 4:
            if (NOT (sub_13936( l_U565 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U519[0] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U519[0], 20, 20, 3, 0 ))
                    {
                        sub_12289( "E1E1_ANNOY", ref l_U565, 7, 1 );
                    }
                }
                l_U368++;
            }
            break;
            case 5:
            if ((NOT (sub_13936( l_U565 ))) AND (NOT (IS_CHAR_INJURED( l_U519[0] ))))
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U541, 20, 20, 3, 0 ))
                    {
                        sub_12289( "E1E1_VAN", ref l_U565, 7, 1 );
                    }
                }
                for ( l_U363 = 0; l_U363 < 6; l_U363++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U504[l_U363] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U504[l_U363] ))
                        {
                            UNPAUSE_PLAYBACK_RECORDED_CAR( l_U504[l_U363] );
                        }
                    }
                }
                SETTIMERB( 0 );
                g_U10435 = 1;
                l_U368++;
            }
            break;
            case 6:
            if ((NOT (IS_CHAR_INJURED( l_U519[0] ))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
            {
                if ((NOT (sub_13936( l_U565 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, l_U519[0], 4.00000000, 4.00000000, 3.00000000, 0 ))))
                {
                    g_U10435 = 0;
                    l_U368++;
                }
            }
            break;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U536 ))) AND (NOT (IS_CHAR_INJURED( l_U541 ))))
    {
        switch (l_U369)
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, l_U536, 4.00000000, 4.00000000, 3.00000000, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U541, l_U448._fU0, l_U448._fU4, l_U448._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U536 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U541 )))
                        {
                            TASK_LOOK_AT_CHAR( l_U536, l_U541, 6000, 0 );
                            TASK_LOOK_AT_CHAR( l_U541, l_U536, 6000, 0 );
                        }
                    }
                    SETTIMERB( 0 );
                    l_U369++;
                }
                else
                {
                    sub_28066( 3 );
                }
            }
            break;
            case 1:
            if (TIMERB() > 2000)
            {
                if (NOT (IS_CHAR_INJURED( l_U536 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U536, "Give_Money", "MISSELIZABETA1", 8.00000000, 0, 0, 0, 0, 0 );
                    }
                }
                SETTIMERB( 0 );
                l_U369++;
            }
            break;
            case 2:
            if (TIMERB() > 2000)
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U541, 20, 20, 3, 0 ))
                    {
                        sub_12289( "E1E1_COMBAT", ref l_U565, 7, 1 );
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U541 ))) AND (NOT (IS_CHAR_INJURED( l_U536 ))))
                {
                    TASK_AIM_GUN_AT_CHAR( l_U541, l_U536, 4000 );
                }
                SETTIMERB( 0 );
                l_U369++;
            }
            break;
            case 3:
            if (TIMERB() > 1000)
            {
                sub_28066( 4 );
                l_U369++;
            }
            break;
        }
    }
    return;
}

void sub_38524()
{
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        if (IS_VEH_DRIVEABLE( l_U504[0] ))
        {
            if (sub_25776( 1, 1 ))
            {
                if (l_U455 == 0)
                {
                    if (((LOCATE_CAR_3D( l_U504[0], l_U397._fU0, l_U397._fU4, l_U397._fU8, 4.00000000, 4.00000000, 2.50000000, l_U454 )) AND (IS_CHAR_SITTING_IN_CAR( l_U541, l_U504[0] ))) AND (IS_CHAR_SITTING_IN_CAR( sub_2940(), l_U504[0] )))
                    {
                        l_U362++;
                    }
                }
            }
            sub_38710();
            sub_38921();
            sub_41444();
            if (NOT (IS_CHAR_IN_CAR( sub_2940(), l_U504[0] )))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( l_U541, l_U504[0] )))
                {
                    if (NOT (sub_13936( l_U565 )))
                    {
                        sub_42631();
                    }
                }
            }
        }
    }
    return;
}

void sub_38710()
{
    for ( l_U363 = 0; l_U363 < 16; l_U363++ )
    {
        if (IS_CHAR_INJURED( l_U519[l_U363] ))
        {
            if (DOES_BLIP_EXIST( l_U546[l_U363] ))
            {
                REMOVE_BLIP( l_U546[l_U363] );
            }
        }
    }
    if (IS_CHAR_INJURED( l_U536 ))
    {
        if (DOES_BLIP_EXIST( l_U563 ))
        {
            REMOVE_BLIP( l_U563 );
        }
    }
    if (IS_CHAR_INJURED( l_U537 ))
    {
        if (DOES_BLIP_EXIST( l_U564 ))
        {
            REMOVE_BLIP( l_U564 );
        }
    }
    return;
}

void sub_38921()
{
    GET_GAME_TIMER( ref l_U390 );
    GET_GAME_TIMER( ref l_U392 );
    if (IS_VEH_DRIVEABLE( l_U504[0] ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_2940(), l_U504[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U542 )))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U503 )))
                {
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U542, 1 );
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U542 )))
                    {
                        if (NOT l_U472[1])
                        {
                            PRINTSTRING( " \n ****************************************rt_desean TRIES TO GET IN VAN TASK_PERFORMING_ENTER_VAN[0] = TRUE******************************************** \n" );
                            OPEN_SEQUENCE_TASK( ref l_U585 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U504[0], -2, 1 );
                            TASK_PAUSE( 0, 1000 );
                            CLOSE_SEQUENCE_TASK( l_U585 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U542, 1 );
                            GET_SCRIPT_TASK_STATUS( l_U542, 29, ref l_U591 );
                            if (NOT (l_U591 == 0))
                            {
                                if (NOT (l_U591 == 1))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U542, l_U585 );
                                }
                            }
                            CLEAR_SEQUENCE_TASK( l_U585 );
                            GET_GAME_TIMER( ref l_U391 );
                            l_U472[1] = 1;
                        }
                        else if ((l_U390 - l_U391) > 10000)
                        {
                            PRINTSTRING( " \n ****************************************rt_desean TIMER EXPIRED TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                            l_U472[1] = 0;
                        }
                    }
                    else if (l_U472[1])
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U542, 0 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U542, 0 );
                        SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U542, 1 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U542, 1 );
                        l_U472[1] = 0;
                        PRINTSTRING( " \n ****************************************rt_desean SITTING IN VAN TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                    }
                }
                else
                {
                    sub_39836();
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U543 )))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U503 )))
                {
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U543, 1 );
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U543 )))
                    {
                        if (NOT l_U472[2])
                        {
                            PRINTSTRING( " \n ****************************************rt_ruffrider TRIES TO GET IN VAN TASK_PERFORMING_ENTER_VAN[0] = TRUE******************************************** \n" );
                            OPEN_SEQUENCE_TASK( ref l_U586 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U504[0], -2, 2 );
                            TASK_PAUSE( 0, 1000 );
                            CLOSE_SEQUENCE_TASK( l_U586 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U543, 1 );
                            GET_SCRIPT_TASK_STATUS( l_U543, 29, ref l_U591 );
                            if (NOT (l_U591 == 0))
                            {
                                if (NOT (l_U591 == 1))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U543, l_U586 );
                                }
                            }
                            CLEAR_SEQUENCE_TASK( l_U586 );
                            GET_GAME_TIMER( ref l_U393 );
                            l_U472[2] = 1;
                        }
                        else if ((l_U392 - l_U393) > 10000)
                        {
                            PRINTSTRING( " \n ****************************************rt_ruffrider TIMER EXPIRED TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                            l_U472[2] = 0;
                        }
                    }
                    else if (l_U472[2])
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U543, 0 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U543, 0 );
                        SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U543, 1 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U543, 1 );
                        l_U472[2] = 0;
                        PRINTSTRING( " \n ****************************************rt_ruffrider SITTING IN VAN TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                    }
                }
                else
                {
                    sub_39836();
                }
            }
        }
    }
    return;
}

void sub_39836()
{
    if (IS_VEH_DRIVEABLE( l_U503 ))
    {
        if (NOT l_U472[1])
        {
            if (NOT (IS_CHAR_INJURED( l_U542 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U542 )))
                {
                    sub_39912();
                    OPEN_SEQUENCE_TASK( ref l_U585 );
                    TASK_PAUSE( 0, 1000 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U503, -2 );
                    TASK_PAUSE( 0, 6000 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U503, 888.85300000, 1527.12900000, 16.50920000, 30, 0, -1962071130, 2, 5.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U585 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U542, 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U542, 0 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U542, 0 );
                    CLEAR_CHAR_TASKS( l_U542 );
                    TASK_PERFORM_SEQUENCE( l_U542, l_U585 );
                    CLEAR_SEQUENCE_TASK( l_U585 );
                    l_U472[1] = 1;
                }
                else if (l_U472[1])
                {
                    SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U542, 1 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U542, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U542, 1 );
                    l_U472[1] = 0;
                }
            }
        }
        if (NOT l_U472[2])
        {
            if (NOT (IS_CHAR_INJURED( l_U543 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U543 )))
                {
                    sub_39912();
                    OPEN_SEQUENCE_TASK( ref l_U586 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U503, -2, 0 );
                    TASK_PAUSE( 0, 1000 );
                    CLOSE_SEQUENCE_TASK( l_U586 );
                    CLEAR_CHAR_TASKS( l_U543 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U543, 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U543, 0 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U543, 0 );
                    CLEAR_SEQUENCE_TASK( l_U586 );
                    l_U472[2] = 1;
                }
                else if (l_U472[2])
                {
                    SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U543, 1 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U543, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U543, 1 );
                    l_U472[2] = 0;
                }
            }
        }
    }
    return;
}

void sub_39912()
{
    if (NOT (DOES_GROUP_EXIST( l_U670 )))
    {
        CREATE_GROUP( 0, ref l_U670, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U542 )))
    {
        if (NOT (IS_GROUP_LEADER( l_U542, l_U670 )))
        {
            SET_GROUP_LEADER( l_U670, l_U542 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U543 )))
    {
        if (NOT (IS_GROUP_MEMBER( l_U543, l_U670 )))
        {
            SET_GROUP_MEMBER( l_U670, l_U543 );
        }
    }
    return;
}

void sub_41444()
{
    GET_GAME_TIMER( ref l_U389 );
    if (IS_VEH_DRIVEABLE( l_U504[0] ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_2940(), l_U504[0] ))
        {
            if (NOT l_U494)
            {
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_PED_IS_BLIND_RAGING( sub_2940(), 0 );
                GET_GAME_TIMER( ref l_U380 );
                l_U494 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U541 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U541, 35, 35, 10, 0 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U541, l_U504[0] )))
                    {
                        if (NOT l_U472[0])
                        {
                            PRINTSTRING( " \n ****************************************MALC TRIES TO GET IN TASK_PERFORMING_ENTER_VAN[0] = TRUE******************************************** \n" );
                            SET_CHAR_RELATIONSHIP( l_U541, 2, 3 );
                            SET_CHAR_RELATIONSHIP( l_U541, 2, 23 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U581 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U504[0], -2, 0 );
                            TASK_PAUSE( 0, 1000 );
                            CLOSE_SEQUENCE_TASK( l_U581 );
                            GET_SCRIPT_TASK_STATUS( l_U541, 29, ref l_U591 );
                            if (NOT (l_U591 == 0))
                            {
                                if (NOT (l_U591 == 1))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U541, l_U581 );
                                }
                            }
                            CLEAR_SEQUENCE_TASK( l_U581 );
                            GET_GAME_TIMER( ref l_U380 );
                            l_U472[0] = 1;
                        }
                        else if ((l_U389 - l_U380) > 6000)
                        {
                            PRINTSTRING( " \n ****************************************MALC TIMER EXPIRED TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                            l_U472[0] = 0;
                        }
                    }
                    else if (l_U472[0])
                    {
                        PRINTSTRING( " \n ****************************************MALC SITTING IN CAR TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541, 0 );
                        l_U472[0] = 0;
                    }
                }
                else if (l_U472[0])
                {
                    PRINTSTRING( " \n ****************************************NOT LOCATE MALC TASK_PERFORMING_ENTER_VAN[0] = FALSE******************************************** \n" );
                    l_U472[0] = 0;
                }
            }
        }
    }
    return;
}

void sub_42631()
{
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        if (IS_PED_IN_COMBAT( l_U541 ))
        {
            switch (l_U382)
            {
                case 0:
                if (TIMERA() > 3000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U519[0] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2940(), l_U519[0], 25, 25, 3, 0 ))
                        {
                            sub_12289( "E1E1_HELP", ref l_U571, 6, 1 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U382++;
                }
                break;
                case 1:
                if (TIMERA() > 18000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, sub_2940(), 20.00000000, 20.00000000, 4.00000000, 0 ))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U385 );
                            if (l_U385 == 0)
                            {
                                sub_12289( "E1E1_CHAT1", ref l_U565, 6, 1 );
                            }
                            else if (sub_12289( "E1E1_CHAT2", ref l_U565, 6, 1 ))
                            {
                                ;
                            }
                            SETTIMERA( 0 );
                            l_U382++;
                        }
                    }
                }
                break;
                case 2:
                if (TIMERA() > 25000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U541 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, sub_2940(), 20.00000000, 20.00000000, 4.00000000, 0 ))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U385 );
                            if (l_U385 == 0)
                            {
                                sub_12289( "E1E1_CHAT3", ref l_U565, 6, 1 );
                            }
                            else if (sub_12289( "E1E1_CHAT4", ref l_U565, 6, 1 ))
                            {
                                ;
                            }
                            SETTIMERA( 0 );
                            l_U382++;
                        }
                    }
                }
                break;
                case 3:
                if (TIMERA() > 25000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U542 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U542, sub_2940(), 20.00000000, 20.00000000, 4.00000000, 0 ))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U385 );
                            if (l_U385 == 0)
                            {
                                sub_12289( "E1E1_2CHAT1", ref l_U565, 6, 1 );
                            }
                            else if (sub_12289( "E1E1_2CHAT2", ref l_U565, 6, 1 ))
                            {
                                ;
                            }
                            SETTIMERA( 0 );
                            l_U382++;
                        }
                    }
                }
                break;
            }
        }
    }
    if (l_U382 > 0)
    {
        GET_GAME_TIMER( ref l_U375 );
        if ((l_U375 - l_U374) > 18000)
        {
            if (l_U384 < 4)
            {
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U541, sub_2940(), 20.00000000, 20.00000000, 4.00000000, 0 ))
                    {
                        if (IS_CHAR_SHOOTING( sub_2940() ))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U504[0], sub_2940() ))
                            {
                                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U504[0] );
                                sub_12289( "E1E1_SHOOT", ref l_U565, 6, 1 );
                                PRINTSTRING( "***********************E1E1_SHOOT************************" );
                                l_U384++;
                                GET_GAME_TIMER( ref l_U374 );
                            }
                        }
                    }
                }
            }
            if (l_U383 < 3)
            {
                GET_CURRENT_CHAR_WEAPON( sub_2940(), ref l_U604 );
                if ((l_U604 == 22) AND (IS_CHAR_SHOOTING( sub_2940() )))
                {
                    sub_12289( "E1E1_GUN2", ref l_U565, 6, 1 );
                    PRINTSTRING( "***********************E1E1_GUN2************************" );
                    l_U383++;
                    GET_GAME_TIMER( ref l_U374 );
                }
            }
        }
    }
    return;
}

void sub_43853()
{
    REMOVE_BLIP( l_U544 );
    CLEAR_WANTED_LEVEL( sub_9017() );
    sub_10717( 1 );
    SET_PLAYER_CONTROL( sub_9017(), 0 );
    DO_SCREEN_FADE_OUT( 1000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    CLEAR_PRINTS();
    if (sub_13936( l_U565 ))
    {
        sub_11250( ref l_U565, 0 );
    }
    if (sub_13936( l_U571 ))
    {
        sub_11250( ref l_U571, 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U504[0] ))
    {
        SET_CAR_COORDINATES( l_U504[0], 935.83390000, 1556.02000000, 15.79790000 );
        SET_CAR_HEADING( l_U504[0], 240 );
        SET_CAR_ON_GROUND_PROPERLY( l_U504[0] );
    }
    if (IS_VEH_DRIVEABLE( l_U504[0] ))
    {
        LOCK_CAR_DOORS( l_U504[0], 2 );
        PRINTSTRING( "\n CARLOCK_LOCKED \n " );
    }
    else
    {
        PRINTSTRING( "\n IT DIDN'T WORK! \n " );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1962071130 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2107556865 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 977480632 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -14495224 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 729783779 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2006142190 );
    for ( l_U363 = 0; l_U363 < 16; l_U363++ )
    {
        if (DOES_CHAR_EXIST( l_U519[l_U363] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U519[l_U363] );
        }
    }
    for ( l_U363 = 0; l_U363 < 6; l_U363++ )
    {
        if (DOES_VEHICLE_EXIST( l_U504[l_U363] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U504[l_U363] );
        }
    }
    REQUEST_MODEL( -255678177 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( -255678177 )))
    {
        WAIT( 0 );
    }
    while (NOT (sub_44508( ref l_U516, 920.05770000, 1556.11800000, 15.68340000, 125 )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 949.43930000, 1544.00700000, 15.84800000 );
    for ( l_U363 = 0; l_U363 < 16; l_U363++ )
    {
        if (DOES_CHAR_EXIST( l_U519[l_U363] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U519[l_U363] );
        }
    }
    for ( l_U363 = 0; l_U363 < 6; l_U363++ )
    {
        if (NOT (l_U363 == 0))
        {
            if (DOES_VEHICLE_EXIST( l_U504[l_U363] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U504[l_U363] );
            }
        }
    }
    CLEAR_AREA( 935.83390000, 1556.02000000, 15.79790000, 10.00000000, 1 );
    WAIT( 0 );
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        TASK_LOOK_AT_CHAR( l_U541, sub_2940(), 10000, 0 );
        TASK_LOOK_AT_CHAR( sub_2940(), l_U541, 10000, 0 );
        OPEN_SEQUENCE_TASK( ref l_U583 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 929.61590000, 1564.41100000, 15.74070000, 2, -2, 1.00000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U541 );
        CLOSE_SEQUENCE_TASK( l_U583 );
        TASK_PERFORM_SEQUENCE( sub_2940(), l_U583 );
        CLEAR_SEQUENCE_TASK( l_U583 );
        OPEN_SEQUENCE_TASK( ref l_U584 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 929.05100000, 1562.53500000, 15.72780000, 2, -2, 1.00000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2940() );
        CLOSE_SEQUENCE_TASK( l_U584 );
        TASK_PERFORM_SEQUENCE( l_U541, l_U584 );
        CLEAR_SEQUENCE_TASK( l_U584 );
    }
    CLEAR_AREA( 929.61590000, 1564.41100000, 15.74070000, 6.00000000, 1 );
    CREATE_CAM( 14, ref l_U587[0] );
    SET_CAM_POS( l_U587[0], 923.49550000, 1576.67600000, 17.91833000 );
    SET_CAM_ROT( l_U587[0], 0.52075000, 0.00000000, -152.69690000 );
    SET_CAM_FOV( l_U587[0], 35.00000000 );
    SET_CAM_ACTIVE( l_U587[0], 1 );
    SET_CAM_PROPAGATE( l_U587[0], 1 );
    CREATE_CAM( 14, ref l_U587[1] );
    SET_CAM_POS( l_U587[1], 923.89480000, 1568.49100000, 17.90946000 );
    SET_CAM_ROT( l_U587[1], -4.94772800, -0.00000000, -136.14440000 );
    SET_CAM_FOV( l_U587[1], 35.00000000 );
    SET_CAM_ACTIVE( l_U587[1], 1 );
    SET_CAM_PROPAGATE( l_U587[1], 1 );
    CREATE_CAM( 3, ref l_U590 );
    SET_CAM_INTERP_STYLE_CORE( l_U590, l_U587[0], l_U587[1], 16000, 0 );
    SET_CAM_ACTIVE( l_U590, 1 );
    SET_CAM_PROPAGATE( l_U590, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAR( -255678177, 904.50930000, 1556.47700000, 15.80230000, ref l_U514, 1 );
    SET_CAR_HEADING( l_U514, 126 );
    SET_CAR_ON_GROUND_PROPERLY( l_U514 );
    DELETE_CAR( ref l_U503 );
    DELETE_CHAR( ref l_U543 );
    DELETE_CHAR( ref l_U542 );
    DO_SCREEN_FADE_IN( 1000 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    sub_12289( "E1E1_DMAL4", ref l_U565, 6, 1 );
    l_U492 = 0;
    while ((sub_13936( l_U565 )) AND (NOT l_U471))
    {
        WAIT( 0 );
        if (sub_13385())
        {
            l_U492 = 1;
            l_U471 = 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U541 )))
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U541, 918.83240000, 1558.76400000, 15.54430000, 2, -2, 3.00000000 );
    }
    DO_SCREEN_FADE_OUT( 1500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_CHAR_HEADING( sub_2940(), 85 );
    if (NOT l_U492)
    {
        INCREMENT_INT_STAT( 373, 1 );
    }
    else
    {
        CLEAR_AREA( 944.57600000, 1543.57900000, 15.84800000, 10.00000000, 1 );
        if (IS_CHAR_IN_ANY_CAR( sub_2940() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_2940(), 930.00890000, 1563.96400000, 15.77110000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_2940(), 930.00890000, 1563.96400000, 15.77110000 );
        }
        SET_CHAR_HEADING( sub_2940(), 85 );
    }
    sub_29476( 0 );
    DO_SCREEN_FADE_IN( 1000 );
    DELETE_CHAR( ref l_U541 );
    CLEAR_CHAR_TASKS( sub_2940() );
    SET_PLAYER_CONTROL( sub_9017(), 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    SET_CAM_BEHIND_PED( sub_2940() );
    SET_WIDESCREEN_BORDERS( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    l_U362++;
    return;
}

int sub_44508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_44517();
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
    sub_44665( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_44517()
{
    return 301427732;
}

void sub_44665(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_47542()
{
    CLEAR_WANTED_LEVEL( sub_9017() );
    g_U24 = 82;
    sub_32116( 4, "E1E1_CALLE", "E1E1AUD", 0 );
    RETUNE_RADIO_TO_STATION_NAME( "LIBERTY_ROCK_LRR" );
    sub_47625();
    sub_2900();
    return;
}

void sub_47625()
{
    sub_47634();
    return;
}

void sub_47634()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_47652();
    sub_47711( iVar2, iVar3, iVar4 );
    return;
}

void sub_47652()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_47711(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_47743( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_47743(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_47839( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_47839( ref cVar9 );
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
            sub_47839( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_47839( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_47839( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_47839( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_48416( uParam0, iVar7 );;;
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
    if (NOT (sub_48864( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_9017() );
    sub_1899();
    bVar28 = true;
    uVar29 = sub_48416( uParam0, iVar7 );
    uVar30 = sub_1523( uParam0 );
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
                sub_53318( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_53752();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_53837( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_53916( uParam0 );
                sub_53955( 0 );
                sub_1799( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_54144();
        }
    }
    if (bParam2)
    {
        sub_53752();
        sub_54243();
        sub_53955( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_53752();
        sub_54295();
        sub_53955( 0 );
        sub_1799( uVar30, 0 );
    }
    sub_1410();
    return;
}

void sub_47839(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48416(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1754( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_48864(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_48960( uParam1 );
        break;
        case 1:
        bVar8 = sub_49655( uParam1 );
        break;
        case 2:
        bVar8 = sub_50388( uParam1 );
        break;
        case 3:
        bVar8 = sub_50625( uParam1 );
        break;
        case 4:
        bVar8 = sub_50791( uParam1 );
        break;
        case 5:
        bVar8 = sub_50990( uParam1 );
        break;
        case 6:
        bVar8 = sub_51185( uParam1 );
        break;
        case 7:
        bVar8 = sub_51390( uParam1 );
        break;
        case 8:
        bVar8 = sub_51595( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_50003( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_48416( uParam0, uParam1 );
    if (bParam3)
    {
        sub_51881( uVar9, uParam0 );
    }
    return 1;
}

int sub_48960(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_49057( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49057( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_49057( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_49057( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_49562( "Contact 1", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 1", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_49057(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_49068( uParam1 );
    sub_49242( uParam0, 0, uParam2 );
    sub_49242( uParam0, 1, uParam3 );
    sub_49242( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_47652();
    return;
}

void sub_49068(unknown uParam0)
{
    ADD_SCORE( sub_9017(), uParam0 );
    sub_49093( uParam0 );
    return;
}

void sub_49093(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1754( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_49242(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_49562(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_49655(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49057( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_49057( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49057( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_49057( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_49057( iVar3, 0, sub_49881(), sub_50147(), 0, 0 );
        break;
        default:
        sub_49562( "Contact 2", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 2", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49881()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50003( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_50003(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_50147()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50003( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_50388(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49057( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_49057( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49057( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_49562( "Contact 3", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 3", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50625(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_49562( "Friend 4", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Friend 4", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50791(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49057( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49057( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_49562( "Contact 5", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 5", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50990(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49057( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49057( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_49562( "Contact 6", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 6", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51185(unknown uParam0)
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
        sub_49057( iVar3, 0, sub_49881(), sub_50147(), 0, 0 );
        break;
        default:
        sub_49562( "Friend 7", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Friend 7", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51390(unknown uParam0)
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
        sub_49057( iVar3, 0, sub_49881(), sub_50147(), 0, 0 );
        break;
        default:
        sub_49562( "Friend 8", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Friend 8", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51595(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49057( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_49562( "Contact 9", 1 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_49562( "Contact 9", 0 );
        sub_49057( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_51881(int iParam0, int iParam1)
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
    if (sub_51942( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_52660( iParam1 );
    }
    return;
}

int sub_51942(int iParam0, int iParam1)
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
            sub_52082( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_52082(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_52252( 0 );
    return;
}

void sub_52252(boolean bParam0)
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
        sub_52497();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_52497()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_52660(int iParam0)
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
        sub_52891( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_52891( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_52891( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_52891( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_52891( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_52891( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_52891(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_53318(unknown uParam0, unknown uParam1)
{
    sub_53337( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_53337(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_53752()
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

int sub_53837(int iParam0, int iParam1)
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

void sub_53916(unknown uParam0)
{
    sub_1271();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_53955(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_54006( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_54006(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_54144()
{
    sub_54153();
    return;
}

void sub_54153()
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

void sub_54243()
{
    sub_54153();
    return;
}

void sub_54295()
{
    sub_54153();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_54447()
{
    if (DOES_VEHICLE_EXIST( l_U504[0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U504[0] ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_2940(), l_U504[0] ))
            {
                if (l_U484)
                {
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U504[0], 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2940(), 0 );
                    if (NOT (IS_CHAR_INJURED( l_U543 )))
                    {
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U543, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U542 )))
                    {
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U542, 0 );
                    }
                    l_U484 = 0;
                }
                if (NOT l_U486)
                {
                    if (sub_8410())
                    {
                        if (sub_8479())
                        {
                            sub_54661( 0, 1 );
                            l_U486 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U541 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( l_U541, l_U504[0] ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_9017(), 0 )))
                        {
                            if (NOT l_U454)
                            {
                                REMOVE_BLIP( l_U545 );
                                REMOVE_BLIP( l_U544 );
                                ADD_BLIP_FOR_COORD( l_U397._fU0, l_U397._fU4, l_U397._fU8, ref l_U544 );
                                SET_ROUTE( l_U544, 1 );
                                SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U541, 1 );
                                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U541, 1 );
                                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U541, 0 );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U541, 0 );
                                if (NOT l_U462)
                                {
                                    if (NOT sub_11216())
                                    {
                                        sub_12289( "E1E1_WHERE", ref l_U565, 6, 1 );
                                        l_U462 = 1;
                                    }
                                }
                                l_U481 = 0;
                                l_U456 = 0;
                                l_U455 = 0;
                                l_U453 = 0;
                                l_U454 = 1;
                                SETTIMERB( 0 );
                            }
                            if (TIMERB() > 1000)
                            {
                                if (NOT sub_11216())
                                {
                                    if (NOT l_U457[0])
                                    {
                                        PRINT_NOW( "DRIVEB", 7500, 1 );
                                        l_U457[0] = 1;
                                    }
                                }
                                if (TIMERB() > 6000)
                                {
                                    if (NOT l_U493)
                                    {
                                        if (NOT sub_11216())
                                        {
                                            if (g_U39240 == 0)
                                            {
                                                StrCopy( ref l_U657[0], "E1E1_B1V1", 16 );
                                                StrCopy( ref l_U657[1], "E1E1_B2V1", 16 );
                                                StrCopy( ref l_U657[2], "E1E1_B3V1", 16 );
                                                sub_55213( ref l_U657, ref l_U571, 6, 1 );
                                            }
                                            else if (g_U39240 == 1)
                                            {
                                                StrCopy( ref l_U657[0], "E1E1_B1V2", 16 );
                                                StrCopy( ref l_U657[1], "E1E1_B2V2", 16 );
                                                StrCopy( ref l_U657[2], "E1E1_B2V3", 16 );
                                                sub_55213( ref l_U657, ref l_U571, 6, 1 );
                                            }
                                            else if (g_U39240 == 2)
                                            {
                                                StrCopy( ref l_U657[0], "E1E1_B1V1", 16 );
                                                StrCopy( ref l_U657[1], "E1E1_B2V1", 16 );
                                                StrCopy( ref l_U657[2], "E1E1_B3V1", 16 );
                                                sub_55213( ref l_U657, ref l_U571, 6, 1 );
                                            }
                                            else if (g_U39240 >= 3)
                                            {
                                                StrCopy( ref l_U657[0], "E1E1_B1V1", 16 );
                                                StrCopy( ref l_U657[1], "E1E1_B2V1", 16 );
                                                StrCopy( ref l_U657[2], "E1E1_B3V1", 16 );
                                                sub_55213( ref l_U657, ref l_U571, 6, 1 );
                                            };;;;
                                            l_U493 = 1;
                                        }
                                    }
                                    else if (NOT sub_11216())
                                    {
                                        sub_55611( ref l_U657, ref l_U571, 6, 1 );
                                    }
                                }
                            }
                        }
                        else if (TIMERB() > 2000)
                        {
                            if (l_U455 == 0)
                            {
                                REMOVE_BLIP( l_U545 );
                                REMOVE_BLIP( l_U544 );
                                PRINT_NOW( "LOSEWANT1", 7500, 1 );
                                STOP_PED_SPEAKING( sub_2940(), 0 );
                                STOP_PED_SPEAKING( l_U541, 0 );
                                l_U455 = 1;
                                l_U481 = 0;
                                l_U456 = 0;
                                l_U453 = 0;
                                l_U454 = 0;
                            }
                        }
                    }
                    else if (NOT l_U481)
                    {
                        if (NOT sub_11216())
                        {
                            REMOVE_BLIP( l_U545 );
                            REMOVE_BLIP( l_U544 );
                            if (NOT l_U457[1])
                            {
                                PRINT_NOW( "PICKUPMALC", 7500, 1 );
                                l_U457[1] = 1;
                            }
                            ADD_BLIP_FOR_CHAR( l_U541, ref l_U545 );
                            SET_BLIP_AS_FRIENDLY( l_U545, 1 );
                            l_U481 = 1;
                            l_U456 = 0;
                            l_U455 = 0;
                            l_U453 = 0;
                            l_U454 = 0;
                        }
                    }
                }
            }
            else if (NOT l_U456)
            {
                REMOVE_BLIP( l_U545 );
                REMOVE_BLIP( l_U544 );
                ADD_BLIP_FOR_CAR( l_U504[0], ref l_U545 );
                SET_BLIP_AS_FRIENDLY( l_U545, 1 );
                SETTIMERB( 0 );
                l_U456 = 1;
                l_U455 = 0;
                l_U481 = 0;
                l_U454 = 0;
                if (sub_13936( l_U571 ))
                {
                    sub_15446( ref l_U571 );
                }
            }
            else if (NOT (sub_13936( l_U571 )))
            {
                if (TIMERB() > 500)
                {
                    if (l_U453 == 0)
                    {
                        if (NOT l_U457[2])
                        {
                            PRINT_NOW( "BACKIN", 7500, 1 );
                            l_U457[2] = 1;
                        }
                        l_U453 = 1;
                    }
                }
            };;;
        }
    }
    return;
}

void sub_54661(boolean bParam0, unknown uParam1)
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

void sub_55213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_55236( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_55236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_12366( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_55611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_55634( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

int sub_55634(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    if (iParam2->_fU12)
    {
        return sub_12366( uParam0, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_56483(int iParam0, int iParam1)
{
    if (sub_56496( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

boolean sub_56496(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}