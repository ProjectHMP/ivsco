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
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 1;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 1;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 1;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 1;
    l_U513 = 1;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U1270 = 90.00000000;
    l_U1271 = 5.00000000;
    l_U1272 = 25.00000000;
    l_U1273 = 15.00000000;
    l_U1274 = 2.00000000;
    l_U1275 = 4.00000000;
    l_U1276 = 0.50000000;
    l_U1277 = 120.00000000;
    l_U1278 = 0.00000000;
    l_U1279 = 0.00000000;
    l_U1281 = 1.00000000;
    l_U1282 = 0.00000000;
    l_U1283 = 1.00000000;
    l_U1284 = 10.00000000;
    l_U1285 = 30.00000000;
    l_U1287 = 1.00000000;
    l_U1289 = 1.00000000;
    l_U1290 = 5.00000000;
    l_U1291 = 1.00000000;
    l_U1292 = 1.00000000;
    l_U1297 = 0.30000000;
    l_U1298 = 0.50000000;
    l_U1299 = 50.00000000;
    l_U1540 = 0;
    l_U1541 = 0;
    l_U1542 = 0;
    l_U1543 = 0;
    l_U1544 = 1;
    l_U1545 = 0;
    l_U1546 = 0;
    l_U1547 = 0;
    l_U1548 = 0;
    l_U1549 = -1;
    l_U1550 = 0;
    l_U1551 = 0;
    l_U1552 = 0;
    l_U1553 = 0;
    l_U1554 = 0;
    l_U1555 = 0;
    l_U1556 = 0;
    l_U2379 = 0;
    l_U2380 = 0;
    l_U2388 = 1100;
    l_U2392 = 0;
    l_U2393 = 0;
    l_U2394 = 0;
    l_U2395 = 0;
    l_U2396 = 0;
    l_U2397 = 0;
    l_U2398 = 0;
    l_U2403 = {0.00000000, 1.13800000, -1.00000000};
    l_U2406 = {0.00000000, 0.00000000, 0.00000000};
    l_U2409 = {0.00000000, 0.00000000, 0.00000000};
    l_U2413 = {914.65980000, -517.18510000 + 2, 13.85290000};
    l_U2416 = 4.77320000;
    l_U2417 = {918.06920000, -482.23180000, 15.47090000};
    l_U2420 = -956048545;
    l_U2424 = 0;
    l_U2426 = 1;
    l_U2429 = 0;
    l_U2430 = 0;
    l_U2431 = 0;
    l_U2432 = 0;
    l_U2433 = 0;
    l_U2455 = 0;
    l_U2456 = 0;
    l_U2457 = 0;
    l_U2458 = 0;
    l_U2459 = 0;
    l_U2460 = 0;
    l_U2461 = 0;
    l_U2462 = 0;
    l_U2463 = 0;
    l_U2464 = 0;
    l_U2465 = 0;
    l_U2466 = 0;
    l_U2467 = 1;
    l_U2468 = 0;
    l_U2469 = 0;
    l_U2470 = 0;
    l_U2488 = 0;
    l_U2489 = 0;
    l_U2490 = 0;
    l_U2491 = 0;
    l_U2492 = 0;
    l_U2493 = 0;
    l_U2494 = 0;
    l_U2495 = 0;
    l_U2496 = 0;
    l_U2516 = -1946814316;
    l_U2527 = 734334931;
    l_U2528 = 768442188;
    l_U2558 = 1;
    l_U2634 = 55;
    sub_1084( "VLAD1", 0 );
    sub_1084( "V1AUD", 6 );
    sub_1241();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "VLA1_A" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "VLA1_A" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    sub_4860();
    l_U2384 = 0;
    l_U2429 = 1;
    while (l_U2429)
    {
        switch (l_U2384)
        {
            case 0:
            sub_5667();
            break;
            case 1:
            sub_6885();
            break;
            case 2:
            sub_24240();
            break;
            case 3:
            sub_30512();
            break;
            case 4:
            sub_31003();
            break;
            case 5:
            sub_31414();
            break;
            case 6:
            sub_31729();
            break;
            case 7:
            sub_32501();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U2431 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U2627 );
            sub_39025();
        }
        else if (l_U2430 == 1)
        {
            CLEAR_HELP();
            sub_53869();
        }
    }
    sub_3384();
    return;
}

void sub_1084(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_1120())
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

int sub_1120()
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

void sub_1241()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1262();
        l_U2430 = 1;
        l_U2384 = -1;
        sub_3384();
    }
    return;
}

void sub_1262()
{
    sub_1271();
    return;
}

void sub_1271()
{
    int iVar2;

    iVar2 = 1;
    sub_1285( iVar2 );
    sub_2461( iVar2 );
    return;
}

void sub_1285(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1329();
        sub_1490();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1598();
            sub_1637();
        }
    }
    sub_1713();
    sub_1814();
    uVar5 = sub_1927( uParam0 );
    sub_2368( uVar5, 0 );
    return;
}

void sub_1329()
{
    sub_1343( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1443();
    }
    return;
}

void sub_1343(int iParam0)
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

void sub_1443()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1490()
{
    sub_1499();
    return;
}

void sub_1499()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1598()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1637()
{
    sub_1646();
    return;
}

void sub_1646()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1713()
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

void sub_1814()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1836();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1836()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1927(unknown uParam0)
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
    sub_2326( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2326(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2368(int iParam0, boolean bParam1)
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

void sub_2461(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2470();
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
        sub_3245();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2470()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2508( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2508( 1, g_U569[I] )) != 0)
            {
                sub_2794( I );
            }
        }
    }
    if (NOT sub_2960())
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

int sub_2508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2794(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2879( g_U569 - 1 );
    return;
}

void sub_2879(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2960()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2508( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3245()
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

void sub_3384()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    ENABLE_SCENE_STREAMING( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
    if (NOT (IS_CHAR_DEAD( l_U2524 )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U2524, 0 );
    }
    SET_CREATE_RANDOM_COPS( 1 );
    SWITCH_PED_PATHS_ON( 1263.53000000, 392.66000000, 20.00000000, 1288.44000000, 401.96000000, 23.00000000 );
    SWITCH_PED_PATHS_ON( 931.76000000, -493.01000000, 14.48000000, 933.83000000, -491.57000000, 15.54000000 );
    SWITCH_PED_PATHS_ON( 925.00000000, -495.00000000, 13.00000000, 937.00000000, -489.00000000, 16.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1744.01000000, 825.19000000, 13.38000000, 1775.83000000, 848.47000000, 17.43000000 );
    RELEASE_WEATHER();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3710();
    sub_3861();
    sub_3993();
    sub_4073();
    sub_4153();
    DESTROY_ALL_CAMS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    DONT_SUPPRESS_PED_MODEL( l_U2527 );
    DONT_SUPPRESS_CAR_MODEL( l_U2420 );
    DONT_SUPPRESS_CAR_MODEL( -956048545 );
    DONT_SUPPRESS_CAR_MODEL( 1208856469 );
    DONT_SUPPRESS_CAR_MODEL( 1884962369 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2420 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1065515019 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1950944176 );
    sub_4356();
    if (DOES_BLIP_EXIST( l_U2497 ))
    {
        REMOVE_BLIP( l_U2497 );
    }
    if (DOES_BLIP_EXIST( l_U2498 ))
    {
        REMOVE_BLIP( l_U2498 );
    }
    if (DOES_BLIP_EXIST( l_U2502 ))
    {
        REMOVE_BLIP( l_U2502 );
    }
    if (DOES_BLIP_EXIST( l_U2503 ))
    {
        REMOVE_BLIP( l_U2503 );
    }
    if (DOES_BLIP_EXIST( l_U2499 ))
    {
        REMOVE_BLIP( l_U2499 );
    }
    if (DOES_BLIP_EXIST( l_U2500 ))
    {
        REMOVE_BLIP( l_U2500 );
    }
    if (DOES_OBJECT_EXIST( l_U2549 ))
    {
        DELETE_OBJECT( ref l_U2549 );
    }
    if (DOES_OBJECT_EXIST( l_U2550 ))
    {
        DELETE_OBJECT( ref l_U2550 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2524 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2525 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2527 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2528 );
    if (DOES_VEHICLE_EXIST( l_U2529 ))
    {
        if (l_U2466 == 1)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2529 );
            l_U2466 = 0;
        }
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3710()
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

void sub_3861()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U2535[I] ))
        {
            DELETE_OBJECT( ref l_U2535[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U2534 ))
    {
        DELETE_OBJECT( ref l_U2534 );
    }
    if (DOES_OBJECT_EXIST( l_U2547 ))
    {
        DELETE_OBJECT( ref l_U2547 );
    }
    return;
}

void sub_3993()
{
    int I;

    if (l_U2515 != 0)
    {
        for ( I = 0; I <= (l_U2515 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2509[I] );
        }
    }
    l_U2515 = 0;
    return;
}

void sub_4073()
{
    int I;

    if (l_U2523 != 0)
    {
        for ( I = 0; I <= (l_U2523 - 1); I++ )
        {
            REMOVE_ANIMS( l_U2517[I] );
        }
    }
    l_U2523 = 0;
    return;
}

void sub_4153()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U2531[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2531[I] );
        }
    }
    return;
}

void sub_4356()
{
    g_U965 = -1;
    return;
}

void sub_4860()
{
    g_U2226 = 0;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    SUPPRESS_PED_MODEL( l_U2527 );
    sub_4987( "V1AUD" );
    sub_5150( 0, sub_5101(), "Niko", 0 );
    l_U2626 = sub_5101();
    l_U2627 = sub_5309();
    while (NOT sub_5345())
    {
        WAIT( 0 );
    }
    while (NOT sub_5449())
    {
        WAIT( 0 );
    }
    return;
}

void sub_4987(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_5006();
    return;
}

void sub_5006()
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

void sub_5101()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5150(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5234( "\n PED NUMBER ", uParam0 );
    sub_5274( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5234(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5274(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5309()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5345()
{
    int I;

    if (l_U2515 != 0)
    {
        for ( I = 0; I <= (l_U2515 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U2509[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_5449()
{
    int I;

    if (l_U2523 != 0)
    {
        for ( I = 0; I <= (l_U2523 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U2517[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_5667()
{
    if (IS_PLAYER_PLAYING( sub_5309() ))
    {
        TASK_SWAP_WEAPON( sub_5101(), 0 );
        SET_CHAR_COORDINATES( sub_5101(), 926.10860000, -489.92090000, 14.34530000 );
        SET_CHAR_HEADING( sub_5101(), 96.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U2497 )))
    {
        ADD_BLIP_FOR_COORD( 1284.32300000, 397.87690000, 21.39790000, ref l_U2497 );
        SET_ROUTE( l_U2497, 1 );
    }
    sub_5844( ref l_U2497, 1304.35300000, 408.00000000, 21.33540000, 1.39240000 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2423 );
    GET_CURRENT_TAXI_CAR_MODEL( ref l_U2420 );
    REQUEST_MODEL( l_U2420 );
    while (NOT (HAS_MODEL_LOADED( l_U2420 )))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( -956048545 );
    SUPPRESS_CAR_MODEL( 1208856469 );
    SUPPRESS_CAR_MODEL( 1884962369 );
    LOAD_SCENE( 926.10860000, -489.92090000, 14.34530000 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 - 2.00000000, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 + 2.00000000, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 + 4.00000000, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 + 6.00000000, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 + 8.00000000, l_U2413._fU8, 2.00000000, 1 );
    CLEAR_AREA( l_U2413._fU0, l_U2413._fU4 + 10.00000000, l_U2413._fU8, 2.00000000, 1 );
    CREATE_CAR( l_U2420, l_U2413._fU0, l_U2413._fU4, l_U2413._fU8, ref l_U2412, 1 );
    SET_CAR_ENGINE_ON( l_U2412, 1, 1 );
    SET_TAXI_LIGHTS( l_U2412, 1 );
    SET_CAR_HEADING( l_U2412, l_U2416 );
    WAIT( 0 );
    if (NOT (HAS_MODEL_LOADED( 8772846 )))
    {
        sub_6420( 8772846 );
        while (NOT (HAS_MODEL_LOADED( 8772846 )))
        {
            WAIT( 0 );
        }
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U2412 )))
    {
        CREATE_CHAR_INSIDE_CAR( l_U2412, 26, 8772846, ref l_U2421 );
    }
    SET_CHAR_DECISION_MAKER( l_U2421, l_U2423 );
    if (NOT (IS_CHAR_DEAD( l_U2421 )))
    {
        if (NOT (IS_CAR_DEAD( l_U2412 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_CAR_DRIVE_TO_COORD( 0, l_U2412, l_U2417._fU0, l_U2417._fU4, l_U2417._fU8, 4.00000000, 0, -956048545, 0, 5.00000000, -1 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            TASK_PERFORM_SEQUENCE( l_U2421, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2421 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2412 );
        }
    }
    DO_SCREEN_FADE_IN( 500 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_5101() )))
    {
        SET_PLAYER_CONTROL( sub_5309(), 1 );
    }
    SETTIMERA( 0 );
    sub_6823();
    l_U2384++;
    return;
}

void sub_5844(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_6420(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U2509[l_U2515] = uParam0;
    l_U2515++;
    return;
}

void sub_6823()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6885()
{
    if (l_U2490 == 0)
    {
        PRINT_HELP( "VL1X_1" );
        PRINT_NOW( "V1_COMMAND_01", 7500, 1 );
        SWITCH_PED_PATHS_OFF( 1263.53000000, 392.66000000, 19.00000000, 1288.44000000, 401.96000000, 24.00000000 );
        ADD_SCENARIO_BLOCKING_AREA( 1263.53000000, 392.66000000, 19.00000000, 1288.44000000, 401.96000000, 24.00000000 );
        l_U2490 = 1;
    }
    sub_7029();
    if (l_U2489 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.03400000, 398.70520000, 21.39790000, 200.00000000, 200.00000000, 100.00000000, 0 ))
        {
            sub_7740();
            sub_8122();
            sub_8620();
            l_U2489 = 1;
        }
    }
    if ((l_U2460 == 0) AND (l_U2459 == 0))
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( l_U2626, 1284.32300000, 397.87690000, 21.39790000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 1 )) AND (sub_9512( 1, 1 )))
        {
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 0, 1, 1 );
            if (DOES_BLIP_EXIST( l_U2497 ))
            {
                REMOVE_BLIP( l_U2497 );
            }
            SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
            sub_9871();
            l_U2384++;
        }
    }
    sub_15567();
    if ((l_U2459 == 0) AND (IS_NON_FRAG_OBJECT_SMASHED( 1280.80000000, 399.60000000, 22.80000000, 1.00000000, -518173288 )))
    {
        l_U2459 = 1;
    }
    if ((l_U2460 == 0) AND (IS_NON_FRAG_OBJECT_SMASHED( 1277.80000000, 399.60000000, 22.80000000, 1.00000000, 1282124525 )))
    {
        l_U2460 = 1;
    }
    if ((l_U2460 == 1) || (l_U2459 == 1))
    {
        if (sub_9512( 1, 1 ))
        {
            if (DOES_BLIP_EXIST( l_U2497 ))
            {
                REMOVE_BLIP( l_U2497 );
            }
            if (DOES_BLIP_EXIST( l_U2501 ))
            {
                REMOVE_BLIP( l_U2501 );
            }
            if (DOES_BLIP_EXIST( l_U2502 ))
            {
                REMOVE_BLIP( l_U2502 );
            }
            if (DOES_BLIP_EXIST( l_U2503 ))
            {
                REMOVE_BLIP( l_U2503 );
            }
            if (DOES_OBJECT_EXIST( l_U2549 ))
            {
                DELETE_OBJECT( ref l_U2549 );
            }
            if (DOES_OBJECT_EXIST( l_U2550 ))
            {
                DELETE_OBJECT( ref l_U2550 );
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT (IS_CHAR_INJURED( l_U2524 )))
            {
                sub_17344();
            }
            l_U2384++;
            l_U2384++;
            l_U2384++;
            l_U2384++;
            SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
            l_U2384++;
        }
    }
    if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U2626, ref l_U2529 );
    }
    if (l_U2489 == 1)
    {
        sub_23519();
    }
    return;
}

void sub_7029()
{
    if (NOT (IS_CAR_DEAD( g_U2238 )))
    {
        if (l_U2393 == 0)
        {
            GET_CHAR_COORDINATES( sub_5101(), ref l_U2417._fU0, ref l_U2417._fU4, ref l_U2417._fU8 );
            CLEAR_HELP();
            PRINT_HELP( "VL1X_3" );
            l_U2392 = 1;
            l_U2393 = 1;
            SETTIMERA( 0 );
        }
    }
    else if (l_U2392 == 0)
    {
        if (TIMERA() > 5000)
        {
            PRINT_HELP( "VL1X_2" );
            l_U2392 = 1;
            SETTIMERA( 0 );
        }
    }
    if (((l_U2393 == 1) AND (l_U2394 == 0)) AND (TIMERA() > 3000))
    {
        if ((NOT (IS_CAR_DEAD( g_U2238 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U2626 ))))
        {
            if (LOCATE_CHAR_ON_FOOT_CAR_2D( sub_5101(), g_U2238, 5.00000000, 5.00000000, 0 ))
            {
                if (NOT (IS_CHAR_DEAD( g_U2234 )))
                {
                    TASK_CAR_TEMP_ACTION( g_U2234, g_U2238, 24, 30000 );
                }
                PRINT_HELP( "VL1X_4" );
                l_U2394 = 1;
                l_U2393 = 1;
                l_U2392 = 1;
                SETTIMERA( 0 );
            }
        }
    }
    if (((l_U2394 == 1) AND (l_U2395 == 0)) AND (TIMERA() > 7500))
    {
        CLEAR_HELP();
        l_U2396 = 1;
        l_U2395 = 1;
    }
    if ((NOT (IS_CAR_DEAD( g_U2238 ))) AND (l_U2396 == 0))
    {
        if (NOT (LOCATE_CHAR_ON_FOOT_CAR_2D( sub_5101(), g_U2238, 40.00000000, 40.00000000, 0 )))
        {
            DONT_SUPPRESS_CAR_MODEL( -956048545 );
            DONT_SUPPRESS_CAR_MODEL( 1208856469 );
            DONT_SUPPRESS_CAR_MODEL( 1884962369 );
            l_U2396 = 1;
            l_U2395 = 1;
            l_U2394 = 1;
            l_U2393 = 1;
            l_U2392 = 1;
            CLEAR_HELP();
        }
    }
    if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U2626 )) AND (l_U2393 == 1)) AND (l_U2396 == 0))
    {
        CLEAR_HELP();
        DONT_SUPPRESS_CAR_MODEL( -956048545 );
        DONT_SUPPRESS_CAR_MODEL( 1208856469 );
        DONT_SUPPRESS_CAR_MODEL( 1884962369 );
        l_U2396 = 1;
        l_U2395 = 1;
        l_U2394 = 1;
        l_U2393 = 1;
        l_U2392 = 1;
    }
    return;
}

void sub_7740()
{
    # -sub_C1FFC0-0xc214c8( 3, ref l_U2553 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U2552 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2551 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2555 );
    LOAD_COMBAT_DECISION_MAKER( 6, ref l_U2557 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U2556 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U2554 );
    sub_6420( l_U2527 );
    sub_6420( l_U2516 );
    while (NOT sub_5345())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    REQUEST_ANIMS( "MISSVLAD1" );
    while (NOT (HAVE_ANIMS_LOADED( "MISSVLAD1" )))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "GESTURES@NIKO" );
    while (NOT (HAVE_ANIMS_LOADED( "GESTURES@NIKO" )))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "PICKUP_OBJECT" );
    while (NOT (HAVE_ANIMS_LOADED( "PICKUP_OBJECT" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_8122()
{
    ADD_SCENARIO_BLOCKING_AREA( 1269.84000000, 392.72000000, 19.00000000, 1294.22000000, 411.41000000, 24.00000000 );
    SET_PED_NON_CREATION_AREA( 1269.84000000, 392.72000000, 19.00000000, 1294.22000000, 411.41000000, 24.00000000 );
    CLEAR_AREA( 1284.45700000, 404.35480000, 21.47680000, 3.00000000, 1 );
    CREATE_CHAR( 4, l_U2527, 1284.45700000 - 0.20000000, 404.35480000, 21.47680000, ref l_U2524, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U2524, "K_CHINA_Room01" );
    SET_CHAR_HEADING( l_U2524, 82.42430000 );
    SET_CHAR_DECISION_MAKER( l_U2524, l_U2553 );
    SET_COMBAT_DECISION_MAKER( l_U2524, l_U2555 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2524, 1 );
    SET_CHAR_PROOFS( l_U2524, 0, 1, 1, 0, 0 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U2524, 1 );
    sub_5150( 2, l_U2524, "OLD_MAN", 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2524, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U2524, 1 );
    SET_CHAR_AS_ENEMY( l_U2524, 1 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U2524, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 2, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U2524, 8, 0, 0 );
    TASK_PLAY_ANIM( l_U2524, "winclean_default", "MISSVLAD1", 1.00000000, 1, 0, 0, 0, -1 );
    return;
}

void sub_8620()
{
    CREATE_OBJECT( l_U2516, 1276.59000000, 344.71000000, 21.75000000, ref l_U2547, 1 );
    SET_OBJECT_COLLISION( l_U2547, 0 );
    SET_OBJECT_VISIBLE( l_U2547, 0 );
    SET_OBJECT_AS_STEALABLE( l_U2547, 0 );
    FREEZE_OBJECT_POSITION( l_U2547, 1 );
    CREATE_OBJECT( l_U2516, 1277.08000000, 345.44000000, 20.79000000, ref l_U2534, 1 );
    SET_OBJECT_AS_STEALABLE( l_U2534, 1 );
    SET_OBJECT_ROTATION( l_U2534, 0, 0, 0 );
    CREATE_OBJECT( l_U2516, 1275.99000000, 344.01000000, 20.73000000, ref l_U2535[0], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[0], 1 );
    SET_OBJECT_ROTATION( l_U2535[0], 0, 0, 50 );
    CREATE_OBJECT( l_U2516, 1282.13000000, 348.60000000, 20.95000000, ref l_U2535[1], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[1], 1 );
    SET_OBJECT_ROTATION( l_U2535[1], 0, 0, 30 );
    CREATE_OBJECT( l_U2516, 1285.54000000, 349.98000000, 20.98000000, ref l_U2535[2], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[2], 1 );
    SET_OBJECT_ROTATION( l_U2535[2], 0, 0, 85 );
    CREATE_OBJECT( l_U2516, 1275.13000000, 349.62000000, 20.95000000, ref l_U2535[3], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[3], 1 );
    SET_OBJECT_ROTATION( l_U2535[3], 0, 0, 65 );
    CREATE_OBJECT( l_U2516, 1276.30000000, 343.71000000, 20.73000000, ref l_U2535[4], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[4], 1 );
    SET_OBJECT_ROTATION( l_U2535[4], 0, 0, 130 );
    CREATE_OBJECT( l_U2516, 1277.22000000, 344.72000000, 20.78000000, ref l_U2535[5], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[5], 1 );
    SET_OBJECT_ROTATION( l_U2535[5], 0, 0, 75 );
    CREATE_OBJECT( l_U2516, 1276.23000000, 344.94000000, 20.76000000, ref l_U2535[6], 1 );
    SET_OBJECT_AS_STEALABLE( l_U2535[6], 1 );
    SET_OBJECT_ROTATION( l_U2535[6], 0, 0, 150 );
    WAIT( 2000 );
    SET_OBJECT_DYNAMIC( l_U2534, 1 );
    SET_OBJECT_DYNAMIC( l_U2535[0], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[1], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[2], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[3], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[4], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[5], 1 );
    SET_OBJECT_DYNAMIC( l_U2535[6], 1 );
    return;
}

int sub_9512(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5101() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5101(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5101() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5101(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5101()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5101() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5101() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5309() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5309() )))
    {
        return 0;
    }
    return 1;
}

void sub_9871()
{
    while (l_U2470 == 0)
    {
        if (l_U2471[0] == 0)
        {
            CLEAR_HELP();
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U2471[0] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2471[1] == 0)) AND (l_U2471[0] == 1))
        {
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 0, 1, 1 );
            CLEAR_WANTED_LEVEL( l_U2627 );
            SET_CREATE_RANDOM_COPS( 0 );
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U2623 );
            CREATE_CAM( 3, ref l_U2561 );
            l_U2570[0] = {1285.16500000, 397.16310000, 22.65851000};
            l_U2592[0] = {3.46212100, 1.60135500, 13.25489000};
            l_U2614[0] = 45;
            l_U2570[1] = {1285.42600000, 406.65110000, 22.69863000};
            l_U2592[1] = {-1.26450800, -0.00000000, 163.57810000};
            l_U2614[1] = 48;
            l_U2570[1] = {1286.73300000, 405.84470000, 22.68172000};
            l_U2592[1] = {-1.03532800, -0.00000000, 143.29550000};
            l_U2614[1] = 50;
            l_U2570[2] = {1284.98000000, 402.21010000, 22.93344000};
            l_U2592[2] = {-2.18368300, 0.00000000, 170.05250000};
            l_U2614[2] = 20;
            l_U2570[3] = {1285.34800000, 398.28140000, 22.75447000};
            l_U2592[3] = {0.33978400, 0.00000000, 31.40940000};
            l_U2614[3] = 50;
            l_U2570[4] = {1274.00800000, 378.48580000, 21.61658000};
            l_U2592[4] = {-0.95671600, 0.00000000, -19.32031000};
            l_U2614[4] = 20;
            l_U2570[4] = {1285.00200000, 396.36010000, 22.74553000};
            l_U2592[4] = {0.18919900, 0.00000000, 30.75614000};
            l_U2614[4] = 30;
            l_U2570[5] = {1285.38000000, 398.22820000, 23.01410000};
            l_U2592[5] = {-3.03694800, 0.00000000, 31.40940000};
            l_U2614[5] = 25;
            l_U2570[6] = {1285.38000000, 398.22820000, 23.01410000};
            l_U2592[6] = {-3.03694800, 0.00000000, 31.40940000};
            l_U2614[6] = 25;
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                CREATE_CAM( 14, ref l_U2562[l_U2625] );
                SET_CAM_POS( l_U2562[l_U2625], l_U2570[l_U2625]._fU0, l_U2570[l_U2625]._fU4, l_U2570[l_U2625]._fU8 );
                SET_CAM_ROT( l_U2562[l_U2625], l_U2592[l_U2625]._fU0, l_U2592[l_U2625]._fU4, l_U2592[l_U2625]._fU8 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 1 );
                SET_CAM_FOV( l_U2562[l_U2625], l_U2614[l_U2625] );
            }
            SET_CAM_ACTIVE( l_U2562[1], 1 );
            SET_CAM_PROPAGATE( l_U2562[1], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            sub_10868();
            CLEAR_AREA( 1284.32300000, 397.87690000, 21.39790000, 10.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1284.32300000, 397.87690000, 21.39790000, 10.00000000 );
            CLEAR_AREA_OF_COPS( 1284.32300000, 397.87690000, 21.39790000, 50.00000000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
            SET_CHAR_COORDINATES( l_U2626, 1284.12500000, 398.94970000 - 0.26000000, 21.39890000 );
            SET_CHAR_HEADING( l_U2626, 1.82900000 );
            TASK_SWAP_WEAPON( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_SWAP_WEAPON( 0, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U2524, 30000, 0 );
                TASK_PLAY_ANIM( 0, "door_shake", "MISSVLAD1", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            GET_GAME_VIEWPORT_ID( ref l_U2622 );
            WAIT( 0 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2622, "K_CHINA_Room01" );
            WAIT( 250 );
            sub_12038( "V1_ROCK", 0, 1, ref l_U2636, 6, 1 );
            SETTIMERA( 0 );
            l_U2471[1] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2471[10] == 0)) AND (l_U2471[1] == 1))
        {
            if (NOT (IS_CHAR_INJURED( l_U2524 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LOOK_AT_CHAR( 0, l_U2626, 30000, 0 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "turn_to_face_niko", "MISSVLAD1", 4.00000000, 0, 1, 1, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            SETTIMERA( 0 );
            l_U2471[10] = 1;
        }
        if ((((TIMERA() > 0) AND (l_U2471[2] == 0)) AND (l_U2471[10] == 1)) AND (NOT (sub_13260( l_U2636 ))))
        {
            SET_CAM_PROPAGATE( l_U2562[1], 0 );
            SET_CAM_ACTIVE( l_U2562[1], 1 );
            SET_CAM_PROPAGATE( l_U2562[1], 1 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2524, "K_CHINA_Room01" );
                FREEZE_CHAR_POSITION( l_U2524, 1 );
            }
            sub_12038( "V1_ROCK", 1, 1, ref l_U2636, 6, 1 );
            SETTIMERA( 0 );
            l_U2471[2] = 1;
        }
        if ((((TIMERA() > 0) AND (l_U2471[3] == 0)) AND (l_U2471[2] == 1)) AND (NOT (sub_13260( l_U2636 ))))
        {
            SET_CAM_PROPAGATE( l_U2562[1], 0 );
            SET_CAM_ACTIVE( l_U2562[2], 1 );
            SET_CAM_PROPAGATE( l_U2562[2], 1 );
            FREEZE_CHAR_POSITION( l_U2626, 1 );
            SET_CHAR_COORDINATES( l_U2626, 1284.59000000, 398.96640000, 21.40310000 );
            SET_CHAR_HEADING( l_U2626, 1.74610000 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            sub_12038( "V1_ROCK", 2, 1, ref l_U2636, 6, 1 );
            SETTIMERA( 0 );
            l_U2471[3] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2471[4] == 0)) AND (l_U2471[3] == 1))
        {
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            GET_CHAR_COORDINATES( l_U2626, ref l_U2409._fU0, ref l_U2409._fU4, ref l_U2409._fU8 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                CLEAR_CHAR_TASKS( l_U2524 );
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1283.90000000, 401.05000000, 21.47680000, 2, 10000 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2409._fU0 + 1.50000000, l_U2409._fU4, l_U2409._fU8 );
                TASK_STAND_STILL( 0, 6000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1284.45700000 - 0.20000000, 404.35480000, 21.47680000, 2, 10000 );
                TASK_ACHIEVE_HEADING( 0, 82.42430000 );
                TASK_PLAY_ANIM( 0, "winclean_default", "MISSVLAD1", 1.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            SETTIMERA( 0 );
            l_U2471[4] = 1;
        }
        if ((((TIMERA() > 0) AND (l_U2471[5] == 0)) AND (l_U2471[4] == 1)) AND (NOT (sub_13260( l_U2636 ))))
        {
            SET_CAM_PROPAGATE( l_U2562[2], 0 );
            SET_CAM_ACTIVE( l_U2562[3], 1 );
            SET_CAM_PROPAGATE( l_U2562[3], 1 );
            GET_GAME_VIEWPORT_ID( ref l_U2622 );
            WAIT( 0 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2622, "K_CHINA_Room01" );
            sub_12038( "V1_ARR2", 2, 1, ref l_U2636, 6, 1 );
            SETTIMERA( 0 );
            l_U2471[5] = 1;
        }
        if ((((TIMERA() > 0) AND (l_U2471[6] == 0)) AND (l_U2471[5] == 1)) AND (NOT (sub_13260( l_U2636 ))))
        {
            SET_CAM_PROPAGATE( l_U2562[3], 0 );
            SETTIMERA( 0 );
            l_U2471[6] = 1;
        }
        if (((TIMERA() > 1000) AND (l_U2471[7] == 0)) AND (l_U2471[6] == 1))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            SETTIMERA( 0 );
            l_U2471[7] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2471[8] == 0)) AND (l_U2471[7] == 1))
        {
            SETTIMERA( 0 );
            l_U2471[8] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2471[9] == 0)) AND (l_U2471[8] == 1))
        {
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
            SET_CHAR_COORDINATES( l_U2626, 1283.94700000, 397.64890000, 21.39810000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (HAS_CHAR_GOT_WEAPON( l_U2626, 46 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U2626, 46, 1 );
            }
            else
            {
                TASK_SWAP_WEAPON( l_U2626, 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            SET_PLAYER_CONTROL( l_U2627, 1 );
            END_CAM_COMMANDS( ref l_U2623 );
            SETTIMERA( 0 );
            l_U2471[9] = 1;
            l_U2470 = 1;
        }
        if (((((sub_14856()) AND (IS_SCREEN_FADED_IN())) AND (l_U2470 == 0)) AND (l_U2471[1] == 1)) AND (TIMERB() > 1000))
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                CLEAR_CHAR_TASKS( l_U2524 );
                SET_CHAR_COORDINATES( l_U2524, 1284.45700000 - 0.20000000, 404.35480000, 21.47680000 );
                SET_CHAR_HEADING( l_U2524, 82.42430000 );
                TASK_PLAY_ANIM( l_U2524, "winclean_default", "MISSVLAD1", 1.00000000, 1, 0, 0, 0, -1 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
            TASK_CLEAR_LOOK_AT( l_U2626 );
            SET_CHAR_COORDINATES( l_U2626, 1283.94700000, 397.64890000, 21.39810000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (HAS_CHAR_GOT_WEAPON( l_U2626, 46 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U2626, 46, 1 );
            }
            else
            {
                TASK_SWAP_WEAPON( l_U2626, 1 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U2623 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            WAIT( 1000 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 1, 1, 1 );
            DO_SCREEN_FADE_IN( 1000 );
            l_U2470 = 1;
        }
        WAIT( 0 );
    }
    return;
}

void sub_10868()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2529 );
    if (((DOES_VEHICLE_EXIST( l_U2529 )) AND (NOT (IS_CAR_DEAD( l_U2529 )))) AND (l_U2529 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U2529 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U2529 );
            l_U2466 = 1;
        }
        GET_CAR_MODEL( l_U2529, ref l_U2428 );
        if ((((((((((((l_U2428 == -713569950) || (l_U2428 == 1353720154)) || (l_U2428 == 850991848)) || (l_U2428 == -2137348917)) || (l_U2428 == -1961627517)) || (l_U2428 == 569305213)) || (l_U2428 == 904750859)) || (l_U2428 == 2053223216)) || (l_U2428 == -1099960214)) || (l_U2428 == 1677715180)) || (l_U2428 == 1938952078)) || (l_U2428 == 1917016601))
        {
            PRINTSTRING( "\n ---> PLAYER IN LARGE CAR <--- \n\n" );
            l_U2495 = 1;
        }
        if ((LOCATE_CAR_3D( l_U2529, 1284.32300000, 397.87690000, 21.39790000, 3.20000000, 3.20000000, 3.20000000, 0 )) || ((LOCATE_CAR_3D( l_U2529, 1284.32300000, 397.87690000, 21.39790000, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (l_U2495 == 1)))
        {
            PRINTSTRING( "\n ---> MOVE CAR <--- \n\n" );
            if ((l_U2530 != l_U2529) AND (l_U2530 != nil))
            {
                if (DOES_VEHICLE_EXIST( l_U2530 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2530 );
                }
            }
            GET_CAR_MODEL( l_U2529, ref l_U2428 );
            if (l_U2495 == 1)
            {
                PRINTSTRING( "\n ---> MOVE LARGE CAR <--- \n\n" );
                CLEAR_AREA( 1277.29500000, 382.95180000, 21.25780000, 4.00000000, 1 );
                SET_CAR_HEADING( l_U2529, 269.99130000 );
                SET_CAR_COORDINATES( l_U2529, 1277.29500000, 382.95180000, 21.25780000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( l_U2428 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2529 );
                }
            }
            else
            {
                CLEAR_AREA( 1272.86700000, 393.62650000, 21.29870000, 3.00000000, 1 );
                SET_CAR_HEADING( l_U2529, 270.72020000 );
                SET_CAR_COORDINATES( l_U2529, 1272.86700000, 393.62650000, 21.29870000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( l_U2428 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2529 );
                }
            }
        }
        l_U2530 = l_U2529;
        l_U2495 = 0;
    }
    return;
}

void sub_12038(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_12065( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_12065(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_12123( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_12123(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12145( iParam1 )))
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
    sub_12837( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_12145(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12222( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12222( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12222( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_12222(unknown uParam0)
{
    return;
}

void sub_12837(int iParam0, int iParam1)
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

int sub_13260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12222( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12222( "\n speech is not playing" );
    }
    return 0;
}

int sub_14856()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_15567()
{
    if (((((l_U2464 == 0) AND (l_U2465 == 0)) AND (l_U2386 != 46)) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1280.81000000, 399.73000000, 22.85000000, 1.35000000 + 0.20000000, 0.50000000 + 0.20000000, 0.90000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000 + 0.20000000, 0.50000000 + 0.20000000, 0.90000000, 0 ))))
    {
        if (DOES_OBJECT_EXIST( l_U2534 ))
        {
            if (LOCATE_OBJECT_3D( l_U2534, 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2534, 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[0] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[0], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[0], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[1] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[1], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[1], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[2] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[2], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[2], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[3] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[3], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[3], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[4] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[4], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[4], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[5] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[5], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[5], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
        if (DOES_OBJECT_EXIST( l_U2535[6] ))
        {
            if (LOCATE_OBJECT_3D( l_U2535[6], 1280.81000000, 399.73000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2464 = 1;
            }
            else if (LOCATE_OBJECT_3D( l_U2535[6], 1277.67000000 + 0.05000000, 399.72000000, 22.85000000, 1.35000000, 0.50000000, 0.90000000, 0 ))
            {
                l_U2465 = 1;
            }
        }
    }
    if ((l_U2464 == 1) AND (l_U2459 == 0))
    {
        SMASH_GLASS_ON_OBJECT( 1280.80000000, 399.60000000, 22.80000000, 1.00000000, -518173288, 0.75000000 );
    }
    else if ((l_U2465 == 1) AND (l_U2460 == 0))
    {
        SMASH_GLASS_ON_OBJECT( 1277.80000000, 399.60000000, 22.80000000, 1.00000000, 1282124525, 0.75000000 );
    }
    return;
}

void sub_17344()
{
    int iVar2;

    iVar2 = 0;
    l_U2470 = 0;
    if (IS_CHAR_DEAD( l_U2524 ))
    {
        return;
    }
    while (l_U2470 == 0)
    {
        if (iVar2 == 0)
        {
            iVar2 = 1;
            WAIT( 0 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 0, 1, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U2626, 0, 1 );
            if (DOES_BLIP_EXIST( l_U2497 ))
            {
                REMOVE_BLIP( l_U2497 );
            }
            sub_3861();
            SET_CREATE_RANDOM_COPS( 1 );
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U2623 );
            l_U2570[0] = {1275.44800000, 407.27380000, 23.18835000};
            l_U2592[0] = {-2.50637000, -7.34742500, -152.57970000};
            l_U2614[0] = 45;
            l_U2570[0] = {1290.24900000, 396.53420000, 22.67459000};
            l_U2592[0] = {0.60878400, 2.52087200, 74.24689000};
            l_U2614[0] = 30;
            l_U2570[1] = {1284.29200000, 397.60600000, 23.90202000};
            l_U2592[1] = {-27.25972000, -0.00000000, 2.01531000};
            l_U2614[1] = 45;
            l_U2570[1] = {1284.84500000, 395.20660000, 22.57323000};
            l_U2592[1] = {19.04215000, -4.11704000, 25.76821000};
            l_U2614[1] = 40;
            l_U2570[2] = {1282.99700000, 392.67090000, 22.76962000};
            l_U2592[2] = {2.28784400, 0.00000000, 91.97865000};
            l_U2614[2] = 35;
            l_U2570[3] = {1285.00900000, 395.10680000, 23.02707000};
            l_U2592[3] = {-0.34882600, -4.46898800, 40.66880000};
            l_U2614[3] = 42;
            l_U2570[3] = {1284.85300000, 395.38560000, 22.92983000};
            l_U2592[3] = {-0.34882600, -4.46898800, 40.66880000};
            l_U2614[3] = 45;
            l_U2570[4] = {1284.47400000, 395.96680000, 22.99918000};
            l_U2592[4] = {-1.84170700, -3.89410800, 35.61011000};
            l_U2614[4] = 33;
            l_U2614[5] = 40;
            l_U2570[6] = {1285.38000000, 398.22820000, 23.01410000};
            l_U2592[6] = {-3.03694800, 0.00000000, 31.40940000};
            l_U2614[6] = 25;
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                CREATE_CAM( 14, ref l_U2562[l_U2625] );
                SET_CAM_POS( l_U2562[l_U2625], l_U2570[l_U2625]._fU0, l_U2570[l_U2625]._fU4, l_U2570[l_U2625]._fU8 );
                SET_CAM_ROT( l_U2562[l_U2625], l_U2592[l_U2625]._fU0, l_U2592[l_U2625]._fU4, l_U2592[l_U2625]._fU8 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 1 );
                SET_CAM_FOV( l_U2562[l_U2625], l_U2614[l_U2625] );
            }
            SET_CAM_ACTIVE( l_U2562[0], 1 );
            SET_CAM_PROPAGATE( l_U2562[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            sub_10868();
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                SET_CHAR_HEALTH( l_U2524, 200 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
            }
            GET_CHAR_COORDINATES( l_U2626, ref l_U2409._fU0, ref l_U2409._fU4, ref l_U2409._fU8 );
            if (l_U2409._fU4 > 398.75000000)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U2626 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                    SET_CHAR_COORDINATES( l_U2626, l_U2409._fU0, 398.70000000, 21.38630000 );
                }
            }
            CLEAR_AREA( 1282.04900000, 392.52020000, 21.27130000, 4.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1282.04900000, 392.52020000, 21.27130000, 50.00000000 );
            if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_LOOK_AT_CHAR( 0, l_U2524, 30000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1282.04900000, 392.52020000, 21.27130000, 2, 20000, 1.00000000 );
                TASK_ACHIEVE_HEADING( 0, 336.99100000 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LOOK_AT_CHAR( 0, l_U2524, 30000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1282.04900000, 392.52020000, 21.27130000, 2, 20000, 1.00000000 );
                TASK_ACHIEVE_HEADING( 0, 336.99100000 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            sub_10868();
            CLEAR_AREA( 1284.32300000, 397.87690000, 21.39790000, 2.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1284.32300000, 397.87690000, 21.39790000, 8.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 0, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                SET_CHAR_NEVER_TARGETTED( l_U2524, 0 );
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LOOK_AT_CHAR( 0, l_U2626, 30000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1284.32300000, 396.40000000, 21.39790000, 3, 15000, 1.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2626 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            SETTIMERA( 0 );
        }
        if (l_U2468 == 0)
        {
            if (TIMERA() >= 2065)
            {
                GET_FRAME_TIME( ref l_U2505 );
                l_U2506 += l_U2505 + 0.10000000;
                GET_FRAME_TIME( ref l_U2507 );
                l_U2508 -= l_U2507 + 0.10000000;
                PRINTSTRING( "\n ---> OPEN <---\n" );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, l_U2508 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, l_U2506 );
                if (l_U2506 >= 1.00000000)
                {
                    l_U2468 = 1;
                    if (l_U2496 == 0)
                    {
                        sub_12038( "V1_ARR2", 0, 1, ref l_U2636, 7, 0 );
                        l_U2496 = 1;
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U2524 )))
        {
            if ((((TIMERA() > 2000) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U2524, 1284.32300000, 396.40000000, 21.39790000, 1.30000000, 1.30000000, 1.30000000, 0 ))) AND (iVar2 == 1)) || ((TIMERA() > 4000) AND (iVar2 == 1)))
            {
                iVar2 = 2;
                SET_CAM_PROPAGATE( l_U2562[0], 0 );
                SET_CAM_ACTIVE( l_U2562[1], 1 );
                SET_CAM_PROPAGATE( l_U2562[1], 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                SET_CHAR_COORDINATES( l_U2626, 1282.04900000, 392.52020000, 21.27130000 );
                SET_CHAR_HEADING( l_U2626, 336.99100000 );
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, 1284.32300000, 396.40000000, 21.39790000 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
                if (l_U2496 == 0)
                {
                    sub_12038( "V1_ARR2", 0, 1, ref l_U2636, 7, 0 );
                    l_U2496 = 1;
                }
                SETTIMERA( 0 );
            }
        }
        if (((TIMERA() > 0) AND (iVar2 == 2)) AND (NOT (sub_13260( l_U2636 ))))
        {
            iVar2 = 3;
            SET_CAM_PROPAGATE( l_U2562[1], 0 );
            SET_CAM_ACTIVE( l_U2562[2], 1 );
            SET_CAM_PROPAGATE( l_U2562[2], 1 );
            sub_12038( "V1_ARR2", 1, 1, ref l_U2636, 7, 0 );
            SETTIMERA( 0 );
        }
        if (((TIMERA() > 0) AND (iVar2 == 3)) AND (NOT (sub_13260( l_U2636 ))))
        {
            iVar2 = 4;
            SET_CAM_PROPAGATE( l_U2562[2], 0 );
            SET_CAM_ACTIVE( l_U2562[3], 1 );
            SET_CAM_PROPAGATE( l_U2562[3], 1 );
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1282.70400000, 396.54630000, 21.38640000, 2, 20000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, 1284.32300000, 396.40000000, 21.39790000 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
            sub_12038( "V1_SMASH", 6, 1, ref l_U2636, 7, 0 );
            SETTIMERA( 0 );
        }
        if ((sub_14856()) AND (IS_SCREEN_FADED_IN()))
        {
            iVar2 = 4;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_20065( ref l_U2636, 0 );
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            WAIT( 500 );
            if (DOES_CHAR_EXIST( l_U2524 ))
            {
                DELETE_CHAR( ref l_U2524 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 1, 1, 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            END_CAM_COMMANDS( ref l_U2623 );
            WAIT( 500 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U2470 = 1;
        }
        if (((TIMERA() > 2000) AND (iVar2 == 4)) AND (NOT (sub_13260( l_U2636 ))))
        {
            if ((TIMERA() > 2000) AND (iVar2 == 4))
            {
                ;
            }
            else
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
                SET_CHAR_COORDINATES( l_U2524, 1284.24400000, 396.73850000, 21.40030000 );
                SET_CHAR_HEADING( l_U2524, 157.17930000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U2524, l_U2626 );
            }
            SETTIMERA( 0 );
            iVar2 = 5;
            l_U2470 = 1;
            sub_20967();
        }
        WAIT( 0 );
    }
    return;
}

void sub_20065(int iParam0, unknown uParam1)
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

void sub_20967()
{
    int iVar2;

    iVar2 = 0;
    l_U2470 = 0;
    while (l_U2470 == 0)
    {
        if (iVar2 == 0)
        {
            iVar2 = 1;
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            l_U2570[0] = {1281.73800000, 394.88000000, 22.52855000};
            l_U2592[0] = {0.67378800, 0.00000000, -46.56760000};
            l_U2614[0] = 45;
            l_U2570[1] = {1285.30500000, 396.06830000, 22.96050000};
            l_U2592[1] = {-4.62041500, 0.00000000, 71.45926000};
            l_U2614[1] = 36;
            l_U2570[2] = {1280.22400000, 392.73350000, 23.37325000};
            l_U2592[2] = {-10.89995000, 0.00000000, -19.40940000};
            l_U2614[2] = 45;
            l_U2614[3] = 40;
            l_U2614[4] = 40;
            l_U2614[5] = 40;
            l_U2570[6] = {1285.38000000, 398.22820000, 23.01410000};
            l_U2592[6] = {-3.03694800, 0.00000000, 31.40940000};
            l_U2614[6] = 25;
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                CREATE_CAM( 14, ref l_U2562[l_U2625] );
                SET_CAM_POS( l_U2562[l_U2625], l_U2570[l_U2625]._fU0, l_U2570[l_U2625]._fU4, l_U2570[l_U2625]._fU8 );
                SET_CAM_ROT( l_U2562[l_U2625], l_U2592[l_U2625]._fU0, l_U2592[l_U2625]._fU4, l_U2592[l_U2625]._fU8 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 1 );
                SET_CAM_FOV( l_U2562[l_U2625], l_U2614[l_U2625] );
            }
            SET_CAM_ACTIVE( l_U2562[0], 1 );
            SET_CAM_PROPAGATE( l_U2562[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if ((DOES_VEHICLE_EXIST( l_U2529 )) AND (NOT (IS_CAR_DEAD( l_U2529 ))))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( l_U2529 )))
                {
                    SET_CAR_AS_MISSION_CAR( l_U2529 );
                    l_U2466 = 1;
                }
            }
            CLEAR_AREA( 1281.66600000, 396.49200000, 21.37710000, 2.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1281.66600000, 396.49200000, 21.37710000, 8.00000000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
            SET_CHAR_COORDINATES( l_U2626, 1282.70400000, 396.54630000, 21.38640000 );
            SET_CHAR_HEADING( l_U2626, 277.98710000 );
            FREEZE_CHAR_POSITION( l_U2626, 1 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
                SET_CHAR_COORDINATES( l_U2524, 1283.86500000, 396.75490000, 21.39680000 );
                SET_CHAR_HEADING( l_U2524, 103.43390000 );
                FREEZE_CHAR_POSITION( l_U2524, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_SWAP_WEAPON( 0, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U2524, 15000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2524 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LOOK_AT_CHAR( 0, l_U2626, 15000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2626 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U2387 );
            if (l_U2387 == 0)
            {
                sub_12038( "V1_PAY1", 0, 1, ref l_U2636, 7, 1 );
            }
            else
            {
                sub_12038( "V1_PAY2", 0, 1, ref l_U2636, 7, 1 );
            }
            WAIT( 1250 );
            if (NOT (IS_CHAR_INJURED( l_U2524 )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2626, "take_obj", "MISSVLAD1", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2524, "give_obj", "MISSVLAD1", 4.00000000, 0, 0, 0, 0, 0 );
            }
            SETTIMERA( 0 );
        }
        if (((TIMERA() > 0) AND (iVar2 == 1)) AND (NOT (sub_13260( l_U2636 ))))
        {
            iVar2 = 2;
            SET_CAM_PROPAGATE( l_U2562[0], 0 );
            SET_CAM_ACTIVE( l_U2562[1], 1 );
            SET_CAM_PROPAGATE( l_U2562[1], 1 );
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            if (l_U2387 == 0)
            {
                sub_12038( "V1_PAY1", 1, 1, ref l_U2636, 7, 1 );
            }
            else
            {
                sub_12038( "V1_PAY2", 1, 1, ref l_U2636, 7, 1 );
            }
            SETTIMERA( 0 );
        }
        if (((TIMERA() > 0) AND (iVar2 == 2)) AND (NOT (sub_13260( l_U2636 ))))
        {
            iVar2 = 3;
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2524, 1284.15300000, 398.98120000, 21.39930000, 2, 10000, 0.50000000 );
            }
            SETTIMERA( 0 );
        }
        if ((sub_14856()) AND (IS_SCREEN_FADED_IN()))
        {
            iVar2 = 4;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_20065( ref l_U2636, 0 );
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            WAIT( 500 );
            if (DOES_CHAR_EXIST( l_U2524 ))
            {
                DELETE_CHAR( ref l_U2524 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 1, 1, 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            END_CAM_COMMANDS( ref l_U2623 );
            WAIT( 500 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            if (DOES_VEHICLE_EXIST( l_U2529 ))
            {
                if (l_U2466 == 1)
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2529 );
                    l_U2466 = 0;
                }
            }
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U2470 = 1;
        }
        if (((TIMERA() > 2000) AND (iVar2 == 3)) AND (NOT (sub_13260( l_U2636 ))))
        {
            iVar2 = 4;
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            if (DOES_CHAR_EXIST( l_U2524 ))
            {
                DELETE_CHAR( ref l_U2524 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 1, 1, 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            if (DOES_VEHICLE_EXIST( l_U2529 ))
            {
                if (l_U2466 == 1)
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2529 );
                    l_U2466 = 0;
                }
            }
            END_CAM_COMMANDS( ref l_U2623 );
            SETTIMERA( 0 );
            l_U2470 = 1;
        }
        WAIT( 0 );
    }
    return;
}

void sub_23519()
{
    if (DOES_CHAR_EXIST( l_U2524 ))
    {
        if ((IS_CHAR_DEAD( l_U2524 )) || (IS_CHAR_INJURED( l_U2524 )))
        {
            PRINT_NOW( "V1_FAIL_01", 7500, 1 );
            sub_23621( 1, "V1_CPASS2", "V1AUD", 0 );
            l_U2384 = -1;
            l_U2430 = 1;
        }
    }
    return;
}

void sub_23621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_23665( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_23665(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_24240()
{
    if (l_U2491 == 0)
    {
        if (NOT (DOES_BLIP_EXIST( l_U2501 )))
        {
            ADD_BLIP_FOR_OBJECT( l_U2547, ref l_U2501 );
            CHANGE_BLIP_COLOUR( l_U2501, 2 );
        }
        PRINT_NOW( "V1_MELEE_01", 7500, 1 );
        l_U2491 = 1;
    }
    if ((l_U2398 == 0) AND (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( l_U2626, l_U2534, 10.00000000, 10.00000000, 10.00000000, 0 )))
    {
        if (TIMERA() > 7500)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_AREA( 1284.03400000, 398.70520000, 21.39790000, 15, 1 );
                PRINT_HELP( "V1_MELEE_02" );
                l_U2398 = 1;
                SETTIMERA( 0 );
            }
        }
    }
    GET_CURRENT_CHAR_WEAPON( l_U2626, ref l_U2427 );
    l_U2386 = l_U2427;
    if (((IS_PED_HOLDING_AN_OBJECT( l_U2626 )) AND (l_U2386 == 46)) AND (l_U2461 == 0))
    {
        if (DOES_BLIP_EXIST( l_U2501 ))
        {
            REMOVE_BLIP( l_U2501 );
        }
        if (l_U2462 == 0)
        {
            if (NOT (DOES_BLIP_EXIST( l_U2502 )))
            {
                ADD_BLIP_FOR_COORD( 1280.81000000, 399.73000000, 22.85000000, ref l_U2502 );
                CHANGE_BLIP_COLOUR( l_U2502, 1 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U2503 )))
            {
                ADD_BLIP_FOR_COORD( 1280.81000000 - 3.00000000, 399.73000000, 22.85000000, ref l_U2503 );
                CHANGE_BLIP_COLOUR( l_U2503, 1 );
            }
            CREATE_OBJECT( l_U2516, 1280.81000000, 399.40000000, 22.85000000, ref l_U2549, 1 );
            FREEZE_OBJECT_POSITION( l_U2549, 1 );
            SET_OBJECT_COLLISION( l_U2549, 0 );
            SET_OBJECT_VISIBLE( l_U2549, 0 );
            SET_OBJECT_AS_STEALABLE( l_U2549, 0 );
            MAKE_OBJECT_TARGETTABLE( l_U2549, 1 );
            CREATE_OBJECT( l_U2516, 1280.81000000 - 3.00000000, 399.40000000, 22.85000000, ref l_U2550, 1 );
            FREEZE_OBJECT_POSITION( l_U2550, 1 );
            SET_OBJECT_COLLISION( l_U2550, 0 );
            SET_OBJECT_VISIBLE( l_U2550, 0 );
            SET_OBJECT_AS_STEALABLE( l_U2550, 0 );
            MAKE_OBJECT_TARGETTABLE( l_U2550, 1 );
            PRINT_HELP( "V1_MELEE_06" );
            l_U2398 = 2;
            l_U2462 = 1;
            SETTIMERA( 0 );
        }
        l_U2461 = 1;
    }
    if (l_U2398 == 2)
    {
        if (TIMERA() > 7500)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "V1_MELEE_03", 7500, 1 );
                l_U2398 = 3;
                SETTIMERA( 0 );
            }
        }
    }
    if (l_U2398 == 3)
    {
        if ((TIMERA() > 7500) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.03400000, 398.70520000, 21.39790000, 22, 22, 5, 0 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (IS_AUTO_AIMING_ON())
                {
                    if (USING_STANDARD_CONTROLS())
                    {
                        PRINT_HELP( "V1_THROW_01" );
                    }
                    else
                    {
                        PRINT_HELP( "V1_THROW_19" );
                    }
                }
                else if (USING_STANDARD_CONTROLS())
                {
                    PRINT_HELP( "V1_THROW_11" );
                }
                else
                {
                    PRINT_HELP( "V1_THROW_20" );
                }
                l_U2398 = 4;
                SETTIMERA( 0 );
            }
        }
    }
    if (l_U2398 == 4)
    {
        if (TIMERA() > 7500)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (USING_STANDARD_CONTROLS())
                {
                    PRINT_HELP( "V1_THROW_02" );
                }
                else
                {
                    PRINT_HELP( "V1_THROW_21" );
                }
                l_U2398 = 5;
                SETTIMERA( 0 );
            }
        }
    }
    sub_15567();
    if ((l_U2459 == 0) AND (IS_NON_FRAG_OBJECT_SMASHED( 1280.80000000, 399.60000000, 22.80000000, 1.00000000, -518173288 )))
    {
        l_U2459 = 1;
    }
    if ((l_U2460 == 0) AND (IS_NON_FRAG_OBJECT_SMASHED( 1277.80000000, 399.60000000, 22.80000000, 1.00000000, 1282124525 )))
    {
        l_U2460 = 1;
    }
    if ((l_U2460 == 1) || (l_U2459 == 1))
    {
        if (sub_9512( 1, 1 ))
        {
            if (DOES_BLIP_EXIST( l_U2501 ))
            {
                REMOVE_BLIP( l_U2501 );
            }
            if (DOES_BLIP_EXIST( l_U2502 ))
            {
                REMOVE_BLIP( l_U2502 );
            }
            if (DOES_BLIP_EXIST( l_U2503 ))
            {
                REMOVE_BLIP( l_U2503 );
            }
            if (DOES_OBJECT_EXIST( l_U2549 ))
            {
                DELETE_OBJECT( ref l_U2549 );
            }
            if (DOES_OBJECT_EXIST( l_U2550 ))
            {
                DELETE_OBJECT( ref l_U2550 );
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT (IS_CHAR_INJURED( l_U2524 )))
            {
                sub_25677();
            }
            l_U2384++;
            l_U2384++;
            l_U2384++;
            SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
            l_U2384++;
        }
    }
    sub_29616();
    if ((((((l_U2460 == 0) AND (l_U2459 == 0)) AND (NOT (DOES_BLIP_EXIST( l_U2501 )))) AND (NOT (IS_PED_HOLDING_AN_OBJECT( l_U2626 )))) AND (l_U2386 != 46)) AND (NOT (HAS_CHAR_GOT_WEAPON( l_U2626, 46 ))))
    {
        if ((DOES_OBJECT_EXIST( l_U2534 )) AND (DOES_OBJECT_EXIST( l_U2535[0] )))
        {
            if ((LOCATE_OBJECT_3D( l_U2534, 1277.08000000, 345.44000000, 20.79000000, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_OBJECT_3D( l_U2535[0], 1277.08000000, 345.44000000, 20.79000000, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                ADD_BLIP_FOR_OBJECT( l_U2547, ref l_U2501 );
                CHANGE_BLIP_COLOUR( l_U2501, 2 );
                CHANGE_BLIP_DISPLAY( l_U2501, 1 );
            }
        }
        l_U2461 = 0;
    }
    if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U2626, ref l_U2529 );
    }
    sub_30323();
    sub_23519();
    return;
}

void sub_25677()
{
    int iVar2;

    iVar2 = 0;
    l_U2470 = 0;
    if (IS_CHAR_DEAD( l_U2524 ))
    {
        return;
    }
    while (l_U2470 == 0)
    {
        if (iVar2 == 0)
        {
            iVar2 = 1;
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 0, 1, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U2626, 0, 1 );
            sub_3861();
            SET_CREATE_RANDOM_COPS( 1 );
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U2623 );
            l_U2570[0] = {1275.44800000, 407.27380000, 23.18835000};
            l_U2592[0] = {-2.50637000, -7.34742500, -152.57970000};
            l_U2614[0] = 45;
            l_U2570[0] = {1290.24900000, 396.53420000, 22.67459000};
            l_U2592[0] = {0.60878400, 2.52087200, 74.24689000};
            l_U2614[0] = 30;
            l_U2570[1] = {1284.29200000, 397.60600000, 23.90202000};
            l_U2592[1] = {-27.25972000, -0.00000000, 2.01531000};
            l_U2614[1] = 45;
            l_U2570[1] = {1284.84500000, 395.20660000, 22.57323000};
            l_U2592[1] = {19.04215000, -4.11704000, 25.76821000};
            l_U2614[1] = 45;
            l_U2570[1] = {1286.57000000, 392.74970000, 21.71066000};
            l_U2592[1] = {8.21952500, -0.00000000, 29.70871000};
            l_U2614[1] = 48;
            l_U2570[2] = {1282.30700000, 393.62300000, 23.00394000};
            l_U2592[2] = {-4.95850900, 0.00000000, -20.71155000};
            l_U2614[2] = 40;
            l_U2570[2] = {1284.47400000, 395.96680000, 22.99918000};
            l_U2592[2] = {-4.85073300, -5.70919300, 55.55875000};
            l_U2614[2] = 33;
            l_U2614[3] = 40;
            l_U2614[4] = 40;
            l_U2614[5] = 40;
            l_U2570[6] = {1285.38000000, 398.22820000, 23.01410000};
            l_U2592[6] = {-3.03694800, 0.00000000, 31.40940000};
            l_U2614[6] = 25;
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                CREATE_CAM( 14, ref l_U2562[l_U2625] );
                SET_CAM_POS( l_U2562[l_U2625], l_U2570[l_U2625]._fU0, l_U2570[l_U2625]._fU4, l_U2570[l_U2625]._fU8 );
                SET_CAM_ROT( l_U2562[l_U2625], l_U2592[l_U2625]._fU0, l_U2592[l_U2625]._fU4, l_U2592[l_U2625]._fU8 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 1 );
                SET_CAM_FOV( l_U2562[l_U2625], l_U2614[l_U2625] );
            }
            SET_CAM_ACTIVE( l_U2562[0], 1 );
            SET_CAM_PROPAGATE( l_U2562[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
            {
                l_U2469 = 1;
            }
            sub_10868();
            CLEAR_AREA( 1282.04900000, 392.52020000, 21.27130000, 4.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1282.04900000, 392.52020000, 21.27130000, 50.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                SET_CHAR_HEALTH( l_U2524, 200 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
            }
            GET_CHAR_COORDINATES( l_U2626, ref l_U2409._fU0, ref l_U2409._fU4, ref l_U2409._fU8 );
            if (l_U2409._fU4 > 398.75000000)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U2626 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                    SET_CHAR_COORDINATES( l_U2626, l_U2409._fU0, 398.70000000, 21.38630000 );
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.32300000, 396.40000000, 21.39790000, 2.50000000, 2.50000000, 2.50000000, 0 ))
            {
                CLEAR_AREA( 1282.04900000, 392.52020000, 21.27130000, 4.00000000, 1 );
                CLEAR_AREA_OF_CARS( 1282.04900000, 392.52020000, 21.27130000, 50.00000000 );
                if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
                {
                    ;
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U2626, 1282.04900000, 392.52020000, 21.27130000 );
                    SET_CHAR_HEADING( l_U2626, 336.99100000 );
                }
            }
            sub_10868();
            CLEAR_AREA( 1284.32300000, 397.87690000, 21.39790000, 2.00000000, 1 );
            CLEAR_AREA_OF_CARS( 1284.32300000, 397.87690000, 21.39790000, 8.00000000 );
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.32300000, 397.87690000, 21.39790000, 2.50000000, 2.50000000, 2.50000000, 0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
                {
                    ;
                }
                else
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                    SET_CHAR_COORDINATES( l_U2626, 1280.91600000, 394.47890000, 21.37050000 );
                    SET_CHAR_HEADING( l_U2626, 340.00000000 );
                }
                TASK_SWAP_WEAPON( l_U2626, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U2626 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2504 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_LOOK_AT_CHAR( 0, l_U2524, 30000, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1282.70400000, 396.54630000, 21.38640000, 2, 20000, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, 1284.32300000, 396.40000000, 21.39790000 );
                    CLOSE_SEQUENCE_TASK( l_U2504 );
                    TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                    CLEAR_SEQUENCE_TASK( l_U2504 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U2504 );
                    TASK_LOOK_AT_CHAR( 0, l_U2524, 30000, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1282.70400000, 396.54630000, 21.38640000, 2, 20000, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, 1284.32300000, 396.40000000, 21.39790000 );
                    CLOSE_SEQUENCE_TASK( l_U2504 );
                    TASK_PERFORM_SEQUENCE( l_U2626, l_U2504 );
                    CLEAR_SEQUENCE_TASK( l_U2504 );
                }
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 0, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                SET_CHAR_NEVER_TARGETTED( l_U2524, 0 );
                OPEN_SEQUENCE_TASK( ref l_U2504 );
                TASK_LOOK_AT_CHAR( 0, l_U2626, 30000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1284.32300000, 396.40000000, 21.39790000, 3, 15000, 1.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2626 );
                CLOSE_SEQUENCE_TASK( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
                CLEAR_SEQUENCE_TASK( l_U2504 );
            }
            SETTIMERA( 0 );
        }
        if (l_U2468 == 0)
        {
            if (TIMERA() >= 2100)
            {
                GET_FRAME_TIME( ref l_U2505 );
                l_U2506 += l_U2505 + 0.10000000;
                GET_FRAME_TIME( ref l_U2507 );
                l_U2508 -= l_U2507 + 0.10000000;
                PRINTSTRING( "\n ---> OPEN <---\n" );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, l_U2508 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, l_U2506 );
                if (l_U2506 >= 1.00000000)
                {
                    l_U2468 = 1;
                }
                if (l_U2496 == 0)
                {
                    sub_12038( "V1_SMASH", 7, 1, ref l_U2636, 7, 0 );
                    l_U2496 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U2524 )))
        {
            if ((((TIMERA() > 2000) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U2524, 1284.32300000, 396.40000000, 21.39790000, 1.30000000 + 0.70000000, 1.30000000 + 0.70000000, 1.30000000 + 0.70000000, 0 ))) AND (iVar2 == 1)) || ((TIMERA() > 2500) AND (iVar2 == 1)))
            {
                iVar2 = 2;
                if (l_U2469 == 1)
                {
                    SET_CAM_PROPAGATE( l_U2562[0], 0 );
                    SET_CAM_ACTIVE( l_U2562[1], 1 );
                    SET_CAM_PROPAGATE( l_U2562[1], 1 );
                    WAIT( 3000 );
                }
                SETTIMERA( 0 );
                if (l_U2469 == 1)
                {
                    SETTIMERA( 64536 );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U2524 )))
        {
            if ((((TIMERA() > 500) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U2524, 1284.32300000, 396.40000000, 21.39790000, 1.30000000, 1.30000000, 1.30000000, 0 ))) AND (iVar2 == 2)) || ((TIMERA() > 1500) AND (iVar2 == 2)))
            {
                iVar2 = 3;
                if (l_U2469 == 1)
                {
                    SET_CAM_PROPAGATE( l_U2562[1], 0 );
                }
                else
                {
                    SET_CAM_PROPAGATE( l_U2562[0], 0 );
                }
                SET_CAM_ACTIVE( l_U2562[2], 1 );
                SET_CAM_PROPAGATE( l_U2562[2], 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                SET_CHAR_COORDINATES( l_U2626, 1282.70400000, 396.54630000, 21.38640000 );
                SET_CHAR_HEADING( l_U2626, 277.98710000 );
                FREEZE_CHAR_POSITION( l_U2626, 1 );
                if (NOT (IS_CHAR_DEAD( l_U2524 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
                    SET_CHAR_COORDINATES( l_U2524, 1283.86500000, 396.75490000, 21.39680000 );
                    SET_CHAR_HEADING( l_U2524, 103.43390000 );
                    FREEZE_CHAR_POSITION( l_U2524, 1 );
                }
                sub_28533( l_U2524, l_U2626 );
                sub_28533( l_U2626, 0 );
                if (l_U2496 == 0)
                {
                    sub_12038( "V1_SMASH", 7, 1, ref l_U2636, 7, 0 );
                    l_U2496 = 1;
                }
                SETTIMERA( 0 );
            }
        }
        if (iVar2 == 3)
        {
            ;
        }
        if ((sub_14856()) AND (IS_SCREEN_FADED_IN()))
        {
            iVar2 = 4;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            sub_20065( ref l_U2636, 0 );
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            WAIT( 500 );
            if (DOES_CHAR_EXIST( l_U2524 ))
            {
                DELETE_CHAR( ref l_U2524 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( l_U2627, 1, 1, 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            END_CAM_COMMANDS( ref l_U2623 );
            WAIT( 500 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U2470 = 1;
        }
        if (((TIMERA() > 500) AND (iVar2 == 3)) AND (NOT (sub_13260( l_U2636 ))))
        {
            if ((TIMERA() > 500) AND (iVar2 == 3))
            {
                ;
            }
            else
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            FREEZE_CHAR_POSITION( l_U2626, 0 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                FREEZE_CHAR_POSITION( l_U2524, 0 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U2524 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2524 );
                SET_CHAR_COORDINATES( l_U2524, 1284.24400000, 396.73850000, 21.40030000 );
                SET_CHAR_HEADING( l_U2524, 157.17930000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U2524, l_U2626 );
            }
            SETTIMERA( 0 );
            iVar2 = 4;
            l_U2470 = 1;
            sub_20967();
        }
        WAIT( 0 );
    }
    return;
}

void sub_28533(unknown uParam0, int iParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (iParam1 == nil)
    {
        vVar7 = {1284.24400000, 396.73850000, 21.40030000};
    }
    else if (NOT (IS_CHAR_INJURED( iParam1 )))
    {
        GET_CHAR_COORDINATES( iParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_29616()
{
    GET_GAME_VIEWPORT_ID( ref l_U2622 );
    GET_CHAR_COORDINATES( l_U2626, ref l_U2400._fU0, ref l_U2400._fU4, ref l_U2400._fU8 );
    if (DOES_OBJECT_EXIST( l_U2534 ))
    {
        if ((((NOT (LOCATE_OBJECT_3D( l_U2534, 1277.08000000, 345.44000000, 20.79000000, 5.00000000, 5.00000000, 2.00000000, 0 ))) AND (NOT (LOCATE_OBJECT_3D( l_U2534, l_U2400._fU0, l_U2400._fU4, l_U2400._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))) AND (NOT (IS_OBJECT_ON_SCREEN( l_U2534 )))) AND (NOT (CAM_IS_SPHERE_VISIBLE( l_U2622, 1277.08000000, 345.44000000, 20.79000000, 1.00000000 ))))
        {
            if (DOES_OBJECT_EXIST( l_U2535[0] ))
            {
                if (NOT (LOCATE_OBJECT_3D( l_U2535[0], 1275.99000000, 344.01000000, 20.73000000, 5.00000000, 5.00000000, 2.00000000, 0 )))
                {
                    SET_OBJECT_COORDINATES( l_U2534, 1277.08000000, 345.44000000, 20.79000000 );
                }
            }
        }
    }
    else if (NOT (CAM_IS_SPHERE_VISIBLE( l_U2622, 1277.08000000, 345.44000000, 20.79000000, 1.00000000 )))
    {
        CREATE_OBJECT( l_U2516, 1277.08000000, 345.44000000, 20.79000000, ref l_U2534, 1 );
        SET_OBJECT_AS_STEALABLE( l_U2534, 1 );
        SET_OBJECT_DYNAMIC( l_U2534, 1 );
    }
    return;
}

void sub_30323()
{
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.32300000, 397.87690000, 21.39790000, 75.00000000, 75.00000000, 75.00000000, 0 )) AND (l_U2467 == 1))
    {
        SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
        l_U2467 = 0;
    }
    else if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2626, 1284.32300000, 397.87690000, 21.39790000, 75.00000000, 75.00000000, 75.00000000, 0 ))) AND (l_U2467 == 0))
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        l_U2467 = 1;
    }
    return;
}

void sub_30512()
{
    if (l_U2457 == 0)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U2525 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2525, 0 );
            SET_CHAR_RELATIONSHIP( l_U2525, 5, 0 );
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1283.00000000, 396.90000000, 21.39790000, 3, 15000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2626 );
            TASK_SWAP_WEAPON( 0, 1 );
            TASK_COMBAT( 0, l_U2626 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            TASK_PERFORM_SEQUENCE( l_U2525, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
        }
        if (NOT (IS_CHAR_DEAD( l_U2524 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1284.32300000, 396.40000000, 21.39790000, 3, 15000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, 1278.98000000, 403.13000000, 22.21000000 );
            TASK_PLAY_ANIM( 0, "angry01", "MISSVLAD1", 1.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
        }
        WAIT( 4000 );
        PRINT_NOW( "V1_MISC_01", 5000, 1 );
        WAIT( 5000 );
        l_U2457 = 1;
    }
    sub_30323();
    sub_23519();
    l_U2384++;
    return;
}

void sub_31003()
{
    if (l_U2492 == 0)
    {
        PRINT_NOW( "V1_COMMAND_06", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U2499 )))
        {
            ADD_BLIP_FOR_CHAR( l_U2525, ref l_U2499 );
            SET_BLIP_AS_FRIENDLY( l_U2499, 0 );
        }
        SETTIMERA( 0 );
        l_U2492 = 1;
    }
    if (l_U2397 == 0)
    {
        if (TIMERA() > 7500)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "V1_MELEE_04" );
                l_U2397 = 1;
                SETTIMERA( 0 );
            }
        }
    }
    if (l_U2397 == 1)
    {
        if (TIMERA() > 500)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "V1_MELEE_05" );
                l_U2397 = 2;
                SETTIMERA( 0 );
            }
        }
    }
    if (IS_CHAR_INJURED( l_U2525 ))
    {
        if (DOES_BLIP_EXIST( l_U2499 ))
        {
            REMOVE_BLIP( l_U2499 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2524 )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U2524, l_U2626 );
        }
        PRINT_NOW( "V1_MISC_02", 5000, 1 );
        WAIT( 5000 );
        l_U2384++;
    }
    sub_30323();
    sub_23519();
    return;
}

void sub_31414()
{
    if (l_U2493 == 0)
    {
        PRINT_NOW( "V1_COMMAND_04", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U2500 )))
        {
            ADD_BLIP_FOR_CHAR( l_U2524, ref l_U2500 );
            SET_BLIP_AS_FRIENDLY( l_U2500, 1 );
        }
        SWITCH_PED_PATHS_ON( 1263.53000000, 392.66000000, 20.00000000, 1288.44000000, 401.96000000, 23.00000000 );
        l_U2493 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U2524 )))
    {
        if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2626, l_U2524, 1.10000000 + 1.90000000, 1.10000000 + 1.90000000, 1.10000000 + 0.90000000, 0 )) AND (NOT (IS_PED_RAGDOLL( l_U2524 )))) AND (sub_9512( 1, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U2500 ))
            {
                REMOVE_BLIP( l_U2500 );
            }
            sub_20967();
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            l_U2384++;
        }
    }
    sub_30323();
    sub_23519();
    return;
}

void sub_31729()
{
    if (l_U2494 == 0)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2525 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2527 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2528 );
        if (NOT (DOES_BLIP_EXIST( l_U2498 )))
        {
            ADD_BLIP_FOR_COORD( 921.33000000, -487.07450000, 14.25800000, ref l_U2498 );
            SET_ROUTE( l_U2498, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U2524 )))
        {
            CLEAR_CHAR_TASKS( l_U2524 );
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1280.29300000, 396.48280000 + 1.00000000, 21.36500000, 2, 10000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, 1279.50000000 + 2.00000000, 405.00000000, 22.50000000 );
            TASK_STAND_STILL( 0, 500 );
            TASK_PLAY_ANIM( 0, "angry01", "MISSVLAD1", 1.00000000, 1, 0, 0, 0, 15000 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            TASK_PERFORM_SEQUENCE( l_U2524, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
        }
        if (DOES_VEHICLE_EXIST( l_U2529 ))
        {
            if (l_U2466 == 1)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2529 );
                l_U2466 = 0;
            }
        }
        PRINT_NOW( "V1_COMMAND_07", 7500, 1 );
        l_U2494 = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U2524 ))) AND (l_U2463 == 0))
    {
        if ((IS_CHAR_PLAYING_ANIM( l_U2524, "MISSVLAD1", "angry01" )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2524, 1280.50000000, 401.85660000, 21.47680000, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, 1283, 400, 23, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
            l_U2463 = 1;
        }
    }
    if (l_U2455 == 0)
    {
        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_5101(), 921.33000000, -487.07450000, 14.25800000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_5101(), 948.52280000, -492.17620000, 14.48510000 + (1.60000000 / 3), 1.60000000, 1.60000000, 1.60000000, 0 ))) AND (sub_9512( 1, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U2498 ))
            {
                REMOVE_BLIP( l_U2498 );
            }
            l_U2384++;
            l_U2455 = 1;
        }
    }
    sub_23519();
    return;
}

void sub_32501()
{
    int iVar2;

    if (l_U2558 == 1)
    {
        SET_PLAYER_CONTROL( sub_5309(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2529 );
        if (((DOES_VEHICLE_EXIST( l_U2529 )) AND (NOT (IS_CAR_DEAD( l_U2529 )))) AND (l_U2529 != nil))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( l_U2529 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U2529 );
                l_U2466 = 1;
            }
            if ((LOCATE_CAR_3D( l_U2529, 926.10860000, -489.92090000, 14.33390000, 2.50000000, 2.50000000, 2.50000000, 0 )) || (LOCATE_CAR_3D( l_U2529, 921.33000000, -487.07450000, 14.25800000, 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                if ((l_U2530 != l_U2529) AND (l_U2530 != nil))
                {
                    if (DOES_VEHICLE_EXIST( l_U2530 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2530 );
                    }
                }
                CLEAR_AREA( 920.88030000, -483.78550000, 14.34250000, 3.00000000, 1 );
                SET_CAR_HEADING( l_U2529, 180.38220000 );
                SET_CAR_COORDINATES( l_U2529, 920.88030000, -483.78550000, 14.34250000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( l_U2428 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2529 );
                }
            }
            l_U2530 = l_U2529;
        }
        sub_32921( 1 );
        sub_33695();
        ADD_SCENARIO_BLOCKING_AREA( 931.76000000, -493.01000000, 14.48000000, 933.83000000, -491.57000000, 15.54000000 );
        SWITCH_PED_PATHS_OFF( 931.76000000, -493.01000000, 14.48000000, 933.83000000, -491.57000000, 15.54000000 );
        SWITCH_PED_PATHS_OFF( 925.00000000, -495.00000000, 13.00000000, 937.00000000, -489.00000000, 16.00000000 );
        CLEAR_AREA( 932.54150000, -492.97590000, 14.48470000, 3.00000000, 1 );
        CLEAR_AREA_OF_CARS( 932.54150000, -492.97590000, 14.48470000, 5.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5101() );
        WAIT( 0 );
        if (IS_CHAR_IN_ANY_CAR( sub_5101() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5101(), 923.33000000, -489.07450000, 14.25800000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_5101(), 932.54150000 - 0.50000000, -492.97590000 + 0.50000000, 14.48470000 );
        }
        TASK_SWAP_WEAPON( sub_5101(), 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_5101(), "vladsbaroom" );
        WAIT( 0 );
        CREATE_CAM( 3, ref l_U2561 );
        l_U2570[0] = {931.93320000 - 0.50000000, -493.45140000 + 0.50000000, 17.95248000};
        l_U2592[0] = {-21.91922000, 0.00000000, -55.90333000};
        l_U2614[0] = 35.00000000;
        l_U2570[1] = {932.02760000 - 0.50000000, -494.01160000 + 0.50000000, 16.23186000};
        l_U2592[1] = {-7.35517800, -0.00000000, -51.62899000};
        l_U2614[1] = 35.00000000;
        l_U2570[2] = {935.12200000 - 0.50000000, -494.06860000 + 0.50000000, 16.04162000};
        l_U2592[2] = {-4.47305500, -0.00000000, 48.40945000};
        l_U2614[2] = 35.00000000;
        l_U2570[3] = {933.18980000 - 0.50000000, -493.61530000 + 0.50000000, 16.04991000};
        l_U2592[3] = {-2.63959200, 0.00000000, 35.34600000};
        l_U2614[3] = 45.00000000;
        l_U2570[4] = {933.40120000 - 0.50000000, -493.59710000 + 0.50000000, 15.99522000};
        l_U2592[4] = {-1.72286000, 0.00000000, -50.13929000};
        l_U2614[4] = 30.00000000;
        l_U2570[5] = {931.98110000 - 0.50000000, -493.61210000 + 0.50000000, 16.11428000};
        l_U2592[5] = {-3.44172900, 0.00000000, -58.96286000};
        l_U2614[5] = 30.00000000;
        l_U2570[5] = {931.46900000, -492.80880000, 16.07069000};
        l_U2592[5] = {2.63159600, -0.00000000, -72.02629000};
        l_U2614[5] = 35.00000000;
        l_U2570[6] = {932.90770000, -493.19420000, 15.93088000};
        l_U2592[6] = {2.51703000, 0.00000000, 43.82577000};
        l_U2614[6] = 35.00000000;
        BEGIN_CAM_COMMANDS( ref l_U2624 );
        for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
        {
            CREATE_CAM( 14, ref l_U2562[l_U2625] );
            SET_CAM_POS( l_U2562[l_U2625], l_U2570[l_U2625]._fU0, l_U2570[l_U2625]._fU4, l_U2570[l_U2625]._fU8 );
            SET_CAM_ROT( l_U2562[l_U2625], l_U2592[l_U2625]._fU0, l_U2592[l_U2625]._fU4, l_U2592[l_U2625]._fU8 );
            SET_CAM_FOV( l_U2562[l_U2625], l_U2614[l_U2625] );
            SET_CAM_ACTIVE( l_U2562[l_U2625], 1 );
        }
        SET_CAM_PROPAGATE( l_U2562[0], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U2625 = 0;
        GET_GAME_VIEWPORT_ID( ref l_U2622 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2622, "vladsbaroom" );
        REQUEST_INTERIOR_MODELS( 1950944176, "vladsbaroom" );
        while (NOT (HAS_MODEL_LOADED( 1950944176 )))
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_5309(), 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        iVar2 = 1;
        WAIT( 1000 );
        CLEAR_AREA( 932.54150000, -492.97590000, 14.48470000, 3.00000000, 1 );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2526 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5101() );
            TASK_STAND_STILL( 0, 30000 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            CLEAR_CHAR_TASKS( l_U2526 );
            TASK_PERFORM_SEQUENCE( l_U2526, l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
            OPEN_SEQUENCE_TASK( ref l_U2504 );
            TASK_LOOK_AT_CHAR( 0, l_U2526, 30000, 0 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U2526 );
            TASK_STAND_STILL( 0, 30000 );
            CLOSE_SEQUENCE_TASK( l_U2504 );
            CLEAR_CHAR_TASKS( sub_5101() );
            TASK_PERFORM_SEQUENCE( sub_5101(), l_U2504 );
            CLEAR_SEQUENCE_TASK( l_U2504 );
        }
        SETTIMERB( 0 );
        l_U2558++;
    }
    if (l_U2558 == 2)
    {
        if ((l_U2625 == 0) AND (TIMERB() > 0))
        {
            l_U2625 = 1;
            SET_CAM_PROPAGATE( l_U2562[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2561, l_U2562[0], l_U2562[1], 6000, 0 );
            SET_CAM_ACTIVE( l_U2561, 1 );
            SET_CAM_PROPAGATE( l_U2561, 1 );
            WAIT( 2500 );
            sub_37281( "V1_VLA1", ref l_U2636, 6, 1 );
            SETTIMERB( 0 );
        }
        if ((l_U2625 == 1) AND (TIMERB() > 3500))
        {
            l_U2625 = 2;
            SET_CAM_PROPAGATE( l_U2562[1], 0 );
            SET_CAM_ACTIVE( l_U2562[3], 1 );
            SET_CAM_PROPAGATE( l_U2562[3], 1 );
        }
        if ((l_U2625 == 2) AND (TIMERB() > 8000))
        {
            l_U2625 = 3;
            SET_USE_HIGHDOF( 1 );
            SET_CAM_NEAR_DOF( l_U2562[5], 1.50000000 );
            SET_CAM_FAR_DOF( l_U2562[5], 3.50000000 );
            SET_CAM_PROPAGATE( l_U2562[3], 0 );
            SET_CAM_ACTIVE( l_U2562[5], 1 );
            SET_CAM_PROPAGATE( l_U2562[5], 1 );
            SET_USE_HIGHDOF( 0 );
        }
        if ((l_U2625 == 3) AND (TIMERB() > 14750))
        {
            l_U2625 = 4;
            SET_CAM_PROPAGATE( l_U2562[5], 0 );
            SET_CAM_ACTIVE( l_U2562[4], 1 );
            SET_CAM_PROPAGATE( l_U2562[4], 1 );
        }
        if ((l_U2625 == 4) AND (TIMERB() > 20000))
        {
            l_U2625 = 5;
            SET_CAM_PROPAGATE( l_U2562[4], 0 );
            SET_CAM_ACTIVE( l_U2562[6], 1 );
            SET_CAM_PROPAGATE( l_U2562[6], 1 );
            SWITCH_PED_PATHS_ON( 925.00000000, -495.00000000, 13.00000000, 937.00000000, -489.00000000, 16.00000000 );
        }
        if (((NOT (sub_13260( l_U2636 ))) || (TIMERB() > 22000)) AND (l_U2625 == 5))
        {
            l_U2625 = 6;
            SET_USE_HIGHDOF( 1 );
            SET_CAM_NEAR_DOF( l_U2562[2], 1.50000000 );
            SET_CAM_FAR_DOF( l_U2562[2], 3.50000000 );
            SET_CAM_PROPAGATE( l_U2562[6], 0 );
            SET_CAM_ACTIVE( l_U2562[2], 1 );
            SET_CAM_PROPAGATE( l_U2562[2], 1 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 0, 0.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_5101(), 922.36080000, -489.89740000, 15.34580000, 2, 5000, 1.00000000 );
            WAIT( 3500 );
            if (NOT (IS_CHAR_DEAD( l_U2526 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2526, 939.48240000, -492.64960000, 14.48480000, 2, 5000, 1.00000000 );
            }
        }
        if (((NOT (sub_13260( l_U2636 ))) || (TIMERB() > 28000)) AND (l_U2625 == 6))
        {
            l_U2625 = 7;
            if (NOT (sub_13260( l_U2636 )))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            sub_20065( ref l_U2636, 0 );
            WAIT( 1500 );
            if (NOT (IS_CHAR_DEAD( sub_5101() )))
            {
                CLEAR_PRINTS();
                if (DOES_CHAR_EXIST( l_U2524 ))
                {
                    DELETE_CHAR( ref l_U2524 );
                }
                if (DOES_CHAR_EXIST( l_U2526 ))
                {
                    DELETE_CHAR( ref l_U2526 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2626 );
                TASK_SWAP_WEAPON( sub_5101(), 0 );
                SET_CHAR_COORDINATES( sub_5101(), 924.20760000, -483.64960000, 14.46420000 );
                SET_CHAR_HEADING( sub_5101(), 92.64350000 );
                CLEAR_ROOM_FOR_CHAR( sub_5101() );
                for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
                {
                    SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                    SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                    DESTROY_CAM( l_U2562[l_U2625] );
                }
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 500 );
                SET_WIDESCREEN_BORDERS( 0 );
                END_CAM_COMMANDS( ref l_U2624 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_PLAYER_CONTROL( sub_5309(), 1 );
                DISPLAY_RADAR( 1 );
                SET_WIDESCREEN_BORDERS( 0 );
                sub_6823();
                l_U2431 = 1;
            }
        }
        if ((sub_14856()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U2625 = 7;
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_20065( ref l_U2636, 0 );
            if (DOES_CHAR_EXIST( l_U2524 ))
            {
                DELETE_CHAR( ref l_U2524 );
            }
            if (DOES_CHAR_EXIST( l_U2526 ))
            {
                DELETE_CHAR( ref l_U2526 );
            }
            SET_CHAR_COORDINATES( sub_5101(), 924.20760000, -483.64960000, 14.46420000 );
            SET_CHAR_HEADING( sub_5101(), 92.64350000 );
            CLEAR_ROOM_FOR_CHAR( sub_5101() );
            for ( l_U2625 = 0; l_U2625 < l_U2570; l_U2625++ )
            {
                SET_CAM_PROPAGATE( l_U2562[l_U2625], 0 );
                SET_CAM_ACTIVE( l_U2562[l_U2625], 0 );
                DESTROY_CAM( l_U2562[l_U2625] );
            }
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 500 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U2624 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 1000 );
            sub_20065( ref l_U2636, 0 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_20065( ref l_U2636, 0 );
            SET_PLAYER_CONTROL( sub_5309(), 1 );
            DISPLAY_RADAR( 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            sub_6823();
            l_U2431 = 1;
        }
    }
    return;
}

void sub_32921(unknown uParam0)
{
    while (NOT (sub_32932( uParam0 )))
    {
        sub_33643( uParam0 );
        WAIT( 0 );
    }
    return;
}

void sub_32932(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_32943( uParam0 ) );
}

int sub_32943(unknown uParam0)
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
    sub_2326( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_33643(unknown uParam0)
{
    REQUEST_MODEL( sub_32943( uParam0 ) );
    return;
}

void sub_33695()
{
    CLEAR_AREA( 934.54160000 - 0.50000000, -492.95400000 + 0.50000000, 14.48480000, 2.00000000, 1 );
    sub_33783( 1, ref l_U2526, 934.54160000 - 0.50000000, -492.95400000 + 0.50000000, 14.48480000, 87.39770000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U2526, "vladsbaroom" );
    SET_CHAR_DECISION_MAKER( l_U2526, l_U2423 );
    sub_5150( 1, l_U2526, "VLAD", 0 );
    return;
}

void sub_33783(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_32943( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_33833( uParam0, (uParam1^) );
    return;
}

void sub_33833(unknown uParam0, unknown uParam1)
{
    sub_33845( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_33845(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_33939( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_34483( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_33939(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_34483(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_33939( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_33939( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_33939( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_33939( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_33939( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_33939( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_33939( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_33939( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_37281(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_37304( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_37304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12123( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_39025()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    l_U2429 = 0;
    sub_39051( 4 );
    UNLOCK_MISSION_NEWS_STORY( 4 );
    sub_42249();
    return;
}

void sub_39051(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_39138( iParam0 ))
    {
        sub_40188( iParam0 );
    }
    return;
}

int sub_39138(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_39195( ref uVar3, 1, 0, 0 );
    sub_39807( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_12222( "\n ----------------------------------------------------------------" );
    sub_5234( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_12222( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_39195(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_39248( iParam0, uParam1, uParam2 );
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
        sub_39380( iParam0 + 0 );
    }
    return;
}

void sub_39248(int iParam0, int iParam1, int iParam2)
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
        sub_39380( iParam0 + 0 );
    }
    return;
}

void sub_39380(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_39411( iParam0->_fU4 )))
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

int sub_39411(unknown uParam0)
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

void sub_39807(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_40188(unknown uParam0)
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
        sub_40399( 20, 6, 16383, 16383, ref uVar4 );
        sub_41075( ref uVar4, 7 );
        sub_41106( ref uVar4, 0 );
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
        sub_40399( 20, 7, 9, 16383, ref uVar4 );
        sub_41075( ref uVar4, 7 );
        sub_41106( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_40399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_40423( uParam0, 0, iParam4 + 0 );
    sub_40423( uParam1, 1, iParam4 + 0 );
    sub_40423( uParam2, 2, iParam4 + 0 );
    sub_40423( uParam3, 3, iParam4 + 0 );
    sub_40423( 0, 4, iParam4 + 0 );
    sub_40423( 1, 5, iParam4 + 0 );
    sub_40423( 65535, 6, iParam4 + 0 );
    sub_40423( 0, 12, iParam4 + 0 );
    sub_40423( 0, 11, iParam4 + 0 );
    sub_40423( 0, 14, iParam4 + 0 );
    sub_40423( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_40423( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_40423( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_40423(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_41075(int iParam0, unknown uParam1)
{
    sub_40423( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_41106(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_41146())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_41833( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_41632( iVar5 );
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

int sub_41146()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_41180( 5, g_U968[I] )) == 7)
        {
            sub_41632( I );
            return 1;
        }
    }
    return 0;
}

int sub_41180(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_41632(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_41705( 39 );
    return;
}

void sub_41705(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_41833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_41894( uParam0, g_U968[Result] ))
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

int sub_41894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_42249()
{
    sub_42258();
    return;
}

void sub_42258()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_42276();
    sub_42335( iVar2, iVar3, iVar4 );
    return;
}

void sub_42276()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_42335(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_42367( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_42367(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_42463( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_42463( ref cVar9 );
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
            sub_42463( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_42463( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_42463( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_42463( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_43040( iParam0, iVar7 );;;
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
                sub_43437( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_43437( 0, 4 );
            }
        }
    }
    if (NOT (sub_43526( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5309(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5309() );
    }
    sub_2470();
    bVar27 = true;
    uVar28 = sub_43040( iParam0, iVar7 );
    uVar29 = sub_1927( iParam0 );
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
                sub_52902( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_53332();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_53417( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_53474( iParam0 );
                sub_53513( 0 );
                sub_2368( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_53621();
        }
    }
    if (bParam2)
    {
        sub_53332();
        sub_53709();
        sub_53513( 0 );
    }
    if (bParam3)
    {
        sub_53332();
        sub_53749();
        sub_53513( 0 );
        sub_2368( uVar29, 0 );
    }
    sub_1814();
    return;
}

void sub_42463(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_43040(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2326( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_43437(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_43526(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_43734( uParam1 );
        break;
        case 1:
        bVar8 = sub_45812( uParam1 );
        break;
        case 2:
        bVar8 = sub_46038( uParam1 );
        break;
        case 3:
        bVar8 = sub_46188( uParam1 );
        break;
        case 4:
        bVar8 = sub_46466( uParam1 );
        break;
        case 5:
        bVar8 = sub_46769( uParam1 );
        break;
        case 6:
        bVar8 = sub_46968( uParam1 );
        break;
        case 7:
        bVar8 = sub_47194( uParam1 );
        break;
        case 8:
        bVar8 = sub_47429( uParam1 );
        break;
        case 9:
        bVar8 = sub_47804( uParam1 );
        break;
        case 10:
        bVar8 = sub_48051( uParam1 );
        break;
        case 11:
        bVar8 = sub_48190( uParam1 );
        break;
        case 12:
        bVar8 = sub_48489( uParam1 );
        break;
        case 13:
        bVar8 = sub_48717( uParam1 );
        break;
        case 14:
        bVar8 = sub_49004( uParam1 );
        break;
        case 15:
        bVar8 = sub_49286( uParam1 );
        break;
        case 16:
        bVar8 = sub_49568( uParam1 );
        break;
        case 17:
        bVar8 = sub_49769( uParam1 );
        break;
        case 18:
        bVar8 = sub_49842( uParam1 );
        break;
        case 19:
        bVar8 = sub_50056( uParam1 );
        break;
        case 20:
        bVar8 = sub_50309( uParam1 );
        break;
        case 21:
        bVar8 = sub_50556( uParam1 );
        break;
        case 22:
        bVar8 = sub_50757( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_45417( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_43040( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_51080( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_43734(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_44013( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_44013( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_44013( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_44013( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_44013( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_44013( iVar3, 0, 3, 1, 0, 0 );
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
        sub_44013( iVar3, 0, sub_45295(), sub_45561(), 0, 0 );
        break;
        default:
        sub_45720( "Friend 1", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Friend 1", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_44013(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_44024( uParam1 );
    sub_44198( uParam0, 0, uParam2 );
    sub_44198( uParam0, 1, uParam3 );
    sub_44198( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_42276();
    return;
}

void sub_44024(unknown uParam0)
{
    ADD_SCORE( sub_5309(), uParam0 );
    sub_44049( uParam0 );
    return;
}

void sub_44049(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2326( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_44198(unknown uParam0, int iParam1, int iParam2)
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
        sub_44355( uParam0 );
    }
    return;
}

void sub_44355(unknown uParam0)
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

int sub_45295()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_45417( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_45417(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_45561()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_45417( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_45720(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_45812(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 2", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 2", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46038(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_45720( "Girl 3", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Girl 3", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46188(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_44013( iVar3, 0, sub_45295(), sub_45561(), 0, 0 );
        break;
        default:
        sub_45720( "Friend 4", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Friend 4", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 5", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 5", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46769(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 7", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 7", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46968(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 7b", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 7b", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47194(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_44013( iVar3, 0, sub_45295(), sub_45561(), 0, 0 );
        break;
        default:
        sub_45720( "Friend 8", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Friend 8", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47429(unknown uParam0)
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
        sub_44013( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_44013( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_44013( iVar3, 0, sub_45295(), sub_45561(), 0, 0 );
        break;
        default:
        sub_45720( "Friend 9", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Friend 9", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47804(unknown uParam0)
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
        sub_44013( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_44013( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_44013( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_45720( "Contact 10", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_45720( "Contact 10", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48051(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_45720( "Girl 11", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Girl 11", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48190(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_45720( "Contact 12", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 12", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48489(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 13", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 13", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48717(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_44013( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_44013( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_44013( iVar3, 0, sub_45295(), sub_45561(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_45720( "Friend 15", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Friend 15", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49004(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 16", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 16", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49286(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44013( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_45720( "Contact 18", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 18", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49568(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 19", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 19", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49769(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_45720( "Girl 20", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49842(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_45720( "Contact 21", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 21", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50056(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44013( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_45720( "Contact 22", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 22", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50309(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_44013( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44013( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44013( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_45720( "Contact 24", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 24", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50556(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44013( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44013( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44013( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_45720( "Contact 25", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_45720( "Contact 25", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50757(unknown uParam0)
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
        sub_44013( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_45720( "Girl 26", 1 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_45720( "Girl 26", 0 );
        sub_44013( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_51080(int iParam0, int iParam1)
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
    if (sub_51128( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_51859( iParam1 );
    }
    return;
}

int sub_51128(int iParam0, int iParam1)
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
            sub_51268( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_51268(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_51450( 0 );
    return;
}

void sub_51450(boolean bParam0)
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
        sub_51705();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_51705()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_51859(int iParam0)
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
        sub_52192( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_52192( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_52192( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_52192( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_52192( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_52192( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_52192( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_52192( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_52192( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_52192( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_52192( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_52192( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_52192( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_52192( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_52192( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_52192( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_52192( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_52192( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_52192( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_52192(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_52902(unknown uParam0, unknown uParam1)
{
    sub_52921( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_52921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_53332()
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

int sub_53417(int iParam0, int iParam1)
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

void sub_53474(unknown uParam0)
{
    sub_1713();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_53513(unknown uParam0)
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

void sub_53621()
{
    sub_53630();
    return;
}

void sub_53630()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_53709()
{
    sub_53630();
    return;
}

void sub_53749()
{
    sub_53630();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_53869()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5309(), 150 );
        SAY_AMBIENT_SPEECH( l_U2626, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U2429 = 0;
    sub_53946();
    return;
}

void sub_53946()
{
    sub_53955();
    return;
}

void sub_53955()
{
    int iVar2;

    iVar2 = 1;
    sub_53969( iVar2 );
    sub_2461( iVar2 );
    return;
}

void sub_53969(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5309(), 150 );
    CLEAR_HELP();
    sub_1285( uParam0 );
    return;
}