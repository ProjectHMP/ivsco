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
    l_U484 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U491 = 45;
    l_U492 = 0.00000000;
    l_U493 = -3.00000000;
    l_U494 = -3.00000000;
    l_U495 = 0.00000000;
    l_U496 = 0.00000000;
    l_U497 = 0.20000000;
    l_U498 = 65491;
    l_U499 = 45;
    l_U500 = 0;
    l_U501 = 0.00000000;
    l_U505 = 0.00000000;
    l_U506 = 0.35000000;
    l_U507 = 7.50000000;
    l_U508 = -7.50000000;
    l_U536 = 0;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U540 = 0;
    l_U541 = 0;
    l_U542 = 0.00000000;
    l_U543 = 0;
    l_U544 = 0;
    l_U545 = 1;
    l_U546 = 0;
    l_U547 = 2.20000000;
    l_U548 = 0;
    l_U549 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U557 = 0;
    l_U558 = 1;
    l_U559 = 0;
    l_U564 = -1;
    l_U565 = "CRADLE_LOOP";
    l_U594 = 2;
    l_U601 = 0;
    l_U611 = 0;
    l_U612 = 0;
    l_U614 = 0;
    l_U615 = 0;
    l_U616 = 0;
    l_U617 = {-0.50000000, 0.00000000, 0.29000000};
    l_U620 = {0.50000000, 0.00000000, 0.29000000};
    l_U623 = 3;
    l_U624 = 0;
    l_U625 = 0;
    l_U626 = 0;
    l_U642 = {0.00000000, 0.00000000, 0.00000000};
    l_U760 = {1.00000000, 1.00000000, 1.00000000};
    l_U763 = {0.00000000, 1.00000000, 0.00000000};
    l_U766 = {0.00000000, -1.00000000, 0.00000000};
    l_U779 = 0;
    l_U780 = 0;
    l_U791 = 100.00000000;
    l_U792 = 10.50000000;
    l_U793 = 0.50000000;
    l_U794 = 2.85000000;
    l_U799 = 0;
    l_U1282 = 897868981;
    l_U1283 = 897868981;
    l_U1284 = 897868981;
    l_U1285 = -1639359785;
    l_U1286 = -1775659292;
    l_U1287 = 583488944;
    l_U1288 = 824245375;
    l_U1289 = 624314380;
    l_U1290 = -479595866;
    l_U1291 = 24233425;
    l_U2213 = 0;
    l_U2214 = 0;
    l_U2219 = 0;
    l_U2391 = 0;
    l_U2392 = 0;
    l_U2394 = 0;
    l_U2395 = 1;
    l_U2396 = 0;
    l_U2397 = 0;
    l_U2398 = 0;
    l_U2425 = 1;
    l_U2535 = 0;
    l_U2536 = 0;
    l_U2537 = 0;
    l_U2538 = 1;
    l_U2570 = 0;
    l_U2582 = 0;
    l_U2583 = 0;
    l_U2584 = 0;
    l_U2639 = 0;
    l_U2666 = 0;
    l_U2681 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_906();
        sub_3016();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U1292)
        {
            case 0:
            sub_4338();
            l_U1292 = 1;
            break;
            case 1:
            sub_8537();
            break;
            case 2:
            sub_10786();
            break;
            case 9:
            sub_20048();
            break;
        }
        if (l_U2386)
        {
            sub_34020();
        }
        GET_CHAR_HEALTH( sub_3418(), ref l_U2426 );
        if (l_U2426 < 200)
        {
            ;
        }
        if (l_U2387)
        {
            if (l_U2381)
            {
                sub_51838();
            }
            if (l_U2670)
            {
                if (NOT l_U2395)
                {
                    ;
                }
                else
                {
                    sub_63472();
                }
            }
            if (l_U2671)
            {
                sub_70078();
            }
            sub_90582();
            if (l_U2392)
            {
                sub_92626();
            }
        }
    }
    return;
}

void sub_906()
{
    sub_915();
    return;
}

void sub_915()
{
    int iVar2;

    iVar2 = 14;
    sub_929( iVar2 );
    sub_2105( iVar2 );
    return;
}

void sub_929(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_973();
        sub_1134();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1242();
            sub_1281();
        }
    }
    sub_1357();
    sub_1458();
    uVar5 = sub_1571( uParam0 );
    sub_2012( uVar5, 0 );
    return;
}

void sub_973()
{
    sub_987( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1087();
    }
    return;
}

void sub_987(int iParam0)
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

void sub_1087()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1134()
{
    sub_1143();
    return;
}

void sub_1143()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1242()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1281()
{
    sub_1290();
    return;
}

void sub_1290()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1357()
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

void sub_1458()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1480();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1480()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1571(unknown uParam0)
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
    sub_1970( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1970(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2012(int iParam0, boolean bParam1)
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

void sub_2105(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2114();
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
        sub_2889();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2114()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2152( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2152( 1, g_U569[I] )) != 0)
            {
                sub_2438( I );
            }
        }
    }
    if (NOT sub_2604())
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

int sub_2152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2438(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2523( g_U569 - 1 );
    return;
}

void sub_2523(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2604()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2152( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2889()
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

void sub_3016()
{
    float fVar2;
    float fVar3;
    int I;

    fVar2 = 23.00000000;
    fVar3 = 4.00000000;
    sub_3048( 4, "HO_05" );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SET_PED_IS_BLIND_RAGING( sub_3418(), 0 );
    sub_3467();
    sub_3726();
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1282 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1283 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1284 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1285 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1286 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1287 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1288 );
    for ( I = 0; I <= 18; I++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1295[I] );
    }
    for ( I = 0; I <= 29; I++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1657[I] );
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2104[I] );
    }
    for ( I = 0; I <= 22; I++ )
    {
        fVar2 += I * fVar3;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65386, 588, fVar2, 1, 0.00000000 );
        fVar2 = 23.00000000;
    }
    if (DOES_PICKUP_EXIST( l_U2306[0] ))
    {
        REMOVE_PICKUP( l_U2306[0] );
    }
    for ( I = 0; I <= 23; I++ )
    {
        fVar2 += I * fVar3;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65352, 588, fVar2, 1, 0.00000000 );
        fVar2 = 23.00000000;
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65383, 582, 17, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65354, 582, 17, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65386, 588, 115, 0, 0.00000000 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2301 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2320[0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2320[1] );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    CLEAR_PED_NON_CREATION_AREA();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3048(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_3269();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3318(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_3269()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3318()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3418()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3467()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U2108[I] ))
        {
            REMOVE_BLIP( l_U2108[I] );
        }
        if (DOES_BLIP_EXIST( l_U2124[I] ))
        {
            REMOVE_BLIP( l_U2124[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U2164 ))
    {
        REMOVE_BLIP( l_U2164 );
    }
    if (DOES_BLIP_EXIST( l_U2292 ))
    {
        REMOVE_BLIP( l_U2292 );
    }
    if (DOES_BLIP_EXIST( l_U2293 ))
    {
        REMOVE_BLIP( l_U2293 );
    }
    if (DOES_BLIP_EXIST( l_U1530 ))
    {
        REMOVE_BLIP( l_U1530 );
    }
    if (DOES_BLIP_EXIST( l_U2294 ))
    {
        REMOVE_BLIP( l_U2294 );
    }
    return;
}

void sub_3726()
{
    return;
}

void sub_4338()
{
    unknown uVar2;
    unknown uVar3;

    GET_WEAPONTYPE_MODEL( 7, ref uVar2 );
    GET_WEAPONTYPE_MODEL( 12, ref uVar3 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/HOTEL_ATTACK" )))
    {
        WAIT( 0 );
    }
    sub_4438( "RB6AUD" );
    LOAD_ADDITIONAL_TEXT( "HOTELAT", 0 );
    LOAD_ADDITIONAL_TEXT( "RB6AUD", 6 );
    GET_MAX_WANTED_LEVEL( ref l_U2336 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2168 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U2166 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U2167 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U2169 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2170 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2174 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2172 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2171 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2173 );
    SET_DECISION_MAKER_ATTRIBUTE_MOVEMENT_STYLE( l_U2171, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U2171, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TEAMWORK( l_U2171, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U2170, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U2173, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2172, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U2172, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2170, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2174, 67 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2170, 75 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2174, 2 );
    SET_CAM_BEHIND_PED( sub_3418() );
    sub_4878( 0, sub_3418(), "NIKO", 0 );
    while (NOT ARE_ALL_NAVMESH_REGIONS_LOADED())
    {
        WAIT( 0 );
    }
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -184.95100000, 583.28000000, 119.54000000, 0.00000000, 0, 90, ref l_U2306[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2306[0], "MloRoom2_RitzPEN" );
    ADD_COVER_POINT( -178.37390000, 593.20700000, 118.29380000, 3, 273.61370000, 3, 0, ref l_U2295 );
    ADD_COVER_POINT( -182.64550000, 596.31950000, 118.29380000, 2, 278.80910000, 0, 0, ref l_U2296 );
    ADD_COVER_BLOCKING_AREA( -183.71000000, 595.30040000, 0.00000000, -180.51560000, 601.82000000, 100.00000000, 1, 1, 1 );
    ADD_SCENARIO_BLOCKING_AREA( -190.77380000, 561.04240000, 50.00000000, -104.05610000, 617.74620000, 500.00000000 );
    SET_PED_NON_CREATION_AREA( -190.77380000, 561.04240000, 50.00000000, -104.05610000, 617.74620000, 500.00000000 );
    SWITCH_PED_PATHS_OFF( -190.77380000, 561.04240000, 50.00000000, -104.05610000, 617.74620000, 500.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -168.84030000, 596.49520000, 0.00000000, -163.46570000, 600.49500000, 500.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -179.37080000, 594.43280000, 0.00000000, -172.92590000, 601.99320000, 500.00000000 );
    sub_5444();
    l_U2400 = 1.00000000;
    l_U2401 = 0.00000000;
    l_U2402 = 0.00000000;
    l_U2403 = 0.00000000;
    l_U1281 = 0;
    l_U2385 = 1;
    sub_7796( 0 );
    sub_7796( 2 );
    sub_8165();
    return;
}

void sub_4438(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4457();
    return;
}

void sub_4457()
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

void sub_4878(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4962( "\n PED NUMBER ", uParam0 );
    sub_5002( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4962(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5002(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5444()
{
    l_U1515._fU0 = 0;
    l_U1515._fU4 = "MloRoom_Ritz_main";
    l_U1515._fU8 = 0;
    l_U1515._fU12 = 3;
    l_U1515._fU16 = 3;
    l_U1520._fU0 = 1;
    l_U1520._fU4 = "MloRoom_ritzF3";
    l_U1520._fU8 = 1;
    l_U1520._fU12 = 5;
    l_U1525._fU0 = 2;
    l_U1525._fU4 = "MloRoom_RitzPEN";
    l_U1525._fU16 = 6;
    l_U1531._fU0 = 0;
    l_U1531._fU4 = {-182.18000000, 599.03400000, 15.82900000};
    l_U1531._fU16 = 90.00000000;
    l_U1531._fU20 = "MloRoom_Ritz_main";
    l_U1531._fU24 = 0;
    l_U1531._fU28 = {l_U1515};
    l_U1531._fU56 = {-181.70400000, 599.09810000, 14.60900000};
    l_U1582._fU0 = 1;
    l_U1582._fU4 = {-150.42300000, 599.03400000, 15.82900000};
    l_U1582._fU16 = 270.00000000;
    l_U1582._fU20 = "MloRoom_Ritz_main";
    l_U1582._fU24 = 0;
    l_U1582._fU28 = {l_U1515};
    l_U1548._fU0 = 2;
    l_U1548._fU4 = {-182.28370000, 595.94990000, 114.86300000};
    l_U1548._fU16 = 90.00000000;
    l_U1548._fU20 = "MloRoom_ritzF3";
    l_U1548._fU24 = 0;
    l_U1548._fU28 = {l_U1520};
    l_U1548._fU56 = {-181.64980000, 596.03450000, 113.71340000};
    l_U1565._fU0 = 3;
    l_U1565._fU4 = {-150.36470000, 595.99810000, 114.86330000};
    l_U1565._fU16 = 270.00000000;
    l_U1565._fU20 = "MloRoom_ritzF3";
    l_U1565._fU24 = 1;
    l_U1565._fU28 = {l_U1520};
    l_U1599[0]._fU0 = 0;
    l_U1599[0]._fU4 = {-182.18000000, 599.03400000, 15.82900000};
    l_U1599[0]._fU16 = 90.00000000;
    l_U1599[0]._fU20 = "MloRoom_Ritz_main";
    l_U1599[0]._fU24 = 0;
    l_U1599[0]._fU28 = {l_U1515};
    l_U1599[1]._fU0 = 2;
    l_U1599[1]._fU4 = {-182.28370000, 595.94990000, 114.86300000};
    l_U1599[1]._fU16 = 90.00000000;
    l_U1599[1]._fU20 = "MloRoom_ritzF3";
    l_U1599[1]._fU24 = 0;
    l_U1599[1]._fU28 = {l_U1520};
    l_U1599[2]._fU0 = 3;
    l_U1599[2]._fU4 = {-150.36470000, 595.99810000, 114.86330000};
    l_U1599[2]._fU16 = 270.00000000;
    l_U1599[2]._fU20 = "MloRoom_ritzF3";
    l_U1599[2]._fU24 = 1;
    l_U1599[2]._fU28 = {l_U1520};
    l_U1346[0]._fU0 = 0;
    l_U1346[0]._fU4 = {l_U1515};
    l_U1346[0]._fU76[0] = {-184.06900000, 597.33900000, 16.17900000};
    l_U1346[0]._fU76[1] = {-184.06900000, 597.33900000, 115.27900000};
    l_U1346[0]._fU112 = 1;
    l_U1346[0]._fU104 = 90.00000000;
    l_U1346[0]._fU68 = 0;
    l_U1346[0]._fU72 = 5000;
    l_U1346[0]._fU44 = {-0.09500000, 0.85000000, 1.10000000};
    l_U1346[0]._fU56 = {0.80000000, -0.70000000, -1.30000000};
    l_U1346[1]._fU0 = 1;
    l_U1346[1]._fU4 = {l_U1520};
    l_U1346[1]._fU76[0] = {-184.06900000, 597.33900000, 16.17900000};
    l_U1346[1]._fU76[1] = {-148.66700000, 597.34700000, 115.27900000};
    l_U1346[1]._fU112 = 1;
    l_U1346[1]._fU104 = 270.00000000;
    l_U1346[1]._fU68 = 0;
    l_U1346[1]._fU72 = 0;
    l_U1346[1]._fU44 = {0.09500000, -0.90000000, 1.10000000};
    l_U1346[1]._fU56 = {-0.80000000, 0.70000000, -1.30000000};
    l_U1346[2]._fU0 = 2;
    l_U1346[2]._fU4 = {l_U1525};
    l_U1346[2]._fU112 = 1;
    l_U1346[2]._fU104 = 270.00000000;
    l_U1346[2]._fU68 = 0;
    l_U1346[2]._fU72 = 0;
    l_U1346[2]._fU44 = {0.09500000, -0.90000000, 1.10000000};
    l_U1346[2]._fU56 = {-0.80000000, 0.70000000, -1.30000000};
    l_U1437[0]._fU0 = 0;
    l_U1437[0]._fU8 = {-182.61900000, 597.38900000, 15.92900000};
    l_U1437[0]._fU20 = 90.00000000;
    l_U1437[0]._fU24 = "MloRoom_Ritz_main";
    l_U1437[0]._fU28 = {-184.06900000, 597.33900000, 16.17900000};
    l_U1437[0]._fU40 = 1;
    l_U1437[1]._fU0 = 3;
    l_U1437[1]._fU8 = {-149.86900000, 597.34000000, 15.90900000};
    l_U1437[1]._fU20 = 270.00000000;
    l_U1437[1]._fU24 = "MloRoom_Ritz_main";
    l_U1437[1]._fU28 = {-148.66700000, 597.34700000, 16.17900000};
    l_U1437[1]._fU40 = 0;
    l_U1437[2]._fU0 = 1;
    l_U1437[2]._fU8 = {-182.71700000, 597.33900000, 115.02900000};
    l_U1437[2]._fU20 = 90.00000000;
    l_U1437[2]._fU24 = "MloRoom_ritzF3";
    l_U1437[2]._fU28 = {-184.06900000, 597.33900000, 115.27900000};
    l_U1437[2]._fU40 = 1;
    l_U1437[3]._fU0 = 6;
    l_U1437[3]._fU8 = {-149.89100000, 597.33300000, 119.06200000};
    l_U1437[3]._fU20 = 270.00000000;
    l_U1437[3]._fU24 = "MloRoom_RitzPENHALL";
    l_U1437[3]._fU28 = {-148.62600000, 597.32800000, 119.26300000};
    l_U1437[3]._fU40 = 0;
    l_U1437[4]._fU0 = 2;
    l_U1437[4]._fU8 = {-182.61900000, 600.78800000, 15.92900000};
    l_U1437[4]._fU20 = 90.00000000;
    l_U1437[4]._fU24 = "MloRoom_Ritz_main";
    l_U1437[4]._fU40 = 1;
    l_U1437[5]._fU0 = 4;
    l_U1437[5]._fU8 = {-149.86900000, 600.78000000, 15.90900000};
    l_U1437[5]._fU20 = 270.00000000;
    l_U1437[5]._fU24 = "MloRoom_Ritz_main";
    l_U1437[5]._fU28 = {-148.66700000, 597.34700000, 16.17900000};
    l_U1437[5]._fU40 = 0;
    l_U1437[6]._fU0 = 5;
    l_U1437[6]._fU8 = {-149.90300000, 597.34600000, 115.01300000};
    l_U1437[6]._fU20 = 270.00000000;
    l_U1437[6]._fU24 = "MloRoom_ritzF3";
    l_U1437[6]._fU28 = {-148.66700000, 597.34700000, 115.27900000};
    l_U1437[6]._fU40 = 0;
    return;
}

void sub_7796(unknown uParam0)
{
    float fVar3;
    float fVar4;
    int I;

    fVar3 = 23.00000000;
    fVar4 = 4.00000000;
    I = 0;
    switch (uParam0)
    {
        case 0:
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65383, 582, 17, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65354, 582, 17, 1, 0.00000000 );
        break;
        case 1:
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65383, 582, 17, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65354, 582, 17, 0, 0.00000000 );
        break;
        case 2:
        for ( I = 0; I <= 22; I++ )
        {
            fVar3 += I * fVar4;
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65386, 588, fVar3, 1, 0.00000000 );
            fVar3 = 23.00000000;
        }
        for ( I = 0; I <= 23; I++ )
        {
            fVar3 += I * fVar4;
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65352, 588, fVar3, 1, 0.00000000 );
            fVar3 = 23.00000000;
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -176326391, 65386, 588, 115, 0, -1.00000000 );
        break;
    }
    return;
}

void sub_8165()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U795 );
    if (((DOES_VEHICLE_EXIST( l_U795 )) AND (NOT (IS_CAR_DEAD( l_U795 )))) AND (l_U795 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U795 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U795 );
            l_U798 = 1;
        }
        if (LOCATE_CAR_3D( l_U795, -127.03000000, -260.57000000, 11.69000000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if ((l_U796 != l_U795) AND (l_U796 != nil))
            {
                if (DOES_VEHICLE_EXIST( l_U796 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U796 );
                }
            }
            CLEAR_AREA( -126.66210000, -266.25630000, 11.55910000, 3.00000000, 1 );
            SET_CAR_HEADING( l_U795, 0.00000000 );
            SET_CAR_COORDINATES( l_U795, -127.03000000, -260.25630000, 12.55910000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U797 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U795 );
            }
        }
        if (l_U798 == 1)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U795 );
            l_U798 = 0;
        }
        l_U796 = l_U795;
    }
    return;
}

void sub_8537()
{
    switch (l_U2672)
    {
        case 0:
        if (sub_8582())
        {
            SET_CUTSCENE_EXTRA_ROOM_POS( -108.10000000, -265.90000000, 13.40000000 );
            if (g_U9893._fU24)
            {
                SET_PLAYER_CONTROL( sub_3318(), 0 );
                START_CUTSCENE_NOW( "RB_6" );
                l_U2672 = 1;
            }
            else
            {
                l_U2672 = 2;
            }
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U2672 = 2;
            CLEAR_NAMED_CUTSCENE( "RB_6" );
        }
        break;
        case 2:
        REQUEST_MODEL( 467469635 );
        REQUEST_MODEL( -196312163 );
        REQUEST_MODEL( -471902624 );
        REQUEST_MODEL( -2090179830 );
        REQUEST_MODEL( 1667998832 );
        REQUEST_MODEL( 948346586 );
        REQUEST_MODEL( -16333017 );
        REQUEST_MODEL( -24996117 );
        REQUEST_MODEL( l_U1289 );
        REQUEST_MODEL( -121234208 );
        REQUEST_MODEL( -1346357795 );
        REQUEST_MODEL( 549562642 );
        REQUEST_MODEL( 1739259976 );
        REQUEST_MODEL( 1289046123 );
        REQUEST_MODEL( -859769635 );
        REQUEST_MODEL( -756796613 );
        REQUEST_MODEL( -252599135 );
        REQUEST_ANIMS( "missray6" );
        REQUEST_ANIMS( "missray6" );
        REQUEST_INTERIOR_MODELS( 984033277, "MloRoom_Ritz_main" );
        while (((((((((((((((((((NOT (HAS_MODEL_LOADED( -471902624 ))) || (NOT (HAS_MODEL_LOADED( -2090179830 )))) || (NOT (HAS_MODEL_LOADED( 1667998832 )))) || (NOT (HAS_MODEL_LOADED( 948346586 )))) || (NOT (HAS_MODEL_LOADED( -16333017 )))) || (NOT (HAS_MODEL_LOADED( -24996117 )))) || (NOT (HAS_MODEL_LOADED( -121234208 )))) || (NOT (HAS_MODEL_LOADED( -1346357795 )))) || (NOT (HAS_MODEL_LOADED( 549562642 )))) || (NOT (HAS_MODEL_LOADED( -196312163 )))) || (NOT (HAS_MODEL_LOADED( 467469635 )))) || (NOT (HAS_MODEL_LOADED( l_U1289 )))) || (NOT (HAS_MODEL_LOADED( 1739259976 )))) || (NOT (HAS_MODEL_LOADED( 1289046123 )))) || (NOT (HAS_MODEL_LOADED( -859769635 )))) || (NOT (HAS_MODEL_LOADED( -252599135 )))) || (NOT (HAVE_ANIMS_LOADED( "missray6" )))) || (NOT (HAVE_ANIMS_LOADED( "missray6" )))) || (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/HOTEL_ATTACK" ))))
        {
            if (NOT (HAS_MODEL_LOADED( -471902624 )))
            {
                REQUEST_MODEL( -471902624 );
                sub_9450( "AB_RITZ_LIFT not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -2090179830 )))
            {
                REQUEST_MODEL( -2090179830 );
                sub_9450( "CJ_LIFT_R_DOOR not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 1667998832 )))
            {
                REQUEST_MODEL( 1667998832 );
                sub_9450( "CJ_LIFT_R_DOOR_OUT not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 948346586 )))
            {
                REQUEST_MODEL( 948346586 );
                sub_9450( "CJ_LIFT_L_DOOR not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -16333017 )))
            {
                REQUEST_MODEL( -16333017 );
                sub_9450( "CJ_LIFT_L_DOOR_OUT not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -24996117 )))
            {
                REQUEST_MODEL( -24996117 );
                sub_9450( "CJ_LIFT_OUTER not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -252599135 )))
            {
                REQUEST_MODEL( -252599135 );
                sub_9450( "CJ_DW_SIGN_1 not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -121234208 )))
            {
                REQUEST_MODEL( -121234208 );
                sub_9450( "CJ_LIFT_SWITCH not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -1346357795 )))
            {
                REQUEST_MODEL( -1346357795 );
                sub_9450( "CJ_LIFT_SWITCHUP not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 549562642 )))
            {
                REQUEST_MODEL( 549562642 );
                sub_9450( "CJ_LIFT_SWITCHDN not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -756796613 )))
            {
                REQUEST_MODEL( -756796613 );
                sub_9450( "CJ_WORK_SIGN_1 not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -859769635 )))
            {
                REQUEST_MODEL( -859769635 );
                sub_9450( "TIM_CABLE_1 not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( l_U1289 )))
            {
                REQUEST_MODEL( l_U1289 );
                sub_9450( "PORTER_MODEL not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 1289046123 )))
            {
                REQUEST_MODEL( 1289046123 );
                sub_9450( "CJ_WINDOW_CRADLE not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( -196312163 )))
            {
                REQUEST_MODEL( -196312163 );
                sub_9450( "W_GLOCK not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 467469635 )))
            {
                REQUEST_MODEL( 467469635 );
                sub_9450( "W_AK47 not loaded!" );
            }
            if (NOT (HAS_MODEL_LOADED( 1739259976 )))
            {
                REQUEST_MODEL( 1739259976 );
                sub_9450( "CJ_WIN_CRAD_WINCH not loaded!" );
            }
            if (NOT (HAVE_ANIMS_LOADED( "missray6" )))
            {
                REQUEST_ANIMS( "missray6" );
                sub_9450( "Anims not loaded" );
            }
            if (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/HOTEL_ATTACK" )))
            {
                sub_9450( "Audio not loaded" );
            }
            WAIT( 0 );
        }
        LOAD_SCENE( -123.63790000, -256.57810000, 11.68540000 );
        FORCE_WEATHER( 1 );
        SET_CHAR_COORDINATES( sub_3418(), -123.63790000, -256.57810000, 11.68540000 );
        SET_CHAR_HEADING( sub_3418(), 90.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        LOAD_ALL_OBJECTS_NOW();
        sub_3269();
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_3318(), 1 );
        l_U2672 = 3;
        l_U1292 = 2;
        break;
    }
    return;
}

void sub_8582()
{
    return sub_8593( 1, 1 );
}

int sub_8593(boolean bParam0, unknown uParam1)
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

void sub_9450(unknown uParam0)
{
    return;
}

void sub_10786()
{
    switch (l_U1294)
    {
        case 0:
        if (NOT l_U2339[11])
        {
            PRINT_NOW( "HO_11", 7500, 1 );
            l_U2339[11] = 1;
            ADD_BLIP_FOR_COORD( -166.26220000, 609.99660000, 13.81190000, ref l_U1530 );
            SET_ROUTE( l_U1530, 1 );
            CHANGE_BLIP_COLOUR( l_U1530, 5 );
        }
        if (NOT l_U2387)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -166.02100000, 612.64310000, 14.81190000, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                l_U2387 = 1;
                l_U2381 = 1;
                l_U2670 = 1;
                l_U2671 = 1;
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65376, 591, 119, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65376, 593, 119, 0, 0.00000000 );
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_3318(), 0 )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -166.54880000, 611.85440000, 15.51190000, 1.60000000, 1.60000000, 1.60000000, 1 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -165.99800000, 606.52580000, 14.71540000, 4.00000000, 1.00000000, 1.00000000, 0 )))
            {
                if (sub_11185( 1, 1 ))
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_3318(), 0 )))
                    {
                        if (DOES_BLIP_EXIST( l_U1530 ))
                        {
                            REMOVE_BLIP( l_U1530 );
                        }
                        SET_WANTED_MULTIPLIER( 0.20000000 );
                        l_U1294 = 2;
                    }
                    else if (NOT l_U2339[33])
                    {
                        PRINT_NOW( "HO_33", 7500, 1 );
                        l_U2339[33] = 1;
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U1530 )))
            {
                ADD_BLIP_FOR_COORD( -166.26220000, 609.99660000, 13.81190000, ref l_U1530 );
                SET_ROUTE( l_U1530, 1 );
                CLEAR_PRINTS();
                PRINT_NOW( "HO_11", 7500, 1 );
            }
        }
        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U2339[33])
            {
                PRINT_NOW( "HO_33", 7500, 1 );
                l_U2339[33] = 1;
            }
            if (DOES_BLIP_EXIST( l_U1530 ))
            {
                REMOVE_BLIP( l_U1530 );
            }
        }
        break;
        case 2:
        sub_11779();
        if (l_U799 == 14)
        {
            l_U1294 = 4;
        }
        break;
        case 3: break;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3418() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3418(), ref l_U2335 );
    }
    return;
}

int sub_11185(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3418() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3418(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3418() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3418(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3418()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3418() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3418() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3318() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3318() )))
    {
        return 0;
    }
    return 1;
}

void sub_11779()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT l_U2213)
    {
        if (NOT sub_11799())
        {
            l_U2213 = 1;
        }
    }
    else if (((l_U799 > 0) AND (NOT l_U2214)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_11799())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            WAIT( 1000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2214 = 1;
            l_U799 = 6;
        }
    }
    switch (l_U799)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U2231[0] ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_3318(), 0 );
            REQUEST_MODEL( l_U1291 );
            REQUEST_MODEL( 76551508 );
            while ((NOT (HAS_MODEL_LOADED( l_U1291 ))) || (NOT (HAS_MODEL_LOADED( l_U1291 ))))
            {
                WAIT( 0 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1246248054, 65368, 603, 15, 1, 1.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1246248054, 65371, 603, 15, 1, -1.00000000 );
            SET_USE_HIGHDOF( 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_3418() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3418(), ref uVar8 );
                SET_CAR_AS_MISSION_CAR( uVar8 );
                CLEAR_AREA( -169.92450000, 637.30040000, 14.16270000, 5.00000000, 1 );
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3418(), -169.92450000, 637.30040000, 14.16270000 );
                CLEAR_AREA_OF_CARS( -170.33540000, 625.22820000, 13.75310000, 30.00000000 );
                SET_CAR_COORDINATES( uVar8, -170.33540000, 625.22820000, 13.75310000 );
                SET_CAR_HEADING( uVar8, 87.22450000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar8 );
            }
            else
            {
                CLEAR_CHAR_TASKS( sub_3418() );
                if (DOES_VEHICLE_EXIST( l_U2335 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U2335 )))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U2335 );
                        CLEAR_AREA_OF_CARS( -170.33540000, 625.22820000, 13.75310000, 30.00000000 );
                        SET_CAR_COORDINATES( l_U2335, -170.33540000, 625.22820000, 13.75310000 );
                        SET_CAR_HEADING( l_U2335, 87.22450000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U2335 );
                    }
                }
            }
            WAIT( 100 );
            CLEAR_AREA_OF_CARS( -166.54880000, 611.85440000, 15.51190000, 10.00000000 );
            CLEAR_AREA( -166.32860000, 604.75570000, 14.64440000, 100.00000000, 1 );
            GET_CURRENT_CHAR_WEAPON( sub_3418(), ref l_U2665 );
            SET_CURRENT_CHAR_WEAPON( sub_3418(), 0, 0 );
            DISPLAY_RADAR( 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            CLEAR_PRINTS();
            BEGIN_CAM_COMMANDS( ref l_U2175 );
            SET_CHAR_COORDINATES( sub_3418(), -166.15770000, 605.45000000, 13.70950000 );
            SET_CHAR_HEADING( sub_3418(), 180.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3418(), "MloRoom_Ritz_main" );
            WAIT( 500 );
            CREATE_CAM( 14, ref l_U2203 );
            CREATE_CAM( 14, ref l_U2204 );
            CREATE_CAM( 3, ref l_U2205 );
            CREATE_CAM( 14, ref l_U2206 );
            CREATE_CAM( 14, ref l_U2207 );
            CREATE_CAM( 3, ref l_U2208 );
            CREATE_CAM( 14, ref l_U2209 );
            CREATE_CAM( 14, ref l_U2210 );
            CREATE_CAM( 3, ref l_U2211 );
            CREATE_CAM( 14, ref l_U2212 );
            SET_CAM_POS( l_U2206, -166.13550000, 616.59780000, 20.70236000 );
            SET_CAM_ROT( l_U2206, -2.53785200, 0.00000000, 179.87090000 );
            SET_CAM_FOV( l_U2206, 49.49999000 );
            SET_CAM_ACTIVE( l_U2206, 0 );
            SET_CAM_PROPAGATE( l_U2206, 0 );
            SET_CAM_NEAR_DOF( l_U2206, 0.50000000 );
            SET_CAM_FAR_DOF( l_U2206, 7.00000000 );
            SET_CAM_POS( l_U2207, -166.13550000, 616.59780000, 20.70236000 );
            SET_CAM_ROT( l_U2207, 67.17818000, -0.00000000, 179.87090000 );
            SET_CAM_FOV( l_U2207, 49.49999000 );
            SET_CAM_ACTIVE( l_U2207, 0 );
            SET_CAM_PROPAGATE( l_U2207, 0 );
            SET_CAM_NEAR_DOF( l_U2207, 10.00000000 );
            SET_CAM_FAR_DOF( l_U2207, 60.00000000 );
            SET_CAM_ACTIVE( l_U2208, 0 );
            SET_CAM_PROPAGATE( l_U2208, 0 );
            SET_CAM_POS( l_U2203, -166.10170000, 598.60890000, 14.29320000 );
            POINT_CAM_AT_PED( l_U2203, sub_3418() );
            SET_CAM_POINT_OFFSET( l_U2203, 0.00000000, 0.00000000, 0.50000000 );
            SET_CAM_FOV( l_U2203, 28.30000000 );
            SET_CAM_ACTIVE( l_U2203, 1 );
            SET_CAM_PROPAGATE( l_U2203, 1 );
            SET_CAM_NEAR_DOF( l_U2203, 0.50000000 );
            SET_CAM_FAR_DOF( l_U2203, 7.00000000 );
            SET_CAM_POS( l_U2204, -164.51240000, 601.17380000, 15.24890000 );
            SET_CAM_ROT( l_U2204, -0.01790000, 0.00000000, 90.49840000 );
            SET_CAM_FOV( l_U2204, 28.30000000 );
            SET_CAM_ACTIVE( l_U2204, 1 );
            SET_CAM_PROPAGATE( l_U2204, 0 );
            SET_CAM_NEAR_DOF( l_U2204, 3.00000000 );
            SET_CAM_FAR_DOF( l_U2204, 19.00000000 );
            SET_CAM_ACTIVE( l_U2205, 0 );
            SET_CAM_PROPAGATE( l_U2205, 0 );
            SET_CAM_FOV( l_U2205, 28.30000000 );
            SET_CAM_POS( l_U2209, -155.38330000, 584.11300000, 123.07390000 );
            SET_CAM_ROT( l_U2209, -0.91740000, 0.00000000, -177.73200000 );
            SET_CAM_ACTIVE( l_U2209, 0 );
            SET_CAM_PROPAGATE( l_U2209, 0 );
            SET_CAM_POS( l_U2210, -155.21280000, 589.69130000, 129.44110000 );
            SET_CAM_ROT( l_U2210, -2.69560000, 0.00000000, 95.95600000 );
            SET_CAM_ACTIVE( l_U2210, 0 );
            SET_CAM_PROPAGATE( l_U2210, 0 );
            SET_CAM_ACTIVE( l_U2211, 0 );
            SET_CAM_PROPAGATE( l_U2211, 0 );
            SET_CAM_POS( l_U2212, -172.41980000, 600.20740000, 14.71238000 );
            SET_CAM_ROT( l_U2212, 6.05544900, -0.00000000, 108.94760000 );
            SET_CAM_ACTIVE( l_U2212, 0 );
            SET_CAM_PROPAGATE( l_U2212, 0 );
            SET_CAM_FOV( l_U2212, 30.60004000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            GET_GAME_TIMER( ref l_U2221 );
            FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( -166.71080000, 593.95580000, 13.70960000, 3.00000000, 4 );
            ADD_SCENARIO_BLOCKING_AREA( -190.77380000, 561.04240000, 0.00000000, -104.05610000, 617.74620000, 500.00000000 );
            SET_PED_NON_CREATION_AREA( -190.77380000, 561.04240000, 0.00000000, -104.05610000, 617.74620000, 500.00000000 );
            ADD_SCENARIO_BLOCKING_AREA( -169.99190000, 596.71920000, 0.00000000, -163.84200000, 602.22300000, 500.00000000 );
            sub_14027( ref l_U1346[0] );
            OPEN_SEQUENCE_TASK( ref l_U2165 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -166.24260000, 601.60400000, 14.70940000, 2, -2, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 180.00000000 );
            CLOSE_SEQUENCE_TASK( l_U2165 );
            TASK_PERFORM_SEQUENCE( sub_3418(), l_U2165 );
            CLEAR_SEQUENCE_TASK( l_U2165 );
            if (NOT (IS_CHAR_DEAD( l_U2301 )))
            {
                TASK_TURN_CHAR_TO_FACE_COORD( l_U2301, -175.21880000, 600.09290000, 15.37880000 );
            }
            WAIT( 500 );
            DO_SCREEN_FADE_IN( 500 );
            l_U799 = 5;
        }
        break;
        case 3: break;
        case 4: break;
        case 7: break;
        case 9: break;
        case 5:
        if (NOT l_U2666)
        {
            if (IS_SCREEN_FADED_IN())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[0], 0.00000000, -1.02500000, -0.28000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_LIFT_CHIME", uVar2 );
                l_U2666 = 1;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -166.32280000, 601.53170000, 14.71450000, 2.00000000, 0.20000000, 1.00000000, 0 ))
        {
            SET_CAM_ACTIVE( l_U2203, 0 );
            SET_CAM_PROPAGATE( l_U2203, 0 );
            SET_CAM_ACTIVE( l_U2212, 1 );
            SET_CAM_PROPAGATE( l_U2212, 1 );
            GET_GAME_TIMER( ref l_U2221 );
            l_U799 = 6;
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U2220 );
        if ((NOT l_U2214) AND (NOT l_U2535))
        {
            if (NOT l_U2223)
            {
                if (NOT (IS_CHAR_DEAD( l_U2301 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[0], 0.00000000, -1.02500000, -0.28000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -169.49150000, 597.28240000, 14.70930000 );
                    TASK_EXTEND_ROUTE( -168.09910000, 596.07810000, 13.70930000 );
                    OPEN_SEQUENCE_TASK( ref l_U2313 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, -175.21880000, 600.09290000, 15.37880000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    TASK_ACHIEVE_HEADING( 0, 223.57290000 );
                    CLOSE_SEQUENCE_TASK( l_U2313 );
                    TASK_PERFORM_SEQUENCE( l_U2301, l_U2313 );
                    CLEAR_SEQUENCE_TASK( l_U2313 );
                    GET_GAME_TIMER( ref l_U2221 );
                    l_U2223 = 1;
                }
            }
            else if (l_U1346[0]._fU112 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U2301 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U2301, -179.66470000, 599.22960000, 15.37890000, 2.00000000, 4.00000000, 1.00000000, 0 ))
                    {
                        sub_15382( 0, 1, 1 );
                    }
                }
            }
        }
        else
        {
            sub_17676();
            SET_CHAR_COORDINATES( sub_3418(), -166.24260000, 601.60400000, 13.70940000 );
            SET_CHAR_HEADING( sub_3418(), 180.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2301 )))
            {
                SET_CHAR_COORDINATES( l_U2301, -166.74490000, 595.49130000, 14.70940000 );
                SET_CHAR_HEADING( l_U2301, 211.52500000 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U2301 )))
        {
            if (((NOT (IS_CHAR_ON_SCREEN( l_U2301 ))) || (l_U2214)) || (l_U2535))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3418() );
                SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 1500 );
                SET_CURRENT_CHAR_WEAPON( sub_3418(), l_U2665, 0 );
                SET_CAM_ACTIVE( l_U2206, 0 );
                SET_CAM_PROPAGATE( l_U2206, 0 );
                SET_CAM_ACTIVE( l_U2207, 0 );
                SET_CAM_PROPAGATE( l_U2207, 0 );
                SET_CAM_ACTIVE( l_U2208, 0 );
                SET_CAM_PROPAGATE( l_U2208, 0 );
                SET_CAM_ACTIVE( l_U2209, 0 );
                SET_CAM_PROPAGATE( l_U2209, 0 );
                SET_CAM_ACTIVE( l_U2210, 0 );
                SET_CAM_PROPAGATE( l_U2210, 0 );
                SET_CAM_ACTIVE( l_U2211, 0 );
                SET_CAM_PROPAGATE( l_U2211, 0 );
                SET_CAM_ACTIVE( l_U2203, 0 );
                SET_CAM_PROPAGATE( l_U2203, 0 );
                SET_CAM_ACTIVE( l_U2204, 0 );
                SET_CAM_PROPAGATE( l_U2204, 0 );
                SET_CAM_ACTIVE( l_U2205, 0 );
                SET_CAM_PROPAGATE( l_U2205, 0 );
                SET_CAM_ACTIVE( l_U2212, 0 );
                SET_CAM_PROPAGATE( l_U2212, 0 );
                DESTROY_CAM( l_U2208 );
                DESTROY_CAM( l_U2206 );
                DESTROY_CAM( l_U2207 );
                DESTROY_CAM( l_U2211 );
                DESTROY_CAM( l_U2209 );
                DESTROY_CAM( l_U2210 );
                DESTROY_CAM( l_U2205 );
                DESTROY_CAM( l_U2203 );
                DESTROY_CAM( l_U2204 );
                DESTROY_CAM( l_U2212 );
                FLUSH_SCENARIO_BLOCKING_AREAS();
                CLEAR_PED_NON_CREATION_AREA();
                SET_GAME_CAM_HEADING( 0.00000000 );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( -172.34320000, 607.64380000, 15.37880000, 3.00000000, 2 );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( -154.16630000, 601.09040000, 15.37880000, 3.00000000, 3 );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( -159.63970000, 607.43180000, 15.37900000, 3.00000000, 2 );
                ADD_SCENARIO_BLOCKING_AREA( -180.99720000, 593.67250000, 0.00000000, -175.73470000, 603.24540000, 500.00000000 );
                CLEAR_AREA( -178.07230000, 598.78140000, 15.31410000, 4.00000000, 1 );
                ADD_SCENARIO_BLOCKING_AREA( -190.77380000, 561.04240000, 50.00000000, -104.05610000, 617.74620000, 500.00000000 );
                SET_PED_NON_CREATION_AREA( -190.77380000, 561.04240000, 50.00000000, -104.05610000, 617.74620000, 500.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( -169.99190000, 596.71920000, 0.00000000, -163.84200000, 602.22300000, 500.00000000 );
                DISPLAY_RADAR( 1 );
                ADD_BLIP_FOR_COORD( -183.65040000, 578.57460000, 121.77890000, ref l_U2124[0] );
                CHANGE_BLIP_COLOUR( l_U2124[0], 1 );
                ADD_BLIP_FOR_COORD( -180.49910000, 594.79220000, 118.29610000, ref l_U2124[1] );
                CHANGE_BLIP_COLOUR( l_U2124[1], 1 );
                ADD_BLIP_FOR_COORD( -176.88300000, 577.00480000, 125.98130000, ref l_U2124[2] );
                if ((l_U2214) || (l_U2535))
                {
                    sub_17676();
                    SET_CHAR_COORDINATES( sub_3418(), -166.24260000, 601.60400000, 13.70940000 );
                    SET_CHAR_HEADING( sub_3418(), 180.00000000 );
                    if (NOT (IS_CHAR_DEAD( l_U2301 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2301 );
                        SET_CHAR_COORDINATES( l_U2301, -168.09910000, 596.07810000, 13.70930000 );
                        SET_CHAR_HEADING( l_U2301, 223.57290000 );
                    }
                    WAIT( 1000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                if (IS_SCREEN_FADING_OUT())
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_USE_HIGHDOF( 0 );
                END_CAM_COMMANDS( ref l_U2175 );
                sub_3269();
                CHANGE_BLIP_COLOUR( l_U2124[2], 1 );
                PRINT_NOW( "HO_32", 7500, 1 );
                l_U2339[32] = 1;
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_PLAYER_CONTROL( sub_3318(), 1 );
                l_U2535 = 0;
                l_U2536 = 0;
                l_U2392 = 1;
                l_U799 = 14;
            }
        }
        break;
        case 14: break;
    }
    return;
}

int sub_11799()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14027(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_OBJECT_EXIST( l_U2231[iParam0->_fU0] ))
    {
        if (iParam0->_fU112 == 1)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[iParam0->_fU0], 0.75000000, -1.02500000, -0.28000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U2260[iParam0->_fU0], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[iParam0->_fU0], -0.75000000, -1.02500000, -0.28000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U2265[iParam0->_fU0], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            iParam0->_fU112 = 0;
            uVar6 = sub_14240( iParam0->_fU0 );
            if (DOES_OBJECT_EXIST( l_U2236[uVar6] ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], -0.70000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U2244[uVar6], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], 0.70000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U2252[uVar6], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            }
        }
    }
    return;
}

int sub_14240(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return sub_14294( l_U1346[0]._fU4._fU8 );
        break;
        case 1:
        return sub_14294( l_U1346[1]._fU4._fU12 );
        break;
        case 2:
        return sub_14294( l_U1346[2]._fU4._fU16 );
        break;
    }
    return -1;
}

void sub_14294(int iParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = 0; I <= 6; I++ )
    {
        if (l_U1437[I]._fU0 == iParam0)
        {
            Result = I;
        }
    }
    return Result;
}

void sub_15382(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
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
    unknown uVar22;
    unknown uVar23;

    sub_9450( "In NEW_MANAGE_LIFT_DOORS" );
    uVar7 = sub_15425( uParam0 );
    switch (l_U1346[uVar7]._fU0)
    {
        case 0:
        uVar23 = l_U1346[uVar7]._fU4._fU8;
        break;
        case 1:
        uVar23 = l_U1346[uVar7]._fU4._fU12;
        break;
        case 2:
        uVar23 = l_U1346[uVar7]._fU4._fU16;
        break;
    }
    uVar7 = sub_15425( uParam0 );
    uVar6 = sub_14294( uVar23 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.00000000, -1.02500000, -0.28000000, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
    if (iParam1 == 0)
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.75000000, -1.02500000, -0.28000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], -0.75000000, -1.02500000, -0.28000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        if (bParam2)
        {
            PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_LIFT_DOOR_OPEN", uVar20 );
        }
        else
        {
            PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_LIFT_DOOR_OPEN", 65381, 597, 115 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], 0.70000000, 0.00000000, 0.00000000, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], -0.70000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
    }
    else
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.00000000, -1.02500000, -0.28000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.00000000, -1.02500000, -0.28000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], 0.00000000, 0.00000000, 0.00000000, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], 0.00000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
        PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_LIFT_DOOR_CLOSE", uVar20 );
    }
    while (iVar5 != 4)
    {
        WAIT( 0 );
        sub_9450( "Still moving doors..." );
        if (l_U2392)
        {
            if (NOT l_U2537)
            {
                if (iParam1 == 1)
                {
                    if ((sub_16266( uParam0, l_U2244[uVar6] )) > 0.90000000)
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        l_U2537 = 1;
                    }
                }
            }
        }
        if (SLIDE_OBJECT( l_U2252[uVar6], uVar14._fU0, uVar14._fU4, uVar14._fU8, 0.02000000, 0.02000000, 0.00000000, 0 ))
        {
            iVar5++;
        }
        if (SLIDE_OBJECT( l_U2260[uVar7], uVar8._fU0, uVar8._fU4, uVar8._fU8, 0.02000000, 0.02000000, 0.00000000, 0 ))
        {
            iVar5++;
        }
        if (SLIDE_OBJECT( l_U2244[uVar6], uVar17._fU0, uVar17._fU4, uVar17._fU8, 0.02000000, 0.02000000, 0.00000000, 0 ))
        {
            iVar5++;
        }
        if (SLIDE_OBJECT( l_U2265[uVar7], uVar11._fU0, uVar11._fU4, uVar11._fU8, 0.02000000, 0.02000000, 0.00000000, 0 ))
        {
            iVar5++;
        }
        if (iVar5 != 4)
        {
            iVar5 = 0;
        }
        if (l_U2219)
        {
            if (NOT l_U2217)
            {
                if (NOT sub_11799())
                {
                    l_U2217 = 1;
                }
            }
            else if (NOT l_U2218)
            {
                if (sub_11799())
                {
                    CLEAR_PRINTS();
                    if ((NOT IS_SCREEN_FADING_OUT()) || (NOT IS_SCREEN_FADED_OUT()))
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        WAIT( 1000 );
                    }
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U2218 = 1;
                }
            }
            else
            {
                l_U2219 = 0;
                sub_14027( ref l_U1346[uVar7] );
                l_U1293 = 2;
                iVar5 = 4;
            }
        }
        if (iParam1 == 1)
        {
            if (l_U2538)
            {
                sub_9450( "OpenOrCLose is CLOSE" );
                if (NOT l_U2536)
                {
                    sub_9450( "CAN_SKIP_LIFT_CUT_FROM_START is FALSE" );
                    if (NOT sub_11799())
                    {
                        l_U2536 = 1;
                    }
                }
                else
                {
                    sub_9450( "CAN_SKIP_LIFT_CUT_FROM_START is TRUE" );
                    if (NOT l_U2535)
                    {
                        if (sub_11799())
                        {
                            CLEAR_PRINTS();
                            DO_SCREEN_FADE_OUT( 500 );
                            WAIT( 1000 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            l_U2535 = 1;
                        }
                    }
                    else
                    {
                        sub_9450( "Reached Else NOT WAS_LIFT_CUT_SKIPPED_FROM_START" );
                        sub_17266( ref l_U1346[uVar7] );
                        iVar5 = 4;
                    }
                }
            }
            else
            {
                sub_9450( "bAllowSkipDoorsClose is False" );
            }
        }
    }
    if (iParam1 == 0)
    {
        l_U1346[uVar7]._fU112 = 0;
    }
    else
    {
        l_U1346[uVar7]._fU112 = 1;
        l_U2537 = 0;
    }
    return;
}

void sub_15425(int iParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = 0; I <= 2; I++ )
    {
        if (l_U1346[I]._fU0 == iParam0)
        {
            Result = I;
        }
    }
    return Result;
}

void sub_16266(unknown uParam0, unknown uParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    float fVar15;
    unknown uVar16;

    uVar16 = sub_15425( uParam0 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar16], 0.00000000, 0.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    sub_16346( uVar8, "vClosed..." );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar16], -0.70000000, 0.00000000, 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
    sub_16346( uVar11, "vOpen..." );
    fVar14 = uVar8._fU4 - uVar11._fU4;
    GET_OBJECT_COORDINATES( uParam1, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    sub_16346( uVar5, "vCurrent..." );
    fVar15 = uVar5._fU4 - uVar11._fU4;
    Result = fVar15 / fVar14;
    if (Result > 1.00000000)
    {
        ;
    }
    return Result;
}

void sub_16346(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_17266(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_OBJECT_EXIST( l_U2231[iParam0->_fU0] ))
    {
        if (iParam0->_fU112 == 0)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[iParam0->_fU0], 0.00000000, -1.02500000, -0.28000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U2260[iParam0->_fU0], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U2265[iParam0->_fU0], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            iParam0->_fU112 = 1;
            uVar6 = sub_14240( iParam0->_fU0 );
            if (DOES_OBJECT_EXIST( l_U2236[uVar6] ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[uVar6], 0.00000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U2244[uVar6], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U2252[uVar6], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
            }
        }
    }
    return;
}

void sub_17676()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U2231[l_U1346[I]._fU0] ))
        {
            if (l_U1346[I]._fU112 == 0)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[l_U1346[I]._fU0], 0.00000000, -1.02500000, -0.28000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                SET_OBJECT_COORDINATES( l_U2260[l_U1346[I]._fU0], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                SET_OBJECT_COORDINATES( l_U2265[l_U1346[I]._fU0], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                l_U1346[I]._fU112 = 1;
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U2236[l_U1515._fU8] ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[l_U1515._fU8], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2244[l_U1515._fU8], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2252[l_U1515._fU8], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U2236[l_U1515._fU12] ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[l_U1515._fU12], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2244[l_U1515._fU12], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2252[l_U1515._fU12], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U2236[l_U1520._fU8] ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[l_U1520._fU8], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2244[l_U1520._fU8], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2252[l_U1520._fU8], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U2236[l_U1520._fU12] ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[l_U1520._fU12], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2244[l_U1520._fU12], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2252[l_U1520._fU12], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U2236[l_U1525._fU16] ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[l_U1525._fU16], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2244[l_U1525._fU16], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        SET_OBJECT_COORDINATES( l_U2252[l_U1525._fU16], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    return;
}

void sub_20048()
{
    switch (l_U2681)
    {
        case 0:
        REQUEST_MODEL( l_U1285 );
        while (NOT (HAS_MODEL_LOADED( l_U1285 )))
        {
            WAIT( 0 );
        }
        l_U2670 = 0;
        l_U2671 = 0;
        l_U2380 = 1;
        LOAD_SCENE( -166.95640000, 594.43680000, 131.53900000 );
        SET_CHAR_COORDINATES( sub_3418(), -166.95640000, 594.43680000, 131.53900000 );
        sub_20231( "RB6_HASID", ref l_U2573, 6, 1 );
        l_U2681++;
        break;
        case 1:
        if (IS_KEYBOARD_KEY_PRESSED( 4 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
            {
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2104[2], "ON_FIRE", "PAIN_VOICE", 1, 1, 0 );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 2 ))
        {
            CLEAR_AREA( -176.88300000, 577.00480000, 125.98130000, 50.00000000, 1 );
            CREATE_CHAR( 26, l_U1285, -176.88300000, 577.00480000, 125.98130000, ref l_U2104[2], 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2104[2], 24 );
            SET_CHAR_COMPONENT_VARIATION( l_U2104[2], 1, 1, 0 );
            SET_CHAR_PROP_INDEX( l_U2104[2], 0, 0 );
            SET_CHAR_HEADING( l_U2104[2], 0.00000000 );
            SET_CHAR_HEALTH( l_U2104[2], 2000 );
            SET_CHAR_DECISION_MAKER( l_U2104[2], l_U2168 );
            sub_21479( 14 );
            l_U2681 = 2;
        }
        break;
        case 2:
        if (IS_EXPLOSION_IN_AREA( -1, -185.46970000, 577.50300000, 125.00000000, -175.74670000, 587.29420000, 150.00000000 ))
        {
            if (DOES_CHAR_EXIST( l_U2104[2] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
                {
                    if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2104[2], sub_3418(), 0 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -177.35420000, 594.56390000, 126.73830000, 9.00000000, 16.00000000, 2.00000000, 0 )) || (sub_28840( sub_3418() )))
                        {
                            if (IS_EXPLOSION_IN_AREA( -1, -185.46970000, 577.50300000, 125.00000000, -175.74670000, 587.29420000, 150.00000000 ))
                            {
                                WAIT( 500 );
                                l_U2681++;
                            }
                        }
                        else
                        {
                            SCRIPT_ASSERT( "Not located" );
                        }
                    }
                }
            }
        }
        break;
        case 3:
        sub_29001();
        if (IS_KEYBOARD_KEY_PRESSED( 3 ))
        {
            l_U2559 = 0;
            l_U2566 = 0;
            l_U2567 = 0;
            l_U2565 = 0;
            l_U2563 = 0;
            l_U2562 = 0;
            l_U2681 = 1;
        }
        break;
    }
    return;
}

void sub_20231(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20254( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_20254(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20308( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20308(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20330( iParam1 )))
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
    sub_21022( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_20330(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_20407( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_20407( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_20407( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_20407(unknown uParam0)
{
    return;
}

void sub_21022(int iParam0, int iParam1)
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

void sub_21479(unknown uParam0)
{
    int I;

    switch (uParam0)
    {
        case 0: break;
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 14:
        if (NOT (DOES_CHAR_EXIST( l_U2522 )))
        {
            CREATE_CHAR( 26, l_U1285, -169.57970000, 590.41690000, 121.98280000, ref l_U2522, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2522, 24 );
            SET_CHAR_COMPONENT_VARIATION( l_U2522, 1, 1, 0 );
            SET_CHAR_PROOFS( l_U2522, 1, 1, 1, 1, 1 );
            SET_CHAR_DECISION_MAKER( l_U2522, l_U2168 );
            STOP_PED_SPEAKING( l_U2522, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U2522, 1 );
            SET_CHAR_VISIBLE( l_U2522, 0 );
        }
        break;
        case 9:
        if (NOT (HAS_MODEL_LOADED( l_U1282 )))
        {
            REQUEST_MODEL( l_U1282 );
            while (NOT (HAS_MODEL_LOADED( l_U1282 )))
            {
                WAIT( 0 );
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[15] )))
        {
            l_U1657[15] = sub_21943( l_U1282, 23, -178.56460000, 595.92380000, 114.71330000, 114.71330000, 7, "MloRoom_ritzF3", 1 );
            l_U800[15]._fU0 = l_U1657[15];
            l_U800[15]._fU40 = 1;
            l_U800[15]._fU28 = {-178.56460000, 595.92380000, 114.71330000};
            l_U800[15]._fU48 = 1;
            SET_CURRENT_CHAR_WEAPON( l_U1657[15], 0, 0 );
            sub_4878( 3, l_U1657[15], "HOTEL_GUARD_1", 0 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[0] )))
        {
            l_U1657[0] = sub_21943( l_U1282, 23, -152.07420000, 596.61110000, 113.71330000, 78.06860000, 13, "MloRoom_ritzF3", 1 );
            l_U800[0]._fU0 = l_U1657[0];
            l_U800[0]._fU40 = 4;
            l_U800[0]._fU28 = {-155.52460000, 595.42720000, 114.71330000};
            l_U800[0]._fU48 = 1;
            SET_CURRENT_CHAR_WEAPON( l_U1657[0], 0, 0 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[10] )))
        {
            l_U1657[10] = sub_21943( l_U1283, 23, -152.03390000, 597.98550000, 113.71330000, 145.40340000, 13, "MloRoom_ritzF3", 1 );
            l_U800[10]._fU0 = l_U1657[10];
            l_U800[10]._fU40 = 3;
            l_U800[10]._fU28 = {-156.89580000, 598.71730000, 114.71330000};
            SET_CURRENT_CHAR_WEAPON( l_U1657[10], 0, 0 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[11] )))
        {
            l_U1657[11] = sub_21943( l_U1284, 23, -165.93060000, 596.78680000, 113.71330000, 23.54380000, 12, "MloRoom_ritzF3", 1 );
            l_U800[11]._fU0 = l_U1657[11];
            l_U800[11]._fU40 = 2;
            l_U800[11]._fU28 = {-168.04740000, 596.39550000, 114.71330000};
            l_U800[11]._fU48 = 1;
            SET_CURRENT_CHAR_WEAPON( l_U1657[11], 0, 0 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[13] )))
        {
            l_U1657[13] = sub_21943( l_U1282, 23, -166.04430000, 597.93440000, 113.71330000, 218.73260000, 13, "MloRoom_ritzF3", 1 );
            l_U800[13]._fU0 = l_U1657[13];
            l_U800[13]._fU40 = 1;
            l_U800[13]._fU28 = {-166.04430000, 597.93440000, 113.71330000};
            l_U800[13]._fU48 = 1;
            SET_CURRENT_CHAR_WEAPON( l_U1657[13], 0, 0 );
        }
        if (NOT l_U2384)
        {
            ;
        }
        if (NOT l_U2384)
        {
            if (NOT (DOES_CHAR_EXIST( l_U1657[16] )))
            {
                l_U1657[16] = sub_21943( l_U1282, 23, -150.30540000, 587.59420000, 114.71330000, 10.16270000, 12, "MloRoom_RitzF3", 1 );
                l_U800[16]._fU0 = l_U1657[16];
                l_U800[16]._fU40 = 0;
                l_U800[16]._fU28 = {-150.98800000, 589.02250000, 114.71330000};
                TASK_DUCK( l_U1657[16], -2 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[17] )))
            {
                l_U1657[17] = sub_21943( l_U1282, 23, -148.01780000, 587.37990000, 114.71330000, 165.17800000, 13, "MloRoom_RitzF3", 1 );
                l_U800[17]._fU0 = l_U1657[17];
                l_U800[17]._fU40 = 6;
                l_U800[17]._fU28 = {-149.94890000, 582.77140000, 116.71220000};
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U800[17]._fU0, 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[27] )))
            {
                l_U1657[27] = sub_21943( l_U1282, 23, -150.49370000, 587.46250000, 114.71330000, 0.00000000, 12, "MloRoom_RitzF3", 1 );
                l_U800[27]._fU0 = l_U1657[27];
                l_U800[27]._fU40 = 12;
                l_U800[27]._fU28 = {-150.49370000, 587.46250000, 114.71330000};
                l_U1750[27] = 1;
                l_U1781[27]._fU0 = 0;
                l_U1781[27]._fU28 = {-151.50860000, 583.94920000, 113.21640000};
                l_U1781[27]._fU24 = 12000;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U1657[18] )))
        {
            l_U1657[18] = sub_21943( l_U1282, 23, -157.75850000, 592.25250000, 118.71240000, 290.40040000, 12, "MloRoom_RitzPEN", 1 );
            sub_4878( 8, l_U1657[18], "GUARD_M", 0 );
        }
        break;
        case 8: break;
        case 10:
        if (NOT l_U2388)
        {
            if ((((NOT (HAS_MODEL_LOADED( l_U1290 ))) || (NOT (HAS_MODEL_LOADED( l_U1288 )))) || (NOT (HAS_MODEL_LOADED( l_U1282 )))) || (NOT (HAS_MODEL_LOADED( l_U1285 ))))
            {
                REQUEST_MODEL( l_U1290 );
                REQUEST_MODEL( l_U1288 );
                REQUEST_MODEL( l_U1282 );
                REQUEST_MODEL( l_U1285 );
                while ((((NOT (HAS_MODEL_LOADED( l_U1290 ))) || (NOT (HAS_MODEL_LOADED( l_U1288 )))) || (NOT (HAS_MODEL_LOADED( l_U1282 )))) || (NOT (HAS_MODEL_LOADED( l_U1285 ))))
                {
                    WAIT( 0 );
                }
            }
            ADD_COVER_BLOCKING_AREA( -174.15050000, 590.92840000, 118.00000000, -172.38170000, 593.52630000, 122.28400000, 1, 1, 1 );
            ADD_COVER_POINT( -172.87000000, 592.65000000, 118.28000000, 1, 270.00000000, 3, 0, ref l_U2297 );
            ADD_COVER_BLOCKING_AREA( -172.85770000, 598.07570000, 118.00000000, -170.42670000, 601.02210000, 122.05300000, 1, 1, 1 );
            ADD_COVER_POINT( -172.39000000, 599.87000000, 118.03000000, 0, 270.00000000, 3, 0, ref l_U2298 );
            if (NOT (DOES_CHAR_EXIST( l_U1657[2] )))
            {
                ;
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[2] )))
            {
                l_U1657[2] = sub_21943( l_U1282, 23, -180.58300000, 585.12990000, 117.71170000, 338.91800000, 13, "MloRoom2_RitzPEN", 1 );
                l_U800[2]._fU0 = l_U1657[2];
                l_U800[2]._fU40 = 16;
                l_U800[2]._fU28 = {-179.66320000, 589.27540000, 118.29400000};
                l_U800[2]._fU48 = 1;
            }
            if (NOT l_U2384)
            {
                CREATE_CHAR( 26, l_U1283, -172.47210000, 599.76340000, 119.03420000, ref l_U1657[3], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[3], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U1657[3], 270.00000000 );
                sub_4878( 4, l_U1657[3], "HOTEL_GUARD_2", 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[3], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[3], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[3], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[6] )))
            {
                CREATE_CHAR( 26, l_U1284, -173.29780000, 592.84090000, 119.28490000, ref l_U1657[6], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[6], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U1657[6], 270.00000000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[6], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[6], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[6], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[7] )))
            {
                CREATE_CHAR( 26, l_U1282, -181.47370000, 597.69120000, 118.28780000, ref l_U1657[7], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[7], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U1657[7], 208.11110000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[7], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[7], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[7], 1 );
                GIVE_WEAPON_TO_CHAR( l_U1657[7], 13, 3000, 0 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[4] )))
            {
                CREATE_CHAR( 26, l_U1283, -179.74020000, 597.75880000, 118.28560000, ref l_U1657[4], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[4], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U1657[4], 171.60740000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[4], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[4], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[4], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[5] )))
            {
                CREATE_CHAR( 26, l_U1284, -176.33310000, 590.85220000, 119.29000000, ref l_U1657[5], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[5], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U1657[5], 348.11180000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[5], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[5], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[5], 1 );
                GIVE_WEAPON_TO_CHAR( l_U1657[5], 13, 3000, 0 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[8] )))
            {
                CREATE_CHAR( 26, l_U1282, -183.27780000, 581.44970000, 125.84590000, ref l_U1657[8], 1 );
                SET_CHAR_HEADING( l_U1657[8], 275.44290000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[8], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[8], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[8], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[14] )))
            {
                CREATE_CHAR( 26, l_U1283, -181.69940000, 581.51470000, 125.84590000, ref l_U1657[14], 1 );
                SET_CHAR_HEADING( l_U1657[14], 119.29390000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1657[14], 23 );
                SET_CHAR_RELATIONSHIP( l_U1657[14], 1, 23 );
                SET_CHAR_AS_ENEMY( l_U1657[14], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[9] )))
            {
                if (NOT l_U2383)
                {
                    CREATE_CHAR( 26, l_U1283, -178.20950000, 591.47440000, 125.76860000, ref l_U1657[9], 1 );
                    SET_CHAR_HEADING( l_U1657[9], 101.08450000 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1657[9], 23 );
                    SET_CHAR_RELATIONSHIP( l_U1657[9], 1, 23 );
                    l_U1750[9] = 1;
                    l_U1781[9]._fU0 = 2;
                    l_U1781[9]._fU4 = {-183.58190000, 591.21890000, 121.77910000};
                    l_U1781[9]._fU28 = {0.00000000, 0.00000000, 0.00000000};
                    l_U1781[9]._fU24 = 12000;
                    SET_CHAR_AS_ENEMY( l_U1657[9], 1 );
                }
                else
                {
                    CREATE_CHAR( 26, l_U1283, -184.59570000, 591.39260000, 122.77060000, ref l_U1657[9], 1 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U1657[9], "MloRoom_RitzPEN" );
                    SET_CHAR_HEADING( l_U1657[9], 268.19300000 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1657[9], 23 );
                    SET_CHAR_RELATIONSHIP( l_U1657[9], 1, 23 );
                    SET_CHAR_AS_ENEMY( l_U1657[9], 1 );
                }
                GIVE_WEAPON_TO_CHAR( l_U1657[9], 7, 2000, 0 );
            }
            if ((NOT (DOES_CHAR_EXIST( l_U2104[0] ))) AND (NOT l_U2120[0]))
            {
                CREATE_CHAR( 26, l_U1290, -183.65040000, 578.57460000, 121.77890000, ref l_U2104[0], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2104[0], 23 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2104[0], "MloRoom3_RitzPEN" );
                GIVE_WEAPON_TO_CHAR( l_U2104[0], 7, 2000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U2104[0], 0, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U2104[0], 1 );
                SET_CHAR_HEADING( l_U2104[0], 0.00000000 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2104[0], "Plyr_Sit_2_Lie_LHS", "missray6", 4.00000000, 0, 0, 0, 1, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U2104[0], 1 );
                sub_4878( 5, l_U2104[0], "ISAAC", 0 );
                SET_CHAR_AS_ENEMY( l_U2104[0], 1 );
            }
            if ((NOT (DOES_CHAR_EXIST( l_U2104[1] ))) AND (NOT l_U2120[1]))
            {
                CREATE_CHAR( 26, l_U1285, -180.49910000, 594.79220000, 118.29610000, ref l_U2104[1], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2104[1], 23 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2104[1], "MloRoom_RitzPEN" );
                SET_CHAR_HEADING( l_U2104[1], 6.80070000 );
                SET_CHAR_COMPONENT_VARIATION( l_U2104[1], 0, 0, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U2104[1], 1 );
                sub_4878( 6, l_U2104[1], "HASID", 0 );
                SET_CHAR_PROOFS( l_U2104[1], 1, 1, 1, 1, 1 );
                SET_CHAR_AS_ENEMY( l_U2104[1], 1 );
            }
            if ((NOT (DOES_CHAR_EXIST( l_U2104[2] ))) AND (NOT l_U2120[2]))
            {
                CREATE_CHAR( 26, l_U1285, -176.88300000, 577.00480000, 125.98130000, ref l_U2104[2], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2104[2], 23 );
                SET_PED_DIES_WHEN_INJURED( l_U2104[2], 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U2104[2], 1, 1, 0 );
                SET_CHAR_PROP_INDEX( l_U2104[2], 0, 0 );
                SET_CHAR_HEADING( l_U2104[2], 19.25380000 );
                l_U2128[2] = 1;
                l_U2132[2]._fU0 = 0;
                l_U2132[2]._fU28 = {-177.02400000, 572.66820000, 105.53320000};
                l_U2132[2]._fU24 = 12000;
                SET_CHAR_AS_ENEMY( l_U2104[2], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U2320[0] )))
            {
                CREATE_CHAR( 26, l_U1288, -183.97380000, 577.88980000, 121.77880000, ref l_U2320[0], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2320[0], 25 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2320[0], "MloRoom3_RitzPEN" );
                SET_CHAR_HEADING( l_U2320[0], 341.07460000 );
                sub_4878( 3, l_U1657[15], "HOTEL_GUARD_1", 0 );
                sub_4878( 7, l_U2320[0], "SCREAMER_F", 0 );
            }
            for ( I = 2; I <= 29; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1657[I] )))
                {
                    if (I == 3)
                    {
                        GIVE_WEAPON_TO_CHAR( l_U1657[I], 11, 3000, 0 );
                    }
                    else if ((I == 6) || (I == 4))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U1657[I], 13, 3000, 0 );
                    }
                    else
                    {
                        GIVE_WEAPON_TO_CHAR( l_U1657[I], 12, 3000, 0 );
                    }
                    SET_CURRENT_CHAR_WEAPON( l_U1657[I], 0, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1657[I], l_U2168 );
                    SET_COMBAT_DECISION_MAKER( l_U1657[I], l_U2170 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U1657[3] )))
            {
                ;
            }
            if (NOT (DOES_CHAR_EXIST( l_U1657[19] )))
            {
                l_U1657[19] = sub_21943( l_U1282, 23, -183.51200000, 588.27210000, 119.50780000, 270.00000000, 13, "MloRoom2_RitzPEN", 1 );
                l_U800[19]._fU0 = l_U1657[19];
                l_U800[19]._fU40 = 11;
                l_U800[19]._fU28 = {-183.51200000, 588.27210000, 119.50780000};
                l_U800[19]._fU48 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U1657[8] )))
            {
                SET_CHAR_DECISION_MAKER( l_U1657[8], l_U2168 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1657[6] )))
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
            {
                ;
            }
            CLEAR_SEQUENCE_TASK( l_U1688[6] );
            if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
            {
                GIVE_WEAPON_TO_CHAR( l_U2104[0], 12, 3000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U2104[0], 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U2104[0], l_U2168 );
                SET_COMBAT_DECISION_MAKER( l_U2104[0], l_U2170 );
            }
            if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
            {
                GIVE_WEAPON_TO_CHAR( l_U2104[1], 12, 3000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U2104[1], 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U2104[1], l_U2168 );
                SET_COMBAT_DECISION_MAKER( l_U2104[1], l_U2170 );
            }
            if (NOT (IS_CHAR_INJURED( l_U2104[2] )))
            {
                GIVE_WEAPON_TO_CHAR( l_U2104[2], 12, 3000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U2104[2], 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U2104[2], l_U2168 );
                SET_COMBAT_DECISION_MAKER( l_U2104[2], l_U2170 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2320[0] )))
            {
                SET_CHAR_DECISION_MAKER( l_U2320[0], l_U2168 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2320[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U2320[1], l_U2168 );
            }
            l_U2388 = 1;
        }
        break;
        case 12:
        l_U1657[26] = sub_21943( l_U1282, 23, -150.79750000, 591.89340000, 123.50760000, 65.54630000, 12, "MloRoom_RitzPEN", 0 );
        l_U800[26]._fU0 = l_U1657[26];
        l_U800[26]._fU40 = 14;
        l_U800[26]._fU28 = {-152.79330000, 594.61850000, 123.50760000};
        l_U1657[20] = sub_21943( l_U1283, 23, -150.31240000, 589.66130000, 123.50760000, 59.92290000, 12, "MloRoom_RitzPEN", 0 );
        l_U800[20]._fU0 = l_U1657[20];
        l_U800[20]._fU40 = 14;
        l_U800[20]._fU28 = {-161.93080000, 596.66200000, 122.88290000};
        l_U1657[21] = sub_21943( l_U1284, 23, -149.03340000, 596.75900000, 123.50760000, 140.68920000, 12, "MloRoom_RitzPEN", 0 );
        l_U800[21]._fU0 = l_U1657[21];
        l_U800[21]._fU40 = 14;
        l_U800[21]._fU28 = {-158.15690000, 587.87520000, 123.50760000};
        break;
        case 13:
        if (NOT (DOES_CHAR_EXIST( l_U1657[28] )))
        {
            l_U1657[28] = sub_21943( l_U1284, 23, -171.87040000, 597.22150000, 123.28070000, 175.33780000, 12, "MloRoom_RitzPEN", 0 );
            l_U800[28]._fU0 = l_U1657[28];
            l_U800[28]._fU40 = 13;
            l_U800[28]._fU28 = {-171.94100000, 592.02220000, 125.78280000};
            l_U1750[28] = 1;
            l_U1781[28]._fU0 = 2;
            l_U1781[28]._fU4 = {-171.69700000, 597.13450000, 122.27810000};
            l_U1781[28]._fU28 = {0.00000000, 0.00000000, 0.00000000};
            l_U1781[28]._fU24 = 12000;
        }
        break;
        case 11:
        l_U1657[22] = sub_21943( l_U1282, 23, -157.69530000, 593.00440000, 118.71250000, 140.68920000, 12, "MloRoom_RitzPEN", 1 );
        l_U800[22]._fU0 = l_U1657[22];
        l_U800[22]._fU40 = 9;
        l_U800[22]._fU28 = {-163.12830000, 599.02730000, 118.71230000};
        l_U1657[23] = sub_21943( l_U1283, 23, -156.98370000, 591.02250000, 118.71240000, 140.68920000, 12, "MloRoom_RitzPEN", 1 );
        l_U800[23]._fU0 = l_U1657[23];
        l_U800[23]._fU40 = 9;
        l_U800[23]._fU28 = {-163.28780000, 591.67860000, 118.71350000};
        l_U1657[24] = sub_21943( l_U1284, 23, -157.12310000, 594.38690000, 118.71240000, 140.68920000, 12, "MloRoom_RitzPEN", 1 );
        l_U800[24]._fU0 = l_U1657[24];
        l_U800[24]._fU40 = 9;
        l_U800[24]._fU28 = {-163.28830000, 593.65780000, 118.71230000};
        l_U1657[25] = sub_21943( l_U1282, 23, -170.37720000, 591.69100000, 119.03440000, 140.68920000, 12, "MloRoom_RitzPEN", 1 );
        l_U800[25]._fU0 = l_U1657[25];
        l_U800[25]._fU40 = 10;
        l_U800[25]._fU28 = {-178.81060000, 598.32060000, 119.28450000};
        break;
    }
    return;
}

void sub_21943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U2168 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    if (bParam8)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam7 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( Result, 1 );
    }
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    SET_CHAR_RELATIONSHIP( Result, 1, 26 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    SET_AMBIENT_VOICE_NAME( Result, sub_22111() );
    return Result;
}

void sub_22111()
{
    unknown uVar2;
    string Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = "M_Y_GMAF_HI_01_FULL_01";
        break;
        case 1:
        Result = "M_Y_GMAF_HI_01_GANG_01";
        break;
        case 2:
        Result = "M_Y_GMAF_HI_02_FULL_01";
        break;
        case 3:
        Result = "M_Y_GMAF_HI_02_GANG_01";
        break;
    }
    return Result;
}

int sub_28840(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
        if (iVar3 == nil)
        {
            return 1;
        }
    }
    return 0;
}

void sub_29001()
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
    unknown uVar16;

    sub_29036( l_U2559, "over_wall_prog...." );
    if (NOT l_U2566)
    {
        if (NOT sub_11799())
        {
            l_U2566 = 1;
        }
    }
    else if ((((l_U2559 > 0) AND (l_U2559 < 5)) AND (NOT l_U2567)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_11799())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            WAIT( 1000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2567 = 1;
            l_U2559 = 4;
        }
    }
    switch (l_U2559)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U2543 );
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_3318(), 0 );
        l_U2163 = 1;
        SET_USE_HIGHDOF( 1 );
        if (DOES_BLIP_EXIST( l_U2108[2] ))
        {
            REMOVE_BLIP( l_U2108[2] );
        }
        CREATE_CAM( 14, ref l_U2176[0] );
        CREATE_CAM( 14, ref l_U2176[1] );
        CREATE_CAM( 14, ref l_U2176[2] );
        CREATE_CAM( 3, ref l_U2176[3] );
        CREATE_CAM( 14, ref l_U2176[4] );
        CREATE_CAM( 14, ref l_U2176[5] );
        CREATE_CAM( 3, ref l_U2176[6] );
        CREATE_CAM( 14, ref l_U2176[7] );
        CREATE_CAM( 14, ref l_U2176[8] );
        CREATE_CAM( 3, ref l_U2176[9] );
        SET_CAM_POS( l_U2176[0], -178.10790000, 583.17000000, 125.98490000 );
        SET_CAM_ROT( l_U2176[0], 8.14788200, 0.00000000, 122.31590000 );
        SET_CAM_ACTIVE( l_U2176[0], 0 );
        SET_CAM_PROPAGATE( l_U2176[0], 0 );
        SET_CAM_POS( l_U2176[1], -174.93420000, 581.68300000, 127.14630000 );
        SET_CAM_ROT( l_U2176[1], 3.71618700, -0.00000000, 130.72450000 );
        SET_CAM_FOV( l_U2176[1], 46.90002000 );
        SET_CAM_ACTIVE( l_U2176[1], 1 );
        SET_CAM_PROPAGATE( l_U2176[1], 1 );
        SET_CAM_NEAR_DOF( l_U2176[1], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2176[1], 11.00000000 );
        SET_CAM_POS( l_U2176[2], -174.93420000, 581.68300000, 127.14630000 );
        SET_CAM_ROT( l_U2176[2], 3.71618700, 0.00000000, 143.62970000 );
        SET_CAM_FOV( l_U2176[2], 46.90002000 );
        SET_CAM_ACTIVE( l_U2176[2], 1 );
        SET_CAM_PROPAGATE( l_U2176[2], 0 );
        SET_CAM_NEAR_DOF( l_U2176[2], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2176[2], 11.00000000 );
        SET_CAM_ACTIVE( l_U2176[3], 0 );
        SET_CAM_PROPAGATE( l_U2176[3], 0 );
        SET_CAM_ACTIVE( l_U2176[6], 0 );
        SET_CAM_PROPAGATE( l_U2176[6], 0 );
        SET_CAM_POS( l_U2176[7], -216.97960000, 565.42360000, 13.96083000 );
        SET_CAM_ROT( l_U2176[7], 49.61414000, -0.00000000, -86.20848000 );
        SET_CAM_FOV( l_U2176[7], 46.30002000 );
        SET_CAM_ACTIVE( l_U2176[7], 0 );
        SET_CAM_PROPAGATE( l_U2176[7], 0 );
        SET_CAM_NEAR_DOF( l_U2176[7], 10.00000000 );
        SET_CAM_FAR_DOF( l_U2176[7], 60.00000000 );
        SET_CAM_POS( l_U2176[8], -216.97960000, 565.42360000, 13.96083000 );
        SET_CAM_ROT( l_U2176[8], 8.93413000, -0.00000000, -86.20848000 );
        SET_CAM_FOV( l_U2176[8], 46.30002000 );
        SET_CAM_ACTIVE( l_U2176[8], 0 );
        SET_CAM_PROPAGATE( l_U2176[8], 0 );
        SET_CAM_ACTIVE( l_U2176[9], 0 );
        SET_CAM_PROPAGATE( l_U2176[9], 0 );
        if (DOES_CHAR_EXIST( l_U2104[2] ))
        {
            DELETE_CHAR( ref l_U2104[2] );
        }
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            SET_CHAR_VISIBLE( l_U2522, 1 );
            SET_CHAR_COORDINATES( l_U2522, -180.06280000, 576.35180000, 125.97970000 );
            SET_CHAR_HEADING( l_U2522, 0.00000000 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2522, 24 );
            SET_CHAR_COMPONENT_VARIATION( l_U2522, 1, 1, 0 );
            SET_CHAR_PROOFS( l_U2522, 0, 0, 1, 0, 0 );
            STOP_PED_SPEAKING( l_U2522, 0 );
            START_CHAR_FIRE( l_U2522 );
            SET_CHAR_PROOFS( l_U2522, 0, 1, 1, 1, 0 );
        }
        SET_CAM_POS( l_U2176[5], -186.68410000, 558.65260000, 92.81750000 );
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            POINT_CAM_AT_PED( l_U2176[5], l_U2522 );
        }
        SET_CAM_FOV( l_U2176[5], 55.00000000 );
        SET_CAM_ACTIVE( l_U2176[5], 0 );
        SET_CAM_PROPAGATE( l_U2176[5], 0 );
        SET_CAM_POS( l_U2176[4], -186.68410000, 558.65260000, 92.81750000 );
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            POINT_CAM_AT_PED( l_U2176[4], l_U2522 );
        }
        SET_CAM_FOV( l_U2176[4], 55.00000000 );
        SET_CAM_ACTIVE( l_U2176[4], 0 );
        SET_CAM_PROPAGATE( l_U2176[4], 0 );
        SET_CAM_NEAR_DOF( l_U2176[4], 10.00000000 );
        SET_CAM_FAR_DOF( l_U2176[4], 40.00000000 );
        SET_CAM_POS( l_U2176[7], -216.97960000, 565.42360000, 13.96083000 );
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            POINT_CAM_AT_PED( l_U2176[7], l_U2522 );
        }
        SET_CAM_FOV( l_U2176[7], 46.30002000 );
        SET_CAM_ACTIVE( l_U2176[7], 0 );
        SET_CAM_PROPAGATE( l_U2176[7], 0 );
        GET_GAME_TIMER( ref l_U2544 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U2559 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2545 );
        if ((l_U2545 - l_U2544) > 0)
        {
            SET_CAM_ACTIVE( l_U2176[1], 0 );
            SET_CAM_PROPAGATE( l_U2176[1], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2176[3], l_U2176[1], l_U2176[2], 7000, 0 );
            SET_CAM_ACTIVE( l_U2176[3], 1 );
            SET_CAM_PROPAGATE( l_U2176[3], 1 );
            uVar5 = {sub_31029( l_U2522, -180.06280000, 588.00480000, 125.98130000, 1 )};
            uVar5._fU8 = 0.00000000;
            uVar2 = {uVar5};
            sub_31216( l_U2522, uVar5, uVar2, 15000, 1078774989, 1084227584, 1094189056, 1056964608, 1073741824, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2522 )))
            {
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2522, "ON_FIRE", "PAIN_VOICE", 1, 1, 0 );
            }
            l_U2559 = 2;
            GET_GAME_TIMER( ref l_U2544 );
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2545 );
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            if ((l_U2545 - l_U2544) <= 10000)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U2522, -178.69030000, 574.14670000, 124.29100000, 8.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    SET_CAM_ACTIVE( l_U2176[3], 0 );
                    SET_CAM_PROPAGATE( l_U2176[3], 0 );
                    SET_CAM_ACTIVE( l_U2176[2], 0 );
                    SET_CAM_ACTIVE( l_U2176[4], 1 );
                    SET_CAM_PROPAGATE( l_U2176[4], 1 );
                    CREATE_NM_MESSAGE( 1, 246 );
                    SET_NM_MESSAGE_BOOL( 266, 1 );
                    SEND_NM_MESSAGE( l_U2522 );
                    GET_GAME_TIMER( ref l_U2544 );
                    SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2522, "HIGH_FALL", "PAIN_VOICE", 1, 1, 0 );
                    GET_GAME_TIMER( ref l_U2568 );
                    l_U2559 = 3;
                }
            }
            else
            {
                l_U2562 = 1;
                l_U2559 = 4;
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U2545 );
        if (NOT (IS_CHAR_DEAD( l_U2522 )))
        {
            if ((l_U2545 - l_U2544) <= 10000)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U2522, -181.85060000, 566.75100000, 51.40811000, 30.00000000, 30.00000000, 4.00000000, 0 ))
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2522, "HIGH_FALL", "PAIN_VOICE", 1, 1, 0 );
                    SET_CAM_ACTIVE( l_U2176[4], 0 );
                    SET_CAM_PROPAGATE( l_U2176[4], 0 );
                    SET_CAM_ACTIVE( l_U2176[7], 1 );
                    SET_CAM_PROPAGATE( l_U2176[7], 1 );
                    GET_GAME_TIMER( ref l_U2544 );
                    l_U2559 = 4;
                }
                else if (NOT l_U2565)
                {
                    GET_GAME_TIMER( ref l_U2569 );
                    if ((l_U2569 - l_U2568) > 1500)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2522, "HIGH_FALL", "PAIN_VOICE", 1, 1, 0 );
                        l_U2565 = 1;
                    }
                }
            }
            else
            {
                l_U2559 = 4;
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U2545 );
        if (((l_U2545 - l_U2544) > 5000) || (l_U2567))
        {
            if (NOT l_U2562)
            {
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                LOAD_SCENE( -176.18010000, 591.46460000, 125.76800000 );
                GET_INTERIOR_AT_COORDS( -183.60840000, 591.54600000, 121.77930000, ref uVar15 );
                uVar14 = GET_HASH_KEY( "MloRoom_RitzPEN" );
                LOAD_SCENE_FOR_ROOM_BY_KEY( uVar15, uVar14 );
            }
            SET_CAM_ACTIVE( l_U2176[0], 0 );
            SET_CAM_PROPAGATE( l_U2176[0], 0 );
            SET_CAM_ACTIVE( l_U2176[1], 0 );
            SET_CAM_PROPAGATE( l_U2176[1], 0 );
            SET_CAM_ACTIVE( l_U2176[2], 0 );
            SET_CAM_PROPAGATE( l_U2176[2], 0 );
            SET_CAM_ACTIVE( l_U2176[3], 0 );
            SET_CAM_PROPAGATE( l_U2176[3], 0 );
            SET_CAM_ACTIVE( l_U2176[4], 0 );
            SET_CAM_PROPAGATE( l_U2176[4], 0 );
            SET_CAM_ACTIVE( l_U2176[5], 0 );
            SET_CAM_PROPAGATE( l_U2176[5], 0 );
            SET_CAM_ACTIVE( l_U2176[6], 0 );
            SET_CAM_PROPAGATE( l_U2176[6], 0 );
            SET_CAM_ACTIVE( l_U2176[7], 0 );
            SET_CAM_PROPAGATE( l_U2176[7], 0 );
            SET_CAM_ACTIVE( l_U2176[8], 0 );
            SET_CAM_PROPAGATE( l_U2176[8], 0 );
            SET_CAM_ACTIVE( l_U2176[9], 0 );
            SET_CAM_PROPAGATE( l_U2176[9], 0 );
            DESTROY_CAM( l_U2176[0] );
            DESTROY_CAM( l_U2176[3] );
            DESTROY_CAM( l_U2176[2] );
            DESTROY_CAM( l_U2176[1] );
            DESTROY_CAM( l_U2176[6] );
            DESTROY_CAM( l_U2176[5] );
            DESTROY_CAM( l_U2176[4] );
            DESTROY_CAM( l_U2176[9] );
            DESTROY_CAM( l_U2176[8] );
            DESTROY_CAM( l_U2176[7] );
            SET_USE_HIGHDOF( 0 );
            if (NOT l_U2567)
            {
                if (DOES_CHAR_EXIST( l_U2522 ))
                {
                    if (NOT l_U2562)
                    {
                        sub_9450( "Deleteing char because bDontDeleteAtEnd is FALSE" );
                        DELETE_CHAR( ref l_U2522 );
                    }
                    else
                    {
                        sub_9450( "Not Deleteing char because bDontDeleteAtEnd is TRUE" );
                        if (NOT (IS_CHAR_DEAD( l_U2522 )))
                        {
                            SET_CHAR_PROOFS( l_U2522, 0, 0, 0, 0, 0 );
                            SWITCH_PED_TO_RAGDOLL( l_U2522, 0, 100, 1, 1, 1, 0 );
                            SET_CHAR_HEALTH( l_U2522, 101 );
                            if (NOT (IS_CHAR_FATALLY_INJURED( l_U2522 )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U2522, ref l_U2108[2] );
                            }
                        }
                    }
                }
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            GET_GAME_VIEWPORT_ID( ref uVar16 );
            GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar16, ref uVar14 );
            SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar16, uVar14 );
            END_CAM_COMMANDS( ref l_U2543 );
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_3318(), 1 );
            if (NOT l_U2567)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                if (IS_SCREEN_FADING_OUT())
                {
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            else if (DOES_CHAR_EXIST( l_U2522 ))
            {
                sub_9450( "Deleteing char because the cutscene was skipped" );
                DELETE_CHAR( ref l_U2522 );
            }
            if (IS_SCREEN_FADING_OUT())
            {
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            DO_SCREEN_FADE_IN( 500 );;
            l_U2163 = 0;
            l_U2561 = 1;
            l_U2559 = 5;
        }
        else if (NOT l_U2563)
        {
            if (NOT (IS_CHAR_DEAD( l_U2522 )))
            {
                GET_CHAR_COORDINATES( l_U2522, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (uVar8._fU8 < 14.80040000)
                {
                    SET_CAM_SHAKE( l_U2176[7], 1, -1 );
                    l_U2563 = 1;
                }
            }
        }
        break;
        case 5:
        if (l_U2394)
        {
            l_U2394 = 0;
        }
        break;
    }
    if (NOT l_U2564)
    {
        GET_CHAR_COORDINATES( sub_3418(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        if (uVar11._fU8 < 105)
        {
            SET_CHAR_COORDINATES( sub_3418(), -178.26940000, 588.09420000, 126.75160000 );
            SET_CHAR_HEADING( sub_3418(), 186.58590000 );
            CLEAR_ROOM_FOR_CHAR( sub_3418() );
            l_U2564 = 1;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -179.94710000, 582.32010000, 126.85020000, 7.00000000, 7.00000000, 2.00000000, 0 ))
        {
            if (uVar11._fU8 < 126.00000000)
            {
                SET_CHAR_COORDINATES( sub_3418(), -178.26940000, 588.09420000, 126.75160000 );
                SET_CHAR_HEADING( sub_3418(), 186.58590000 );
                CLEAR_ROOM_FOR_CHAR( sub_3418() );
                l_U2564 = 1;
            }
        }
    }
    return;
}

void sub_29036(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_31029(unknown uParam0, vector vParam1, boolean bParam4)
{
    unknown Result;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    vVar13 = {vVar10 - vParam1};
    if (bParam4)
    {
        Result = {vVar13 / (VMAG( vVar13 ))};
    }
    else
    {
        Result = {vVar13};
    }
    sub_16346( Result, "Vreturn...." );
    return Result;
}

void sub_31216(unknown uParam0, vector vParam1, vector vParam4, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, boolean bParam13)
{
    unknown uVar16;

    vParam1 = {vParam1 * uParam8};
    vParam1.z = 0.00000000;
    vParam4 = {vParam4 * uParam9};
    vParam4.z = 0.00000000;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar16 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL( uParam0, 0, uParam7, 1, 1, 1, 1 );
        SET_CHAR_CAN_SMASH_GLASS( uParam0, 1 );
        CREATE_NM_MESSAGE( 1, 79 );
        SEND_NM_MESSAGE( uParam0 );
        CREATE_NM_MESSAGE( 1, 114 );
        SET_NM_MESSAGE_VEC3( 116, vParam1.x, vParam1.y, vParam1.z );
        SET_NM_MESSAGE_FLOAT( 117, 0.20000000 );
        SEND_NM_MESSAGE( uParam0 );
        WAIT( 100 );
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            CREATE_NM_MESSAGE( 1, 289 );
            SET_NM_MESSAGE_FLOAT( 291, uParam10 );
            SET_NM_MESSAGE_FLOAT( 292, uParam11 );
            SET_NM_MESSAGE_FLOAT( 293, uParam12 );
            SEND_NM_MESSAGE( uParam0 );
            if (bParam13)
            {
                APPLY_FORCE_TO_PED( uParam0, 1, vParam4, 0.00000000, 0.00000000, 0.00000000, 9, 0, 1, 1 );
            }
            CREATE_NM_MESSAGE( 1, 41 );
            SET_NM_MESSAGE_STRING( 57, "ub" );
            SEND_NM_MESSAGE( uParam0 );
        }
    }
    return;
}

void sub_34020()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT l_U2163)
    {
        if (sub_34040())
        {
            if (sub_34964())
            {
                ;
            }
            if (NOT l_U2661)
            {
                ADD_SCENARIO_BLOCKING_AREA( -190.77380000, 561.04240000, 0.00000000, -104.05610000, 617.74620000, 500.00000000 );
                SET_PED_NON_CREATION_AREA( -190.77380000, 561.04240000, 0.00000000, -104.05610000, 617.74620000, 500.00000000 );
                CLEAR_AREA( -167.06000000, 599.09310000, 13.70930000, 20.00000000, 1 );
                l_U2661 = 1;
            }
            if (NOT l_U2657[0])
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -166.58450000, 599.79340000, 14.64430000, 19.00000000, 21.00000000, 2.00000000, 1 ))
                {
                    if (IS_PLAYER_CONTROL_ON( sub_3318() ))
                    {
                        l_U2657[0] = 1;
                    }
                }
            }
            if (NOT l_U2657[1])
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -162.13270000, 582.64840000, 14.91830000, 2.00000000, 5.00000000, 2.00000000, 0 ))
                {
                    if (IS_PLAYER_CONTROL_ON( sub_3318() ))
                    {
                        l_U2657[1] = 1;
                    }
                }
            }
            if (NOT l_U2655)
            {
                l_U1281 = 6;
                l_U2655 = 1;
            }
            if (NOT l_U2656)
            {
                sub_7796( 1 );
                l_U2656 = 1;
            }
            if (NOT l_U2339[1])
            {
                GET_INTERIOR_FROM_CHAR( sub_3418(), ref iVar5 );
                if (iVar5 == nil)
                {
                    GET_CHAR_COORDINATES( sub_3418(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if ((uVar2._fU8 < 20.00000000) || (IS_CHAR_IN_ANY_HELI( sub_3418() )))
                    {
                        if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_3418(), l_U2285 )))
                        {
                            if (NOT (IS_CHAR_IN_AIR( sub_3418() )))
                            {
                                if (sub_35780() == -1)
                                {
                                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -160.50780000, 582.34230000, 14.91300000, 2.00000000, 9.00000000, 100.00000000, 0 )))
                                    {
                                        l_U2339[1] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT l_U2525)
            {
                SET_WANTED_MULTIPLIER( 1.00000000 );
                ALTER_WANTED_LEVEL( sub_3318(), l_U2528 );
                l_U2525 = 1;
            }
            else if (NOT l_U2663)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_3318(), 0 ))
                {
                    l_U2663 = 1;
                    SET_FAKE_WANTED_LEVEL( 0 );
                    if (sub_34964())
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2640 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2641 );
                    }
                }
            }
            else
            {
                sub_36048();
            };;;
        }
    }
    if (NOT l_U2662)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_RB6" );
            l_U2662 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U2320[0] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U2320[0] )))
        {
            if (NOT (sub_51657( sub_3418(), l_U2320[0] )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U2320[0] )))
                {
                    DELETE_CHAR( ref l_U2320[0] );
                }
            }
        }
    }
    return;
}

int sub_34040()
{
    int iVar2;
    int iVar3;
    boolean bVar4;

    bVar4 = true;
    if ((IS_CHAR_DEAD( l_U2104[0] )) || (l_U2524))
    {
        if (DOES_BLIP_EXIST( l_U2108[0] ))
        {
            l_U2120[0] = 1;
            REMOVE_BLIP( l_U2108[0] );
        }
        iVar2++;
    }
    else
    {
        GET_CHAR_HEALTH( l_U2104[0], ref iVar3 );
        if (iVar3 < 0)
        {
            if (DOES_BLIP_EXIST( l_U2108[0] ))
            {
                REMOVE_BLIP( l_U2108[0] );
            }
            iVar2++;
        }
    }
    if ((IS_CHAR_DEAD( l_U2104[1] )) || (l_U2523))
    {
        if (NOT l_U2120[1])
        {
            l_U2120[1] = 1;
        }
        if (DOES_BLIP_EXIST( l_U2108[1] ))
        {
            REMOVE_BLIP( l_U2108[1] );
        }
        iVar2++;
    }
    if (IS_CHAR_DEAD( l_U2104[2] ))
    {
        if (DOES_BLIP_EXIST( l_U2108[2] ))
        {
            l_U2120[2] = 1;
            REMOVE_BLIP( l_U2108[2] );
        }
        iVar2++;
    }
    else
    {
        GET_CHAR_HEALTH( l_U2104[2], ref iVar3 );
        if (iVar3 < 0)
        {
            if (DOES_BLIP_EXIST( l_U2108[2] ))
            {
                REMOVE_BLIP( l_U2108[2] );
            }
            iVar2++;
        }
    }
    if (iVar2 == 3)
    {
        if (DOES_CHAR_EXIST( l_U2104[0] ))
        {
            ;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2104[1] )))
        {
            if (HAS_MODEL_LOADED( l_U1285 ))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1285 );
            }
            if (HAS_MODEL_LOADED( l_U1290 ))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1290 );
            }
        }
        if (HAS_MODEL_LOADED( l_U1288 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1288 );
        }
        if (sub_34573( l_U2529 ))
        {
            bVar4 = false;
        }
        if (bVar4)
        {
            if (NOT l_U2527)
            {
                STOP_PED_SPEAKING( sub_3418(), 0 );
                SAY_AMBIENT_SPEECH( sub_3418(), "KILLED_ALL", 1, 1, 0 );
                STOP_PED_SPEAKING( sub_3418(), 1 );
                l_U2527 = 1;
            }
        }
        if (NOT l_U2526)
        {
            SET_WANTED_MULTIPLIER( 0.00000000 );
            STORE_WANTED_LEVEL( sub_3318(), ref l_U2528 );
            if (l_U2528 > 2)
            {
                CLEAR_WANTED_LEVEL( sub_3318() );
                SET_FAKE_WANTED_LEVEL( l_U2528 );
            }
            else
            {
                l_U2528 = 2;
                CLEAR_WANTED_LEVEL( sub_3318() );
                SET_FAKE_WANTED_LEVEL( 2 );
            }
            l_U2526 = 1;
            SET_PED_IS_BLIND_RAGING( sub_3418(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_34573(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_20407( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_20407( "\n speech is not playing" );
    }
    return 0;
}

int sub_34964()
{
    switch (l_U2639)
    {
        case 0:
        if (NOT l_U2642)
        {
            GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U2640 );
            GET_CURRENT_BASIC_COP_MODEL( ref l_U2641 );
            REQUEST_MODEL( l_U2640 );
            REQUEST_MODEL( l_U2641 );
            l_U2642 = 1;
        }
        else if ((HAS_MODEL_LOADED( l_U2640 )) AND (HAS_MODEL_LOADED( l_U2641 )))
        {
            l_U2639++;
        }
        break;
        case 1:
        CREATE_CAR( l_U2640, -191.75830000, 583.64930000, 13.71900000, ref l_U2643[0], 1 );
        SET_CAR_HEADING( l_U2643[0], 180.27350000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2643[0] );
        SWITCH_CAR_SIREN( l_U2643[0], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U2643[0], 6, l_U2641, ref l_U2649[0] );
        CREATE_CHAR_AS_PASSENGER( l_U2643[0], 6, l_U2641, 0, ref l_U2649[1] );
        l_U2639 = 99;
        break;
        case 99:
        return 1;
        break;
    }
    return 0;
}

int sub_35780()
{
    int Result;

    for ( Result = 0; Result <= 2; Result++ )
    {
        if (l_U1346[Result]._fU108)
        {
            return Result;
        }
    }
    return -1;
}

void sub_36048()
{
    sub_36057();
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    sub_47679( 14, "RB6_CALLP", "RB6AUD", 0 );
    sub_48268( 34 );
    UNLOCK_MISSION_NEWS_STORY( 34 );
    sub_51472( 3042, 3 );
    sub_3016();
    return;
}

void sub_36057()
{
    sub_36066();
    return;
}

void sub_36066()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_36084();
    sub_36143( iVar2, iVar3, iVar4 );
    return;
}

void sub_36084()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_36143(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 14;
    sub_36176( iVar5, uParam0, uParam1, uParam2, "Contact_16" );
    return;
}

void sub_36176(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_36272( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_36272( ref cVar9 );
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
            sub_36272( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_36272( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_36272( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_36272( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_36849( iParam0, iVar7 );;;
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
                sub_37246( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_37246( 0, 4 );
            }
        }
    }
    if (NOT (sub_37335( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3318(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3318() );
    }
    sub_2114();
    bVar27 = true;
    uVar28 = sub_36849( iParam0, iVar7 );
    uVar29 = sub_1571( iParam0 );
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
                sub_46711( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_47141();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_47226( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_47283( iParam0 );
                sub_47322( 0 );
                sub_2012( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_47430();
        }
    }
    if (bParam2)
    {
        sub_47141();
        sub_47518();
        sub_47322( 0 );
    }
    if (bParam3)
    {
        sub_47141();
        sub_47558();
        sub_47322( 0 );
        sub_2012( uVar29, 0 );
    }
    sub_1458();
    return;
}

void sub_36272(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_36849(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1970( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_37246(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_37335(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_37543( uParam1 );
        break;
        case 1:
        bVar8 = sub_39621( uParam1 );
        break;
        case 2:
        bVar8 = sub_39847( uParam1 );
        break;
        case 3:
        bVar8 = sub_39997( uParam1 );
        break;
        case 4:
        bVar8 = sub_40275( uParam1 );
        break;
        case 5:
        bVar8 = sub_40578( uParam1 );
        break;
        case 6:
        bVar8 = sub_40777( uParam1 );
        break;
        case 7:
        bVar8 = sub_41003( uParam1 );
        break;
        case 8:
        bVar8 = sub_41238( uParam1 );
        break;
        case 9:
        bVar8 = sub_41613( uParam1 );
        break;
        case 10:
        bVar8 = sub_41860( uParam1 );
        break;
        case 11:
        bVar8 = sub_41999( uParam1 );
        break;
        case 12:
        bVar8 = sub_42298( uParam1 );
        break;
        case 13:
        bVar8 = sub_42526( uParam1 );
        break;
        case 14:
        bVar8 = sub_42813( uParam1 );
        break;
        case 15:
        bVar8 = sub_43095( uParam1 );
        break;
        case 16:
        bVar8 = sub_43377( uParam1 );
        break;
        case 17:
        bVar8 = sub_43578( uParam1 );
        break;
        case 18:
        bVar8 = sub_43651( uParam1 );
        break;
        case 19:
        bVar8 = sub_43865( uParam1 );
        break;
        case 20:
        bVar8 = sub_44118( uParam1 );
        break;
        case 21:
        bVar8 = sub_44365( uParam1 );
        break;
        case 22:
        bVar8 = sub_44566( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_39226( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_36849( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_44889( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_37543(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_37822( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_37822( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_37822( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_37822( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_37822( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_37822( iVar3, 0, 3, 1, 0, 0 );
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
        sub_37822( iVar3, 0, sub_39104(), sub_39370(), 0, 0 );
        break;
        default:
        sub_39529( "Friend 1", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Friend 1", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_37822(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_37833( uParam1 );
    sub_38007( uParam0, 0, uParam2 );
    sub_38007( uParam0, 1, uParam3 );
    sub_38007( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_36084();
    return;
}

void sub_37833(unknown uParam0)
{
    ADD_SCORE( sub_3318(), uParam0 );
    sub_37858( uParam0 );
    return;
}

void sub_37858(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1970( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_38007(unknown uParam0, int iParam1, int iParam2)
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
        sub_38164( uParam0 );
    }
    return;
}

void sub_38164(unknown uParam0)
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

int sub_39104()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_39226( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_39226(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_39370()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_39226( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_39529(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_39621(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 2", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 2", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39847(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_39529( "Girl 3", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Girl 3", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_37822( iVar3, 0, sub_39104(), sub_39370(), 0, 0 );
        break;
        default:
        sub_39529( "Friend 4", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Friend 4", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40275(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 5", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 5", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 7", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 7", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40777(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 7b", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 7b", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41003(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_37822( iVar3, 0, sub_39104(), sub_39370(), 0, 0 );
        break;
        default:
        sub_39529( "Friend 8", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Friend 8", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41238(unknown uParam0)
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
        sub_37822( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_37822( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_37822( iVar3, 0, sub_39104(), sub_39370(), 0, 0 );
        break;
        default:
        sub_39529( "Friend 9", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Friend 9", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41613(unknown uParam0)
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
        sub_37822( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_37822( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_37822( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_39529( "Contact 10", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_39529( "Contact 10", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41860(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_39529( "Girl 11", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Girl 11", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_39529( "Contact 12", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 12", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42298(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 13", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 13", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42526(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_37822( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_37822( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_37822( iVar3, 0, sub_39104(), sub_39370(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_39529( "Friend 15", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Friend 15", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42813(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 16", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 16", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43095(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_37822( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_39529( "Contact 18", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 18", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43377(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 19", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 19", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_39529( "Girl 20", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43651(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_39529( "Contact 21", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 21", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43865(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_37822( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_39529( "Contact 22", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 22", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44118(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_37822( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_37822( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_37822( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_39529( "Contact 24", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 24", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44365(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_37822( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_37822( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_37822( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_39529( "Contact 25", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_39529( "Contact 25", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44566(unknown uParam0)
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
        sub_37822( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_39529( "Girl 26", 1 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_39529( "Girl 26", 0 );
        sub_37822( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_44889(int iParam0, int iParam1)
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
    if (sub_44937( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_45668( iParam1 );
    }
    return;
}

int sub_44937(int iParam0, int iParam1)
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
            sub_45077( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_45077(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_45259( 0 );
    return;
}

void sub_45259(boolean bParam0)
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
        sub_45514();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_45514()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_45668(int iParam0)
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
        sub_46001( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_46001( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_46001( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_46001( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_46001( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_46001( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_46001( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_46001( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_46001( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_46001( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_46001( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_46001( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_46001( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_46001( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_46001( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_46001( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_46001( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_46001( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_46001( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_46001(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_46711(unknown uParam0, unknown uParam1)
{
    sub_46730( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_46730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_47141()
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

int sub_47226(int iParam0, int iParam1)
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

void sub_47283(unknown uParam0)
{
    sub_1357();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_47322(unknown uParam0)
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

void sub_47430()
{
    sub_47439();
    return;
}

void sub_47439()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_47518()
{
    sub_47439();
    return;
}

void sub_47558()
{
    sub_47439();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_47679(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_47723( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_47723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_48268(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_48355( iParam0 ))
    {
        sub_49405( iParam0 );
    }
    return;
}

int sub_48355(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_48412( ref uVar3, 1, 0, 0 );
    sub_49024( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_20407( "\n ----------------------------------------------------------------" );
    sub_4962( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_20407( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_48412(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_48465( iParam0, uParam1, uParam2 );
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
        sub_48597( iParam0 + 0 );
    }
    return;
}

void sub_48465(int iParam0, int iParam1, int iParam2)
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
        sub_48597( iParam0 + 0 );
    }
    return;
}

void sub_48597(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_48628( iParam0->_fU4 )))
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

int sub_48628(unknown uParam0)
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

void sub_49024(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_49405(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_49616( 20, 6, 16383, 16383, ref uVar4 );
        sub_50292( ref uVar4, 7 );
        sub_50323( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_49616( 20, 7, 9, 16383, ref uVar4 );
        sub_50292( ref uVar4, 7 );
        sub_50323( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_49616(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_49640( uParam0, 0, iParam4 + 0 );
    sub_49640( uParam1, 1, iParam4 + 0 );
    sub_49640( uParam2, 2, iParam4 + 0 );
    sub_49640( uParam3, 3, iParam4 + 0 );
    sub_49640( 0, 4, iParam4 + 0 );
    sub_49640( 1, 5, iParam4 + 0 );
    sub_49640( 65535, 6, iParam4 + 0 );
    sub_49640( 0, 12, iParam4 + 0 );
    sub_49640( 0, 11, iParam4 + 0 );
    sub_49640( 0, 14, iParam4 + 0 );
    sub_49640( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_49640( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_49640( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_49640(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_50292(int iParam0, unknown uParam1)
{
    sub_49640( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_50323(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_50363())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_51050( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_50849( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_50363()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_50397( 5, g_U968[I] )) == 7)
        {
            sub_50849( I );
            return 1;
        }
    }
    return 0;
}

int sub_50397(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_50849(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_50922( 39 );
    return;
}

void sub_50922(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_51050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_51111( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_51111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_51472(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

int sub_51657(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_51838()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U2637)
    {
        case 0:
        CREATE_OBJECT_NO_OFFSET( 1739259976, -156.40500000, 584.05000000, 122.33000000, ref l_U2286[0], 1 );
        SET_OBJECT_HEADING( l_U2286[0], 0.00000000 );
        CREATE_OBJECT_NO_OFFSET( 1739259976, -156.40500000, 581.99000000, 122.33000000, ref l_U2286[1], 1 );
        SET_OBJECT_HEADING( l_U2286[1], 0.00000000 );
        CREATE_OBJECT_NO_OFFSET( -859769635, -159.67000000, 584.04900000, 124.75900000, ref l_U2289[0], 1 );
        SET_OBJECT_HEADING( l_U2289[0], 0.00000000 );
        CREATE_OBJECT_NO_OFFSET( -859769635, -159.67000000, 581.98900000, 124.75900000, ref l_U2289[1], 1 );
        SET_OBJECT_HEADING( l_U2289[1], 0.00000000 );
        CREATE_OBJECT_NO_OFFSET( 1289046123, -159.72800000, 583.02200000, 14.79800000, ref l_U2285, 1 );
        SET_OBJECT_HEADING( l_U2285, 270.00000000 );
        CLEAR_ROOM_FOR_OBJECT( l_U2285 );
        l_U2637 = 1;
        break;
        case 1:
        GET_OBJECT_COORDINATES( l_U2285, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (l_U2380)
        {
            if (NOT l_U2382)
            {
                SET_OBJECT_COORDINATES( l_U2285, -159.72800000, 583.02200000, 123.36000000 );
                CLEAR_ROOM_FOR_OBJECT( l_U2285 );
                l_U2382 = 1;
            }
            if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_3418(), l_U2285 )))
            {
                GET_INTERIOR_FROM_CHAR( sub_3418(), ref l_U2638 );
                if (l_U2638 == nil)
                {
                    GET_CHAR_COORDINATES( sub_3418(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    if (uVar5._fU8 < 50.00000000)
                    {
                        l_U2386 = 1;
                    }
                }
            }
            else
            {
                CLEAR_ROOM_FOR_OBJECT( l_U2285 );
            }
        }
        if (NOT l_U2380)
        {
            if (IS_PED_ATTACHED_TO_OBJECT( sub_3418(), l_U2285 ))
            {
                GET_CHAR_COORDINATES( sub_3418(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if (uVar5._fU8 >= 70.00000000)
                {
                    if (NOT (DOES_CHAR_EXIST( l_U2104[0] )))
                    {
                        if (sub_52461())
                        {
                            sub_21479( 10 );
                            sub_21479( 14 );
                            l_U2383 = 1;
                        }
                    }
                }
            }
            else if (l_U2385)
            {
                if (NOT l_U2391)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -157.46820000, 582.93480000, 123.50760000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                    {
                        l_U2385 = 0;
                        sub_3467();
                        l_U2383 = 1;
                        sub_52762();
                        sub_52934( l_U1346[1], 1 );
                        sub_52934( l_U1346[2], 1 );
                        sub_53725( 1, 1 );
                        sub_54609( l_U1548, 1, 0 );
                        sub_54609( l_U1565, 1, 0 );
                        sub_54853( 0, l_U1520, 0, 0 );
                        sub_55693();
                        l_U1281 = 5;
                        l_U2300 = 12;
                        l_U2391 = 1;
                        l_U2377 = 1;
                        l_U1294 = 4;
                    }
                }
            }
        }
        break;
    }
    if (l_U2385)
    {
        sub_55959( l_U2285, ref l_U2176[0], 123.36000000, 14.79800000, "missray6", 0 );
        if (DOES_OBJECT_EXIST( l_U2285 ))
        {
            if (IS_PED_ATTACHED_TO_OBJECT( sub_3418(), l_U2285 ))
            {
                GET_CHAR_COORDINATES( sub_3418(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            }
        }
    }
    return;
}

int sub_52461()
{
    if (NOT l_U2519)
    {
        REQUEST_MODEL( l_U1290 );
        REQUEST_MODEL( l_U1288 );
        REQUEST_MODEL( l_U1282 );
        REQUEST_MODEL( l_U1285 );
        GET_GAME_TIMER( ref l_U2520 );
        l_U2519 = 1;
    }
    else
    {
        GET_GAME_TIMER( ref l_U2521 );
        if (((((HAS_MODEL_LOADED( l_U1290 )) AND (HAS_MODEL_LOADED( l_U1288 ))) AND (HAS_MODEL_LOADED( l_U1282 ))) AND (HAS_MODEL_LOADED( l_U1285 ))) || ((l_U2521 - l_U2520) > 10000))
        {
            return 1;
        }
    }
    return 0;
}

void sub_52762()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U2104[I] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U2108[I] )))
            {
                ADD_BLIP_FOR_CHAR( l_U2104[I], ref l_U2108[I] );
                CHANGE_BLIP_COLOUR( l_U2108[I], 1 );
            }
            if (DOES_BLIP_EXIST( l_U2124[I] ))
            {
                REMOVE_BLIP( l_U2124[I] );
            }
        }
    }
    return;
}

void sub_52934(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, boolean bParam30)
{
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;

    uVar39 = uParam0._fU0;
    if (bParam30)
    {
        uVar36 = {sub_52968( uParam0, uParam0._fU4 )};
        sub_16346( uVar36, "Create coords...." );
        CREATE_OBJECT_NO_OFFSET( -471902624, uVar36._fU0, uVar36._fU4, uVar36._fU8, ref l_U2231[uVar39], 1 );
        GET_INTERIOR_AT_COORDS( uVar36._fU0, uVar36._fU4, uVar36._fU8, ref l_U2299 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2231[uVar39], uParam0._fU4._fU4 );
        SET_OBJECT_HEADING( l_U2231[uVar39], uParam0._fU104 );
        FREEZE_OBJECT_POSITION( l_U2231[uVar39], 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar39], 0.00000000, -1.02500000, -0.28000000, ref uVar33._fU0, ref uVar33._fU4, ref uVar33._fU8 );
        CREATE_OBJECT_NO_OFFSET( -2090179830, uVar33._fU0, uVar33._fU4, uVar33._fU8, ref l_U2265[uVar39], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2265[uVar39], uParam0._fU4._fU4 );
        SET_OBJECT_HEADING( l_U2265[uVar39], uParam0._fU104 );
        FREEZE_OBJECT_POSITION( l_U2265[uVar39], 1 );
        CREATE_OBJECT_NO_OFFSET( 948346586, uVar33._fU0, uVar33._fU4, uVar33._fU8, ref l_U2260[uVar39], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2260[uVar39], uParam0._fU4._fU4 );
        SET_OBJECT_HEADING( l_U2260[uVar39], uParam0._fU104 );
        FREEZE_OBJECT_POSITION( l_U2260[uVar39], 1 );
    }
    else
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2231[uVar39] );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2265[uVar39] );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2260[uVar39] );
    }
    return;
}

void sub_52968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34)
{
    int iVar37;
    int I;
    vector Result;

    Result = {0.00000000, 0.00000000, 0.00000000};
    switch (uParam0._fU0)
    {
        case 0:
        iVar37 = uParam30._fU8;
        break;
        case 1:
        iVar37 = uParam30._fU12;
        break;
        case 2:
        iVar37 = uParam30._fU16;
        break;
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (l_U1437[I]._fU0 == iVar37)
        {
            Result = {l_U1437[I]._fU28};
        }
    }
    return Result;
}

void sub_53725(int iParam0, boolean bParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    for ( I = 0; I <= 6; I++ )
    {
        if (l_U1437[I]._fU0 == iParam0)
        {
            if (bParam1)
            {
                if (NOT (DOES_OBJECT_EXIST( l_U2236[I] )))
                {
                    CREATE_OBJECT_NO_OFFSET( -24996117, l_U1437[I]._fU8._fU0, l_U1437[I]._fU8._fU4, l_U1437[I]._fU8._fU8, ref l_U2236[I], 1 );
                    GET_INTERIOR_AT_COORDS( l_U1437[I]._fU8._fU0, l_U1437[I]._fU8._fU4, l_U1437[I]._fU8._fU8, ref l_U2299 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2236[I], l_U1437[I]._fU24 );
                    SET_OBJECT_HEADING( l_U2236[I], l_U1437[I]._fU20 );
                    FREEZE_OBJECT_POSITION( l_U2236[I], 1 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[I], 0.00000000, 0.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    CREATE_OBJECT_NO_OFFSET( 1667998832, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U2244[I], 1 );
                    GET_INTERIOR_AT_COORDS( uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U2299 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2244[I], l_U1437[I]._fU24 );
                    SET_OBJECT_HEADING( l_U2244[I], l_U1437[I]._fU20 );
                    FREEZE_OBJECT_POSITION( l_U2244[I], 1 );
                    CREATE_OBJECT_NO_OFFSET( -16333017, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U2252[I], 1 );
                    GET_INTERIOR_AT_COORDS( uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U2299 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2252[I], l_U1437[I]._fU24 );
                    SET_OBJECT_HEADING( l_U2252[I], l_U1437[I]._fU20 );
                    FREEZE_OBJECT_POSITION( l_U2252[I], 1 );
                    if (NOT l_U1437[I]._fU40)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2236[I], 0.00000000, -0.05000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        CREATE_OBJECT_NO_OFFSET( -252599135, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U2096[I], 1 );
                        SET_OBJECT_HEADING( l_U2096[I], l_U1437[I]._fU20 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2096[I], l_U1437[I]._fU24 );
                        FREEZE_OBJECT_POSITION( l_U2096[I], 1 );
                    }
                }
            }
            else if (DOES_OBJECT_EXIST( l_U2236[I] ))
            {
                DELETE_OBJECT( ref l_U2236[I] );
            }
            if (DOES_OBJECT_EXIST( l_U2244[I] ))
            {
                DELETE_OBJECT( ref l_U2244[I] );
            }
            if (DOES_OBJECT_EXIST( l_U2252[I] ))
            {
                DELETE_OBJECT( ref l_U2252[I] );
            }
            if (DOES_OBJECT_EXIST( l_U2096[I] ))
            {
                DELETE_OBJECT( ref l_U2096[I] );
            }
        }
    }
    return;
}

void sub_54609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, boolean bParam17, boolean bParam18)
{
    unknown uVar21;

    uVar21 = uParam0._fU0;
    if (bParam17)
    {
        CREATE_OBJECT_NO_OFFSET( -121234208, uParam0._fU4._fU0, uParam0._fU4._fU4, uParam0._fU4._fU8, ref l_U2275[uVar21], 1 );
        sub_16346( uParam0._fU4, "Create loc...." );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2275[uVar21], uParam0._fU20 );
        SET_OBJECT_HEADING( l_U2275[uVar21], uParam0._fU16 );
        FREEZE_OBJECT_POSITION( l_U2275[uVar21], 1 );
        SET_OBJECT_COLLISION( l_U2275[uVar21], 0 );
    }
    else if (bParam18)
    {
        DELETE_OBJECT( ref l_U2275[uVar21] );
    }
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2275[uVar21] );;
    return;
}

void sub_54853(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    unknown uVar19;

    uVar19 = sub_15425( uParam0 );
    l_U1346[uVar19]._fU24 = {uParam1};
    GET_GAME_TIMER( ref l_U1346[uVar19]._fU68 );
    if ((l_U1346[uVar19]._fU24._fU0 != l_U1346[uVar19]._fU4._fU0) || (uParam7))
    {
        l_U1346[uVar19]._fU116 = 1;
        l_U1346[uVar19]._fU72 = 5000;
    }
    if (DOES_OBJECT_EXIST( l_U2231[uVar19] ))
    {
        DELETE_OBJECT( ref l_U2231[uVar19] );
    }
    if (DOES_OBJECT_EXIST( l_U2265[uVar19] ))
    {
        DELETE_OBJECT( ref l_U2265[uVar19] );
    }
    if (DOES_OBJECT_EXIST( l_U2260[uVar19] ))
    {
        DELETE_OBJECT( ref l_U2260[uVar19] );
    }
    uVar10 = {sub_52968( l_U1346[uVar19], l_U1346[uVar19]._fU24 )};
    sub_16346( uVar10, "Setting lift loc...." );
    CREATE_OBJECT_NO_OFFSET( -471902624, uVar10._fU0, uVar10._fU4, uVar10._fU8, ref l_U2231[uVar19], 1 );
    FREEZE_OBJECT_POSITION( l_U2231[uVar19], 1 );
    SET_OBJECT_HEADING( l_U2231[uVar19], l_U1346[uVar19]._fU104 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar19], 0.00000000, -1.02500000, -0.28000000, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
    CREATE_OBJECT_NO_OFFSET( -2090179830, uVar13._fU0, uVar13._fU4, uVar13._fU8, ref l_U2265[uVar19], 1 );
    SET_OBJECT_HEADING( l_U2265[uVar19], l_U1346[uVar19]._fU104 );
    FREEZE_OBJECT_POSITION( l_U2265[uVar19], 1 );
    CREATE_OBJECT_NO_OFFSET( 948346586, uVar13._fU0, uVar13._fU4, uVar13._fU8, ref l_U2260[uVar19], 1 );
    SET_OBJECT_HEADING( l_U2260[uVar19], l_U1346[uVar19]._fU104 );
    FREEZE_OBJECT_POSITION( l_U2260[uVar19], 1 );
    WAIT( 0 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2231[uVar19], l_U1346[uVar19]._fU24._fU4 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2265[uVar19], l_U1346[uVar19]._fU24._fU4 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2260[uVar19], l_U1346[uVar19]._fU24._fU4 );
    if (bParam6)
    {
        vVar16 = {0.05000000, 0.05000000, -0.57500000};
        ATTACH_PED_TO_OBJECT( sub_3418(), l_U2231[uVar19], 0, vVar16, 180.00000000, 0.00000000, 0, 0 );
        SET_CHAR_HEADING( sub_3418(), 281.09020000 );
    }
    WAIT( 0 );
    if (bParam6)
    {
        ;
    }
    l_U1346[uVar19]._fU4 = {l_U1346[uVar19]._fU24};
    return;
}

void sub_55693()
{
    if (DOES_CHAR_EXIST( l_U2082[0] ))
    {
        DELETE_CHAR( ref l_U2082[0] );
    }
    if (DOES_CHAR_EXIST( l_U2082[1] ))
    {
        DELETE_CHAR( ref l_U2082[1] );
    }
    if (DOES_CHAR_EXIST( l_U2082[2] ))
    {
        DELETE_CHAR( ref l_U2082[2] );
    }
    if (DOES_OBJECT_EXIST( l_U2093[0] ))
    {
        DELETE_OBJECT( ref l_U2093[0] );
    }
    if (DOES_OBJECT_EXIST( l_U2093[1] ))
    {
        DELETE_OBJECT( ref l_U2093[1] );
    }
    return;
}

void sub_55959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    unknown uVar11;

    if (NOT l_U487)
    {
        l_U485 = GET_SOUND_ID();
        l_U487 = 1;
    }
    vVar8 = {0.00000000, 0.00000000, 0.29000000};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U616)
        {
            sub_56048( uParam4, uParam1, uParam5, uParam0 );
        }
        else
        {
            sub_56701( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
            sub_57778( uParam0, uParam3, uParam2 );
            if (NOT (IS_PLAYER_TARGETTING_ANYTHING( sub_3318() )))
            {
                sub_58081( uParam0 );
            }
            if (NOT (IS_CONTROL_PRESSED( 0, 23 )))
            {
                if (l_U536)
                {
                    l_U537 = 1;
                }
            }
            GET_OBJECT_COORDINATES( uParam0, ref l_U602._fU0, ref l_U602._fU4, ref l_U602._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                if (l_U489)
                {
                    if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_3418(), uParam0 )))
                    {
                        if (sub_59919( uParam4 ))
                        {
                            if (NOT (IS_CHAR_DEAD( sub_3418() )))
                            {
                                if (NOT l_U536)
                                {
                                    FREEZE_CHAR_POSITION( sub_3418(), 0 );
                                    CLEAR_CHAR_TASKS( sub_3418() );
                                    GET_OBJECT_HEADING( uParam0, ref uVar11 );
                                    l_U536 = 1;
                                    SET_CHAR_HEADING( sub_3418(), uVar11 );
                                    ATTACH_PED_TO_OBJECT( sub_3418(), uParam0, 0, vVar8, 0.00000000, 0.00000000, 0, 0 );
                                    TASK_PLAY_ANIM( sub_3418(), "OPERATE_LIFT_INTRO", uParam4, 8.00000000, 0, 0, 0, 1, -1 );
                                    sub_60365( uParam1, uParam0, uParam5 );
                                    l_U601 = 0;
                                    sub_60820();
                                }
                            }
                        }
                        else if (TIMERB() > 5000)
                        {
                            if ((l_U601) || (l_U612))
                            {
                                FREEZE_CHAR_POSITION( sub_3418(), 0 );
                                sub_60899( uParam1, uParam5 );
                                l_U625 = 1;
                            }
                        }
                    }
                    else
                    {
                        TASK_LOOK_AT_COORD( sub_3418(), 0.00000000, 0.00000000, 0.00000000, 1, 32 );
                    }
                }
            }
            if ((l_U536) || (l_U488))
            {
                if (NOT l_U488)
                {
                    sub_8582();
                }
                sub_61151( ref uParam0, uParam2, uParam3, uParam4 );
                if (NOT l_U488)
                {
                    sub_62937();
                    sub_60899( uParam1, uParam5 );
                }
            }
        }
        if ((l_U537) || (l_U625))
        {
            if ((IS_CONTROL_PRESSED( 0, 23 )) || (l_U625))
            {
                if ((l_U538) || (l_U625))
                {
                    if ((l_U536) || (l_U625))
                    {
                        l_U552 = 0;
                        l_U536 = 0;
                        l_U625 = 0;
                        if (NOT l_U625)
                        {
                            l_U623 = 0;
                        }
                        else
                        {
                            l_U623 = 2;
                        }
                        l_U601 = 0;
                        l_U611 = 0;
                        l_U612 = 0;
                        l_U557 = 0;
                        l_U481 = 0;
                        l_U616 = 1;
                        sub_3269();
                        l_U626 = 0;
                    }
                }
            }
            else if (NOT l_U536)
            {
                l_U537 = 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_3418() )))
    {
        if ((((IS_CHAR_PLAYING_ANIM( sub_3418(), uParam4, "GET_IN_LIFT_BOTTOM" )) || (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam4, "OPERATE_LIFT_SWITCH" ))) || (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam4, "operate_lift_intro" ))) || (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam4, "GET_IN_LIFT_TOP" )))
        {
            l_U624 = 1;
        }
        else
        {
            l_U624 = 0;
        }
    }
    return l_U624;
}

void sub_56048(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;

    switch (l_U623)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( sub_3418() )))
        {
            TASK_PLAY_ANIM( sub_3418(), "operate_lift_outro", uParam0, 8.00000000, 0, 0, 0, 0, -1 );
            SETTIMERA( 0 );
            l_U623 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( sub_3418() )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "operate_lift_outro" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), uParam0, "operate_lift_outro", ref fVar6 );
                if (fVar6 > 0.50000000)
                {
                    l_U623 = 2;
                }
            }
            if (TIMERB() > 5000)
            {
                l_U623 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( sub_3418() )))
        {
            SET_USE_LEG_IK( sub_3318(), 0 );
            DETACH_PED( sub_3418(), 0 );
            SETTIMERA( 0 );
            sub_3269();
            CLEAR_PRINTS();
            l_U568 = 0.00000000;
            sub_56389();
            l_U501 = 0.00000000;
            l_U505 = 0.00000000;
            l_U491 = 45.00000000;
            l_U492 = 0.00000000;
            l_U493 = -3.00000000;
            l_U494 = -3.00000000;
            l_U495 = 0.00000000;
            l_U496 = 0.00000000;
            sub_56548();
            sub_3048( 2, "WClift_01" );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_03" ))
            {
                CLEAR_HELP();
            }
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_02" ))
            {
                CLEAR_HELP();
            }
            l_U489 = 0;
            l_U616 = 0;
            l_U623 = 3;
        }
        break;
    }
    return;
}

void sub_56389()
{
    if (l_U564 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U564 )))
        {
            STOP_SOUND( l_U564 );
        }
        RELEASE_SOUND_ID( l_U564 );
        l_U564 = -1;
    }
    return;
}

void sub_56548()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_56701(unknown uParam0, unknown uParam1, float fParam2, float fParam3, unknown uParam4, unknown uParam5)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U595._fU0, ref l_U595._fU4, ref l_U595._fU8 );
        if (l_U595._fU8 == fParam3)
        {
            l_U594 = 0;
        }
        else if (l_U595._fU8 == fParam2)
        {
            l_U594 = 1;
        }
    }
    switch (l_U594)
    {
        case 0:
        l_U582 = {1.00000000, -0.40000000, 1.00000000};
        l_U585 = {-1.00000000, -0.40000000, -1.00000000};
        l_U588 = {-0.50000000, 0.00000000, 1.00000000};
        l_U591 = {-0.53200000, -0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U528 );
        sub_56948( uParam0, uParam1, 0, uParam4, uParam5 );
        break;
        case 1:
        l_U582 = {1.00000000, 1.40000000, 1.00000000};
        l_U585 = {-1.00000000, 1.40000000, -1.00000000};
        l_U588 = {0.50000000, -0.20000000, 1.00000000};
        l_U591 = {0.53200000, 0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U528 );
        l_U528 += 180.00000000;
        if (l_U528 > 360.00000000)
        {
            l_U528 -= 360.00000000;
        }
        sub_56948( uParam0, uParam1, 1, uParam4, uParam5 );
        break;
        case 2: break;
    }
    return;
}

void sub_56948(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (l_U611)
    {
        if (NOT l_U536)
        {
            if (NOT l_U601)
            {
                l_U601 = 1;
                l_U481 = 1;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U591._fU0, l_U591._fU4, l_U591._fU8, ref l_U579._fU0, ref l_U579._fU4, ref l_U579._fU8 );
                SET_CHAR_COORDINATES( sub_3418(), l_U579._fU0, l_U579._fU4, l_U579._fU8 );
                SET_CHAR_HEADING( sub_3418(), l_U528 );
                sub_57105( uParam1, uParam0, uParam4 );
                CLEAR_CHAR_TASKS( sub_3418() );
                WAIT( 0 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U588._fU0, l_U588._fU4, l_U588._fU8, ref l_U598._fU0, ref l_U598._fU4, ref l_U598._fU8 );
                if (iParam2 == 0)
                {
                    FREEZE_CHAR_POSITION( sub_3418(), 1 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_3418(), "GET_IN_LIFT_BOTTOM", uParam3, 8.00000000, 0, 0, 0, 0, 0, 0, 1, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_3418(), "GET_IN_LIFT_TOP", uParam3, 8.00000000, 0, 1, 1, 1, 0, 0, 0, -1 );
                }
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_57105(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT l_U484)
        {
            BEGIN_CAM_COMMANDS( ref l_U483 );
            l_U484 = 1;
        }
        CREATE_CAM( 14, ref l_U482 );
        ATTACH_CAM_TO_OBJECT( l_U482, uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U482, 1 );
        SET_CAM_ATTACH_OFFSET( l_U482, -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( l_U482, uParam1 );
        SET_CAM_ACTIVE( l_U482, 1 );
        SET_CAM_PROPAGATE( l_U482, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else
    {
        CREATE_CAM( 14, uParam0 );
        ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ACTIVE( (uParam0^), 1 );
        SET_CAM_PROPAGATE( (uParam0^), 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    return;
}

void sub_57778(unknown uParam0, float fParam1, unknown uParam2)
{
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

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 1.50000000, -1.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 1.50000000, 1.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    if (NOT l_U489)
    {
        if (NOT (IS_CHAR_DEAD( sub_3418() )))
        {
            if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), uVar9._fU0, uVar9._fU4, uVar9._fU8, uVar12._fU0, uVar12._fU4, uVar12._fU8, 3.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( uParam0, ref l_U595._fU0, ref l_U595._fU4, ref l_U595._fU8 );
                GET_CHAR_COORDINATES( sub_3418(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (l_U595._fU8 > (uParam2 - 3.00000000)))
                {
                    if ((uVar6._fU8 - 1.50000000) < fParam1)
                    {
                        if (l_U595._fU8 > fParam1)
                        {
                            l_U488 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_58081(unknown uParam0)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.40000000, -1.00000000, ref l_U605._fU0, ref l_U605._fU4, ref l_U605._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 0.40000000, 1.00000000, ref l_U608._fU0, ref l_U608._fU4, ref l_U608._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U582._fU0, l_U582._fU4, l_U582._fU8, ref l_U576._fU0, ref l_U576._fU4, ref l_U576._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U585._fU0, l_U585._fU4, l_U585._fU8, ref l_U579._fU0, ref l_U579._fU4, ref l_U579._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -1.00000000, ref l_U570._fU0, ref l_U570._fU4, ref l_U570._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -3.00000000, ref l_U573._fU0, ref l_U573._fU4, ref l_U573._fU8 );
    if (NOT l_U488)
    {
        if (NOT l_U489)
        {
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), l_U576._fU0, l_U576._fU4, l_U576._fU8, l_U579._fU0, l_U579._fU4, l_U579._fU8, 1.00000000, 0 ))
                {
                    if ((l_U558) || (l_U559))
                    {
                        if (TIMERA() > 2000)
                        {
                            if (sub_58497( 2, 0 ))
                            {
                                l_U615 = 1;
                                if (sub_58745( 2, "WClift_01", 0 ))
                                {
                                    l_U611 = 1;
                                    l_U489 = 1;
                                }
                            }
                            else
                            {
                                sub_3048( 2, "WClift_01" );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), l_U605._fU0, l_U605._fU4, l_U605._fU8, l_U608._fU0, l_U608._fU4, l_U608._fU8, 1.00000000, 0 )))
                    {
                        sub_3048( 2, "WClift_01" );
                    }
                }
                else if (NOT (IS_CHAR_DEAD( sub_3418() )))
                {
                    if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), l_U605._fU0, l_U605._fU4, l_U605._fU8, l_U608._fU0, l_U608._fU4, l_U608._fU8, 1.00000000, 0 )))
                    {
                        l_U615 = 0;
                    }
                }
            }
        }
        if (NOT l_U489)
        {
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), l_U605._fU0, l_U605._fU4, l_U605._fU8, l_U608._fU0, l_U608._fU4, l_U608._fU8, 1.00000000, 0 ))
                {
                    if (TIMERA() > 2000)
                    {
                        if (NOT l_U611)
                        {
                            if (sub_58497( 2, 0 ))
                            {
                                if (sub_58745( 2, "WClift_01", 0 ))
                                {
                                    l_U612 = 1;
                                    l_U489 = 1;
                                }
                            }
                            else
                            {
                                sub_3048( 2, "WClift_01" );
                            }
                        }
                        else
                        {
                            l_U612 = 1;
                        }
                    }
                }
                else if (NOT l_U615)
                {
                    sub_3048( 2, "WClift_01" );
                }
                l_U611 = 0;
                l_U612 = 0;;
            }
        }
    }
    return;
}

int sub_58497(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_3318() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_3318() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3318() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_58593())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3418() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_58678())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_58593()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_58678()
{
    return sub_8593( 0, 0 );
}

int sub_58745(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_58497( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3318(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_8582();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_59919(unknown uParam0)
{
    int Result;

    Result = 0;
    if (l_U489)
    {
        if (l_U601)
        {
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                if ((IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "GET_IN_LIFT_BOTTOM" )) || (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "GET_IN_LIFT_TOP" )))
                {
                    l_U626 = 1;
                }
            }
            if (l_U626)
            {
                if (NOT (IS_CHAR_DEAD( sub_3418() )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "GET_IN_LIFT_BOTTOM" )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "GET_IN_LIFT_TOP" )))
                        {
                            l_U626 = 0;
                            Result = 1;
                        }
                    }
                }
            }
        }
        else if (l_U612)
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_60365(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT l_U481)
    {
        if (bParam2)
        {
            if (NOT l_U484)
            {
                BEGIN_CAM_COMMANDS( ref l_U483 );
                l_U484 = 1;
            }
            CREATE_CAM( 14, ref l_U482 );
            ATTACH_CAM_TO_OBJECT( l_U482, uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U482, 1 );
            SET_CAM_ATTACH_OFFSET( l_U482, -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                POINT_CAM_AT_PED( l_U482, sub_3418() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U490 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U490 );
            SET_CAM_ACTIVE( l_U482, 1 );
            SET_CAM_PROPAGATE( l_U482, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
        else
        {
            CREATE_CAM( 14, uParam0 );
            ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
            SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                POINT_CAM_AT_PED( (uParam0^), sub_3418() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U490 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U490 );
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
    }
    else if (bParam2)
    {
        SET_CAM_ATTACH_OFFSET( l_U482, -3.00000000, -3.00000000, 0.00000000 );
    }
    else
    {
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
    }
    return;
}

void sub_60820()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_60899(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_DEAD( sub_3418() )))
    {
        if (bParam1)
        {
            if (DOES_CAM_EXIST( l_U482 ))
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U482 );
                SET_CAM_BEHIND_PED( sub_3418() );
                if (l_U484)
                {
                    END_CAM_COMMANDS( ref l_U483 );
                    l_U484 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( (uParam0^) ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( (uParam0^) );
            SET_CAM_BEHIND_PED( sub_3418() );
        }
    }
    return;
}

void sub_61151(unknown uParam0, float fParam1, float fParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    string sVar13;
    int iVar14;

    iVar14 = 1;
    l_U552 = 1;
    l_U556 = fParam1;
    GET_OBJECT_COORDINATES( (uParam0^), ref l_U553._fU0, ref l_U553._fU4, ref l_U553._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref uVar8, ref uVar9 );
    if ((iVar6 == 0) AND (iVar7 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar6, ref iVar7 );
    }
    SET_FOLLOW_PED_PITCH_LIMIT_UP( 25.00000000 );
    SET_FOLLOW_PED_PITCH_LIMIT_DOWN( 25.00000000 );
    if (((iVar7 > 10) AND (iVar7 < 129)) || (l_U488))
    {
        if (l_U553._fU8 > fParam2)
        {
            if (l_U568 == 0.00000000)
            {
                sub_61322( (uParam0^) );
                l_U551 = 4;
            }
            else if (l_U551 == 1)
            {
                sub_56389();
                l_U551 = 0;
            }
        }
        else
        {
            l_U488 = 0;
        }
    }
    else if ((iVar7 < -10) AND (iVar7 > 65407))
    {
        if (NOT sub_61462())
        {
            if (l_U553._fU8 < fParam1)
            {
                if (l_U568 == 0.00000000)
                {
                    sub_61322( (uParam0^) );
                    l_U551 = 1;
                }
                else if (l_U551 == 4)
                {
                    sub_56389();
                    l_U551 = 0;
                }
            }
        }
        else
        {
            sub_56389();
            l_U551 = 0;
        }
    }
    else
    {
        sub_56389();
        l_U551 = 0;
    }
    if (NOT l_U488)
    {
        if (l_U489)
        {
            if (l_U568 < 0.05000000)
            {
                fVar12 = l_U568 * 1000;
                SHAKE_PAD( 0, 5, CEIL( fVar12 ) );
            }
        }
    }
    fVar10 = fParam1 - l_U553._fU8;
    fVar11 = l_U553._fU8 - fParam2;
    if (fVar10 == 0.00000000)
    {
        l_U558 = 0;
        l_U559 = 1;
        l_U538 = 1;
        sVar13 = "WClift_03";
    }
    else if (fVar11 == 0.00000000)
    {
        l_U558 = 1;
        l_U559 = 0;
        l_U538 = 1;
        if (NOT l_U488)
        {
            if (l_U489)
            {
                sVar13 = "WClift_03";
            }
        }
    }
    else
    {
        l_U558 = 0;
        l_U559 = 0;
        sVar13 = "WClift_02";
    }
    if (NOT l_U488)
    {
        if (l_U489)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar13 )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( sVar13 );
            }
        }
    }
    switch (l_U551)
    {
        case 0:
        if (l_U568 > 0.00000000)
        {
            l_U568 -= 0.01000000;
            SLIDE_OBJECT( (uParam0^), l_U553._fU0, l_U553._fU4, l_U569, 0.00000000, 0.00000000, l_U568, iVar14 );
        }
        l_U566 = 0;
        break;
        case 1:
        if (sub_62093( uParam3 ))
        {
            if (fVar10 > 1.00000000)
            {
                if (l_U568 < 0.11000000)
                {
                    l_U568 += 0.01000000;
                }
            }
            else if (l_U568 > 0.03000000)
            {
                l_U568 -= 0.01000000;
            }
            else
            {
                l_U568 += 0.01000000;
            }
            l_U569 = fParam1;
            if (SLIDE_OBJECT( (uParam0^), l_U553._fU0, l_U553._fU4, l_U569, 0.00000000, 0.00000000, l_U568, iVar14 ))
            {
                sub_56389();
                l_U551 = 0;
            }
        }
        break;
        case 4:
        if ((sub_62093( uParam3 )) || (l_U488))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), 1.00000000, 0.50000000, -1.00000000, ref l_U570._fU0, ref l_U570._fU4, ref l_U570._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), -1.00000000, 0.50000000, -3.00000000, ref l_U573._fU0, ref l_U573._fU4, ref l_U573._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_3418() )))
            {
                if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_3418(), l_U570._fU0, l_U570._fU4, l_U570._fU8, l_U573._fU0, l_U573._fU4, l_U573._fU8, 1.00000000, 0 )))
                {
                    if (fVar11 > 1.00000000)
                    {
                        if (l_U568 < 0.11000000)
                        {
                            l_U568 += 0.01000000;
                        }
                    }
                    else if (l_U568 > 0.03000000)
                    {
                        l_U568 -= 0.01000000;
                    }
                    else
                    {
                        l_U568 += 0.01000000;
                    }
                    l_U569 = fParam2;
                    if (SLIDE_OBJECT( (uParam0^), l_U553._fU0, l_U553._fU4, l_U569, 0.00000000, 0.00000000, l_U568, iVar14 ))
                    {
                        sub_56389();
                        l_U551 = 0;
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_61322(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U564 == -1)
        {
            l_U564 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U564, l_U565, uParam0 );
        }
    }
    return;
}

void sub_61462()
{
    int Result;

    Result = 0;
    l_U567 = nil;
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U553._fU0, l_U553._fU4, l_U553._fU8 + 4.00000000, 3.00000000, 0, 1, ref l_U567 );
    if (l_U567 != nil)
    {
        Result = 1;
    }
    return Result;
}

int sub_62093(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_DEAD( sub_3418() )))
    {
        if (l_U566)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3418(), uParam0, "OPERATE_LIFT_SWITCH" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), uParam0, "OPERATE_LIFT_SWITCH", ref fVar3 );
                if (fVar3 > 0.50000000)
                {
                    return 1;
                }
            }
            else if (NOT l_U488)
            {
                TASK_PLAY_ANIM( sub_3418(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
            }
        }
        else if (NOT l_U488)
        {
            TASK_PLAY_ANIM( sub_3418(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U566 = 1;;
    }
    return 0;
}

void sub_62937()
{
    int Result;

    Result = 0;
    if (l_U553._fU8 == l_U556)
    {
        if (l_U552)
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_63472()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    switch (l_U1281)
    {
        case 0:
        sub_52934( l_U1346[0], 1 );
        sub_53725( 0, 1 );
        sub_53725( 2, 1 );
        sub_53725( 3, 1 );
        sub_53725( 4, 1 );
        sub_54609( l_U1531, 1, 0 );
        sub_54609( l_U1582, 1, 0 );
        l_U1281 = 1;
        break;
        case 1:
        if (l_U2392)
        {
            if (sub_63662( l_U1531, 1 ))
            {
                REMOVE_BLIP( l_U2292 );
                if (NOT (sub_34573( l_U1651 )))
                {
                    ;
                }
                l_U2339[3] = 1;
                sub_54853( 0, l_U1515, 0, 1 );
                l_U1281 = 2;
            }
        }
        break;
        case 2:
        if (sub_64758( 0 ))
        {
            sub_15382( 0, 0, 1 );
            l_U1281 = 3;
        }
        break;
        case 3:
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[0], 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.80000000, 0.80000000, 1.50000000, l_U2396 ))
        {
            if (NOT (IS_PED_RAGDOLL( sub_3418() )))
            {
                if (sub_8582())
                {
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    if (DOES_BLIP_EXIST( l_U2293 ))
                    {
                        REMOVE_BLIP( l_U2293 );
                    }
                    CLEAR_PRINTS();
                    SET_PLAYER_CONTROL( sub_3318(), 0 );
                    DISPLAY_RADAR( 0 );
                    if (DOES_CHAR_EXIST( l_U2301 ))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2301 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1289 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1291 );
                    BEGIN_CAM_COMMANDS( ref l_U2175 );
                    SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 2500 );
                    CREATE_CAM( 14, ref l_U2176[0] );
                    uVar5 = sub_14240( 0 );
                    ATTACH_CAM_TO_OBJECT( l_U2176[0], l_U2236[uVar5] );
                    SET_CAM_ATTACH_OFFSET( l_U2176[0], 0.00000000, -4.40000000, 0.40000000 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2176[0], 1 );
                    POINT_CAM_AT_OBJECT( l_U2176[0], l_U2236[uVar5] );
                    SET_CAM_ACTIVE( l_U2176[0], 1 );
                    SET_CAM_PROPAGATE( l_U2176[0], 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_15382( 0, 1, 1 );
                    TASK_SWAP_WEAPON( sub_3418(), 0 );
                    sub_54853( 0, l_U1520, 1, 0 );
                    l_U2376 = 1;
                    if (l_U2390)
                    {
                        l_U2300 = 0;
                    }
                    l_U1281 = 4;
                }
            }
        }
        break;
        case 4:
        if (l_U2539 != 3)
        {
            if (NOT l_U2378)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_3318(), 0 )))
                {
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                }
                sub_52934( l_U1346[1], 1 );
                sub_52934( l_U1346[2], 1 );
                sub_21479( 9 );
                sub_53725( 1, 1 );
                sub_54609( l_U1548, 1, 0 );
                sub_54609( l_U1565, 1, 0 );
                l_U2378 = 1;
            }
            if (l_U2390)
            {
                sub_21479( 9 );
            }
            sub_65685( 0 );
        }
        else if (((NOT l_U2216) AND (NOT l_U2535)) AND (NOT l_U2390))
        {
            l_U2219 = 1;
            sub_67696();
        }
        else
        {
            l_U2535 = 0;
            l_U2216 = 0;
            l_U2215 = 0;
        }
        if (IS_SCREEN_FADING_OUT())
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        END_CAM_COMMANDS( ref l_U2175 );
        l_U2375 = 1;
        if (NOT l_U2384)
        {
            ;
        }
        l_U1281 = 5;;
        break;
        case 5:
        if (l_U2380)
        {
            if (sub_34040())
            {
                l_U1281 = 6;
            }
        }
        if (l_U2397)
        {
            l_U1281 = 6;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -180.16530000, 597.32500000, 114.71330000, 2.00000000, 1.00000000, 1.00000000, 0 ))
        {
            ;
        }
        break;
        case 6:
        if (sub_63662( l_U1548, 0 ))
        {
            sub_54853( 0, l_U1520, 0, 1 );
            l_U1281 = 7;
        }
        break;
        case 7:
        if (NOT l_U2553)
        {
            if (sub_64758( 0 ))
            {
                sub_15382( 0, 0, 1 );
                l_U2538 = 0;
                l_U2553 = 1;
            }
        }
        else
        {
            sub_69358();
        }
        break;
        case 8:
        if (l_U2539 != 3)
        {
            uVar5 = sub_35780();
            sub_65685( l_U1346[uVar5]._fU0 );
        }
        else
        {
            END_CAM_COMMANDS( ref l_U2175 );
            l_U1281 = 9;
        }
        break;
    }
    return;
}

int sub_63662(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, boolean bParam17)
{
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    float fVar25;
    unknown uVar26;

    uVar26 = uParam0._fU0;
    switch (l_U2552)
    {
        case 0:
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2275[uVar26], 0.00000000, -0.80000000, 0.00000000, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( uVar20._fU0, uVar20._fU4, uVar20._fU8, ref uVar23 );
        GET_OBJECT_HEADING( l_U2275[uVar26], ref uVar24 );
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), uVar20._fU0, uVar20._fU4, uVar23, 0.80000000, 0.80000000, 1.50000000, 0 )) AND (sub_58497( 4, 0 )))
        {
            if (sub_58745( 4, "HO_05", 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U2280[0] ))
                {
                    DELETE_OBJECT( ref l_U2280[0] );
                }
                CLEAR_PRINTS();
                CLEAR_HELP();
                SET_PLAYER_CONTROL( sub_3318(), 0 );
                sub_3048( 4, "HO_05" );
                GET_OBJECT_COORDINATES( l_U2275[uVar26], ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U2165 );
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), uVar20._fU0, uVar20._fU4, uVar23, 0.80000000, 0.80000000, 1.50000000, 0 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uParam0._fU56._fU0, uParam0._fU56._fU4, uParam0._fU56._fU8, 2, 20000, 0.10000000 );
                }
                TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar20._fU0, uVar20._fU4, uVar20._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Press_Button", "missray6", 8.00000000, 0, 1, 1, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U2165 );
                TASK_PERFORM_SEQUENCE( sub_3418(), l_U2165 );
                CLEAR_SEQUENCE_TASK( l_U2165 );
                l_U2552 = 1;
            }
        }
        else
        {
            sub_3048( 4, "HO_05" );
        }
        break;
        case 1:
        if (sub_64225( sub_3418(), 1, 0 ))
        {
            SET_PLAYER_CONTROL( sub_3318(), 1 );
            l_U2552 = 2;
        }
        if (IS_CHAR_PLAYING_ANIM( sub_3418(), "missray6", "Press_Button" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), "missray6", "Press_Button", ref fVar25 );
            if (NOT (DOES_OBJECT_EXIST( l_U2280[0] )))
            {
                if (fVar25 > 0.45000000)
                {
                    if (bParam17)
                    {
                        CREATE_OBJECT_NO_OFFSET( -1346357795, uParam0._fU4._fU0, uParam0._fU4._fU4, uParam0._fU4._fU8, ref l_U2280[0], 1 );
                    }
                    else
                    {
                        CREATE_OBJECT_NO_OFFSET( 549562642, uParam0._fU4._fU0, uParam0._fU4._fU4, uParam0._fU4._fU8, ref l_U2280[0], 1 );
                    }
                    SET_OBJECT_HEADING( l_U2280[0], uParam0._fU16 );
                    PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_PUSH_CALL_BUTTON", uParam0._fU4 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2280[0], uParam0._fU20 );
                    FREEZE_OBJECT_POSITION( l_U2280[0], 1 );
                }
            }
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

int sub_64225(unknown uParam0, boolean bParam1, int iParam2)
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

int sub_64758(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar7 = sub_15425( uParam0 );
    GET_GAME_TIMER( ref iVar3 );
    if (NOT l_U2389)
    {
        if ((iVar3 - l_U1346[uVar7]._fU68) >= (l_U1346[uVar7]._fU72 - 500))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.00000000, -1.02500000, -0.28000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            PLAY_SOUND_FROM_POSITION( -1, "HOTEL_ATTACK_LIFT_CHIME", uVar4 );
            if (DOES_OBJECT_EXIST( l_U2280[0] ))
            {
                DELETE_OBJECT( ref l_U2280[0] );
            }
            l_U2389 = 1;
        }
    }
    if ((((iVar3 - l_U1346[uVar7]._fU68) >= l_U1346[uVar7]._fU72) || (l_U2216)) || (l_U2535))
    {
        l_U1346[uVar7]._fU72 = 0;
        l_U2389 = 0;
        return 1;
    }
    return 0;
}

void sub_65685(unknown uParam0)
{
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
    int iVar13;

    uVar7 = sub_15425( uParam0 );
    iVar13 = 0;
    sub_29036( l_U2539, "Lift camera stage...." );
    if (NOT l_U2535)
    {
        if (NOT l_U2215)
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                if (NOT sub_11799())
                {
                    l_U2215 = 1;
                }
            }
        }
        else if ((l_U2539 > 0) AND (NOT l_U2216))
        {
            if (sub_11799())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    CLEAR_PRINTS();
                    DO_SCREEN_FADE_OUT( 500 );
                    WAIT( 1000 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U2216 = 1;
                    l_U2539 = 1;
                }
            }
        }
    }
    else if (l_U2539 > 0)
    {
        l_U2539 = 1;
    }
    switch (l_U2539)
    {
        case 0:
        if (IS_SCREEN_FADING_OUT())
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 625 );
        }
        FORCE_WEATHER( 1 );
        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 3000 );
        if (NOT (DOES_CAM_EXIST( l_U2176[1] )))
        {
            CREATE_CAM( 14, ref l_U2176[1] );
        }
        ATTACH_CAM_TO_OBJECT( l_U2176[1], l_U2231[uVar7] );
        SET_CAM_ATTACH_OFFSET( l_U2176[1], l_U1346[uVar7]._fU44._fU0, l_U1346[uVar7]._fU44._fU4, l_U1346[uVar7]._fU44._fU8 );
        POINT_CAM_AT_OBJECT( l_U2176[1], l_U2231[uVar7] );
        SET_CAM_POINT_OFFSET( l_U2176[1], l_U1346[uVar7]._fU56._fU0, l_U1346[uVar7]._fU56._fU4, l_U1346[uVar7]._fU56._fU8 );
        if (DOES_CAM_EXIST( l_U2176[0] ))
        {
            SET_CAM_ACTIVE( l_U2176[0], 0 );
            SET_CAM_PROPAGATE( l_U2176[0], 0 );
            DESTROY_CAM( l_U2176[0] );
        }
        GET_OBJECT_COORDINATES( l_U2231[uVar7], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        GET_INTERIOR_AT_COORDS( uVar10._fU0, uVar10._fU4, uVar10._fU8, ref uVar8 );
        uVar9 = GET_HASH_KEY( l_U1346[uVar7]._fU4._fU4 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar8, uVar9 );
        DETACH_PED( sub_3418(), 0 );
        SET_CHAR_HEADING( sub_3418(), l_U1346[uVar7]._fU104 - 180.00000000 );
        SET_CAM_ACTIVE( l_U2176[1], 1 );
        SET_CAM_PROPAGATE( l_U2176[1], 1 );
        GET_ROOM_KEY_FROM_OBJECT( l_U2231[uVar7], ref iVar13 );
        while (iVar13 == 0)
        {
            WAIT( 0 );
            GET_ROOM_KEY_FROM_OBJECT( l_U2231[uVar7], ref iVar13 );
        }
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3418(), l_U1346[uVar7]._fU24._fU4 );
        OPEN_SEQUENCE_TASK( ref l_U2165 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_66540(), "missray6", 8.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U2165 );
        TASK_PERFORM_SEQUENCE( sub_3418(), l_U2165 );
        CLEAR_SEQUENCE_TASK( l_U2165 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref uVar3 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar3, l_U1346[uVar7]._fU24._fU4 );
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[uVar7], 0.00000000, -1.02500000, -0.28000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U2393 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U2393, "HOTEL_ATTACK_LIFT_MOTOR_LOOP", uVar4 );
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT l_U2535)
            {
                DO_SCREEN_FADE_IN( 500 );
            }
        }
        l_U2539 = 1;
        break;
        case 1:
        if (sub_64758( uParam0 ))
        {
            STOP_SOUND( l_U2393 );
            RELEASE_SOUND_ID( l_U2393 );
            if (((NOT l_U2377) AND (NOT l_U2216)) AND (NOT l_U2535))
            {
                l_U2377 = 1;
            }
            else if ((NOT l_U2216) AND (NOT l_U2535))
            {
                sub_15382( l_U1346[uVar7]._fU0, 0, 1 );
            }
            else
            {
                sub_14027( ref l_U1346[uVar7] );
            }
            if (l_U2377)
            {
                OPEN_SEQUENCE_TASK( ref l_U2165 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "walk", "missray6", 8.00000000, 1, 1, 1, 0, 1250 );
                CLOSE_SEQUENCE_TASK( l_U2165 );
                TASK_PERFORM_SEQUENCE( sub_3418(), l_U2165 );
                CLEAR_SEQUENCE_TASK( l_U2165 );
                WAIT( 2000 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3418() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 1500 );
            if (NOT l_U2535)
            {
                if (DOES_CAM_EXIST( l_U2176[1] ))
                {
                    SET_CAM_ACTIVE( l_U2176[1], 0 );
                    SET_CAM_PROPAGATE( l_U2176[1], 0 );
                    DESTROY_CAM( l_U2176[1] );
                }
            }
            else if (DOES_CAM_EXIST( l_U2176[0] ))
            {
                SET_CAM_ACTIVE( l_U2176[0], 0 );
                SET_CAM_PROPAGATE( l_U2176[0], 0 );
                DESTROY_CAM( l_U2176[0] );
            }
            DETACH_PED( sub_3418(), 0 );
            SET_CHAR_HEADING( sub_3418(), l_U1346[uVar7]._fU104 - 180.00000000 );;
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if ((l_U2216) || (l_U2535))
            {
                if (NOT l_U2377)
                {
                    l_U2377 = 1;
                }
                GET_ROOM_KEY_FROM_OBJECT( l_U2231[uVar7], ref iVar13 );
                while (iVar13 == 0)
                {
                    WAIT( 0 );
                    GET_ROOM_KEY_FROM_OBJECT( l_U2231[uVar7], ref iVar13 );
                }
                SET_ROOM_FOR_CHAR_BY_NAME( sub_3418(), l_U1346[uVar7]._fU24._fU4 );
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            SET_PLAYER_CONTROL( sub_3318(), 1 );
            sub_3269();;
            l_U1346[uVar7]._fU108 = 0;
            l_U2539 = 3;
        }
        break;
    }
    return;
}

string sub_66540()
{
    unknown uVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        return "Idle_Fix_Hair";
        break;
        case 1:
        return "Idle_Hot_Wipe_Face";
        break;
        case 2:
        return "Idle_Scratch_Head";
        break;
    }
    return "Idle_Fix_Hair";
}

void sub_67696()
{
    boolean bVar2;

    while (NOT bVar2)
    {
        WAIT( 0 );
        if (l_U2417)
        {
            SET_CAM_ATTACH_OFFSET( l_U2176[0], l_U2404, l_U2405, l_U2406 );
            SET_CAM_POINT_OFFSET( l_U2176[0], l_U2407, l_U2408, l_U2409 );
            SET_CAM_FOV( l_U2176[0], l_U2413 );
        }
        if (NOT l_U2217)
        {
            if (NOT sub_11799())
            {
                l_U2217 = 1;
            }
        }
        else if ((l_U1293 > 0) AND (NOT l_U2218))
        {
            if (sub_11799())
            {
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
                WAIT( 1000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U2218 = 1;
                l_U1293 = 2;
            }
        }
        switch (l_U1293)
        {
            case 0:
            SET_PLAYER_CONTROL( sub_3318(), 0 );
            SET_CAM_ACTIVE( l_U2176[1], 0 );
            SET_CAM_PROPAGATE( l_U2176[1], 0 );
            DISPLAY_RADAR( 0 );
            SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 3000 );
            CREATE_CAM( 14, ref l_U2176[0] );
            SET_CAM_POS( l_U2176[0], -150.48320000, 597.35330000, 114.04940000 );
            POINT_CAM_AT_PED( l_U2176[0], sub_3418() );
            SET_CAM_POINT_OFFSET( l_U2176[0], 0.00000000, 0.00000000, 0.00000000 );
            SET_CAM_ACTIVE( l_U2176[0], 1 );
            SET_CAM_PROPAGATE( l_U2176[0], 1 );
            SET_CAM_FOV( l_U2176[0], 6.00000000 );
            CREATE_CAM( 14, ref l_U2176[1] );
            SET_CAM_POS( l_U2176[1], -150.48320000, 597.35330000, 114.04940000 );
            POINT_CAM_AT_PED( l_U2176[1], sub_3418() );
            SET_CAM_POINT_OFFSET( l_U2176[1], 0.00000000, 0.00000000, 0.00000000 );
            SET_CAM_ACTIVE( l_U2176[1], 1 );
            SET_CAM_PROPAGATE( l_U2176[1], 0 );
            SET_CAM_FOV( l_U2176[1], 90.00000000 );
            CREATE_CAM( 3, ref l_U2197[0] );
            SET_CAM_ACTIVE( l_U2197[0], 0 );
            SET_CAM_PROPAGATE( l_U2197[0], 0 );
            GET_GAME_VIEWPORT_ID( ref l_U2337 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2337, "MloRoom_RitzF3" );
            WAIT( 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            DETACH_PED( sub_3418(), 0 );
            SET_CHAR_HEADING( sub_3418(), 273.13780000 );
            GET_GAME_TIMER( ref l_U2221 );
            if (NOT l_U2395)
            {
                ;
            }
            else
            {
                sub_15382( 0, 0, 0 );
            }
            l_U1293 = 1;
            break;
            case 1:
            GET_GAME_TIMER( ref l_U2220 );
            if ((l_U2220 - l_U2221) >= 500)
            {
                SET_CAM_ACTIVE( l_U2176[0], 0 );
                SET_CAM_PROPAGATE( l_U2176[0], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U2197[0], l_U2176[0], l_U2176[1], 2500, 0 );
                SET_CAM_ACTIVE( l_U2197[0], 1 );
                SET_CAM_PROPAGATE( l_U2197[0], 1 );
                GET_GAME_TIMER( ref l_U2221 );
                l_U1293 = 2;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U2220 );
            if (((l_U2220 - l_U2221) >= 4000) || (l_U2218))
            {
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (NOT l_U2218)
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 3000 );
                SET_CAM_ACTIVE( l_U2176[0], 0 );
                SET_CAM_PROPAGATE( l_U2176[0], 0 );
                SET_CAM_ACTIVE( l_U2176[1], 0 );
                SET_CAM_PROPAGATE( l_U2176[1], 0 );
                SET_CAM_ACTIVE( l_U2197[0], 0 );
                SET_CAM_PROPAGATE( l_U2197[0], 0 );
                DESTROY_CAM( l_U2197[0] );
                DESTROY_CAM( l_U2176[0] );
                DESTROY_CAM( l_U2176[1] );
                bVar2 = true;
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                WAIT( 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                GET_GAME_VIEWPORT_ID( ref l_U2337 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2337, "MloRoom_RitzF3" );
                sub_3269();
                l_U2219 = 0;
                if (IS_SCREEN_FADING_OUT())
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                if (l_U2218)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_PLAYER_CONTROL( sub_3318(), 1 );
                DISPLAY_RADAR( 1 );
            }
            break;
        }
    }
    return;
}

void sub_69358()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT l_U1346[I]._fU108)
        {
            if (DOES_OBJECT_EXIST( l_U2231[I] ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U2231[I], 0.00000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 0.80000000, 0.80000000, 1.50000000, l_U2396 ))
                {
                    if (sub_8582())
                    {
                        BEGIN_CAM_COMMANDS( ref l_U2175 );
                        SET_PLAYER_CONTROL( sub_3318(), 0 );
                        DISPLAY_RADAR( 0 );
                        sub_9450( "Player in Lift" );
                        SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 2500 );
                        if (NOT (DOES_CAM_EXIST( l_U2176[0] )))
                        {
                            CREATE_CAM( 14, ref l_U2176[0] );
                        }
                        uVar6 = sub_14240( l_U1346[I]._fU0 );
                        ATTACH_CAM_TO_OBJECT( l_U2176[0], l_U2236[uVar6] );
                        SET_CAM_ATTACH_OFFSET( l_U2176[0], 0.00000000, -4.40000000, 0.40000000 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2176[0], 1 );
                        POINT_CAM_AT_OBJECT( l_U2176[0], l_U2236[uVar6] );
                        SET_CAM_ACTIVE( l_U2176[0], 1 );
                        SET_CAM_PROPAGATE( l_U2176[0], 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        sub_9450( "Closing doors..." );
                        sub_15382( l_U1346[I]._fU0, 1, 1 );
                        sub_9450( "Doors clsoed..." );
                        TASK_SWAP_WEAPON( sub_3418(), 0 );
                        if (l_U1346[I]._fU4._fU0 == l_U1515._fU0)
                        {
                            l_U1346[I]._fU24 = {l_U1520};
                        }
                        else
                        {
                            l_U1346[I]._fU24 = {l_U1515};
                        }
                        sub_54853( l_U1346[I]._fU0, l_U1346[I]._fU24, 1, 0 );
                        l_U1346[I]._fU108 = 1;
                        l_U2539 = 0;
                        l_U1281 = 8;
                    }
                }
            }
        }
    }
    return;
}

void sub_70078()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown[11] uVar5;
    vector vVar17;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    int iVar28;
    string sVar29;
    string sVar30;
    unknown uVar31;
    unknown[10] uVar32;
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
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;

    array(ref uVar5, 11);
    switch (l_U2300)
    {
        case 0:
        if (l_U2378)
        {
            l_U2300 = 5;
        }
        break;
        case 1: break;
        case 2: break;
        case 3: break;
        case 5:
        if (NOT l_U2384)
        {
            if (l_U2375)
            {
                uVar5[0] = l_U1657[0];
                uVar5[1] = l_U1657[10];
                uVar5[2] = l_U1657[11];
                uVar5[3] = l_U1657[13];
                GET_GAME_TIMER( ref l_U2634 );
                GET_CURRENT_CHAR_WEAPON( sub_3418(), ref iVar28 );
                if ((((((((NOT (IS_CHAR_INJURED( l_U1657[15] ))) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1657[15], sub_3418(), 0 )))) AND (NOT (IS_CHAR_ARMED( sub_3418(), 7 )))) AND (NOT (sub_70407( ref uVar5, 4, 1 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -177.06710000, 597.39250000, 114.71330000, 1.00000000, 2.00000000, 1.00000000, 0 )))) AND (NOT l_U2315)) AND (NOT l_U2390)) AND ((NOT l_U2630) || ((l_U2630) AND ((l_U2634 - l_U2633) < 30000))))
                {
                    switch (l_U2583)
                    {
                        case 0:
                        OPEN_SEQUENCE_TASK( ref l_U1688[15] );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3418() );
                        CLOSE_SEQUENCE_TASK( l_U1688[15] );
                        TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                        sub_20231( "RB6_STOP1", ref l_U2585, 6, 1 );
                        GET_GAME_TIMER( ref l_U2633 );
                        l_U2630 = 1;
                        l_U2583++;
                        break;
                        case 1:
                        GET_GAME_TIMER( ref l_U2634 );
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -180.16530000, 597.32500000, 114.71330000, 2.00000000, 1.00000000, 1.00000000, 0 ))) AND ((l_U2634 - l_U2633) < 15000))
                        {
                            if (sub_64225( l_U1657[15], 1, 0 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                            }
                        }
                        else
                        {
                            CLEAR_SEQUENCE_TASK( l_U1688[15] );
                            OPEN_SEQUENCE_TASK( ref l_U1688[15] );
                            TASK_AIM_GUN_AT_CHAR( 0, sub_3418(), 100000 );
                            CLOSE_SEQUENCE_TASK( l_U1688[15] );
                            if (NOT (IS_CHAR_DEAD( l_U1657[15] )))
                            {
                                SET_CURRENT_CHAR_WEAPON( l_U1657[15], 7, 0 );
                                TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                            }
                            sub_71049( ref l_U2585, 0 );
                            CLEAR_PRINTS();
                            sub_20231( "RB6_STOP2", ref l_U2585, 7, 1 );
                            l_U2583++;
                        }
                        break;
                        case 2:
                        if (sub_64225( l_U1657[15], 1, 0 ))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                        }
                        break;
                    }
                }
                else if (NOT l_U2339[0])
                {
                    SET_PED_IS_BLIND_RAGING( sub_3418(), 1 );
                    sub_71049( ref l_U2585, 0 );
                    sub_20231( "RB6_STOP3", ref l_U2585, 6, 1 );
                    l_U2339[0] = 1;
                    l_U1315[15] = 0;
                }
                if (NOT (IS_CHAR_DEAD( l_U1657[15] )))
                {
                    if (NOT l_U800[15]._fU4)
                    {
                        if (NOT l_U1315[15])
                        {
                            SET_CURRENT_CHAR_WEAPON( l_U1657[15], 7, 1 );
                        }
                        l_U800[15]._fU4 = 1;
                    }
                }
                else if (NOT l_U2621)
                {
                    GET_DEAD_CHAR_PICKUP_COORDS( l_U1657[15], ref vVar20.x, ref vVar20.y, ref vVar20.z );
                    GET_WEAPONTYPE_MODEL( 11, ref l_U2635 );
                    vVar20.z += 0.50000000;
                    l_U2621 = 1;
                }
                if (NOT l_U800[0]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1657[0] )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1657[0], 13, 0 );
                    }
                    l_U800[0]._fU4 = 1;
                }
                if (NOT l_U800[10]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1657[10] )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1657[10], 13, 0 );
                    }
                    l_U800[10]._fU4 = 1;
                }
                if (NOT l_U800[11]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1657[11] )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1657[11], 12, 0 );
                    }
                    l_U800[11]._fU4 = 1;
                }
                if (NOT l_U800[13]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1657[13] )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1657[13], 13, 0 );
                    }
                    l_U800[13]._fU4 = 1;
                }
                l_U800[17]._fU4 = 1;
                l_U800[16]._fU4 = 1;
                l_U800[27]._fU4 = 1;;
            }
        }
        else if (l_U2375)
        {
            uVar5[0] = l_U1657[0];
            uVar5[1] = l_U1657[10];
            uVar5[2] = l_U1657[11];
            uVar5[3] = l_U1657[12];
            uVar5[4] = l_U1657[13];
            GET_CURRENT_CHAR_WEAPON( sub_3418(), ref iVar28 );
            if ((((NOT (IS_CHAR_INJURED( l_U1657[15] ))) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1657[15], sub_3418(), 0 )))) AND (iVar28 == 0)) AND (NOT (sub_70407( ref uVar5, 5, 1 ))))
            {
                switch (l_U2583)
                {
                    case 0:
                    OPEN_SEQUENCE_TASK( ref l_U1688[15] );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3418() );
                    CLOSE_SEQUENCE_TASK( l_U1688[15] );
                    TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                    sub_20231( "RB6_GO1", ref l_U2585, 6, 1 );
                    l_U2583++;
                    break;
                    case 1:
                    if (sub_64225( l_U1657[15], 1, 0 ))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1657[15], l_U1688[15] );
                    }
                    break;
                }
            }
            else if (sub_34573( l_U2585 ))
            {
                sub_71049( ref l_U2585, 0 );
                sub_20231( "RB6_G02", ref l_U2585, 6, 1 );
            }
            l_U2384 = 0;
            l_U2315 = 1;;
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -152.63110000, 594.54930000, 114.71330000, 4.00000000, 1.00000000, 1.00000000, l_U2396 ))
        {
            if (NOT l_U2380)
            {
                l_U2300 = 6;
            }
            else
            {
                l_U2300 = 8;
            }
            if (NOT l_U2388)
            {
                sub_21479( 10 );
                sub_21479( 14 );
                l_U2388 = 1;
            }
        }
        break;
        case 4: break;
        case 6:
        if (NOT l_U2384)
        {
            if (NOT l_U800[16]._fU4)
            {
                ;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -152.83660000, 594.45110000, 114.71330000, 3.00000000, 1.00000000, 1.00000000, 0 ))
        {
            if (NOT l_U2384)
            {
                if (NOT l_U2517)
                {
                    l_U2517 = 1;
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -150.36470000, 582.42190000, 116.71220000, 1.00000000, 1.00000000, 1.00000000, l_U2396 ))
        {
            ;
        }
        if (NOT l_U1315[18])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -150.42590000, 589.00310000, 118.71320000, 1.00000000, 1.00000000, 1.00000000, l_U2396 ))
            {
                if (NOT l_U2384)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1657[18] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1688[18] );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, -154.30210000, 592.29770000, 117.71250000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -154.30210000, 592.29770000, 117.71250000, 3, -2, 0.50000000 );
                        TASK_COMBAT( 0, sub_3418() );
                        CLOSE_SEQUENCE_TASK( l_U1688[18] );
                        SET_CHAR_DECISION_MAKER( l_U1657[18], l_U2167 );
                        SET_COMBAT_DECISION_MAKER( l_U1657[18], l_U2171 );
                        TASK_PERFORM_SEQUENCE( l_U1657[18], l_U1688[18] );
                        SET_CHAR_VISIBLE( l_U1657[18], 1 );
                        l_U1315[18] = 1;
                    }
                }
                else if (DOES_CHAR_EXIST( l_U1657[18] ))
                {
                    DELETE_CHAR( ref l_U1657[18] );
                }
            }
        }
        else if (NOT l_U2628)
        {
            if (NOT (IS_CHAR_DEAD( l_U1657[18] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U1657[18], -154.53390000, 592.36980000, 118.71750000, 1.00000000, 2.00000000, 1.00000000, 0 ))
                {
                    sub_20231( "RB6_MOVES", ref l_U2609, 6, 1 );
                    l_U2628 = 1;
                }
            }
        }
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -158.55940000, 592.51500000, 117.71330000, 2.00000000, 2.00000000, 2.00000000, l_U2396 )) || (sub_72970( 0 )))
        {
            if (l_U2384)
            {
                if (DOES_CHAR_EXIST( l_U1657[3] ))
                {
                    DELETE_CHAR( ref l_U1657[3] );
                }
                l_U1657[3] = sub_21943( l_U1282, 23, -163.86220000, 595.89250000, 118.78520000, 244.99010000, 7, "MloRoom_RitzPEN", 1 );
                l_U800[3]._fU0 = l_U1657[3];
                l_U800[3]._fU40 = 10;
                l_U800[3]._fU28 = {-171.66860000, 597.19130000, 119.03410000};
                SET_CURRENT_CHAR_WEAPON( l_U1657[3], 0, 0 );
                l_U2319 = 1;
            }
            l_U2300 = 7;
        }
        break;
        case 7:
        uVar5[0] = l_U1657[7];
        uVar5[1] = l_U1657[4];
        uVar5[2] = l_U2104[1];
        uVar5[3] = l_U1657[3];
        uVar5[4] = l_U1657[6];
        uVar5[5] = l_U1657[5];
        if (NOT l_U2384)
        {
            if ((((((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -161.26190000, 592.58940000, 117.71250000, 2.00000000, 2.00000000, 2.00000000, l_U2396 )) || (sub_70407( ref uVar5, 6, 1 ))) || (IS_BULLET_IN_AREA( -176.81540000, 595.74780000, 119.29890000, 4.00000000, 1 ))) || (sub_72970( 0 ))) || (l_U2383)) || (l_U2315))
            {
                l_U2552 = 0;
                sub_17266( ref l_U1346[0] );
                l_U2380 = 1;
                if (DOES_BLIP_EXIST( l_U2164 ))
                {
                    REMOVE_BLIP( l_U2164 );
                }
                if (NOT l_U2339[7])
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        sub_52762();
                        l_U2339[7] = 1;
                    }
                }
                if (NOT l_U1315[3])
                {
                    l_U1315[3] = 1;
                }
            }
            if (l_U2380)
            {
                l_U2300 = 8;
                l_U1315[6] = 0;
                l_U1315[3] = 0;
                if (NOT l_U2339[7])
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        sub_52762();
                        l_U2339[7] = 1;
                    }
                }
            }
        }
        else
        {
            GET_CURRENT_CHAR_WEAPON( sub_3418(), ref iVar28 );
            if (((((NOT (IS_CHAR_INJURED( l_U1657[3] ))) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1657[3], sub_3418(), 0 )))) AND (iVar28 == 0)) AND (NOT (sub_70407( ref uVar5, 5, 1 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -165.20890000, 595.89720000, 118.78520000, 1.50000000, 6.00000000, 1.00000000, 0 ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -161.75030000, 592.90700000, 118.78530000, 1.50000000, 6.00000000, 1.00000000, 0 ))
                {
                    switch (l_U2584)
                    {
                        case 0:
                        if (NOT (IS_CHAR_DEAD( l_U1657[3] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1688[3] );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3418() );
                            CLOSE_SEQUENCE_TASK( l_U1688[3] );
                            TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                            sub_20231( "RB6_GO3", ref l_U2591, 6, 1 );
                            GET_GAME_TIMER( ref l_U2221 );
                            l_U2584++;
                        }
                        break;
                        case 1:
                        GET_GAME_TIMER( ref l_U2220 );
                        if ((l_U2220 - l_U2221) < 5000)
                        {
                            if (sub_64225( l_U1657[3], 1, 0 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                            }
                        }
                        else
                        {
                            CLEAR_SEQUENCE_TASK( l_U1688[3] );
                            OPEN_SEQUENCE_TASK( ref l_U1688[3] );
                            TASK_AIM_GUN_AT_CHAR( 0, sub_3418(), 100000 );
                            CLOSE_SEQUENCE_TASK( l_U1688[3] );
                            if (NOT (IS_CHAR_DEAD( l_U1657[3] )))
                            {
                                SET_CURRENT_CHAR_WEAPON( l_U1657[3], 7, 0 );
                                TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                            }
                            l_U2584++;
                        }
                        break;
                        case 2:
                        if (sub_64225( l_U1657[3], 1, 0 ))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                        }
                        break;
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -164.70670000, 595.88010000, 118.78520000, 4.00000000, 6.00000000, 2.00000000, 0 ))
            {
                sub_71049( ref l_U2591, 0 );
                sub_20231( "RB6_GO4", ref l_U2591, 6, 1 );
                l_U2384 = 0;
                l_U2315 = 1;
                CLEAR_SEQUENCE_TASK( l_U1688[3] );
            }
        }
        break;
        case 8:
        l_U800[19]._fU4 = 1;
        if (NOT l_U2339[7])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_52762();
                l_U2339[7] = 1;
            }
        }
        if (NOT l_U1315[6])
        {
            OPEN_SEQUENCE_TASK( ref l_U1688[6] );
            TASK_COMBAT( 0, sub_3418() );
            CLOSE_SEQUENCE_TASK( l_U1688[6] );
            if (NOT (IS_CHAR_INJURED( l_U1657[6] )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U1657[6], 13, 0 );
                SET_CHAR_DECISION_MAKER( l_U1657[6], l_U2167 );
                SET_CHAR_ACCURACY( l_U1657[6], 60 );
                TASK_PERFORM_SEQUENCE( l_U1657[6], l_U1688[6] );
                CLEAR_SEQUENCE_TASK( l_U1688[6] );
            }
            l_U1315[6] = 1;
        }
        else if (NOT l_U2379)
        {
            if (NOT (IS_CHAR_INJURED( l_U1657[6] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1657[6] );
                SET_CURRENT_CHAR_WEAPON( l_U1657[6], 13, 0 );
                SET_CHAR_DECISION_MAKER( l_U1657[6], l_U2167 );
                TASK_COMBAT( l_U1657[6], sub_3418() );
                l_U2379 = 1;
            }
        }
        if (NOT l_U2319)
        {
            if (NOT l_U1315[3])
            {
                OPEN_SEQUENCE_TASK( ref l_U1688[3] );
                TASK_COMBAT( 0, sub_3418() );
                CLOSE_SEQUENCE_TASK( l_U1688[3] );
                if (NOT (IS_CHAR_INJURED( l_U1657[3] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U1657[3], 11, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1657[3], l_U2167 );
                    TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                    CLEAR_SEQUENCE_TASK( l_U1688[3] );
                }
                l_U1315[3] = 1;
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U1657[3] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[3], 7, 0 );
            l_U800[3]._fU4 = 1;
        }
        uVar5[0] = l_U1657[19];
        if (NOT l_U1315[2])
        {
            if (((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -171.80600000, 596.55140000, 118.03410000, 3.00000000, 3.00000000, 3.00000000, l_U2396 )) || (sub_70407( ref uVar5, 1, 1 ))) || (l_U2383))
            {
                l_U800[2]._fU4 = 1;
            }
        }
        if (NOT l_U1315[7])
        {
            OPEN_SEQUENCE_TASK( ref l_U1688[7] );
            TASK_COMBAT( 0, sub_3418() );
            CLOSE_SEQUENCE_TASK( l_U1688[7] );
            if (NOT (IS_CHAR_INJURED( l_U1657[7] )))
            {
                GIVE_WEAPON_TO_CHAR( l_U1657[7], 13, 3000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U1657[7], 13, 0 );
                SET_CHAR_DECISION_MAKER( l_U1657[7], l_U2167 );
                TASK_PERFORM_SEQUENCE( l_U1657[7], l_U1688[7] );
                SET_CHAR_ACCURACY( l_U1657[7], 60 );
                l_U1315[7] = 1;
            }
            CLEAR_SEQUENCE_TASK( l_U1688[7] );
        }
        if (NOT l_U1315[4])
        {
            OPEN_SEQUENCE_TASK( ref l_U1688[4] );
            TASK_COMBAT( 0, sub_3418() );
            CLOSE_SEQUENCE_TASK( l_U1688[4] );
            if (NOT (IS_CHAR_INJURED( l_U1657[4] )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U1657[4], 13, 0 );
                SET_CHAR_DECISION_MAKER( l_U1657[4], l_U2167 );
                TASK_PERFORM_SEQUENCE( l_U1657[4], l_U1688[4] );
                SET_CHAR_ACCURACY( l_U1657[4], 60 );
                l_U1315[4] = 1;
            }
            CLEAR_SEQUENCE_TASK( l_U1688[4] );
        }
        if (NOT l_U1315[5])
        {
            uVar5[0] = l_U1657[7];
            uVar5[1] = l_U1657[4];
            uVar5[2] = l_U2104[1];
            OPEN_SEQUENCE_TASK( ref l_U1688[5] );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -184.50240000, 592.35510000, 121.77060000, 3, -2, 0.50000000 );
            TASK_COMBAT( 0, sub_3418() );
            CLOSE_SEQUENCE_TASK( l_U1688[5] );
            if (NOT (IS_CHAR_INJURED( l_U1657[5] )))
            {
                SET_CHAR_COORDINATES( l_U1657[5], -184.42150000, 588.81930000, 122.77910000 );
                GIVE_WEAPON_TO_CHAR( l_U1657[5], 13, 3000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U1657[5], 13, 0 );
                SET_CHAR_ACCURACY( l_U1657[5], 60 );
                TASK_PERFORM_SEQUENCE( l_U1657[5], l_U1688[5] );
                l_U1315[5] = 1;
            }
            CLEAR_SEQUENCE_TASK( l_U1688[5] );
        }
        else if (NOT (IS_CHAR_INJURED( l_U1657[5] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U1657[5], 29, ref iVar2 );
            if (iVar2 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U1657[5], ref iVar3 );
                if (iVar3 > 0)
                {
                    SET_CHAR_RELATIONSHIP( l_U1657[5], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1657[5], l_U2167 );
                    SET_COMBAT_DECISION_MAKER( l_U1657[5], l_U2170 );
                }
            }
        }
        if (NOT l_U2623)
        {
            if (NOT l_U2116[1])
            {
                GET_GAME_VIEWPORT_ID( ref uVar27 );
                if (CAM_IS_SPHERE_VISIBLE( uVar27, -180.49910000, 594.79220000, 118.29610000, 2.00000000 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2112[1] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -182.05860000, 584.03720000, 118.30740000, 3, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U2112[1] );
                    if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[1], 1 );
                        TASK_PERFORM_SEQUENCE( l_U2104[1], l_U2112[1] );
                    }
                    CLEAR_SEQUENCE_TASK( l_U2112[1] );
                    l_U2116[1] = 1;
                }
            }
            else if (NOT l_U2617[1])
            {
                if (NOT (IS_CHAR_DEAD( l_U2104[1] )))
                {
                    if (sub_64225( l_U2104[1], 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2112[1] );
                        TASK_COMBAT( 0, sub_3418() );
                        CLOSE_SEQUENCE_TASK( l_U2112[1] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[1], 0 );
                        SET_CHAR_DECISION_MAKER( l_U2104[1], l_U2167 );
                        SET_CHAR_PROOFS( l_U2104[1], 0, 0, 0, 0, 0 );
                        SET_CHAR_RELATIONSHIP( l_U2104[1], 5, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U2104[1], l_U2170 );
                        sub_76518( ref l_U2104[1], 15 );
                        if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2104[1], l_U2112[1] );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2112[1] );
                        l_U2617[1] = 1;
                    }
                }
            }
            else if (NOT l_U2624)
            {
                uVar5[0] = l_U1657[19];
                uVar5[1] = l_U1657[2];
                if (sub_70407( ref uVar5, 2, 2 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2104[1] )))
                    {
                        CLEAR_CHAR_TASKS( l_U2104[1] );
                        SET_CHAR_DECISION_MAKER( l_U2104[1], l_U2168 );
                        FORCE_CHAR_TO_DROP_WEAPON( l_U2104[1] );
                        OPEN_SEQUENCE_TASK( ref l_U2112[1] );
                        TASK_PLAY_ANIM( 0, "plead", "missray6", 1.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U2112[1] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[1], 1 );
                        if ((NOT (IS_CHAR_ON_SCREEN( l_U2104[1] ))) || ((IS_CHAR_ON_SCREEN( l_U2104[1] )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -180.11020000, 597.69090000, 119.29890000, 3.00000000, 3.00000000, 1.00000000, 0 )))))
                        {
                            SET_CHAR_COORDINATES( l_U2104[1], -181.55740000, 583.43430000, 118.30660000 );
                            SET_CHAR_HEADING( l_U2104[1], 14.13900000 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2104[1], l_U2112[1] );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2112[1] );
                    }
                    l_U2624 = 1;
                }
            }
            else
            {
                sub_78044();
            };;;
        }
        if (NOT (IS_CHAR_DEAD( l_U1657[9] )))
        {
            if (((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -184.11470000, 591.30250000, 121.76770000, 2.00000000, 2.00000000, 2.00000000, l_U2396 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1657[9], sub_3418(), 0 ))) || (l_U2383))
            {
                if (NOT l_U1315[9])
                {
                    OPEN_SEQUENCE_TASK( ref l_U1688[9] );
                    TASK_ACHIEVE_HEADING( 0, 95.52920000 );
                    TASK_COMBAT( 0, sub_3418() );
                    CLOSE_SEQUENCE_TASK( l_U1688[9] );
                    if (NOT (IS_CHAR_INJURED( l_U1657[9] )))
                    {
                        SET_CHAR_DECISION_MAKER( l_U1657[9], l_U2167 );
                        SET_COMBAT_DECISION_MAKER( l_U1657[9], l_U2170 );
                        TASK_PERFORM_SEQUENCE( l_U1657[9], l_U1688[9] );
                        l_U1315[9] = 1;
                    }
                    CLEAR_SEQUENCE_TASK( l_U1688[9] );
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -181.66540000, 591.33340000, 124.02000000, 1.00000000, 1.00000000, 1.00000000, l_U2396 ))
        {
            if (NOT l_U800[20]._fU4)
            {
                sub_21479( 12 );
                WAIT( 0 );
                l_U800[20]._fU4 = 1;
                l_U800[19]._fU4 = 1;
                l_U800[21]._fU4 = 1;
            }
        }
        if (NOT l_U2615)
        {
            if (NOT l_U2116[0])
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -180.76160000, 585.26310000, 122.77910000, 2.00000000, 1.00000000, 1.00000000, 0 )) || (sub_80289()))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65356, 586, 123, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65354, 586, 123, 0, 0.00000000 );
                    OPEN_SEQUENCE_TASK( ref l_U2112[0] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Plyr_BedSit_OUT_LHS", "missray6", 4.00000000, 0, 0, 0, 0, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3418() );
                    TASK_PLAY_ANIM( 0, "plead", "missray6", 1.00000000, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U2112[0] );
                    if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[0], 0 );
                        TASK_PERFORM_SEQUENCE( l_U2104[0], l_U2112[0] );
                    }
                    l_U2116[0] = 1;
                    CLEAR_SEQUENCE_TASK( l_U2112[0] );
                    if (NOT l_U2330[0])
                    {
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( -180.25330000, 578.36830000, 121.77900000 );
                        TASK_EXTEND_ROUTE( -180.34550000, 588.94460000, 121.77110000 );
                        TASK_EXTEND_ROUTE( -174.12080000, 588.60390000, 118.77200000 );
                        TASK_EXTEND_ROUTE( -174.62610000, 593.61160000, 118.28600000 );
                        TASK_EXTEND_ROUTE( -174.62610000, 593.61160000, 118.28600000 );
                        TASK_EXTEND_ROUTE( -164.21270000, 596.32100000, 117.71070000 );
                        TASK_EXTEND_ROUTE( -161.54980000, 592.33000000, 117.71240000 );
                        OPEN_SEQUENCE_TASK( ref l_U2325[0] );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -152.89270000, 589.79460000, 117.71270000, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U2325[0] );
                        if (NOT (IS_CHAR_INJURED( l_U2320[0] )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2320[0], l_U2325[0] );
                            SET_CHAR_DECISION_MAKER( l_U2320[0], l_U2168 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2320[0], 1 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2325[0] );
                        l_U2330[0] = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
            {
                IS_CHAR_PLAYING_ANIM( l_U2104[0], "missray6", "plead" );
                SET_CHAR_READY_TO_BE_EXECUTED( l_U2104[0], 1 );
                if (NOT (IS_CHAR_INJURED( l_U2320[0] )))
                {
                    sub_9450( "Not injured" );
                    sub_20231( "RB6_LEAVE", ref l_U2597, 6, 1 );
                }
                l_U2615 = 1;
            }
        }
        else if ((NOT (IS_CHAR_INJURED( l_U2104[0] ))) || (l_U2542))
        {
            if (NOT l_U2524)
            {
                if (NOT l_U2542)
                {
                    if (sub_51657( sub_3418(), l_U2104[0] ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3418(), l_U2104[0], 5.00000000, 5.00000000, 0 ))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT (sub_34573( l_U2597 )))
                                {
                                    if (NOT (sub_34573( l_U2603 )))
                                    {
                                        if (NOT l_U2626)
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U2320[0] )))
                                            {
                                                sub_20231( "RB6_SCREAM", ref l_U2603, 6, 1 );
                                            }
                                            l_U2626 = 1;
                                        }
                                        else if (NOT (sub_34573( l_U2546 )))
                                        {
                                            if (NOT l_U2622)
                                            {
                                                sub_20231( "RB6_BEGS", ref l_U2546, 6, 1 );
                                                GET_GAME_TIMER( ref l_U2631 );
                                                l_U2622 = 1;
                                            }
                                            else
                                            {
                                                GET_GAME_TIMER( ref l_U2632 );
                                                if ((l_U2632 - l_U2631) > 10000)
                                                {
                                                    sub_20231( "RB6_BEGS", ref l_U2546, 6, 1 );
                                                    GET_GAME_TIMER( ref l_U2631 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U2104[0], "missray6", "plead" ))
                    {
                        if (NOT (IS_PED_RAGDOLL( l_U2104[0] )))
                        {
                            l_U2627 = 0;
                            GET_CHAR_COORDINATES( l_U2104[0], ref vVar20.x, ref vVar20.y, ref vVar20.z );
                            GET_CHAR_COORDINATES( sub_3418(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                            uVar23 = {vVar17 - vVar20};
                            GET_HEADING_FROM_VECTOR_2D( uVar23._fU0, uVar23._fU4, ref uVar26 );
                            SET_CHAR_HEADING( l_U2104[0], uVar26 );
                        }
                    }
                    else if (NOT (IS_PED_RAGDOLL( l_U2104[0] )))
                    {
                        if (NOT l_U2627)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U2112[0] );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3418() );
                            TASK_PLAY_ANIM( 0, "plead", "missray6", 1.00000000, 1, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U2112[0] );
                            if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U2104[0], l_U2112[0] );
                            }
                            CLEAR_SEQUENCE_TASK( l_U2112[0] );
                            l_U2627 = 1;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
                    {
                        sVar29 = "missray6";
                        sVar30 = "plead";
                        GET_SCRIPT_TASK_STATUS( l_U2104[0], 29, ref uVar31 );
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U2104[0], sVar29, sVar30 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
                            {
                                if (GET_CHAR_READY_TO_BE_EXECUTED( l_U2104[0] ))
                                {
                                    SET_CHAR_READY_TO_BE_EXECUTED( l_U2104[0], 0 );
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U2104[0] )))
                        {
                            if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( l_U2104[0] )))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( l_U2104[0], 1 );
                            }
                        }
                    }
                }
            }
            if (NOT l_U2616)
            {
                if (sub_82176( l_U2104[0] ))
                {
                    l_U2616 = 1;
                }
            }
            else if (sub_82426( -179.49590000, 577.18310000, 121.77870000, 90.00000000, l_U2104[0] ))
            {
                STOP_PED_SPEAKING( sub_3418(), 0 );
                sub_20231( "RB6_ISAAC", ref l_U2529, 6, 1 );
                STOP_PED_SPEAKING( sub_3418(), 1 );
                l_U2524 = 1;
            }
        }
        else if (sub_34573( l_U2597 ))
        {
            sub_71049( ref l_U2597, 0 );
        }
        if (sub_34573( l_U2546 ))
        {
            sub_71049( ref l_U2546, 0 );
        };;;
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -181.66540000, 591.33340000, 124.02000000, 2.00000000, 2.00000000, 2.00000000, l_U2396 )) || (l_U2383))
        {
            if (NOT l_U1315[8])
            {
                OPEN_SEQUENCE_TASK( ref l_U1688[8] );
                TASK_COMBAT( 0, sub_3418() );
                CLOSE_SEQUENCE_TASK( l_U1688[8] );
                if (NOT (IS_CHAR_INJURED( l_U1657[8] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U1657[8], 12, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1657[8], l_U2167 );
                    SET_COMBAT_DECISION_MAKER( l_U1657[8], l_U2174 );
                    TASK_PERFORM_SEQUENCE( l_U1657[8], l_U1688[8] );
                    l_U1315[8] = 1;
                }
                CLEAR_SEQUENCE_TASK( l_U1688[8] );
                OPEN_SEQUENCE_TASK( ref l_U1688[14] );
                TASK_COMBAT( 0, sub_3418() );
                CLOSE_SEQUENCE_TASK( l_U1688[14] );
                if (NOT (IS_CHAR_INJURED( l_U1657[14] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U1657[14], 12, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1657[14], l_U2167 );
                    SET_COMBAT_DECISION_MAKER( l_U1657[14], l_U2174 );
                    TASK_PERFORM_SEQUENCE( l_U1657[14], l_U1688[14] );
                    l_U1315[14] = 1;
                }
                CLEAR_SEQUENCE_TASK( l_U1688[14] );
            }
            if (NOT l_U2116[2])
            {
                OPEN_SEQUENCE_TASK( ref l_U2112[2] );
                TASK_COMBAT( 0, sub_3418() );
                CLOSE_SEQUENCE_TASK( l_U2112[2] );
                if (NOT (IS_CHAR_INJURED( l_U2104[2] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[2], 1 );
                    SET_COMBAT_DECISION_MAKER( l_U2104[2], l_U2172 );
                    SET_CHAR_DECISION_MAKER( l_U2104[2], l_U2167 );
                    GIVE_WEAPON_TO_CHAR( l_U2104[2], 7, 3000, 0 );
                    TASK_PERFORM_SEQUENCE( l_U2104[2], l_U2112[2] );
                    CLEAR_SEQUENCE_TASK( l_U2112[2] );
                }
                l_U2116[2] = 1;
            }
            else if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( l_U2104[2], -183.44420000, 578.25760000, 125.84590000, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    ;
                }
            }
        }
        if (sub_34040())
        {
            l_U2300 = 9;
        }
        break;
        case 9:
        if (NOT l_U2163)
        {
            if (sub_34040())
            {
                sub_21479( 11 );
                l_U800[22]._fU4 = 1;
                l_U800[23]._fU4 = 1;
                l_U800[24]._fU4 = 1;
                l_U800[25]._fU4 = 1;
                if (NOT l_U2383)
                {
                    l_U2300 = 11;
                }
                else
                {
                    l_U2300 = 11;
                }
            }
        }
        break;
        case 10: break;
        case 11:
        if (NOT (sub_34573( l_U2529 )))
        {
            l_U2386 = 1;
            l_U2397 = 1;
            l_U2385 = 1;
            CLEAR_PRINTS();
            PRINT_NOW( "HO_13", 7500, 1 );
            if (NOT l_U2380)
            {
                l_U2380 = 1;
            }
            l_U2300 = 14;
        }
        break;
        case 12:
        l_U2300 = 13;
        break;
        case 13:
        uVar5[0] = l_U1657[8];
        uVar5[1] = l_U1657[14];
        uVar5[2] = l_U2104[2];
        uVar5[3] = l_U1657[9];
        if (((((((LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -175.98610000, 590.46870000, 125.80560000, 2.00000000, 2.00000000, 2.00000000, l_U2396 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -179.54500000, 595.03110000, 126.78840000, 5.50000000, 5.00000000, 3.00000000, l_U2396 ))) || (sub_70407( ref uVar5, 4, 1 ))) || (sub_85921( ref uVar5, 4, 1 ))) || (IS_BULLET_IN_AREA( -179.20300000, 580.97000000, 126.85030000, 5.50000000, 1 ))) || (IS_BULLET_IN_AREA( -179.01100000, 589.83650000, 126.83510000, 5.50000000, 1 ))) || (sub_86090()))
        {
            SET_PED_IS_BLIND_RAGING( sub_3418(), 1 );
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3318(), 0 )))
            {
                SET_WANTED_MULTIPLIER( 0.00000000 );
            }
            l_U2300 = 7;
        }
        break;
    }
    if (l_U2384)
    {
        if (((l_U2300 == 5) || (l_U2300 == 6)) || (l_U2300 == 7))
        {
            uVar5[0] = l_U1657[0];
            uVar5[1] = l_U1657[10];
            uVar5[2] = l_U1657[11];
            uVar5[3] = l_U1657[12];
            uVar5[4] = l_U1657[13];
            if (sub_70407( ref uVar5, 5, 1 ))
            {
                sub_86338();
                l_U2384 = 0;
                l_U2315 = 1;
            }
        }
    }
    if (l_U2300 >= 8)
    {
        sub_86338();
    }
    if (DOES_CHAR_EXIST( l_U2320[0] ))
    {
        if (l_U2330[0])
        {
            if (sub_64225( l_U2320[0], 1, 0 ))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U2320[0] )))
                {
                    DELETE_CHAR( ref l_U2320[0] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1288 );
                }
            }
        }
    }
    if (NOT l_U2384)
    {
        if (NOT l_U2383)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -150.74840000, 589.33830000, 114.71330000, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                if (NOT l_U800[16]._fU4)
                {
                    if (l_U2394)
                    {
                        ;
                    }
                }
            }
        }
    }
    if (NOT l_U800[28]._fU4)
    {
        if (l_U800[22]._fU4)
        {
            if (sub_86999( -171.83260000, 590.88800000, 127.04370000, 5.00000000 ))
            {
                l_U800[28]._fU4 = 1;
            }
        }
    }
    if (NOT l_U2561)
    {
        if (l_U2560)
        {
            sub_29001();
        }
        else if (IS_EXPLOSION_IN_AREA( -1, -185.46970000, 577.50300000, 125.00000000, -175.74670000, 587.29420000, 150.00000000 ))
        {
            sub_9450( "Explosion triggered!" );
            if (DOES_CHAR_EXIST( l_U2104[2] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
                {
                    if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2104[2], sub_3418(), 0 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -177.35420000, 594.56390000, 126.73830000, 9.00000000, 16.00000000, 2.00000000, 0 )) || (sub_28840( sub_3418() )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2104[2], -178.88610000, 578.51280000, 126.98570000, 10.00000000, 3.00000000, 1.00000000, 0 ))
                            {
                                if (IS_EXPLOSION_IN_AREA( -1, -185.46970000, 577.50300000, 125.00000000, -175.74670000, 587.29420000, 150.00000000 ))
                                {
                                    WAIT( 500 );
                                    l_U2560 = 1;
                                }
                            }
                            else
                            {
                                sub_9450( "target ped not located" );
                            }
                        }
                        else
                        {
                            sub_9450( "Not located/Char is outside" );
                        }
                    }
                    else
                    {
                        sub_9450( "Char damaged by player" );
                    }
                }
                else
                {
                    sub_9450( "Char is dead" );
                }
            }
            else
            {
                sub_9450( "Char doesn't exist" );
            }
        }
        else
        {
            sub_9450( "No explosion in area" );
        }
    }
    if (NOT l_U2625)
    {
        if (NOT l_U2163)
        {
            if (NOT (IS_CHAR_DEAD( l_U2104[2] )))
            {
                GET_CHAR_COORDINATES( l_U2104[2], ref vVar20.x, ref vVar20.y, ref vVar20.z );
                if (vVar20.z < 111.42970000)
                {
                    GET_CHAR_HEALTH( l_U2104[2], ref iVar4 );
                    if (iVar4 >= 50)
                    {
                        SET_CHAR_HEALTH( l_U2104[2], 25 );
                        l_U2625 = 1;
                    }
                }
            }
        }
    }
    sub_87752();
    sub_88931();
    if (NOT l_U2629)
    {
        array(ref uVar32, 10);
        uVar32[0] = {l_U800[0]};
        uVar32[1] = {l_U800[10]};
        uVar32[2] = {l_U800[13]};
        uVar32[3] = {l_U800[17]};
        uVar32[4] = {l_U800[2]};
        if (sub_90431( ref uVar32, 60 ))
        {
            l_U2629 = 1;
        }
    }
    return;
}

int sub_70407(unknown uParam0, int iParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (IS_CHAR_DEAD( (uParam0^)[I] ))
        {
            iVar7++;
        }
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I], sub_3418(), 0 ))
        {
            iVar6++;
        }
    }
    if (((iVar6 >= iParam2) || (iVar7 >= iParam2)) || ((iVar6 + iVar7) >= iParam2))
    {
        return 1;
    }
    return 0;
}

void sub_71049(int iParam0, unknown uParam1)
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

void sub_72970(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    vector[2] vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref vVar6, 2);
    GET_CHAR_COORDINATES( sub_3418(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
    switch (uParam0)
    {
        case 0:
        iVar5 = -223135715;
        vVar6[0] = {65376, 591, 119};
        vVar6[1] = {65376, 593, 119};
        break;
        case 1:
        iVar5 = -223135715;
        vVar6[0] = {65356, 586, 123};
        vVar6[1] = {65354, 586, 123};
        break;
    }
    if (uVar13._fU8 > 117.50000000)
    {
        if (IS_CHAR_SHOOTING( sub_3418() ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar6[0]._fU0, vVar6[0]._fU4, vVar6[0]._fU8, 1.50000000, iVar5 ))
            {
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar5, vVar6[0], ref uVar3, ref uVar4 );
                if ((ABSF( uVar4 )) > 0.10000000)
                {
                    l_U2582 = 1;
                }
                else
                {
                    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar5, vVar6[1], ref uVar3, ref uVar4 );
                    if ((ABSF( uVar4 )) > 0.10000000)
                    {
                        l_U2582 = 1;
                    }
                }
            }
        }
    }
    return l_U2582;
}

void sub_76518(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -152.40060000, 593.09870000, 115.71330000, -152.40060000, 589.09870000, 113.21330000, 6.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -150.13160000, 583.94570000, 118.21220000, -150.26460000, 581.44920000, 115.21220000, 2.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -152.20730000, 598.25670000, 119.71240000, -152.20730000, 588.75670000, 117.21240000, 7.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -151.53940000, 586.97110000, 119.71170000, -147.53940000, 586.97110000, 117.21170000, 2.00000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -179.21880000, 596.58040000, 115.71330000, -150.71880000, 596.58040000, 113.21330000, 5.00000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -169.19550000, 595.92840000, 115.71330000, -169.19550000, 597.92840000, 113.21330000, 2.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -157.73850000, 599.21820000, 115.71330000, -157.73850000, 597.21820000, 113.21330000, 2.00000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -158.22930000, 597.10170000, 115.71330000, -153.72930000, 597.10170000, 113.21330000, 4.00000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -150.17760000, 592.39340000, 115.71330000, -150.17760000, 590.89340000, 113.71330000, 1.00000000 );
        break;
        case 14:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -171.29760000, 592.22450000, 123.88280000, -146.29760000, 592.22450000, 121.38280000, 17.00000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -167.23210000, 599.54940000, 119.71220000, -167.23210000, 589.54940000, 117.71220000, 11.50000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -179.93370000, 596.48380000, 120.28450000, -179.93370000, 598.98380000, 117.78450000, 4.50000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -184.51200000, 588.27210000, 120.50780000, -183.01200000, 588.27210000, 118.00780000, 1.00000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -150.06500000, 587.55940000, 115.71330000, -150.06500000, 585.55940000, 113.21330000, 1.50000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -171.85370000, 592.00810000, 128.28280000, -171.85370000, 589.50810000, 125.28280000, 2.50000000 );
        break;
        case 15:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -181.85820000, 585.27360000, 120.80900000, -181.85820000, 583.27360000, 117.80900000, 2.00000000 );
        break;
        case 16:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -178.66320000, 589.27540000, 120.29900000, -180.66320000, 589.27540000, 117.79900000, 1.50000000 );
        break;
    }
    return;
}

void sub_78044()
{
    vector vVar2;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    switch (l_U2570)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2104[1] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2104[1], 1 );
            if (IS_CHAR_PLAYING_ANIM( l_U2104[1], "missray6", "plead" ))
            {
                if (NOT l_U2571)
                {
                    l_U2571 = 1;
                    l_U2570++;
                }
            }
        }
        else
        {
            l_U2570 = 99;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U2104[1] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -181.09530000, 588.12190000, 119.29850000, 2.00000000, 6.00000000, 1.00000000, 0 ))
            {
                if (IS_CHAR_ON_SCREEN( l_U2104[1] ))
                {
                    sub_20231( "RB6_HASID", ref l_U2573, 6, 1 );
                    GET_GAME_TIMER( ref l_U2579 );
                    l_U2572 = 1;
                    l_U2570++;
                }
                else
                {
                    sub_9450( "Not on screen" );
                }
            }
            else
            {
                sub_9450( "Not located" );
            }
        }
        else if (sub_34573( l_U2573 ))
        {
            sub_71049( ref l_U2573, 0 );
        }
        l_U2570 = 99;;
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -181.09530000, 588.12190000, 119.29850000, 2.00000000, 6.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -184.00840000, 585.49380000, 119.30150000, 1.00000000, 3.50000000, 2.00000000, 0 )))
            {
                if (NOT (sub_34573( l_U2573 )))
                {
                    GET_GAME_TIMER( ref l_U2580 );
                    if ((l_U2580 - l_U2579) > 10000)
                    {
                        sub_20231( "RB6_HASID", ref l_U2573, 6, 1 );
                        GET_GAME_TIMER( ref l_U2579 );
                    }
                }
            }
            else if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_3318(), l_U2104[1] )))
            {
                l_U2572 = 0;
                l_U2523 = 1;
                if (DOES_BLIP_EXIST( l_U2108[1] ))
                {
                    REMOVE_BLIP( l_U2108[1] );
                }
                l_U2571 = 0;
                OPEN_SEQUENCE_TASK( ref l_U2112[1] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -153.56860000, 589.88150000, 117.71280000, 3, -2, 0.50000000 );
                TASK_PLAY_ANIM( 0, "plead", "missray6", 1.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U2112[1] );
                if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2104[1], l_U2112[1] );
                }
                CLEAR_SEQUENCE_TASK( l_U2112[1] );
                l_U2570++;
            }
        }
        else if (sub_34573( l_U2573 ))
        {
            sub_71049( ref l_U2573, 0 );
        }
        l_U2570 = 99;;
        break;
        case 3:
        if (DOES_CHAR_EXIST( l_U2104[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U2104[1], "missray6", "plead" ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3418(), l_U2104[1], 20.00000000, 20.00000000, 0 )))
                    {
                        if ((NOT (IS_CHAR_ON_SCREEN( l_U2104[1] ))) || (NOT (sub_51657( sub_3418(), l_U2104[1] ))))
                        {
                            DELETE_CHAR( ref l_U2104[1] );
                            l_U2570 = 99;
                        }
                        else
                        {
                            sub_9450( "On screen" );
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U2104[1], -152.43870000, 590.98450000, 118.71810000, 3.00000000, 3.00000000, 2.00000000, 0 ))
                    {
                        l_U2571 = 1;
                    }
                    sub_9450( "Located" );;
                }
                else
                {
                    sub_9450( "Not playing anim" );
                    GET_CHAR_COORDINATES( sub_3418(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
                    if (vVar5.z < 90.00000000)
                    {
                        DELETE_CHAR( ref l_U2104[1] );
                        l_U2570 = 99;
                    }
                }
            }
            else if (sub_34573( l_U2573 ))
            {
                sub_71049( ref l_U2573, 0 );
            }
        }
        break;
        case 99:
        if (DOES_BLIP_EXIST( l_U2108[1] ))
        {
            REMOVE_BLIP( l_U2108[1] );
        }
        break;
    }
    if (l_U2571)
    {
        if (NOT (IS_CHAR_DEAD( l_U2104[1] )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U2104[1], "missray6", "plead" ))
            {
                if (NOT (IS_PED_RAGDOLL( l_U2104[1] )))
                {
                    GET_CHAR_COORDINATES( l_U2104[1], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                    GET_CHAR_COORDINATES( sub_3418(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
                    uVar8 = {vVar5 - vVar2};
                    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref uVar11 );
                    SET_CHAR_HEADING( l_U2104[1], uVar11 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U2104[1] )))
            {
                TASK_PLAY_ANIM( l_U2104[1], "plead", "missray6", 1.00000000, 1, 0, 0, 0, 0 );
            }
        }
    }
    if (l_U2572)
    {
        if (DOES_BLIP_EXIST( l_U2108[1] ))
        {
            sub_79697( ref l_U2108[1], ref l_U2581 );
        }
    }
    return;
}

int sub_79697(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam1^)) > 500)
    {
        GET_BLIP_COLOUR( (uParam0^), ref iVar5 );
        if (iVar5 == 4)
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 3 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        else
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 1 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        break;
    }
    return 0;
}

int sub_80289()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    bVar4 = false;
    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65356, 586, 123, ref uVar2, ref fVar3 );
    if (fVar3 != 0.00000000)
    {
        bVar4 = true;
    }
    else
    {
        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, 65354, 586, 123, ref uVar2, ref fVar3 );
        if (fVar3 != 0.00000000)
        {
            bVar4 = true;
        }
    }
    if (bVar4)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3418(), -181.09270000, 588.14450000, 122.78430000, 4.00000000, 2.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_82176(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_3418(), ref iVar3 );
    if ((iVar3 != 9) AND (iVar3 != 7))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3418() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if ((GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )) || (((NOT IS_USING_CONTROLLER()) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3318(), uParam0 ))) AND (IS_CONTROL_JUST_PRESSED( 0, 4 ))))
                {
                    if ((NOT (IS_CHAR_INJURED( sub_3418() ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_82426(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    float fVar7;
    float fVar8;
    float fVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    fVar11 = 0.00000000;
    fVar12 = 0.30000000;
    fVar13 = 0.50000000;
    switch (l_U2540)
    {
        case 0:
        l_U2542 = 1;
        if (DOES_BLIP_EXIST( l_U2108[0] ))
        {
            REMOVE_BLIP( l_U2108[0] );
        }
        SET_PLAYER_CONTROL( sub_3318(), 0 );
        SET_PED_IS_BLIND_RAGING( sub_3418(), 0 );
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        BEGIN_CAM_COMMANDS( ref l_U2175 );
        SET_USE_HIGHDOF( 1 );
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 20.00000000, 1 );
        SET_CHAR_COORDINATES( sub_3418(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CHAR_HEADING( sub_3418(), uParam3 );
        CLEAR_PRINTS();
        sub_71049( ref l_U2546, 0 );
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3418(), 0.23520000, 1.69660000, -1.00010000, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
            SET_CHAR_COORDINATES( uParam4, uVar20._fU0, uVar20._fU4, uVar20._fU8 );
            GET_CHAR_HEADING( sub_3418(), ref uVar10 );
            SET_CHAR_HEADING( uParam4, uVar10 + 170.78820000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
            TASK_PLAY_ANIM_WITH_FLAGS( uParam4, "plead", "missray6", 8.00000000, 0, 16 );
        }
        TASK_PLAY_ANIM( sub_3418(), "player_execute", "missray6", 1000.00000000, 0, 0, 0, 0, 0 );
        CREATE_CAM( 14, ref l_U2176[0] );
        ATTACH_CAM_TO_PED( l_U2176[0], sub_3418() );
        SET_CAM_ATTACH_OFFSET( l_U2176[0], 0.84260000, -0.82030000, 0.56040000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2176[0], 1 );
        POINT_CAM_AT_PED( l_U2176[0], sub_3418() );
        SET_CAM_POINT_OFFSET( l_U2176[0], 0.00000000, 1.10000000, 0.50000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U2176[0], 1 );
        SET_CAM_FOV( l_U2176[0], 27.70007000 );
        SET_CAM_ACTIVE( l_U2176[0], 1 );
        SET_CAM_PROPAGATE( l_U2176[0], 1 );
        SET_CAM_NEAR_DOF( l_U2176[0], 2.00000000 );
        SET_CAM_FAR_DOF( l_U2176[0], 5.00000000 );
        CREATE_CAM( 14, ref l_U2176[1] );
        ATTACH_CAM_TO_PED( l_U2176[1], sub_3418() );
        SET_CAM_ATTACH_OFFSET( l_U2176[1], 1.42710000, 4.49370000, -0.76200000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2176[1], 1 );
        POINT_CAM_AT_PED( l_U2176[1], sub_3418() );
        SET_CAM_POINT_OFFSET( l_U2176[1], -1.30000000, 0.00000000, -0.05000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U2176[1], 1 );
        SET_CAM_FOV( l_U2176[1], 27.70007000 );
        SET_CAM_ACTIVE( l_U2176[1], 0 );
        SET_CAM_PROPAGATE( l_U2176[1], 0 );
        SET_CAM_NEAR_DOF( l_U2176[1], 0.50000000 );
        SET_CAM_FAR_DOF( l_U2176[1], 6.00000000 );
        GET_GAME_TIMER( ref l_U2544 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U2540 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2545 );
        if ((l_U2545 - l_U2544) > 1000)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3418(), "missray6", "player_execute" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), "missray6", "player_execute", ref fVar7 );
                if (fVar7 > 0.02000000)
                {
                    SET_CAM_ACTIVE( l_U2176[1], 1 );
                    SET_CAM_PROPAGATE( l_U2176[1], 1 );
                    SET_CAM_ACTIVE( l_U2176[0], 0 );
                    SET_CAM_PROPAGATE( l_U2176[0], 0 );
                    if (NOT (IS_CHAR_DEAD( uParam4 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim", "missray6", 8.00000000, 0, 0, 0, 1, 0 );
                        if (NOT (# -NULL-0xc27bca()))
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "CS_EXECUTION_BLOOD", uParam4, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1204, 1 );
                        }
                    }
                    GET_GAME_TIMER( ref l_U2544 );
                    l_U2540 = 2;
                }
            }
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_3418(), "missray6", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), "missray6", "player_execute", ref fVar7 );
            if (fVar7 >= 0.00000000)
            {
                SET_CHAR_ANIM_CURRENT_TIME( sub_3418(), "missray6", "player_execute", 0.00000000 );
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            if (IS_CHAR_PLAYING_ANIM( uParam4, "missray6", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missray6", "victim", ref fVar7 );
                if (fVar7 >= fVar11)
                {
                    if (fVar7 < fVar12)
                    {
                        fVar9 = (fVar7 - fVar11) / (fVar12 - fVar11);
                        fVar8 = 1.00000000 - (fVar9 * fVar13);
                        SET_TIME_SCALE( fVar8 );
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U2544 );
                        l_U2540 = 3;
                    }
                }
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U2545 );
        if ((l_U2545 - l_U2544) > 1800)
        {
            SET_CAM_ACTIVE( l_U2176[0], 0 );
            SET_CAM_PROPAGATE( l_U2176[0], 0 );
            SET_CAM_ACTIVE( l_U2176[1], 0 );
            SET_CAM_PROPAGATE( l_U2176[1], 0 );
            DESTROY_CAM( l_U2176[0] );
            DESTROY_CAM( l_U2176[1] );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                STOP_PED_SPEAKING( uParam4, 1 );
                UNLOCK_RAGDOLL( uParam4, 1 );
                SWITCH_PED_TO_RAGDOLL( uParam4, 1000, 10000, 0, 1, 1, 0 );
                WAIT( 2 );
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    SET_CHAR_HEALTH( uParam4, 0 );
                }
            }
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            END_CAM_COMMANDS( ref l_U2175 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_3318(), 1 );
            SET_PED_IS_BLIND_RAGING( sub_3418(), 1 );
            DISPLAY_RADAR( 1 );
            SET_TIME_SCALE( 1.00000000 );
            l_U2540 = 4;
        }
        break;
        case 4:
        l_U2542 = 0;
        return 1;
        break;
    }
    if (NOT l_U2541)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_3418(), "missray6", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3418(), "missray6", "player_execute", ref fVar7 );
            if (fVar7 >= 0.03000000)
            {
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( sub_3418(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar17 );
                    GET_PED_BONE_POSITION( uParam4, 1204, 0.10000000, 0.00000000, 0.00000000, ref uVar14 );
                    FIRE_PED_WEAPON( sub_3418(), uVar14 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3418(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U2541 = 1;
                }
            }
        }
    }
    return 0;
}

int sub_85921(unknown uParam0, int iParam1, int iParam2)
{
    int I;
    int iVar6;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^)[I] )))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_3318(), (uParam0^)[I] ))
            {
                iVar6++;
            }
        }
    }
    if (iVar6 >= iParam2)
    {
        return 1;
    }
    return 0;
}

int sub_86090()
{
    if (LOCATE_CHAR_IN_CAR_3D( sub_3418(), -175.89080000, 586.82450000, 126.74610000, 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_86338()
{
    if (NOT l_U800[15]._fU4)
    {
        if (NOT l_U1315[15])
        {
            l_U800[15]._fU4 = 1;
        }
    }
    if (NOT l_U800[0]._fU4)
    {
        if (NOT (IS_CHAR_DEAD( l_U1657[0] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[0], 12, 0 );
        }
        l_U800[0]._fU4 = 1;
    }
    if (NOT l_U800[10]._fU4)
    {
        if (NOT (IS_CHAR_DEAD( l_U1657[10] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[10], 12, 0 );
        }
        l_U800[10]._fU4 = 1;
    }
    if (NOT l_U800[11]._fU4)
    {
        if (NOT (IS_CHAR_DEAD( l_U1657[11] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[11], 12, 0 );
        }
        l_U800[11]._fU4 = 1;
    }
    if (NOT l_U800[13]._fU4)
    {
        if (NOT (IS_CHAR_DEAD( l_U1657[13] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[13], 12, 0 );
        }
        l_U800[13]._fU4 = 1;
    }
    if (NOT l_U800[26]._fU4)
    {
        if (NOT (IS_CHAR_DEAD( l_U1657[26] )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1657[26], 12, 0 );
        }
        l_U800[26]._fU4 = 1;
    }
    return;
}

int sub_86999(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_87752()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 29; I++ )
    {
        if (I == l_U2424)
        {
            ;
        }
        if (l_U800[I]._fU4)
        {
            if (I == l_U2424)
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( l_U800[I]._fU0 )))
            {
                if (I == l_U2424)
                {
                    ;
                }
                if (NOT l_U800[I]._fU8)
                {
                    if (I == l_U2424)
                    {
                        ;
                    }
                    SET_CHAR_DECISION_MAKER( l_U800[I]._fU0, l_U2168 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    if (NOT l_U800[I]._fU24)
                    {
                        if (I == l_U2424)
                        {
                            ;
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U800[I]._fU28._fU0, l_U800[I]._fU28._fU4, l_U800[I]._fU28._fU8, 3, -2, 0.50000000 );
                    }
                    else if (I == l_U2424)
                    {
                        ;
                    }
                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U800[I]._fU28._fU0, l_U800[I]._fU28._fU4, l_U800[I]._fU28._fU8, 3, -2 );;
                    if (l_U800[I]._fU20)
                    {
                        TASK_DUCK( 0, -2 );
                    }
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U800[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U800[I]._fU0, uVar3 );
                    }
                    else if (I == l_U2424)
                    {
                        ;
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U800[I]._fU8 = 1;
                }
                else if (I == l_U2424)
                {
                    ;
                }
                if ((NOT l_U800[I]._fU16) || (l_U800[I]._fU12))
                {
                    if (I == l_U2424)
                    {
                        ;
                    }
                    if (NOT l_U800[I]._fU20)
                    {
                        if (I == l_U2424)
                        {
                            ;
                        }
                        if (sub_64225( l_U800[I]._fU0, 1, 0 ))
                        {
                            if (I == l_U2424)
                            {
                                ;
                            }
                            SET_CHAR_DECISION_MAKER( l_U800[I]._fU0, l_U2167 );
                            if (l_U1750[I])
                            {
                                SET_COMBAT_DECISION_MAKER( l_U800[I]._fU0, l_U2172 );
                            }
                            else if (l_U800[I]._fU48)
                            {
                                SET_COMBAT_DECISION_MAKER( l_U800[I]._fU0, l_U2174 );
                            }
                            else
                            {
                                SET_COMBAT_DECISION_MAKER( l_U800[I]._fU0, l_U2170 );
                            }
                            sub_76518( ref l_U800[I]._fU0, l_U800[I]._fU40 );
                            SET_CHAR_RELATIONSHIP( l_U800[I]._fU0, 5, 0 );
                            if (NOT l_U800[I]._fU56)
                            {
                                if (I == l_U2424)
                                {
                                    ;
                                }
                                if (l_U800[I]._fU44)
                                {
                                    if (I == l_U2424)
                                    {
                                        ;
                                    }
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    if (NOT (IS_CHAR_DEAD( l_U800[I]._fU52 )))
                                    {
                                        TASK_COMBAT( 0, l_U800[I]._fU52 );
                                    }
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                                else if (I == l_U2424)
                                {
                                    ;
                                }
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_COMBAT( 0, sub_3418() );
                                CLOSE_SEQUENCE_TASK( uVar3 );;
                                if (NOT (IS_CHAR_INJURED( l_U800[I]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U800[I]._fU0, uVar3 );
                                }
                                else if (I == l_U2424)
                                {
                                    ;
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                            else if (I == l_U2424)
                            {
                                ;
                            }
                            SET_CHAR_RELATIONSHIP( l_U800[I]._fU0, 5, 25 );
                            SET_CHAR_RELATIONSHIP( l_U800[I]._fU0, 5, 0 );;
                            l_U800[I]._fU16 = 1;
                            l_U800[I]._fU12 = 0;
                        }
                        else if (I == l_U2424)
                        {
                            ;
                        }
                    }
                    else if (I == l_U2424)
                    {
                        ;
                    }
                    if (sub_64225( l_U800[I]._fU0, 1, 0 ))
                    {
                        ;
                    }
                }
                else if (I == l_U2424)
                {
                    ;
                };;;
            }
            else if (I == l_U2424)
            {
                ;
            }
        }
    }
    return;
}

void sub_88931()
{
    int I;
    int iVar3;
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

    for ( I = 0; I <= 29; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1657[I] )))
        {
            if (NOT l_U1781[I]._fU16)
            {
                if (l_U1750[I])
                {
                    GET_CHAR_HEALTH( l_U1657[I], ref iVar4 );
                    if ((iVar4 < 200) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1657[I], sub_3418(), 1 )))
                    {
                        switch (l_U1781[I]._fU0)
                        {
                            case 0:
                            uVar8 = {sub_89105( sub_3418(), l_U1657[I], 1 )};
                            uVar5 = {uVar8};
                            sub_89390( l_U1657[I], uVar5, 5000, 111.71170000 );
                            break;
                            case 2:
                            uVar5 = {sub_89523( l_U1657[I], l_U1781[I]._fU4 )};
                            sub_89642( l_U1657[I], uVar5, 5000, l_U1781[I]._fU4._fU8 );
                            break;
                        }
                        GET_GAME_TIMER( ref l_U1781[I]._fU20 );
                        if (NOT (IS_CHAR_DEAD( l_U1657[I] )))
                        {
                            ;
                        }
                        l_U1750[I] = 0;
                        l_U1781[I]._fU16 = 1;
                    }
                }
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U2104[I] )))
        {
            if (NOT l_U2132[I]._fU16)
            {
                if (l_U2128[I])
                {
                    GET_CHAR_HEALTH( l_U2104[I], ref iVar4 );
                    if ((iVar4 < 200) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2104[I], sub_3418(), 0 )))
                    {
                        switch (l_U2132[I]._fU0)
                        {
                            case 0:
                            uVar8 = {sub_89105( sub_3418(), l_U2104[I], 1 )};
                            uVar5 = {uVar8};
                            uVar5._fU8 = 0.00000000;
                            sub_89390( l_U2104[I], uVar5, 5000, 100.00000000 );
                            break;
                            case 2:
                            sub_89642( l_U2104[I], l_U1781[I]._fU4, 5000, l_U1781[I]._fU4._fU8 );
                            break;
                        }
                        GET_GAME_TIMER( ref l_U2132[I]._fU20 );
                        if (NOT (IS_CHAR_DEAD( l_U2104[I] )))
                        {
                            ;
                        }
                        l_U2128[I] = 0;
                        l_U2132[I]._fU16 = 1;
                    }
                }
            }
            else
            {
                GET_CHAR_COORDINATES( l_U2104[I], ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                GET_GAME_TIMER( ref iVar3 );
                if ((uVar11._fU8 < l_U2132[I]._fU28._fU8) || ((iVar3 - l_U2132[I]._fU20) > l_U2132[I]._fU24))
                {
                    SWITCH_PED_TO_RAGDOLL( l_U2104[I], 0, 100, 1, 1, 1, 0 );
                    SET_CHAR_HEALTH( l_U2104[I], 75 );
                    l_U2132[I]._fU16 = 0;
                }
            }
        }
    }
    return;
}

void sub_89105(unknown uParam0, unknown uParam1, boolean bParam2)
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
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar11.x, ref vVar11.y, ref vVar11.z );
    }
    vVar14 = {vVar11 - vVar8};
    sub_16346( vVar8, "vFirstPedLoc...." );
    sub_16346( vVar11, "vSecondPedLoc...." );
    sub_16346( vVar14, "vFirstSecondPed...." );
    if (bParam2)
    {
        Result = {vVar14 / (VMAG( vVar14 ))};
    }
    else
    {
        Result = {vVar14};
    }
    sub_16346( Result, "Vreturn...." );
    return Result;
}

void sub_89390(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, uParam4, 1, uParam1, uParam5, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_89523(unknown uParam0, vector vParam1)
{
    unknown Result;
    unknown uVar7;
    unknown uVar8;
    vector vVar9;
    vector vVar12;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        vVar12 = {vParam1 - vVar9};
        Result = {vVar12 / (VMAG( vVar12 ))};
    }
    return Result;
}

void sub_89642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    GET_CHAR_COORDINATES( uParam0, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, uParam4, 2, uParam1, uParam5, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

int sub_90431(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
        {
            if ((uParam0^)[I]._fU4)
            {
                if ((uParam0^)[I]._fU16)
                {
                    SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, uParam1 );
                    iVar5++;
                }
            }
        }
    }
    if (iVar5 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

void sub_90582()
{
    unknown[11] uVar2;

    array(ref uVar2, 11);
    switch (l_U2554)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U2231[0] ))
        {
            CREATE_CHAR( 26, l_U1289, -183.71360000, 597.09080000, 15.65330000, ref l_U2301, 1 );
            sub_4878( 1, l_U2301, "PORTER", 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2301, 24 );
            SET_CHAR_COMPONENT_VARIATION( l_U2301, 1, 0, 0 );
            if (NOT (IS_CHAR_INJURED( l_U2301 )))
            {
                SET_CHAR_HEADING( l_U2301, 304.96180000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2301, "MloRoom_Ritz_main" );
                SET_CHAR_HEADING( l_U2301, 270.00000000 );
                SET_CHAR_DECISION_MAKER( l_U2301, l_U2169 );
            }
            l_U2554 = 1;
        }
        break;
        case 1:
        if (l_U799 == 14)
        {
            if (NOT (IS_CHAR_DEAD( l_U2301 )))
            {
                if (sub_64225( l_U2301, 1, 0 ))
                {
                    l_U2554 = 6;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U2301 )))
        {
            GET_GAME_TIMER( ref l_U2555[1] );
            if ((l_U2555[1] - l_U2555[0]) > 6000)
            {
                OPEN_SEQUENCE_TASK( ref l_U2313 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -145.25200000, 607.95180000, 14.79950000, 2, -2, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 304.96180000 );
                TASK_PLAY_ANIM( 0, "Smoke_Stand_B", "missray6", 8.00000000, 1, 0, 0, 0, 999999 );
                CLOSE_SEQUENCE_TASK( l_U2313 );
                TASK_PERFORM_SEQUENCE( l_U2301, l_U2313 );
                CLEAR_SEQUENCE_TASK( l_U2313 );
                l_U2554 = 3;
            }
        }
        else
        {
            sub_71049( ref l_U1651, 0 );
            l_U2554 = 6;
        }
        break;
        case 3:
        if (NOT l_U2376)
        {
            if (NOT (IS_CHAR_DEAD( l_U2301 )))
            {
                GET_CHAR_COORDINATES( l_U2301, ref l_U2316._fU0, ref l_U2316._fU4, ref l_U2316._fU8 );
            }
            else
            {
                CREATE_OBJECT_NO_OFFSET( -1341473171, l_U2316._fU0, l_U2316._fU4, l_U2316._fU8, ref l_U2314, 1 );
                SET_OBJECT_VISIBLE( l_U2314, 0 );
                if (LOCATE_OBJECT_3D( l_U2314, -144.20930000, 596.55900000, 14.76190000, 2.00000000, 13.00000000, 1.00000000, 0 ))
                {
                    SET_PLAYER_CONTROL( sub_3318(), 0 );
                    DO_SCREEN_FADE_OUT( 2000 );
                    WAIT( 2000 );
                    SET_CHAR_COMPONENT_VARIATION( sub_3418(), 1, 7, 0 );
                    SET_CHAR_COMPONENT_VARIATION( sub_3418(), 2, 2, 1 );
                    SET_CHAR_COMPONENT_VARIATION( sub_3418(), 5, 2, 0 );
                    SET_CURRENT_CHAR_WEAPON( sub_3418(), 0, 0 );
                    DO_SCREEN_FADE_IN( 1000 );
                    SET_PLAYER_CONTROL( sub_3318(), 1 );
                    PRINT_NOW( "HO_21", 7500, 1 );
                    l_U2384 = 1;
                    l_U2554 = 6;
                }
                else
                {
                    l_U2554 = 6;
                }
                DELETE_OBJECT( ref l_U2314 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1341473171 );
            }
        }
        break;
        case 4:
        if (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), l_U2303, l_U2304, l_U2305, 1.30000000, 1.30000000, 2.00000000, 0 ))
        {
            REMOVE_PICKUP( l_U2302 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_3318(), 0 );
            DO_SCREEN_FADE_OUT( 2000 );
            WAIT( 2000 );
            REMOVE_BLIP( l_U2312 );
            SET_CHAR_COMPONENT_VARIATION( sub_3418(), 1, 6, 0 );
            PRINT_NOW( "DEFAULT_GOD_TEXT_TIME", 6000, 1 );
            SET_CURRENT_CHAR_WEAPON( sub_3418(), 0, 0 );
            DO_SCREEN_FADE_IN( 2000 );
            SET_PLAYER_CONTROL( sub_3318(), 1 );
            l_U2384 = 1;
            l_U2554 = 5;
        }
        break;
        case 5:
        uVar2[0] = l_U1657[7];
        uVar2[1] = l_U1657[4];
        uVar2[2] = l_U2104[1];
        uVar2[3] = l_U1657[3];
        uVar2[4] = l_U1657[6];
        if (LOCATE_CHAR_ON_FOOT_3D( sub_3418(), -158.20260000, 592.77760000, 117.71320000, 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            l_U2338 = 1;
        }
        if (l_U2338)
        {
            if ((sub_70407( ref uVar2, 5, 1 )) || (IS_CHAR_IN_AREA_ON_FOOT_2D( sub_3418(), -169.34470000, 590.04720000, -164.00850000, 599.89330000, 0 )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "HO_19", 6000, 1 );
                l_U2339[19] = 1;
                l_U2300 = 7;
                l_U2554 = 6;
            }
            if (NOT l_U2339[16])
            {
                PRINT_NOW( "HO_16", 3000, 1 );
                l_U2339[16] = 1;
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT l_U2339[17])
                {
                    PRINT_NOW( "HO_17", 3000, 1 );
                    l_U2339[17] = 1;
                }
                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT l_U2339[18])
                    {
                        PRINT_NOW( "HO_18", 3000, 1 );
                        l_U2339[18] = 1;
                    }
                    else if (NOT l_U2339[22])
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_NOW( "HO_22", 3000, 1 );
                            sub_92175();
                            l_U2339[22] = 1;
                        }
                    }
                    else if (NOT l_U2339[28])
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U1315[3])
                            {
                                OPEN_SEQUENCE_TASK( ref l_U1688[3] );
                                TASK_ACHIEVE_HEADING( 0, 99.09950000 );
                                CLOSE_SEQUENCE_TASK( l_U1688[3] );
                                if (NOT (IS_CHAR_INJURED( l_U1657[3] )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1657[3], l_U1688[3] );
                                }
                                CLEAR_SEQUENCE_TASK( l_U1688[3] );
                                l_U1315[3] = 1;
                            }
                            else if (sub_64225( l_U1657[3], 1, 0 ))
                            {
                                PRINT_NOW( "HO_28", 3000, 1 );
                                l_U2339[28] = 1;
                                GET_GAME_TIMER( ref l_U2221 );
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U2220 );
                        if ((l_U2220 - l_U2221) > 3000)
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "HO_19", 6000, 1 );
                            l_U1315[3] = 0;
                            l_U2300 = 7;
                            l_U2554 = 6;
                        }
                    };;;
                }
            }
        }
        break;
        case 6: break;
    }
    return;
}

void sub_92175()
{
    boolean bVar2;
    float fVar3;

    while (NOT bVar2)
    {
        WAIT( 0 );
        GET_OBJECT_HEADING( l_U2270[0], ref fVar3 );
        if ((fVar3 < 180.00000000) AND (fVar3 < 176.00000000))
        {
            fVar3 += 5.00000000;
            SET_OBJECT_HEADING( l_U2270[0], fVar3 );
        }
        else
        {
            bVar2 = true;
        }
    }
    return;
}

void sub_92626()
{
    switch (l_U2636)
    {
        case 0:
        if (sub_86090())
        {
            l_U2390 = 1;
            sub_21479( 10 );
            sub_21479( 14 );
            l_U2385 = 0;
            sub_3467();
            l_U2383 = 1;
            sub_52762();
            sub_52934( l_U1346[1], 1 );
            sub_52934( l_U1346[2], 1 );
            sub_53725( 1, 1 );
            sub_54609( l_U1548, 1, 0 );
            sub_54609( l_U1565, 1, 0 );
            l_U2378 = 1;
            sub_54853( 0, l_U1520, 0, 0 );
            sub_55693();
            l_U2300 = 12;
            l_U2391 = 1;
            l_U2377 = 1;
            l_U1294 = 4;
            l_U2636 = 1;
        }
        break;
        default:
    }
    return;
}