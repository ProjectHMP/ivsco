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
    l_U485 = {0.00000000, 0.00000000, 0.00000000};
    l_U488 = 2.50000000;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U998 = 824245375;
    l_U999 = 1540383669;
    l_U1000 = -1984134881;
    l_U1001 = 690281432;
    l_U1002 = 757349871;
    l_U1003 = 768442188;
    l_U1004 = -1784833142;
    l_U1512 = 0;
    l_U1513 = 0;
    l_U1639 = 0;
    l_U1640 = 0;
    l_U1641 = 0;
    l_U1642 = 0.00000000;
    l_U1643 = 0.00000000;
    l_U1666 = 0;
    l_U1712 = 0;
    l_U1713 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_310();
        sub_2420();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U974)
        {
            case 0:
            sub_2894();
            l_U974 = 1;
            break;
            case 1:
            sub_3928();
            break;
            case 2:
            sub_4964();
            break;
            case 4:
            sub_15729();
            break;
            case 5:
            sub_25181();
            sub_31867();
            sub_34695();
            sub_49678();
            break;
            case 7:
            sub_51078();
            sub_49678();
            break;
            case 9:
            sub_55188();
            break;
            case 8: break;
        }
        if (l_U1040)
        {
            ;
        }
        if (l_U1716)
        {
            if (NOT (IS_CAR_DEAD( l_U1437 )))
            {
                if (IS_CHAR_IN_CAR( sub_2446(), l_U1437 ))
                {
                    ;
                }
            }
        }
        if (l_U1052)
        {
            sub_55700( ref l_U1079 );
        }
    }
    return;
}

void sub_310()
{
    sub_319();
    return;
}

void sub_319()
{
    int iVar2;

    iVar2 = 21;
    sub_333( iVar2 );
    sub_1509( iVar2 );
    return;
}

void sub_333(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_377();
        sub_538();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_646();
            sub_685();
        }
    }
    sub_761();
    sub_862();
    uVar5 = sub_975( uParam0 );
    sub_1416( uVar5, 0 );
    return;
}

void sub_377()
{
    sub_391( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_491();
    }
    return;
}

void sub_391(int iParam0)
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

void sub_491()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_538()
{
    sub_547();
    return;
}

void sub_547()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_646()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_685()
{
    sub_694();
    return;
}

void sub_694()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_761()
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

void sub_862()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_884();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_884()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_975(unknown uParam0)
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
    sub_1374( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1374(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1416(int iParam0, boolean bParam1)
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

void sub_1509(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1518();
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
        sub_2293();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1518()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1556( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1556( 1, g_U569[I] )) != 0)
            {
                sub_1842( I );
            }
        }
    }
    if (NOT sub_2008())
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

int sub_1556(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1842(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1927( g_U569 - 1 );
    return;
}

void sub_1927(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2008()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1556( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2293()
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

void sub_2420()
{
    sub_2429();
    SET_PED_IS_BLIND_RAGING( sub_2446(), 0 );
    if (DOES_PICKUP_EXIST( l_U1056[0] ))
    {
        REMOVE_PICKUP( l_U1056[0] );
    }
    sub_2530();
    SET_ALL_RANDOM_PEDS_FLEE( sub_2681(), 0 );
    sub_2720();
    SET_CREATE_RANDOM_COPS( 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    STOP_PED_SPEAKING( sub_2446(), 1 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2429()
{
    return;
}

void sub_2446()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2530()
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

void sub_2681()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2720()
{
    return;
}

void sub_2894()
{
    unknown uVar2;
    unknown uVar3;

    GET_WEAPONTYPE_MODEL( 10, ref uVar3 );
    l_U1508 = {180.00000000, 0.00000000, 0.00000000};
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1005 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1010 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U1011 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U1009 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1006 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1008 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1007 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1006, 60 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1008, 2 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1012 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1012, 58 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1013 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1013, 10 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1014 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1014, 30 );
    LOAD_ADDITIONAL_TEXT( "GAMB2", 0 );
    LOAD_ADDITIONAL_TEXT( "G2AUD", 6 );
    sub_3162( "G2AUD" );
    sub_3289( 0, sub_2446(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    l_U1428 = {-1242.34900000, 1090.70700000, 24.78020000};
    l_U1432 = {-1428.70800000 + l_U1508._fU0, 1070.94700000 + l_U1508._fU4, 18.77950000};
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 64323, 1096, 25, 1, 0.00000000 );
    l_U1040 = 0;
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1241.41100000, 1092.18300000, 24.77030000, 90.00000000, 0.00000000, 128.16000000, ref l_U1056[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1056[1], "Room_restoffice" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1215.73100000, 1094.06100000, 23.87400000, 90.00000000, 0.00000000, 128.16000000, ref l_U1056[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1056[0], "Room_KorKitchn" );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            if (LOCATE_CAR_3D( uVar2, 1195.49200000, 196.25190000, 31.58290000, 5.00000000, 5.00000000, 3.00000000, 0 ))
            {
                SET_CAR_AS_MISSION_CAR( uVar2 );
                SET_CAR_COORDINATES( uVar2, 1190.63700000, 181.38020000, 31.46110000 );
                SET_CAR_HEADING( uVar2, 0.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                APPLY_FORCE_TO_CAR( uVar2, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            }
        }
    }
    return;
}

void sub_3162(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3181();
    return;
}

void sub_3181()
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

void sub_3289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3373( "\n PED NUMBER ", uParam0 );
    sub_3413( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3373(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3413(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3928()
{
    switch (l_U1717)
    {
        case 0:
        if (sub_3973())
        {
            if (g_U9893._fU24)
            {
                ADD_SCENARIO_BLOCKING_AREA( 1230.00000000, 184.00000000, 30.00000000, 1253.00000000, 204.00000000, 40 );
                CLEAR_AREA( 1230.00000000, 184.00000000, 30.00000000, 20.00000000, 1 );
                SET_PLAYER_CONTROL( sub_2681(), 0 );
                START_CUTSCENE_NOW( "G_2" );
                l_U1717 = 1;
            }
            else
            {
                l_U1717 = 2;
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
            l_U1717 = 2;
            CLEAR_NAMED_CUTSCENE( "G_2" );
        }
        break;
        case 2:
        REQUEST_ANIMS( "missgambetti2" );
        REQUEST_ANIMS( "gestures@niko" );
        REQUEST_MODEL( l_U999 );
        REQUEST_MODEL( 1376298265 );
        REQUEST_MODEL( 1203311498 );
        REQUEST_MODEL( l_U1000 );
        REQUEST_MODEL( l_U1002 );
        while (((((((NOT (HAVE_ANIMS_LOADED( "missgambetti2" ))) || (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))) || (NOT (HAS_MODEL_LOADED( 1376298265 )))) || (NOT (HAS_MODEL_LOADED( 1203311498 )))) || (NOT (HAS_MODEL_LOADED( l_U999 )))) || (NOT (HAS_MODEL_LOADED( l_U1000 )))) || (NOT (HAS_MODEL_LOADED( l_U1002 ))))
        {
            l_U1512 = 1;
            if (NOT (HAS_MODEL_LOADED( l_U998 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( l_U999 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( l_U1002 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( -622222821 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( l_U1003 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( l_U1004 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( l_U1000 )))
            {
                ;
            }
            if (NOT (HAS_MODEL_LOADED( 1203311498 )))
            {
                ;
            }
            if (NOT (HAVE_ANIMS_LOADED( "missgambetti2" )))
            {
                ;
            }
            WAIT( 0 );
        }
        if (l_U1512)
        {
            l_U1512 = 0;
        }
        sub_4681();
        LOAD_SCENE( 1195.49200000, 196.25190000, 31.58290000 );
        CLEAR_AREA( 1195.49200000, 196.25190000, 31.58290000, 5.00000000, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2446() );
        SET_CHAR_COORDINATES( sub_2446(), 1195.49200000, 196.25190000, 31.58290000 );
        SET_CHAR_HEADING( sub_2446(), 100.42550000 );
        SET_CAM_BEHIND_PED( sub_2446() );
        DO_SCREEN_FADE_IN( 1000 );
        SET_PLAYER_CONTROL( sub_2681(), 1 );
        PRINT_NOW( "GA_13", 7500, 1 );
        ADD_BLIP_FOR_COORD( l_U1432._fU0, l_U1432._fU4, l_U1432._fU8, ref l_U1435 );
        SET_ROUTE( l_U1435, 1 );
        GET_GAME_TIMER( ref l_U1701 );
        l_U1717 = 3;
        l_U974 = 2;
        break;
    }
    return;
}

void sub_3973()
{
    return sub_3984( 1, 1 );
}

int sub_3984(boolean bParam0, unknown uParam1)
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

void sub_4681()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_4964()
{
    unknown uVar2;

    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1244.99200000, 1071.71500000, 19.77960000, 12.00000000, 10.00000000, 1.00000000, 0 )) || (sub_5017()))
    {
        REMOVE_BLIP( l_U1435 );
        ADD_COVER_POINT( -1234.01100000, 1088.31200000, 23.78020000, 3, 243.80440000, 3, 0, ref l_U984[0] );
        ADD_COVER_POINT( -1230.26100000, 1091.68900000, 23.78020000, 3, 238.22140000, 3, 0, ref l_U984[1] );
        ADD_COVER_POINT( -1225.07000000, 1091.71600000, 23.78030000, 3, 170.00000000, 3, 0, ref l_U984[2] );
        ADD_COVER_POINT( -1221.74400000, 1088.40600000, 23.78010000, 3, 123.04060000, 3, 0, ref l_U984[3] );
        ADD_COVER_POINT( -1221.69500000, 1083.15900000, 23.78000000, 3, 82.17550000, 3, 0, ref l_U984[4] );
        ADD_COVER_POINT( -1225.13700000, 1079.71200000, 23.78010000, 3, 46.24090000, 3, 0, ref l_U984[5] );
        ADD_COVER_POINT( -1230.15500000, 1079.75100000, 23.78020000, 3, 4.67620000, 3, 0, ref l_U984[6] );
        ADD_COVER_POINT( -1233.54100000, 1083.12500000, 23.78020000, 3, 324.86650000, 3, 0, ref l_U984[7] );
        ADD_COVER_POINT( -1217.08100000, 1081.84700000, 23.78020000, 1, 107.69450000, 3, 0, ref l_U984[10] );
        ADD_COVER_POINT( -1238.99800000, 1077.23000000, 23.78020000, 0, 352.39090000, 3, 0, ref l_U984[11] );
        ADD_COVER_POINT( -1237.51100000, 1075.74300000, 23.78020000, 1, 352.39090000, 3, 0, ref l_U984[12] );
        ADD_SCENARIO_BLOCKING_AREA( -1250.30600000, 1067.89400000, 0.00000000, -1203.22000000, 1103.84100000, 100.00000000 );
        WAIT( 0 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, -1218.00000000, 1079.00000000, 25.00000000, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, -1218.00000000, 1082.00000000, 25.00000000, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, 64296, 1072, 20, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, 64293, 1074, 20, 0, 0.00000000 );
        GET_INTERIOR_AT_COORDS( -1237.83100000, 1076.88900000, 19.78030000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        WAIT( 0 );
        sub_5805( 13 );
        sub_5805( 23 );
        l_U1716 = 1;
        l_U1040 = 0;
        MARK_MODEL_AS_NO_LONGER_NEEDED( -956048545 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
        l_U974 = 4;
    }
    else
    {
        sub_10042();
    }
    return;
}

int sub_5017()
{
    if (NOT l_U1636)
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2446(), -1241.49300000, 1073.10200000, 24.18570000, 15.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2446(), -1241.49300000, 1073.10200000, 24.18570000, 2.00000000, 17.00000000, 2.00000000, 0 )))
        {
            l_U1636 = 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_5805(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        CREATE_CHAR( 5, l_U998, -1237.83100000, 1076.88900000, 18.78030000, ref l_U1089, 1 );
        SET_CHAR_HEADING( l_U1089, 152.81850000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1089, "Room_Bar" );
        SET_CHAR_DECISION_MAKER( l_U1089, l_U1005 );
        SET_CHAR_NEVER_TARGETTED( l_U1089, 1 );
        break;
        case 23:
        CREATE_CAR( 1376298265, -1201.45900000, 1084.70600000, 16.78130000, ref l_U1437, 1 );
        SET_CAR_HEADING( l_U1437, 89.78240000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1437 );
        CREATE_CAR( 1203311498, -1202.36800000, 1088.17200000, 17.31060000, ref l_U1086, 1 );
        SET_CAR_HEADING( l_U1086, 90.00000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1086 );
        break;
        case 26:
        if (NOT (DOES_CHAR_EXIST( l_U1410 )))
        {
            if (IS_VEH_DRIVEABLE( l_U1437 ))
            {
                CREATE_CHAR_AS_PASSENGER( l_U1437, 26, l_U999, 0, ref l_U1410 );
                SET_CHAR_DECISION_MAKER( l_U1410, l_U1005 );
                GIVE_WEAPON_TO_CHAR( l_U1410, 7, 3000, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1410, 23 );
                SET_CHAR_RELATIONSHIP( l_U1410, 5, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U1410, 7, 0 );
                SET_CHAR_ACCURACY( l_U1410, 25 );
                SET_CHAR_AS_ENEMY( l_U1410, 1 );
            }
        }
        break;
        case 3:
        if (NOT (DOES_CHAR_EXIST( l_U1251[23] )))
        {
            l_U1251[23] = sub_6477( l_U999, 23, -1224.11900000, 1087.82500000, 21.28120000, 152.26920000, 12, "Room_Stairs", 0, 1, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U1251[23], 12, 1 );
            l_U493[23]._fU0 = l_U1251[23];
            l_U493[23]._fU40 = 10;
            l_U493[23]._fU28 = {-1226.38700000, 1086.80700000, 21.28120000};
            l_U493[23]._fU60 = l_U1012;
        }
        break;
        case 4:
        if (NOT (DOES_CHAR_EXIST( l_U1251[24] )))
        {
            l_U1251[24] = sub_6477( l_U999, 23, -1232.89000000, 1081.31700000, 18.78030000, 141.00000000, 7, "Room_Stairs", 0, 1, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U1251[24], 7, 1 );
            l_U493[24]._fU0 = l_U1251[24];
            l_U493[24]._fU40 = 11;
            l_U493[24]._fU28 = {-1232.78700000, 1074.44900000, 18.78030000};
            l_U493[24]._fU60 = l_U1012;
        }
        break;
        case 12:
        CREATE_CHAR( 26, l_U999, -1239.54900000, 1084.91400000, 19.78020000, ref l_U1091, 1 );
        SET_CHAR_HEADING( l_U1091, 0.00000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1091, "Room_Bar" );
        SET_CHAR_DECISION_MAKER( l_U1091, l_U1005 );
        GIVE_WEAPON_TO_CHAR( l_U1091, 10, 9999, 0 );
        break;
        case 13:
        CREATE_CHAR( 26, l_U999, -1237.83100000, 1076.88900000, 18.78030000, ref l_U1093, 1 );
        SET_CHAR_HEADING( l_U1093, 152.81850000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1093, "Room_Bar" );
        GIVE_WEAPON_TO_CHAR( l_U1093, 7, 9999, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1093, 0, 0 );
        SET_CHAR_DECISION_MAKER( l_U1093, l_U1005 );
        sub_3289( 2, l_U1093, "KOREAN", 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1093 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U1093, 1 );
        break;
        case 5:
        if (NOT (DOES_CHAR_EXIST( l_U1251[21] )))
        {
            l_U1251[21] = sub_6477( l_U999, 23, -1219.43800000, 1090.99100000, 23.78010000, 80.98880000, 13, "Room_Rest", 1, 1, 0 );
            l_U493[21]._fU0 = l_U1251[21];
            l_U493[21]._fU60 = l_U1012;
        }
        break;
        case 6: break;
        case 8:
        l_U1251[15] = sub_6477( l_U999, 23, -1235.34600000, 1076.89600000, 24.78020000, 309.98880000, 13, "Room_Rest", 1, 1, 1 );
        l_U493[15]._fU0 = l_U1251[15];
        l_U493[15]._fU40 = 1;
        l_U493[15]._fU28 = {-1230.65300000, 1079.64900000, 24.78020000};
        l_U493[15]._fU60 = l_U1012;
        l_U1251[16] = sub_6477( l_U999, 23, -1237.41100000, 1077.56800000, 23.78030000, 315.05660000, 13, "Room_Rest", 1, 1, 1 );
        l_U493[16]._fU0 = l_U1251[16];
        l_U493[16]._fU40 = 0;
        l_U493[16]._fU28 = {-1234.20300000, 1083.03900000, 24.78020000};
        l_U493[16]._fU60 = l_U1012;
        break;
        case 2:
        if (NOT (DOES_CHAR_EXIST( l_U1251[12] )))
        {
            l_U1251[12] = sub_6477( l_U999, 23, -1220.38200000, 1091.91100000, 23.78010000, 120.06140000, 13, "Room_Rest", 1, 1, 1 );
            l_U493[12]._fU0 = l_U1251[12];
            l_U493[12]._fU40 = 2;
            l_U493[12]._fU28 = {-1224.48700000, 1091.59800000, 24.78020000};
            l_U493[12]._fU60 = l_U1012;
        }
        if (NOT (DOES_CHAR_EXIST( l_U1251[13] )))
        {
            l_U1251[13] = sub_6477( l_U999, 23, -1220.34300000, 1087.63000000, 23.78020000, 90.00000000, 13, "Room_Rest", 1, 1, 0 );
            l_U493[13]._fU0 = l_U1251[13];
            l_U493[13]._fU40 = 3;
            l_U493[13]._fU28 = {-1221.80100000, 1088.98900000, 24.78010000};
            l_U493[13]._fU60 = l_U1012;
        }
        if (NOT (DOES_CHAR_EXIST( l_U1251[14] )))
        {
            l_U1251[14] = sub_6477( l_U999, 23, -1220.12000000, 1084.30000000, 23.78020000, 112.02080000, 13, "Room_Rest", 1, 1, 1 );
            l_U493[14]._fU0 = l_U1251[14];
            l_U493[14]._fU40 = 4;
            l_U493[14]._fU28 = {-1222.28800000, 1083.84400000, 23.78020000};
            l_U493[14]._fU60 = l_U1012;
        }
        break;
        case 1:
        if (NOT (DOES_CHAR_EXIST( l_U1251[12] )))
        {
            l_U1251[0] = sub_6477( l_U999, 23, -1239.84900000, 1095.15700000, 24.78000000, 23.78020000, 13, "Room_Restoffice", 0, 1, 1 );
            l_U493[0]._fU0 = l_U1251[0];
            l_U493[0]._fU40 = 5;
            l_U493[0]._fU28 = {-1236.09700000, 1092.02700000, 24.78020000};
            l_U493[0]._fU60 = l_U1012;
        }
        break;
        case 18:
        l_U1251[4] = sub_6477( l_U999, 23, -1221.83600000, 1090.26000000, 23.78010000, 103.60350000, 7, "Room_Rest", 0, 1, 1 );
        l_U493[4]._fU0 = l_U1251[4];
        l_U493[4]._fU40 = 12;
        l_U493[4]._fU28 = {-1229.99800000, 1093.86600000, 23.78010000};
        l_U493[4]._fU60 = l_U1012;
        l_U1251[25] = sub_6477( l_U999, 23, -1237.04300000, 1077.77100000, 23.78030000, 286.73380000, 7, "Room_Rest", 0, 1, 1 );
        l_U493[25]._fU0 = l_U1251[25];
        l_U493[25]._fU40 = 1;
        l_U493[25]._fU28 = {-1232.54900000, 1079.48800000, 23.78030000};
        l_U493[25]._fU60 = l_U1014;
        l_U1251[26] = sub_6477( l_U999, 23, -1219.23300000, 1074.99200000, 23.78030000, 26.03120000, 7, "Room_Rest", 0, 1, 1 );
        l_U493[26]._fU0 = l_U1251[26];
        l_U493[26]._fU40 = 13;
        l_U493[26]._fU28 = {-1222.03300000, 1082.19100000, 23.78030000};
        l_U493[26]._fU60 = l_U1014;
        CREATE_CHAR( 26, l_U999, -1225.17600000, 1079.46000000, 23.78020000, ref l_U1251[6], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1251[6], "Room_Rest" );
        SET_CHAR_HEADING( l_U1251[6], 48.76490000 );
        SET_CHAR_DECISION_MAKER( l_U1251[6], l_U1005 );
        SET_COMBAT_DECISION_MAKER( l_U1251[6], l_U1012 );
        GIVE_WEAPON_TO_CHAR( l_U1251[6], 13, 2000, 0 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1251[6], -1222.91400000, 1087.76100000, 25.78020000, -1222.91400000, 1095.76100000, 23.78020000, 7.50000000 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1251[6] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U1251[6], 23 );
        SET_CHAR_RELATIONSHIP( l_U1251[6], 1, 23 );
        SET_CHAR_AS_ENEMY( l_U1251[6], 1 );
        if ((IS_CHAR_DEAD( l_U1251[22] )) || (IS_CHAR_FATALLY_INJURED( l_U1251[22] )))
        {
            ;
        }
        break;
        case 19:
        l_U1251[17] = sub_6477( l_U999, 23, -1216.46000000, 1079.92100000, 23.78020000, 90.00000000, 13, "Room_KorKitchn", 1, 1, 1 );
        l_U493[17]._fU0 = l_U1251[17];
        l_U493[17]._fU40 = 9;
        l_U493[17]._fU28 = {-1218.84000000, 1079.84500000, 24.78020000};
        l_U493[17]._fU60 = l_U1006;
        l_U1251[18] = sub_6477( l_U999, 23, -1214.00800000, 1083.42300000, 23.78010000, 90.00000000, 13, "Room_KorKitchn", 1, 1, 1 );
        l_U493[18]._fU0 = l_U1251[18];
        l_U493[18]._fU40 = 7;
        l_U493[18]._fU28 = {-1216.32800000, 1077.96900000, 23.78010000};
        l_U493[18]._fU60 = l_U1006;
        break;
        case 7: break;
        case 9: break;
        case 10: break;
        case 11: break;
        case 16:
        CREATE_CHAR( 4, l_U1000, -1242.34900000, 1090.70700000, 23.78030000, ref l_U1412, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1412, 0, 0, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1412, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1412, 2, 0, 1 );
        SET_CHAR_PROP_INDEX( l_U1412, 1, 0 );
        SET_CHAR_HEADING( l_U1412, 30.00000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1412, "Room_restoffice" );
        SET_CHAR_DECISION_MAKER( l_U1412, l_U1005 );
        sub_3289( 4, l_U1412, "MANAGER_M", 0 );
        SET_CHAR_AS_ENEMY( l_U1412, 1 );
        break;
        case 14:
        CREATE_CHAR( 5, l_U1001, -1408.68200000 + l_U1508._fU0, 1082.24400000 + l_U1508._fU4, 18.78020000 + l_U1508._fU8, ref l_U1426, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1426, "Room_KorBar" );
        SET_CHAR_HEADING( l_U1426, 90.00000000 );
        SET_CHAR_DECISION_MAKER( l_U1426, l_U1005 );
        break;
        case 20:
        CREATE_CHAR( 26, l_U1002, -1393.48500000 + l_U1508._fU0, 1095.33800000 + l_U1508._fU4, 23.78020000 + l_U1508._fU8, ref l_U1406, 1 );
        SET_CHAR_HEADING( l_U1406, 198.65510000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1406, "Room_KorKitchn" );
        SET_CHAR_DECISION_MAKER( l_U1406, l_U1005 );
        GIVE_WEAPON_TO_CHAR( l_U1406, 13, 3000, 0 );
        SET_CHAR_PROOFS( l_U1406, 1, 1, 1, 1, 1 );
        SET_CHAR_HEALTH( l_U1406, 400 );
        UNLOCK_RAGDOLL( l_U1406, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            sub_3289( 5, l_U1406, "KIM", 0 );
        }
        SET_CHAR_AS_ENEMY( l_U1406, 1 );
        break;
        case 22:
        if (NOT (IS_CAR_DEAD( l_U1437 )))
        {
            CREATE_CHAR_INSIDE_CAR( l_U1437, 26, l_U999, ref l_U1439 );
            SET_CHAR_DECISION_MAKER( l_U1439, l_U1005 );
        }
        break;
        case 21:
        CREATE_CHAR( 4, l_U1003, -1393.94100000 + l_U1508._fU0, 1083.65300000 + l_U1508._fU4, 24.78020000 + l_U1508._fU8, ref l_U1416[1], 1 );
        SET_CHAR_HEADING( l_U1416[1], 85.38500000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1416[1], "Room_KorKitchn" );
        SET_CHAR_DECISION_MAKER( l_U1416[1], l_U1005 );
        break;
    }
    return;
}

void sub_6477(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9, unknown uParam10)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U1005 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, uParam10 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    if (bParam9)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam7 );
    }
    if (bParam8)
    {
        TASK_DUCK( Result, -2 );
    }
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    return Result;
}

void sub_10042()
{
    switch (l_U1700)
    {
        case 0:
        GET_GAME_TIMER( ref l_U1702 );
        if ((l_U1702 - l_U1701) > 25000)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT g_U64736)
                {
                    if (sub_10145( 8 ))
                    {
                        if (sub_11496( 8, "G2_CALLB", "G2AUD", 10000, 0 ))
                        {
                            g_U64736 = 1;
                            l_U1700++;
                        }
                        else
                        {
                            l_U1700 = 99;
                        }
                    }
                    else
                    {
                        l_U1700 = 99;
                    }
                }
                else
                {
                    l_U1700 = 99;
                }
            }
        }
        break;
        case 1:
        if (sub_15424( 0 ))
        {
            l_U1700 = 99;
        }
        break;
        case 99: break;
    }
    return;
}

int sub_10145(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U22274[uParam0]._fU0)
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = sub_10224( uParam0 );
    if (sub_10597( uVar3 ))
    {
        if (g_U10981[uVar3]._fU144._fU84)
        {
            return 0;
        }
    }
    if (g_U10981[uVar3]._fU40[1] < g_U22274[uParam0]._fU160)
    {
        return 0;
    }
    if (sub_10722( uParam0 ))
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 0;
    }
    return 1;
}

int sub_10224(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_1374( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

int sub_10597(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 8: return 1;
    }
    return 0;
}

int sub_10722(unknown uParam0)
{
    if (g_U22274[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_10797( g_U22274[uParam0]._fU188._fU0, g_U22274[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_10797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_1374( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_1374( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_1374( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_1374( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_11177( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_11177( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_11177( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_11301( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_11177( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_11177( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_11177(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_11301(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

void sub_11496(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11556( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_11556(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_11626( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_11626( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2681() )))
    {
        sub_11626( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2446() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2446() ))))
    {
        sub_11626( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_11626( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_12083()) AND (NOT bParam11))
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
                sub_11626( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_12083()) AND (NOT bParam11))
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
    sub_13455( uParam0, ref g_U91._fU176 );
    sub_14836( ref g_U91._fU160 );
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
        sub_3413( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_11626(unknown uParam0)
{
    return;
}

int sub_12083()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_12140())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_12140()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2681() )))
    {
        sub_11626( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_11626( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_11626( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_11626( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2681() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2446() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2446(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_11626( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2446() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_11626( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_11626( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2681() )))
    {
        sub_11626( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_13455(int iParam0, unknown uParam1)
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

void sub_14836(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_15424(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_2446(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_11626( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_15729()
{
    unknown uVar2;
    unknown uVar3;
    unknown[5] uVar4;
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

    array(ref uVar4, 5);
    if (l_U982 > 0)
    {
        if (NOT l_U1703)
        {
            if (NOT sub_15765())
            {
                l_U1703 = 1;
            }
        }
        else if (((l_U982 > 0) AND (l_U982 < 7)) AND (NOT l_U1704))
        {
            if (sub_15765())
            {
                sub_15921( ref l_U1033, 0 );
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U1704 = 1;
                l_U982 = 6;
            }
        }
    }
    switch (l_U982)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U1476[19])
            {
                PRINT_NOW( "GA_19", 7500, 1 );
                ADD_BLIP_FOR_COORD( -1239.15400000, 1075.21400000, 19.78020000, ref l_U1062 );
                SET_ROUTE( l_U1062, 1 );
                l_U1476[19] = 1;
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U1093 ))) AND (NOT (sub_16282( l_U1093, sub_2446() ))))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2446(), -1238.50500000, 1075.38800000, 20.34500000, 1.60000000, 1.60000000, 1.60000000, 1 ))
            {
                if (sub_16409( 1, 1 ))
                {
                    SET_ALL_RANDOM_PEDS_FLEE( sub_2681(), 1 );
                    CLEAR_PRINTS();
                    if (DOES_BLIP_EXIST( l_U1062 ))
                    {
                        REMOVE_BLIP( l_U1062 );
                    }
                    CLEAR_AREA_OF_COPS( -1238.50500000, 1075.38800000, 20.34500000, 500.00000000 );
                    if (sub_3973())
                    {
                        SET_PLAYER_CONTROL( sub_2681(), 0 );
                        if (NOT (IS_CHAR_INJURED( l_U1093 )))
                        {
                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2446(), 1 );
                            sub_5805( 1 );
                            sub_5805( 2 );
                            SET_WANTED_MULTIPLIER( 0.00000000 );
                            SET_CREATE_RANDOM_COPS( 0 );
                            CLEAR_CHAR_TASKS( sub_2446() );
                            sub_5805( 5 );
                            CLEAR_AREA( -1237.57300000, 1074.02900000, 19.78020000, 20.00000000, 1 );
                            DISPLAY_RADAR( 0 );
                            BEGIN_CAM_COMMANDS( ref l_U1440 );
                            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                            OPEN_SEQUENCE_TASK( ref l_U1090 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                            CLOSE_SEQUENCE_TASK( l_U1090 );
                            CLEAR_SEQUENCE_TASK( l_U1090 );
                            SET_CHAR_HEADING( l_U1093, 138.46600000 );
                            SET_CHAR_COORDINATES( sub_2446(), -1240.86400000, 1073.53600000, 18.78050000 );
                            SET_CHAR_HEADING( sub_2446(), 315.00000000 );
                            OPEN_SEQUENCE_TASK( ref l_U1039 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1239.20500000, 1075.08400000, 18.78040000, 2, -2, 0.50000000 );
                            if (NOT (IS_CHAR_DEAD( l_U1093 )))
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1093 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U1039 );
                            TASK_PERFORM_SEQUENCE( sub_2446(), l_U1039 );
                            CLEAR_SEQUENCE_TASK( l_U1039 );
                            GET_GAME_TIMER( ref l_U1475 );
                            GET_GAME_TIMER( ref l_U1474 );
                            CREATE_CAM( 14, ref l_U1441[0] );
                            CREATE_CAM( 14, ref l_U1441[1] );
                            CREATE_CAM( 3, ref l_U1457[0] );
                            ATTACH_CAM_TO_PED( l_U1441[0], l_U1093 );
                            if (NOT l_U1705)
                            {
                                ;
                            }
                            if (NOT (IS_CHAR_DEAD( l_U1093 )))
                            {
                                POINT_CAM_AT_PED( l_U1441[0], l_U1093 );
                            }
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1441[0], 1 );
                            SET_CAM_POINT_OFFSET( l_U1441[0], 0.00000000, 1.60000000, 0.30000000 );
                            SET_CAM_ATTACH_OFFSET( l_U1441[0], 0.60000000, -1.10000000, 0.70000000 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1441[0], 1 );
                            SET_CAM_ACTIVE( l_U1441[0], 1 );
                            SET_CAM_PROPAGATE( l_U1441[0], 1 );
                            SET_CAM_FOV( l_U1441[0], 29.40000000 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_POS( l_U1441[1], -1239.73800000, 1075.66900000, 20.18406000 );
                            SET_CAM_ROT( l_U1441[1], -1.22465600, 0.00000000, -75.83337000 );
                            SET_CAM_FOV( l_U1441[1], 56.10000000 );
                            SET_CAM_ACTIVE( l_U1441[1], 0 );
                            SET_CAM_PROPAGATE( l_U1441[1], 0 );
                            SET_CAM_ACTIVE( l_U1457[0], 0 );
                            SET_CAM_PROPAGATE( l_U1457[0], 0 );
                            l_U982 = 1;
                        }
                    }
                }
            }
            else if ((((LOCATE_CHAR_IN_CAR_3D( sub_2446(), -1238.94200000, 1075.28400000, 19.78020000, 2.00000000, 2.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( sub_2446(), -1237.57300000, 1074.02900000, 19.78020000, 2.00000000, 2.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_IN_CAR_3D( sub_2446(), -1241.11000000, 1076.74300000, 19.78020000, 2.00000000, 2.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_IN_CAR_3D( sub_2446(), -1242.54700000, 1072.07800000, 19.75170000, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                if (sub_3973())
                {
                    l_U1705 = 1;
                    SET_PLAYER_CONTROL( sub_2681(), 0 );
                    DO_SCREEN_FADE_OUT( 1000 );
                    WAIT( 1500 );
                    if (IS_CHAR_IN_ANY_CAR( sub_2446() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_2446(), ref uVar3 );
                        CLEAR_AREA_OF_CARS( -1242.93100000, 1044.78900000, 18.44110000, 5.00000000 );
                        SET_CAR_COORDINATES( uVar3, -1242.93100000, 1044.78900000, 18.44110000 );
                        SET_CAR_HEADING( uVar3, 61.19270000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar3 );
                        SET_CAR_AS_MISSION_CAR( uVar3 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_2446(), -1246.61800000, 1065.83100000, 19.77710000 );
                    }
                    CLEAR_AREA( -1237.57300000, 1074.02900000, 19.78020000, 20.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_2446(), -1238.50500000, 1075.38800000, 18.78020000 );
                    SET_CHAR_HEADING( sub_2446(), 321.65180000 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_2446(), "Room_bar" );
                    WAIT( 500 );
                    GET_GAME_VIEWPORT_ID( ref uVar2 );
                    SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "Room_bar" );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2446(), -1235.40700000, 1073.86200000, 19.78010000, 1.00000000, 2.00000000, 1.00000000, 0 ))
            {
                l_U1055 = 1;
                sub_5805( 1 );
                sub_5805( 2 );
                sub_5805( 5 );
                if (DOES_BLIP_EXIST( l_U1062 ))
                {
                    REMOVE_BLIP( l_U1062 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U1431 )))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "GA_10", 7500, 1 );
                    ADD_BLIP_FOR_COORD( l_U1428._fU0, l_U1428._fU4, l_U1428._fU8, ref l_U1431 );
                    CHANGE_BLIP_COLOUR( l_U1431, 3 );
                    SET_ROUTE( l_U1431, 1 );
                    l_U1476[10] = 1;
                    if (NOT (IS_CHAR_DEAD( l_U1093 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1094 );
                        TASK_COMBAT( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1094 );
                        SET_COMBAT_DECISION_MAKER( l_U1093, l_U1006 );
                        SET_CHAR_RELATIONSHIP( l_U1093, 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U1093, l_U1010 );
                        TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                        CLEAR_SEQUENCE_TASK( l_U1094 );
                    }
                    l_U982 = 8;
                }
            }
        }
        else
        {
            sub_5805( 1 );
            sub_5805( 2 );
            sub_5805( 5 );
            SET_WANTED_MULTIPLIER( 0.00000000 );
            if (sub_16282( l_U1093, sub_2446() ))
            {
                sub_5805( 4 );
                l_U493[24]._fU4 = 1;
            }
            if (DOES_BLIP_EXIST( l_U1062 ))
            {
                REMOVE_BLIP( l_U1062 );
            }
            SET_ALL_RANDOM_PEDS_FLEE( sub_2681(), 1 );
            SET_CREATE_RANDOM_COPS( 0 );
            if (NOT (DOES_BLIP_EXIST( l_U1431 )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "GA_10", 7500, 1 );
                ADD_BLIP_FOR_COORD( l_U1428._fU0, l_U1428._fU4, l_U1428._fU8, ref l_U1431 );
                CHANGE_BLIP_COLOUR( l_U1431, 3 );
                SET_ROUTE( l_U1431, 1 );
                l_U1476[10] = 1;
                if (NOT (IS_CHAR_INJURED( l_U1093 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1094 );
                    TASK_COMBAT( 0, sub_2446() );
                    CLOSE_SEQUENCE_TASK( l_U1094 );
                    SET_COMBAT_DECISION_MAKER( l_U1093, l_U1006 );
                    SET_CHAR_RELATIONSHIP( l_U1093, 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1093, l_U1010 );
                    TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                    CLEAR_SEQUENCE_TASK( l_U1094 );
                }
                l_U982 = 8;
            }
        }
        break;
        case 1:
        if (NOT l_U1708)
        {
            if (sub_18885( sub_2446(), 1, 0 ))
            {
                SET_CHAR_COORDINATES( sub_2446(), -1238.82300000, 1075.52000000, 18.78040000 );
                SET_CHAR_HEADING( sub_2446(), 321.31650000 );
                SET_CAM_ACTIVE( l_U1441[1], 1 );
                SET_CAM_PROPAGATE( l_U1441[1], 1 );
                SET_CAM_ACTIVE( l_U1441[0], 0 );
                SET_CAM_PROPAGATE( l_U1441[0], 0 );
                sub_19125( "G2_ARR", ref l_U1033, 6, 1 );
                l_U1708 = 1;
            }
        }
        else if (NOT l_U1476[3])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U1476[3] = 1;
                GET_GAME_TIMER( ref l_U1095 );
            }
        }
        else if (NOT (sub_20149( l_U1033 )))
        {
            l_U982 = 6;
        };;;
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_PLAYER_CONTROL( sub_2681(), 1 );
        l_U982 = 7;
        GET_GAME_TIMER( ref l_U1474 );
        if (NOT l_U1704)
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1500 );
        }
        SET_CAM_ACTIVE( l_U1441[0], 0 );
        SET_CAM_PROPAGATE( l_U1441[0], 0 );
        SET_CAM_ACTIVE( l_U1441[1], 0 );
        SET_CAM_PROPAGATE( l_U1441[1], 0 );
        SET_CAM_ACTIVE( l_U1457[0], 0 );
        SET_CAM_PROPAGATE( l_U1457[0], 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2446(), 0 );
        DESTROY_CAM( l_U1457[0] );
        DESTROY_CAM( l_U1441[0] );
        DESTROY_CAM( l_U1441[1] );
        DISPLAY_RADAR( 1 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        if (l_U1704)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        else
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        REMOVE_ANIMS( "gestures@niko" );
        sub_4681();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U1440 );
        break;
        case 7:
        if ((((sub_16282( l_U1093, sub_2446() )) || (sub_20684( l_U1093, 0 ))) || (sub_20887())) || (sub_5017()))
        {
            SET_WANTED_MULTIPLIER( 0.00000000 );
            if (NOT l_U493[24]._fU4)
            {
                if ((NOT sub_5017()) AND (NOT sub_20887()))
                {
                    sub_5805( 4 );
                    l_U493[24]._fU4 = 1;
                }
            }
            if (NOT l_U1706)
            {
                GET_GAME_TIMER( ref l_U1714 );
                l_U1706 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U1715 );
                if ((l_U1715 - l_U1714) > 500)
                {
                    if (NOT sub_21103())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1093 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1094 );
                            TASK_COMBAT( 0, sub_2446() );
                            CLOSE_SEQUENCE_TASK( l_U1094 );
                            SET_COMBAT_DECISION_MAKER( l_U1093, l_U1006 );
                            SAY_AMBIENT_SPEECH( l_U1093, "GANG_ATTACK_WARNING", 1, 1, 0 );
                            SET_CHAR_RELATIONSHIP( l_U1093, 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U1093, l_U1010 );
                            TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                            CLEAR_SEQUENCE_TASK( l_U1094 );
                            SET_CHAR_AS_ENEMY( l_U1093, 1 );
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U1089 )))
                    {
                        if (NOT l_U1054)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1090 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1245.32500000, 1070.01800000, 19.77880000, 3, -2, 0.50000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1243.76700000, 1064.10200000, 19.77430000, 3, -2, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( l_U1090 );
                            TASK_PERFORM_SEQUENCE( l_U1089, l_U1090 );
                            CLEAR_SEQUENCE_TASK( l_U1090 );
                            l_U1054 = 1;
                        }
                    }
                    l_U982 = 8;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U1431 )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "GA_10", 7500, 1 );
                if (DOES_BLIP_EXIST( l_U1062 ))
                {
                    REMOVE_BLIP( l_U1062 );
                }
                ADD_BLIP_FOR_COORD( l_U1428._fU0, l_U1428._fU4, l_U1428._fU8, ref l_U1431 );
                CHANGE_BLIP_COLOUR( l_U1431, 3 );
                SET_ROUTE( l_U1431, 1 );
                l_U1476[10] = 1;
            }
        }
        else
        {
            sub_21685( "Doing turn....." );
            if (NOT sub_21103())
            {
                if (NOT (IS_CHAR_DEAD( l_U1093 )))
                {
                    if (NOT l_U1707)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1094 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1094 );
                        TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                        CLEAR_SEQUENCE_TASK( l_U1094 );
                        l_U1707 = 1;
                    }
                    else if (sub_18885( l_U1093, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1094 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1094 );
                        TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                        CLEAR_SEQUENCE_TASK( l_U1094 );
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U1093 )))
            {
                if (NOT l_U1713)
                {
                    GET_GAME_TIMER( ref l_U1714 );
                    SAY_AMBIENT_SPEECH( l_U1093, "GANG_ATTACK_WARNING", 1, 1, 0 );
                    l_U1713 = 1;
                }
                else if (NOT l_U1712)
                {
                    GET_GAME_TIMER( ref l_U1715 );
                    if ((l_U1715 - l_U1714) > 1000)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1094 );
                        TASK_COMBAT( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1094 );
                        SET_COMBAT_DECISION_MAKER( l_U1093, l_U1006 );
                        SET_CHAR_RELATIONSHIP( l_U1093, 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U1093, l_U1010 );
                        TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                        CLEAR_SEQUENCE_TASK( l_U1094 );
                        SET_CHAR_AS_ENEMY( l_U1093, 1 );
                        l_U1712 = 1;
                    }
                }
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2446(), -1233.10200000, 1077.64600000, 19.78020000, 2.00000000, 1.00000000, 1.00000000, 0 ))
            {
                SCRIPT_ASSERT( "Missed Original trigger!" );
            }
        }
        if (NOT l_U1476[10])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "GA_10", 7500, 1 );
                ADD_BLIP_FOR_COORD( l_U1428._fU0, l_U1428._fU4, l_U1428._fU8, ref l_U1431 );
                CHANGE_BLIP_COLOUR( l_U1431, 3 );
                if (DOES_BLIP_EXIST( l_U1062 ))
                {
                    REMOVE_BLIP( l_U1062 );
                }
                SET_ROUTE( l_U1431, 1 );
                l_U1476[10] = 1;
            }
        }
        else if (NOT l_U1476[20])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U1476[20] = 1;
            }
        }
        break;
        case 8:
        uVar4[0] = {l_U493[24]};
        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1233.10200000, 1077.64600000, 19.78020000, 2.00000000, 1.00000000, 1.00000000, 0 )) || (sub_5017())) || (sub_22507( ref uVar4, 1, 1, 1 )))
        {
            if (NOT sub_5017())
            {
                sub_5805( 3 );
            }
            CLEAR_AREA_OF_COPS( -1238.50500000, 1075.38800000, 20.34500000, 500.00000000 );
            l_U493[23]._fU4 = 1;
            l_U1046 = 1;
            l_U974 = 5;
            l_U982 = 9;
            SET_ALL_RANDOM_PEDS_FLEE( sub_2681(), 1 );
            if (DOES_CHAR_EXIST( l_U1089 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1089 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1089 )))
                    {
                        DELETE_CHAR( ref l_U1089 );
                    }
                }
            }
        }
        if (l_U1055)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_19125( "G2_RUNP", ref l_U1689, 6, 1 );
                l_U1055 = 0;
                l_U1695 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U1093 )))
        {
            if (l_U1713)
            {
                if (NOT l_U1712)
                {
                    GET_GAME_TIMER( ref l_U1715 );
                    if ((l_U1715 - l_U1714) > 1000)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1094 );
                        TASK_COMBAT( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1094 );
                        SET_COMBAT_DECISION_MAKER( l_U1093, l_U1006 );
                        SET_CHAR_RELATIONSHIP( l_U1093, 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U1093, l_U1010 );
                        TASK_PERFORM_SEQUENCE( l_U1093, l_U1094 );
                        CLEAR_SEQUENCE_TASK( l_U1094 );
                        SET_CHAR_AS_ENEMY( l_U1093, 1 );
                        l_U1712 = 1;
                    }
                }
            }
        }
        break;
    }
    if (NOT l_U1709[0])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64296, 1072, 20, 1.50000000, -269541707 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, 64296, 1072, 20, 0, 0.00000000 );
            l_U1709[0] = 1;
        }
    }
    if (NOT l_U1709[1])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64293, 1074, 20, 1.50000000, -269541707 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, 64293, 1074, 20, 0, 0.00000000 );
            l_U1709[1] = 1;
        }
    }
    sub_23249();
    return;
}

int sub_15765()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_15921(int iParam0, unknown uParam1)
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

int sub_16282(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, uParam1, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_16409(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2446() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2446(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2446() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2446(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2446()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2446() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2446() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2681() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2681() )))
    {
        return 0;
    }
    return 1;
}

int sub_18885(unknown uParam0, boolean bParam1, int iParam2)
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

void sub_19125(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19148( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_19148(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19202( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19202(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19224( iParam1 )))
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
    sub_19904( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_19224(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11626( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11626( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11626( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19904(int iParam0, int iParam1)
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

int sub_20149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11626( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11626( "\n speech is not playing" );
    }
    return 0;
}

int sub_20684(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT bParam1)
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_2681(), uParam0 ))
            {
                if (IS_CHAR_ARMED( sub_2446(), 7 ))
                {
                    return 1;
                }
            }
        }
        else if (NOT IS_AUTO_AIMING_ON())
        {
            if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2681(), uParam0 ))
            {
                if (IS_CHAR_ARMED( sub_2446(), 7 ))
                {
                    return 1;
                }
            }
        }
        else if ((IS_PLAYER_TARGETTING_CHAR( sub_2681(), uParam0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2681(), uParam0 )))
        {
            if (IS_CHAR_ARMED( sub_2446(), 7 ))
            {
                return 1;
            }
        };;;
    }
    return 0;
}

void sub_20887()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1232.87200000, 1073.96100000, 19.78530000, 2.00000000, 3.00000000, 2.00000000, 0 ))
    {
        l_U1640 = 1;
    }
    return l_U1640;
}

void sub_21103()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1235.52400000, 1073.91100000, 19.78530000, 1.00000000, 2.00000000, 2.00000000, 0 ))
    {
        l_U1641 = 1;
    }
    return l_U1641;
}

void sub_21685(unknown uParam0)
{
    return;
}

int sub_22507(unknown uParam0, int iParam1, int iParam2, boolean bParam3)
{
    int I;
    int iVar7;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((uParam0^)[I]._fU4)
        {
            if ((IS_CHAR_DEAD( (uParam0^)[I]._fU0 )) || (IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )))
            {
                iVar7++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar7++;
                }
            }
        }
    }
    if (iVar7 >= iParam2)
    {
        return 1;
    }
    return 0;
}

void sub_23249()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 29; I++ )
    {
        if (I == l_U1688)
        {
            ;
        }
        if (l_U493[I]._fU4)
        {
            if (I == l_U1688)
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( l_U493[I]._fU0 )))
            {
                if (I == l_U1688)
                {
                    ;
                }
                if (NOT l_U493[I]._fU8)
                {
                    if (I == l_U1688)
                    {
                        ;
                    }
                    SET_CHAR_DECISION_MAKER( l_U493[I]._fU0, l_U1005 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    if (NOT l_U493[I]._fU24)
                    {
                        if (I == l_U1688)
                        {
                            ;
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U493[I]._fU28._fU0, l_U493[I]._fU28._fU4, l_U493[I]._fU28._fU8, 3, -2, 0.50000000 );
                    }
                    else if (I == l_U1688)
                    {
                        ;
                    }
                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U493[I]._fU28._fU0, l_U493[I]._fU28._fU4, l_U493[I]._fU28._fU8, 3, -2 );;
                    if (l_U493[I]._fU20)
                    {
                        TASK_DUCK( 0, -2 );
                    }
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U493[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U493[I]._fU0, uVar3 );
                    }
                    else if (I == l_U1688)
                    {
                        ;
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U493[I]._fU8 = 1;
                }
                else if (I == l_U1688)
                {
                    ;
                }
                if ((NOT l_U493[I]._fU16) || (l_U493[I]._fU12))
                {
                    if (I == l_U1688)
                    {
                        ;
                    }
                    if (NOT l_U493[I]._fU20)
                    {
                        if (I == l_U1688)
                        {
                            ;
                        }
                        if (sub_18885( l_U493[I]._fU0, 1, 0 ))
                        {
                            if (I == l_U1688)
                            {
                                ;
                            }
                            SET_CHAR_DECISION_MAKER( l_U493[I]._fU0, l_U1010 );
                            SET_COMBAT_DECISION_MAKER( l_U493[I]._fU0, l_U493[I]._fU60 );
                            sub_23881( ref l_U493[I]._fU0, l_U493[I]._fU40 );
                            SET_CHAR_RELATIONSHIP( l_U493[I]._fU0, 5, 0 );
                            if (NOT l_U493[I]._fU52)
                            {
                                if (I == l_U1688)
                                {
                                    ;
                                }
                                if (l_U493[I]._fU44)
                                {
                                    if (I == l_U1688)
                                    {
                                        ;
                                    }
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    if (NOT (IS_CHAR_DEAD( l_U493[I]._fU48 )))
                                    {
                                        TASK_COMBAT( 0, l_U493[I]._fU48 );
                                    }
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                                else if (I == l_U1688)
                                {
                                    ;
                                }
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_COMBAT( 0, sub_2446() );
                                CLOSE_SEQUENCE_TASK( uVar3 );;
                                if (NOT (IS_CHAR_INJURED( l_U493[I]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U493[I]._fU0, uVar3 );
                                }
                                else if (I == l_U1688)
                                {
                                    ;
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                            else if (I == l_U1688)
                            {
                                ;
                            }
                            SET_CHAR_RELATIONSHIP( l_U493[I]._fU0, 5, 25 );
                            SET_CHAR_RELATIONSHIP( l_U493[I]._fU0, 5, 0 );;
                            l_U493[I]._fU16 = 1;
                            l_U493[I]._fU12 = 0;
                        }
                        else if (I == l_U1688)
                        {
                            ;
                        }
                    }
                    else if (I == l_U1688)
                    {
                        ;
                    }
                }
            }
            else if (I == l_U1688)
            {
                ;
            }
        }
    }
    return;
}

void sub_23881(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1232.09300000, 1084.37800000, 25.78020000, -1234.62600000, 1082.77100000, 23.78020000, 3.50000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1229.97400000, 1082.05500000, 25.78020000, -1230.78800000, 1079.16700000, 23.78020000, 2.50000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1225.87700000, 1089.68000000, 25.78020000, -1225.49300000, 1092.15000000, 23.78020000, 3.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1223.93500000, 1087.32100000, 25.78020000, -1222.11000000, 1088.13800000, 23.78020000, 3.50000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1224.09500000, 1083.52400000, 25.78020000, -1221.63300000, 1083.09000000, 23.78020000, 3.50000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1234.79800000, 1085.47800000, 24.78020000, -1234.79800000, 1095.47800000, 23.78020000, 7.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1237.90000000, 1077.06600000, 25.78020000, -1239.22600000, 1075.56800000, 22.28020000, 3.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1217.78000000, 1078.52100000, 26.28510000, -1215.28000000, 1078.52100000, 23.28510000, 2.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1218.00600000, 1081.50800000, 26.28510000, -1215.50600000, 1081.50800000, 23.28510000, 2.00000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1228.81500000, 1084.70700000, 21.28510000, -1233.05700000, 1080.46500000, 18.28510000, 8.00000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1232.70700000, 1070.36000000, 20.78530000, -1232.70700000, 1080.86000000, 18.28530000, 5.00000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1227.99100000, 1096.21600000, 26.28020000, -1227.99100000, 1075.71600000, 23.28020000, 21.50000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1230.55000000, 1093.82300000, 25.78020000, -1229.55400000, 1093.73400000, 23.78020000, 1.50000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1222.58200000, 1083.61300000, 26.28530000, -1220.72900000, 1082.86100000, 23.28530000, 3.00000000 );
        break;
    }
    return;
}

void sub_25181()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown[11] uVar5;

    array(ref uVar5, 11);
    switch (l_U975)
    {
        case 0:
        sub_5805( 8 );
        l_U975 = 1;
        break;
        case 1:
        if (l_U1046)
        {
            SET_PED_IS_BLIND_RAGING( sub_2446(), 1 );
            if (DOES_CHAR_EXIST( l_U1426 ))
            {
                DELETE_CHAR( ref l_U1426 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1001 );
            l_U493[12]._fU4 = 1;
            l_U493[13]._fU4 = 1;
            l_U493[14]._fU4 = 1;
        }
        if (NOT l_U493[21]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U1251[21] )))
            {
                if ((IS_CHAR_FATALLY_INJURED( l_U1251[12] )) || (IS_CHAR_INJURED( l_U1251[12] )))
                {
                    l_U493[21]._fU28 = {-1225.16200000, 1090.98400000, 23.78020000};
                    l_U493[21]._fU40 = 2;
                    l_U493[21]._fU4 = 1;
                }
                else if ((IS_CHAR_FATALLY_INJURED( l_U1251[13] )) || (IS_CHAR_INJURED( l_U1251[13] )))
                {
                    l_U493[21]._fU28 = {-1221.80100000, 1088.98900000, 24.78010000};
                    l_U493[21]._fU40 = 3;
                    l_U493[21]._fU4 = 1;
                }
            }
        }
        uVar5[0] = l_U1251[11];
        uVar5[1] = l_U1251[12];
        uVar5[2] = l_U1251[13];
        uVar5[3] = l_U1251[14];
        if (sub_25646( ref uVar5, 4, 1 ))
        {
            l_U1041 = 1;
        }
        GET_CHAR_COORDINATES( sub_2446(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1229.21000000, 1084.22400000, 20.35620000, 1.00000000, 1.00000000, 1.00000000, 0 )) || (uVar2._fU8 > 21.00000000))
        {
            l_U1047 = 1;
        }
        GET_CHAR_COORDINATES( sub_2446(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1224.37300000, 1083.71200000, 22.65380000, 1.00000000, 1.00000000, 1.00000000, 0 )) || (uVar2._fU8 > 21.00000000))
        {
            l_U1045 = 1;
            if (NOT (DOES_CHAR_EXIST( l_U1251[15] )))
            {
                ;
            }
        }
        if (l_U1045)
        {
            if (NOT (IS_CHAR_INJURED( l_U1251[15] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U1251[16] )))
                {
                    if ((IS_CHAR_ON_SCREEN( l_U1251[15] )) || (IS_CHAR_ON_SCREEN( l_U1251[16] )))
                    {
                        l_U1041 = 1;
                        l_U493[15]._fU4 = 1;
                        l_U493[16]._fU4 = 1;
                    }
                }
            }
        }
        if (sub_26102() == 0)
        {
            l_U975 = 3;
            l_U1041 = 1;
        }
        GET_CHAR_COORDINATES( sub_2446(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((sub_26102() == 1) || (uVar2._fU8 > 23.00000000))
        {
            l_U975 = 2;
            l_U1041 = 1;
        }
        break;
        case 2:
        if (NOT l_U493[0]._fU4)
        {
            l_U493[0]._fU4 = 1;
        }
        if (NOT l_U1344[8])
        {
            OPEN_SEQUENCE_TASK( ref l_U1282[8] );
            TASK_COMBAT( 0, sub_2446() );
            CLOSE_SEQUENCE_TASK( l_U1282[8] );
            if (NOT (IS_CHAR_INJURED( l_U1251[8] )))
            {
                SET_CHAR_RELATIONSHIP( l_U1251[8], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[8], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[8], l_U1282[8] );
            }
            CLEAR_SEQUENCE_TASK( l_U1282[8] );
            l_U1344[8] = 1;
        }
        if (NOT l_U1344[22])
        {
            OPEN_SEQUENCE_TASK( ref l_U1282[22] );
            TASK_COMBAT( 0, sub_2446() );
            CLOSE_SEQUENCE_TASK( l_U1282[22] );
            if (NOT (IS_CHAR_INJURED( l_U1251[22] )))
            {
                SET_CHAR_RELATIONSHIP( l_U1251[22], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[22], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[22], l_U1282[22] );
            }
            CLEAR_SEQUENCE_TASK( l_U1282[22] );
            l_U1344[22] = 1;
        }
        l_U493[15]._fU4 = 1;
        l_U493[16]._fU4 = 1;
        l_U975 = 4;
        break;
        case 4:
        if (l_U1075[0])
        {
            if (NOT (IS_CHAR_DEAD( l_U1251[0] )))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( l_U1251[0], -1237.14900000, 1094.82300000, 24.78020000, 1.00000000, 1.00000000, 1.00000000, 0 ))
                {
                    l_U1052 = 1;
                    l_U975 = 6;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1235.46500000, 1089.56300000, 24.78020000, 3.00000000, 1.00000000, 1.00000000, 0 ))
                {
                    l_U1052 = 1;
                    l_U975 = 6;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1232.79200000, 1092.70000000, 24.78020000, 1.00000000, 3.00000000, 1.00000000, 0 ))
                {
                    l_U1052 = 1;
                    l_U975 = 6;
                };;;
            }
            else
            {
                l_U1052 = 1;
                l_U975 = 6;
            }
        }
        if (l_U976 == 3)
        {
            if ((sub_26947()) || (NOT sub_27018()))
            {
                l_U975 = 5;
            }
        }
        break;
        case 6:
        if (l_U981 != 3)
        {
            ;
        }
        if (l_U976 == 3)
        {
            l_U975 = 5;
        }
        break;
        case 5:
        if (NOT l_U1344[3])
        {
            GET_GAME_VIEWPORT_ID( ref l_U1511 );
            if (CAM_IS_SPHERE_VISIBLE( l_U1511, -1228.05000000, 1095.46700000, 24.78020000, 2.00000000 ))
            {
                GET_CHAR_COORDINATES( sub_2446(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U1282[3] );
                TASK_SEEK_COVER_TO_COORDS( 0, -1235.55200000, 1094.49000000, 23.78020000, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2000 );
                CLOSE_SEQUENCE_TASK( l_U1282[3] );
                if (NOT (IS_CHAR_INJURED( l_U1251[3] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U1251[3], l_U1282[3] );
                }
                CLEAR_SEQUENCE_TASK( l_U1282[3] );
                l_U1344[3] = 1;
                GET_GAME_TIMER( ref l_U1474 );
            }
        }
        else if (NOT l_U1049[0])
        {
            if (sub_18885( l_U1251[3], 1, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U1282[3] );
                TASK_COMBAT( 0, sub_2446() );
                CLOSE_SEQUENCE_TASK( l_U1282[3] );
                if (NOT (IS_CHAR_INJURED( l_U1251[3] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U1251[3], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1251[3], l_U1010 );
                    TASK_PERFORM_SEQUENCE( l_U1251[3], l_U1282[3] );
                }
                CLEAR_SEQUENCE_TASK( l_U1282[3] );
                l_U1049[0] = 1;
            }
        }
        l_U493[4]._fU4 = 1;
        l_U493[25]._fU4 = 1;
        l_U493[26]._fU4 = 1;
        if (NOT l_U1344[5])
        {
            OPEN_SEQUENCE_TASK( ref l_U1282[5] );
            TASK_COMBAT( 0, sub_2446() );
            CLOSE_SEQUENCE_TASK( l_U1282[5] );
            if (NOT (IS_CHAR_INJURED( l_U1251[5] )))
            {
                SET_CHAR_RELATIONSHIP( l_U1251[5], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[5], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[5], l_U1282[5] );
            }
            CLEAR_SEQUENCE_TASK( l_U1282[5] );
            l_U1344[5] = 1;
        }
        if (NOT l_U1344[6])
        {
            OPEN_SEQUENCE_TASK( ref l_U1282[6] );
            TASK_COMBAT( 0, sub_2446() );
            CLOSE_SEQUENCE_TASK( l_U1282[6] );
            if (NOT (IS_CHAR_INJURED( l_U1251[6] )))
            {
                SET_CHAR_RELATIONSHIP( l_U1251[6], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[6], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[6], l_U1282[6] );
            }
            CLEAR_SEQUENCE_TASK( l_U1282[6] );
            l_U1344[6] = 1;
        }
        if (NOT l_U1344[7])
        {
            OPEN_SEQUENCE_TASK( ref l_U1282[7] );
            TASK_COMBAT( 0, sub_2446() );
            CLOSE_SEQUENCE_TASK( l_U1282[7] );
            if (NOT (IS_CHAR_INJURED( l_U1251[7] )))
            {
                SET_CHAR_RELATIONSHIP( l_U1251[7], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[7], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[7], l_U1282[7] );
            }
            CLEAR_SEQUENCE_TASK( l_U1282[7] );
            l_U1344[7] = 1;
        }
        if (sub_28096( -1237.74000000, 1074.30900000, 23.79520000, 3.00000000 ))
        {
            l_U1042 = 1;
        }
        if (l_U1042)
        {
            if (NOT l_U493[9]._fU4)
            {
                if (NOT (IS_CHAR_DEAD( l_U1251[9] )))
                {
                    l_U493[9]._fU4 = 1;
                }
            }
        }
        if (sub_28223())
        {
            l_U1044 = 1;
        }
        if (NOT l_U1698)
        {
            if (l_U1044)
            {
                if (sub_28096( -1217.68100000, 1079.76400000, 24.92719000, 2.00000000 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1251[17] )))
                    {
                        if (NOT l_U1697)
                        {
                            SET_CURRENT_CHAR_WEAPON( l_U1251[17], 13, 1 );
                            l_U493[18]._fU4 = 1;
                            PLAY_SOUND_FROM_POSITION( -1, "G2_DINING_OUT_PUSH_OPEN_DOORS", -1217.80700000, 1080.50500000, 23.78030000 );
                            l_U1697 = 1;
                        }
                        else if (sub_28580())
                        {
                            l_U1044 = 0;
                            l_U1053 = 1;
                            l_U1698 = 1;
                        }
                    }
                }
            }
            else if (l_U1053)
            {
                if (NOT l_U1075[2])
                {
                    ;
                }
                l_U493[18]._fU4 = 1;
            }
        }
        else
        {
            l_U493[18]._fU4 = 1;
            l_U493[17]._fU4 = 1;
        }
        if (l_U1075[2])
        {
            ;
        }
        break;
        case 12: break;
    }
    if (l_U976 == 3)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1396.35400000 + l_U1508._fU0, 1080.32300000 + l_U1508._fU4, 24.78020000 + l_U1508._fU8, 1.00000000, 2.00000000, 1.00000000, 0 ))
        {
            ;
        }
    }
    if (l_U975 > 0)
    {
        sub_29024( 27 );
    }
    if (l_U1047)
    {
        if (NOT l_U1344[19])
        {
            if (NOT (IS_CHAR_INJURED( l_U1251[19] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1282[19] );
                TASK_COMBAT( 0, sub_2446() );
                CLOSE_SEQUENCE_TASK( l_U1282[19] );
                SET_CHAR_RELATIONSHIP( l_U1251[19], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[19], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[19], l_U1282[19] );
                CLEAR_SEQUENCE_TASK( l_U1282[19] );
                l_U1344[19] = 1;
            }
        }
        if (NOT l_U1344[20])
        {
            if (NOT (IS_CHAR_INJURED( l_U1251[20] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1282[20] );
                TASK_COMBAT( 0, sub_2446() );
                CLOSE_SEQUENCE_TASK( l_U1282[20] );
                SET_CHAR_RELATIONSHIP( l_U1251[20], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1251[20], l_U1010 );
                TASK_PERFORM_SEQUENCE( l_U1251[20], l_U1282[20] );
                CLEAR_SEQUENCE_TASK( l_U1282[20] );
                l_U1344[20] = 1;
            }
        }
    }
    if (NOT l_U1695)
    {
        if (l_U1055)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_19125( "G2_RUNP", ref l_U1689, 6, 1 );
                l_U1055 = 0;
                l_U1695 = 1;
            }
        }
    }
    if (NOT l_U1696)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1226.87200000, 1079.26700000, 24.78510000, 1.00000000, 1.00000000, 1.00000000, 0 ))
        {
            sub_31427();
            l_U1696 = 1;
        }
    }
    if (NOT l_U1699)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1232.15900000, 1075.09500000, 19.78530000, 2.00000000, 1.00000000, 1.00000000, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1251[13] )))
            {
                SAY_AMBIENT_SPEECH( l_U1251[13], "MOVE_IN", 1, 1, 0 );
                l_U1699 = 1;
            }
        }
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1220.44000000, 1087.22400000, 24.78020000, 2.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1226.65500000, 1077.03500000, 24.78020000, 1.00000000, 4.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1221.76500000, 1080.34600000, 24.75010000, 4.00000000, 5.00000000, 1.00000000, 0 )))
    {
        l_U1638 = 1;
    }
    sub_23249();
    return;
}

int sub_25646(unknown uParam0, int iParam1, int iParam2)
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
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I], sub_2446(), 0 ))
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

int sub_26102()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1231.27800000, 1087.69700000, 24.49570000, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        return 0;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1225.80600000, 1083.04600000, 24.03090000, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        return 1;
    }
    return -1;
}

int sub_26947()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1236.74700000, 1094.64000000, 24.78510000, 1.00000000, 2.00000000, 2.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_27018()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1240.16000000, 1094.60500000, 24.78530000, 3.00000000, 5.00000000, 2.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_28096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_28223()
{
    if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1220.44000000, 1087.22400000, 24.78020000, 2.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1226.65500000, 1077.03500000, 24.78020000, 1.00000000, 4.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1221.76500000, 1080.34600000, 24.75010000, 4.00000000, 5.00000000, 1.00000000, 0 ))) || (l_U1637))
    {
        return 1;
    }
    return 0;
}

int sub_28580()
{
    if (NOT l_U1644[0])
    {
        if (l_U1642 >= -1.00000000)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, -1218.00000000, 1082.00000000, 25.00000000, 1, l_U1642 );
            l_U1642 -= 0.25000000;
        }
        else
        {
            l_U1644[0] = 1;
        }
    }
    if (NOT l_U1644[1])
    {
        if (l_U1643 <= 1.00000000)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, -1218.00000000, 1079.00000000, 25.00000000, 1, l_U1643 );
            l_U1643 += 0.25000000;
        }
        else
        {
            l_U1644[1] = 1;
        }
    }
    if ((l_U1644[0]) AND (l_U1644[1]))
    {
        return 1;
    }
    return 0;
}

void sub_29024(unknown uParam0)
{
    int I;
    int iVar4;

    switch (uParam0)
    {
        case 28:
        for ( I = 0; I <= 29; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U1251[I] )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1251[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U999 );
        break;
        case 27:
        for ( I = 0; I <= 29; I++ )
        {
            if (IS_CHAR_DEAD( l_U1251[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1251[I] );
            }
        }
        break;
        case 11:
        if (DOES_CHAR_EXIST( l_U1096[0] ))
        {
            if (l_U1189[0])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[0]) > 30000) || (sub_18885( l_U1096[0], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[0] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[0] )))
                        {
                            DELETE_CHAR( ref l_U1096[0] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[9] ))
        {
            if (l_U1189[9])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[9]) > 30000) || (sub_18885( l_U1096[9], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[9] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[9] )))
                        {
                            DELETE_CHAR( ref l_U1096[9] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[12] ))
        {
            if (l_U1189[12])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[12]) > 30000) || (sub_18885( l_U1096[12], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[12] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[12] )))
                        {
                            DELETE_CHAR( ref l_U1096[12] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[13] ))
        {
            if (l_U1189[13])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[13]) > 30000) || (sub_18885( l_U1096[13], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[13] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[13] )))
                        {
                            DELETE_CHAR( ref l_U1096[13] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[16] ))
        {
            if (l_U1189[16])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[16]) > 30000) || (sub_18885( l_U1096[16], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[16] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[16] )))
                        {
                            DELETE_CHAR( ref l_U1096[16] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[17] ))
        {
            if (l_U1189[17])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[17]) > 30000) || (sub_18885( l_U1096[17], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[17] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[17] )))
                        {
                            DELETE_CHAR( ref l_U1096[17] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[23] ))
        {
            if (l_U1189[23])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[23]) > 30000) || (sub_18885( l_U1096[23], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[23] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[23] )))
                        {
                            DELETE_CHAR( ref l_U1096[23] );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[22] ))
        {
            if (l_U1189[22])
            {
                GET_GAME_TIMER( ref iVar4 );
                if (((iVar4 - l_U1220[22]) > 30000) || (sub_18885( l_U1096[22], 1, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1096[22] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1096[22] )))
                        {
                            DELETE_CHAR( ref l_U1096[22] );
                        }
                    }
                }
            }
        }
        break;
        case 10:
        if (DOES_CHAR_EXIST( l_U1096[24] ))
        {
            if (l_U1189[24])
            {
                if (sub_18885( l_U1096[24], 1, 0 ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1096[24] )))
                    {
                        DELETE_CHAR( ref l_U1096[24] );
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[25] ))
        {
            if (l_U1189[25])
            {
                if (sub_18885( l_U1096[25], 1, 0 ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1096[25] )))
                    {
                        DELETE_CHAR( ref l_U1096[25] );
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[26] ))
        {
            if (l_U1189[26])
            {
                if (sub_18885( l_U1096[26], 1, 0 ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1096[26] )))
                    {
                        DELETE_CHAR( ref l_U1096[26] );
                    }
                }
            }
        }
        break;
        case 9:
        if (DOES_CHAR_EXIST( l_U1096[27] ))
        {
            if (l_U1189[27])
            {
                if (sub_18885( l_U1096[27], 1, 0 ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1096[27] )))
                    {
                        DELETE_CHAR( ref l_U1096[27] );
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1096[28] ))
        {
            if (l_U1189[28])
            {
                if (sub_18885( l_U1096[28], 1, 0 ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U1096[28] )))
                    {
                        DELETE_CHAR( ref l_U1096[28] );
                    }
                }
            }
        }
        break;
        case 25:
        if (DOES_CHAR_EXIST( l_U1251[12] ))
        {
            DELETE_CHAR( ref l_U1251[12] );
        }
        if (DOES_CHAR_EXIST( l_U1251[13] ))
        {
            DELETE_CHAR( ref l_U1251[13] );
        }
        if (DOES_CHAR_EXIST( l_U1251[14] ))
        {
            DELETE_CHAR( ref l_U1251[14] );
        }
        if (DOES_CHAR_EXIST( l_U1251[15] ))
        {
            DELETE_CHAR( ref l_U1251[15] );
        }
        if (DOES_CHAR_EXIST( l_U1251[16] ))
        {
            DELETE_CHAR( ref l_U1251[16] );
        }
        if (DOES_CHAR_EXIST( l_U1251[0] ))
        {
            DELETE_CHAR( ref l_U1251[0] );
        }
        break;
    }
    return;
}

void sub_31427()
{
    if (NOT (IS_CHAR_DEAD( l_U1251[12] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U1251[12] );
    }
    if (NOT (IS_CHAR_DEAD( l_U1251[13] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U1251[13] );
    }
    if (NOT (IS_CHAR_DEAD( l_U1251[14] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U1251[14] );
    }
    if (NOT (IS_CHAR_DEAD( l_U1251[21] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U1251[21] );
    }
    return;
}

void sub_31867()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U976)
    {
        case 0:
        if (NOT l_U1669)
        {
            GET_CHAR_COORDINATES( sub_2446(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1407.17100000 + l_U1508._fU0, 1081.27700000 + l_U1508._fU4, 23.87270000 + l_U1508._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1413.01400000 + l_U1508._fU0, 1086.70100000 + l_U1508._fU4, 23.78140000 + l_U1508._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))) || (uVar2._fU8 > 23.00000000)) || (sub_5017()))
            {
                REQUEST_MODEL( l_U1000 );
                l_U1669 = 1;
            }
        }
        else if (HAS_MODEL_LOADED( l_U1000 ))
        {
            sub_5805( 16 );
            l_U976 = 2;
        }
        break;
        case 1: break;
        case 2:
        if (NOT l_U1513)
        {
            if (NOT (IS_CHAR_INJURED( l_U1412 )))
            {
                if (NOT l_U1476[5])
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1236.79700000, 1093.44600000, 24.79840000, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1236.89100000, 1095.73500000, 24.78530000, 1.00000000, 2.00000000, 4.00000000, 0 )))
                    {
                        STOP_PED_SPEAKING( sub_2446(), 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U1412, 1 );
                        if (DOES_BLIP_EXIST( l_U1431 ))
                        {
                            SET_ROUTE( l_U1431, 0 );
                            REMOVE_BLIP( l_U1431 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1415 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1412, ref l_U1415 );
                            CHANGE_BLIP_COLOUR( l_U1415, 3 );
                        }
                        PRINT_NOW( "GA_05", 7500, 1 );
                        l_U1476[5] = 1;
                    }
                }
                if (NOT l_U1476[14])
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1240.45400000, 1094.89700000, 24.78020000, 2.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        CLEAR_THIS_PRINT( "GA_05" );
                        OPEN_SEQUENCE_TASK( ref l_U1413 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1413 );
                        SET_CHAR_PROOFS( l_U1412, 0, 0, 0, 0, 0 );
                        FREEZE_CHAR_POSITION( l_U1412, 0 );
                        TASK_PERFORM_SEQUENCE( l_U1412, l_U1413 );
                        CLEAR_SEQUENCE_TASK( l_U1413 );
                        sub_19125( "G2_MANG", ref l_U1015, 6, 1 );
                        l_U1414 = 1;
                        l_U1476[14] = 1;
                    }
                }
                else if (NOT (sub_20684( l_U1412, 1 )))
                {
                    if (NOT (sub_20149( l_U1015 )))
                    {
                        if (NOT l_U1476[9])
                        {
                            PRINT_HELP( "GA_09" );
                            l_U1476[9] = 1;
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GA_09" )))
                        {
                            if (NOT (sub_20149( l_U1676 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2446(), l_U1412, 5.00000000, 5.00000000, 0 ))
                                {
                                    if (NOT l_U1670)
                                    {
                                        sub_19125( "G2_HANGS", ref l_U1676, 6, 1 );
                                        GET_GAME_TIMER( ref l_U1672 );
                                        l_U1670 = 1;
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U1673 );
                                        if ((l_U1673 - l_U1672) > 10000)
                                        {
                                            l_U1670 = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (sub_18885( l_U1412, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1413 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                        CLOSE_SEQUENCE_TASK( l_U1413 );
                        TASK_PERFORM_SEQUENCE( l_U1412, l_U1413 );
                        CLEAR_SEQUENCE_TASK( l_U1413 );
                    }
                }
                else if (l_U1476[9])
                {
                    CLEAR_HELP();
                    l_U1476[9] = 0;
                }
                CLEAR_SEQUENCE_TASK( l_U1413 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1412 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1412, 1 );
                OPEN_SEQUENCE_TASK( ref l_U1413 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                TASK_PLAY_ANIM( 0, "plead", "missgambetti2", 4.00000000, 1, 0, 0, 0, 0 );
                TASK_LOOK_AT_CHAR( 0, sub_2446(), -2, 0 );
                CLOSE_SEQUENCE_TASK( l_U1413 );
                if (NOT (IS_CHAR_INJURED( l_U1412 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U1412, l_U1413 );
                }
                CLEAR_SEQUENCE_TASK( l_U1413 );
                sub_15921( ref l_U1015, 0 );
                sub_19125( "G2_TARG", ref l_U1021, 6, 1 );
                l_U1476[8] = 1;
                l_U1414 = 0;
                REMOVE_BLIP( l_U1415 );
                if (sub_27018())
                {
                    sub_5805( 18 );
                }
                else if (l_U1638)
                {
                    l_U1637 = 1;
                }
                sub_5805( 19 );
                sub_5805( 7 );
                l_U976 = 3;;;
            }
            else if ((NOT l_U1476[8]) || (l_U1662))
            {
                sub_15921( ref l_U1021, 0 );
                sub_15921( ref l_U1015, 0 );
                if (NOT (DOES_CHAR_EXIST( l_U1251[5] )))
                {
                    ;
                }
                if (DOES_BLIP_EXIST( l_U1431 ))
                {
                    REMOVE_BLIP( l_U1431 );
                }
                l_U1662 = 1;
                REMOVE_BLIP( l_U1415 );
                if (sub_27018())
                {
                    sub_5805( 18 );
                }
                else if (l_U1638)
                {
                    l_U1637 = 1;
                }
                sub_5805( 19 );
                sub_5805( 7 );
                l_U976 = 3;
            }
            else if (sub_20149( l_U1021 ))
            {
                sub_15921( ref l_U1015, 0 );
                l_U1668 = sub_33521( l_U1021 );
                if (l_U1668 < 1)
                {
                    l_U1662 = 1;
                }
                else if (DOES_BLIP_EXIST( l_U1431 ))
                {
                    REMOVE_BLIP( l_U1431 );
                }
                REMOVE_BLIP( l_U1415 );
                if (sub_27018())
                {
                    sub_5805( 18 );
                }
                else if (l_U1638)
                {
                    l_U1637 = 1;
                }
                sub_5805( 19 );
                sub_5805( 7 );
                l_U976 = 3;;
                sub_15921( ref l_U1021, 0 );
            }
            if (DOES_BLIP_EXIST( l_U1415 ))
            {
                REMOVE_BLIP( l_U1415 );
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1237.70500000, 1094.80700000, 24.78000000, 1.50000000, 1.50000000, 1.50000000, 1 ))
        {
            if (DOES_BLIP_EXIST( l_U1431 ))
            {
                REMOVE_BLIP( l_U1431 );
            }
            REMOVE_BLIP( l_U1415 );
            if (sub_27018())
            {
                sub_5805( 18 );
            }
            else if (l_U1638)
            {
                l_U1637 = 1;
            }
            sub_5805( 19 );
            sub_5805( 7 );
            l_U976 = 3;
            if (DOES_BLIP_EXIST( l_U1415 ))
            {
                REMOVE_BLIP( l_U1415 );
            }
        }
        if (l_U1414)
        {
            if (NOT (IS_CHAR_INJURED( l_U1412 )))
            {
                if (sub_18885( l_U1412, 1, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1413 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                    CLOSE_SEQUENCE_TASK( l_U1413 );
                    TASK_PERFORM_SEQUENCE( l_U1412, l_U1413 );
                    CLEAR_SEQUENCE_TASK( l_U1413 );
                }
            }
        }
        break;
        case 3:
        if ((NOT (sub_20149( l_U1021 ))) || (IS_CHAR_INJURED( l_U1412 )))
        {
            if (IS_CHAR_INJURED( l_U1412 ))
            {
                if (sub_20149( l_U1021 ))
                {
                    l_U1668 = sub_33521( l_U1021 );
                    if (l_U1668 < 1)
                    {
                        sub_34168( l_U1668, "iThreatenSpeechLine...." );
                        l_U1662 = 1;
                    }
                    sub_15921( ref l_U1021, 0 );
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( l_U1412, "Missgambetti2", "plead" ))
            {
                if (NOT (sub_20149( l_U1021 )))
                {
                    if (NOT (sub_20149( l_U1682 )))
                    {
                        if (l_U1476[11])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT l_U1671)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2446(), l_U1412, 5.00000000, 5.00000000, 0 ))
                                    {
                                        sub_19125( "G2_BEGS", ref l_U1682, 6, 1 );
                                        GET_GAME_TIMER( ref l_U1674 );
                                        l_U1671 = 1;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U1675 );
                                    if ((l_U1675 - l_U1674) > 10000)
                                    {
                                        l_U1671 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U1476[11])
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT l_U1662)
                    {
                        PRINT_NOW( "GA_12", 7500, 1 );
                        if (NOT (IS_CHAR_DEAD( l_U1406 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U1407 )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U1406, ref l_U1407 );
                            }
                        }
                    }
                    else
                    {
                        PRINT_NOW( "GA_03", 7500, 1 );
                        ADD_BLIP_FOR_COORD( -1394.20000000 + l_U1508._fU0, 1081.39300000 + l_U1508._fU4, 23.78020000 + l_U1508._fU8, ref l_U1436 );
                    }
                    l_U1476[11] = 1;
                    SET_ROUTE( l_U1431, 0 );
                    SET_ROUTE( l_U1436, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U1412 )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U1412, 1 );
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_33521(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_20149( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_34168(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_34695()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U978)
    {
        case 0:
        if (l_U976 == 3)
        {
            if (NOT l_U1665)
            {
                REQUEST_MODEL( l_U1002 );
                REQUEST_CAR_RECORDING( 455 );
                l_U1665 = 1;
            }
            else if ((HAS_MODEL_LOADED( l_U1002 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 455 )))
            {
                sub_5805( 20 );
                FORCE_WEATHER( 1 );
                l_U978 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            if ((((sub_34899()) || ((sub_35246()) AND (IS_CHAR_ON_SCREEN( l_U1406 )))) || (sub_16282( l_U1406, sub_2446() ))) || (sub_20684( l_U1406, 0 )))
            {
                if (DOES_CHAR_EXIST( l_U1412 ))
                {
                    DELETE_CHAR( ref l_U1412 );
                }
                if (DOES_BLIP_EXIST( l_U1436 ))
                {
                    REMOVE_BLIP( l_U1436 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1000 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1412 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1001 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U998 );
                OPEN_SEQUENCE_TASK( ref l_U1408 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                CLOSE_SEQUENCE_TASK( l_U1408 );
                if (NOT (IS_CHAR_INJURED( l_U1406 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                    CLEAR_SEQUENCE_TASK( l_U1408 );
                }
                if (NOT (IS_CAR_DEAD( l_U1437 )))
                {
                    ;
                }
                l_U978 = 2;
            }
        }
        break;
        case 2:
        if (NOT l_U1409)
        {
            GET_GAME_VIEWPORT_ID( ref l_U1511 );
            if (NOT (IS_CHAR_INJURED( l_U1406 )))
            {
                GET_CHAR_COORDINATES( l_U1406, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( l_U1511, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000 ))
                {
                    UNLOCK_RAGDOLL( l_U1406, 0 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 64323, 1096, 25, 0, 0.00000000 );
                    OPEN_SEQUENCE_TASK( ref l_U1408 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, -1209.83100000, 1095.44100000, 16.78010000, 3, -2 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, -1206.52600000, 1095.16100000, 17.76450000, 3, -2 );
                    CLOSE_SEQUENCE_TASK( l_U1408 );
                    sub_19125( "G2_CHASE", ref l_U1027, 6, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U1406 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                    }
                    SET_CHAR_IS_TARGET_PRIORITY( l_U1406, 1 );
                    CLEAR_SEQUENCE_TASK( l_U1408 );
                    if (NOT (DOES_BLIP_EXIST( l_U1407 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U1406, ref l_U1407 );
                    }
                    CHANGE_BLIP_COLOUR( l_U1407, 1 );
                    PRINT_NOW( "GA_12", 7500, 1 );
                    l_U1409 = 1;
                    SET_WANTED_MULTIPLIER( 1.00000000 );
                    sub_5805( 26 );
                    l_U978 = 4;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            l_U978 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            if (NOT l_U1661)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U1406, -1204.03700000, 1094.96700000, 17.72790000, 10.00000000, 10.00000000, 1.50000000, 0 ))
                {
                    SET_CHAR_COORDINATES( l_U1406, -1204.03700000, 1094.96700000, 17.72790000 );
                    CLEAR_CHAR_TASKS( l_U1406 );
                    l_U1661 = 1;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1214.74000000, 1093.93200000, 24.78520000, 2.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    SET_CHAR_COORDINATES( l_U1406, -1204.03700000, 1094.96700000, 17.72790000 );
                    CLEAR_CHAR_TASKS( l_U1406 );
                    l_U1661 = 1;
                }
            }
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1212.16000000, 1095.42700000, 24.68900000, 1.50000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1406, -1206.90500000, 1094.75300000, 17.78010000, 3.00000000, 3.00000000, 1.00000000, 0 )))
            {
                GET_GAME_TIMER( ref l_U1663 );
                SET_ALL_RANDOM_PEDS_FLEE( sub_2681(), 0 );
                l_U1660 = 1;
                SET_NEXT_DESIRED_MOVE_STATE( 3 );
                OPEN_SEQUENCE_TASK( ref l_U1408 );
                if (NOT l_U1666)
                {
                    if ((NOT (IS_CAR_DEAD( l_U1437 ))) AND (sub_36406( l_U1437 )))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U1437, -2 );
                    }
                    else if ((NOT (IS_CAR_DEAD( l_U1086 ))) AND (sub_36406( l_U1086 )))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U1086, -2 );
                        l_U1437 = l_U1086;
                    }
                    else
                    {
                        TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2446(), 500.00000000, 999999, 0, 0, 0, 100.00000000 );
                        l_U1647 = 1;
                    }
                }
                else
                {
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2446(), 500.00000000, 999999, 0, 0, 0, 100.00000000 );
                    l_U1647 = 1;
                }
                CLOSE_SEQUENCE_TASK( l_U1408 );
                if (NOT (IS_CHAR_DEAD( l_U1406 )))
                {
                    SET_CHAR_PROOFS( l_U1406, 0, 0, 0, 0, 0 );
                    TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                }
                CLEAR_SEQUENCE_TASK( l_U1408 );
                l_U978 = 5;
            }
        }
        break;
        case 5:
        if (NOT l_U1647)
        {
            if (NOT (IS_CAR_DEAD( l_U1437 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1406 )))
                {
                    if (IS_CHAR_IN_CAR( l_U1406, l_U1437 ))
                    {
                        UNLOCK_RAGDOLL( l_U1406, 1 );
                        sub_15921( ref l_U1027, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U1408 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U1437, -1252.32700000, 1066.58600000, 18.56160000, 20.00000000, 0, 1376298265, 2, 4.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1408 );
                        if (NOT (IS_CHAR_INJURED( l_U1406 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U1408 );
                        SET_CHAR_PROOFS( l_U1406, 0, 0, 0, 0, 0 );
                        SET_CHAR_HEALTH( l_U1406, 200 );
                        l_U974 = 7;
                        l_U978 = 6;
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1664 );
                        if ((l_U1664 - l_U1663) > 20000)
                        {
                            SET_CHAR_PROOFS( l_U1406, 0, 0, 0, 0, 0 );
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U1406 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1408 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2446(), 500.00000000, 999999, 0, 0, 0, 100.00000000 );
                l_U1647 = 1;
                CLOSE_SEQUENCE_TASK( l_U1408 );
                TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                CLEAR_SEQUENCE_TASK( l_U1408 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            UNLOCK_RAGDOLL( l_U1406, 1 );
        }
        l_U974 = 7;
        l_U978 = 6;;
        break;
        break;
        case 6: break;
    }
    if (l_U1660)
    {
        if (IS_CHAR_DEAD( l_U1406 ))
        {
            if (DOES_BLIP_EXIST( l_U1438 ))
            {
                REMOVE_BLIP( l_U1438 );
            }
            if (DOES_BLIP_EXIST( l_U1407 ))
            {
                REMOVE_BLIP( l_U1407 );
            }
            WAIT( 2000 );
            sub_37368();
        }
    }
    return;
}

int sub_34899()
{
    if (((IS_BULLET_IN_AREA( -1213.74600000, 1094.93600000, 23.78050000, 3.00000000, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1218.63500000, 1076.64200000, 24.78530000, 2.00000000, 4.00000000, 2.00000000, 0 ))) AND (l_U1044))
    {
        sub_21685( "IS_PLAYER_SHOOTING_THROUGH_DOOR returning TRUE" );
        return 1;
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1218.63500000, 1076.64200000, 24.78530000, 2.00000000, 4.00000000, 2.00000000, 0 )))
    {
        sub_21685( "Not locate" );
    }
    if (NOT (IS_BULLET_IN_AREA( -1213.74600000, 1094.93600000, 23.78050000, 3.00000000, 1 )))
    {
        sub_21685( "Not shooting in area" );
    }
    sub_21685( "IS_PLAYER_SHOOTING_THROUGH_DOOR returning false" );
    return 0;
}

void sub_35246()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2446(), -1216.39700000, 1079.60300000, 24.78510000, 2.00000000, 2.00000000, 1.00000000, 0 ))
    {
        l_U1639 = 1;
    }
    return l_U1639;
}

int sub_36406(unknown uParam0)
{
    if (IS_CAR_DEAD( uParam0 ))
    {
        return 0;
    }
    else if (NOT (IS_VEH_DRIVEABLE( uParam0 )))
    {
        return 0;
    }
    else if (NOT (LOCATE_CAR_3D( uParam0, -1205.03200000, 1082.27600000, 17.78600000, 6.50000000, 16.00000000, 2.00000000, 0 )))
    {
        return 0;
    }
    SET_NEEDS_TO_BE_HOTWIRED( uParam0, 0 );
    SET_CAR_ENGINE_ON( uParam0, 1, 1 );;
    return 1;
}

void sub_37368()
{
    sub_37377();
    CLEAR_WANTED_LEVEL( sub_2681() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    sub_49009( 20, "G2_CALLP", "G2AUD", 0 );
    sub_49599( 4050, 3 );
    sub_2420();
    return;
}

void sub_37377()
{
    sub_37386();
    return;
}

void sub_37386()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_37404();
    sub_37463( iVar2, iVar3, iVar4 );
    return;
}

void sub_37404()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_37463(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 21;
    sub_37496( iVar5, uParam0, uParam1, uParam2, "Contact_25" );
    return;
}

void sub_37496(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_37592( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_37592( ref cVar9 );
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
            sub_37592( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_37592( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_37592( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_37592( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_38169( iParam0, iVar7 );;;
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
                sub_38566( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_38566( 0, 4 );
            }
        }
    }
    if (NOT (sub_38655( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2681() );
    }
    sub_1518();
    bVar27 = true;
    uVar28 = sub_38169( iParam0, iVar7 );
    uVar29 = sub_975( iParam0 );
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
                sub_48031( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_48461();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_48546( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_48603( iParam0 );
                sub_48642( 0 );
                sub_1416( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_48750();
        }
    }
    if (bParam2)
    {
        sub_48461();
        sub_48838();
        sub_48642( 0 );
    }
    if (bParam3)
    {
        sub_48461();
        sub_48878();
        sub_48642( 0 );
        sub_1416( uVar29, 0 );
    }
    sub_862();
    return;
}

void sub_37592(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_38169(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1374( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_38566(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_38655(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_38863( uParam1 );
        break;
        case 1:
        bVar8 = sub_40941( uParam1 );
        break;
        case 2:
        bVar8 = sub_41167( uParam1 );
        break;
        case 3:
        bVar8 = sub_41317( uParam1 );
        break;
        case 4:
        bVar8 = sub_41595( uParam1 );
        break;
        case 5:
        bVar8 = sub_41898( uParam1 );
        break;
        case 6:
        bVar8 = sub_42097( uParam1 );
        break;
        case 7:
        bVar8 = sub_42323( uParam1 );
        break;
        case 8:
        bVar8 = sub_42558( uParam1 );
        break;
        case 9:
        bVar8 = sub_42933( uParam1 );
        break;
        case 10:
        bVar8 = sub_43180( uParam1 );
        break;
        case 11:
        bVar8 = sub_43319( uParam1 );
        break;
        case 12:
        bVar8 = sub_43618( uParam1 );
        break;
        case 13:
        bVar8 = sub_43846( uParam1 );
        break;
        case 14:
        bVar8 = sub_44133( uParam1 );
        break;
        case 15:
        bVar8 = sub_44415( uParam1 );
        break;
        case 16:
        bVar8 = sub_44697( uParam1 );
        break;
        case 17:
        bVar8 = sub_44898( uParam1 );
        break;
        case 18:
        bVar8 = sub_44971( uParam1 );
        break;
        case 19:
        bVar8 = sub_45185( uParam1 );
        break;
        case 20:
        bVar8 = sub_45438( uParam1 );
        break;
        case 21:
        bVar8 = sub_45685( uParam1 );
        break;
        case 22:
        bVar8 = sub_45886( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_40546( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_38169( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_46209( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_38863(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_39142( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_39142( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_39142( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_39142( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_39142( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_39142( iVar3, 0, 3, 1, 0, 0 );
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
        sub_39142( iVar3, 0, sub_40424(), sub_40690(), 0, 0 );
        break;
        default:
        sub_40849( "Friend 1", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Friend 1", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_39142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_39153( uParam1 );
    sub_39327( uParam0, 0, uParam2 );
    sub_39327( uParam0, 1, uParam3 );
    sub_39327( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_37404();
    return;
}

void sub_39153(unknown uParam0)
{
    ADD_SCORE( sub_2681(), uParam0 );
    sub_39178( uParam0 );
    return;
}

void sub_39178(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1374( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_39327(unknown uParam0, int iParam1, int iParam2)
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
        sub_39484( uParam0 );
    }
    return;
}

void sub_39484(unknown uParam0)
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

int sub_40424()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_40546( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_40546(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_40690()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_40546( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_40849(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_40941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 2", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 2", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41167(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_40849( "Girl 3", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Girl 3", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41317(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_39142( iVar3, 0, sub_40424(), sub_40690(), 0, 0 );
        break;
        default:
        sub_40849( "Friend 4", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Friend 4", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41595(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 5", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 5", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41898(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 7", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 7", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42097(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 7b", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 7b", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42323(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_39142( iVar3, 0, sub_40424(), sub_40690(), 0, 0 );
        break;
        default:
        sub_40849( "Friend 8", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Friend 8", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42558(unknown uParam0)
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
        sub_39142( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_39142( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_39142( iVar3, 0, sub_40424(), sub_40690(), 0, 0 );
        break;
        default:
        sub_40849( "Friend 9", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Friend 9", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42933(unknown uParam0)
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
        sub_39142( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_39142( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_39142( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_40849( "Contact 10", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_40849( "Contact 10", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43180(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_40849( "Girl 11", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Girl 11", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43319(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_40849( "Contact 12", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 12", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43618(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 13", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 13", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43846(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_39142( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_39142( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_39142( iVar3, 0, sub_40424(), sub_40690(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_40849( "Friend 15", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Friend 15", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44133(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 16", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 16", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44415(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39142( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_40849( "Contact 18", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 18", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44697(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 19", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 19", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44898(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_40849( "Girl 20", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44971(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_40849( "Contact 21", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 21", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45185(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39142( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_40849( "Contact 22", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 22", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45438(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_39142( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39142( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39142( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_40849( "Contact 24", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 24", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45685(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39142( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39142( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39142( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_40849( "Contact 25", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_40849( "Contact 25", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45886(unknown uParam0)
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
        sub_39142( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_40849( "Girl 26", 1 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_40849( "Girl 26", 0 );
        sub_39142( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_46209(int iParam0, int iParam1)
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
    if (sub_46257( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_46988( iParam1 );
    }
    return;
}

int sub_46257(int iParam0, int iParam1)
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
            sub_46397( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_46397(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_46579( 0 );
    return;
}

void sub_46579(boolean bParam0)
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
        sub_46834();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_46834()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_46988(int iParam0)
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
        sub_47321( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_47321( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_47321( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_47321( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_47321( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_47321( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_47321( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_47321( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_47321( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_47321( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_47321( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_47321( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_47321( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_47321( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_47321( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_47321( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_47321( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_47321( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_47321( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_47321(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_48031(unknown uParam0, unknown uParam1)
{
    sub_48050( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_48050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_48461()
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

int sub_48546(int iParam0, int iParam1)
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

void sub_48603(unknown uParam0)
{
    sub_761();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_48642(unknown uParam0)
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

void sub_48750()
{
    sub_48759();
    return;
}

void sub_48759()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_48838()
{
    sub_48759();
    return;
}

void sub_48878()
{
    sub_48759();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_49009(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_49053( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_49053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_49599(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_49678()
{
    vector vVar2;
    vector vVar5;

    switch (l_U979)
    {
        case 0:
        if (l_U976 == 3)
        {
            if (NOT l_U1667)
            {
                REQUEST_MODEL( -622222821 );
                REQUEST_MODEL( l_U1003 );
                REQUEST_MODEL( l_U1004 );
                l_U1667 = 1;
            }
            else if (((HAS_MODEL_LOADED( -622222821 )) AND (HAS_MODEL_LOADED( l_U1003 ))) AND (HAS_MODEL_LOADED( l_U1004 )))
            {
                sub_5805( 21 );
                l_U979 = 1;
            }
        }
        break;
        case 1:
        vVar2 = {0.07500000, 0.02800000, 0.12500000};
        vVar5 = {1.50000000, 0.00000000, 0.50000000};
        OPEN_SEQUENCE_TASK( ref l_U1419[0] );
        TASK_PLAY_ANIM( 0, "VEG_CHOP", "missgambetti2", 8.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U1419[0] );
        if (NOT (IS_CHAR_INJURED( l_U1416[0] )))
        {
            ;
        }
        CLEAR_SEQUENCE_TASK( l_U1419[0] );
        GET_INTERIOR_AT_COORDS( -1394.32300000 + l_U1508._fU0, 1080.94100000 + l_U1508._fU4, 24.78020000 + l_U1508._fU8, ref l_U1507 );
        OPEN_SEQUENCE_TASK( ref l_U1419[1] );
        TASK_PLAY_ANIM( 0, "CLEAVE", "missgambetti2", 8.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U1419[1] );
        if (NOT (IS_CHAR_INJURED( l_U1416[1] )))
        {
            TASK_PERFORM_SEQUENCE( l_U1416[1], l_U1419[1] );
            SET_CHAR_HEALTH( l_U1416[1], 150 );
        }
        CLEAR_SEQUENCE_TASK( l_U1419[1] );
        l_U979 = 2;
        break;
        case 2:
        if (l_U1044)
        {
            if (NOT (IS_CHAR_DEAD( l_U1406 )))
            {
                if (NOT l_U1422[1])
                {
                    if (NOT (IS_CHAR_INJURED( l_U1416[1] )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U1416[1] ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1419[1] );
                            TASK_COWER( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1215.24800000, 1090.96300000, 23.78020000, 3, -2, 0.50000000 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "duck_cower", "missgambetti2", 8.00000000, 0, 0, 0, 1, 0 );
                            CLOSE_SEQUENCE_TASK( l_U1419[1] );
                            TASK_PERFORM_SEQUENCE( l_U1416[1], l_U1419[1] );
                            CLEAR_SEQUENCE_TASK( l_U1419[1] );
                            l_U1422[1] = 1;
                        }
                    }
                }
                if (NOT l_U1422[0])
                {
                    if (NOT (IS_CHAR_INJURED( l_U1416[0] )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U1416[0] ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1419[0] );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2446() );
                            TASK_PLAY_ANIM( 0, "TELL_OFF", "missgambetti2", 8.00000000, 1, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U1419[0] );
                            TASK_PERFORM_SEQUENCE( l_U1416[0], l_U1419[0] );
                            CLEAR_SEQUENCE_TASK( l_U1419[0] );
                            l_U1422[0] = 1;
                            l_U979 = 3;
                        }
                    }
                }
            }
        }
        break;
        case 3:
        GET_INTERIOR_FROM_CHAR( sub_2446(), ref l_U1507 );
        if (l_U1507 != nil)
        {
            if (sub_18885( l_U1416[0], 1, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U1419[0] );
                TASK_PLAY_ANIM( 0, "TELL_OFF", "missgambetti2", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U1419[0] );
                if (NOT (IS_CHAR_INJURED( l_U1416[0] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U1416[0], l_U1419[0] );
                }
                CLEAR_SEQUENCE_TASK( l_U1419[0] );
            }
            sub_50860( ref l_U1416[0] );
        }
        else
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( -622222821 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1416[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1416[1] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1003 );
            l_U979 = 4;
        }
        break;
        case 4: break;
    }
    return;
}

void sub_50860(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
        {
            GET_CHAR_COORDINATES( sub_2446(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( (uParam0^), ref vVar3.x, ref vVar3.y, ref vVar3.z );
            uVar9 = {vVar6 - vVar3};
            GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref uVar12 );
            SET_CHAR_HEADING( (uParam0^), uVar12 );
        }
    }
    return;
}

void sub_51078()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    switch (l_U977)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            if ((IS_CHAR_IN_ANY_CAR( l_U1406 )) AND (NOT l_U1647))
            {
                sub_21685( "In car!" );
                if (NOT (IS_CAR_DEAD( l_U1437 )))
                {
                    if (sub_18885( l_U1406, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1408 );
                        TASK_CAR_DRIVE_WANDER( 0, l_U1437, 16.00000000, 3 );
                        CLOSE_SEQUENCE_TASK( l_U1408 );
                        l_U1409 = 0;
                        l_U1427 = 16.00000000;
                        if (NOT (IS_CHAR_INJURED( l_U1406 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U1408 );
                        OPEN_SEQUENCE_TASK( ref l_U1411 );
                        TASK_DRIVE_BY( 0, sub_2446(), 0, 0.00000000, 0.00000000, 0.00000000, 70.00000000, 8, 1, 40 );
                        CLOSE_SEQUENCE_TASK( l_U1411 );
                        if (NOT (IS_CHAR_INJURED( l_U1410 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U1410 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1410, l_U1411 );
                            }
                        }
                        CLEAR_SEQUENCE_TASK( l_U1411 );
                        l_U977 = 1;
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1406 )))
                    {
                        GET_CHAR_COORDINATES( l_U1406, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        fVar5 = sub_51504( sub_2446(), uVar2 );
                        if (fVar5 > 100.00000000)
                        {
                            if (l_U1427 != 0.20000000)
                            {
                                l_U1427 = 0.20000000;
                                SET_PLAYBACK_SPEED( l_U1437, l_U1427 );
                            }
                        }
                        else if (fVar5 > 40.00000000)
                        {
                            if (l_U1427 != 0.60000000)
                            {
                                l_U1427 = 0.60000000;
                                SET_PLAYBACK_SPEED( l_U1437, l_U1427 );
                            }
                        }
                        else if (fVar5 > 0.00000000)
                        {
                            if (l_U1427 != 0.85000000)
                            {
                                l_U1427 = 0.85000000;
                                SET_PLAYBACK_SPEED( l_U1437, l_U1427 );
                            }
                        };;;
                    }
                }
            }
            else
            {
                sub_21685( "Not In car!" );
                l_U977 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U1043)
        {
            GET_INTERIOR_FROM_CHAR( sub_2446(), ref l_U1507 );
            if (l_U1507 == nil)
            {
                sub_29024( 28 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U999 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2446(), 0 );
                l_U1043 = 1;
            }
        }
        else if (NOT l_U1649)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_G2" );
                l_U1649 = 1;
            }
        }
        if (NOT l_U1647)
        {
            if (NOT (IS_CAR_DEAD( l_U1437 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U1406 )))
                {
                    if ((NOT (IS_CHAR_IN_CAR( l_U1406, l_U1437 ))) || (NOT (IS_VEH_DRIVEABLE( l_U1437 ))))
                    {
                        if (NOT l_U1409)
                        {
                            SET_CHAR_DECISION_MAKER( l_U1406, l_U1010 );
                            SET_COMBAT_DECISION_MAKER( l_U1406, l_U1009 );
                            SET_CURRENT_CHAR_WEAPON( l_U1406, 13, 0 );
                            if (DOES_BLIP_EXIST( l_U1438 ))
                            {
                                REMOVE_BLIP( l_U1438 );
                                if (NOT (DOES_BLIP_EXIST( l_U1407 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U1406, ref l_U1407 );
                                }
                                CHANGE_BLIP_COLOUR( l_U1407, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U1408 );
                            if (IS_CHAR_IN_ANY_CAR( l_U1406 ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                            TASK_COMBAT( 0, sub_2446() );
                            CLOSE_SEQUENCE_TASK( l_U1408 );
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                            CLEAR_SEQUENCE_TASK( l_U1408 );
                            l_U1409 = 1;
                        }
                        if (NOT l_U1651)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U1410 )))
                            {
                                CLEAR_CHAR_TASKS( l_U1410 );
                                SET_CHAR_DECISION_MAKER( l_U1410, l_U1010 );
                                SET_COMBAT_DECISION_MAKER( l_U1410, l_U1006 );
                                SET_CURRENT_CHAR_WEAPON( l_U1410, 7, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U1408 );
                                if (IS_CHAR_IN_ANY_CAR( l_U1406 ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                TASK_COMBAT( 0, sub_2446() );
                                CLOSE_SEQUENCE_TASK( l_U1408 );
                                TASK_PERFORM_SEQUENCE( l_U1410, l_U1408 );
                                CLEAR_SEQUENCE_TASK( l_U1408 );
                                l_U1651 = 1;
                            }
                        }
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( l_U1406, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        fVar5 = sub_51504( sub_2446(), uVar2 );
                        if (fVar5 > 500)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U1406 )))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U1406 )))
                                {
                                    sub_52545( 1 );
                                }
                            }
                        }
                        else if (fVar5 > 70.00000000)
                        {
                            if (l_U1427 != 8.00000000)
                            {
                                l_U1427 = 8.00000000;
                                OPEN_SEQUENCE_TASK( ref l_U1408 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                                CLOSE_SEQUENCE_TASK( l_U1408 );
                                if (NOT (IS_CHAR_INJURED( l_U1406 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U1408 );
                            }
                        }
                        else if (fVar5 > 40.00000000)
                        {
                            if (l_U1427 != 12.00000000)
                            {
                                l_U1427 = 12.00000000;
                                OPEN_SEQUENCE_TASK( ref l_U1408 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                                CLOSE_SEQUENCE_TASK( l_U1408 );
                                if (NOT (IS_CHAR_INJURED( l_U1406 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U1408 );
                            }
                        }
                        else if (fVar5 > 0.00000000)
                        {
                            if (l_U1427 != 30.00000000)
                            {
                                l_U1427 = 30.00000000;
                                OPEN_SEQUENCE_TASK( ref l_U1408 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                                CLOSE_SEQUENCE_TASK( l_U1408 );
                                if (NOT (IS_CHAR_INJURED( l_U1406 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U1408 );
                            }
                        };;;;
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U1406 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U1406 )))
            {
                if (sub_18885( l_U1406, 1, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1408 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2446(), 500.00000000, 999999, 0, 0, 0, 100.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1408 );
                    if (NOT (IS_CHAR_INJURED( l_U1406 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U1408 );
                }
                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1406, sub_2446(), 10.00000000, 10.00000000, 0 ))
                {
                    if (NOT (sub_20149( l_U1654 )))
                    {
                        if (NOT l_U1648)
                        {
                            sub_19125( "G2_KBEGS", ref l_U1654, 6, 1 );
                            GET_GAME_TIMER( ref l_U1652 );
                            l_U1648 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U1653 );
                            if ((l_U1653 - l_U1652) > 10000)
                            {
                                sub_19125( "G2_KBEGS", ref l_U1654, 6, 1 );
                                GET_GAME_TIMER( ref l_U1652 );
                            }
                        }
                    }
                }
            }
            else if (NOT l_U1650)
            {
                if (NOT (IS_CHAR_DEAD( l_U1406 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U1406 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1406, ref l_U1437 );
                        l_U1650 = 1;
                    }
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U1437 )))
            {
                GET_CHAR_COORDINATES( l_U1406, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                fVar5 = sub_51504( sub_2446(), uVar2 );
                if (fVar5 > 500)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1406 )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1406 )))
                        {
                            sub_52545( 1 );
                        }
                    }
                }
                else if (fVar5 > 70.00000000)
                {
                    if (l_U1427 != 8.00000000)
                    {
                        l_U1427 = 8.00000000;
                        OPEN_SEQUENCE_TASK( ref l_U1408 );
                        TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                        CLOSE_SEQUENCE_TASK( l_U1408 );
                        if (NOT (IS_CHAR_INJURED( l_U1406 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U1408 );
                    }
                }
                else if (fVar5 > 40.00000000)
                {
                    if (l_U1427 != 12.00000000)
                    {
                        l_U1427 = 12.00000000;
                        OPEN_SEQUENCE_TASK( ref l_U1408 );
                        TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                        CLOSE_SEQUENCE_TASK( l_U1408 );
                        if (NOT (IS_CHAR_INJURED( l_U1406 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U1408 );
                    }
                }
                else if (fVar5 > 0.00000000)
                {
                    if (l_U1427 != 30.00000000)
                    {
                        l_U1427 = 30.00000000;
                        OPEN_SEQUENCE_TASK( ref l_U1408 );
                        TASK_CAR_DRIVE_WANDER( 0, l_U1437, l_U1427, 3 );
                        CLOSE_SEQUENCE_TASK( l_U1408 );
                        if (NOT (IS_CHAR_INJURED( l_U1406 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1406, l_U1408 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U1408 );
                    }
                };;;;
            };;;
        }
        break;
        case 2: break;
    }
    if (IS_CHAR_DEAD( l_U1406 ))
    {
        if (DOES_BLIP_EXIST( l_U1438 ))
        {
            REMOVE_BLIP( l_U1438 );
        }
        if (DOES_BLIP_EXIST( l_U1407 ))
        {
            REMOVE_BLIP( l_U1407 );
        }
        WAIT( 2000 );
        sub_37368();
    }
    if (NOT (IS_CHAR_DEAD( l_U1406 )))
    {
        GET_CHAR_COORDINATES( l_U1406, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        sub_54420( ref l_U1406 );
    }
    if (NOT l_U1650)
    {
        if (l_U1647)
        {
            if (NOT (IS_CHAR_DEAD( l_U1406 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U1406 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1406, ref l_U1437 );
                }
            }
        }
    }
    return;
}

float sub_51504(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result );
        return Result;
    }
    return -1.00000000;
}

void sub_52545(unknown uParam0)
{
    sub_52555( 0 );
    sub_52695();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
        SAY_AMBIENT_SPEECH( sub_2446(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    switch (uParam0)
    {
        case 0: break;
        case 1:
        PRINT_NOW( "GA_20", 7000, 1 );
        sub_49009( 20, "G2_CALLF", "G2AUD", 0 );
        break;
    }
    sub_2420();
    return;
}

void sub_52555(unknown uParam0)
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

void sub_52695()
{
    sub_52704();
    return;
}

void sub_52704()
{
    int iVar2;

    iVar2 = 21;
    sub_52718( iVar2 );
    sub_1509( iVar2 );
    return;
}

void sub_52718(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
    CLEAR_HELP();
    sub_333( uParam0 );
    return;
}

void sub_54420(unknown uParam0)
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
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2446() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_54588())) AND (iVar3 != 4))
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

int sub_54588()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_55188()
{
    switch (l_U1721)
    {
        case 0:
        REQUEST_MODEL( l_U1000 );
        while (NOT (HAS_MODEL_LOADED( l_U1000 )))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( 26, l_U1000, -1204.69800000, 1090.44200000, 17.78010000, ref l_U1719, 1 );
        SET_CHAR_PROOFS( l_U1719, 1, 1, 1, 1, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1719 )))
        {
            if (NOT (IS_CAR_DEAD( l_U1437 )))
            {
                ;
            }
        }
        l_U1721++;
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U1719 )))
        {
            if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2681(), l_U1719 ))
            {
                SCRIPT_ASSERT( "Aiming" );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 8 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1719 )))
            {
                SET_CHAR_PROOFS( l_U1719, 0, 0, 0, 0, 0 );
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 7 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1093 )))
            {
                SAY_AMBIENT_SPEECH( l_U1093, "MOVE_IN", 1, 1, 0 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1719 )))
        {
            if (IS_BULLET_IN_AREA( -1213.74600000, 1094.93600000, 23.78050000, 3.00000000, 1 ))
            {
                SCRIPT_ASSERT( "Attacked!" );
            }
        }
        break;
    }
    return;
}

void sub_55700(int iParam0)
{
    vector vVar3;
    vector vVar6;
    float fVar9;

    if (NOT (DOES_OBJECT_EXIST( iParam0->_fU24 )))
    {
        ;
    }
    else if (IS_CHAR_TOUCHING_OBJECT( sub_2446(), iParam0->_fU24 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( iParam0->_fU24, 0.00000000, 1.00000000, 0.00000000, ref vVar3.x, ref vVar3.y, ref vVar3.z );
        vVar3 = {vVar3 - iParam0->_fU0};
        GET_CHAR_COORDINATES( sub_2446(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        vVar6 = {vVar6 - iParam0->_fU0};
        sub_55845( vVar3, vVar6, ref fVar9 );
        if (fVar9 < 0.00000000)
        {
            iParam0->_fU16 -= 2.00000000;
        }
        else
        {
            iParam0->_fU16 += 2.00000000;
        }
    }
    iParam0->_fU16 *= 0.94000000;
    iParam0->_fU12 += iParam0->_fU16;
    if (iParam0->_fU12 > 90.00000000)
    {
        iParam0->_fU12 = 90.00000000;
        iParam0->_fU16 = -0.40000000 * (ABSF( iParam0->_fU16 ));
    }
    else if (iParam0->_fU12 < -90.00000000)
    {
        iParam0->_fU12 = -90.00000000;
        iParam0->_fU16 = 0.40000000 * (ABSF( iParam0->_fU16 ));
    }
    SET_OBJECT_COORDINATES( iParam0->_fU24, ref iParam0->_fU0->_fU0, ref iParam0->_fU0->_fU4, ref iParam0->_fU0->_fU8 );
    SET_OBJECT_HEADING( iParam0->_fU24, iParam0->_fU20 + iParam0->_fU12 );;
    return;
}

void sub_55845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    (uParam6^) = ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
    return;
}
