void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U108 = 0;
    l_U115 = 0;
    l_U152 = 0;
    l_U155 = 0;
    l_U156 = 1;
    l_U187 = {-0.47300000, 0.86300000, -1.00000000};
    l_U191 = 0;
    l_U200 = 0;
    l_U215 = 4;
    l_U221 = nil;
    l_U265 = 897868981;
    l_U267 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 0;
    l_U279 = 0;
    l_U280 = 1;
    l_U281 = 0;
    l_U283 = 5;
    l_U284 = 42.00000000;
    l_U285 = 30.00000000;
    l_U304 = 0;
    l_U327 = 0;
    l_U329 = 0;
    l_U330 = 1113677074;
    l_U331 = 1353709999;
    l_U333 = 0;
    l_U334 = 0;
    l_U335 = 50;
    l_U361 = {0.00000000, 2.00000000, 0.00000000};
    l_U364 = "MISSSTRIPCLUB";
    l_U380 = 0;
    l_U381 = 3.00000000;
    l_U387 = 0;
    l_U388 = 0;
    l_U396 = 0;
    l_U157 = {l_U397._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_356();
    }
    sub_2584( "" );
    sub_2739( 0, sub_2690(), "LUIS", 0 );
    g_U10504 = 0;
    g_U10503 = 0;
    sub_1477( "Strip Club Script Launched" );
    PRINTNL();
    GET_WEAPONTYPE_MODEL( 7, ref l_U266 );
    if (sub_2949())
    {
        l_U116 = 1;
    }
    else
    {
        sub_3047();
        l_U116 = 0;
    }
    if (g_U12379)
    {
        if (sub_3157())
        {
            l_U280 = 0;
        }
        PRINTSTRING( "..........QUICKCHECK ambStripClub: Allow?\n" );
        if (NOT (sub_3243( 13 )))
        {
            l_U280 = 0;
            l_U330 = 1113677074;
            l_U331 = 1113677074;
            l_U364 = "MISSSTRIPCLUBLO";
        }
    }
    else
    {
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U157, 25.00000000, 20 );
    }
    REQUEST_MODEL( l_U330 );
    REQUEST_MODEL( l_U331 );
    REQUEST_ANIMS( l_U364 );
    sub_3603();
    if (l_U280)
    {
        sub_6893();
    }
    sub_13377();
    sub_13981();
    while (true)
    {
        WAIT( 0 );
        if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) AND (g_U10526))
        {
            if (l_U280)
            {
                sub_6893();
            }
            if (sub_14050( sub_2690() ))
            {
                ;
            }
            if (sub_7281( sub_2690() ))
            {
                if (NOT l_U152)
                {
                    if (NOT g_U11076)
                    {
                        g_U11076 = 1;
                        l_U152 = 1;
                    }
                }
                if (NOT sub_14185())
                {
                    if (NOT l_U280)
                    {
                        if (NOT g_U10505)
                        {
                            PRINT_HELP( "STR_WEA" );
                            g_U10505 = 1;
                        }
                    }
                }
                sub_3047();
                switch (l_U108)
                {
                    case 0:
                    if (l_U274 == 1)
                    {
                        if (l_U116 == 0)
                        {
                            sub_14323();
                        }
                        if (l_U280)
                        {
                            sub_14690();
                        }
                        sub_15172();
                        l_U108 = 1;
                    }
                    else
                    {
                        sub_15351();
                    }
                    break;
                    case 1:
                    sub_15846();
                    if (sub_16061())
                    {
                        ;
                    }
                    if (g_U10503)
                    {
                        if (NOT g_U10504)
                        {
                            for ( l_U252 = 0; l_U252 < 4; l_U252++ )
                            {
                                if ((NOT (IS_CHAR_DEAD( l_U160[l_U252] ))) AND (NOT (IS_CHAR_DEAD( sub_2690() ))))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U160[l_U252], sub_2690(), 0 ))
                                    {
                                        g_U10504 = 1;
                                    }
                                }
                            }
                        }
                    }
                    sub_16969();
                    if ((g_U10504 == 0) AND (g_U10503 == 0))
                    {
                        if (l_U280)
                        {
                            sub_17721();
                            if (NOT l_U191)
                            {
                                if (NOT l_U333)
                                {
                                    if (NOT sub_7230())
                                    {
                                        if (l_U115 != 2)
                                        {
                                            if (NOT sub_1069())
                                            {
                                                sub_1477( "IF NOT isAnyoneGrouped()" );
                                                sub_17910();
                                                if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT_G" ))))
                                                {
                                                    for ( l_U196 = 0; l_U196 < l_U215; l_U196++ )
                                                    {
                                                        sub_19123( l_U160[l_U196], ref l_U110[l_U196], l_U196 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (l_U200)
                            {
                                GET_GAME_TIMER( ref l_U198 );
                                l_U197 = l_U198 - l_U199;
                                if (l_U197 > 20000)
                                {
                                    if (l_U116 == 0)
                                    {
                                        if (NOT (sub_26363( sub_2690() )))
                                        {
                                            l_U191 = 0;
                                            l_U200 = 0;
                                        }
                                    }
                                    else if (NOT (IS_CHAR_DEAD( l_U160[3] )))
                                    {
                                        if (NOT (IS_CHAR_ON_SCREEN( l_U160[3] )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), l_U160[3], 12.00000000, 12.00000000, 12.00000000, 0 )))
                                            {
                                                l_U191 = 0;
                                                l_U200 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U199 );
                                l_U200 = 1;
                            }
                        }
                    }
                    else
                    {
                        for ( l_U196 = 0; l_U196 < l_U215; l_U196++ )
                        {
                            if (l_U110[l_U196] == 2)
                            {
                                sub_19123( l_U160[l_U196], ref l_U110[l_U196], l_U196 );
                            }
                        }
                        if (NOT l_U275)
                        {
                            if (l_U116 == 0)
                            {
                                sub_16234();
                            }
                            sub_38874();
                            l_U275 = 1;
                        }
                    }
                    break;
                    case 2: break;
                }
            }
            else if (l_U152)
            {
                if (g_U11076)
                {
                    g_U11076 = 0;
                    l_U152 = 0;
                }
            }
        }
        else
        {
            sub_1477( "Strip Club Script Killed" );
            PRINTNL();
            sub_356();
        }
    }
    return;
}

void sub_356()
{
    for ( l_U252 = 0; l_U252 < 4; l_U252++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U160[l_U252] )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U160[l_U252] )))
            {
                DELETE_CHAR( ref l_U160[l_U252] );
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U332 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U332 );
    }
    if (NOT (IS_CHAR_DEAD( l_U226 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U226 )))
        {
            DELETE_CHAR( ref l_U226 );
        }
    }
    sub_556( l_U390[0], l_U389 );
    sub_556( l_U390[1], l_U389 );
    sub_556( l_U390[2], l_U389 );
    GET_GROUP_SIZE( sub_948(), ref l_U359, ref l_U304 );
    if (sub_1004())
    {
        if (sub_1069())
        {
            if (l_U115 == 2)
            {
                if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                }
                if (g_U10504)
                {
                    sub_1355( 1 );
                    sub_1477( "Minigames_Store_Result(MGR_PLAYER_LOST)\n" );
                }
                else if (sub_1499())
                {
                    sub_1355( 0 );
                    sub_1477( "Minigames_Store_Result(MGR_PLAYER_WON)\n" );
                }
                else
                {
                    sub_1355( 3 );
                    sub_1477( "Minigames_Store_Result(MGR_GAME_ABANDONED)\n" );
                }
                sub_1684();
            }
        }
        else if (((l_U115 == 1) || (l_U115 == 4)) || (l_U115 == 2))
        {
            if (NOT (IS_CHAR_INJURED( l_U217[0] )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U217[0], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U217[1] )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U217[1], 0 );
            }
            if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
            {
                DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
            }
            sub_1355( 7 );
            sub_1684();
        }
    }
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U253 + l_U259};
    l_U262 = {l_U253 + l_U262};
    SWITCH_PED_PATHS_ON( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U256 + l_U259};
    l_U262 = {l_U256 + l_U262};
    SWITCH_PED_PATHS_ON( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U346 + l_U259};
    l_U262 = {l_U346 + l_U262};
    SWITCH_PED_PATHS_ON( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_556(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_777();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_826(), 1 );
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

void sub_777()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_826()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_948()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1004()
{
    if ((NOT (IS_CHAR_INJURED( l_U217[1] ))) || (NOT (IS_CHAR_INJURED( l_U217[0] ))))
    {
        return 1;
    }
    return 0;
}

int sub_1069()
{
    GET_PLAYER_GROUP( sub_826(), ref l_U358 );
    if (sub_1004())
    {
        if (l_U115 == 2)
        {
            return 1;
        }
    }
    else
    {
        GET_GROUP_SIZE( l_U358, ref l_U359, ref l_U304 );
        if (l_U304 > 0)
        {
            PRINTSTRING( "isAnyoneGrouped() iGrpSize > 0 ***" );
            PRINTNL();
            return 1;
        }
        if (sub_1212())
        {
            if ((NOT g_U11085[0]) || (NOT g_U11085[1]))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1212()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_1355(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_1477(unknown uParam0)
{
    return;
}

int sub_1499()
{
    if (NOT l_U333)
    {
        if (l_U388)
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

void sub_1684()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_1734())
        {
            g_U12379 = 0;
        }
        sub_1891();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

int sub_1734()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_1891()
{
    g_U28805._fU4 = 1;
    return;
}

void sub_2584(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_2601();
    return;
}

void sub_2601()
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

void sub_2690()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2819( "\n PED NUMBER ", uParam0 );
    sub_2859( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2819(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2859(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2949()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_2690() )))
    {
        GET_CHAR_COORDINATES( sub_2690(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3047()
{
    if (l_U116 == 0)
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1195.00000000, 1707.00000000, 18.00000000, 1.50000000, -1628879836 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, 1195, 1707, 18, 1, 0.00000000 );
        }
    }
    return;
}

void sub_3157()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_3243(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_3310( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_3310(unknown uParam0)
{
    return 0;
}

void sub_3603()
{
    switch (l_U116)
    {
        case 0:
        l_U336[0] = {1180.16300000, 1679.14700000, 17.72700000};
        l_U336[1] = {1173.68200000, 1672.63700000, 17.72700000};
        l_U336[2] = {1173.38100000, 1691.63700000, 17.72700000};
        l_U346 = {1185.65100000, 1684.30900000, 16.47830000};
        l_U253 = {1197.58000000, 1702.07000000, 17.72180000};
        l_U256 = {1145.34600000, 1671.12000000, 16.72180000};
        l_U259 = {-1.00000000, -1.00000000, -1.00000000};
        l_U262 = {1.00000000, 1.00000000, 1.00000000};
        l_U244 = {1189.05600000, 1705.30300000, 16.72200000};
        l_U247 = 62.49600000;
        l_U240 = {1189.89400000, 1706.11100000, 16.72200000};
        l_U243 = 228.73000000;
        l_U207 = {1152.07800000, 1669.39400000, 15.72190000};
        l_U210 = {1151.24500000, 1670.57900000, 15.72190000};
        l_U213 = 0.00000000;
        l_U214 = 225.00000000;
        l_U204 = {1154.25000000, 1679.68000000, 16.72000000};
        l_U201 = {1151.08100000, 1671.17100000, 15.72200000};
        l_U110[0] = 0;
        l_U110[1] = 0;
        l_U110[2] = 0;
        l_U165[0] = {1167.19700000, 1676.84600000, 16.72180000};
        l_U178[0] = 356.21450000;
        l_U165[1] = {1180.76600000, 1687.84700000, 16.72180000};
        l_U178[1] = 38.64410000;
        l_U165[2] = {1183.06100000, 1703.52800000, 17.72180000};
        l_U178[2] = 352.55900000;
        l_U165[3] = {1151.08100000, 1671.17100000, 15.72200000};
        l_U178[3] = 61.23440000;
        l_U184 = {1150.81800000, 1673.28200000, 15.72200000};
        l_U190 = 196.28860000;
        l_U119[0] = {1152.10100000, 1670.17000000, 16.67738000};
        l_U119[1] = {1153.17200000, 1670.06500000, 16.95117000};
        l_U135[1] = {-3.80520100, -0.00000000, 90.80816000};
        l_U119[2] = {1152.33600000, 1672.31600000, 16.88453000};
        l_U135[2] = {-6.59464600, 0.00000000, 158.46100000};
        l_U119[3] = {1149.14700000, 1669.57300000, 17.07823000};
        l_U135[3] = {-12.05484000, -0.00000000, -82.70051000};
        l_U119[4] = {1148.47200000, 1670.09200000, 16.76314000};
        l_U135[4] = {-1.33915700, -0.00000000, -81.57669000};
        l_U230[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U230[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U237[0] = 152.75620000;
        l_U237[1] = 250.23200000;
        l_U287 = {1188.80000000, 1700.70000000, 17.60000000};
        CLEAR_AREA( l_U287._fU0, l_U287._fU4, l_U287._fU8, 1.50000000, 0 );
        l_U290[0] = {1176.32200000, 1698.27500000, 16.81840000};
        CLEAR_AREA( l_U290[0]._fU0, l_U290[0]._fU4, l_U290[0]._fU8, 1.50000000, 0 );
        l_U290[1] = {1181.31700000, 1696.76800000, 16.79990000};
        l_U297[0] = {1178.08500000, 1684.57100000, 16.72180000};
        CLEAR_AREA( l_U297[0]._fU0, l_U297[0]._fU4, l_U297[0]._fU8, 1.50000000, 0 );
        l_U297[1] = {1175.34200000, 1694.96700000, 16.72170000};
        l_U305 = "clammainroom";
        l_U306 = "clampalbkrm";
        l_U307 = "clamfronrm";
        l_U308 = "clammainroom";
        l_U328 = -899568022;
        l_U265 = 676448572;
        l_U365 = "Lap_Triangle_A3_Niko";
        l_U366 = "Lap_Triangle_A3_Woman";
        l_U370 = "Lap_Triangle_B3_Niko";
        l_U371 = "Lap_Triangle_B3_Woman";
        l_U375 = "Triangle_A3-B3_trans";
        l_U367 = {0.00000000, 0.74000000, -1.00000000};
        l_U372 = {0.00000000, 0.74000000, -1.00000000};
        l_U377 = "LAP_DANCE_RICK_JAMES";
        l_U378 = "LAP_DANCE_GOLDFRAPP";
        l_U379 = "LAP_DANCE_MYSTIKAL";
        break;
        case 1:
        l_U253 = {-1572.62400000, 26.34700000, 10.02240000};
        l_U256 = {-1579.22500000, 26.59560000, 10.01530000};
        l_U259 = {-1.00000000, -1.00000000, -1.00000000};
        l_U262 = {1.00000000, 1.00000000, 1.00000000};
        l_U240 = {-1560.29500000, 8.82050000, 9.01030000};
        l_U243 = 180.18490000;
        l_U244 = {-1564.93400000, 8.36510000, 9.01030000};
        l_U247 = 180.06740000;
        l_U207 = {-1577.16500000, 1.66590000, 10.01440000};
        l_U210 = {-1590.08000000, 20.25870000, 14.26110000};
        l_U213 = -1.00000000;
        l_U214 = 106.16730000;
        l_U204 = {-1581.22100000, 4.60320000, 10.01530000};
        l_U201 = {-1578.59300000, 1.97130000, 9.00980000};
        l_U110[0] = 0;
        l_U110[1] = 0;
        l_U110[2] = 0;
        l_U165[0] = {-1582.78200000, 6.90790000, 9.01030000};
        l_U178[0] = 332.54820000;
        l_U165[1] = {-1580.88700000, 16.83490000, 9.01030000};
        l_U178[1] = 253.12520000;
        l_U165[2] = {-1555.15200000, 14.23790000, 9.01030000};
        l_U178[2] = 30.05350000;
        l_U165[3] = {-1578.59300000, 1.97130000, 9.00980000};
        l_U178[3] = 72.13210000;
        l_U184 = {-1581.28300000, 0.35200000, 9.01040000};
        l_U190 = 272.20340000;
        l_U119[0] = {-1576.65200000, 1.51454000, 9.95776400};
        l_U119[1] = {-1578.41800000, 2.94477700, 10.20165000};
        l_U135[1] = {-12.60450000, -0.00000100, -140.51600000};
        l_U119[2] = {-1576.27000000, 1.04640600, 10.27578000};
        l_U135[2] = {-3.11567400, -0.00000000, 61.38813000};
        l_U119[3] = {-1581.77200000, 1.40416400, 9.51403800};
        l_U135[3] = {-1.02756000, -0.00000000, -92.76884000};
        l_U119[4] = {-1580.33900000, 3.43333000, 10.32023000};
        l_U135[4] = {-2.86955500, 0.00000000, -121.08700000};
        l_U230[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U230[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U237[0] = 152.75620000;
        l_U237[1] = 250.23200000;
        l_U287 = {-1579.16900000, 7.63900000, 9.01030000};
        CLEAR_AREA( l_U287._fU0, l_U287._fU4, l_U287._fU8, 1.50000000, 0 );
        l_U290[0] = {-1581.79600000, 13.02000000, 9.01030000};
        CLEAR_AREA( l_U290[0]._fU0, l_U290[0]._fU4, l_U290[0]._fU8, 1.50000000, 0 );
        l_U290[1] = {-1581.64800000, 10.04290000, 9.01030000};
        l_U297[0] = {-1578.19900000, 11.47120000, 9.01030000};
        CLEAR_AREA( l_U297[0]._fU0, l_U297[0]._fU4, l_U297[0]._fU8, 1.50000000, 0 );
        l_U297[1] = {-1578.19900000, 11.47120000, 9.01030000};
        l_U305 = "Bada_room1";
        l_U306 = "Bada-Private";
        l_U307 = "Bada_room2";
        l_U308 = "Bada_room1a";
        l_U328 = -899568022;
        l_U265 = 897868981;
        l_U365 = "Lap_Honkerz_A2_Niko";
        l_U366 = "Lap_Honkerz_A2_Woman";
        l_U370 = "Lap_Honkerz_B1_Niko";
        l_U371 = "Lap_Honkerz_B1_Woman";
        l_U375 = "Honkerz_A2-B1_trans";
        l_U367 = {0.00000000, 0.74000000, -1.00000000};
        l_U372 = {0.00000000, 0.74000000, -1.00000000};
        l_U377 = "LAP_DANCE_MYSTIKAL";
        l_U378 = "LAP_DANCE_RICK_JAMES";
        l_U379 = "LAP_DANCE_GOLDFRAPP";
        break;
    }
    l_U259 = {-1.00000000, -1.00000000, -3.00000000};
    l_U262 = {1.00000000, 1.00000000, 3.00000000};
    l_U259 = {l_U253 + l_U259};
    l_U262 = {l_U253 + l_U262};
    SWITCH_PED_PATHS_OFF( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    l_U259 = {-1.00000000, -1.00000000, -3.00000000};
    l_U262 = {1.00000000, 1.00000000, 3.00000000};
    l_U259 = {l_U256 + l_U259};
    l_U262 = {l_U256 + l_U262};
    SWITCH_PED_PATHS_OFF( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    l_U259 = {-1.00000000, -1.00000000, -3.00000000};
    l_U262 = {1.00000000, 1.00000000, 3.00000000};
    l_U259 = {l_U346 + l_U259};
    l_U262 = {l_U346 + l_U262};
    SWITCH_PED_PATHS_OFF( l_U259._fU0, l_U259._fU4, l_U259._fU8, l_U262._fU0, l_U262._fU4, l_U262._fU8 );
    return;
}

void sub_6893()
{
    unknown uVar2;

    switch (l_U115)
    {
        case 0:
        if (sub_6946())
        {
            if ((g_U10504 == 0) AND (g_U10503 == 0))
            {
                if (NOT sub_7230())
                {
                    if (sub_7281( sub_2690() ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U221 )))
                        {
                            PRINTSTRING( "..........ambStripClub: Allow?\n" );
                            if (sub_7509( 13 ))
                            {
                                SETTIMERB( 0 );
                                sub_7896();
                                sub_1477( "--------------------------------------> Strip Club Grabbed Ped\n" );
                                sub_8166();
                                SAY_AMBIENT_SPEECH( l_U221, "STRIP_DO_OWN_THING", 1, 1, 2 );
                                DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_HELP( "STR_ENJ" );
                                }
                                sub_8430();
                                sub_8653();
                                sub_9269();
                                sub_9452();
                                l_U115 = 1;
                            }
                        }
                    }
                }
            }
            else if (sub_7281( sub_2690() ))
            {
                SETTIMERB( 0 );
                sub_7896();
                PRINT_NOW( "STR_LEAVE", 7500, 1 );
                l_U115 = 2;
            }
        }
        break;
        case 1:
        sub_9775();
        sub_12370();
        sub_8653();
        sub_9269();
        sub_9452();
        break;
        case 2:
        if ((sub_12598( l_U217[0] )) AND (sub_12598( l_U217[1] )))
        {
            if (((NOT (sub_7281( l_U217[0] ))) AND (NOT (sub_7281( sub_2690() )))) AND (NOT (sub_7281( l_U217[1] ))))
            {
                sub_356();
            }
            if (g_U10504)
            {
                if (NOT (sub_13124( l_U221 )))
                {
                    if (NOT l_U394)
                    {
                        SAY_AMBIENT_SPEECH( l_U221, "GET_OUT_OF_HERE", 1, 1, 2 );
                    }
                    l_U394 = 1;
                }
            }
            else if (NOT l_U394)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2690() )))
                {
                    SAY_AMBIENT_SPEECH( l_U221, "STRIP_LEAVE_AGREE", 1, 1, 2 );
                    l_U394 = 1;
                }
            }
        }
        sub_12370();
        break;
        case 4:
        sub_1477( "CASE friendIsGirlfriend\n" );
        sub_9775();
        sub_12370();
        sub_8653();
        break;
    }
    return;
}

int sub_6946()
{
    int iVar2;
    boolean bVar3;
    unknown uVar4;

    iVar2 = 0;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = sub_6971( ref uVar4, iVar2 );
        if (bVar3)
        {
            l_U217[iVar2] = sub_7051( iVar2 );
            if (l_U217[iVar2] != nil)
            {
                l_U390[iVar2] = 5;
                if (l_U221 == nil)
                {
                    l_U221 = l_U217[iVar2];
                }
            }
        }
        iVar2++;
        if (iVar2 >= 2)
        {
            bVar3 = false;
        }
    }
    if (l_U221 != nil)
    {
        return 1;
    }
    return 0;
}

int sub_6971(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_7051(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

int sub_7230()
{
    if (IS_CHAR_ARMED( sub_2690(), 7 ))
    {
        return 1;
    }
    return 0;
}

int sub_7281(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        if ((((iVar3 == (GET_HASH_KEY( l_U305 ))) || (iVar3 == (GET_HASH_KEY( l_U306 )))) || (iVar3 == (GET_HASH_KEY( l_U307 )))) || (iVar3 == (GET_HASH_KEY( l_U308 ))))
        {
            if (NOT l_U386)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( uParam0, 1 );
                l_U386 = 1;
            }
            return 1;
        }
        else if (l_U386)
        {
            l_U386 = 0;
        }
    }
    return 0;
}

int sub_7509(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_3310( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

void sub_7896()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_7986();
        }
        return;
    }
    if (sub_1734())
    {
        g_U12379 = 1;
    }
    sub_8062();
    return;
}

void sub_7986()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

void sub_8062()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_8166()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U217[I] )))
        {
            ADD_BLIP_FOR_CHAR( l_U217[I], ref l_U222[I] );
            SET_BLIP_AS_FRIENDLY( l_U222[I], 1 );
            sub_8259( l_U222[I] );
            CHANGE_BLIP_SCALE( l_U222[I], 0.60000000 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U217[I], 1 );
        }
    }
    return;
}

void sub_8259(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_8430()
{
    CLEAR_AREA( l_U290[0]._fU0, l_U290[0]._fU4, l_U290[0]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U290[1]._fU0, l_U290[1]._fU4, l_U290[1]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U287._fU0, l_U287._fU4, l_U287._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U297[0]._fU0, l_U297[0]._fU4, l_U297[0]._fU8, 2.50000000, 0 );
    CLEAR_AREA( l_U297[1]._fU0, l_U297[1]._fU4, l_U297[1]._fU8, 2.50000000, 0 );
    return;
}

void sub_8653()
{
    if (NOT (IS_CHAR_INJURED( l_U217[0] )))
    {
        if (IS_CHAR_MALE( l_U217[0] ))
        {
            if (l_U116 == 0)
            {
                if (DOES_SCENARIO_EXIST_IN_AREA( l_U290[0], l_U381, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U217[0], 118, ref l_U273 );
                    if (l_U273 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[0], l_U290[0], l_U381 );
                    }
                }
                else if (DOES_SCENARIO_EXIST_IN_AREA( l_U290[1], l_U381, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U217[0], 118, ref l_U273 );
                    if (l_U273 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[0], l_U290[1], l_U381 );
                    }
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U217[0], 118, ref l_U273 );
                if (l_U273 == 7)
                {
                    if (DOES_SCENARIO_EXIST_IN_AREA( l_U290[0], l_U381, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[0], l_U290[0], l_U381 );
                    }
                    else if (DOES_SCENARIO_EXIST_IN_AREA( l_U297[0], l_U381, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[0], l_U297[0], l_U381 );
                    }
                }
            }
        }
        else if (IS_SITTING_OBJECT_NEAR( l_U290[0], 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U217[0], 112, ref l_U273 );
            if (l_U273 == 7)
            {
                REMOVE_CHAR_FROM_GROUP( l_U217[0] );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U217[0], 0, 2, l_U290[0], 0, 0, -2, 0 );
            }
            else if (IS_CHAR_SITTING_IDLE( l_U217[0] ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U217[0] ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U217[0], "AMB@DEFAULT", "CAFE_F_EMPTY_DEFAULT", 1 );
                }
            }
        }
    }
    return;
}

void sub_9269()
{
    if (NOT (IS_CHAR_INJURED( l_U217[1] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U217[1], 118, ref l_U273 );
        if (l_U273 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U287, l_U381, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[1], l_U287, l_U381 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U297[0], l_U381, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[1], l_U297[0], l_U381 );
            }
        }
    }
    return;
}

void sub_9452()
{
    if (NOT (IS_CHAR_INJURED( l_U217[2] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U217[2], 118, ref l_U273 );
        if (l_U273 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U297[0], l_U381, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[2], l_U297[0], l_U381 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U297[1], l_U381, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[2], l_U297[1], l_U381 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U290[0], l_U381, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U217[2], l_U290[0], l_U381 );
            };;;
        }
    }
    return;
}

void sub_9775()
{
    int I;

    sub_1477( "leaveStripClub()\n" );
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U217[I] )))
        {
            if (IS_CHAR_MALE( l_U217[I] ))
            {
                l_U389 = "SC_AC_CT";
            }
            else
            {
                l_U389 = "SC_AC_CT_G";
            }
            sub_1477( "IF NOT IS_CHAR_INJURED(leadFriend)\n" );
            if (sub_9946())
            {
                if (NOT l_U394)
                {
                    TASK_LOOK_AT_CHAR( l_U217[I], sub_2690(), 3000, 0 );
                    SAY_AMBIENT_SPEECH( l_U217[I], "GREET_JOHNNY", 1, 0, 2 );
                    l_U394 = 1;
                }
                sub_1477( "IF isPlayerAbleToAddressPed()\n" );
                if (sub_10647( l_U390[I], 0 ))
                {
                    if (sub_10945( l_U390[I], l_U389, 0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U217[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U217[0] );
                            if (NOT (IS_GROUP_MEMBER( l_U217[0], sub_948() )))
                            {
                                SET_GROUP_MEMBER( sub_948(), l_U217[0] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U217[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U217[1] );
                            if (NOT (IS_GROUP_MEMBER( l_U217[1], sub_948() )))
                            {
                                SET_GROUP_MEMBER( sub_948(), l_U217[1] );
                            }
                        }
                        SAY_AMBIENT_SPEECH( sub_2690(), "STRIP_ASK_TO_LEAVE", 1, 1, 2 );
                        l_U394 = 0;
                        if (DOES_BLIP_EXIST( l_U222[0] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U222[0] );
                        }
                        if (DOES_BLIP_EXIST( l_U222[1] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U222[1] );
                        }
                        l_U115 = 2;
                        sub_556( l_U390[I], l_U389 );
                    }
                }
                else
                {
                    sub_556( l_U390[I], l_U389 );
                }
            }
            else if (l_U394)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2690(), l_U217[I], 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U217[I], "STRIP_ENJOYING_SELF", 1, 1, 2 );
                    l_U394 = 0;
                }
            }
            sub_1477( "IF NOT isPlayerAbleToAddressPed()\n" );
            sub_556( l_U390[I], l_U389 );
            if (g_U10504)
            {
                if (DOES_BLIP_EXIST( l_U222[0] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U222[0] );
                }
                if (DOES_BLIP_EXIST( l_U222[1] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U222[1] );
                }
                if (NOT (IS_CHAR_INJURED( l_U217[0] )))
                {
                    CLEAR_CHAR_TASKS( l_U217[0] );
                    if (NOT (IS_GROUP_MEMBER( l_U217[0], sub_948() )))
                    {
                        SET_GROUP_MEMBER( sub_948(), l_U217[0] );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U217[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U217[1] );
                    if (NOT (IS_GROUP_MEMBER( l_U217[1], sub_948() )))
                    {
                        SET_GROUP_MEMBER( sub_948(), l_U217[1] );
                    }
                }
                SAY_AMBIENT_SPEECH( l_U217[I], "GET_OUT_OF_HERE", 1, 1, 2 );
                PRINT_NOW( "STR_LEAVE", 7500, 1 );
                l_U115 = 2;
            }
        }
    }
    return;
}

int sub_9946()
{
    vector vVar2;
    vector vVar5;
    int I;

    if (NOT sub_1069())
    {
        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_826() ))
        {
            for ( I = 0; I < 3; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U217[I] )))
                {
                    if ((IS_PLAYER_SCRIPT_CONTROL_ON( sub_826() )) AND (sub_10041( ref l_U217[I] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2690(), l_U217[I], 3.00000000, 3.00000000, 2.00000000, 0 ))
                        {
                            GET_CHAR_COORDINATES( sub_2690(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
                            GET_CHAR_COORDINATES( l_U217[I], ref vVar5.x, ref vVar5.y, ref vVar5.z );
                            l_U248 = {vVar5 - vVar2};
                            GET_HEADING_FROM_VECTOR_2D( l_U248._fU0, l_U248._fU4, ref l_U251 );
                            if (sub_10300( l_U251, 75.00000000 ))
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

int sub_10041(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
        {
            GET_CHAR_SPEED( (uParam0^), ref fVar3 );
            if (fVar3 < 0.05000000)
            {
                if (l_U387 > 50)
                {
                    return 1;
                }
                l_U387++;
            }
            else
            {
                l_U387 = 0;
            }
        }
    }
    return 0;
}

int sub_10300(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2690() )))
    {
        GET_CHAR_HEADING( sub_2690(), ref fVar4 );
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

int sub_10647(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_826() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_826() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_826() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_10743())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2690() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_10828())
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

int sub_10743()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_10828()
{
    return sub_10839( 0, 0 );
}

int sub_10839(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_10945(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_10647( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_826(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_11220();
                l_U3 = 1;
                g_U10535 = 6;
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
                g_U10535 = 0;
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

void sub_11220()
{
    return sub_10839( 1, 1 );
}

void sub_12370()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (IS_CHAR_DEAD( l_U217[I] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217[I], sub_2690(), 0 ))
            {
                sub_1355( 5 );
                sub_1684();
            }
            else
            {
                sub_1355( 4 );
                sub_1684();
            }
            if (DOES_BLIP_EXIST( l_U222[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U222[I] );
            }
            l_U115 = 3;
        }
        else if (IS_CHAR_INJURED( l_U217[I] ))
        {
            SET_CHAR_HEALTH( l_U217[I], 0 );
        }
    }
    return;
}

int sub_12598(int iParam0)
{
    GET_PLAYER_GROUP( sub_826(), ref l_U358 );
    if ((NOT (IS_CHAR_DEAD( iParam0 ))) AND (NOT (IS_CHAR_INJURED( iParam0 ))))
    {
        if (IS_GROUP_MEMBER( iParam0, l_U358 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2690(), iParam0, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U332 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U332 );
                }
                return 1;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( iParam0 );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U332 )))
        {
            ADD_BLIP_FOR_CHAR( iParam0, ref l_U332 );
            SET_BLIP_AS_FRIENDLY( l_U332, 1 );
            sub_8259( l_U332 );
            if ((NOT g_U10504) AND (NOT g_U10503))
            {
                GET_GROUP_SIZE( sub_948(), ref l_U359, ref l_U304 );
                if (l_U304 > 0)
                {
                    if (iParam0 == l_U217[0])
                    {
                        PRINT_NOW( "FA_LEFT_FIRST", 7500, 1 );
                    }
                    else if (iParam0 == l_U217[1])
                    {
                        PRINT_NOW( "FA_LEFT_SECOND", 7500, 1 );
                    }
                }
                else
                {
                    PRINT_NOW( "FA_LEFT_BOTH", 7500, 1 );
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2690(), iParam0, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            SET_GROUP_MEMBER( l_U358, iParam0 );
        }
    }
    return 0;
}

int sub_13124(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U305 )))
    {
        return 1;
    }
    return 0;
}

void sub_13377()
{
    l_U259 = {-3.00000000, -3.00000000, -3.00000000};
    l_U262 = {3.00000000, 3.00000000, 3.00000000};
    l_U259 = {l_U207 + l_U259};
    l_U262 = {l_U207 + l_U262};
    l_U259 = {-3.00000000, -3.00000000, -3.00000000};
    l_U262 = {3.00000000, 3.00000000, 3.00000000};
    l_U259 = {l_U230[0] + l_U259};
    l_U262 = {l_U230[0] + l_U262};
    CLEAR_AREA( l_U207._fU0, l_U207._fU4, l_U207._fU8, 3.00000000, 0 );
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U287 + l_U259};
    l_U262 = {l_U287 + l_U262};
    CLEAR_AREA( l_U287._fU0, l_U287._fU4, l_U287._fU8, 1.00000000, 0 );
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U290[1] + l_U259};
    l_U262 = {l_U290[1] + l_U262};
    CLEAR_AREA( l_U290[1]._fU0, l_U290[1]._fU4, l_U290[1]._fU8, 1.00000000, 0 );
    l_U259 = {-1.00000000, -1.00000000, -1.00000000};
    l_U262 = {1.00000000, 1.00000000, 1.00000000};
    l_U259 = {l_U297[0] + l_U259};
    l_U262 = {l_U297[0] + l_U262};
    CLEAR_AREA( l_U297[0]._fU0, l_U297[0]._fU4, l_U297[0]._fU8, 1.00000000, 0 );
    return;
}

void sub_13981()
{
    return;
}

int sub_14050(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U307 )))
    {
        if (l_U116 == 0)
        {
            if (NOT l_U277)
            {
                l_U277 = 1;
            }
        }
        return 1;
    }
    return 0;
}

void sub_14185()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_14323()
{
    for ( l_U252 = 0; l_U252 < 2; l_U252++ )
    {
        CREATE_CHAR( 5, sub_14351(), l_U230[l_U252]._fU0, l_U230[l_U252]._fU4, l_U230[l_U252]._fU8, ref l_U227[l_U252], 1 );
        SET_CHAR_RELATIONSHIP( l_U227[l_U252], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U227[l_U252], 1, 4 );
        SET_CHAR_HEADING( l_U227[l_U252], l_U237[l_U252] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U227[l_U252] );
        SET_CHAR_NEVER_TARGETTED( l_U227[l_U252], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U227[l_U252], l_U308 );
    }
    return;
}

void sub_14351()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = 2;
    if (g_U12379)
    {
        if (NOT (sub_3243( 13 )))
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

void sub_14690()
{
    for ( l_U252 = 0; l_U252 < l_U215; l_U252++ )
    {
        CREATE_CHAR( 5, sub_14351(), l_U165[l_U252]._fU0, l_U165[l_U252]._fU4, l_U165[l_U252]._fU8, ref l_U160[l_U252], 1 );
        SET_CHAR_RELATIONSHIP( l_U160[l_U252], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U160[l_U252], 1, 4 );
        SET_CHAR_HEADING( l_U160[l_U252], l_U178[l_U252] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U160[l_U252] );
        SET_CHAR_NEVER_TARGETTED( l_U160[l_U252], 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U160[l_U252], 1 );
        if (IS_CHAR_MODEL( l_U160[l_U252], 1113677074 ))
        {
            sub_2739( 1, l_U160[l_U252], "STRIPPER_1", 0 );
            SET_AMBIENT_VOICE_NAME( l_U160[l_U252], "STRIPPER_1" );
        }
        else
        {
            sub_2739( 2, l_U160[l_U252], "STRIPPER_2", 0 );
            SET_AMBIENT_VOICE_NAME( l_U160[l_U252], "STRIPPER_2" );
        }
        if (l_U252 < 3)
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U160[l_U252], l_U305 );
        }
        else
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U160[l_U252], l_U306 );
        }
    }
    return;
}

void sub_15172()
{
    unknown uVar2;

    CREATE_CHAR( 4, l_U265, l_U244._fU0, l_U244._fU4, l_U244._fU8, ref l_U226, 1 );
    SET_CHAR_RELATIONSHIP( l_U226, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U226, 4 );
    SET_CHAR_HEADING( l_U226, l_U247 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U226 );
    SET_CHAR_NEVER_TARGETTED( l_U226, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U226, l_U305 );
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U226, 0 );
    SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U226, 1 );
    return;
}

void sub_15351()
{
    if (l_U116 == 0)
    {
        REQUEST_MODEL( l_U330 );
        REQUEST_MODEL( l_U331 );
        REQUEST_MODEL( l_U265 );
        REQUEST_ANIMS( l_U364 );
        if ((((HAS_MODEL_LOADED( l_U330 )) AND (HAS_MODEL_LOADED( l_U331 ))) AND (HAS_MODEL_LOADED( l_U265 ))) AND (HAVE_ANIMS_LOADED( l_U364 )))
        {
            l_U274 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U330 );
            REQUEST_MODEL( l_U331 );
            REQUEST_MODEL( l_U265 );
            REQUEST_ANIMS( l_U364 );
        }
    }
    else if (l_U116 == 1)
    {
        l_U349[0] = 1063816580;
        l_U349[1] = 807236245;
        REQUEST_MODEL( l_U349[0] );
        REQUEST_MODEL( l_U349[1] );
        REQUEST_MODEL( l_U330 );
        REQUEST_MODEL( l_U331 );
        REQUEST_MODEL( l_U265 );
        REQUEST_ANIMS( l_U364 );
        if ((((((HAS_MODEL_LOADED( l_U330 )) AND (HAS_MODEL_LOADED( l_U331 ))) AND (HAS_MODEL_LOADED( l_U265 ))) AND (HAS_MODEL_LOADED( l_U349[0] ))) AND (HAS_MODEL_LOADED( l_U349[1] ))) AND (HAVE_ANIMS_LOADED( l_U364 )))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U349[0] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U349[1] );
            l_U274 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U330 );
            REQUEST_MODEL( l_U331 );
            REQUEST_MODEL( l_U265 );
            REQUEST_ANIMS( l_U364 );
        }
    }
    return;
}

void sub_15846()
{
    if (l_U195)
    {
        sub_1477( "bPlayerGrabbed = TRUE\n" );
    }
    else
    {
        sub_1477( "bPlayerGrabbed = FALSE\n" );
    }
    if (l_U191)
    {
        sub_1477( "bPlayerHadDance = TRUE\n" );
    }
    else
    {
        sub_1477( "bPlayerHadDance = FALSE\n" );
    }
    sub_2819( "iTotalDancers = ", l_U215 );
    sub_1477( " *****\n" );
    return;
}

int sub_16061()
{
    l_U259 = {-20.00000000, -20.00000000, -20.00000000};
    l_U262 = {20.00000000, 20.00000000, 20.00000000};
    l_U259 = {l_U157 + l_U259};
    l_U262 = {l_U157 + l_U262};
    if (l_U116 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2690(), l_U230[0]._fU0, l_U230[0]._fU4, l_U230[0]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            g_U10504 = 1;
            sub_16234();
            return 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2690(), l_U336[0]._fU0, l_U336[0]._fU4, l_U336[0]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U10503 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2690(), l_U336[1]._fU0, l_U336[1]._fU4, l_U336[1]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U10503 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2690(), l_U336[2]._fU0, l_U336[2]._fU4, l_U336[2]._fU8, 3.00000000, 3.00000000, 0.50000000, 0 ))
    {
        g_U10503 = 1;
        return 1;
    }
    if (g_U10504)
    {
        return 1;
    }
    for ( l_U252 = 0; l_U252 < l_U215; l_U252++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U160[l_U252] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U160[l_U252], sub_2690(), 0 ))
            {
                g_U10504 = 1;
                return 1;
            }
        }
    }
    if ((IS_CHAR_SHOOTING( sub_2690() )) || (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U259, l_U262, 0 )))
    {
        g_U10504 = 1;
        return 1;
    }
    return 0;
}

void sub_16234()
{
    for ( l_U252 = 0; l_U252 < 2; l_U252++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U227[l_U252] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U227[l_U252], 24, ref l_U273 );
            if (l_U273 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U227[l_U252], 2, 0 );
                TASK_SMART_FLEE_POINT( l_U227[l_U252], l_U230[l_U252]._fU0, l_U230[l_U252]._fU4, l_U230[l_U252]._fU8, 100.00000000, -1 );
            }
        }
    }
    return;
}

void sub_16969()
{
    if (NOT (IS_CHAR_INJURED( l_U226 )))
    {
        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U226, sub_2690(), 0 )))
        {
            if (g_U10504)
            {
                GET_SCRIPT_TASK_STATUS( l_U226, 6, ref l_U273 );
                if (l_U273 == 7)
                {
                    TASK_COWER( l_U226 );
                }
            }
            GET_SCRIPT_TASK_STATUS( l_U226, 29, ref l_U273 );
            if (l_U273 == 7)
            {
                sub_17105( l_U226 );
            }
        }
        else if (g_U10504 == 0)
        {
            GET_SCRIPT_TASK_STATUS( l_U226, 6, ref l_U273 );
            if (l_U273 == 7)
            {
                TASK_COWER( l_U226 );
            }
            g_U10504 = 1;
        }
    }
    return;
}

void sub_17105(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_17116( 0, 1 );
    if (iVar3 == 0)
    {
        l_U109 = 0;
        sub_17166( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U109 = 2;
        sub_17166( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U109 = 2;
        sub_17166( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U109 = 0;
        sub_17166( uParam0 );
    };;;;
    return;
}

void sub_17116(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_17166(unknown uParam0)
{
    switch (l_U109)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U282 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U240._fU0, l_U240._fU4, l_U240._fU8, 2, 50000, 0.75000000 );
        TASK_ACHIEVE_HEADING( 0, l_U243 );
        TASK_PLAY_ANIM( 0, "CLEAN_GLASS", l_U364, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U282 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U282 );
            CLEAR_SEQUENCE_TASK( l_U282 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U282 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U244._fU0, l_U244._fU4, l_U244._fU8, 2, 50000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U247 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", l_U364, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U282 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U282 );
            CLEAR_SEQUENCE_TASK( l_U282 );
        }
        break;
    }
    return;
}

void sub_17721()
{
    for ( l_U252 = 0; l_U252 < l_U215; l_U252++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U160[l_U252] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U160[l_U252], 1 );
        }
    }
    return;
}

void sub_17910()
{
    float fVar2;

    fVar2 = 10.00000000;
    if (NOT (IS_CHAR_INJURED( l_U160[3] )))
    {
        if (NOT l_U195)
        {
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), l_U160[3], fVar2, fVar2, fVar2, 0 ))
            {
                SET_CHAR_VISIBLE( l_U160[3], 1 );
                SET_CHAR_COLLISION( l_U160[3], 1 );
                FREEZE_CHAR_POSITION( l_U160[3], 0 );
                l_U110[3] = 3;
                l_U215 = 4;
                l_U195 = 1;
                if (l_U191)
                {
                    l_U191 = 0;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U183 )))
            {
                DELETE_CHAR( ref l_U183 );
            }
            SET_CHAR_VISIBLE( l_U160[3], 0 );
            SET_CHAR_COLLISION( l_U160[3], 0 );
            FREEZE_CHAR_POSITION( l_U160[3], 1 );
            SET_CHAR_COORDINATES( l_U160[3], l_U165[3]._fU0, l_U165[3]._fU4, l_U165[3]._fU8 );
            SET_CHAR_HEADING( l_U160[3], l_U178[3] );
            l_U110[3] = 3;
            l_U215 = 3;
            l_U195 = 0;;
        }
        else if (l_U215 == 4)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), l_U160[3], fVar2, fVar2, fVar2, 0 )))
            {
                if (DOES_CAM_EXIST( l_U117 ))
                {
                    CLEAR_CHAR_TASKS( sub_2690() );
                    REMOVE_ANIMS( "MISSSTRIPCLUBHI" );
                    SET_PLAYER_CONTROL( sub_826(), 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_CAM_BEHIND_PED( sub_2690() );
                    DESTROY_CAM( l_U117 );
                    DESTROY_CAM( l_U118 );
                    END_CAM_COMMANDS( ref l_U151 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    UNREGISTER_SCRIPT_WITH_AUDIO();
                    l_U279 = 0;
                    l_U278 = 0;
                    l_U334 = 1;
                    SET_EVERYONE_IGNORE_PLAYER( sub_826(), 0 );
                    l_U191 = 1;
                    l_U276 = 1;
                    l_U155 = 1;
                    if (NOT (IS_CHAR_DEAD( sub_2690() )))
                    {
                        SET_CHAR_HEALTH( sub_2690(), 200 );
                    }
                    sub_777();
                    if (sub_18521() == -1)
                    {
                        if (l_U281)
                        {
                            sub_1684();
                            l_U281 = 0;
                        }
                    }
                    sub_18658();
                    l_U335 = 50;
                }
                SET_CHAR_VISIBLE( l_U160[3], 0 );
                SET_CHAR_COLLISION( l_U160[3], 0 );
                FREEZE_CHAR_POSITION( l_U160[3], 1 );
                SET_CHAR_COORDINATES( l_U160[3], l_U165[3]._fU0, l_U165[3]._fU4, l_U165[3]._fU8 );
                SET_CHAR_HEADING( l_U160[3], l_U178[3] );
                l_U110[3] = 3;
                l_U215 = 3;
                l_U195 = 0;
            }
        }
        if (l_U276)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), l_U160[3], 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                if (l_U191)
                {
                    l_U191 = 0;
                }
            }
        }
        if (NOT g_U10504)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U160[3], sub_2690(), 0 ))
            {
                g_U10504 = 1;
            }
        }
    }
    return;
}

void sub_18521()
{
    return sub_18540( g_U28807._fU0[0] );
}

int sub_18540(unknown uParam0)
{
    switch (uParam0)
    {
        case 34:
        return -1;
        break;
        case 3:
        return 201;
        break;
        case 7:
        return 202;
        break;
    }
    return -1;
}

int sub_18658()
{
    int iVar2;

    STORE_SCORE( sub_826(), ref iVar2 );
    if (iVar2 >= l_U335)
    {
        ADD_SCORE( sub_826(), -l_U335 );
        INCREMENT_INT_STAT_NO_MESSAGE( 96, l_U335 );
        l_U388 = 1;
        return 1;
        break;
    }
    l_U333 = 1;
    g_U10504 = 1;
    return 0;
}

void sub_19123(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    string sVar6;

    sVar6 = "STR_HLP";
    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (NOT g_U10504)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0, sub_2690(), 0 ))
            {
                g_U10504 = 1;
            }
        }
        switch ((uParam1^))
        {
            case 0:
            sub_1477( "ambStripClub - startPlayerSearch \n" );
            if ((NOT l_U195) AND (NOT l_U155))
            {
                if (sub_13124( sub_2690() ))
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), iParam0, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        GET_CHAR_COORDINATES( sub_2690(), ref l_U192._fU0, ref l_U192._fU4, ref l_U192._fU8 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U192._fU0, l_U192._fU4, l_U192._fU8, 2, -2, 2.00000000 );
                        l_U195 = 1;
                        (uParam1^) = 1;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( iParam0, 26, ref l_U273 );
                        if (l_U273 == 7)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0, 1 );
                            TASK_WANDER_STANDARD( iParam0 );
                        }
                        else if (NOT (sub_7281( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U282 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, -2, 2.00000000 );
                            TASK_ACHIEVE_HEADING( 0, l_U178[uParam2] );
                            CLOSE_SEQUENCE_TASK( l_U282 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                            CLEAR_SEQUENCE_TASK( l_U282 );
                            l_U191 = 1;
                        }
                    }
                }
            }
            break;
            case 1:
            sub_1477( "ambStripClub - checkPlayerPos \n" );
            if (NOT sub_9946())
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 27, ref l_U273 );
                if (l_U273 == 7)
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT sub_9946())
                        {
                            if (sub_10647( l_U283, 0 ))
                            {
                                SET_PLAYER_CONTROL( sub_826(), 0 );
                                SET_CURRENT_CHAR_WEAPON( sub_2690(), 0, 1 );
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 999999 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2690(), iParam0 );
                                OPEN_SEQUENCE_TASK( ref l_U282 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                                CLOSE_SEQUENCE_TASK( l_U282 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                                CLEAR_SEQUENCE_TASK( l_U282 );
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19930( ref l_U352, 1 );
                                    sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_20095( "SC1_S1DASK", ref l_U352, 6, 1 );
                                }
                                else
                                {
                                    sub_19930( ref l_U352, 1 );
                                    sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_20095( "SC1_S2DASK", ref l_U352, 6, 1 );
                                }
                                l_U272 = 0;
                                (uParam1^) = 2;
                            }
                        }
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, -2, 2.00000000 );
                        l_U195 = 0;
                        (uParam1^) = 0;
                    }
                }
                else if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( iParam0 );
                }
            }
            break;
            case 2:
            sub_1477( "ambStripClub - privateDanceProposition \n" );
            if (NOT sub_9946())
            {
                if (sub_10647( l_U283, 0 ))
                {
                    if (NOT (sub_21315( l_U352 )))
                    {
                        if (sub_10945( l_U283, sVar6, 0 ))
                        {
                            SET_PLAYER_CONTROL( sub_826(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            CLEAR_CHAR_TASKS( iParam0 );
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19930( ref l_U352, 1 );
                                sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                sub_20095( "SC1_S1DACC", ref l_U352, 6, 1 );
                            }
                            else
                            {
                                sub_19930( ref l_U352, 1 );
                                sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                sub_20095( "SC1_S2DACC", ref l_U352, 6, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U282 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U204._fU0, l_U204._fU4, l_U204._fU8, 2, -2, 2.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U201._fU0, l_U201._fU4, l_U201._fU8, 2, -2, 2.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U282 );
                            if (NOT (IS_CHAR_DEAD( iParam0 )))
                            {
                                CLEAR_CHAR_TASKS( iParam0 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U282 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 1 );
                            UNLOCK_RAGDOLL( iParam0, 0 );
                            sub_556( l_U283, sVar6 );
                            g_U10503 = 0;
                            l_U156 = 1;
                            (uParam1^) = 3;
                        }
                        else if (sub_21893())
                        {
                            CLEAR_CHAR_TASKS( iParam0 );
                            SET_PLAYER_CONTROL( sub_826(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            l_U252 = 0;
                            for ( l_U252 = 0; l_U252 < 3; l_U252++ )
                            {
                                l_U110[l_U252] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U282 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[l_U252]._fU0, l_U165[l_U252]._fU4, l_U165[l_U252]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                                CLOSE_SEQUENCE_TASK( l_U282 );
                                if (NOT (IS_CHAR_DEAD( l_U160[l_U252] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U160[l_U252] );
                                    TASK_PERFORM_SEQUENCE( l_U160[l_U252], l_U282 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U282 );
                            }
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19930( ref l_U352, 1 );
                                sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                sub_20095( "SC1_S1DREJ", ref l_U352, 6, 1 );
                            }
                            else
                            {
                                sub_19930( ref l_U352, 1 );
                                sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                sub_20095( "SC1_S2DREJ", ref l_U352, 6, 1 );
                            }
                            sub_556( l_U283, sVar6 );
                            l_U195 = 0;
                            l_U191 = 1;
                        }
                        else if (g_U10503)
                        {
                            for ( l_U252 = 0; l_U252 < 3; l_U252++ )
                            {
                                l_U110[l_U252] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U282 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[l_U252]._fU0, l_U165[l_U252]._fU4, l_U165[l_U252]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                                CLOSE_SEQUENCE_TASK( l_U282 );
                                if (NOT (IS_CHAR_DEAD( l_U160[l_U252] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U160[l_U252] );
                                    TASK_PERFORM_SEQUENCE( l_U160[l_U252], l_U282 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U282 );
                            }
                            SET_PLAYER_CONTROL( sub_826(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_556( l_U283, sVar6 );
                            l_U195 = 0;
                            l_U191 = 1;
                        }
                        else if (g_U10504)
                        {
                            for ( l_U252 = 0; l_U252 < 3; l_U252++ )
                            {
                                l_U110[l_U252] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U282 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[l_U252]._fU0, l_U165[l_U252]._fU4, l_U165[l_U252]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                                CLOSE_SEQUENCE_TASK( l_U282 );
                                if (NOT (IS_CHAR_DEAD( l_U160[l_U252] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U160[l_U252] );
                                    TASK_PERFORM_SEQUENCE( l_U160[l_U252], l_U282 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U282 );
                            }
                            SET_PLAYER_CONTROL( sub_826(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_556( l_U283, sVar6 );
                            l_U195 = 0;
                            l_U191 = 1;
                        };;;;
                    }
                }
                else
                {
                    for ( l_U252 = 0; l_U252 < 3; l_U252++ )
                    {
                        l_U110[l_U252] = 0;
                        OPEN_SEQUENCE_TASK( ref l_U282 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[l_U252]._fU0, l_U165[l_U252]._fU4, l_U165[l_U252]._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                        CLOSE_SEQUENCE_TASK( l_U282 );
                        if (NOT (IS_CHAR_DEAD( l_U160[l_U252] )))
                        {
                            CLEAR_CHAR_TASKS( l_U160[l_U252] );
                            TASK_PERFORM_SEQUENCE( l_U160[l_U252], l_U282 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U282 );
                    }
                    SET_PLAYER_CONTROL( sub_826(), 1 );
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                    CLEAR_HELP();
                    CLEAR_CHAR_TASKS( iParam0 );
                    sub_556( l_U283, sVar6 );
                }
            }
            break;
            case 3:
            sub_1477( "ambStripClub - followDancer \n" );
            if (l_U334)
            {
                if (l_U380 == 2)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_2690() ))) AND (NOT (IS_CHAR_INJURED( l_U183 ))))
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2690(), l_U187._fU0, l_U187._fU4, l_U187._fU8, ref l_U248._fU0, ref l_U248._fU4, ref l_U248._fU8 );
                        if (sub_23521( l_U248 ))
                        {
                            while (NOT (sub_23831( ref iParam0, l_U380 )))
                            {
                                WAIT( 0 );
                            }
                            (uParam1^) = 4;
                        }
                    }
                }
                else
                {
                    while (NOT (sub_23831( ref iParam0, l_U380 )))
                    {
                        WAIT( 0 );
                    }
                    (uParam1^) = 4;
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U273 );
                if (l_U273 == 7)
                {
                    if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2690(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (NOT (IS_CONTROL_JUST_PRESSED( 0, 59 ))))
                    {
                        if ((NOT sub_10743()) AND (NOT sub_1069()))
                        {
                            if (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))
                            {
                                g_U10503 = 0;
                                SET_EVERYONE_IGNORE_PLAYER( sub_826(), 1 );
                                if (sub_18521() == -1)
                                {
                                    if (NOT l_U281)
                                    {
                                        sub_7896();
                                        l_U281 = 1;
                                    }
                                }
                                SET_PLAYER_CONTROL( sub_826(), 0 );
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                SET_CURRENT_CHAR_WEAPON( sub_2690(), 0, 1 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                CLEAR_AREA( l_U207._fU0, l_U207._fU4, l_U207._fU8, 5.00000000, 0 );
                                SET_CHAR_COORDINATES( sub_2690(), l_U207._fU0, l_U207._fU4, l_U207._fU8 );
                                l_U329 = 0;
                                l_U213 = 0.00000000;
                                SET_CHAR_HEADING( sub_2690(), l_U213 );
                                if (NOT (IS_CHAR_DEAD( iParam0 )))
                                {
                                    SET_ROOM_FOR_CHAR_BY_NAME( iParam0, l_U306 );
                                }
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_2690(), l_U306 );
                                TASK_SIT_DOWN_ON_NEAREST_OBJECT( sub_2690(), 2, 0, l_U207, l_U328, 0.00000000, -2, 1 );
                                REQUEST_ANIMS( "MISSSTRIPCLUBHI" );
                                while (NOT (HAVE_ANIMS_LOADED( "MISSSTRIPCLUBHI" )))
                                {
                                    WAIT( 0 );
                                }
                                while (NOT (IS_CHAR_SITTING_IDLE( sub_2690() )))
                                {
                                    WAIT( 0 );
                                }
                                l_U380 = 0;
                                l_U156 = 1;
                                sub_25422();
                                GET_GAME_VIEWPORT_ID( ref uVar5 );
                                SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar5, l_U306 );
                                sub_25668( iParam0 );
                                REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                STOP_STREAM();
                                while (NOT (sub_23831( ref iParam0, l_U380 )))
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
                            TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, 15000, 2.00000000 );
                            l_U195 = 0;
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
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, 15000, 2.00000000 );
                        l_U195 = 0;
                        (uParam1^) = 0;
                    };;;
                }
                else if (sub_26363( sub_2690() ))
                {
                    if (NOT (sub_26363( iParam0 )))
                    {
                        if (IS_PLAYER_CONTROL_ON( sub_826() ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                            UNLOCK_RAGDOLL( iParam0, 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, 15000, 2.00000000 );
                            l_U195 = 0;
                            l_U191 = 0;
                            l_U110[3] = 3;
                            (uParam1^) = 0;
                        }
                        else
                        {
                            sub_1477( "ambStripClub - IF NOT IS_PLAYER_CONTROL_ON(PLAYER_ID()) \n" );
                        }
                    }
                }
            }
            break;
            case 4:
            sub_1477( "ambStripClub - enjoyPrivateDance \n" );
            if (sub_11220())
            {
                if (NOT l_U153)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                    {
                        if (l_U154)
                        {
                            if (l_U156 < 3)
                            {
                                l_U156++;
                            }
                            else
                            {
                                l_U156 = 1;
                            }
                        }
                        else if (l_U156 > 1)
                        {
                            l_U156--;
                        }
                        else
                        {
                            l_U154 = 1;
                            l_U156++;
                        }
                        if (l_U156 > 0)
                        {
                            if ((DOES_CAM_EXIST( l_U117 )) AND (DOES_CAM_EXIST( l_U118 )))
                            {
                                SET_CAM_POS( l_U117, l_U119[l_U156]._fU0, l_U119[l_U156]._fU4, l_U119[l_U156]._fU8 );
                                SET_CAM_ROT( l_U117, l_U135[l_U156]._fU0, l_U135[l_U156]._fU4, l_U135[l_U156]._fU8 );
                                SET_CAM_ACTIVE( l_U117, 1 );
                                SET_CAM_PROPAGATE( l_U117, 1 );
                                SET_CAM_ACTIVE( l_U118, 0 );
                                SET_CAM_PROPAGATE( l_U118, 0 );
                                SET_CAM_NEAR_DOF( l_U117, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U117, 10.00000000 );
                                SET_CAM_FOV( l_U117, 42.00000000 );
                                l_U153 = 1;
                            }
                        }
                        else if ((DOES_CAM_EXIST( l_U117 )) AND (DOES_CAM_EXIST( l_U118 )))
                        {
                            SET_CAM_ACTIVE( l_U117, 0 );
                            SET_CAM_PROPAGATE( l_U117, 0 );
                            SET_CAM_ACTIVE( l_U118, 1 );
                            SET_CAM_PROPAGATE( l_U118, 1 );
                            SET_CAM_NEAR_DOF( l_U118, 2.00000000 );
                            SET_CAM_FAR_DOF( l_U118, 10.00000000 );
                            l_U153 = 1;
                        }
                    }
                    sub_27186( l_U117 );
                }
                else if (NOT (IS_CONTROL_PRESSED( 2, 0 )))
                {
                    l_U153 = 0;
                }
                if (NOT l_U279)
                {
                    GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U273 );
                    if ((l_U273 == 7) || (HAS_CHAR_ANIM_FINISHED( iParam0, "MISSSTRIPCLUBHI", l_U395 )))
                    {
                        if (l_U380 < 2)
                        {
                            STOP_STREAM();
                            MUTE_POSITIONED_RADIO( 0 );
                            sub_28810( l_U380 );
                            l_U334 = 0;
                            while (sub_28884( iParam0, uParam1 ))
                            {
                                WAIT( 0 );
                                if (l_U334 == 0)
                                {
                                    if (NOT (IS_CHAR_DEAD( iParam0 )))
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                                        UNLOCK_RAGDOLL( iParam0, 1 );
                                        if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                        {
                                            sub_19930( ref l_U352, 1 );
                                            sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                            sub_20095( "SC1_S1DOVR", ref l_U352, 6, 1 );
                                        }
                                        else
                                        {
                                            sub_19930( ref l_U352, 1 );
                                            sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                            sub_20095( "SC1_S2DOVR", ref l_U352, 6, 1 );
                                        }
                                        CLEAR_SEQUENCE_TASK( l_U282 );
                                        OPEN_SEQUENCE_TASK( ref l_U282 );
                                        TASK_PLAY_ANIM( 0, "Idle_A", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( 0, "Idle_Loop", "MISSSTRIPCLUBHI", 4.00000000, 1, 0, 0, 0, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U282 );
                                        TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                                        CLEAR_SEQUENCE_TASK( l_U282 );
                                    }
                                    l_U334 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U279 = 1;
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", l_U395 ))
                    {
                        if (sub_29833( iParam0, l_U395 ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", l_U395, ref l_U382 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_34549( l_U395, l_U382 );
                            sub_1477( " *****\n" );
                        }
                        else
                        {
                            sub_34549( l_U395, l_U382 );
                            sub_1477( "\n" );
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1" ))
                    {
                        if (sub_29833( iParam0, "Tri_C6_3Way_Woman1" ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1", ref l_U382 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_34549( "Tri_C6_3Way_Woman1 ", l_U382 );
                            sub_1477( " *****\n" );
                        }
                        else
                        {
                            sub_34549( "Tri_C6_3Way_Woman1 ", l_U382 );
                            sub_1477( "\n" );
                        }
                    };;;
                }
                if ((uParam1^) == 4)
                {
                    if ((sub_29137()) || (l_U279))
                    {
                        sub_1477( "ambStripClub - Got to IF isStripButtonPressed() \n" );
                        if (NOT l_U278)
                        {
                            l_U279 = 1;
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
                            if (DOES_OBJECT_EXIST( l_U360 ))
                            {
                                DELETE_OBJECT( ref l_U360 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U183 )))
                            {
                                DELETE_CHAR( ref l_U183 );
                            }
                            if ((NOT (IS_CHAR_DEAD( sub_2690() ))) AND (NOT (IS_CHAR_INJURED( iParam0 ))))
                            {
                                CLEAR_HELP();
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 1 );
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( l_U207._fU0, l_U207._fU4, l_U207._fU8, 1.00000000, -45131371, 1 );
                                SET_CAM_POS( l_U117, l_U119[4]._fU0, l_U119[4]._fU4, l_U119[4]._fU8 );
                                SET_CAM_ROT( l_U117, l_U135[4]._fU0, l_U135[4]._fU4, l_U135[4]._fU8 );
                                SET_CAM_ACTIVE( l_U117, 1 );
                                SET_CAM_PROPAGATE( l_U117, 1 );
                                SET_CAM_ACTIVE( l_U118, 0 );
                                SET_CAM_PROPAGATE( l_U118, 0 );
                                SET_CAM_NEAR_DOF( l_U117, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U117, 10.00000000 );
                                SET_CHAR_COLLISION( iParam0, 1 );
                                FREEZE_CHAR_POSITION( iParam0, 0 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2690(), 0.00000000, 2.00000000, -100.00000000, ref l_U248._fU0, ref l_U248._fU4, ref l_U248._fU8 );
                                SET_CHAR_HEADING( iParam0, l_U214 );
                                SET_CHAR_COORDINATES( iParam0, l_U248._fU0, l_U248._fU4, l_U210._fU8 );
                                OPEN_SEQUENCE_TASK( ref l_U282 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                                CLOSE_SEQUENCE_TASK( l_U282 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                                CLEAR_SEQUENCE_TASK( l_U282 );
                                l_U278 = 1;
                                CLEAR_HELP();
                            }
                            if (NOT (IS_CHAR_INJURED( sub_2690() )))
                            {
                                if (IS_CHAR_SITTING_IDLE( sub_2690() ))
                                {
                                    CHANGE_CHAR_SIT_IDLE_ANIM( sub_2690(), "AMB_SIT_COUCH_M", "Sit_Down_Idle_01", 1 );
                                }
                            }
                            WAIT( 250 );
                            CLEAR_PRINTS();
                            DO_SCREEN_FADE_IN( 400 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                            SETTIMERA( 0 );
                            sub_1477( "ambStripClub - Got to IS_SCREEN_FADED_IN() \n" );
                        }
                        else if (iParam0 == l_U160[3])
                        {
                            l_U276 = 1;
                        }
                        else
                        {
                            l_U276 = 0;
                        }
                        sub_1477( "ambStripClub - Got to WHILE IS_SPEECH_CURRENTLY_PLAYING(ssStrippers) \n" );
                        while ((sub_21315( l_U352 )) AND (TIMERA() < 15000))
                        {
                            WAIT( 0 );
                        }
                        if (sub_18658())
                        {
                            if (NOT (sub_21315( l_U352 )))
                            {
                                if (NOT (IS_CHAR_DEAD( iParam0 )))
                                {
                                    l_U327 = 0;
                                    sub_2739( 0, sub_2690(), "LUIS", 0 );
                                    if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                    {
                                        sub_19930( ref l_U352, 1 );
                                        sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                        sub_36070( ref l_U310, "SC1_S1DOVR", ref l_U327 );
                                    }
                                    else
                                    {
                                        sub_19930( ref l_U352, 1 );
                                        sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                        sub_36070( ref l_U310, "SC1_S2DOVR", ref l_U327 );
                                    }
                                    sub_36070( ref l_U310, "E2SC1_THANKS", ref l_U327 );
                                    sub_36282( ref l_U310, ref l_U327 );
                                    sub_36336( ref l_U310, ref l_U352, 6, 1 );
                                }
                            }
                        }
                        SET_EVERYONE_IGNORE_PLAYER( sub_826(), 0 );
                        l_U195 = 0;
                        (uParam1^) = 0;
                        l_U191 = 1;
                        l_U334 = 0;
                        l_U335 = 50;
                        if (NOT (IS_CHAR_DEAD( sub_2690() )))
                        {
                            SET_CHAR_HEALTH( sub_2690(), 200 );
                        }
                        sub_1477( "ambStripClub - Got to WHILE IS_SPEECH_CURRENTLY_PLAYING(ssStrippers) \n" );
                        while (NOT (sub_36562( iParam0 )))
                        {
                            WAIT( 0 );
                        }
                        sub_777();
                        if (sub_18521() == -1)
                        {
                            if (l_U281)
                            {
                                sub_1684();
                                l_U281 = 0;
                            }
                        }
                        REMOVE_ANIMS( "MISSSTRIPCLUBHI" );
                        SET_PLAYER_CONTROL( sub_826(), 1 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_CAM_BEHIND_PED( sub_2690() );
                        DESTROY_CAM( l_U117 );
                        DESTROY_CAM( l_U118 );
                        END_CAM_COMMANDS( ref l_U151 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        UNREGISTER_SCRIPT_WITH_AUDIO();
                        sub_36969();
                        if (NOT (IS_CHAR_DEAD( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U282 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U165[uParam2]._fU0, l_U165[uParam2]._fU4, l_U165[uParam2]._fU8, 2, -2, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2690() );
                            CLOSE_SEQUENCE_TASK( l_U282 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U282 );
                            CLEAR_SEQUENCE_TASK( l_U282 );
                        }
                        l_U279 = 0;
                        l_U278 = 0;;
                    }
                    else if (NOT l_U278)
                    {
                        sub_37763();
                        if (TIMERA() > 30000)
                        {
                            SETTIMERA( 0 );
                            if (NOT (sub_21315( l_U352 )))
                            {
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19930( ref l_U352, 1 );
                                    sub_2739( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_20095( "SC1_S1CHAT", ref l_U352, 6, 1 );
                                }
                                else
                                {
                                    sub_19930( ref l_U352, 1 );
                                    sub_2739( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_20095( "SC1_S2CHAT1", ref l_U352, 6, 1 );
                                }
                            }
                        }
                        else if (TIMERA() > 2500)
                        {
                            if (TIMERB() > 30000)
                            {
                                if (NOT (sub_21315( l_U352 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_2690() )))
                                    {
                                        sub_2739( 0, sub_2690(), "LUIS", 0 );
                                        sub_20095( l_U309, ref l_U352, 6, 1 );
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

void sub_19930(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_20095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20116( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_20116(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20170( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20170(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20192( iParam1 )))
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_20868( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_20192(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1477( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_1477( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_1477( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_20868(int iParam0, int iParam1)
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

int sub_21315(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_1477( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_1477( "\n speech is not playing" );
    }
    return 0;
}

int sub_21893()
{
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U268, ref l_U269, ref l_U270, ref l_U271 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U268, ref l_U269 );
    }
    if ((l_U268 != 0) || (l_U269 != 0))
    {
        l_U272++;
    }
    if (l_U272 > 30)
    {
        l_U272 = 0;
        return 1;
    }
    return 0;
}

int sub_23521(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( l_U183 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U183, 114, ref l_U273 );
        if (l_U273 == 1)
        {
            SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 0 );
            SET_CHAR_VISIBLE( l_U183, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U183, 1 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            OPEN_SEQUENCE_TASK( ref l_U282 );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            TASK_CHAR_SLIDE_TO_COORD( 0, uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U214, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U282 );
            TASK_PERFORM_SEQUENCE( l_U183, l_U282 );
            CLEAR_SEQUENCE_TASK( l_U282 );
            sub_20095( l_U309, ref l_U352, 6, 1 );
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( l_U183, 29, ref l_U273 );
            if (l_U273 == 7)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23831(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (iParam1 == 0)
    {
        uVar4 = l_U365;
        l_U395 = l_U366;
        l_U210 = {l_U367};
        l_U376 = l_U377;
        l_U309 = "E2SC1_GOOD";
    }
    else if (iParam1 == 1)
    {
        uVar4 = l_U370;
        l_U395 = l_U371;
        l_U210 = {l_U372};
        l_U376 = l_U378;
        l_U309 = "E2SC1_BETTER";
    }
    else if (iParam1 == 2)
    {
        l_U376 = l_U379;
        l_U309 = "E2SC1_BEST";
    };;;
    if (PRELOAD_STREAM( l_U376 ))
    {
        if (iParam1 == 2)
        {
            if ((NOT (IS_CHAR_INJURED( sub_2690() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( sub_2690(), "MISSSTRIPCLUBHI", "Tri_C6_3Way_Niko", 1 );
                OPEN_SEQUENCE_TASK( ref l_U282 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman1", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U282 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U282 );
                CLEAR_SEQUENCE_TASK( l_U282 );
            }
            if (NOT (IS_CHAR_INJURED( l_U183 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U282 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman2", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U282 );
                TASK_PERFORM_SEQUENCE( l_U183, l_U282 );
                CLEAR_SEQUENCE_TASK( l_U282 );
            }
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
        else if ((NOT (IS_CHAR_INJURED( sub_2690() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
        {
            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2690(), "MISSSTRIPCLUBHI", uVar4, 1 );
            if (NOT (IS_CHAR_DEAD( sub_2690() )))
            {
                if (iParam1 == 0)
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2690(), l_U372._fU0, l_U372._fU4, l_U372._fU8, ref l_U372._fU0, ref l_U372._fU4, ref l_U372._fU8 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2690(), l_U367._fU0, l_U367._fU4, l_U367._fU8, ref l_U210._fU0, ref l_U210._fU4, ref l_U210._fU8 );
                    GET_CHAR_HEADING( sub_2690(), ref l_U213 );
                    l_U214 = l_U213 + 180.00000000;
                    if (l_U214 > 360.00000000)
                    {
                        l_U214 -= 360.00000000;
                    }
                    SET_CHAR_HEADING( (uParam0^), l_U214 );
                    SET_CHAR_COORDINATES( (uParam0^), l_U210._fU0, l_U210._fU4, l_U210._fU8 );
                    SET_CHAR_COLLISION( (uParam0^), 0 );
                    FREEZE_CHAR_POSITION( (uParam0^), 1 );
                }
            }
            OPEN_SEQUENCE_TASK( ref l_U282 );
            TASK_PLAY_ANIM( 0, l_U395, "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 1, 0 );
            CLOSE_SEQUENCE_TASK( l_U282 );
            TASK_PERFORM_SEQUENCE( (uParam0^), l_U282 );
            CLEAR_SEQUENCE_TASK( l_U282 );
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
    }
    return 0;
}

void sub_25422()
{
    BEGIN_CAM_COMMANDS( ref l_U151 );
    CREATE_CAM( 14, ref l_U117 );
    CREATE_CAM( 14, ref l_U118 );
    SET_CAM_POS( l_U117, l_U119[1]._fU0, l_U119[1]._fU4, l_U119[1]._fU8 );
    SET_CAM_ROT( l_U117, l_U135[1]._fU0, l_U135[1]._fU4, l_U135[1]._fU8 );
    SET_CAM_ACTIVE( l_U117, 1 );
    SET_CAM_PROPAGATE( l_U117, 1 );
    SET_CAM_NEAR_DOF( l_U117, 2.00000000 );
    SET_CAM_FAR_DOF( l_U117, 10.00000000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_FOV( l_U117, 42.00000000 );
    return;
}

void sub_25668(unknown uParam0)
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
    CREATE_CHAR( 5, iVar3, l_U184._fU0, l_U184._fU4, l_U184._fU8, ref l_U183, 1 );
    SET_CHAR_RELATIONSHIP( l_U183, 1, 0 );
    SET_CHAR_RELATIONSHIP( l_U183, 1, 4 );
    SET_CHAR_HEADING( l_U183, l_U190 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U183 );
    SET_CHAR_NEVER_TARGETTED( l_U183, 1 );
    TASK_START_SCENARIO_IN_PLACE( l_U183, "Scenario_Standing", -1082130432 );
    SET_CHAR_VISIBLE( l_U183, 0 );
    if (IS_CHAR_MODEL( l_U183, 1113677074 ))
    {
        sub_2739( 1, l_U183, "STRIPPER_1", 0 );
        SET_AMBIENT_VOICE_NAME( l_U183, "STRIPPER_1" );
    }
    else
    {
        sub_2739( 2, l_U183, "STRIPPER_2", 0 );
        SET_AMBIENT_VOICE_NAME( l_U183, "STRIPPER_2" );
    }
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U183, 0 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U183, l_U306 );
    return;
}

int sub_26363(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U306 )))
    {
        return 1;
    }
    return 0;
}

void sub_27186(unknown uParam0)
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

    uVar3 = {l_U135[l_U156]};
    iVar10 = 10;
    iVar11 = -10;
    iVar12 = 10;
    iVar13 = -10;
    iVar14 = 1;
    fVar15 = 1.00000000;
    iVar16 = 1;
    fVar17 = 1.00000000;
    GET_CAM_FOV( uParam0, ref l_U286 );
    if (IS_BUTTON_PRESSED( 0, 19 ))
    {
        if (l_U286 > l_U285)
        {
            l_U286 -= 1.00000000;
        }
    }
    else if (l_U286 < l_U284)
    {
        l_U286 += 1.00000000;
    }
    SET_CAM_FOV( uParam0, l_U286 );
    GET_CAM_ROT( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref uVar7, ref iVar8, ref iVar9 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_MOUSE_INPUT( ref iVar8, ref iVar9 );
        if ((iVar8 != 0) || (iVar9 != 0))
        {
            l_U396 = 1;
        }
    }
    else
    {
        l_U396 = 0;
    }
    if (((((iVar8 < 50) AND (iVar8 > 65486)) AND (iVar9 < 50)) AND (iVar9 > 65486)) AND (NOT l_U396))
    {
        l_U385 = 0;
        l_U384 = 0;
        l_U251 = VDIST( uVar3, l_U135[l_U156] );
        if (l_U251 > 0.10000000)
        {
            if (uVar3._fU0 > (l_U135[l_U156]._fU0 + fVar17))
            {
                uVar3._fU0 -= fVar17;
            }
            else if (uVar3._fU0 < (l_U135[l_U156]._fU0 - fVar17))
            {
                uVar3._fU0 += fVar17;
            }
            if (uVar3._fU8 > (l_U135[l_U156]._fU8 + fVar15))
            {
                uVar3._fU8 -= fVar15;
            }
            else if (uVar3._fU8 < (l_U135[l_U156]._fU8 - fVar15))
            {
                uVar3._fU8 += fVar15;
            }
            SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        }
        else
        {
            SET_CAM_ROT( uParam0, l_U135[l_U156]._fU0, l_U135[l_U156]._fU4, l_U135[l_U156]._fU8 );
            uVar3 = {l_U135[l_U156]};
        }
    }
    else if (iVar9 > 50)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U135[l_U156]._fU0 + 10.00000000))
            {
                l_U384 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U135[l_U156]._fU0 - 10.00000000))
        {
            l_U384 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 > 110)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U135[l_U156]._fU0 + 10.00000000))
            {
                l_U384 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U135[l_U156]._fU0 - 10.00000000))
        {
            l_U384 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 < 65486)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U135[l_U156]._fU0 - 10.00000000))
            {
                l_U384 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U135[l_U156]._fU0 + 10.00000000))
        {
            l_U384 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar9 < 65426)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U135[l_U156]._fU0 - 10.00000000))
            {
                l_U384 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U135[l_U156]._fU0 + 10.00000000))
        {
            l_U384 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar8 > 50)
    {
        if (uVar3._fU8 > (l_U135[l_U156]._fU8 - 10.00000000))
        {
            l_U385 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 > 110)
    {
        if (uVar3._fU8 > (l_U135[l_U156]._fU8 - 10.00000000))
        {
            l_U385 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 < 65486)
    {
        if (uVar3._fU8 < (l_U135[l_U156]._fU8 + 10.00000000))
        {
            l_U385 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    if (iVar8 < 65426)
    {
        if (uVar3._fU8 < (l_U135[l_U156]._fU8 + 10.00000000))
        {
            l_U385 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );;
    return;
}

void sub_28810(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U376 = l_U378;
    }
    else
    {
        l_U376 = l_U379;
    }
    PRELOAD_STREAM( l_U376 );
    return;
}

void sub_28884(unknown uParam0, unknown uParam1)
{
    int Result;
    string sVar5;

    Result = 1;
    sVar5 = "STR_AGN";
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar5 )))
    {
        PRINT_HELP_FOREVER( sVar5 );
        if (DOES_CAM_EXIST( l_U117 ))
        {
            if (l_U156 != 1)
            {
                l_U156 = 1;
                SET_CAM_POS( l_U117, l_U119[l_U156]._fU0, l_U119[l_U156]._fU4, l_U119[l_U156]._fU8 );
                SET_CAM_ROT( l_U117, l_U135[l_U156]._fU0, l_U135[l_U156]._fU4, l_U135[l_U156]._fU8 );
            }
            SET_CAM_FOV( l_U117, l_U284 );
            if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2690() ))))
            {
                TASK_LOOK_AT_CHAR( uParam0, sub_2690(), -2, 0 );
            }
        }
    }
    if (sub_29137())
    {
        Result = 0;
        l_U279 = 1;
        CLEAR_HELP();
    }
    else if (sub_29199())
    {
        if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2690() ))))
        {
            TASK_LOOK_AT_CHAR( uParam0, sub_2690(), 1, 0 );
        }
        Result = 0;
        l_U380++;
        (uParam1^) = 3;
        if (l_U380 == 0)
        {
            l_U335 = 50;
        }
        else if (l_U380 == 1)
        {
            l_U335 = 100;
        }
        else if (l_U380 == 2)
        {
            l_U335 = 250;
        };;;
        CLEAR_HELP();
    }
    return Result;
}

int sub_29137()
{
    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

int sub_29199()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_29833(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_PLAYING_ANIM( uParam0, "MISSSTRIPCLUBHI", uParam1 ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( uParam0, "MISSSTRIPCLUBHI", uParam1, ref l_U382 );
    }
    else
    {
        return 0;
    }
    if (COMPARE_STRING( uParam1, "Lap_Triangle_A3_Woman" ))
    {
        if ((l_U382 > 0.52324700) AND (l_U382 < 0.53288800))
        {
            return 1;
        }
        if ((l_U382 > 0.61193900) AND (l_U382 < 0.62095000))
        {
            return 1;
        }
        if ((l_U382 > 0.63925100) AND (l_U382 < 0.65241200))
        {
            return 1;
        }
        if ((l_U382 > 0.68149700) AND (l_U382 < 0.68554900))
        {
            return 1;
        }
        if ((l_U382 > 0.70069900) AND (l_U382 < 0.72343800))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Triangle_B3_Woman" ))
    {
        if ((l_U382 > 0.06655600) AND (l_U382 < 0.07128900))
        {
            return 1;
        }
        if ((l_U382 > 0.07604000) AND (l_U382 < 0.08912300))
        {
            return 1;
        }
        if ((l_U382 > 0.09845400) AND (l_U382 < 0.10628700))
        {
            return 1;
        }
        if ((l_U382 > 0.12243100) AND (l_U382 < 0.12760500))
        {
            return 1;
        }
        if ((l_U382 > 0.13721000) AND (l_U382 < 0.14627400))
        {
            return 1;
        }
        if ((l_U382 > 0.15714800) AND (l_U382 < 0.16362900))
        {
            return 1;
        }
        if ((l_U382 > 0.19519500) AND (l_U382 < 0.22365800))
        {
            return 1;
        }
        if ((l_U382 > 0.23661100) AND (l_U382 < 0.24339200))
        {
            return 1;
        }
        if ((l_U382 > 0.25288200) AND (l_U382 < 0.25979700))
        {
            return 1;
        }
        if ((l_U382 > 0.26377000) AND (l_U382 < 0.26556200))
        {
            return 1;
        }
        if ((l_U382 > 0.27656600) AND (l_U382 < 0.28340600))
        {
            return 1;
        }
        if ((l_U382 > 0.28897900) AND (l_U382 < 0.29459700))
        {
            return 1;
        }
        if ((l_U382 > 0.30806300) AND (l_U382 < 0.31288300))
        {
            return 1;
        }
        if ((l_U382 > 0.32529000) AND (l_U382 < 0.32801200))
        {
            return 1;
        }
        if ((l_U382 > 0.36630900) AND (l_U382 < 0.36980700))
        {
            return 1;
        }
        if ((l_U382 > 0.40667800) AND (l_U382 < 0.42403200))
        {
            return 1;
        }
        if ((l_U382 > 0.44832300) AND (l_U382 < 0.45460400))
        {
            return 1;
        }
        if ((l_U382 > 0.46352000) AND (l_U382 < 0.47036900))
        {
            return 1;
        }
        if ((l_U382 > 0.48455500) AND (l_U382 < 0.49150500))
        {
            return 1;
        }
        if ((l_U382 > 0.53320300) AND (l_U382 < 0.53929700))
        {
            return 1;
        }
        if ((l_U382 > 0.61667000) AND (l_U382 < 0.62434500))
        {
            return 1;
        }
        if ((l_U382 > 0.66192400) AND (l_U382 < 0.67467700))
        {
            return 1;
        }
        if ((l_U382 > 0.68147500) AND (l_U382 < 0.68975400))
        {
            return 1;
        }
        if ((l_U382 > 0.69438200) AND (l_U382 < 0.69863300))
        {
            return 1;
        }
        if ((l_U382 > 0.70192900) AND (l_U382 < 0.70674900))
        {
            return 1;
        }
        if ((l_U382 > 0.71093600) AND (l_U382 < 0.71560100))
        {
            return 1;
        }
        if ((l_U382 > 0.73810300) AND (l_U382 < 0.75603200))
        {
            return 1;
        }
        if ((l_U382 > 0.76443600) AND (l_U382 < 0.77422800))
        {
            return 1;
        }
        if ((l_U382 > 0.78226600) AND (l_U382 < 0.79352700))
        {
            return 1;
        }
        if ((l_U382 > 0.80322000) AND (l_U382 < 0.81403100))
        {
            return 1;
        }
        if ((l_U382 > 0.82743300) AND (l_U382 < 0.83809900))
        {
            return 1;
        }
        if ((l_U382 > 0.92863200) AND (l_U382 < 0.95752300))
        {
            return 1;
        }
        if ((l_U382 > 0.96494500) AND (l_U382 < 0.97697500))
        {
            return 1;
        }
        if ((l_U382 > 0.97697500) AND (l_U382 < 0.98457100))
        {
            return 1;
        }
        if ((l_U382 > 0.98619900) AND (l_U382 < 0.99091200))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_A2_Woman" ))
    {
        if ((l_U382 > 0.60844000) AND (l_U382 < 0.61829700))
        {
            return 1;
        }
        if ((l_U382 > 0.65144800) AND (l_U382 < 0.66399200))
        {
            return 1;
        }
        if ((l_U382 > 0.67295200) AND (l_U382 < 0.68908000))
        {
            return 1;
        }
        if ((l_U382 > 0.70610300) AND (l_U382 < 0.71058400))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_B1_Woman" ))
    {
        if ((l_U382 > 0.21957400) AND (l_U382 < 0.22319800))
        {
            return 1;
        }
        if ((l_U382 > 0.22899500) AND (l_U382 < 0.23841500))
        {
            return 1;
        }
        if ((l_U382 > 0.24058900) AND (l_U382 < 0.24783600))
        {
            return 1;
        }
        if ((l_U382 > 0.25363300) AND (l_U382 < 0.25870600))
        {
            return 1;
        }
        if ((l_U382 > 0.26450400) AND (l_U382 < 0.27102600))
        {
            return 1;
        }
        if ((l_U382 > 0.27754700) AND (l_U382 < 0.28986800))
        {
            return 1;
        }
        if ((l_U382 > 0.30146200) AND (l_U382 < 0.30870900))
        {
            return 1;
        }
        if ((l_U382 > 0.31740500) AND (l_U382 < 0.32392600))
        {
            return 1;
        }
        if ((l_U382 > 0.32827500) AND (l_U382 < 0.33479700))
        {
            return 1;
        }
        if ((l_U382 > 0.33914500) AND (l_U382 < 0.34276800))
        {
            return 1;
        }
        if ((l_U382 > 0.34494200) AND (l_U382 < 0.34711600))
        {
            return 1;
        }
        if ((l_U382 > 0.34929000) AND (l_U382 < 0.35218900))
        {
            return 1;
        }
        if ((l_U382 > 0.35508800) AND (l_U382 < 0.35798600))
        {
            return 1;
        }
        if ((l_U382 > 0.36016000) AND (l_U382 < 0.36450800))
        {
            return 1;
        }
        if ((l_U382 > 0.36668400) AND (l_U382 < 0.37392900))
        {
            return 1;
        }
        if ((l_U382 > 0.37972700) AND (l_U382 < 0.38479900))
        {
            return 1;
        }
        if ((l_U382 > 0.38987200) AND (l_U382 < 0.39566900))
        {
            return 1;
        }
        if ((l_U382 > 0.40653900) AND (l_U382 < 0.41741000))
        {
            return 1;
        }
        if ((l_U382 > 0.45581700) AND (l_U382 < 0.47393400))
        {
            return 1;
        }
        if ((l_U382 > 0.48190500) AND (l_U382 < 0.49060100))
        {
            return 1;
        }
        if ((l_U382 > 0.49784700) AND (l_U382 < 0.50509600))
        {
            return 1;
        }
        if ((l_U382 > 0.51016700) AND (l_U382 < 0.51668800))
        {
            return 1;
        }
        if ((l_U382 > 0.53480500) AND (l_U382 < 0.55002300))
        {
            return 1;
        }
        if ((l_U382 > 0.55944400) AND (l_U382 < 0.56886500))
        {
            return 1;
        }
        if ((l_U382 > 0.58118500) AND (l_U382 < 0.60437400))
        {
            return 1;
        }
        if ((l_U382 > 0.61886800) AND (l_U382 < 0.62394000))
        {
            return 1;
        }
        if ((l_U382 > 0.66524700) AND (l_U382 < 0.68481300))
        {
            return 1;
        }
        if ((l_U382 > 0.68988600) AND (l_U382 < 0.69713200))
        {
            return 1;
        }
        if ((l_U382 > 0.70655200) AND (l_U382 < 0.71235000))
        {
            return 1;
        }
        if ((l_U382 > 0.72322000) AND (l_U382 < 0.73988900))
        {
            return 1;
        }
        if ((l_U382 > 0.74713400) AND (l_U382 < 0.75075800))
        {
            return 1;
        }
        if ((l_U382 > 0.75365600) AND (l_U382 < 0.75655500))
        {
            return 1;
        }
        if ((l_U382 > 0.75945400) AND (l_U382 < 0.76235200))
        {
            return 1;
        }
        if ((l_U382 > 0.76742500) AND (l_U382 < 0.76959900))
        {
            return 1;
        }
        if ((l_U382 > 0.77249800) AND (l_U382 < 0.77467300))
        {
            return 1;
        }
        if ((l_U382 > 0.77757000) AND (l_U382 < 0.78119400))
        {
            return 1;
        }
        if ((l_U382 > 0.78336900) AND (l_U382 < 0.78699100))
        {
            return 1;
        }
        if ((l_U382 > 0.78916500) AND (l_U382 < 0.79568700))
        {
            return 1;
        }
        if ((l_U382 > 0.81380600) AND (l_U382 < 0.82177600))
        {
            return 1;
        }
        if ((l_U382 > 0.83192100) AND (l_U382 < 0.83844200))
        {
            return 1;
        }
        if ((l_U382 > 0.84496500) AND (l_U382 < 0.85148700))
        {
            return 1;
        }
        if ((l_U382 > 0.87177700) AND (l_U382 < 0.87902600))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Tri_C6_3Way_Woman1" ))
    {
        if ((l_U382 > 0.26024000) AND (l_U382 < 0.26649100))
        {
            return 1;
        }
        if ((l_U382 > 0.27373000) AND (l_U382 < 0.28109400))
        {
            return 1;
        }
        if ((l_U382 > 0.28902400) AND (l_U382 < 0.29412100))
        {
            return 1;
        }
        if ((l_U382 > 0.30478300) AND (l_U382 < 0.30988100))
        {
            return 1;
        }
        if ((l_U382 > 0.31497900) AND (l_U382 < 0.32060700))
        {
            return 1;
        }
        if ((l_U382 > 0.33080200) AND (l_U382 < 0.33420000))
        {
            return 1;
        }
        if ((l_U382 > 0.33929800) AND (l_U382 < 0.34099800))
        {
            return 1;
        }
        if ((l_U382 > 0.34769800) AND (l_U382 < 0.34939700))
        {
            return 1;
        }
        if ((l_U382 > 0.39898500) AND (l_U382 < 0.40803100))
        {
            return 1;
        }
        if ((l_U382 > 0.41992600) AND (l_U382 < 0.42389100))
        {
            return 1;
        }
        if ((l_U382 > 0.43012100) AND (l_U382 < 0.43465400))
        {
            return 1;
        }
        if ((l_U382 > 0.44073900) AND (l_U382 < 0.44525700))
        {
            return 1;
        }
        if ((l_U382 > 0.45318700) AND (l_U382 < 0.45715200))
        {
            return 1;
        }
        if ((l_U382 > 0.46508300) AND (l_U382 < 0.46847800))
        {
            return 1;
        }
        if ((l_U382 > 0.47584200) AND (l_U382 < 0.47867400))
        {
            return 1;
        }
        if ((l_U382 > 0.48994600) AND (l_U382 < 0.49221300))
        {
            return 1;
        }
        if ((l_U382 > 0.54430200) AND (l_U382 < 0.55109900))
        {
            return 1;
        }
        if ((l_U382 > 0.55841600) AND (l_U382 < 0.56351500))
        {
            return 1;
        }
        if ((l_U382 > 0.56861100) AND (l_U382 < 0.57314300))
        {
            return 1;
        }
        if ((l_U382 > 0.57824100) AND (l_U382 < 0.58560400))
        {
            return 1;
        }
        if ((l_U382 > 0.59295100) AND (l_U382 < 0.59629100))
        {
            return 1;
        }
        if ((l_U382 > 0.60138800) AND (l_U382 < 0.60592000))
        {
            return 1;
        }
        if ((l_U382 > 0.61102200) AND (l_U382 < 0.61441800))
        {
            return 1;
        }
        if ((l_U382 > 0.62064700) AND (l_U382 < 0.62513200))
        {
            return 1;
        }
        if ((l_U382 > 0.63135600) AND (l_U382 < 0.63531900))
        {
            return 1;
        }
        if ((l_U382 > 0.64155100) AND (l_U382 < 0.64381600))
        {
            return 1;
        }
        if ((l_U382 > 0.64664800) AND (l_U382 < 0.64891300))
        {
            return 1;
        }
        if ((l_U382 > 0.65117900) AND (l_U382 < 0.65346100))
        {
            return 1;
        }
        if ((l_U382 > 0.65621800) AND (l_U382 < 0.65905100))
        {
            return 1;
        }
        if ((l_U382 > 0.66188400) AND (l_U382 < 0.66358200))
        {
            return 1;
        }
        if ((l_U382 > 0.66698000) AND (l_U382 < 0.66864700))
        {
            return 1;
        }
        if ((l_U382 > 0.67201800) AND (l_U382 < 0.67371600))
        {
            return 1;
        }
        if ((l_U382 > 0.69175300) AND (l_U382 < 0.69849600))
        {
            return 1;
        }
        if ((l_U382 > 0.70913800) AND (l_U382 < 0.71310900))
        {
            return 1;
        }
        if ((l_U382 > 0.71932500) AND (l_U382 < 0.72782000))
        {
            return 1;
        }
        if ((l_U382 > 0.73519500) AND (l_U382 < 0.73965300))
        {
            return 1;
        }
        if ((l_U382 > 0.74701500) AND (l_U382 < 0.75438000))
        {
            return 1;
        }
        if ((l_U382 > 0.76609900) AND (l_U382 < 0.77239000))
        {
            return 1;
        }
        if ((l_U382 > 0.77734500) AND (l_U382 < 0.78244300))
        {
            return 1;
        }
        if ((l_U382 > 0.78867300) AND (l_U382 < 0.79263900))
        {
            return 1;
        }
        if ((l_U382 > 0.79835500) AND (l_U382 < 0.80319200))
        {
            return 1;
        }
        if ((l_U382 > 0.81168400) AND (l_U382 < 0.81678000))
        {
            return 1;
        }
        if ((l_U382 > 0.82408800) AND (l_U382 < 0.83031700))
        {
            return 1;
        }
        if ((l_U382 > 0.84045800) AND (l_U382 < 0.84656000))
        {
            return 1;
        }
        if ((l_U382 > 0.88333400) AND (l_U382 < 0.88771200))
        {
            return 1;
        }
        if ((l_U382 > 0.89280800) AND (l_U382 < 0.89618500))
        {
            return 1;
        }
        if ((l_U382 > 0.91364900) AND (l_U382 < 0.92716400))
        {
            return 1;
        }
        if ((l_U382 > 0.93393400) AND (l_U382 < 0.93955400))
        {
            return 1;
        }
        if (l_U382 > 0.98000000)
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

void sub_34549(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_36070(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_36282(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_36336(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_36357( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_36357(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_20170( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_36562(unknown uParam0)
{
    if (l_U329)
    {
        GET_SCRIPT_TASK_STATUS( sub_2690(), 1, ref l_U273 );
        if (l_U273 == 7)
        {
            if ((sub_36616( l_U352 )) == -1)
            {
                if (NOT (IS_CHAR_INJURED( uParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2690(), uParam0, 3000, 0 );
                    TASK_LOOK_AT_CHAR( uParam0, sub_2690(), 6000, 0 );
                }
                sub_20095( l_U309, ref l_U352, 6, 1 );
                CLEAR_HELP();
                return 1;
            }
        }
    }
    else
    {
        TASK_STAND_STILL( sub_2690(), 0 );
        l_U329 = 1;
    }
    return 0;
}

void sub_36616(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_21315( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_36969()
{
    if (COMPARE_STRING( l_U377, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U377 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U377, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U377 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U377, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U377 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U378, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U378 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U378, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U378 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U378, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U378 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U379, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U379 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U377, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U379 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U377, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U379 = "LAP_DANCE_RICK_JAMES";
    };;;
    return;
}

void sub_37763()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    string sVar9;

    sVar9 = "STR_HLP2";
    if (l_U156 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U360 ))
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
            if (NOT IS_USING_CONTROLLER())
            {
                GET_MOUSE_INPUT( ref uVar4, ref uVar5 );
            }
            uVar6 = TO_FLOAT( uVar4 );
            uVar7 = TO_FLOAT( uVar5 );
            l_U361._fU0 = uVar8 * uVar6;
            l_U361._fU8 = uVar8 * uVar7;
            if (IS_LOOK_INVERTED())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U360, l_U361._fU0, l_U361._fU4, l_U361._fU8, ref l_U135[0]._fU0, ref l_U135[0]._fU4, ref l_U135[0]._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U360, l_U361._fU0, l_U361._fU4, -l_U361._fU8, ref l_U135[0]._fU0, ref l_U135[0]._fU4, ref l_U135[0]._fU8 );
            }
            SET_CAM_POS( l_U118, l_U119[0]._fU0, l_U119[0]._fU4, l_U119[0]._fU8 );
            POINT_CAM_AT_COORD( l_U118, l_U135[0]._fU0, l_U135[0]._fU4, l_U135[0]._fU8 );
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

void sub_38874()
{
    for ( l_U252 = 0; l_U252 < l_U215; l_U252++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U160[l_U252] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U160[l_U252], 25, ref l_U273 );
            if (l_U273 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U160[l_U252], 2, 0 );
                TASK_SMART_FLEE_CHAR( l_U160[l_U252], sub_2690(), 100.00000000, 30000 );
            }
        }
    }
    return;
}
