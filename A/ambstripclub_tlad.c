void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U110 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    l_U220 = 0;
    l_U227 = 0;
    l_U264 = 0;
    l_U267 = 1;
    l_U298 = {-0.47300000, 0.86300000, -1.00000000};
    l_U302 = 0;
    l_U311 = 0;
    l_U326 = 4;
    l_U332 = nil;
    l_U376 = 897868981;
    l_U378 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 0;
    l_U390 = 0;
    l_U391 = 1;
    l_U392 = 0;
    l_U394 = 5;
    l_U395 = 42.00000000;
    l_U396 = 30.00000000;
    l_U415 = 0;
    l_U438 = 0;
    l_U440 = 0;
    l_U441 = 1113677074;
    l_U442 = 1353709999;
    l_U444 = 0;
    l_U445 = 0;
    ProtectedSet(l_U446, 50);
    l_U472 = {0.00000000, 2.00000000, 0.00000000};
    l_U475 = "MISSSTRIPCLUB";
    l_U491 = 0;
    l_U492 = 3.00000000;
    l_U498 = 0;
    l_U499 = 0;
    l_U507 = 0;
    l_U268 = {l_U508._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_584();
    }
    sub_2564( "" );
    sub_2721( 0, sub_2670(), "JOHNNY", 0 );
    g_U10441 = 0;
    g_U10440 = 0;
    sub_1666( "Strip Club Script Launched" );
    PRINTNL();
    GET_WEAPONTYPE_MODEL( 7, ref l_U377 );
    if (sub_2931())
    {
        l_U228 = 1;
    }
    else
    {
        sub_3029();
        l_U228 = 0;
    }
    if (g_U12303)
    {
        if (sub_3139())
        {
            l_U391 = 0;
        }
        if (NOT (sub_3173( 9 )))
        {
            l_U391 = 0;
            l_U441 = 1113677074;
            l_U442 = 1113677074;
            l_U475 = "MISSSTRIPCLUBLO";
        }
    }
    else
    {
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U268, 25.00000000, 20 );
    }
    REQUEST_MODEL( l_U441 );
    REQUEST_MODEL( l_U442 );
    REQUEST_ANIMS( l_U475 );
    sub_3746();
    if (l_U391)
    {
        sub_7036();
    }
    sub_13267();
    sub_13871();
    while (true)
    {
        WAIT( 0 );
        if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) AND (g_U10461))
        {
            if (l_U391)
            {
                sub_7036();
            }
            if (sub_13940( sub_2670() ))
            {
                ;
            }
            if (sub_7414( sub_2670() ))
            {
                if (NOT l_U264)
                {
                    if (NOT g_U11108)
                    {
                        g_U11108 = 1;
                        l_U264 = 1;
                    }
                }
                if (NOT sub_14075())
                {
                    if (NOT l_U391)
                    {
                        if (NOT g_U10442)
                        {
                            PRINT_HELP( "STR_WEA" );
                            g_U10442 = 1;
                        }
                    }
                }
                sub_3029();
                switch (l_U220)
                {
                    case 0:
                    if (l_U385 == 1)
                    {
                        if (l_U228 == 0)
                        {
                            sub_14213();
                        }
                        if (l_U391)
                        {
                            sub_14580();
                        }
                        sub_15062();
                        l_U220 = 1;
                    }
                    else
                    {
                        sub_15241();
                    }
                    break;
                    case 1:
                    sub_15736();
                    if (sub_15951())
                    {
                        ;
                    }
                    if (g_U10440)
                    {
                        if (NOT g_U10441)
                        {
                            for ( l_U363 = 0; l_U363 < 4; l_U363++ )
                            {
                                if ((NOT (IS_CHAR_DEAD( l_U271[l_U363] ))) AND (NOT (IS_CHAR_DEAD( sub_2670() ))))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U271[l_U363], sub_2670(), 0 ))
                                    {
                                        g_U10441 = 1;
                                    }
                                }
                            }
                        }
                    }
                    sub_16859();
                    if ((g_U10441 == 0) AND (g_U10440 == 0))
                    {
                        if (l_U391)
                        {
                            sub_17611();
                            if (NOT l_U302)
                            {
                                if (NOT l_U444)
                                {
                                    if (NOT sub_7363())
                                    {
                                        if (l_U227 != 2)
                                        {
                                            if (NOT sub_9587())
                                            {
                                                sub_1666( "IF NOT isAnyoneGrouped()" );
                                                sub_17800();
                                                if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT_G" ))))
                                                {
                                                    for ( l_U307 = 0; l_U307 < l_U326; l_U307++ )
                                                    {
                                                        sub_18538( l_U271[l_U307], ref l_U222[l_U307], l_U307 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (l_U311)
                            {
                                GET_GAME_TIMER( ref l_U309 );
                                l_U308 = l_U309 - l_U310;
                                if (l_U308 > 20000)
                                {
                                    if (l_U228 == 0)
                                    {
                                        if (NOT (sub_25599( sub_2670() )))
                                        {
                                            l_U302 = 0;
                                            l_U311 = 0;
                                        }
                                    }
                                    else if (NOT (IS_CHAR_DEAD( l_U271[3] )))
                                    {
                                        if (NOT (IS_CHAR_ON_SCREEN( l_U271[3] )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), l_U271[3], 12.00000000, 12.00000000, 12.00000000, 0 )))
                                            {
                                                l_U302 = 0;
                                                l_U311 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U310 );
                                l_U311 = 1;
                            }
                        }
                    }
                    else
                    {
                        for ( l_U307 = 0; l_U307 < l_U326; l_U307++ )
                        {
                            if (l_U222[l_U307] == 2)
                            {
                                sub_18538( l_U271[l_U307], ref l_U222[l_U307], l_U307 );
                            }
                        }
                        if (NOT l_U386)
                        {
                            if (l_U228 == 0)
                            {
                                sub_16124();
                            }
                            sub_37813();
                            l_U386 = 1;
                        }
                    }
                    break;
                    case 2: break;
                }
            }
            else if (l_U264)
            {
                if (g_U11108)
                {
                    g_U11108 = 0;
                    l_U264 = 0;
                }
            }
        }
        else
        {
            sub_1666( "Strip Club Script Killed" );
            PRINTNL();
            sub_584();
        }
    }
    return;
}

void sub_584()
{
    for ( l_U363 = 0; l_U363 < 4; l_U363++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U271[l_U363] )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U271[l_U363] )))
            {
                DELETE_CHAR( ref l_U271[l_U363] );
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U443 ))
    {
        REMOVE_BLIP( l_U443 );
    }
    if (NOT (IS_CHAR_DEAD( l_U337 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U337 )))
        {
            DELETE_CHAR( ref l_U337 );
        }
    }
    sub_785( l_U501[0], l_U500 );
    sub_785( l_U501[1], l_U500 );
    sub_785( l_U501[2], l_U500 );
    GET_PLAYER_GROUP( sub_1055(), ref l_U469 );
    GET_GROUP_SIZE( l_U469, ref l_U470, ref l_U415 );
    if (sub_1213() > -1)
    {
        if (l_U415 > 0)
        {
            if (l_U227 == 2)
            {
                if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                }
                if (g_U10441)
                {
                    sub_1514( 1 );
                    sub_1666( "Minigames_Store_Result(MGR_PLAYER_LOST)\n" );
                }
                else if (sub_1688())
                {
                    sub_1514( 0 );
                    sub_1666( "Minigames_Store_Result(MGR_PLAYER_WON)\n" );
                }
                else
                {
                    sub_1514( 3 );
                    sub_1666( "Minigames_Store_Result(MGR_GAME_ABANDONED)\n" );
                }
                sub_1873();
            }
        }
        else if (((l_U227 == 1) || (l_U227 == 4)) || (l_U227 == 2))
        {
            if (NOT (IS_CHAR_DEAD( l_U332 )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U332, 0 );
                if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                }
                sub_1514( 7 );
                sub_1873();
            }
        }
    }
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U364 + l_U370};
    l_U373 = {l_U364 + l_U373};
    SWITCH_PED_PATHS_ON( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U367 + l_U370};
    l_U373 = {l_U367 + l_U373};
    SWITCH_PED_PATHS_ON( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U457 + l_U370};
    l_U373 = {l_U457 + l_U373};
    SWITCH_PED_PATHS_ON( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_785(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_1006();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1055(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_1006()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1055()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1213()
{
    return sub_1229( g_U26739._fU0 );
}

int sub_1229(unknown uParam0)
{
    switch (uParam0)
    {
        case 19:
        return -1;
        break;
        case 0:
        return 101;
        break;
        case 1:
        return 102;
        break;
        case 2:
        return 103;
        break;
        case 3:
        return 104;
        break;
        case 4:
        return 105;
        break;
        case 5:
        return 106;
        break;
        case 6:
        return 107;
        break;
        case 7:
        return 108;
        break;
        case 8:
        return 109;
        break;
    }
    return -1;
}

void sub_1514(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_1571( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

int sub_1571(unknown uParam0)
{
    return 0;
}

void sub_1666(unknown uParam0)
{
    return;
}

int sub_1688()
{
    if (NOT l_U444)
    {
        if (l_U499)
        {
            return 1;
        }
        if (TIMERB() > 120000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1873()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_1924();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_1924()
{
    g_U26737._fU4 = 1;
    return;
}

void sub_2564(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_2581();
    return;
}

void sub_2581()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_2670()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2721(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2801( "\n PED NUMBER ", uParam0 );
    sub_2841( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2801(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2841(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2931()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_2670() )))
    {
        GET_CHAR_COORDINATES( sub_2670(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3029()
{
    if (l_U228 == 0)
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1195.00000000, 1707.00000000, 18.00000000, 1.50000000, -1628879836 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, 1195, 1707, 18, 1, 0.00000000 );
        }
    }
    return;
}

void sub_3139()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_3173(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_3202( iParam0 ))
    {
        return 0;
    }
    if (sub_1571( g_U26739._fU0 ))
    {
        if (NOT (sub_3280( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

int sub_3202(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3280(unknown uParam0, unknown uParam1)
{
    return 1;
}

void sub_3746()
{
    switch (l_U228)
    {
        case 0:
        l_U447[0] = {1180.16300000, 1679.14700000, 17.72700000};
        l_U447[1] = {1173.68200000, 1672.63700000, 17.72700000};
        l_U447[2] = {1173.38100000, 1691.63700000, 17.72700000};
        l_U457 = {1185.65100000, 1684.30900000, 16.47830000};
        l_U364 = {1197.58000000, 1702.07000000, 17.72180000};
        l_U367 = {1145.34600000, 1671.12000000, 16.72180000};
        l_U370 = {-1.00000000, -1.00000000, -1.00000000};
        l_U373 = {1.00000000, 1.00000000, 1.00000000};
        l_U355 = {1189.05600000, 1705.30300000, 16.72200000};
        l_U358 = 62.49600000;
        l_U351 = {1189.89400000, 1706.11100000, 16.72200000};
        l_U354 = 228.73000000;
        l_U318 = {1152.07800000, 1669.39400000, 15.72190000};
        l_U321 = {1151.24500000, 1670.57900000, 15.72190000};
        l_U324 = 0.00000000;
        l_U325 = 225.00000000;
        l_U315 = {1154.25000000, 1679.68000000, 16.72000000};
        l_U312 = {1151.08100000, 1671.17100000, 15.72200000};
        l_U222[0] = 0;
        l_U222[1] = 0;
        l_U222[2] = 0;
        l_U276[0] = {1167.19700000, 1676.84600000, 16.72180000};
        l_U289[0] = 356.21450000;
        l_U276[1] = {1180.76600000, 1687.84700000, 16.72180000};
        l_U289[1] = 38.64410000;
        l_U276[2] = {1183.06100000, 1703.52800000, 17.72180000};
        l_U289[2] = 352.55900000;
        l_U276[3] = {1151.08100000, 1671.17100000, 15.72200000};
        l_U289[3] = 61.23440000;
        l_U295 = {1150.81800000, 1673.28200000, 15.72200000};
        l_U301 = 196.28860000;
        l_U231[0] = {1152.10100000, 1670.17000000, 16.67738000};
        l_U231[1] = {1153.17200000, 1670.06500000, 16.95117000};
        l_U247[1] = {-3.80520100, -0.00000000, 90.80816000};
        l_U231[2] = {1152.33600000, 1672.31600000, 16.88453000};
        l_U247[2] = {-6.59464600, 0.00000000, 158.46100000};
        l_U231[3] = {1149.14700000, 1669.57300000, 17.07823000};
        l_U247[3] = {-12.05484000, -0.00000000, -82.70051000};
        l_U231[4] = {1148.47200000, 1670.09200000, 16.76314000};
        l_U247[4] = {-1.33915700, -0.00000000, -81.57669000};
        l_U341[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U341[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U348[0] = 152.75620000;
        l_U348[1] = 250.23200000;
        l_U398 = {1188.80000000, 1700.70000000, 17.60000000};
        CLEAR_AREA( l_U398._fU0, l_U398._fU4, l_U398._fU8, 1.50000000, 0 );
        l_U401[0] = {1176.32200000, 1698.27500000, 16.81840000};
        CLEAR_AREA( l_U401[0]._fU0, l_U401[0]._fU4, l_U401[0]._fU8, 1.50000000, 0 );
        l_U401[1] = {1181.31700000, 1696.76800000, 16.79990000};
        l_U408[0] = {1178.08500000, 1684.57100000, 16.72180000};
        CLEAR_AREA( l_U408[0]._fU0, l_U408[0]._fU4, l_U408[0]._fU8, 1.50000000, 0 );
        l_U408[1] = {1175.34200000, 1694.96700000, 16.72170000};
        l_U416 = "clammainroom";
        l_U417 = "clampalbkrm";
        l_U418 = "clamfronrm";
        l_U419 = "clammainroom";
        l_U439 = -899568022;
        l_U376 = 676448572;
        l_U476 = "Lap_Triangle_A3_Niko";
        l_U477 = "Lap_Triangle_A3_Woman";
        l_U481 = "Lap_Triangle_B3_Niko";
        l_U482 = "Lap_Triangle_B3_Woman";
        l_U486 = "Triangle_A3-B3_trans";
        l_U478 = {0.00000000, 0.74000000, -1.00000000};
        l_U483 = {0.00000000, 0.74000000, -1.00000000};
        l_U488 = "LAP_DANCE_RICK_JAMES";
        l_U489 = "LAP_DANCE_GOLDFRAPP";
        l_U490 = "LAP_DANCE_MYSTIKAL";
        break;
        case 1:
        l_U364 = {-1572.62400000, 26.34700000, 10.02240000};
        l_U367 = {-1579.22500000, 26.59560000, 10.01530000};
        l_U370 = {-1.00000000, -1.00000000, -1.00000000};
        l_U373 = {1.00000000, 1.00000000, 1.00000000};
        l_U351 = {-1560.29500000, 8.82050000, 9.01030000};
        l_U354 = 180.18490000;
        l_U355 = {-1564.93400000, 8.36510000, 9.01030000};
        l_U358 = 180.06740000;
        l_U318 = {-1577.16500000, 1.66590000, 10.01440000};
        l_U321 = {-1590.08000000, 20.25870000, 14.26110000};
        l_U324 = -1.00000000;
        l_U325 = 106.16730000;
        l_U315 = {-1581.22100000, 4.60320000, 10.01530000};
        l_U312 = {-1578.59300000, 1.97130000, 9.00980000};
        l_U222[0] = 0;
        l_U222[1] = 0;
        l_U222[2] = 0;
        l_U276[0] = {-1582.78200000, 6.90790000, 9.01030000};
        l_U289[0] = 332.54820000;
        l_U276[1] = {-1580.88700000, 16.83490000, 9.01030000};
        l_U289[1] = 253.12520000;
        l_U276[2] = {-1555.15200000, 14.23790000, 9.01030000};
        l_U289[2] = 30.05350000;
        l_U276[3] = {-1578.59300000, 1.97130000, 9.00980000};
        l_U289[3] = 72.13210000;
        l_U295 = {-1581.28300000, 0.35200000, 9.01040000};
        l_U301 = 272.20340000;
        l_U231[0] = {-1576.65200000, 1.51454000, 9.95776400};
        l_U231[1] = {-1578.41800000, 2.94477700, 10.20165000};
        l_U247[1] = {-12.60450000, -0.00000100, -140.51600000};
        l_U231[2] = {-1576.27000000, 1.04640600, 10.27578000};
        l_U247[2] = {-3.11567400, -0.00000000, 61.38813000};
        l_U231[3] = {-1581.77200000, 1.40416400, 9.51403800};
        l_U247[3] = {-1.02756000, -0.00000000, -92.76884000};
        l_U231[4] = {-1580.33900000, 3.43333000, 10.32023000};
        l_U247[4] = {-2.86955500, 0.00000000, -121.08700000};
        l_U341[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U341[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U348[0] = 152.75620000;
        l_U348[1] = 250.23200000;
        l_U398 = {-1579.16900000, 7.63900000, 9.01030000};
        CLEAR_AREA( l_U398._fU0, l_U398._fU4, l_U398._fU8, 1.50000000, 0 );
        l_U401[0] = {-1581.79600000, 13.02000000, 9.01030000};
        CLEAR_AREA( l_U401[0]._fU0, l_U401[0]._fU4, l_U401[0]._fU8, 1.50000000, 0 );
        l_U401[1] = {-1581.64800000, 10.04290000, 9.01030000};
        l_U408[0] = {-1578.19900000, 11.47120000, 9.01030000};
        CLEAR_AREA( l_U408[0]._fU0, l_U408[0]._fU4, l_U408[0]._fU8, 1.50000000, 0 );
        l_U408[1] = {-1578.19900000, 11.47120000, 9.01030000};
        l_U416 = "Bada_room1";
        l_U417 = "Bada-Private";
        l_U418 = "Bada_room2";
        l_U419 = "Bada_room1a";
        l_U439 = -899568022;
        l_U376 = 897868981;
        l_U476 = "Lap_Honkerz_A2_Niko";
        l_U477 = "Lap_Honkerz_A2_Woman";
        l_U481 = "Lap_Honkerz_B1_Niko";
        l_U482 = "Lap_Honkerz_B1_Woman";
        l_U486 = "Honkerz_A2-B1_trans";
        l_U478 = {0.00000000, 0.74000000, -1.00000000};
        l_U483 = {0.00000000, 0.74000000, -1.00000000};
        l_U488 = "LAP_DANCE_MYSTIKAL";
        l_U489 = "LAP_DANCE_RICK_JAMES";
        l_U490 = "LAP_DANCE_GOLDFRAPP";
        break;
    }
    l_U370 = {-1.00000000, -1.00000000, -3.00000000};
    l_U373 = {1.00000000, 1.00000000, 3.00000000};
    l_U370 = {l_U364 + l_U370};
    l_U373 = {l_U364 + l_U373};
    SWITCH_PED_PATHS_OFF( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    l_U370 = {-1.00000000, -1.00000000, -3.00000000};
    l_U373 = {1.00000000, 1.00000000, 3.00000000};
    l_U370 = {l_U367 + l_U370};
    l_U373 = {l_U367 + l_U373};
    SWITCH_PED_PATHS_OFF( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    l_U370 = {-1.00000000, -1.00000000, -3.00000000};
    l_U373 = {1.00000000, 1.00000000, 3.00000000};
    l_U370 = {l_U457 + l_U370};
    l_U373 = {l_U457 + l_U373};
    SWITCH_PED_PATHS_OFF( l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
    return;
}

void sub_7036()
{
    unknown uVar2;

    switch (l_U227)
    {
        case 0:
        if (sub_7089())
        {
            if ((g_U10441 == 0) AND (g_U10440 == 0))
            {
                if (NOT sub_7363())
                {
                    if (sub_7414( sub_2670() ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U332 )))
                        {
                            SETTIMERB( 0 );
                            sub_7608();
                            sub_1666( "--------------------------------------> Strip Club Grabbed Ped\n" );
                            sub_7847();
                            SAY_AMBIENT_SPEECH( l_U332, "STRIP_DO_OWN_THING", 1, 1, 2 );
                            DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_HELP( "STR_ENJ" );
                            }
                            sub_8062();
                            sub_8285();
                            sub_8901();
                            sub_9084();
                            l_U227 = 1;
                        }
                    }
                }
            }
            else if (sub_7414( sub_2670() ))
            {
                SETTIMERB( 0 );
                sub_7608();
                PRINT_NOW( "STR_LEAVE", 7500, 1 );
                l_U227 = 2;
            }
        }
        break;
        case 1:
        sub_9407();
        sub_12299();
        sub_8285();
        sub_8901();
        sub_9084();
        break;
        case 2:
        if (sub_12473( l_U332 ))
        {
            if ((NOT (sub_7414( l_U332 ))) AND (NOT (sub_7414( sub_2670() ))))
            {
                sub_584();
            }
            if (g_U10441)
            {
                if (NOT (sub_13014( l_U332 )))
                {
                    if (NOT l_U505)
                    {
                        SAY_AMBIENT_SPEECH( l_U332, "GET_OUT_OF_HERE", 1, 1, 2 );
                    }
                    l_U505 = 1;
                }
            }
            else if (NOT l_U505)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2670() )))
                {
                    SAY_AMBIENT_SPEECH( l_U332, "STRIP_LEAVE_AGREE", 1, 1, 2 );
                    l_U505 = 1;
                }
            }
        }
        sub_12299();
        break;
        case 4:
        sub_1666( "CASE friendIsGirlfriend\n" );
        sub_9407();
        sub_12299();
        sub_8285();
        break;
    }
    return;
}

int sub_7089()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        l_U328[I] = sub_7112( I );
        if (l_U328[I] != nil)
        {
            l_U501[I] = 5;
            if (l_U332 == nil)
            {
                l_U332 = l_U328[I];
            }
        }
    }
    if (l_U332 != nil)
    {
        return 1;
    }
    return 0;
}

void sub_7112(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_7363()
{
    if (IS_CHAR_ARMED( sub_2670(), 7 ))
    {
        return 1;
    }
    return 0;
}

int sub_7414(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        if ((((iVar3 == (GET_HASH_KEY( l_U416 ))) || (iVar3 == (GET_HASH_KEY( l_U417 )))) || (iVar3 == (GET_HASH_KEY( l_U418 )))) || (iVar3 == (GET_HASH_KEY( l_U419 ))))
        {
            if (NOT l_U497)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( uParam0, 1 );
                l_U497 = 1;
            }
            return 1;
        }
        else if (l_U497)
        {
            l_U497 = 0;
        }
    }
    return 0;
}

void sub_7608()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_7677();
        }
        return;
    }
    g_U12303 = 1;
    sub_7743();
    return;
}

void sub_7677()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_7743()
{
    g_U26737._fU4 = 0;
    return;
}

void sub_7847()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U328[I] )))
        {
            ADD_BLIP_FOR_CHAR( l_U328[I], ref l_U333[I] );
            SET_BLIP_AS_FRIENDLY( l_U333[I], 1 );
            CHANGE_BLIP_SCALE( l_U333[I], 0.60000000 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U328[I], 1 );
        }
    }
    return;
}

void sub_8062()
{
    CLEAR_AREA( l_U401[0]._fU0, l_U401[0]._fU4, l_U401[0]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U401[1]._fU0, l_U401[1]._fU4, l_U401[1]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U398._fU0, l_U398._fU4, l_U398._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U408[0]._fU0, l_U408[0]._fU4, l_U408[0]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U408[1]._fU0, l_U408[1]._fU4, l_U408[1]._fU8, 2.50000000, 0 );
    return;
}

void sub_8285()
{
    if (NOT (IS_CHAR_INJURED( l_U328[0] )))
    {
        if (IS_CHAR_MALE( l_U328[0] ))
        {
            if (l_U228 == 0)
            {
                if (DOES_SCENARIO_EXIST_IN_AREA( l_U401[0], l_U492, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U328[0], 118, ref l_U384 );
                    if (l_U384 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[0], l_U401[0], l_U492 );
                    }
                }
                else if (DOES_SCENARIO_EXIST_IN_AREA( l_U401[1], l_U492, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U328[0], 118, ref l_U384 );
                    if (l_U384 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[0], l_U401[1], l_U492 );
                    }
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U328[0], 118, ref l_U384 );
                if (l_U384 == 7)
                {
                    if (DOES_SCENARIO_EXIST_IN_AREA( l_U401[0], l_U492, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[0], l_U401[0], l_U492 );
                    }
                    else if (DOES_SCENARIO_EXIST_IN_AREA( l_U408[0], l_U492, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[0], l_U408[0], l_U492 );
                    }
                }
            }
        }
        else if (IS_SITTING_OBJECT_NEAR( l_U401[0], 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U328[0], 112, ref l_U384 );
            if (l_U384 == 7)
            {
                REMOVE_CHAR_FROM_GROUP( l_U328[0] );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U328[0], 0, 2, l_U401[0], 0, 0, -2, 0 );
            }
            else if (IS_CHAR_SITTING_IDLE( l_U328[0] ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U328[0] ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U328[0], "AMB@DEFAULT", "CAFE_F_EMPTY_DEFAULT", 1 );
                }
            }
        }
    }
    return;
}

void sub_8901()
{
    if (NOT (IS_CHAR_INJURED( l_U328[1] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U328[1], 118, ref l_U384 );
        if (l_U384 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U398, l_U492, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[1], l_U398, l_U492 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U408[0], l_U492, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[1], l_U408[0], l_U492 );
            }
        }
    }
    return;
}

void sub_9084()
{
    if (NOT (IS_CHAR_INJURED( l_U328[2] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U328[2], 118, ref l_U384 );
        if (l_U384 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U408[0], l_U492, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[2], l_U408[0], l_U492 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U408[1], l_U492, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[2], l_U408[1], l_U492 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U401[0], l_U492, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U328[2], l_U401[0], l_U492 );
            };;;
        }
    }
    return;
}

void sub_9407()
{
    int I;

    sub_1666( "leaveStripClub()\n" );
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U328[I] )))
        {
            if (IS_CHAR_MALE( l_U328[I] ))
            {
                l_U500 = "SC_AC_CT";
            }
            else
            {
                l_U500 = "SC_AC_CT_G";
            }
            sub_1666( "IF NOT IS_CHAR_INJURED(leadFriend)\n" );
            if (sub_9578())
            {
                if (NOT l_U505)
                {
                    TASK_LOOK_AT_CHAR( l_U328[I], sub_2670(), 3000, 0 );
                    SAY_AMBIENT_SPEECH( l_U328[I], "GREET_JOHNNY", 1, 0, 2 );
                    l_U505 = 1;
                }
                sub_1666( "IF isPlayerAbleToAddressPed()\n" );
                if (sub_10584( l_U501[I], 0 ))
                {
                    if (sub_10882( l_U501[I], l_U500, 0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U328[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U328[0] );
                            if (NOT (IS_GROUP_MEMBER( l_U328[0], l_U469 )))
                            {
                                SET_GROUP_MEMBER( l_U469, l_U328[0] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U328[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U328[1] );
                            if (NOT (IS_GROUP_MEMBER( l_U328[1], l_U469 )))
                            {
                                SET_GROUP_MEMBER( l_U469, l_U328[1] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U328[2] )))
                        {
                            CLEAR_CHAR_TASKS( l_U328[2] );
                            if (NOT (IS_GROUP_MEMBER( l_U328[2], l_U469 )))
                            {
                                SET_GROUP_MEMBER( l_U469, l_U328[2] );
                            }
                        }
                        SAY_AMBIENT_SPEECH( sub_2670(), "STRIP_ASK_TO_LEAVE", 1, 1, 2 );
                        l_U505 = 0;
                        if (DOES_BLIP_EXIST( l_U333[0] ))
                        {
                            REMOVE_BLIP( l_U333[0] );
                        }
                        if (DOES_BLIP_EXIST( l_U333[1] ))
                        {
                            REMOVE_BLIP( l_U333[1] );
                        }
                        if (DOES_BLIP_EXIST( l_U333[2] ))
                        {
                            REMOVE_BLIP( l_U333[2] );
                        }
                        l_U227 = 2;
                        sub_785( l_U501[I], l_U500 );
                    }
                }
                else
                {
                    sub_785( l_U501[I], l_U500 );
                }
            }
            else if (l_U505)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2670(), l_U328[I], 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U328[I], "STRIP_ENJOYING_SELF", 1, 1, 2 );
                    l_U505 = 0;
                }
            }
            sub_1666( "IF NOT isPlayerAbleToAddressPed()\n" );
            sub_785( l_U501[I], l_U500 );
            if (g_U10441)
            {
                if (DOES_BLIP_EXIST( l_U333[0] ))
                {
                    REMOVE_BLIP( l_U333[0] );
                }
                if (DOES_BLIP_EXIST( l_U333[1] ))
                {
                    REMOVE_BLIP( l_U333[1] );
                }
                if (DOES_BLIP_EXIST( l_U333[2] ))
                {
                    REMOVE_BLIP( l_U333[2] );
                }
                SAY_AMBIENT_SPEECH( l_U328[I], "GET_OUT_OF_HERE", 1, 1, 2 );
                PRINT_NOW( "STR_LEAVE", 7500, 1 );
                l_U227 = 2;
            }
        }
    }
    return;
}

int sub_9578()
{
    vector vVar2;
    vector vVar5;
    int I;

    if (NOT sub_9587())
    {
        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1055() ))
        {
            for ( I = 0; I < 3; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U328[I] )))
                {
                    if ((IS_PLAYER_SCRIPT_CONTROL_ON( sub_1055() )) AND (sub_9978( ref l_U328[I] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2670(), l_U328[I], 3.00000000, 3.00000000, 2.00000000, 0 ))
                        {
                            GET_CHAR_COORDINATES( sub_2670(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
                            GET_CHAR_COORDINATES( l_U328[I], ref vVar5.x, ref vVar5.y, ref vVar5.z );
                            l_U359 = {vVar5 - vVar2};
                            GET_HEADING_FROM_VECTOR_2D( l_U359._fU0, l_U359._fU4, ref l_U362 );
                            if (sub_10237( l_U362, 75.00000000 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_9587()
{
    GET_PLAYER_GROUP( sub_1055(), ref l_U469 );
    if (sub_9612())
    {
        if (l_U227 == 2)
        {
            return 1;
        }
    }
    else
    {
        GET_GROUP_SIZE( l_U469, ref l_U470, ref l_U415 );
        if (l_U415 > 0)
        {
            PRINTSTRING( "isAnyoneGrouped() iGrpSize > 0 ***" );
            PRINTNL();
            return 1;
        }
        if (sub_9802())
        {
            if ((NOT g_U11117[0]) || (NOT g_U11117[1]))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_9612()
{
    if (((NOT (IS_CHAR_INJURED( l_U328[1] ))) || (NOT (IS_CHAR_INJURED( l_U328[2] )))) || (NOT (IS_CHAR_INJURED( l_U328[0] ))))
    {
        return 1;
    }
    return 0;
}

int sub_9802()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_9978(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
        {
            GET_CHAR_SPEED( (uParam0^), ref fVar3 );
            if (fVar3 < 0.05000000)
            {
                if (l_U498 > 50)
                {
                    return 1;
                }
                l_U498++;
            }
            else
            {
                l_U498 = 0;
            }
        }
    }
    return 0;
}

int sub_10237(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2670() )))
    {
        GET_CHAR_HEADING( sub_2670(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
        if (fVar5 >= 360.00000000)
        {
            fVar5 -= 360.00000000;
        }
        if (fVar5 > fVar6)
        {
            if ((fVar4 < fVar5) AND (fVar4 > fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar4 < fVar5) || (fVar4 > fVar6))
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

int sub_10584(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_1055() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1055() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_10680())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2670() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_10765())
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

int sub_10680()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_10765()
{
    return sub_10776( 0, 0 );
}

int sub_10776(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_10882(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_10584( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1055(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_11157();
                l_U3 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_11157()
{
    return sub_10776( 1, 1 );
}

void sub_12299()
{
    if (IS_CHAR_DEAD( l_U332 ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U332, sub_2670(), 0 ))
        {
            sub_1514( 5 );
        }
        else
        {
            sub_1514( 4 );
        }
        if (DOES_BLIP_EXIST( l_U443 ))
        {
            REMOVE_BLIP( l_U443 );
        }
        sub_1873();
        l_U227 = 3;
    }
    else if (IS_CHAR_INJURED( l_U332 ))
    {
        SET_CHAR_HEALTH( l_U332, 0 );
    }
    return;
}

int sub_12473(unknown uParam0)
{
    GET_PLAYER_GROUP( sub_1055(), ref l_U469 );
    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        if (IS_GROUP_MEMBER( uParam0, l_U469 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2670(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U443 ))
                {
                    REMOVE_BLIP( l_U443 );
                }
                return 1;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U443 )))
        {
            ADD_BLIP_FOR_CHAR( uParam0, ref l_U443 );
            SET_BLIP_AS_FRIENDLY( l_U443, 1 );
            if ((NOT g_U10441) AND (NOT g_U10440))
            {
                if (sub_1213() == 0)
                {
                    PRINT_NOW( "STR_ROM", 7500, 1 );
                }
                else if (sub_1213() == 1)
                {
                    PRINT_NOW( "STR_PAC", 7500, 1 );
                }
                else if (sub_1213() == 2)
                {
                    PRINT_NOW( "STR_JAC", 7500, 1 );
                }
                else if (sub_1213() == 3)
                {
                    PRINT_NOW( "STR_BRU", 7500, 1 );
                }
                else if (sub_1213() == 4)
                {
                    PRINT_NOW( "STR_DWA", 7500, 1 );
                }
                else
                {
                    PRINT_NOW( "STR_ANY", 7500, 1 );
                };;;;;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2670(), uParam0, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            SET_GROUP_MEMBER( l_U469, uParam0 );
        }
    }
    return 0;
}

int sub_13014(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U416 )))
    {
        return 1;
    }
    return 0;
}

void sub_13267()
{
    l_U370 = {-3.00000000, -3.00000000, -3.00000000};
    l_U373 = {3.00000000, 3.00000000, 3.00000000};
    l_U370 = {l_U318 + l_U370};
    l_U373 = {l_U318 + l_U373};
    l_U370 = {-3.00000000, -3.00000000, -3.00000000};
    l_U373 = {3.00000000, 3.00000000, 3.00000000};
    l_U370 = {l_U341[0] + l_U370};
    l_U373 = {l_U341[0] + l_U373};
    CLEAR_AREA( l_U318._fU0, l_U318._fU4, l_U318._fU8, 3.00000000, 0 );
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U398 + l_U370};
    l_U373 = {l_U398 + l_U373};
    CLEAR_AREA( l_U398._fU0, l_U398._fU4, l_U398._fU8, 1.00000000, 0 );
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U401[1] + l_U370};
    l_U373 = {l_U401[1] + l_U373};
    CLEAR_AREA( l_U401[1]._fU0, l_U401[1]._fU4, l_U401[1]._fU8, 1.00000000, 0 );
    l_U370 = {-1.00000000, -1.00000000, -1.00000000};
    l_U373 = {1.00000000, 1.00000000, 1.00000000};
    l_U370 = {l_U408[0] + l_U370};
    l_U373 = {l_U408[0] + l_U373};
    CLEAR_AREA( l_U408[0]._fU0, l_U408[0]._fU4, l_U408[0]._fU8, 1.00000000, 0 );
    return;
}

void sub_13871()
{
    return;
}

int sub_13940(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U418 )))
    {
        if (l_U228 == 0)
        {
            if (NOT l_U388)
            {
                l_U388 = 1;
            }
        }
        return 1;
    }
    return 0;
}

void sub_14075()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_14213()
{
    for ( l_U363 = 0; l_U363 < 2; l_U363++ )
    {
        CREATE_CHAR( 5, sub_14241(), l_U341[l_U363]._fU0, l_U341[l_U363]._fU4, l_U341[l_U363]._fU8, ref l_U338[l_U363], 1 );
        SET_CHAR_RELATIONSHIP( l_U338[l_U363], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U338[l_U363], 1, 4 );
        SET_CHAR_HEADING( l_U338[l_U363], l_U348[l_U363] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U338[l_U363] );
        SET_CHAR_NEVER_TARGETTED( l_U338[l_U363], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U338[l_U363], l_U419 );
    }
    return;
}

void sub_14241()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = 2;
    if (g_U12303)
    {
        if (NOT (sub_3173( 9 )))
        {
            iVar4 = 1;
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref uVar3 );
    switch (uVar3)
    {
        case 0:
        Result = 1113677074;
        break;
        case 1:
        Result = 1353709999;
        break;
    }
    return Result;
}

void sub_14580()
{
    for ( l_U363 = 0; l_U363 < l_U326; l_U363++ )
    {
        CREATE_CHAR( 5, sub_14241(), l_U276[l_U363]._fU0, l_U276[l_U363]._fU4, l_U276[l_U363]._fU8, ref l_U271[l_U363], 1 );
        SET_CHAR_RELATIONSHIP( l_U271[l_U363], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U271[l_U363], 1, 4 );
        SET_CHAR_HEADING( l_U271[l_U363], l_U289[l_U363] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U271[l_U363] );
        SET_CHAR_NEVER_TARGETTED( l_U271[l_U363], 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U271[l_U363], 1 );
        if (IS_CHAR_MODEL( l_U271[l_U363], 1113677074 ))
        {
            sub_2721( 1, l_U271[l_U363], "STRIPPER_1", 0 );
            SET_AMBIENT_VOICE_NAME( l_U271[l_U363], "STRIPPER_1" );
        }
        else
        {
            sub_2721( 2, l_U271[l_U363], "STRIPPER_2", 0 );
            SET_AMBIENT_VOICE_NAME( l_U271[l_U363], "STRIPPER_2" );
        }
        if (l_U363 < 3)
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U271[l_U363], l_U416 );
        }
        else
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U271[l_U363], l_U417 );
        }
    }
    return;
}

void sub_15062()
{
    unknown uVar2;

    CREATE_CHAR( 4, l_U376, l_U355._fU0, l_U355._fU4, l_U355._fU8, ref l_U337, 1 );
    SET_CHAR_RELATIONSHIP( l_U337, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U337, 4 );
    SET_CHAR_HEADING( l_U337, l_U358 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U337 );
    SET_CHAR_NEVER_TARGETTED( l_U337, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U337, l_U416 );
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U337, 0 );
    SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U337, 1 );
    return;
}

void sub_15241()
{
    if (l_U228 == 0)
    {
        REQUEST_MODEL( l_U441 );
        REQUEST_MODEL( l_U442 );
        REQUEST_MODEL( l_U376 );
        REQUEST_ANIMS( l_U475 );
        if ((((HAS_MODEL_LOADED( l_U441 )) AND (HAS_MODEL_LOADED( l_U442 ))) AND (HAS_MODEL_LOADED( l_U376 ))) AND (HAVE_ANIMS_LOADED( l_U475 )))
        {
            l_U385 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U441 );
            REQUEST_MODEL( l_U442 );
            REQUEST_MODEL( l_U376 );
            REQUEST_ANIMS( l_U475 );
        }
    }
    else if (l_U228 == 1)
    {
        l_U460[0] = 1063816580;
        l_U460[1] = 807236245;
        REQUEST_MODEL( l_U460[0] );
        REQUEST_MODEL( l_U460[1] );
        REQUEST_MODEL( l_U441 );
        REQUEST_MODEL( l_U442 );
        REQUEST_MODEL( l_U376 );
        REQUEST_ANIMS( l_U475 );
        if ((((((HAS_MODEL_LOADED( l_U441 )) AND (HAS_MODEL_LOADED( l_U442 ))) AND (HAS_MODEL_LOADED( l_U376 ))) AND (HAS_MODEL_LOADED( l_U460[0] ))) AND (HAS_MODEL_LOADED( l_U460[1] ))) AND (HAVE_ANIMS_LOADED( l_U475 )))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U460[0] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U460[1] );
            l_U385 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U441 );
            REQUEST_MODEL( l_U442 );
            REQUEST_MODEL( l_U376 );
            REQUEST_ANIMS( l_U475 );
        }
    }
    return;
}

void sub_15736()
{
    if (l_U306)
    {
        sub_1666( "bPlayerGrabbed = TRUE\n" );
    }
    else
    {
        sub_1666( "bPlayerGrabbed = FALSE\n" );
    }
    if (l_U302)
    {
        sub_1666( "bPlayerHadDance = TRUE\n" );
    }
    else
    {
        sub_1666( "bPlayerHadDance = FALSE\n" );
    }
    sub_2801( "iTotalDancers = ", l_U326 );
    sub_1666( " *****\n" );
    return;
}

int sub_15951()
{
    l_U370 = {-20.00000000, -20.00000000, -20.00000000};
    l_U373 = {20.00000000, 20.00000000, 20.00000000};
    l_U370 = {l_U268 + l_U370};
    l_U373 = {l_U268 + l_U373};
    if (l_U228 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2670(), l_U341[0]._fU0, l_U341[0]._fU4, l_U341[0]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            g_U10441 = 1;
            sub_16124();
            return 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2670(), l_U447[0]._fU0, l_U447[0]._fU4, l_U447[0]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U10440 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2670(), l_U447[1]._fU0, l_U447[1]._fU4, l_U447[1]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U10440 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2670(), l_U447[2]._fU0, l_U447[2]._fU4, l_U447[2]._fU8, 3.00000000, 3.00000000, 0.50000000, 0 ))
    {
        g_U10440 = 1;
        return 1;
    }
    if (g_U10441)
    {
        return 1;
    }
    for ( l_U363 = 0; l_U363 < l_U326; l_U363++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U271[l_U363] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U271[l_U363], sub_2670(), 0 ))
            {
                g_U10441 = 1;
                return 1;
            }
        }
    }
    if ((IS_CHAR_SHOOTING( sub_2670() )) || (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U370, l_U373, 0 )))
    {
        g_U10441 = 1;
        return 1;
    }
    return 0;
}

void sub_16124()
{
    for ( l_U363 = 0; l_U363 < 2; l_U363++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U338[l_U363] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U338[l_U363], 24, ref l_U384 );
            if (l_U384 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U338[l_U363], 2, 0 );
                TASK_SMART_FLEE_POINT( l_U338[l_U363], l_U341[l_U363]._fU0, l_U341[l_U363]._fU4, l_U341[l_U363]._fU8, 100.00000000, -1 );
            }
        }
    }
    return;
}

void sub_16859()
{
    if (NOT (IS_CHAR_INJURED( l_U337 )))
    {
        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U337, sub_2670(), 0 )))
        {
            if (g_U10441)
            {
                GET_SCRIPT_TASK_STATUS( l_U337, 6, ref l_U384 );
                if (l_U384 == 7)
                {
                    TASK_COWER( l_U337 );
                }
            }
            GET_SCRIPT_TASK_STATUS( l_U337, 29, ref l_U384 );
            if (l_U384 == 7)
            {
                sub_16995( l_U337 );
            }
        }
        else if (g_U10441 == 0)
        {
            GET_SCRIPT_TASK_STATUS( l_U337, 6, ref l_U384 );
            if (l_U384 == 7)
            {
                TASK_COWER( l_U337 );
            }
            g_U10441 = 1;
        }
    }
    return;
}

void sub_16995(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_17006( 0, 1 );
    if (iVar3 == 0)
    {
        l_U221 = 0;
        sub_17056( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U221 = 2;
        sub_17056( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U221 = 2;
        sub_17056( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U221 = 0;
        sub_17056( uParam0 );
    };;;;
    return;
}

void sub_17006(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_17056(unknown uParam0)
{
    switch (l_U221)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U393 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U351._fU0, l_U351._fU4, l_U351._fU8, 2, 50000, 0.75000000 );
        TASK_ACHIEVE_HEADING( 0, l_U354 );
        TASK_PLAY_ANIM( 0, "CLEAN_GLASS", l_U475, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U393 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U393 );
            CLEAR_SEQUENCE_TASK( l_U393 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U393 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U355._fU0, l_U355._fU4, l_U355._fU8, 2, 50000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U358 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", l_U475, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U393 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U393 );
            CLEAR_SEQUENCE_TASK( l_U393 );
        }
        break;
    }
    return;
}

void sub_17611()
{
    for ( l_U363 = 0; l_U363 < l_U326; l_U363++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U271[l_U363] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U271[l_U363], 1 );
        }
    }
    return;
}

void sub_17800()
{
    float fVar2;

    fVar2 = 10.00000000;
    if (NOT (IS_CHAR_INJURED( l_U271[3] )))
    {
        if (NOT l_U306)
        {
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), l_U271[3], fVar2, fVar2, fVar2, 0 ))
            {
                SET_CHAR_VISIBLE( l_U271[3], 1 );
                SET_CHAR_COLLISION( l_U271[3], 1 );
                FREEZE_CHAR_POSITION( l_U271[3], 0 );
                l_U222[3] = 3;
                l_U326 = 4;
                l_U306 = 1;
                if (l_U302)
                {
                    l_U302 = 0;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U294 )))
            {
                DELETE_CHAR( ref l_U294 );
            }
            SET_CHAR_VISIBLE( l_U271[3], 0 );
            SET_CHAR_COLLISION( l_U271[3], 0 );
            FREEZE_CHAR_POSITION( l_U271[3], 1 );
            SET_CHAR_COORDINATES( l_U271[3], l_U276[3]._fU0, l_U276[3]._fU4, l_U276[3]._fU8 );
            SET_CHAR_HEADING( l_U271[3], l_U289[3] );
            l_U222[3] = 3;
            l_U326 = 3;
            l_U306 = 0;;
        }
        else if (l_U326 == 4)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), l_U271[3], fVar2, fVar2, fVar2, 0 )))
            {
                SET_CHAR_VISIBLE( l_U271[3], 0 );
                SET_CHAR_COLLISION( l_U271[3], 0 );
                FREEZE_CHAR_POSITION( l_U271[3], 1 );
                SET_CHAR_COORDINATES( l_U271[3], l_U276[3]._fU0, l_U276[3]._fU4, l_U276[3]._fU8 );
                SET_CHAR_HEADING( l_U271[3], l_U289[3] );
                l_U222[3] = 3;
                l_U326 = 3;
                l_U306 = 0;
            }
        }
        if (l_U387)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), l_U271[3], 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                if (l_U302)
                {
                    l_U302 = 0;
                }
            }
        }
        if (NOT g_U10441)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U271[3], sub_2670(), 0 ))
            {
                g_U10441 = 1;
            }
        }
    }
    return;
}

void sub_18538(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    string sVar6;

    sVar6 = "STR_HLP";
    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (NOT g_U10441)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0, sub_2670(), 0 ))
            {
                g_U10441 = 1;
            }
        }
        switch ((uParam1^))
        {
            case 0:
            if (NOT l_U306)
            {
                if (sub_13014( sub_2670() ))
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), iParam0, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        GET_CHAR_COORDINATES( sub_2670(), ref l_U303._fU0, ref l_U303._fU4, ref l_U303._fU8 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U303._fU0, l_U303._fU4, l_U303._fU8, 2, -2, 2.00000000 );
                        l_U306 = 1;
                        (uParam1^) = 1;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( iParam0, 26, ref l_U384 );
                        if (l_U384 == 7)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0, 1 );
                            TASK_WANDER_STANDARD( iParam0 );
                        }
                        else if (NOT (sub_7414( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U393 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, -2, 2.00000000 );
                            TASK_ACHIEVE_HEADING( 0, l_U289[uParam2] );
                            CLOSE_SEQUENCE_TASK( l_U393 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                            CLEAR_SEQUENCE_TASK( l_U393 );
                            l_U302 = 1;
                        }
                    }
                }
            }
            break;
            case 1:
            if (NOT sub_9578())
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 27, ref l_U384 );
                if (l_U384 == 7)
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT sub_9578())
                        {
                            if (sub_10584( l_U394, 0 ))
                            {
                                SET_PLAYER_CONTROL( sub_1055(), 0 );
                                SET_CURRENT_CHAR_WEAPON( sub_2670(), 0, 1 );
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 999999 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2670(), iParam0 );
                                OPEN_SEQUENCE_TASK( ref l_U393 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                                CLOSE_SEQUENCE_TASK( l_U393 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                                CLEAR_SEQUENCE_TASK( l_U393 );
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19257( ref l_U463, 1 );
                                    sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_19422( "SC1_S1DASK", ref l_U463, 6, 1 );
                                }
                                else
                                {
                                    sub_19257( ref l_U463, 1 );
                                    sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_19422( "SC1_S2DASK", ref l_U463, 6, 1 );
                                }
                                l_U383 = 0;
                                (uParam1^) = 2;
                            }
                        }
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, -2, 2.00000000 );
                        l_U306 = 0;
                        (uParam1^) = 0;
                    }
                }
                else if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( iParam0 );
                }
            }
            break;
            case 2:
            if (NOT sub_9578())
            {
                if (sub_10584( l_U394, 0 ))
                {
                    if (NOT (sub_20594( l_U463 )))
                    {
                        if (sub_10882( l_U394, sVar6, 0 ))
                        {
                            SET_PLAYER_CONTROL( sub_1055(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            CLEAR_CHAR_TASKS( iParam0 );
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19257( ref l_U463, 1 );
                                sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                sub_19422( "SC1_S1DACC", ref l_U463, 6, 1 );
                            }
                            else
                            {
                                sub_19257( ref l_U463, 1 );
                                sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                sub_19422( "SC1_S2DACC", ref l_U463, 6, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U393 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U315._fU0, l_U315._fU4, l_U315._fU8, 2, -2, 2.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U312._fU0, l_U312._fU4, l_U312._fU8, 2, -2, 2.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U393 );
                            if (NOT (IS_CHAR_DEAD( iParam0 )))
                            {
                                CLEAR_CHAR_TASKS( iParam0 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U393 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 1 );
                            UNLOCK_RAGDOLL( iParam0, 0 );
                            sub_785( l_U394, sVar6 );
                            g_U10440 = 0;
                            l_U267 = 1;
                            (uParam1^) = 3;
                        }
                        else if (sub_21172())
                        {
                            CLEAR_CHAR_TASKS( iParam0 );
                            SET_PLAYER_CONTROL( sub_1055(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            l_U363 = 0;
                            for ( l_U363 = 0; l_U363 < 3; l_U363++ )
                            {
                                l_U222[l_U363] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U393 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[l_U363]._fU0, l_U276[l_U363]._fU4, l_U276[l_U363]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                                CLOSE_SEQUENCE_TASK( l_U393 );
                                if (NOT (IS_CHAR_DEAD( l_U271[l_U363] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U271[l_U363] );
                                    TASK_PERFORM_SEQUENCE( l_U271[l_U363], l_U393 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U393 );
                            }
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19257( ref l_U463, 1 );
                                sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                sub_19422( "SC1_S1DREJ", ref l_U463, 6, 1 );
                            }
                            else
                            {
                                sub_19257( ref l_U463, 1 );
                                sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                sub_19422( "SC1_S2DREJ", ref l_U463, 6, 1 );
                            }
                            sub_785( l_U394, sVar6 );
                            l_U306 = 0;
                            l_U302 = 1;
                        }
                        else if (g_U10440)
                        {
                            for ( l_U363 = 0; l_U363 < 3; l_U363++ )
                            {
                                l_U222[l_U363] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U393 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[l_U363]._fU0, l_U276[l_U363]._fU4, l_U276[l_U363]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                                CLOSE_SEQUENCE_TASK( l_U393 );
                                if (NOT (IS_CHAR_DEAD( l_U271[l_U363] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U271[l_U363] );
                                    TASK_PERFORM_SEQUENCE( l_U271[l_U363], l_U393 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U393 );
                            }
                            SET_PLAYER_CONTROL( sub_1055(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_785( l_U394, sVar6 );
                            l_U306 = 0;
                            l_U302 = 1;
                        }
                        else if (g_U10441)
                        {
                            for ( l_U363 = 0; l_U363 < 3; l_U363++ )
                            {
                                l_U222[l_U363] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U393 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[l_U363]._fU0, l_U276[l_U363]._fU4, l_U276[l_U363]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                                CLOSE_SEQUENCE_TASK( l_U393 );
                                if (NOT (IS_CHAR_DEAD( l_U271[l_U363] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U271[l_U363] );
                                    TASK_PERFORM_SEQUENCE( l_U271[l_U363], l_U393 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U393 );
                            }
                            SET_PLAYER_CONTROL( sub_1055(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_785( l_U394, sVar6 );
                            l_U306 = 0;
                            l_U302 = 1;
                        };;;;
                    }
                }
                else
                {
                    for ( l_U363 = 0; l_U363 < 3; l_U363++ )
                    {
                        l_U222[l_U363] = 0;
                        OPEN_SEQUENCE_TASK( ref l_U393 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[l_U363]._fU0, l_U276[l_U363]._fU4, l_U276[l_U363]._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                        CLOSE_SEQUENCE_TASK( l_U393 );
                        if (NOT (IS_CHAR_DEAD( l_U271[l_U363] )))
                        {
                            CLEAR_CHAR_TASKS( l_U271[l_U363] );
                            TASK_PERFORM_SEQUENCE( l_U271[l_U363], l_U393 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U393 );
                    }
                    SET_PLAYER_CONTROL( sub_1055(), 1 );
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                    CLEAR_HELP();
                    CLEAR_CHAR_TASKS( iParam0 );
                    sub_785( l_U394, sVar6 );
                }
            }
            break;
            case 3:
            if (l_U445)
            {
                if (l_U491 == 2)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_2670() ))) AND (NOT (IS_CHAR_INJURED( l_U294 ))))
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2670(), l_U298._fU0, l_U298._fU4, l_U298._fU8, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                        if (sub_22770( l_U359 ))
                        {
                            while (NOT (sub_23080( ref iParam0, l_U491 )))
                            {
                                WAIT( 0 );
                            }
                            (uParam1^) = 4;
                        }
                    }
                }
                else
                {
                    while (NOT (sub_23080( ref iParam0, l_U491 )))
                    {
                        WAIT( 0 );
                    }
                    (uParam1^) = 4;
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U384 );
                if (l_U384 == 7)
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2670(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if ((NOT sub_10680()) AND (NOT sub_9587()))
                        {
                            if (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))
                            {
                                g_U10440 = 0;
                                SET_EVERYONE_IGNORE_PLAYER( sub_1055(), 1 );
                                if (sub_1213() == -1)
                                {
                                    if (NOT l_U392)
                                    {
                                        sub_7608();
                                        l_U392 = 1;
                                    }
                                }
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                SET_PLAYER_CONTROL( sub_1055(), 0 );
                                SET_CURRENT_CHAR_WEAPON( sub_2670(), 0, 1 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                CLEAR_AREA( l_U318._fU0, l_U318._fU4, l_U318._fU8, 5.00000000, 0 );
                                SET_CHAR_COORDINATES( sub_2670(), l_U318._fU0, l_U318._fU4, l_U318._fU8 );
                                l_U440 = 0;
                                l_U324 = 0.00000000;
                                SET_CHAR_HEADING( sub_2670(), l_U324 );
                                if (NOT (IS_CHAR_DEAD( iParam0 )))
                                {
                                    SET_ROOM_FOR_CHAR_BY_NAME( iParam0, l_U417 );
                                }
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_2670(), l_U417 );
                                TASK_SIT_DOWN_ON_NEAREST_OBJECT( sub_2670(), 2, 0, l_U318, l_U439, 0.00000000, -2, 1 );
                                REQUEST_ANIMS( "MISSSTRIPCLUBHI" );
                                while (NOT (HAVE_ANIMS_LOADED( "MISSSTRIPCLUBHI" )))
                                {
                                    WAIT( 0 );
                                }
                                while (NOT (IS_CHAR_SITTING_IDLE( sub_2670() )))
                                {
                                    WAIT( 0 );
                                }
                                l_U491 = 0;
                                l_U267 = 1;
                                sub_24658();
                                GET_GAME_VIEWPORT_ID( ref uVar5 );
                                SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar5, l_U417 );
                                sub_24904( iParam0 );
                                REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                STOP_STREAM();
                                while (NOT (sub_23080( ref iParam0, l_U491 )))
                                {
                                    WAIT( 0 );
                                }
                                DO_SCREEN_FADE_IN( 400 );
                                while (NOT IS_SCREEN_FADED_IN())
                                {
                                    WAIT( 0 );
                                }
                                (uParam1^) = 4;
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                            UNLOCK_RAGDOLL( iParam0, 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, 15000, 2.00000000 );
                            l_U306 = 0;
                            (uParam1^) = 0;
                        }
                    }
                    else if (TIMERA() > 20000)
                    {
                        SETTIMERA( 0 );
                    }
                    else if (TIMERA() > 15000)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                        UNLOCK_RAGDOLL( iParam0, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, 15000, 2.00000000 );
                        l_U306 = 0;
                        (uParam1^) = 0;
                    };;;
                }
                else if (sub_25599( sub_2670() ))
                {
                    if (NOT (sub_25599( iParam0 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                        UNLOCK_RAGDOLL( iParam0, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, 15000, 2.00000000 );
                        l_U306 = 0;
                        l_U302 = 0;
                        l_U222[3] = 3;
                        (uParam1^) = 0;
                    }
                }
            }
            break;
            case 4:
            if (sub_11157())
            {
                if (NOT l_U265)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                    {
                        if (l_U266)
                        {
                            if (l_U267 < 3)
                            {
                                l_U267++;
                            }
                            else
                            {
                                l_U267 = 1;
                            }
                        }
                        else if (l_U267 > 1)
                        {
                            l_U267--;
                        }
                        else
                        {
                            l_U266 = 1;
                            l_U267++;
                        }
                        if (l_U267 > 0)
                        {
                            if ((DOES_CAM_EXIST( l_U229 )) AND (DOES_CAM_EXIST( l_U230 )))
                            {
                                SET_CAM_POS( l_U229, l_U231[l_U267]._fU0, l_U231[l_U267]._fU4, l_U231[l_U267]._fU8 );
                                SET_CAM_ROT( l_U229, l_U247[l_U267]._fU0, l_U247[l_U267]._fU4, l_U247[l_U267]._fU8 );
                                SET_CAM_ACTIVE( l_U229, 1 );
                                SET_CAM_PROPAGATE( l_U229, 1 );
                                SET_CAM_ACTIVE( l_U230, 0 );
                                SET_CAM_PROPAGATE( l_U230, 0 );
                                SET_CAM_NEAR_DOF( l_U229, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U229, 10.00000000 );
                                SET_CAM_FOV( l_U229, 42.00000000 );
                                l_U265 = 1;
                            }
                        }
                        else if ((DOES_CAM_EXIST( l_U229 )) AND (DOES_CAM_EXIST( l_U230 )))
                        {
                            SET_CAM_ACTIVE( l_U229, 0 );
                            SET_CAM_PROPAGATE( l_U229, 0 );
                            SET_CAM_ACTIVE( l_U230, 1 );
                            SET_CAM_PROPAGATE( l_U230, 1 );
                            SET_CAM_NEAR_DOF( l_U230, 2.00000000 );
                            SET_CAM_FAR_DOF( l_U230, 10.00000000 );
                            l_U265 = 1;
                        }
                    }
                    sub_26293( l_U229 );
                }
                else if (NOT (IS_CONTROL_PRESSED( 2, 0 )))
                {
                    l_U265 = 0;
                }
                if (NOT l_U390)
                {
                    GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U384 );
                    if ((l_U384 == 7) || (HAS_CHAR_ANIM_FINISHED( iParam0, "MISSSTRIPCLUBHI", l_U506 )))
                    {
                        if (l_U491 < 2)
                        {
                            STOP_STREAM();
                            MUTE_POSITIONED_RADIO( 0 );
                            sub_27929( l_U491 );
                            l_U445 = 0;
                            while (sub_28003( iParam0, uParam1 ))
                            {
                                WAIT( 0 );
                                if (l_U445 == 0)
                                {
                                    if (NOT (IS_CHAR_DEAD( iParam0 )))
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                                        UNLOCK_RAGDOLL( iParam0, 1 );
                                        if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                        {
                                            sub_19257( ref l_U463, 1 );
                                            sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                            sub_19422( "SC1_S1DOVR", ref l_U463, 6, 1 );
                                        }
                                        else
                                        {
                                            sub_19257( ref l_U463, 1 );
                                            sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                            sub_19422( "SC1_S2DOVR", ref l_U463, 6, 1 );
                                        }
                                        CLEAR_SEQUENCE_TASK( l_U393 );
                                        OPEN_SEQUENCE_TASK( ref l_U393 );
                                        TASK_PLAY_ANIM( 0, "Idle_A", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( 0, "Idle_Loop", "MISSSTRIPCLUBHI", 4.00000000, 1, 0, 0, 0, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U393 );
                                        TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                                        CLEAR_SEQUENCE_TASK( l_U393 );
                                    }
                                    l_U445 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U390 = 1;
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", l_U506 ))
                    {
                        if (sub_28952( iParam0, l_U506 ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", l_U506, ref l_U493 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_33668( l_U506, l_U493 );
                            sub_1666( " *****\n" );
                        }
                        else
                        {
                            sub_33668( l_U506, l_U493 );
                            sub_1666( "\n" );
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1" ))
                    {
                        if (sub_28952( iParam0, "Tri_C6_3Way_Woman1" ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1", ref l_U493 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_33668( "Tri_C6_3Way_Woman1 ", l_U493 );
                            sub_1666( " *****\n" );
                        }
                        else
                        {
                            sub_33668( "Tri_C6_3Way_Woman1 ", l_U493 );
                            sub_1666( "\n" );
                        }
                    };;;
                }
                if ((uParam1^) == 4)
                {
                    if ((sub_28256()) || (l_U390))
                    {
                        if (NOT l_U389)
                        {
                            l_U390 = 1;
                            CLEAR_HELP();
                            if (NOT IS_SCREEN_FADING_OUT())
                            {
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    DO_SCREEN_FADE_OUT( 400 );
                                }
                            }
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            STOP_STREAM();
                            MUTE_POSITIONED_RADIO( 0 );
                            if (DOES_OBJECT_EXIST( l_U471 ))
                            {
                                DELETE_OBJECT( ref l_U471 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U294 )))
                            {
                                DELETE_CHAR( ref l_U294 );
                            }
                            if ((NOT (IS_CHAR_DEAD( sub_2670() ))) AND (NOT (IS_CHAR_INJURED( iParam0 ))))
                            {
                                CLEAR_HELP();
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 1 );
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( l_U318._fU0, l_U318._fU4, l_U318._fU8, 1.00000000, -45131371, 1 );
                                SET_CAM_POS( l_U229, l_U231[4]._fU0, l_U231[4]._fU4, l_U231[4]._fU8 );
                                SET_CAM_ROT( l_U229, l_U247[4]._fU0, l_U247[4]._fU4, l_U247[4]._fU8 );
                                SET_CAM_ACTIVE( l_U229, 1 );
                                SET_CAM_PROPAGATE( l_U229, 1 );
                                SET_CAM_ACTIVE( l_U230, 0 );
                                SET_CAM_PROPAGATE( l_U230, 0 );
                                SET_CAM_NEAR_DOF( l_U229, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U229, 10.00000000 );
                                SET_CHAR_COLLISION( iParam0, 1 );
                                FREEZE_CHAR_POSITION( iParam0, 0 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2670(), 0.00000000, 2.00000000, -100.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                                SET_CHAR_HEADING( iParam0, l_U325 );
                                SET_CHAR_COORDINATES( iParam0, l_U359._fU0, l_U359._fU4, l_U321._fU8 );
                                OPEN_SEQUENCE_TASK( ref l_U393 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                                CLOSE_SEQUENCE_TASK( l_U393 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                                CLEAR_SEQUENCE_TASK( l_U393 );
                                l_U389 = 1;
                                CLEAR_HELP();
                            }
                            if (NOT (IS_CHAR_INJURED( sub_2670() )))
                            {
                                if (IS_CHAR_SITTING_IDLE( sub_2670() ))
                                {
                                    CHANGE_CHAR_SIT_IDLE_ANIM( sub_2670(), "AMB_SIT_COUCH_M", "Sit_Down_Idle_01", 1 );
                                }
                            }
                            WAIT( 250 );
                            CLEAR_PRINTS();
                            DO_SCREEN_FADE_IN( 400 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                        }
                        else if (iParam0 == l_U271[3])
                        {
                            l_U387 = 1;
                        }
                        else
                        {
                            l_U387 = 0;
                        }
                        while (sub_20594( l_U463 ))
                        {
                            WAIT( 0 );
                        }
                        if (sub_34843())
                        {
                            if (NOT (sub_20594( l_U463 )))
                            {
                                if (NOT (IS_CHAR_DEAD( iParam0 )))
                                {
                                    l_U438 = 0;
                                    sub_2721( 0, sub_2670(), "JOHNNY", 0 );
                                    if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                    {
                                        sub_19257( ref l_U463, 1 );
                                        sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                        sub_35084( ref l_U421, "SC1_S1DOVR", ref l_U438 );
                                    }
                                    else
                                    {
                                        sub_19257( ref l_U463, 1 );
                                        sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                        sub_35084( ref l_U421, "SC1_S2DOVR", ref l_U438 );
                                    }
                                    sub_35084( ref l_U421, "E1SC1_THANKS", ref l_U438 );
                                    sub_35296( ref l_U421, ref l_U438 );
                                    sub_35350( ref l_U421, ref l_U463, 6, 1 );
                                }
                            }
                        }
                        SET_EVERYONE_IGNORE_PLAYER( sub_1055(), 0 );
                        l_U306 = 0;
                        (uParam1^) = 0;
                        l_U302 = 1;
                        l_U445 = 0;
                        ProtectedSet(l_U446, 50);
                        if (NOT (IS_CHAR_DEAD( sub_2670() )))
                        {
                            SET_CHAR_HEALTH( sub_2670(), 200 );
                        }
                        while (NOT (sub_35498( iParam0 )))
                        {
                            WAIT( 0 );
                        }
                        sub_1006();
                        if (sub_1213() == -1)
                        {
                            if (l_U392)
                            {
                                sub_1873();
                                l_U392 = 0;
                            }
                        }
                        REMOVE_ANIMS( "MISSSTRIPCLUBHI" );
                        SET_PLAYER_CONTROL( sub_1055(), 1 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_CAM_BEHIND_PED( sub_2670() );
                        DESTROY_CAM( l_U229 );
                        DESTROY_CAM( l_U230 );
                        END_CAM_COMMANDS( ref l_U263 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        UNREGISTER_SCRIPT_WITH_AUDIO();
                        sub_35905();
                        if (NOT (IS_CHAR_DEAD( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U393 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276[uParam2]._fU0, l_U276[uParam2]._fU4, l_U276[uParam2]._fU8, 2, -2, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2670() );
                            CLOSE_SEQUENCE_TASK( l_U393 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U393 );
                            CLEAR_SEQUENCE_TASK( l_U393 );
                        }
                        l_U390 = 0;
                        l_U389 = 0;;
                    }
                    else if (NOT l_U389)
                    {
                        sub_36699();
                        if (TIMERA() > 30000)
                        {
                            SETTIMERA( 0 );
                            if (NOT (sub_20594( l_U463 )))
                            {
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19257( ref l_U463, 1 );
                                    sub_2721( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_19422( "SC1_S1CHAT", ref l_U463, 6, 1 );
                                }
                                else
                                {
                                    sub_19257( ref l_U463, 1 );
                                    sub_2721( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_19422( "SC1_S2CHAT1", ref l_U463, 6, 1 );
                                }
                            }
                        }
                        else if (TIMERA() > 2500)
                        {
                            if (TIMERB() > 30000)
                            {
                                if (NOT (sub_20594( l_U463 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_2670() )))
                                    {
                                        sub_2721( 0, sub_2670(), "JOHNNY", 0 );
                                        sub_19422( l_U420, ref l_U463, 6, 1 );
                                        SETTIMERB( 0 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 5: break;
        }
    }
    return;
}

void sub_19257(int iParam0, unknown uParam1)
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

void sub_19422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19443( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_19443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19497( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19497(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19519( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    sub_20195( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_19519(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1666( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_1666( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_1666( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_20195(int iParam0, int iParam1)
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

int sub_20594(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_1666( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_1666( "\n speech is not playing" );
    }
    return 0;
}

int sub_21172()
{
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U379, ref l_U380, ref l_U381, ref l_U382 );
    if ((l_U379 == 0) AND (l_U380 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U379, ref l_U380 );
    }
    if ((l_U379 != 0) || (l_U380 != 0))
    {
        l_U383++;
    }
    if (l_U383 > 30)
    {
        l_U383 = 0;
        return 1;
    }
    return 0;
}

int sub_22770(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( l_U294 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U294, 114, ref l_U384 );
        if (l_U384 == 1)
        {
            SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 0 );
            SET_CHAR_VISIBLE( l_U294, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U294, 1 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            OPEN_SEQUENCE_TASK( ref l_U393 );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            TASK_CHAR_SLIDE_TO_COORD( 0, uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U325, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U393 );
            TASK_PERFORM_SEQUENCE( l_U294, l_U393 );
            CLEAR_SEQUENCE_TASK( l_U393 );
            sub_19422( l_U420, ref l_U463, 6, 1 );
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( l_U294, 29, ref l_U384 );
            if (l_U384 == 7)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23080(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (iParam1 == 0)
    {
        uVar4 = l_U476;
        l_U506 = l_U477;
        l_U321 = {l_U478};
        l_U487 = l_U488;
        l_U420 = "E1SC1_GOOD";
    }
    else if (iParam1 == 1)
    {
        uVar4 = l_U481;
        l_U506 = l_U482;
        l_U321 = {l_U483};
        l_U487 = l_U489;
        l_U420 = "E1SC1_BETTER";
    }
    else if (iParam1 == 2)
    {
        l_U487 = l_U490;
        l_U420 = "E1SC1_BEST";
    };;;
    if (PRELOAD_STREAM( l_U487 ))
    {
        if (iParam1 == 2)
        {
            if ((NOT (IS_CHAR_INJURED( sub_2670() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( sub_2670(), "MISSSTRIPCLUBHI", "Tri_C6_3Way_Niko", 1 );
                OPEN_SEQUENCE_TASK( ref l_U393 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman1", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U393 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U393 );
                CLEAR_SEQUENCE_TASK( l_U393 );
            }
            if (NOT (IS_CHAR_INJURED( l_U294 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U393 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman2", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U393 );
                TASK_PERFORM_SEQUENCE( l_U294, l_U393 );
                CLEAR_SEQUENCE_TASK( l_U393 );
            }
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
        else if ((NOT (IS_CHAR_INJURED( sub_2670() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
        {
            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2670(), "MISSSTRIPCLUBHI", uVar4, 1 );
            if (NOT (IS_CHAR_DEAD( sub_2670() )))
            {
                if (iParam1 == 0)
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2670(), l_U483._fU0, l_U483._fU4, l_U483._fU8, ref l_U483._fU0, ref l_U483._fU4, ref l_U483._fU8 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2670(), l_U478._fU0, l_U478._fU4, l_U478._fU8, ref l_U321._fU0, ref l_U321._fU4, ref l_U321._fU8 );
                    GET_CHAR_HEADING( sub_2670(), ref l_U324 );
                    l_U325 = l_U324 + 180.00000000;
                    if (l_U325 > 360.00000000)
                    {
                        l_U325 -= 360.00000000;
                    }
                    SET_CHAR_HEADING( (uParam0^), l_U325 );
                    SET_CHAR_COORDINATES( (uParam0^), l_U321._fU0, l_U321._fU4, l_U321._fU8 );
                    SET_CHAR_COLLISION( (uParam0^), 0 );
                    FREEZE_CHAR_POSITION( (uParam0^), 1 );
                }
            }
            OPEN_SEQUENCE_TASK( ref l_U393 );
            TASK_PLAY_ANIM( 0, l_U506, "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 1, 0 );
            CLOSE_SEQUENCE_TASK( l_U393 );
            TASK_PERFORM_SEQUENCE( (uParam0^), l_U393 );
            CLEAR_SEQUENCE_TASK( l_U393 );
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
    }
    return 0;
}

void sub_24658()
{
    BEGIN_CAM_COMMANDS( ref l_U263 );
    CREATE_CAM( 14, ref l_U229 );
    CREATE_CAM( 14, ref l_U230 );
    SET_CAM_POS( l_U229, l_U231[1]._fU0, l_U231[1]._fU4, l_U231[1]._fU8 );
    SET_CAM_ROT( l_U229, l_U247[1]._fU0, l_U247[1]._fU4, l_U247[1]._fU8 );
    SET_CAM_ACTIVE( l_U229, 1 );
    SET_CAM_PROPAGATE( l_U229, 1 );
    SET_CAM_NEAR_DOF( l_U229, 2.00000000 );
    SET_CAM_FAR_DOF( l_U229, 10.00000000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_FOV( l_U229, 42.00000000 );
    return;
}

void sub_24904(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, 1113677074 ))
        {
            iVar3 = 1353709999;
        }
        else
        {
            iVar3 = 1113677074;
        }
    }
    CREATE_CHAR( 5, iVar3, l_U295._fU0, l_U295._fU4, l_U295._fU8, ref l_U294, 1 );
    SET_CHAR_RELATIONSHIP( l_U294, 1, 0 );
    SET_CHAR_RELATIONSHIP( l_U294, 1, 4 );
    SET_CHAR_HEADING( l_U294, l_U301 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U294 );
    SET_CHAR_NEVER_TARGETTED( l_U294, 1 );
    TASK_START_SCENARIO_IN_PLACE( l_U294, "Scenario_Standing", -1082130432 );
    SET_CHAR_VISIBLE( l_U294, 0 );
    if (IS_CHAR_MODEL( l_U294, 1113677074 ))
    {
        sub_2721( 1, l_U294, "STRIPPER_1", 0 );
        SET_AMBIENT_VOICE_NAME( l_U294, "STRIPPER_1" );
    }
    else
    {
        sub_2721( 2, l_U294, "STRIPPER_2", 0 );
        SET_AMBIENT_VOICE_NAME( l_U294, "STRIPPER_2" );
    }
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U294, 0 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U294, l_U417 );
    return;
}

int sub_25599(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U417 )))
    {
        return 1;
    }
    return 0;
}

void sub_26293(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    float fVar15;
    int iVar16;
    float fVar17;
    unknown uVar18;

    uVar3 = {l_U247[l_U267]};
    iVar10 = 10;
    iVar11 = -10;
    iVar12 = 10;
    iVar13 = -10;
    iVar14 = 1;
    fVar15 = 1.00000000;
    iVar16 = 1;
    fVar17 = 1.00000000;
    GET_CAM_FOV( uParam0, ref l_U397 );
    if ((IS_BUTTON_PRESSED( 0, 19 )) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        if (l_U397 > l_U396)
        {
            l_U397 -= 1.00000000;
        }
    }
    else if (l_U397 < l_U395)
    {
        l_U397 += 1.00000000;
    }
    SET_CAM_FOV( uParam0, l_U397 );
    GET_CAM_ROT( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref uVar7, ref iVar8, ref iVar9 );
    if ((iVar8 == 0) AND (iVar9 == 0))
    {
        GET_MOUSE_INPUT( ref iVar8, ref iVar9 );
        if ((iVar8 != 0) || (iVar9 != 0))
        {
            l_U507 = 1;
        }
    }
    else
    {
        l_U507 = 0;
    }
    if (((((iVar8 < 50) AND (iVar8 > 65486)) AND (iVar9 < 50)) AND (iVar9 > 65486)) AND (NOT l_U507))
    {
        l_U496 = 0;
        l_U495 = 0;
        l_U362 = VDIST( uVar3, l_U247[l_U267] );
        if (l_U362 > 0.10000000)
        {
            if (uVar3._fU0 > (l_U247[l_U267]._fU0 + fVar17))
            {
                uVar3._fU0 -= fVar17;
            }
            else if (uVar3._fU0 < (l_U247[l_U267]._fU0 - fVar17))
            {
                uVar3._fU0 += fVar17;
            }
            if (uVar3._fU8 > (l_U247[l_U267]._fU8 + fVar15))
            {
                uVar3._fU8 -= fVar15;
            }
            else if (uVar3._fU8 < (l_U247[l_U267]._fU8 - fVar15))
            {
                uVar3._fU8 += fVar15;
            }
            SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        }
        else
        {
            SET_CAM_ROT( uParam0, l_U247[l_U267]._fU0, l_U247[l_U267]._fU4, l_U247[l_U267]._fU8 );
            uVar3 = {l_U247[l_U267]};
        }
    }
    else if (iVar9 > 50)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U247[l_U267]._fU0 + 10.00000000))
            {
                l_U495 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U247[l_U267]._fU0 - 10.00000000))
        {
            l_U495 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 > 110)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U247[l_U267]._fU0 + 10.00000000))
            {
                l_U495 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U247[l_U267]._fU0 - 10.00000000))
        {
            l_U495 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 < 65486)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U247[l_U267]._fU0 - 10.00000000))
            {
                l_U495 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U247[l_U267]._fU0 + 10.00000000))
        {
            l_U495 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar9 < 65426)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U247[l_U267]._fU0 - 10.00000000))
            {
                l_U495 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U247[l_U267]._fU0 + 10.00000000))
        {
            l_U495 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar8 > 50)
    {
        if (uVar3._fU8 > (l_U247[l_U267]._fU8 - 10.00000000))
        {
            l_U496 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 > 110)
    {
        if (uVar3._fU8 > (l_U247[l_U267]._fU8 - 10.00000000))
        {
            l_U496 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 < 65486)
    {
        if (uVar3._fU8 < (l_U247[l_U267]._fU8 + 10.00000000))
        {
            l_U496 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    if (iVar8 < 65426)
    {
        if (uVar3._fU8 < (l_U247[l_U267]._fU8 + 10.00000000))
        {
            l_U496 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );;
    return;
}

void sub_27929(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U487 = l_U489;
    }
    else
    {
        l_U487 = l_U490;
    }
    PRELOAD_STREAM( l_U487 );
    return;
}

void sub_28003(unknown uParam0, unknown uParam1)
{
    int Result;
    string sVar5;

    Result = 1;
    sVar5 = "STR_AGN";
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar5 )))
    {
        PRINT_HELP_FOREVER( sVar5 );
        if (DOES_CAM_EXIST( l_U229 ))
        {
            if (l_U267 != 1)
            {
                l_U267 = 1;
                SET_CAM_POS( l_U229, l_U231[l_U267]._fU0, l_U231[l_U267]._fU4, l_U231[l_U267]._fU8 );
                SET_CAM_ROT( l_U229, l_U247[l_U267]._fU0, l_U247[l_U267]._fU4, l_U247[l_U267]._fU8 );
            }
            SET_CAM_FOV( l_U229, l_U395 );
            if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2670() ))))
            {
                TASK_LOOK_AT_CHAR( uParam0, sub_2670(), -2, 0 );
            }
        }
    }
    if (sub_28256())
    {
        Result = 0;
        l_U390 = 1;
        CLEAR_HELP();
    }
    else if (sub_28318())
    {
        if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2670() ))))
        {
            TASK_LOOK_AT_CHAR( uParam0, sub_2670(), 1, 0 );
        }
        Result = 0;
        l_U491++;
        (uParam1^) = 3;
        if (l_U491 == 0)
        {
            ProtectedSet(l_U446, 50);
        }
        else if (l_U491 == 1)
        {
            ProtectedSet(l_U446, 100);
        }
        else if (l_U491 == 2)
        {
            ProtectedSet(l_U446, 250);
        };;;
        CLEAR_HELP();
    }
    return Result;
}

int sub_28256()
{
    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

int sub_28318()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_28952(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_PLAYING_ANIM( uParam0, "MISSSTRIPCLUBHI", uParam1 ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( uParam0, "MISSSTRIPCLUBHI", uParam1, ref l_U493 );
    }
    else
    {
        return 0;
    }
    if (COMPARE_STRING( uParam1, "Lap_Triangle_A3_Woman" ))
    {
        if ((l_U493 > 0.52324700) AND (l_U493 < 0.53288800))
        {
            return 1;
        }
        if ((l_U493 > 0.61193900) AND (l_U493 < 0.62095000))
        {
            return 1;
        }
        if ((l_U493 > 0.63925100) AND (l_U493 < 0.65241200))
        {
            return 1;
        }
        if ((l_U493 > 0.68149700) AND (l_U493 < 0.68554900))
        {
            return 1;
        }
        if ((l_U493 > 0.70069900) AND (l_U493 < 0.72343800))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Triangle_B3_Woman" ))
    {
        if ((l_U493 > 0.06655600) AND (l_U493 < 0.07128900))
        {
            return 1;
        }
        if ((l_U493 > 0.07604000) AND (l_U493 < 0.08912300))
        {
            return 1;
        }
        if ((l_U493 > 0.09845400) AND (l_U493 < 0.10628700))
        {
            return 1;
        }
        if ((l_U493 > 0.12243100) AND (l_U493 < 0.12760500))
        {
            return 1;
        }
        if ((l_U493 > 0.13721000) AND (l_U493 < 0.14627400))
        {
            return 1;
        }
        if ((l_U493 > 0.15714800) AND (l_U493 < 0.16362900))
        {
            return 1;
        }
        if ((l_U493 > 0.19519500) AND (l_U493 < 0.22365800))
        {
            return 1;
        }
        if ((l_U493 > 0.23661100) AND (l_U493 < 0.24339200))
        {
            return 1;
        }
        if ((l_U493 > 0.25288200) AND (l_U493 < 0.25979700))
        {
            return 1;
        }
        if ((l_U493 > 0.26377000) AND (l_U493 < 0.26556200))
        {
            return 1;
        }
        if ((l_U493 > 0.27656600) AND (l_U493 < 0.28340600))
        {
            return 1;
        }
        if ((l_U493 > 0.28897900) AND (l_U493 < 0.29459700))
        {
            return 1;
        }
        if ((l_U493 > 0.30806300) AND (l_U493 < 0.31288300))
        {
            return 1;
        }
        if ((l_U493 > 0.32529000) AND (l_U493 < 0.32801200))
        {
            return 1;
        }
        if ((l_U493 > 0.36630900) AND (l_U493 < 0.36980700))
        {
            return 1;
        }
        if ((l_U493 > 0.40667800) AND (l_U493 < 0.42403200))
        {
            return 1;
        }
        if ((l_U493 > 0.44832300) AND (l_U493 < 0.45460400))
        {
            return 1;
        }
        if ((l_U493 > 0.46352000) AND (l_U493 < 0.47036900))
        {
            return 1;
        }
        if ((l_U493 > 0.48455500) AND (l_U493 < 0.49150500))
        {
            return 1;
        }
        if ((l_U493 > 0.53320300) AND (l_U493 < 0.53929700))
        {
            return 1;
        }
        if ((l_U493 > 0.61667000) AND (l_U493 < 0.62434500))
        {
            return 1;
        }
        if ((l_U493 > 0.66192400) AND (l_U493 < 0.67467700))
        {
            return 1;
        }
        if ((l_U493 > 0.68147500) AND (l_U493 < 0.68975400))
        {
            return 1;
        }
        if ((l_U493 > 0.69438200) AND (l_U493 < 0.69863300))
        {
            return 1;
        }
        if ((l_U493 > 0.70192900) AND (l_U493 < 0.70674900))
        {
            return 1;
        }
        if ((l_U493 > 0.71093600) AND (l_U493 < 0.71560100))
        {
            return 1;
        }
        if ((l_U493 > 0.73810300) AND (l_U493 < 0.75603200))
        {
            return 1;
        }
        if ((l_U493 > 0.76443600) AND (l_U493 < 0.77422800))
        {
            return 1;
        }
        if ((l_U493 > 0.78226600) AND (l_U493 < 0.79352700))
        {
            return 1;
        }
        if ((l_U493 > 0.80322000) AND (l_U493 < 0.81403100))
        {
            return 1;
        }
        if ((l_U493 > 0.82743300) AND (l_U493 < 0.83809900))
        {
            return 1;
        }
        if ((l_U493 > 0.92863200) AND (l_U493 < 0.95752300))
        {
            return 1;
        }
        if ((l_U493 > 0.96494500) AND (l_U493 < 0.97697500))
        {
            return 1;
        }
        if ((l_U493 > 0.97697500) AND (l_U493 < 0.98457100))
        {
            return 1;
        }
        if ((l_U493 > 0.98619900) AND (l_U493 < 0.99091200))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_A2_Woman" ))
    {
        if ((l_U493 > 0.60844000) AND (l_U493 < 0.61829700))
        {
            return 1;
        }
        if ((l_U493 > 0.65144800) AND (l_U493 < 0.66399200))
        {
            return 1;
        }
        if ((l_U493 > 0.67295200) AND (l_U493 < 0.68908000))
        {
            return 1;
        }
        if ((l_U493 > 0.70610300) AND (l_U493 < 0.71058400))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_B1_Woman" ))
    {
        if ((l_U493 > 0.21957400) AND (l_U493 < 0.22319800))
        {
            return 1;
        }
        if ((l_U493 > 0.22899500) AND (l_U493 < 0.23841500))
        {
            return 1;
        }
        if ((l_U493 > 0.24058900) AND (l_U493 < 0.24783600))
        {
            return 1;
        }
        if ((l_U493 > 0.25363300) AND (l_U493 < 0.25870600))
        {
            return 1;
        }
        if ((l_U493 > 0.26450400) AND (l_U493 < 0.27102600))
        {
            return 1;
        }
        if ((l_U493 > 0.27754700) AND (l_U493 < 0.28986800))
        {
            return 1;
        }
        if ((l_U493 > 0.30146200) AND (l_U493 < 0.30870900))
        {
            return 1;
        }
        if ((l_U493 > 0.31740500) AND (l_U493 < 0.32392600))
        {
            return 1;
        }
        if ((l_U493 > 0.32827500) AND (l_U493 < 0.33479700))
        {
            return 1;
        }
        if ((l_U493 > 0.33914500) AND (l_U493 < 0.34276800))
        {
            return 1;
        }
        if ((l_U493 > 0.34494200) AND (l_U493 < 0.34711600))
        {
            return 1;
        }
        if ((l_U493 > 0.34929000) AND (l_U493 < 0.35218900))
        {
            return 1;
        }
        if ((l_U493 > 0.35508800) AND (l_U493 < 0.35798600))
        {
            return 1;
        }
        if ((l_U493 > 0.36016000) AND (l_U493 < 0.36450800))
        {
            return 1;
        }
        if ((l_U493 > 0.36668400) AND (l_U493 < 0.37392900))
        {
            return 1;
        }
        if ((l_U493 > 0.37972700) AND (l_U493 < 0.38479900))
        {
            return 1;
        }
        if ((l_U493 > 0.38987200) AND (l_U493 < 0.39566900))
        {
            return 1;
        }
        if ((l_U493 > 0.40653900) AND (l_U493 < 0.41741000))
        {
            return 1;
        }
        if ((l_U493 > 0.45581700) AND (l_U493 < 0.47393400))
        {
            return 1;
        }
        if ((l_U493 > 0.48190500) AND (l_U493 < 0.49060100))
        {
            return 1;
        }
        if ((l_U493 > 0.49784700) AND (l_U493 < 0.50509600))
        {
            return 1;
        }
        if ((l_U493 > 0.51016700) AND (l_U493 < 0.51668800))
        {
            return 1;
        }
        if ((l_U493 > 0.53480500) AND (l_U493 < 0.55002300))
        {
            return 1;
        }
        if ((l_U493 > 0.55944400) AND (l_U493 < 0.56886500))
        {
            return 1;
        }
        if ((l_U493 > 0.58118500) AND (l_U493 < 0.60437400))
        {
            return 1;
        }
        if ((l_U493 > 0.61886800) AND (l_U493 < 0.62394000))
        {
            return 1;
        }
        if ((l_U493 > 0.66524700) AND (l_U493 < 0.68481300))
        {
            return 1;
        }
        if ((l_U493 > 0.68988600) AND (l_U493 < 0.69713200))
        {
            return 1;
        }
        if ((l_U493 > 0.70655200) AND (l_U493 < 0.71235000))
        {
            return 1;
        }
        if ((l_U493 > 0.72322000) AND (l_U493 < 0.73988900))
        {
            return 1;
        }
        if ((l_U493 > 0.74713400) AND (l_U493 < 0.75075800))
        {
            return 1;
        }
        if ((l_U493 > 0.75365600) AND (l_U493 < 0.75655500))
        {
            return 1;
        }
        if ((l_U493 > 0.75945400) AND (l_U493 < 0.76235200))
        {
            return 1;
        }
        if ((l_U493 > 0.76742500) AND (l_U493 < 0.76959900))
        {
            return 1;
        }
        if ((l_U493 > 0.77249800) AND (l_U493 < 0.77467300))
        {
            return 1;
        }
        if ((l_U493 > 0.77757000) AND (l_U493 < 0.78119400))
        {
            return 1;
        }
        if ((l_U493 > 0.78336900) AND (l_U493 < 0.78699100))
        {
            return 1;
        }
        if ((l_U493 > 0.78916500) AND (l_U493 < 0.79568700))
        {
            return 1;
        }
        if ((l_U493 > 0.81380600) AND (l_U493 < 0.82177600))
        {
            return 1;
        }
        if ((l_U493 > 0.83192100) AND (l_U493 < 0.83844200))
        {
            return 1;
        }
        if ((l_U493 > 0.84496500) AND (l_U493 < 0.85148700))
        {
            return 1;
        }
        if ((l_U493 > 0.87177700) AND (l_U493 < 0.87902600))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Tri_C6_3Way_Woman1" ))
    {
        if ((l_U493 > 0.26024000) AND (l_U493 < 0.26649100))
        {
            return 1;
        }
        if ((l_U493 > 0.27373000) AND (l_U493 < 0.28109400))
        {
            return 1;
        }
        if ((l_U493 > 0.28902400) AND (l_U493 < 0.29412100))
        {
            return 1;
        }
        if ((l_U493 > 0.30478300) AND (l_U493 < 0.30988100))
        {
            return 1;
        }
        if ((l_U493 > 0.31497900) AND (l_U493 < 0.32060700))
        {
            return 1;
        }
        if ((l_U493 > 0.33080200) AND (l_U493 < 0.33420000))
        {
            return 1;
        }
        if ((l_U493 > 0.33929800) AND (l_U493 < 0.34099800))
        {
            return 1;
        }
        if ((l_U493 > 0.34769800) AND (l_U493 < 0.34939700))
        {
            return 1;
        }
        if ((l_U493 > 0.39898500) AND (l_U493 < 0.40803100))
        {
            return 1;
        }
        if ((l_U493 > 0.41992600) AND (l_U493 < 0.42389100))
        {
            return 1;
        }
        if ((l_U493 > 0.43012100) AND (l_U493 < 0.43465400))
        {
            return 1;
        }
        if ((l_U493 > 0.44073900) AND (l_U493 < 0.44525700))
        {
            return 1;
        }
        if ((l_U493 > 0.45318700) AND (l_U493 < 0.45715200))
        {
            return 1;
        }
        if ((l_U493 > 0.46508300) AND (l_U493 < 0.46847800))
        {
            return 1;
        }
        if ((l_U493 > 0.47584200) AND (l_U493 < 0.47867400))
        {
            return 1;
        }
        if ((l_U493 > 0.48994600) AND (l_U493 < 0.49221300))
        {
            return 1;
        }
        if ((l_U493 > 0.54430200) AND (l_U493 < 0.55109900))
        {
            return 1;
        }
        if ((l_U493 > 0.55841600) AND (l_U493 < 0.56351500))
        {
            return 1;
        }
        if ((l_U493 > 0.56861100) AND (l_U493 < 0.57314300))
        {
            return 1;
        }
        if ((l_U493 > 0.57824100) AND (l_U493 < 0.58560400))
        {
            return 1;
        }
        if ((l_U493 > 0.59295100) AND (l_U493 < 0.59629100))
        {
            return 1;
        }
        if ((l_U493 > 0.60138800) AND (l_U493 < 0.60592000))
        {
            return 1;
        }
        if ((l_U493 > 0.61102200) AND (l_U493 < 0.61441800))
        {
            return 1;
        }
        if ((l_U493 > 0.62064700) AND (l_U493 < 0.62513200))
        {
            return 1;
        }
        if ((l_U493 > 0.63135600) AND (l_U493 < 0.63531900))
        {
            return 1;
        }
        if ((l_U493 > 0.64155100) AND (l_U493 < 0.64381600))
        {
            return 1;
        }
        if ((l_U493 > 0.64664800) AND (l_U493 < 0.64891300))
        {
            return 1;
        }
        if ((l_U493 > 0.65117900) AND (l_U493 < 0.65346100))
        {
            return 1;
        }
        if ((l_U493 > 0.65621800) AND (l_U493 < 0.65905100))
        {
            return 1;
        }
        if ((l_U493 > 0.66188400) AND (l_U493 < 0.66358200))
        {
            return 1;
        }
        if ((l_U493 > 0.66698000) AND (l_U493 < 0.66864700))
        {
            return 1;
        }
        if ((l_U493 > 0.67201800) AND (l_U493 < 0.67371600))
        {
            return 1;
        }
        if ((l_U493 > 0.69175300) AND (l_U493 < 0.69849600))
        {
            return 1;
        }
        if ((l_U493 > 0.70913800) AND (l_U493 < 0.71310900))
        {
            return 1;
        }
        if ((l_U493 > 0.71932500) AND (l_U493 < 0.72782000))
        {
            return 1;
        }
        if ((l_U493 > 0.73519500) AND (l_U493 < 0.73965300))
        {
            return 1;
        }
        if ((l_U493 > 0.74701500) AND (l_U493 < 0.75438000))
        {
            return 1;
        }
        if ((l_U493 > 0.76609900) AND (l_U493 < 0.77239000))
        {
            return 1;
        }
        if ((l_U493 > 0.77734500) AND (l_U493 < 0.78244300))
        {
            return 1;
        }
        if ((l_U493 > 0.78867300) AND (l_U493 < 0.79263900))
        {
            return 1;
        }
        if ((l_U493 > 0.79835500) AND (l_U493 < 0.80319200))
        {
            return 1;
        }
        if ((l_U493 > 0.81168400) AND (l_U493 < 0.81678000))
        {
            return 1;
        }
        if ((l_U493 > 0.82408800) AND (l_U493 < 0.83031700))
        {
            return 1;
        }
        if ((l_U493 > 0.84045800) AND (l_U493 < 0.84656000))
        {
            return 1;
        }
        if ((l_U493 > 0.88333400) AND (l_U493 < 0.88771200))
        {
            return 1;
        }
        if ((l_U493 > 0.89280800) AND (l_U493 < 0.89618500))
        {
            return 1;
        }
        if ((l_U493 > 0.91364900) AND (l_U493 < 0.92716400))
        {
            return 1;
        }
        if ((l_U493 > 0.93393400) AND (l_U493 < 0.93955400))
        {
            return 1;
        }
        if (l_U493 > 0.98000000)
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                }
            }
        }
    };;;;;
    return 0;
}

void sub_33668(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_34843()
{
    int iVar2;

    STORE_SCORE( sub_1055(), ref iVar2 );
    if (iVar2 >= ProtectedGet(l_U446))
    {
        ADD_SCORE( sub_1055(), -1 * ProtectedGet(l_U446) );
        INCREMENT_INT_STAT_NO_MESSAGE( 96, ProtectedGet(l_U446) );
        l_U499 = 1;
        return 1;
        break;
    }
    l_U444 = 1;
    g_U10441 = 1;
    return 0;
}

void sub_35084(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

void sub_35296(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_35350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_35371( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_35371(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_19497( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_35498(unknown uParam0)
{
    if (l_U440)
    {
        GET_SCRIPT_TASK_STATUS( sub_2670(), 1, ref l_U384 );
        if (l_U384 == 7)
        {
            if ((sub_35552( l_U463 )) == -1)
            {
                if (NOT (IS_CHAR_INJURED( uParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2670(), uParam0, 3000, 0 );
                    TASK_LOOK_AT_CHAR( uParam0, sub_2670(), 6000, 0 );
                }
                sub_19422( l_U420, ref l_U463, 6, 1 );
                CLEAR_HELP();
                return 1;
            }
        }
    }
    else
    {
        TASK_STAND_STILL( sub_2670(), 0 );
        l_U440 = 1;
    }
    return 0;
}

void sub_35552(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_20594( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_35905()
{
    if (COMPARE_STRING( l_U488, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U488 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U488, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U488 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U488, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U488 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U489, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U489 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U489, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U489 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U489, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U489 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U490, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U490 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U488, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U490 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U488, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U490 = "LAP_DANCE_RICK_JAMES";
    };;;
    return;
}

void sub_36699()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    string sVar9;

    sVar9 = "STR_HLP2";
    if (l_U267 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U471 ))
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref uVar3, ref iVar4, ref iVar5 );
            if ((iVar4 == 0) AND (iVar5 == 0))
            {
                GET_MOUSE_INPUT( ref iVar4, ref iVar5 );
            }
            uVar6 = TO_FLOAT( iVar4 );
            uVar7 = TO_FLOAT( iVar5 );
            l_U472._fU0 = uVar8 * uVar6;
            l_U472._fU8 = uVar8 * uVar7;
            if (IS_LOOK_INVERTED())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U471, l_U472._fU0, l_U472._fU4, l_U472._fU8, ref l_U247[0]._fU0, ref l_U247[0]._fU4, ref l_U247[0]._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U471, l_U472._fU0, l_U472._fU4, -l_U472._fU8, ref l_U247[0]._fU0, ref l_U247[0]._fU4, ref l_U247[0]._fU8 );
            }
            SET_CAM_POS( l_U230, l_U231[0]._fU0, l_U231[0]._fU4, l_U231[0]._fU8 );
            POINT_CAM_AT_COORD( l_U230, l_U247[0]._fU0, l_U247[0]._fU4, l_U247[0]._fU8 );
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_HLP3" )))
        {
            PRINT_HELP_FOREVER( "STR_HLP3" );
        }
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar9 )))
    {
        PRINT_HELP_FOREVER( sVar9 );
    }
    return;
}

void sub_37813()
{
    for ( l_U363 = 0; l_U363 < l_U326; l_U363++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U271[l_U363] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U271[l_U363], 25, ref l_U384 );
            if (l_U384 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U271[l_U363], 2, 0 );
                TASK_SMART_FLEE_CHAR( l_U271[l_U363], sub_2670(), 100.00000000, 30000 );
            }
        }
    }
    return;
}