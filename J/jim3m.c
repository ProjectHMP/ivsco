void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = -1;
    l_U108 = 0;
    l_U109 = 1;
    l_U110 = 3;
    l_U116 = 0;
    l_U117 = -1;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U126 = -1;
    l_U140 = 15.00000000;
    l_U141 = 35.00000000;
    l_U142 = 16.00000000;
    l_U143 = 0.00000000;
    l_U149 = 1000.00000000;
    l_U150 = 7500.00000000;
    l_U159 = 1;
    l_U160 = 30.00000000;
    l_U161 = 30.00000000;
    l_U162 = 2.00000000;
    l_U172 = 0.00000000;
    l_U173 = 0.00000000;
    l_U185 = 1;
    l_U186 = 0;
    l_U187 = -1;
    l_U188 = 1;
    l_U189 = -1;
    l_U190 = -1;
    l_U191 = 15.00000000;
    l_U218 = 0;
    l_U219 = -1949702649;
    l_U220 = 2075870698;
    l_U225 = 0.12000000;
    l_U236 = 1;
    l_U237 = 1;
    l_U362 = 0;
    l_U370 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U393 = 1;
    l_U394 = 1;
    l_U395 = 0;
    l_U396 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U401 = 0;
    l_U402 = 0;
    l_U403 = 0;
    l_U404 = 0;
    l_U405 = 0;
    l_U406 = 0;
    l_U407 = 0;
    l_U408 = 1;
    l_U409 = 0;
    l_U410 = 0;
    l_U411 = 1;
    l_U412 = 1;
    l_U413 = 0;
    l_U414 = 0;
    l_U415 = 1;
    l_U416 = 1;
    l_U573 = 0;
    l_U576 = 1;
    l_U586 = -1;
    l_U587 = "GARAGE_DOOR";
    l_U599 = 7000;
    l_U601 = 1;
    l_U602 = {-1740.67900000, 330.22820000, 24.94780000};
    l_U611 = 8;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U573 == 0)
        {
            l_U573 = 1;
            sub_599( l_U611, l_U592 );
            sub_656();
        }
        sub_3082();
    }
    g_U10460 = 0;
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    DESTROY_ALL_CAMS();
    CLEAR_HELP();
    sub_4088( 0, sub_3733(), "JOHNNY", 0 );
    LOAD_ADDITIONAL_TEXT( "JIM3P", 0 );
    l_U592 = sub_4254( l_U611 );
    l_U591 = sub_4365( l_U611, 1, l_U592 );
    if (g_U38760 == 0)
    {
        PRINT_BIG( "title0", 5000, 2 );
    }
    if (g_U38760 == 1)
    {
        PRINT_BIG( "title1", 5000, 2 );
    }
    if (g_U38760 == 2)
    {
        PRINT_BIG( "title2", 5000, 2 );
    }
    if (g_U38760 == 3)
    {
        PRINT_BIG( "title3", 5000, 2 );
    }
    if (g_U38760 == 4)
    {
        PRINT_BIG( "title4", 5000, 2 );
    }
    if (g_U38760 == 5)
    {
        PRINT_BIG( "title5", 5000, 2 );
    }
    if (g_U38760 == 6)
    {
        PRINT_BIG( "title6", 5000, 2 );
    }
    if (g_U38760 == 7)
    {
        PRINT_BIG( "title7", 5000, 2 );
    }
    if (g_U38760 == 8)
    {
        PRINT_BIG( "title8", 5000, 2 );
    }
    if (g_U38760 == 9)
    {
        PRINT_BIG( "title9", 5000, 2 );
    }
    sub_4756();
    if (l_U652 == 584879743)
    {
        PRINT_NOW( "J3_01b", 7500, 1 );
    }
    if (l_U652 == 1265391242)
    {
        PRINT_NOW( "J3_01f", 7500, 1 );
    }
    if (l_U652 == -114291515)
    {
        PRINT_NOW( "J3_01c", 7500, 1 );
    }
    if (l_U652 == 788045382)
    {
        PRINT_NOW( "J3_01a", 7500, 1 );
    }
    if (l_U652 == 1203311498)
    {
        PRINT_NOW( "J3_01d", 7500, 1 );
    }
    if (l_U652 == -909201658)
    {
        PRINT_NOW( "J3_01e", 7500, 1 );
    }
    if (l_U652 == -1606187161)
    {
        PRINT_NOW( "J3_01g", 7500, 1 );
    }
    if (l_U652 == -571009320)
    {
        PRINT_NOW( "J3_01i", 7500, 1 );
    }
    if (l_U652 == -618617997)
    {
        PRINT_NOW( "J3_01h", 7500, 1 );
    }
    if (l_U652 == 2006142190)
    {
        PRINT_NOW( "J3_01j", 7500, 1 );
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U370)
        {
            case 0:
            sub_15715();
            if (l_U392 == 1)
            {
                sub_50315();
            }
            break;
            case 1:
            if (l_U391 == 1)
            {
                sub_62894();
            }
            sub_50315();
            sub_63146();
            break;
        }
        if (sub_63557( l_U611 ))
        {
            sub_50625( ref l_U371, "E1J3_CANCEL2", "E1J3_CRESP" );
            sub_64148();
        }
    }
    return;
}

void sub_599(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_656()
{
    sub_665();
    return;
}

void sub_665()
{
    int iVar2;

    iVar2 = 8;
    sub_679( iVar2 );
    sub_1625( iVar2 );
    return;
}

void sub_679(unknown uParam0)
{
    if (g_U816)
    {
        sub_698();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_788(), 150 );
    switch (uParam0)
    {
        case 2:
        case 8:
        sub_861( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1393( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1528();
    return;
}

void sub_698()
{
    sub_707();
    return;
}

void sub_707()
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

void sub_788()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_872( uParam1 );
    sub_1067( uParam0, 0, uParam2 );
    sub_1067( uParam0, 1, uParam3 );
    sub_1067( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_1260();
    return;
}

void sub_872(unknown uParam0)
{
    ADD_SCORE( sub_788(), uParam0 );
    sub_897( uParam0 );
    return;
}

void sub_897(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1008( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1008(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1067(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1260()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U356[I] = 4;
    }
    return;
}

void sub_1393(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1528()
{
    sub_1537();
    return;
}

void sub_1537()
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

void sub_1625(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1393( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U14838[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1393( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U14838[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U14838[uParam0]._fU160._fU100 < iVar3)
    {
        g_U14838[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U12303 = 0;
    g_U12306[uParam0]._fU28 = 1;
    sub_2024();
    sub_2648();
    uVar4 = sub_2683( uParam0 );
    sub_2938( uVar4, 0 );
    sub_3019();
    return;
}

void sub_2024()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2062( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2062( 1, g_U572[I] )) != 0)
            {
                sub_2348( I );
            }
        }
    }
    if (NOT sub_2514())
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

int sub_2062(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2348(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2433( g_U572 - 1 );
    return;
}

void sub_2433(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2514()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2062( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2648()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2683(unknown uParam0)
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
    sub_1008( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2938(int iParam0, boolean bParam1)
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

void sub_3019()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_3082()
{
    DONT_SUPPRESS_CAR_MODEL( l_U652 );
    ENABLE_SCENE_STREAMING( 1 );
    sub_3111();
    g_U2771 = 0;
    g_U10460 = 1;
    g_U2765 = nil;
    sub_3157();
    if (DOES_BLIP_EXIST( l_U671 ))
    {
        SET_ROUTE( l_U671, 0 );
    }
    else
    {
        SET_ROUTE( l_U671, 0 );
    }
    if (DOES_BLIP_EXIST( l_U673 ))
    {
        SET_ROUTE( l_U673, 0 );
    }
    else
    {
        SET_ROUTE( l_U673, 0 );
    }
    REMOVE_BLIP( l_U671 );
    REMOVE_BLIP( l_U673 );
    if ((NOT (IS_CAR_DEAD( l_U664 ))) AND (IS_VEH_DRIVEABLE( l_U664 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U664 ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U664 );
        }
    }
    sub_3166();
    if (NOT g_U0)
    {
        if (IS_PLAYER_PLAYING( sub_788() ))
        {
            ;
        }
    }
    else
    {
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3733(), 1 );
    sub_3783( 1 );
    sub_3928( l_U611 );
    sub_3977( l_U611 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3111()
{
    g_U94._fU76 = -1;
    return;
}

void sub_3157()
{
    sub_3166();
    sub_3317();
    return;
}

void sub_3166()
{
    if (l_U124)
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
    l_U122 = 0;
    l_U121 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3317()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U125 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U125, 0 );
            SET_CAM_ACTIVE( l_U125, 0 );
            DESTROY_CAM( l_U125 );
            l_U125 = nil;
            l_U126 = -1;
            l_U138 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U138 );
            }
            else
            {
                l_U138 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_3733()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3783(unknown uParam0)
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

void sub_3928(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}

void sub_3977(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_4088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U10._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U10._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4168( "\n PED NUMBER ", uParam0 );
    sub_4208( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4168(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4208(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4254(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15862[uParam0]._fU228._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_4365(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uParam2];
}

void sub_4756()
{
    if (l_U591 == 0)
    {
        l_U591 = 0;
        l_U601 = 1;
        l_U393 = 1;
        l_U605 = {-1239.14700000, 1120.09200000, 18.48170000};
        l_U608 = 315.62880000;
        l_U648 = {-1238.55400000, 1120.74700000, 18.46520000};
        l_U651 = 159.70300000;
        l_U394 = 1;
        l_U415 = 0;
        l_U610 = 764249904;
        l_U609 = "Scenario_ServiceWorker";
        l_U577 = "wipe_counter";
        l_U578 = "amb@bar";
    }
    if (l_U591 == 1)
    {
        l_U393 = 1;
        l_U601 = 2;
        l_U591 = 1;
        l_U605 = {1142.76500000, 1666.38900000, 15.68330000};
        l_U608 = 303.43000000;
        l_U610 = -2107556865;
        l_U609 = "HangOut_Street";
        l_U415 = 1;
        l_U612 = {1143.35200000, 1666.98900000, 15.69640000};
        l_U615 = 106.38310000;
        l_U616 = 1113677074;
        l_U617 = "HangOut_Street";
        l_U394 = 0;
        l_U648 = {1144.89000000, 1662.02700000, 15.71590000};
        l_U651 = 341.43560000;
    }
    if (l_U591 == 2)
    {
        l_U591 = 2;
        l_U393 = 1;
        l_U601 = 4;
        l_U605 = {1373.42300000, 95.66360000, 30.10600000};
        l_U608 = 75.00470000;
        l_U394 = 0;
        l_U648 = {1371.44000000, 96.32150000, 30.07270000};
        l_U651 = 1.53000000;
        l_U415 = 1;
        l_U610 = 226415164;
        l_U609 = "Scenario_SmokingOutsideOffice";
        l_U612 = {1373.12400000, 96.78570000, 30.10040000};
        l_U615 = 195.28700000;
        l_U616 = -1159156463;
        l_U617 = "Scenario_SmokingOutsideOffice";
        l_U618 = {1369.97800000, 95.33980000, 30.06710000};
        l_U621 = 265.03710000;
        l_U622 = 479817841;
        l_U623 = "Scenario_SmokingOutsideOffice";
        l_U624 = {1375.29700000, 97.66310000, 30.16210000};
        l_U627 = 133.15960000;
        l_U628 = 977480632;
        l_U629 = "Scenario_SmokingOutsideOffice";
    }
    if (l_U591 == 3)
    {
        l_U601 = 0;
        l_U591 = 3;
        l_U605 = {-759.58000000, 451.10000000, 20.63340000};
        l_U608 = 127.00470000;
        l_U610 = 764249904;
        l_U609 = "Scenario_SmokingOutsideOffice";
        l_U612 = {-760.04000000, 451.40270000, 21.63840000};
        l_U615 = 303.83650000;
        l_U616 = 768442188;
        l_U617 = "Scenario_SmokingOutsideOffice";
        l_U406 = 1;
        l_U393 = 1;
        l_U648 = {-758.97000000, 468.74000000, 20.63340000};
        l_U651 = 271.53000000;
        l_U415 = 0;
        l_U396 = 1;
        l_U394 = 1;
    }
    if (l_U591 == 4)
    {
        l_U601 = 1;
        l_U591 = 4;
        l_U605 = {57.74930000, -420.84870000, 13.78470000};
        l_U608 = 127.00470000;
        l_U610 = 768442188;
        l_U415 = 0;
        l_U393 = 0;
        l_U648 = {57.74930000, -424.84870000, 13.78470000};
        l_U651 = 359.99630000;
        l_U394 = 1;
    }
    if (l_U591 == 5)
    {
        l_U393 = 0;
        l_U601 = 6;
        l_U591 = 5;
        l_U605 = {-1291.08800000, 479.17660000, 50.16230000};
        l_U608 = 182.78250000;
        l_U610 = -1159156463;
        l_U612 = {-1289.53600000, 483.72950000, 50.16220000};
        l_U615 = 176.59830000;
        l_U616 = 977480632;
        l_U618 = {-1295.02200000, 482.99970000, 50.02380000};
        l_U621 = 181.38350000;
        l_U622 = 226415164;
        l_U624 = {-1287.30900000, 491.57630000, 50.11220000};
        l_U627 = 180.18230000;
        l_U628 = 690697563;
        l_U630 = {-1293.87800000, 501.38580000, 50.00240000};
        l_U633 = 180.18120000;
        l_U634 = -150646512;
        l_U636 = {-1290.84500000, 501.00290000, 50.09460000};
        l_U639 = 180.32270000;
        l_U640 = -504027408;
        l_U394 = 0;
        l_U648 = {-1291.08800000, 479.17660000, 50.16230000};
        l_U651 = 182.78250000;
        l_U415 = 1;
    }
    if (l_U591 == 6)
    {
        l_U601 = 1;
        l_U648 = {-1068.04500000, 1467.97300000, 23.78680000};
        l_U651 = 261.02110000;
        l_U605 = {-1070.84000000, 1471.02000000, 23.70000000};
        l_U608 = 210.78250000;
        l_U610 = 690281432;
        l_U415 = 0;
        l_U393 = 1;
    }
    if (l_U591 == 7)
    {
        l_U601 = 3;
        l_U648 = {1032.38600000, -766.10640000, 4.35850000};
        l_U651 = 279.36730000;
        l_U605 = {996.67030000, -760.33280000, 5.67350000};
        l_U608 = 182.78250000;
        l_U610 = -1283406538;
        l_U612 = {1100.04500000, -789.49180000, 3.30610000};
        l_U615 = 86.25850000;
        l_U616 = 677687516;
        l_U617 = "Scenario_SmokingOutsideOffice";
        l_U618 = {1028.37000000, -725.10000000, 13.21000000};
        l_U621 = 185.30270000;
        l_U622 = 812112483;
        l_U623 = "Scenario_SmokingOutsideOffice";
        l_U624 = {1025.03700000, -726.88560000, 13.20000000};
        l_U627 = 205.52200000;
        l_U628 = -1523915823;
        l_U629 = "Scenario_SmokingOutsideOffice";
        l_U577 = "cheer_on_fight_B";
        l_U578 = "amb@watch_melee";
        l_U415 = 0;
        l_U393 = 0;
    }
    if (l_U591 == 8)
    {
        l_U393 = 0;
        l_U601 = 2;
        l_U591 = 8;
        l_U648 = {-189.90790000, 946.98730000, 10.11440000};
        l_U651 = 240.75730000;
        l_U605 = {-189.90790000, 946.98730000, 10.11440000};
        l_U608 = 182.78250000;
        l_U610 = -1775659292;
        l_U612 = {-189.90790000, 946.98730000, 10.11440000};
        l_U615 = 176.59830000;
        l_U616 = 1473654742;
        l_U415 = 0;
    }
    if (l_U591 == 9)
    {
        l_U393 = 0;
        l_U601 = 3;
        l_U591 = 9;
        l_U605 = {667.22380000, 618.73720000, 20.11230000};
        l_U608 = 182.78250000;
        l_U610 = -1628417063;
        l_U612 = {660.06370000, 615.19560000, 19.82400000};
        l_U615 = 264.59830000;
        l_U616 = -432593815;
        l_U618 = {659.66580000, 620.46200000, 19.79238000};
        l_U621 = 264.38350000;
        l_U622 = -1283406538;
        l_U394 = 0;
        l_U648 = {667.22380000, 618.73720000, 19.51230000};
        l_U651 = 275.65810000;
        l_U415 = 0;
    }
    if (DOES_BLIP_EXIST( l_U671 ))
    {
        REMOVE_BLIP( l_U671 );
    }
    ADD_BLIP_FOR_COORD( l_U648._fU0, l_U648._fU4, l_U648._fU8, ref l_U671 );
    CHANGE_BLIP_DISPLAY( l_U671, 4 );
    if (l_U591 == 4)
    {
        sub_7146( ref l_U671 );
    }
    if (l_U591 == 5)
    {
        sub_7146( ref l_U671 );
    }
    if (l_U591 == 6)
    {
        sub_7229( ref l_U671, -1056.70000000, 1492.07000000, 23.20000000, 180.00000000 );
    }
    if (l_U591 == 9)
    {
        sub_7146( ref l_U671 );
    }
    SET_BLIP_AS_FRIENDLY( l_U671, 1 );
    SET_ROUTE( l_U671, 1 );
    if ((l_U591 == 2) || (l_U591 == 1))
    {
        l_U652 = 584879743;
    }
    else if (g_U38759 == 0)
    {
        if (l_U591 == 4)
        {
            l_U652 = 788045382;
        }
        else
        {
            l_U652 = 584879743;
        }
    }
    if (g_U38759 == 1)
    {
        l_U652 = -114291515;
    }
    if (g_U38759 == 2)
    {
        l_U652 = 788045382;
    }
    if (g_U38759 == 3)
    {
        l_U652 = 1203311498;
    }
    if (g_U38759 == 4)
    {
        l_U652 = -909201658;
    }
    if (g_U38759 == 5)
    {
        l_U652 = 1265391242;
    }
    if (g_U38759 == 6)
    {
        if (l_U591 == 4)
        {
            l_U652 = -909201658;
        }
        else
        {
            l_U652 = -1606187161;
        }
    }
    if (g_U38759 == 7)
    {
        if (l_U591 == 4)
        {
            l_U652 = 1203311498;
        }
        else
        {
            l_U652 = -571009320;
        }
    }
    if (g_U38759 == 8)
    {
        if (l_U591 == 4)
        {
            l_U652 = 1203311498;
        }
        else
        {
            l_U652 = -618617997;
        }
    }
    if (g_U38759 == 9)
    {
        if (l_U591 == 4)
        {
            l_U652 = 788045382;
        }
        else
        {
            l_U652 = 2006142190;
        }
    }
    if (l_U591 == 5)
    {
        if (l_U591 == 4)
        {
            l_U652 = 788045382;
        }
        else
        {
            l_U652 = 584879743;
        }
    }
    if (l_U392 == 0)
    {
        sub_7808( l_U611 );
        REQUEST_MODEL( l_U610 );
        REQUEST_MODEL( l_U652 );
        while ((NOT (HAS_MODEL_LOADED( l_U610 ))) || (NOT (HAS_MODEL_LOADED( l_U652 ))))
        {
            WAIT( 0 );
        }
        # -sub_C1FFC0-0xc214c8( 3, ref l_U582 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U581 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U583 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U584 );
        if (l_U591 == 0)
        {
            REQUEST_ANIMS( l_U578 );
            while (NOT (HAVE_ANIMS_LOADED( l_U578 )))
            {
                WAIT( 0 );
            }
        }
        CLEAR_AREA( l_U648._fU0, l_U648._fU4, l_U648._fU8, 7.50000000, 1 );
        CREATE_CAR( l_U652, l_U648._fU0, l_U648._fU4, l_U648._fU8, ref l_U664, 1 );
        VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U664, 0 );
        SET_CAR_HEADING( l_U664, l_U651 );
        SUPPRESS_CAR_MODEL( l_U652 );
        CREATE_CHAR( 26, l_U610, l_U605._fU0, l_U605._fU4, l_U605._fU8, ref l_U653, 1 );
        SET_CHAR_HEADING( l_U653, l_U608 );
        if (l_U415 == 1)
        {
            SET_COMBAT_DECISION_MAKER( l_U653, l_U583 );
            SET_CHAR_DECISION_MAKER( l_U653, l_U581 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U653, l_U584 );
            SET_CHAR_DECISION_MAKER( l_U653, l_U582 );
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U653, 24 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U653 );
        SET_CHAR_AS_ENEMY( l_U653, 1 );
        CREATE_GROUP( 3, ref l_U574, 1 );
        SET_GROUP_LEADER( l_U574, l_U653 );
        if (l_U591 == 0)
        {
            TASK_PLAY_ANIM( l_U653, l_U577, l_U578, 8.00000000, 1, 0, 0, 0, -1 );
        }
        if (((l_U591 == 2) || (l_U591 == 1)) || (l_U591 == 7))
        {
            REQUEST_MODEL( l_U616 );
            while (NOT (HAS_MODEL_LOADED( l_U616 )))
            {
                WAIT( 0 );
            }
            CREATE_CHAR( 7, l_U616, l_U612._fU0, l_U612._fU4, l_U612._fU8, ref l_U654, 1 );
            SET_CHAR_AS_ENEMY( l_U654, 1 );
            SET_CHAR_HEADING( l_U654, l_U615 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U654 );
            SET_CHAR_DECISION_MAKER( l_U654, l_U581 );
            SET_COMBAT_DECISION_MAKER( l_U654, l_U583 );
            SET_GROUP_MEMBER( l_U574, l_U654 );
            if (l_U591 == 7)
            {
                SET_COMBAT_DECISION_MAKER( l_U654, l_U584 );
                REQUEST_MODEL( l_U622 );
                REQUEST_MODEL( l_U628 );
                REQUEST_CAR_RECORDING( 300 );
                REQUEST_ANIMS( "amb@watch_melee" );
                while ((((NOT (HAS_MODEL_LOADED( l_U622 ))) || (NOT (HAS_MODEL_LOADED( l_U628 )))) || (NOT (HAVE_ANIMS_LOADED( "amb@watch_melee" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 300 ))))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U654 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U653 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U585 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                        TASK_PLAY_ANIM( 0, "cheer_on_fight_C", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U585 );
                        TASK_PERFORM_SEQUENCE( l_U654, l_U585 );
                        CLEAR_SEQUENCE_TASK( l_U585 );
                    }
                }
                CREATE_CHAR( 7, l_U622, l_U618._fU0, l_U618._fU4, l_U618._fU8, ref l_U655, 1 );
                SET_CHAR_AS_ENEMY( l_U655, 1 );
                SET_CHAR_HEADING( l_U655, l_U621 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U655 );
                SET_CHAR_DECISION_MAKER( l_U655, l_U581 );
                SET_COMBAT_DECISION_MAKER( l_U655, l_U584 );
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U585 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U585 );
                    TASK_PERFORM_SEQUENCE( l_U655, l_U585 );
                    CLEAR_SEQUENCE_TASK( l_U585 );
                }
                SET_GROUP_MEMBER( l_U574, l_U655 );
                CREATE_CHAR( 7, l_U628, l_U624._fU0, l_U624._fU4, l_U624._fU8, ref l_U656, 1 );
                SET_CHAR_AS_ENEMY( l_U656, 1 );
                SET_CHAR_HEADING( l_U656, l_U627 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U656 );
                SET_CHAR_DECISION_MAKER( l_U656, l_U581 );
                SET_COMBAT_DECISION_MAKER( l_U656, l_U584 );
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U585 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_C", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_A", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_C", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_B", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, 7000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U653 );
                    TASK_PLAY_ANIM( 0, "cheer_on_fight_C", "amb@watch_melee", 8.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U585 );
                    TASK_PERFORM_SEQUENCE( l_U656, l_U585 );
                    CLEAR_SEQUENCE_TASK( l_U585 );
                }
                SET_GROUP_MEMBER( l_U574, l_U656 );
                CREATE_CAR( l_U652, 1036.33000000, -720.07290000, 13.47090000, ref l_U665, 1 );
                CREATE_CAR( l_U652, 1040.38000000, -721.21440000, 13.38000000, ref l_U666, 1 );
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U664 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U653, l_U664 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U664 )))
                    {
                        START_PLAYBACK_RECORDED_CAR_LOOPED( l_U664, 300 );
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U653 )))
            {
                TASK_START_SCENARIO_IN_PLACE( l_U653, l_U609, -1082130432 );
            }
        }
        if (l_U591 == 2)
        {
            REQUEST_MODEL( l_U622 );
            REQUEST_MODEL( l_U628 );
            while ((NOT (HAS_MODEL_LOADED( l_U622 ))) || (NOT (HAS_MODEL_LOADED( l_U628 ))))
            {
                WAIT( 0 );
            }
            CREATE_CHAR( 7, l_U622, l_U618._fU0, l_U618._fU4, l_U618._fU8, ref l_U655, 1 );
            SET_CHAR_AS_ENEMY( l_U655, 1 );
            SET_CHAR_HEADING( l_U655, l_U621 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U655 );
            SET_CHAR_DECISION_MAKER( l_U655, l_U581 );
            SET_COMBAT_DECISION_MAKER( l_U655, l_U583 );
            TASK_START_SCENARIO_IN_PLACE( l_U655, l_U623, -1082130432 );
            GIVE_WEAPON_TO_CHAR( l_U655, 3, 30000, 1 );
            CREATE_CHAR( 7, l_U628, l_U624._fU0, l_U624._fU4, l_U624._fU8, ref l_U656, 1 );
            SET_CHAR_AS_ENEMY( l_U656, 1 );
            SET_CHAR_HEADING( l_U656, l_U627 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U656 );
            SET_CHAR_DECISION_MAKER( l_U656, l_U581 );
            SET_COMBAT_DECISION_MAKER( l_U656, l_U583 );
            TASK_START_SCENARIO_IN_PLACE( l_U656, l_U629, -1082130432 );
            GIVE_WEAPON_TO_CHAR( l_U656, 7, 30000, 1 );
        }
        if ((l_U591 == 5) || (l_U591 == 9))
        {
            REQUEST_MODEL( l_U616 );
            REQUEST_MODEL( l_U622 );
            while ((NOT (HAS_MODEL_LOADED( l_U616 ))) || (NOT (HAS_MODEL_LOADED( l_U622 ))))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U664 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    WARP_CHAR_INTO_CAR( l_U653, l_U664 );
                    sub_11375( l_U653, ref l_U417, 1, 0 );
                    sub_11427( ref l_U417, l_U664, 0 );
                    l_U653 = l_U417._fU0;
                    ADD_PED_TO_MISSION_DELETION_LIST( l_U653, 0 );
                }
                CREATE_CHAR( 7, l_U616, l_U612._fU0, l_U612._fU4, l_U612._fU8, ref l_U654, 1 );
                SET_CHAR_AS_ENEMY( l_U654, 1 );
                SET_CHAR_HEADING( l_U654, l_U615 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U654 );
                SET_CHAR_DECISION_MAKER( l_U654, l_U581 );
                if (l_U415 == 1)
                {
                    SET_COMBAT_DECISION_MAKER( l_U654, l_U583 );
                }
                else
                {
                    SET_COMBAT_DECISION_MAKER( l_U654, l_U584 );
                }
                CREATE_CAR( l_U652, l_U612._fU0, l_U612._fU4, l_U612._fU8, ref l_U665, 1 );
                VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U665, 0 );
                SET_CAR_HEADING( l_U665, l_U615 );
                WARP_CHAR_INTO_CAR( l_U654, l_U665 );
                sub_11375( l_U654, ref l_U443, 1, 0 );
                sub_11427( ref l_U443, l_U665, 0 );
                l_U654 = l_U443._fU0;
                ADD_PED_TO_MISSION_DELETION_LIST( l_U654, 0 );
                sub_11899( ref l_U443, l_U417._fU0 );
                l_U443._fU40 = 0;
                CREATE_CHAR( 7, l_U622, l_U618._fU0, l_U618._fU4, l_U618._fU8, ref l_U655, 1 );
                SET_CHAR_AS_ENEMY( l_U655, 1 );
                SET_CHAR_HEADING( l_U654, l_U621 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U655 );
                SET_CHAR_DECISION_MAKER( l_U655, l_U581 );
                if (l_U415 == 1)
                {
                    SET_COMBAT_DECISION_MAKER( l_U655, l_U583 );
                }
                else
                {
                    SET_COMBAT_DECISION_MAKER( l_U655, l_U584 );
                }
                CREATE_CAR( l_U652, l_U618._fU0, l_U618._fU4, l_U618._fU8, ref l_U666, 1 );
                VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U666, 0 );
                SET_CAR_HEADING( l_U666, l_U621 );
                WARP_CHAR_INTO_CAR( l_U655, l_U666 );
                sub_11375( l_U655, ref l_U469, 1, 0 );
                sub_11427( ref l_U469, l_U666, 0 );
                l_U655 = l_U469._fU0;
                ADD_PED_TO_MISSION_DELETION_LIST( l_U655, 0 );
                sub_11899( ref l_U469, l_U417._fU0 );
                l_U469._fU40 = 1;
                if (l_U591 == 5)
                {
                    REQUEST_MODEL( l_U628 );
                    REQUEST_MODEL( l_U634 );
                    REQUEST_MODEL( -1345134469 );
                    while (((NOT (HAS_MODEL_LOADED( l_U628 ))) || (NOT (HAS_MODEL_LOADED( l_U634 )))) || (NOT (HAS_MODEL_LOADED( -1345134469 ))))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CHAR( 7, l_U628, l_U624._fU0, l_U624._fU4, l_U624._fU8, ref l_U656, 1 );
                    SET_CHAR_AS_ENEMY( l_U656, 1 );
                    SET_CHAR_HEADING( l_U656, l_U627 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U656 );
                    SET_CHAR_DECISION_MAKER( l_U656, l_U581 );
                    SET_COMBAT_DECISION_MAKER( l_U656, l_U583 );
                    CREATE_CAR( l_U652, l_U624._fU0, l_U624._fU4, l_U624._fU8, ref l_U667, 1 );
                    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U667, 0 );
                    SET_CAR_HEADING( l_U667, l_U627 );
                    WARP_CHAR_INTO_CAR( l_U656, l_U667 );
                    sub_11375( l_U656, ref l_U495, 1, 0 );
                    sub_11427( ref l_U495, l_U667, 0 );
                    l_U656 = l_U495._fU0;
                    ADD_PED_TO_MISSION_DELETION_LIST( l_U656, 0 );
                    sub_11899( ref l_U495, l_U443._fU0 );
                    l_U495._fU40 = 2;
                    CREATE_CHAR( 7, l_U634, l_U630._fU0, l_U630._fU4, l_U630._fU8, ref l_U657, 1 );
                    SET_CHAR_AS_ENEMY( l_U657, 1 );
                    SET_CHAR_HEADING( l_U657, l_U633 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U657 );
                    SET_CHAR_DECISION_MAKER( l_U657, l_U581 );
                    SET_COMBAT_DECISION_MAKER( l_U657, l_U583 );
                    CREATE_CAR( l_U652, l_U630._fU0, l_U630._fU4, l_U630._fU8, ref l_U668, 1 );
                    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U668, 0 );
                    SET_CAR_HEADING( l_U668, l_U633 );
                    WARP_CHAR_INTO_CAR( l_U657, l_U668 );
                    sub_11375( l_U657, ref l_U521, 1, 0 );
                    sub_11427( ref l_U521, l_U668, 0 );
                    l_U657 = l_U521._fU0;
                    ADD_PED_TO_MISSION_DELETION_LIST( l_U657, 0 );
                    sub_11899( ref l_U521, l_U469._fU0 );
                    l_U521._fU40 = 2;
                    if (NOT (IS_CHAR_DEAD( l_U654 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U654, 12, 30000, 1 );
                        SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U654, 12, 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( l_U654, 1 );
                        SET_CHAR_DECISION_MAKER( l_U654, l_U581 );
                        SET_COMBAT_DECISION_MAKER( l_U654, l_U583 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U655 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U655, 12, 30000, 1 );
                        SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U655, 12, 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( l_U655, 1 );
                        SET_CHAR_DECISION_MAKER( l_U654, l_U581 );
                        SET_COMBAT_DECISION_MAKER( l_U654, l_U583 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U656 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U656, 12, 30000, 1 );
                        SET_CHAR_RELATIONSHIP( l_U656, 5, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U656, 12, 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( l_U656, 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U657 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U657, 12, 30000, 1 );
                        SET_CHAR_RELATIONSHIP( l_U657, 5, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U657, 12, 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( l_U657, 1 );
                    }
                    CREATE_CHAR( 7, l_U616, l_U612._fU0, l_U612._fU4, l_U612._fU8, ref l_U660, 1 );
                    SET_CHAR_AS_ENEMY( l_U660, 1 );
                    SET_CHAR_HEADING( l_U660, l_U615 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660 );
                    SET_CHAR_DECISION_MAKER( l_U660, l_U581 );
                    SET_COMBAT_DECISION_MAKER( l_U660, l_U583 );
                    GIVE_WEAPON_TO_CHAR( l_U660, 12, 30000, 1 );
                    SET_CHAR_RELATIONSHIP( l_U660, 5, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U660, 12, 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( l_U660, 1 );
                    if (NOT (IS_CAR_DEAD( l_U666 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U660, l_U666, 0 );
                    }
                    TASK_DRIVE_BY( l_U660, sub_3733(), 0, 0.00000000, 2.00000000, 0.00000000, 200.00000000, 4, 1, 50 );
                    SET_CHAR_ACCURACY( l_U660, 40 );
                    CREATE_CHAR( 7, l_U622, l_U618._fU0, l_U618._fU4, l_U618._fU8, ref l_U661, 1 );
                    SET_CHAR_AS_ENEMY( l_U661, 1 );
                    SET_CHAR_HEADING( l_U661, l_U621 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U661 );
                    SET_CHAR_DECISION_MAKER( l_U661, l_U581 );
                    SET_COMBAT_DECISION_MAKER( l_U661, l_U583 );
                    GIVE_WEAPON_TO_CHAR( l_U661, 12, 30000, 1 );
                    SET_CHAR_RELATIONSHIP( l_U661, 5, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U661, 12, 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( l_U661, 1 );
                    if (NOT (IS_CAR_DEAD( l_U667 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U661, l_U667, 0 );
                    }
                    TASK_DRIVE_BY( l_U661, sub_3733(), 0, 0.00000000, 2.00000000, 0.00000000, 200.00000000, 4, 1, 50 );
                    SET_CHAR_ACCURACY( l_U661, 40 );
                }
            }
        }
        if (l_U591 == 8)
        {
            WARP_CHAR_INTO_CAR( l_U653, l_U664 );
            REQUEST_MODEL( l_U616 );
            while (NOT (HAS_MODEL_LOADED( l_U616 )))
            {
                WAIT( 0 );
            }
            CREATE_CHAR( 7, l_U616, l_U612._fU0, l_U612._fU4, l_U612._fU8, ref l_U654, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U654, 1 );
            SET_CHAR_AS_ENEMY( l_U654, 1 );
            SET_CHAR_HEADING( l_U654, l_U615 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U654 );
            SET_COMBAT_DECISION_MAKER( l_U654, l_U584 );
            if (NOT (IS_CAR_DEAD( l_U664 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U654, l_U664, -1 );
            }
        }
        if (DOES_BLIP_EXIST( l_U671 ))
        {
            REMOVE_BLIP( l_U671 );
        }
        if (NOT (IS_CAR_DEAD( l_U664 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U672 )))
            {
                ADD_BLIP_FOR_CAR( l_U664, ref l_U672 );
                if (((l_U591 == 4) || (l_U591 == 5)) || (l_U591 == 9))
                {
                    SET_ROUTE( l_U672, 0 );
                }
                SET_BLIP_AS_FRIENDLY( l_U672, 1 );
                if (l_U393 == 1)
                {
                    SET_ROUTE( l_U672, 1 );
                }
                if (l_U591 == 4)
                {
                    sub_7146( ref l_U672 );
                }
                if (l_U591 == 5)
                {
                    sub_7146( ref l_U672 );
                }
                if (l_U591 == 6)
                {
                    sub_7229( ref l_U672, -1056.70000000, 1492.07000000, 23.20000000, 180.00000000 );
                }
                if (l_U591 == 9)
                {
                    sub_7146( ref l_U672 );
                }
            }
        }
        l_U392 = 1;
        sub_3111();
    }
    return;
}

void sub_7146(unknown uParam0)
{
    g_U2768 = (uParam0^);
    return;
}

void sub_7229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2765 = (uParam0^);
        g_U2780 = {uParam1};
        g_U2778 = uParam4;
    }
    return;
}

void sub_7808(unknown uParam0)
{
    g_U94._fU76 = uParam0;
    return;
}

void sub_11375(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    iParam1->_fU0 = uParam0;
    iParam1->_fU36 = uParam2;
    iParam1->_fU88 = uParam3;
    return;
}

void sub_11427(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_11453( iParam0, 2 );
    }
    return;
}

void sub_11453(int iParam0, int iParam1)
{
    if (sub_11466( iParam0, iParam1 ))
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

boolean sub_11466(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_11899(int iParam0, int iParam1)
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
                if (sub_11995( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_3733()) AND (iParam1 != sub_3733()))
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
        sub_12480( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3733())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_12595( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_12595( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_12595( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_12595( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_12595( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_11995(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_12019( uParam0, uParam1 )));
}

boolean sub_12019(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_12480(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_12595(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3733())
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

void sub_15715()
{
    if (l_U395 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3733(), l_U648._fU0, l_U648._fU4, l_U648._fU8, 20.00000000, 20.00000000, 20.00000000, 1 ))
        {
            if (NOT (IS_CAR_DEAD( l_U664 )))
            {
                ;
            }
            l_U395 = 1;
        }
    }
    if (l_U413 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3733(), l_U648._fU0, l_U648._fU4, l_U648._fU8, 300.00000000, 300.00000000, 100.00000000, 1 ))
        {
            l_U413 = 1;
            if (NOT (IS_CHAR_DEAD( l_U653 )))
            {
                if (NOT (IS_CAR_DEAD( l_U664 )))
                {
                    if (l_U591 == 4)
                    {
                        WARP_CHAR_INTO_CAR( l_U653, l_U664 );
                        TASK_CAR_DRIVE_WANDER( l_U653, l_U664, 10.00000000, 0 );
                    }
                    if (l_U591 == 8)
                    {
                        TASK_CAR_DRIVE_WANDER( l_U653, l_U664, 10.00000000, 0 );
                    }
                    sub_12480( ref l_U417, 3 );
                }
            }
            if (((l_U591 == 4) || (l_U591 == 5)) || (l_U591 == 9))
            {
                SET_ROUTE( l_U672, 0 );
            }
            if (l_U591 == 4)
            {
                sub_7146( ref l_U671 );
            }
            if (l_U591 == 5)
            {
                sub_7146( ref l_U671 );
            }
            if (l_U591 == 6)
            {
                sub_7229( ref l_U671, -1056.70000000, 1492.07000000, 23.20000000, 180.00000000 );
            }
            if (l_U591 == 9)
            {
                sub_7146( ref l_U671 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U597 );
    if (NOT (IS_CAR_DEAD( l_U664 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U664 ))
        {
            if (l_U591 == 7)
            {
                if ((((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 30.00000000, 30.00000000, 30.00000000, 0 )) AND (l_U597 > l_U598)) AND (NOT (IS_CHAR_DEAD( l_U653 )))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                {
                    GET_GAME_TIMER( ref l_U598 );
                    l_U598 += l_U599;
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U600 );
                    if (l_U600 == 0)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U653, "WHOOP", "PAIN_VOICE", 0, 0, 0 );
                    }
                    if (l_U600 == 1)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U653, "CHEER", "PAIN_VOICE", 0, 0, 0 );
                    }
                    if (l_U600 == 2)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U653, "LAUGH", "PAIN_VOICE", 0, 0, 0 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    GET_CAR_CHAR_IS_USING( sub_3733(), ref l_U707 );
                    if ((NOT (IS_CHAR_IN_CAR( l_U653, l_U664 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CAR( l_U664, l_U707 )))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U664 );
                    }
                }
                else
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U664 );
                }
            }
        }
    }
    if (l_U591 == 2)
    {
        if (((l_U401 == 0) AND (l_U591 == 2)) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 3.00000000, 3.00000000, 3.00000000, 0 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U654 )))
            {
                sub_16673();
            }
            if (NOT (IS_CHAR_DEAD( l_U653 )))
            {
                sub_16673();
            }
            if (NOT (IS_CHAR_DEAD( l_U655 )))
            {
                sub_16673();
            }
            if (NOT (IS_CHAR_DEAD( l_U656 )))
            {
                sub_16673();
            }
            l_U401 = 1;
        }
    }
    if ((l_U591 == 2) || (l_U591 == 1))
    {
        if (l_U411 == 1)
        {
            if (NOT (IS_CAR_DEAD( l_U664 )))
            {
                if (l_U591 == 1)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 7.00000000, 7.00000000, 7.00000000, 0 ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U653 ))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                        {
                            SAY_AMBIENT_SPEECH( l_U653, "GENERIC_FUCK_OFF", 1, 1, 2 );
                            CLEAR_CHAR_TASKS( l_U653 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U653, sub_3733() );
                            l_U411 = 0;
                        }
                    }
                }
                if (l_U591 == 2)
                {
                    if (((l_U401 == 0) AND (l_U591 == 2)) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 3.00000000, 3.00000000, 3.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U654 )))
                        {
                            sub_16673();
                        }
                        if (NOT (IS_CHAR_DEAD( l_U653 )))
                        {
                            sub_16673();
                        }
                        if (NOT (IS_CHAR_DEAD( l_U655 )))
                        {
                            sub_16673();
                        }
                        if (NOT (IS_CHAR_DEAD( l_U656 )))
                        {
                            sub_16673();
                        }
                        l_U401 = 1;
                    }
                    if (((l_U408 == 0) AND (NOT sub_17411())) AND (NOT sub_17411()))
                    {
                        l_U411 = 1;
                        if ((NOT (IS_CHAR_DEAD( l_U656 ))) AND (NOT (IS_CHAR_INJURED( l_U656 ))))
                        {
                            TASK_AIM_GUN_AT_CHAR( l_U656, sub_3733(), 60000 );
                        }
                        if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U654 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U654, sub_3733() );
                        }
                        if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U655 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U655, sub_3733() );
                        }
                        if ((NOT (IS_CHAR_DEAD( l_U653 ))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U653 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U653, sub_3733() );
                            SAY_AMBIENT_SPEECH( l_U653, "GENERIC_FUCK_OFF", 1, 1, 2 );
                            l_U411 = 0;
                        }
                    }
                }
            }
        }
    }
    if ((l_U401 == 0) AND (l_U591 == 2))
    {
        if (NOT (IS_CHAR_DEAD( l_U654 )))
        {
            if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U654 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U654 ))) || (IS_CHAR_INJURED( l_U654 )))
            {
                sub_16673();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U653 )))
        {
            if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U653 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U653 ))) || (IS_CHAR_INJURED( l_U653 )))
            {
                sub_16673();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U655 )))
        {
            if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U655 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U655 ))) || (IS_CHAR_INJURED( l_U655 )))
            {
                sub_16673();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U656 )))
        {
            if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U656 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U656 ))) || (IS_CHAR_INJURED( l_U656 )))
            {
                sub_16673();
            }
        }
    }
    if (l_U591 == 6)
    {
        if (((l_U408 == 0) AND (l_U597 > l_U598)) AND (l_U416 == 1))
        {
            FIRE_SINGLE_BULLET( -1070.00000000, 1476.00000000, 31.00000000, -1067.00000000, 1475.00000000, 30.00000000, 0 );
            l_U416 = 0;
        }
    }
    if (l_U408 == 1)
    {
        if ((NOT (IS_CAR_DEAD( l_U664 ))) AND (NOT (IS_CHAR_DEAD( l_U653 ))))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 12.00000000, 12.00000000, 12.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U653, sub_3733(), 0 )))
            {
                if (l_U591 == 2)
                {
                    sub_18276( "E1J3_AOD", ref l_U677, 6, 1 );
                    l_U408 = 0;
                    l_U599 = 2000;
                    GET_GAME_TIMER( ref l_U598 );
                    l_U598 += l_U599;
                }
            }
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 3.00000000, 3.00000000, 3.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U653, sub_3733(), 0 )))
            {
                if (l_U591 == 6)
                {
                    sub_18276( "E1J3_DISP", ref l_U677, 6, 1 );
                    l_U408 = 0;
                    ALTER_WANTED_LEVEL_NO_DROP( sub_788(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_788() );
                    FIRE_SINGLE_BULLET( -1070.00000000, 1476.00000000, 31.00000000, -1067.00000000, 1475.00000000, 30.00000000, 0 );
                    SET_ALL_RANDOM_PEDS_FLEE( sub_788(), 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U653 ))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                    {
                        TASK_COWER( l_U653 );
                    }
                    l_U599 = 2000;
                    GET_GAME_TIMER( ref l_U598 );
                    l_U598 += l_U599;
                    FIRE_SINGLE_BULLET( -1070.00000000, 1476.00000000, 31.00000000, -1067.00000000, 1475.00000000, 30.00000000, 0 );
                }
            }
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 12.00000000, 12.00000000, 12.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U653, sub_3733(), 0 )))
            {
                if (l_U591 == 5)
                {
                    sub_18276( "E1J3_AOD", ref l_U677, 6, 1 );
                    l_U408 = 0;
                }
                if (l_U591 == 7)
                {
                    sub_18276( "E1J3_BEACH", ref l_U677, 6, 1 );
                    l_U408 = 0;
                }
                if (l_U591 == 8)
                {
                    sub_18276( "E1J3_SMOOCH", ref l_U677, 6, 1 );
                    l_U408 = 0;
                }
                if (l_U591 == 4)
                {
                    sub_18276( "E1J3_DELIV", ref l_U677, 6, 1 );
                    l_U408 = 0;
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U664 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_19824( ref l_U417 ) )))
        {
            if (NOT (IS_CHAR_INJURED( sub_19824( ref l_U417 ) )))
            {
                sub_19886( ref l_U417, 0 );
                sub_45026( ref l_U417, 1088421888, 1105199104, 1, 0 );
            }
            if (NOT (IS_CHAR_DEAD( sub_19824( ref l_U443 ) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_19824( ref l_U443 ) )))
                {
                    sub_19886( ref l_U443, 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_19824( ref l_U469 ) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_19824( ref l_U469 ) )))
                {
                    sub_19886( ref l_U469, 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_19824( ref l_U495 ) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_19824( ref l_U495 ) )))
                {
                    sub_19886( ref l_U495, 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_19824( ref l_U521 ) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_19824( ref l_U521 ) )))
                {
                    sub_19886( ref l_U521, 0 );
                }
            }
        }
    }
    if (l_U591 == 5)
    {
        if (l_U410 == 0)
        {
            if (IS_CHAR_DEAD( l_U660 ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U469._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U469._fU0 ))))
                {
                    l_U410 = 1;
                    TASK_SMART_FLEE_CHAR( l_U469._fU0, sub_3733(), 100.00000000, -1 );
                }
            }
        }
        if (l_U409 == 0)
        {
            if (IS_CHAR_DEAD( l_U661 ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U495._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U495._fU0 ))))
                {
                    l_U409 = 1;
                    TASK_SMART_FLEE_CHAR( l_U495._fU0, sub_3733(), 100.00000000, -1 );
                }
            }
        }
    }
    if (l_U591 == 7)
    {
        if (l_U404 == 0)
        {
            if (DOES_CHAR_EXIST( l_U655 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U655 )))
                {
                    if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U655 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U655 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U655 )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                            PANIC_SCREAM( l_U655 );
                            l_U404 = 1;
                        }
                    }
                }
            }
        }
        if (l_U403 == 0)
        {
            if (DOES_CHAR_EXIST( l_U654 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U654 )))
                {
                    if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U654 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U654 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U654 )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                            PANIC_SCREAM( l_U654 );
                            l_U403 = 1;
                        }
                    }
                }
            }
        }
        if (l_U405 == 0)
        {
            if (DOES_CHAR_EXIST( l_U656 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U656 )))
                {
                    if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U656 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U656 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U656 )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U656, sub_3733(), 100.00000000, -1 );
                            PANIC_SCREAM( l_U656 );
                            l_U405 = 1;
                        }
                    }
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U653 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U653 )))
        {
            if (l_U402 == 0)
            {
                if (l_U591 == 1)
                {
                    if (NOT (IS_CAR_DEAD( l_U664 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 5.50000000, 5.50000000, 5.50000000, 0 )) AND (IS_BUTTON_JUST_PRESSED( 0, 15 )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U653, 5, 0 );
                            if (l_U591 == 0)
                            {
                                PANIC_SCREAM( l_U653 );
                            }
                            if (DOES_CHAR_EXIST( l_U654 ))
                            {
                                if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                                {
                                    SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                                }
                            }
                            l_U402 = 1;
                        }
                    }
                }
                if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_788(), l_U653 )) || (IS_PLAYER_TARGETTING_CHAR( sub_788(), l_U653 ))) || (IS_CHAR_INJURED( l_U653 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U653, 5, 0 );
                    l_U402 = 1;
                    if (l_U394 == 1)
                    {
                        PANIC_SCREAM( l_U653 );
                    }
                    if (l_U591 == 8)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U653 )))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U653, l_U664, 17.00000000, 2 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U654 ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                        {
                            if (l_U591 == 7)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U654 )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                                    PANIC_SCREAM( l_U654 );
                                }
                            }
                            if (l_U591 == 9)
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                                {
                                    TASK_LEAVE_ANY_CAR( l_U654 );
                                    TASK_LEAVE_GROUP( l_U654 );
                                }
                                if ((NOT (IS_CAR_DEAD( l_U665 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                                {
                                    sub_46851( ref l_U443, ref l_U654, ref l_U665 );
                                    TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                                    PANIC_SCREAM( l_U654 );
                                }
                            }
                            SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U655 ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                        {
                            SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                            if (l_U591 == 7)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U655 )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                                    PANIC_SCREAM( l_U655 );
                                }
                            }
                            if (l_U591 == 9)
                            {
                                SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U655 )))
                                {
                                    TASK_LEAVE_GROUP( l_U655 );
                                    if (NOT (IS_CAR_DEAD( l_U666 )))
                                    {
                                        TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                                    }
                                }
                            }
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U656 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U656 )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U656, 5, 0 );
                            if (l_U591 == 7)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U656 )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U656, sub_3733(), 100.00000000, -1 );
                                }
                            }
                        }
                    }
                    if (IS_CHAR_INJURED( l_U653 ))
                    {
                        if (l_U591 == 9)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                            {
                                sub_46851( ref l_U443, ref l_U654, ref l_U665 );
                                if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                                {
                                    TASK_LEAVE_ANY_CAR( l_U654 );
                                    TASK_LEAVE_GROUP( l_U654 );
                                }
                                else
                                {
                                    TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                                }
                                if (NOT (IS_CAR_DEAD( l_U665 )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                                }
                            }
                            if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                            {
                                sub_46851( ref l_U469, ref l_U655, ref l_U666 );
                                SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                                TASK_LEAVE_GROUP( l_U655 );
                                if (IS_CHAR_IN_ANY_CAR( l_U655 ))
                                {
                                    TASK_LEAVE_ANY_CAR( l_U655 );
                                    TASK_LEAVE_GROUP( l_U655 );
                                }
                                else
                                {
                                    TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if (l_U401 == 0)
    {
        if (((((l_U591 == 5) || (l_U591 == 2)) || (l_U591 == 7)) || (l_U591 == 9)) || (l_U591 == 8))
        {
            l_U401 = 1;
            if (l_U591 == 8)
            {
                if (DOES_CHAR_EXIST( l_U654 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                        if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U654 );
                            TASK_LEAVE_GROUP( l_U654 );
                        }
                    }
                }
            }
            if (l_U591 == 9)
            {
                if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                    {
                        TASK_LEAVE_ANY_CAR( l_U654 );
                        TASK_LEAVE_GROUP( l_U654 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U665 )))
                    {
                        sub_46851( ref l_U443, ref l_U654, ref l_U665 );
                        TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                {
                    SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                    TASK_LEAVE_GROUP( l_U655 );
                    if (NOT (IS_CAR_DEAD( l_U666 )))
                    {
                        sub_46851( ref l_U469, ref l_U655, ref l_U666 );
                        TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U654 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U654 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U654 )))
                    {
                        if (l_U591 == 7)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U654 )))
                            {
                                TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                            }
                        }
                        SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                        if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U654 );
                            TASK_LEAVE_GROUP( l_U654 );
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U655 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U655 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U655 )))
                    {
                        if (l_U591 == 7)
                        {
                            TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                        }
                        SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U656 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U656 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U656 )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U656, 5, 0 );
                        if (l_U591 == 7)
                        {
                            TASK_SMART_FLEE_CHAR( l_U656, sub_3733(), 100.00000000, -1 );
                        }
                    }
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U664 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U664 ))
        {
            if (l_U591 == 7)
            {
                if (NOT (IS_CHAR_DEAD( l_U653 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U653, l_U664 )))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U664 );
                    }
                }
                else
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U664 );
                }
            }
        }
        if (IS_CHAR_IN_CAR( sub_3733(), l_U664 ))
        {
            if (l_U406 == 1)
            {
                TRIGGER_VEH_ALARM( l_U664 );
                SET_VEH_ALARM( l_U664, 1 );
                SET_VEH_ALARM_DURATION( l_U664, 7000 );
            }
            if (DOES_BLIP_EXIST( l_U671 ))
            {
                REMOVE_BLIP( l_U671 );
            }
            if (DOES_BLIP_EXIST( l_U672 ))
            {
                REMOVE_BLIP( l_U672 );
            }
            if (l_U591 == 2)
            {
                if (l_U412 == 1)
                {
                    if ((NOT (IS_CHAR_DEAD( l_U653 ))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                    {
                        SAY_AMBIENT_SPEECH( l_U653, "ANGELS_OF_DEATH_TAUNT_LOST", 0, 0, 2 );
                        l_U412 = 0;
                    }
                }
            }
            if (l_U591 == 0)
            {
                if ((NOT (IS_CHAR_DEAD( l_U653 ))) AND (NOT (IS_CHAR_INJURED( l_U653 ))))
                {
                    PANIC_SCREAM( l_U653 );
                }
            }
            if (l_U591 == 6)
            {
                FIRE_SINGLE_BULLET( -1070.00000000, 1476.00000000, 31.00000000, -1067.00000000, 1475.00000000, 30.00000000, 0 );
            }
            if (l_U591 == 8)
            {
                if (DOES_CHAR_EXIST( l_U654 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                        if (IS_CHAR_IN_ANY_CAR( l_U654 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U654 );
                            TASK_LEAVE_GROUP( l_U654 );
                        }
                    }
                }
            }
            if (l_U591 == 5)
            {
                if (l_U410 == 0)
                {
                    if (IS_CHAR_DEAD( l_U660 ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U469._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U469._fU0 ))))
                        {
                            l_U410 = 1;
                            TASK_SMART_FLEE_CHAR( l_U469._fU0, sub_3733(), 100.00000000, -1 );
                        }
                    }
                }
                if (l_U409 == 0)
                {
                    if (IS_CHAR_DEAD( l_U661 ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U495._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U495._fU0 ))))
                        {
                            l_U409 = 1;
                            TASK_SMART_FLEE_CHAR( l_U495._fU0, sub_3733(), 100.00000000, -1 );
                        }
                    }
                }
                if (DOES_CHAR_EXIST( l_U521._fU0 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U521._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U521._fU0 ))))
                    {
                        TASK_SMART_FLEE_CHAR( l_U521._fU0, sub_3733(), 100.00000000, -1 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U443._fU0 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U443._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U443._fU0 ))))
                    {
                        TASK_SMART_FLEE_CHAR( l_U443._fU0, sub_3733(), 100.00000000, -1 );
                    }
                }
            }
            if (l_U591 == 9)
            {
                if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                {
                    SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                    TASK_LEAVE_GROUP( l_U654 );
                    if (NOT (IS_CAR_DEAD( l_U665 )))
                    {
                        sub_46851( ref l_U443, ref l_U654, ref l_U665 );
                        TASK_SMART_FLEE_CHAR( l_U654, sub_3733(), 100.00000000, -1 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                {
                    SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                    TASK_LEAVE_GROUP( l_U655 );
                    if (NOT (IS_CAR_DEAD( l_U666 )))
                    {
                        sub_46851( ref l_U469, ref l_U655, ref l_U666 );
                        TASK_SMART_FLEE_CHAR( l_U655, sub_3733(), 100.00000000, -1 );
                    }
                }
            }
            sub_3166();
            ADD_BLIP_FOR_COORD( l_U602._fU0, l_U602._fU4, l_U602._fU8, ref l_U673 );
            SET_ROUTE( l_U673, 1 );
            l_U370 = 1;
            l_U391 = 1;
            if (NOT (IS_CHAR_DEAD( l_U653 )))
            {
                SET_CHAR_KEEP_TASK( l_U653, 1 );
                SET_CHAR_RELATIONSHIP( l_U653, 5, 0 );
            }
            if (l_U394 == 1)
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U653 );
            }
            if (l_U396 == 1)
            {
                ALTER_WANTED_LEVEL_NO_DROP( sub_788(), 2 );
            }
            if (l_U398 == 0)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 )))
                {
                    PRINT_NOW( "J3_02", 7500, 1 );
                    l_U398 = 1;
                }
            }
            if (((((l_U591 == 5) || (l_U591 == 2)) || (l_U591 == 7)) || (l_U591 == 9)) || (l_U591 == 8))
            {
                if (DOES_CHAR_EXIST( l_U654 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U654 ))) AND (NOT (IS_CHAR_INJURED( l_U654 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U655 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U655 ))) AND (NOT (IS_CHAR_INJURED( l_U655 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U656 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U656 ))) AND (NOT (IS_CHAR_INJURED( l_U656 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U656, 5, 0 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U657 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U657 ))) AND (NOT (IS_CHAR_INJURED( l_U657 ))))
                    {
                        SET_CHAR_RELATIONSHIP( l_U657, 5, 0 );
                    }
                }
            }
            if (DOES_BLIP_EXIST( l_U671 ))
            {
                REMOVE_BLIP( l_U671 );
            }
        }
    }
    return;
}

void sub_16673()
{
    if (DOES_CHAR_EXIST( l_U653 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U653 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U653 )))
            {
                SET_CHAR_RELATIONSHIP( l_U653, 5, 0 );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U654 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U654 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U654 )))
            {
                SET_CHAR_RELATIONSHIP( l_U654, 5, 0 );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U655 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U655 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U655 )))
            {
                SET_CHAR_RELATIONSHIP( l_U655, 5, 0 );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U656 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U656 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U656 )))
            {
                SET_CHAR_RELATIONSHIP( l_U656, 5, 0 );
            }
        }
    }
    l_U401 = 1;
    return;
}

void sub_17411()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_18276(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18297( uParam0, ref l_U10._fU0, uParam1, uParam2, uParam3 );
}

void sub_18297(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_18351( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_18351(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_18373( iParam1 )))
    {
        return 0;
    }
    l_U10._fU384 = 0;
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
    sub_19061( ref g_U8947, ref l_U10 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_18373(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18450( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_18450( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_18450( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_18450(unknown uParam0)
{
    return;
}

void sub_19061(int iParam0, int iParam1)
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

void sub_19824(int iParam0)
{
    return iParam0->_fU0;
}

void sub_19886(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_19933( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_20328( iParam0 )) == 2)
        {
            return;
        }
        sub_24979( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_26871( iParam0 );
        }
        if (sub_11466( iParam0, 1 ))
        {
            sub_31697( iParam0 + 0, 0 );
        }
        else
        {
            sub_31697( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_31988( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_11466( iParam0, 32 ))
            {
                sub_12480( iParam0, 3 );
            }
            else if (sub_11466( iParam0, 64 ))
            {
                if (sub_11466( iParam0, 1 ))
                {
                    sub_12480( iParam0, 5 );
                }
                else
                {
                    sub_12480( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_33039( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33296( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34464( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34578( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34699( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34999( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_35355( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33039( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33296( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34464( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34578( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_24499( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35614( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_35771( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_24499( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33039( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33296( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34464( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34578( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_32085( iParam0 )) > 30.00000000)
        {
            sub_44436( iParam0 );
        }
        else if ((sub_35614( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_24337( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_44521( iParam0 );
    }
    return;
}

void sub_19933(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_19944( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_19944(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_20328(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_3733() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_3733(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_20462( iParam0 + 0 )) == 3) AND ((sub_21419( iVar3 )) == sub_21448())))
        {
            if ((((sub_20462( iParam0 + 0 )) != 1) || ((sub_21494( iParam0->_fU0 )) == (sub_20977( 0 )))) || ((sub_21536( sub_3733() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3733() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_20462( iParam0 + 0 )) == 3)
        {
            sub_21655( iParam0->_fU0, "", sub_3733(), 26 );
        }
        else
        {
            sub_21655( sub_3733(), "", iParam0->_fU0, 37 );
        }
        return sub_24337( iParam0, 1, 1 );
    }
    return 0;
}

void sub_20462(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_20502( ref uVar3 );
    }
    return Result;
}

void sub_20502(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_20977( 0 ))) || ((uParam0^) == (sub_20977( 1 )))) || ((uParam0^) == (sub_20977( 6 )))) || ((uParam0^) == (sub_20977( 7 )))) || ((uParam0^) == (sub_20977( 13 )))) || ((uParam0^) == (sub_20977( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_20977( 15 ))) || ((uParam0^) == (sub_20977( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_20977(unknown uParam0)
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
    sub_1008( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_21419(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_21448()
{
    return 301427732;
}

void sub_21494(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_21536(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

void sub_21655(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_22145( sub_21815( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U183 = iParam0;
        l_U184 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_22489( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_3733())
            {
                iVar8 = sub_20462( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_3733()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_3733(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3733(), iParam2, sub_22489( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_3733(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_3733(), iParam0, sub_22489( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_20977( 0 ) )))
            {
                if (l_U188)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_22753( iParam3 ), 1, 1, 2 );
            }
            l_U182 = iParam3;
        }
        GET_GAME_TIMER( ref l_U181 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U186, 2 );
            case 36: SET_BIT( ref l_U186, 1 );
            case 24:
            SET_BIT( ref l_U186, 0 );
            break;
            case 38:
            SET_BIT( ref l_U186, 6 );
            break;
        }
    }
    return Result;
}

void sub_21815(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_21868( uVar3 );
        }
    }
    return Result;
}

void sub_21868(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_22145(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_22489(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_22753(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_24337(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_21536( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_11466( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_24499( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_24768( sub_3733(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_24499(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_24510( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_24510(int iParam0)
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

void sub_24768(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_24979(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_25010( (iParam0^) )))
        {
            if (((sub_25045( (iParam0^) )) AND (NOT l_U170)) AND (NOT l_U171))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_17411()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_3733() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3733(), iParam0->_fU0, l_U160, l_U160, l_U160, 0 ))
                        {
                            if (sub_25177())
                            {
                                if (iParam0->_fU0 == l_U169)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_18276( (iParam0 + 44) + 12, ref l_U163, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_18276( (iParam0 + 44) + 28, ref l_U163, 7, 1 );
                                    }
                                    sub_25303( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_3733() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3733(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_3733(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U146 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_3733(), ref l_U175._fU0, ref l_U175._fU4, ref l_U175._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U178._fU0, ref l_U178._fU4, ref l_U178._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U175._fU0, l_U175._fU4, l_U175._fU8, l_U178._fU0, l_U178._fU4, l_U178._fU8, ref l_U174 );
                                    if (iParam0->_fU0 == l_U169)
                                    {
                                        l_U173 += 1.00000000 * TIMESTEP();
                                        l_U172 = l_U174;
                                    }
                                    else if ((l_U174 <= l_U172) || (IS_CHAR_INJURED( l_U169 )))
                                    {
                                        l_U169 = iParam0->_fU0;
                                        l_U172 = l_U174;
                                        l_U173 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_25731())
                            {
                                sub_25759();
                            }
                            else if (sub_25816())
                            {
                                sub_25780();
                            }
                            GET_CHAR_COORDINATES( sub_3733(), ref l_U175._fU0, ref l_U175._fU4, ref l_U175._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U178._fU0, ref l_U178._fU4, ref l_U178._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U175._fU0, l_U175._fU4, l_U175._fU8, l_U178._fU0, l_U178._fU4, l_U178._fU8, ref l_U174 );
                            if (iParam0->_fU0 == l_U169)
                            {
                                l_U173 += 1.00000000 * TIMESTEP();
                                l_U172 = l_U174;
                            }
                            else if ((l_U174 <= l_U172) || (IS_CHAR_INJURED( l_U169 )))
                            {
                                l_U169 = iParam0->_fU0;
                                l_U172 = l_U174;
                                l_U173 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_26080())
                        {
                            sub_26288( (iParam0^) );
                        }
                    }
                    else if (NOT sub_26080())
                    {
                        sub_26288( (iParam0^) );
                    }
                }
                else if (NOT sub_26080())
                {
                    sub_26288( (iParam0^) );
                }
            }
            else if (NOT sub_26080())
            {
                sub_26288( (iParam0^) );
            }
        }
        else if (NOT sub_26080())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3733(), iParam0->_fU0, l_U161, l_U161, l_U161, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_3733() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3733() )))) || (NOT (sub_26098( l_U163 ))))
            {
                sub_26589( iParam0 );
            }
        }
    }
    else if (sub_25010( (iParam0^) ))
    {
        sub_26603( ref l_U163, 0 );
        sub_26589( iParam0 );
    }
    return;
}

void sub_25010(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_25045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

int sub_25177()
{
    if (NOT l_U147)
    {
        if (l_U146)
        {
            return 1;
        }
    }
    return 0;
}

void sub_25303(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U169 = nil;
    l_U173 = 0.00000000;
    l_U170 = 1;
    return;
}

void sub_25731()
{
    return l_U145;
}

void sub_25759()
{
    l_U145 = 1;
    l_U146 = 0;
    sub_25780();
    return;
}

void sub_25780()
{
    l_U147 = 0;
    return;
}

void sub_25816()
{
    return l_U147;
}

void sub_26080()
{
    int Result;

    Result = 0;
    if (sub_26098( l_U153 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_26098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_18450( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18450( "\n speech is not playing" );
    }
    return 0;
}

void sub_26288(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U169)
    {
        l_U169 = nil;
        l_U173 = 0.00000000;
        sub_26329();
    }
    return;
}

void sub_26329()
{
    if (l_U144 == 1)
    {
        l_U148 = 0.00000000;
        l_U147 = 1;
        l_U146 = 0;
    }
    return;
}

void sub_26589(int iParam0)
{
    sub_26603( ref l_U163, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3733() )))
    {
        TASK_CLEAR_LOOK_AT( sub_3733() );
    }
    l_U170 = 0;
    return;
}

void sub_26603(int iParam0, unknown uParam1)
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

void sub_26871(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U185) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_25010( (iParam0^) )) AND (sub_17411()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_3733() )))
            {
                GET_CHAR_COORDINATES( sub_3733(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U183 != iParam0->_fU0) || (l_U184 != sub_3733()))
                    {
                        sub_21655( iParam0->_fU0, sub_27145( uVar8._fU0 < 0.00000000, sub_21868( iParam0->_fU4 ) ), sub_3733(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_3733() ))
                {
                    l_U183 = sub_3733();
                    l_U184 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_17411()) || (sub_25010( (iParam0^) ))) || ((iVar4 - l_U181) < 33))
    {
        return;
    }
    if (l_U181 <= 0)
    {
        l_U181 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_27798( uVar12 ))
            {
                fVar21 = sub_27841( iParam0 );
                if (((NOT (sub_25010( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U183))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U120) AND ((iParam0->_fU36 != 1) || ((sub_22489( 0, 10 )) == 0)))
                    {
                        l_U120 = 0;
                        iVar15 = 17;
                        iVar11 = sub_3733();
                    }
                    else if ((((sub_28035( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_20462( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U186, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_28149( bVar16 );
                        iVar11 = sub_3733();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_28237( 8 )))
                    {
                        uVar13 = sub_28491( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_3733() )) AND (sub_28237( 12 )))
                    {
                        uVar13 = sub_28149( bVar16 );
                        iVar11 = sub_3733();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_28237( 13 )))
                    {
                        uVar13 = sub_28149( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_20462( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_788() )))) AND (IS_BIT_SET( l_U186, 7 ))) AND (sub_28237( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_28491( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_3733();
                        CLEAR_BIT( ref l_U186, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_788(), 0 )) AND (NOT (IS_BIT_SET( l_U186, 0 )))) AND (sub_28237( 24 ))) AND ((sub_20462( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_3733();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 ))) AND (IS_BIT_SET( l_U186, 0 ))) AND (sub_28237( 30 ))) AND ((sub_20462( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_24768( sub_3733(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U186, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3733() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_3733() ))
                                    {
                                        if (sub_28237( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_3733();
                                            if ((sub_22489( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_28491( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_28149( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U186, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_3733() ))
                                    {
                                        CLEAR_BIT( ref l_U186, 3 );
                                        CLEAR_BIT( ref l_U186, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_3733() ))
                            {
                                if (((sub_28237( 33 )) AND (NOT (IS_BIT_SET( l_U186, 4 )))) AND ((sub_20462( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3733(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_21868( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U186, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U186, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3733() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3733(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_28237( 31 )) AND (NOT (IS_BIT_SET( l_U186, 4 )))) AND ((sub_20462( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U186, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U186, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_3733() )) AND (NOT (IS_PED_RAGDOLL( sub_3733() ))))
                            {
                                CLEAR_BIT( ref l_U186, 3 );
                                CLEAR_BIT( ref l_U186, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U184))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_28237( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_22489( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_28237( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_788(), 0 ))) AND (NOT (IS_BIT_SET( l_U186, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_788(), 2 )) AND (sub_28237( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_28237( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U184))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_22489( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_788(), 0 )) AND (NOT (IS_BIT_SET( l_U186, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_30380( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U184))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_20462( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_28237( 28 )) AND ((sub_20462( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_20462( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_28237( 3 )) AND (sub_28237( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_20462( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_28237( 30 ))
                                            {
                                                uVar13 = sub_30981( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_28237( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_3733(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_20462( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_28237( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_788(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_28237( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U186, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_28237( 30 )) AND ((sub_20462( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_28237( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_22489( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_21655( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U181) > 10000) AND (IS_BIT_SET( l_U186, 6 )))
    {
        CLEAR_BIT( ref l_U186, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_788() )) AND (NOT (IS_BIT_SET( l_U186, 7 ))))
    {
        SET_BIT( ref l_U186, 7 );
    }
    if (((iVar4 - l_U181) > 28000) AND (l_U183 != nil))
    {
        if ((sub_20462( iParam0 + 0 )) == 1)
        {
            sub_21655( iParam0->_fU0, "", sub_3733(), 30 );
        }
        else
        {
            sub_21655( iParam0->_fU0, "", sub_3733(), 20 );
        }
        l_U183 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 )))
        {
            CLEAR_BIT( ref l_U186, 0 );
            CLEAR_BIT( ref l_U186, 2 );
            CLEAR_BIT( ref l_U186, 1 );
        }
        CLEAR_BIT( ref l_U186, 7 );
    }
    return;
}

void sub_27145(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_22489( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_22489( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_27798(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_27841(int iParam0)
{
    return sub_27861( iParam0->_fU0, sub_3733(), 1 );
}

void sub_27861(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_24768( uParam0, uParam2 ), sub_24768( uParam1, uParam2 ) );
}

void sub_28035(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_3733(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_28149(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_28237(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U181) > iVar3;
}

void sub_28491(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_30380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_30981(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_31697(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_20462( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_31988(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_24510( iParam0 )) != iParam0->_fU4)
    {
        if (sub_27798( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_32085( iParam0 )) < l_U191)
    {
        return 1;
    };;;
    if (sub_27798( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_11466( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_11466( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_11466( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U190, l_U189 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U190, l_U189 );
        }
    }
    else if (sub_11466( iParam0, 64 ))
    {
        fVar4 = (sub_32085( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_32613( iParam0->_fU4 ))
    {
        uVar6 = {sub_32763( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_32085(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_27861( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_24768( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_32613(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_32763(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_33039(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_11466( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_24510( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_20462( ref iVar4 )) == (sub_20462( iParam0 + 0 ))) || ((iVar4 == sub_3733()) AND ((sub_20462( iParam0 + 0 )) == 1)))
                {
                    sub_11899( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_33296(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_33334( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_21536( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_24510( iParam0 )) == iParam0->_fU4)
        {
            if (sub_27798( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_27798( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_3733()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_20462( iParam0 + 0 )) == (sub_20462( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_3733(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_27861( iParam0->_fU0, sub_3733(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_34018( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_27798( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_33334(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_33364( ref uVar5, uParam2 );
}

int sub_33364(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_33389( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_33389( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_33389(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_34018(int iParam0)
{
    if (sub_34032( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_34032(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_34118()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_34118()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_34118()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_34464(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_11466( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_30380( sub_24768( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_34578(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_11466( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_24768( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_34699(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_32085( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_34999(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_32085( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_32085( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_27861( iParam0->_fU0, sub_3733(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_24768( sub_3733(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_35355(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_24510( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_35614(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_3733(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3733(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_3733() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_35771(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_11995( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_3733(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3733() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_33334( sub_3733(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_20462( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_3733(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_24337( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_11466( iParam0, 1 )) AND ((sub_32085( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_3733(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_3733())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_3733() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_3733(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_27861( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_12019( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_36457( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_33039( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34464( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37524( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_39380( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34699( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35614( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_12019( sub_3733(), iParam0->_fU4 )) AND ((sub_20462( iParam0 + 0 )) == 1))
            {
                if ((sub_33039( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34464( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37524( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_39380( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34699( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35614( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_40206( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_40355( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33296( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33039( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34464( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_39380( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36457( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37524( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34699( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35614( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_40206( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33296( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33039( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36457( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34464( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34578( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37524( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_39380( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34699( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35614( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_33334( sub_3733(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_3733())) AND ((sub_20462( iParam0 + 0 )) == 1))
    {
        sub_11899( iParam0, sub_3733() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_24499( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33296( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33039( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_39380( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36796( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34699( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34464( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34578( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37524( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_11466( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_24499( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33296( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33039( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_39380( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_40206( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36796( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34699( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35614( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_11466( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_40206( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36796( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34699( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_24337( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_24499( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_40206( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_24499( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33296( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33039( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36457( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34464( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_39380( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_37524( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36796( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34699( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_35614( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_36457(int iParam0)
{
    unknown uVar3;
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
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_36586( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_32763( uVar3, 1 )};
    uVar8 = {sub_24768( iParam0->_fU0, 1 )};
    uVar11 = {sub_24768( sub_3733(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_32085( iParam0 )) > 30.00000000)
        {
            sub_34018( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_32085( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_36796( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_36586(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_36796(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_34032( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_33334( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_27861( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_37524(int iParam0)
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

    if (NOT (sub_11466( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_21419( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_27841( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_37839( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_27798( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

void sub_37839(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_37887( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_37887(unknown uParam0, unknown uParam1, int iParam2)
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

int sub_39380(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_11899( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_24768( sub_3733(), 1 )};
        uVar7 = {sub_24768( iParam0->_fU0, 1 )};
        uVar10 = {sub_32763( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_3733()) || ((sub_20462( ref iVar3 )) == (sub_20462( iParam0 + 0 ))))
            {
                iVar14 = sub_36586( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_27798( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_40206(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_32085( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_40355(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_24510( iParam0 )) != iParam0->_fU4)
    {
        if (sub_27798( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_27798( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_27798( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_34018( iParam0 );
    iVar8 = 2;
    if (sub_11466( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_32085( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_3733()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3733() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_788(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_24768( sub_3733(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_40873( iParam0, uVar12 );
            }
            else
            {
                return sub_24499( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_24499( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_24499( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_3733())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_41354())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_32613( iParam0->_fU4 )) || (sub_11466( iParam0, 4 ))) AND ((sub_27841( iParam0 )) >= l_U141))
        {
            bVar9 = sub_41624( iParam0, l_U141, l_U142, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_11466( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_11466( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_24499( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_11466( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_43068( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_40873(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_40915( iParam0, 64 );
    Result = sub_31988( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

void sub_40915(int iParam0, int iParam1)
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

boolean sub_41354()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_41624(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_24768( sub_3733(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_43068(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_44436(unknown uParam0)
{
    sub_12480( uParam0, 2 );
    return;
}

void sub_44521(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_11466( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_33334( sub_3733(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3733(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_40915( iParam0, 256 );
        }
    }
    else if (sub_11466( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_11453( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_45026(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_24510( iParam0 ) ))
        {
            fVar7 = sub_27861( iParam0->_fU0, sub_3733(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_3733() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U120 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U120 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U120 = 1;
                }
                fVar7 /= 100.00000000;
                fVar7 += -1.00000000;
                fVar7 *= -1.00000000;
                fVar8 = (fVar7 * (uParam2 - uParam1)) + uParam1;
                Result = (fVar7 * (uParam2 - uParam1)) + uParam1;
                if (NOT bParam4)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, Result );
                }
                return Result;;
            }
            else if (fVar7 < 200)
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, uParam1 );
                return uParam1;
                if (fVar7 > 40.00000000)
                {
                    l_U120 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U120 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_46851(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_24510( iParam0 ) ))
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

void sub_50315()
{
    unknown uVar2;

    if (IS_CAR_DEAD( l_U664 ))
    {
        if (l_U573 == 0)
        {
            l_U573 = 1;
            sub_50360( 2 );
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U664 ))) AND (IS_CAR_ON_FIRE( l_U664 )))
    {
        if (l_U573 == 0)
        {
            l_U573 = 1;
            sub_50360( 2 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U664 )))
    {
        if (DOES_VEHICLE_EXIST( l_U664 ))
        {
            if (sub_51791( l_U664 ))
            {
                if (l_U573 == 0)
                {
                    l_U573 = 1;
                    sub_50360( 3 );
                }
            }
        }
        if (IS_CHAR_IN_CAR( sub_3733(), l_U664 ))
        {
            if (l_U407 == 0)
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_3733(), l_U602._fU0, l_U602._fU4, l_U602._fU8, 0.00000000, 0.00000000, 0.00000000, 1 ))
                {
                    ;
                }
                if (((LOCATE_CHAR_IN_CAR_3D( sub_3733(), l_U602._fU0, l_U602._fU4, l_U602._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )) AND (NOT (IS_CAR_ON_FIRE( l_U664 )))) AND (NOT sub_53384()))
                {
                    REMOVE_BLIP( l_U671 );
                    REMOVE_BLIP( l_U672 );
                    REMOVE_BLIP( l_U673 );
                    BEGIN_CAM_COMMANDS( ref l_U386 );
                    if (l_U386 == 1)
                    {
                        CREATE_CAM( 14, ref uVar2 );
                        SET_CAM_POS( uVar2, -1734.38000000, 324.25000000, 25.59000000 );
                        SET_CAM_ROT( uVar2, 0.70000000, 0.00000000, 44.70000000 );
                        SET_CAM_FOV( uVar2, 45.00000000 );
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        SET_PLAYER_CONTROL( sub_788(), 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3733() );
                        WARP_CHAR_INTO_CAR( sub_3733(), l_U664 );
                        SET_CHAR_COORDINATES( sub_3733(), -1741.15000000, 331.10000000, 25.19000000 );
                        SET_CHAR_HEADING( sub_3733(), 225.00000000 );
                        OPEN_SEQUENCE_TASK( ref l_U585 );
                        TASK_PAUSE( 0, 100 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U664, -1735.76000000, 327.81000000, 25.19000000, 2.00000000, 0, l_U610, 3, 2.00000000, -1 );
                        TASK_CAR_TEMP_ACTION( 0, l_U664, 5, 1000 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, l_U602._fU0, l_U602._fU4, l_U602._fU8, 4, -1 );
                        CLOSE_SEQUENCE_TASK( l_U585 );
                        CLEAR_AREA( -1735.76000000, 327.81000000, 25.19000000, 30.00000000, 1 );
                        DISPLAY_RADAR( 0 );
                        DISPLAY_HUD( 0 );
                        SET_CAM_ACTIVE( uVar2, 1 );
                        SET_CAM_PROPAGATE( uVar2, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SETTIMERA( 0 );
                        while (((NOT (DOES_OBJECT_EXIST( g_U10451 ))) AND (NOT sub_53384())) AND (TIMERA() < 7000))
                        {
                            WAIT( 0 );
                            if (sub_53384())
                            {
                                INCREMENT_INT_STAT( 372, 1 );
                                sub_54008( 500 );
                            }
                        }
                        TASK_PERFORM_SEQUENCE( sub_3733(), l_U585 );
                        if (DOES_OBJECT_EXIST( g_U10451 ))
                        {
                            sub_54153();
                        }
                        while ((TIMERA() < 7000) AND (NOT sub_53384()))
                        {
                            WAIT( 0 );
                            if (DOES_OBJECT_EXIST( g_U10451 ))
                            {
                                if (SLIDE_OBJECT( g_U10451, -1739.42000000, 328.74000000, 29.75000000, 0.00000000, 0.00000000, 0.07000000, 0 ))
                                {
                                    if ((TIMERA() >= 2000) AND (l_U576 == 1))
                                    {
                                        SET_CAM_POS( uVar2, -1733.43000000, 327.60320000, 25.10956000 );
                                        SET_CAM_ROT( uVar2, 8.14845300, 0.00000000, 81.36933000 );
                                        SET_CAM_FOV( uVar2, 25.80005000 );
                                        l_U576 = 0;
                                    }
                                }
                                else
                                {
                                    sub_54428();
                                    if ((TIMERA() >= 2000) AND (l_U576 == 1))
                                    {
                                        SET_CAM_POS( uVar2, -1733.43000000, 327.60320000, 25.10956000 );
                                        SET_CAM_ROT( uVar2, 8.14845300, 0.00000000, 81.36933000 );
                                        SET_CAM_FOV( uVar2, 25.80005000 );
                                        l_U576 = 0;
                                    }
                                }
                            }
                        }
                        if (DOES_OBJECT_EXIST( g_U10451 ))
                        {
                            if (SLIDE_OBJECT( g_U10451, -1739.42000000, 328.74000000, 29.75000000, 0.00000000, 0.00000000, 0.07000000, 0 ))
                            {
                                ;
                            }
                            else
                            {
                                sub_54428();
                                if ((TIMERA() >= 2000) AND (l_U576 == 1))
                                {
                                    l_U576 = 0;
                                }
                            }
                        }
                        if (l_U414 == 0)
                        {
                            if (sub_53384())
                            {
                                INCREMENT_INT_STAT( 372, 1 );
                                DO_SCREEN_FADE_OUT( 500 );
                                SETTIMERA( 0 );
                                l_U414 = 1;
                            }
                            else if (TIMERA() >= 7000)
                            {
                                INCREMENT_INT_STAT( 373, 1 );
                                l_U414 = 1;
                            }
                        }
                        while ((NOT IS_SCREEN_FADED_OUT()) AND (TIMERA() < 1000))
                        {
                            WAIT( 0 );
                            if (DOES_OBJECT_EXIST( g_U10451 ))
                            {
                                if (SLIDE_OBJECT( g_U10451, -1739.42000000, 328.74000000, 29.75000000, 0.00000000, 0.00000000, 0.07000000, 0 ))
                                {
                                    ;
                                }
                                else
                                {
                                    sub_54428();
                                    if ((TIMERA() >= 2000) AND (l_U576 == 1))
                                    {
                                        l_U576 = 0;
                                    }
                                }
                            }
                        }
                        if (DOES_OBJECT_EXIST( g_U10451 ))
                        {
                            SET_OBJECT_COORDINATES( g_U10451, -1739.42000000, 328.74000000, 26.75000000 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U664 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_3733(), l_U664 ))
                            {
                                SET_CAR_COORDINATES( l_U664, -1736.06000000, 327.09000000, 25.45000000 );
                                SET_CAR_HEADING( l_U664, 50.00000000 );
                                WARP_CHAR_FROM_CAR_TO_COORD( sub_3733(), -1741.15000000, 331.10000000, 24.19000000 );
                                SET_CHAR_HEADING( sub_3733(), 225.00000000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( sub_3733(), -1741.15000000, 331.10000000, 24.19000000 );
                                SET_CHAR_HEADING( sub_3733(), 80.00000000 );
                            }
                            SET_CAR_ENGINE_ON( l_U664, 0, 1 );
                        }
                        l_U596 = 300;
                        if (NOT (IS_CAR_DEAD( l_U664 )))
                        {
                            GET_CAR_HEALTH( l_U664, ref l_U595 );
                            if (l_U595 >= 1000)
                            {
                                l_U596 += 500;
                            }
                            if (l_U595 > 700)
                            {
                                l_U596 += 300;
                            }
                            if (l_U595 > 500)
                            {
                                l_U596 += 200;
                            }
                            if (l_U595 > 200)
                            {
                                l_U596 += 100;
                            }
                        }
                        sub_872( l_U596 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_CAM_PROPAGATE( uVar2, 0 );
                        SET_CAM_ACTIVE( uVar2, 0 );
                        DISPLAY_RADAR( 1 );
                        DISPLAY_HUD( 1 );
                        DESTROY_CAM( uVar2 );
                        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
                        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        SET_CAM_BEHIND_PED( sub_3733() );
                        WAIT( 1000 );
                        sub_55441( 500 );
                        sub_54428();
                        SET_PLAYER_CONTROL( sub_788(), 1 );
                        CLEAR_PRINTS();
                        END_CAM_COMMANDS( ref l_U386 );
                        sub_55583();
                    }
                }
            }
        }
    }
    if (l_U370 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U664 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), l_U664, 150.00000000, 150.00000000, 150.00000000, 0 )))
            {
                if (l_U573 == 0)
                {
                    l_U573 = 1;
                    sub_50360( 4 );
                }
            }
        }
    }
    return;
}

void sub_50360(unknown uParam0)
{
    sub_599( l_U611, l_U592 );
    sub_656();
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 2:
        PRINT_NOW( "J3_04", 7000, 1 );
        break;
        case 3:
        PRINT_NOW( "J3_04", 7000, 1 );
        break;
        case 4:
        PRINT_NOW( "J3_05", 7000, 1 );
        break;
        case 5:
        PRINT_NOW( "J3_07", 7000, 1 );
        break;
        case 6: break;
        case 7: break;
    }
    if (NOT l_U397)
    {
        sub_50625( ref l_U371, "E1J3_FAIL", "E1J3_DISS" );
        sub_50985( l_U611, ref l_U371, "E1J3AUD", 8000, 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3733() )))
    {
        CLEAR_CHAR_TASKS( sub_3733() );
        if (NOT (IS_PLAYER_CONTROL_ON( sub_788() )))
        {
            SET_CHAR_VISIBLE( sub_3733(), 1 );
        }
    }
    DESTROY_ALL_CAMS();
    g_U8764 = 1;
    sub_51621();
    DISPLAY_RADAR( 1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    sub_3082();
    return;
}

void sub_50625(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_50676( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_50676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_50985(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51005( uParam0, uParam1, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_51005(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_51621()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

int sub_51791(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3733() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_3733(), uParam0 ))
            {
                if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
                {
                    return 1;
                }
                if ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) AND (NOT (CHECK_STUCK_TIMER( uParam0, 1, 0 ))))
                {
                    return 1;
                }
                if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
                {
                    return 1;
                }
            }
            if (sub_51935( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_51935(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3733() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3733(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3733(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((IS_BUTTON_PRESSED( 0, 15 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 3 )) AND (NOT IS_USING_CONTROLLER())))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U363++;
                        }
                        GET_GAME_TIMER( ref l_U364 );
                    }
                    else if (NOT sub_52106())
                    {
                        if (sub_52184( uParam0 ))
                        {
                            if (l_U363 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3733() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_3733() )))
                                    {
                                        GET_GAME_TIMER( ref l_U365 );
                                        l_U366 = l_U365 - l_U364;
                                        if (l_U366 > 1000)
                                        {
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check has returned true" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check is setting your vehicle on fire" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            SET_PETROL_TANK_HEALTH( uParam0, 65436 );
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U364 );
                                        l_U363 = 0;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U364 );
                                    l_U363 = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U364 );
                            l_U363 = 0;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U364 );
                        l_U363 = 0;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U364 );
                    l_U363 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U364 );
                l_U363 = 0;
            }
        }
    }
    return 0;
}

int sub_52106()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 20) || (iVar2 < 65516))
    {
        return 1;
    }
    if ((iVar3 > 20) || (iVar3 < 65516))
    {
        return 1;
    }
    return 0;
}

int sub_52184(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( sub_3733() )))
    {
        GET_CHAR_COORDINATES( sub_3733(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_52302( sub_3733(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_52302(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        fVar6 = uParam1 - uParam2;
        fVar7 = (uParam1 + uParam2) - 1;
        fVar9 = fVar7 - 360;
        fVar8 = fVar6 + 360;
        if ((fVar7 <= 360) AND (fVar6 >= 0))
        {
            if ((fVar5 > fVar6) AND (fVar5 < fVar7))
            {
                l_U362 = 1;
            }
            else
            {
                l_U362 = 0;
            }
        }
        else if (fVar7 > 360)
        {
            if (((fVar5 < fVar9) AND (fVar5 >= 0)) || ((fVar5 <= 360) AND (fVar5 > fVar6)))
            {
                l_U362 = 1;
            }
            else
            {
                l_U362 = 0;
            }
        }
        else if (fVar6 < 0)
        {
            if (((fVar5 > fVar8) AND (fVar5 <= 360)) || ((fVar5 >= 0) AND (fVar5 < fVar7)))
            {
                l_U362 = 1;
            }
            else
            {
                l_U362 = 0;
            }
        };;;
        if (l_U362)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int sub_53384()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_54008(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_54153()
{
    if (DOES_OBJECT_EXIST( g_U10451 ))
    {
        if (l_U586 == -1)
        {
            l_U586 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U586, l_U587, g_U10451 );
        }
    }
    return;
}

void sub_54428()
{
    if (l_U586 != -1)
    {
        STOP_SOUND( l_U586 );
        RELEASE_SOUND_ID( l_U586 );
        l_U586 = -1;
    }
    return;
}

void sub_55441(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_IN()) AND (NOT IS_SCREEN_FADING_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_55583()
{
    INCREMENT_INT_STAT( 144, 1 );
    CLEAR_WANTED_LEVEL( sub_788() );
    if (NOT g_U0)
    {
        CANCEL_OVERRIDE_RESTART();
    }
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    g_U24 = 82;
    INCREMENT_INT_STAT( 275, 1 );
    sub_55656();
    sub_62106( l_U611, l_U592, 10 );
    if (l_U652 == 584879743)
    {
        sub_50625( ref l_U371, "E1J3_PASS9", "E1J3_YAY" );
    }
    if (l_U652 == 1265391242)
    {
        sub_50625( ref l_U371, "E1J3_PASS5", "E1J3_YAY" );
    }
    if (l_U652 == -114291515)
    {
        sub_50625( ref l_U371, "E1J3_PASS10", "E1J3_YAY" );
    }
    if (l_U652 == 788045382)
    {
        sub_50625( ref l_U371, "E1J3_PASS8", "E1J3_YAY" );
    }
    if (l_U652 == 1203311498)
    {
        sub_50625( ref l_U371, "E1J3_PASS7", "E1J3_YAY" );
    }
    if (l_U652 == -909201658)
    {
        sub_50625( ref l_U371, "E1J3_PASS6", "E1J3_YAY" );
    }
    if (l_U652 == -1606187161)
    {
        sub_50625( ref l_U371, "E1J3_PASS4", "E1J3_YAY" );
    }
    if (l_U652 == -571009320)
    {
        sub_50625( ref l_U371, "E1J3_PASS3", "E1J3_YAY" );
    }
    if (l_U652 == -618617997)
    {
        sub_50625( ref l_U371, "E1J3_PASS2", "E1J3_YAY" );
    }
    if (l_U652 == 2006142190)
    {
        sub_50625( ref l_U371, "E1J3_PASS1", "E1J3_YAY" );
    }
    sub_50985( l_U611, ref l_U371, "E1J3AUD", 12000, 0 );
    sub_3082();
    return;
}

void sub_55656()
{
    sub_55665();
    return;
}

void sub_55665()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 8;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_55692( iVar3, iVar4, iVar5 );
    sub_1625( iVar2 );
    return;
}

void sub_55692(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_55724( iVar5, uParam0, uParam1, uParam2, "Contact_9" );
    return;
}

void sub_55724(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_55820( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_55820( ref cVar9 );
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
            sub_55820( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_55820( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_55820( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_55820( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_56397( uParam0, iVar7 );;;
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
    if (NOT (sub_56845( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_788() );
    sub_2024();
    bVar28 = true;
    uVar29 = sub_56397( uParam0, iVar7 );
    uVar30 = sub_2683( uParam0 );
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
                sub_60783( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_61217();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_61302( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_61381( uParam0 );
                sub_61554( 0 );
                sub_2938( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_61743();
        }
    }
    if (bParam2)
    {
        sub_61217();
        sub_61842();
        sub_61554( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_61217();
        sub_61894();
        sub_61554( 0 );
        sub_2938( uVar30, 0 );
    }
    sub_61945();
    return;
}

void sub_55820(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_56397(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1008( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_56845(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_56941( uParam1 );
        break;
        case 1:
        bVar8 = sub_57250( uParam1 );
        break;
        case 2:
        bVar8 = sub_57853( uParam1 );
        break;
        case 3:
        bVar8 = sub_58090( uParam1 );
        break;
        case 4:
        bVar8 = sub_58256( uParam1 );
        break;
        case 5:
        bVar8 = sub_58455( uParam1 );
        break;
        case 6:
        bVar8 = sub_58650( uParam1 );
        break;
        case 7:
        bVar8 = sub_58855( uParam1 );
        break;
        case 8:
        bVar8 = sub_59060( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1393( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_56397( uParam0, uParam1 );
    if (bParam3)
    {
        sub_59346( uVar9, uParam0 );
    }
    return 1;
}

int sub_56941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_861( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_861( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_861( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_861( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_57157( "Contact 1", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 1", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_57157(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_57250(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_861( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_861( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_861( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_861( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_861( iVar3, 0, sub_57476(), sub_57612(), 0, 0 );
        break;
        default:
        sub_57157( "Contact 2", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 2", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57476()
{
    switch (l_U356[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1393( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_57612()
{
    switch (l_U356[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1393( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_57853(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_861( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_861( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_861( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_57157( "Contact 3", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 3", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_57157( "Friend 4", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Friend 4", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_861( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_861( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_57157( "Contact 5", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 5", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58455(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_861( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_861( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_57157( "Contact 6", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 6", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58650(unknown uParam0)
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
        sub_861( iVar3, 0, sub_57476(), sub_57612(), 0, 0 );
        break;
        default:
        sub_57157( "Friend 7", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Friend 7", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58855(unknown uParam0)
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
        sub_861( iVar3, 0, sub_57476(), sub_57612(), 0, 0 );
        break;
        default:
        sub_57157( "Friend 8", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Friend 8", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59060(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_861( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_57157( "Contact 9", 1 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57157( "Contact 9", 0 );
        sub_861( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_59346(int iParam0, int iParam1)
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
    if (sub_59407( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_60125( iParam1 );
    }
    return;
}

int sub_59407(int iParam0, int iParam1)
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
            sub_59547( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_59547(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_59717( 0 );
    return;
}

void sub_59717(boolean bParam0)
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
        sub_59962();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_59962()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_60125(int iParam0)
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
        sub_60356( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_60356( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_60356( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_60356( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_60356( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_60356( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_60356(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_60783(unknown uParam0, unknown uParam1)
{
    sub_60802( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_60802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_61217()
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

int sub_61302(int iParam0, int iParam1)
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

void sub_61381(unknown uParam0)
{
    sub_61390();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_61390()
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

void sub_61554(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_61605( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_61605(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_61743()
{
    sub_61752();
    return;
}

void sub_61752()
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

void sub_61842()
{
    sub_61752();
    return;
}

void sub_61894()
{
    sub_61752();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_61945()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_61967();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_61967()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_62106(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 1;
    g_U15862[uParam0]._fU228._fU0 = 1;
    return sub_62159( uParam0, uParam2 );
}

int sub_62159(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15862[uParam0]._fU228._fU12[I] != 1)
        {
            return 0;
        }
    }
    return 1;
}

void sub_62894()
{
    if (IS_WANTED_LEVEL_GREATER( sub_788(), 0 ))
    {
        if (l_U407 == 0)
        {
            l_U407 = 1;
            if (DOES_BLIP_EXIST( l_U673 ))
            {
                REMOVE_BLIP( l_U673 );
            }
            PRINT_NOW( "J3_06", 7500, 1 );
        }
    }
    else if (l_U407 == 1)
    {
        l_U407 = 0;
        if (DOES_BLIP_EXIST( l_U672 ))
        {
            REMOVE_BLIP( l_U672 );
        }
        if (l_U407 == 0)
        {
            ADD_BLIP_FOR_COORD( l_U602._fU0, l_U602._fU4, l_U602._fU8, ref l_U673 );
        }
        SET_ROUTE( l_U673, 1 );
        if (l_U398 == 0)
        {
            PRINT_NOW( "J3_02", 7500, 1 );
            l_U398 = 1;
        }
    }
    return;
}

void sub_63146()
{
    if (l_U391 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U664 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3733(), l_U664 )))
            {
                if (DOES_BLIP_EXIST( l_U673 ))
                {
                    REMOVE_BLIP( l_U673 );
                }
                ADD_BLIP_FOR_CAR( l_U664, ref l_U672 );
                SET_BLIP_AS_FRIENDLY( l_U672, 1 );
                l_U391 = 0;
                if (l_U400 == 0)
                {
                    PRINT_NOW( "J3_03", 7500, 1 );
                    l_U400 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U664 )))
    {
        if (IS_CHAR_IN_CAR( sub_3733(), l_U664 ))
        {
            if (DOES_BLIP_EXIST( l_U672 ))
            {
                REMOVE_BLIP( l_U672 );
            }
            if (l_U407 == 0)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U673 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U602._fU0, l_U602._fU4, l_U602._fU8, ref l_U673 );
                        SET_ROUTE( l_U673, 1 );
                    }
                    if (l_U398 == 0)
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_788(), 0 )))
                        {
                            PRINT_NOW( "J3_02", 7500, 1 );
                            l_U398 = 1;
                        }
                    }
                }
            }
            l_U391 = 1;
        }
    }
    return;
}

int sub_63557(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_63650())
            {
                return 0;
            }
            if (sub_63780())
            {
                return 0;
            }
            sub_64042();
            return 1;
        }
    }
    return 0;
}

int sub_63650()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_63780()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    int iVar10;

    fVar8 = 0.00000000;
    if (IS_CHAR_DEAD( sub_3733() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_3733(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU20) || (g_U18635[I]._fU24))
        {
            return 1;
        }
        if (g_U18635[I]._fU0)
        {
            iVar10 = g_U18635[I]._fU180;
            if (NOT (iVar10 == 16))
            {
                uVar2 = {g_U10789[iVar10]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 < 500.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_64042()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_64148()
{
    l_U575 = 1;
    if (sub_64178( ref l_U371, "E1J3AUD", 1 ))
    {
        while (l_U575)
        {
            WAIT( 0 );
            switch (sub_67141())
            {
                case 2:
                l_U575 = 0;
                break;
                default:
                if (sub_67229( 0 ))
                {
                    l_U575 = 0;
                    REMOVE_BLIP( l_U671 );
                    REMOVE_BLIP( l_U673 );
                    REMOVE_BLIP( l_U672 );
                    l_U397 = 1;
                    if (l_U573 == 0)
                    {
                        l_U573 = 1;
                        sub_50360( 5 );
                    }
                }
                break;
            }
        }
    }
    return;
}

int sub_64178(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_64231( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_66118( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_64231(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_18450( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_18450( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_788() )))
    {
        sub_18450( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3733() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3733() ))))
    {
        sub_18450( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_18450( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_64746()) AND (NOT bParam11))
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
                sub_18450( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_64746()) AND (NOT bParam11))
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
    sub_66118( uParam0, ref g_U94._fU176 );
    sub_66514( ref g_U94._fU160 );
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
        sub_4208( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_64746()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_64803())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_64803()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_788() )))
    {
        sub_18450( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_18450( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_18450( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_18450( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_788() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3733() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3733(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_18450( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3733() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_18450( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_18450( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_788() )))
    {
        sub_18450( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_66118(unknown uParam0, unknown uParam1)
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

void sub_66514(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_67141()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

int sub_67229(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3733(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_18450( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}
