void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U332 = 0;
    l_U350 = 0;
    l_U2519 = 0;
    l_U2529 = {-385.75950000, 1492.44800000, 9.71040000};
    l_U2565 = {-388.25960000, 1492.73400000, 9.71030000};
    l_U2728 = {-386.34000000, 1481.91000000, 10.39330000};
    l_U2731 = {-386.19000000, 1480.45000000, 12.25000000};
    l_U2734 = {-387.79000000, 1481.24000000, 11.63000000};
    l_U2737 = {-394.05000000, 1483.98000000, 9.70000000};
    l_U2746 = {0.20000000, 0.20000000, 0.00000000};
    l_U2749 = 270;
    l_U2753 = 297.99950000;
    l_U2754 = 340;
    l_U2755 = 60;
    l_U2756 = 150;
    l_U2757 = "mini_fight";
    l_U2758 = 52357603;
    l_U2759 = -301223260;
    l_U2760 = 1117105909;
    l_U2761 = -1169721927;
    l_U2762 = 648140560;
    l_U2763 = -2065581610;
    l_U2764 = "E2fightchamber";
    l_U2765 = "amb@watch_melee";
    l_U2766 = "missbrian_3";
    l_U2826 = 0;
    l_U2827 = 0;
    l_U2828 = 0;
    l_U2883 = 0;
    l_U3049 = 0;
    l_U3050 = 0;
    l_U3051 = 2;
    l_U3052 = 0;
    l_U3053 = 2;
    l_U3054 = 0;
    l_U3055 = 2;
    l_U3056 = 0;
    l_U3060 = 0;
    l_U3064 = 0;
    l_U3066 = 0;
    l_U3067 = 5;
    l_U3071 = 0;
    l_U3072 = 0;
    l_U3073 = 5;
    l_U3082 = 0;
    l_U3083 = 0.00000000;
    l_U3087 = 0.00000000;
    l_U3088 = 0;
    l_U3089 = 0;
    l_U3090 = 0;
    l_U3118 = {65148, 1492, 9.71030000};
    l_U3121 = 120;
    l_U3281 = 0;
    l_U3431 = 1000.00000000;
    l_U3439 = 0.81000000;
    l_U3492 = 0;
    l_U3493 = 0;
    l_U3494 = 0;
    l_U3495 = 0;
    l_U3496 = 0;
    l_U3497 = 0;
    l_U3498 = 0;
    l_U3499 = 0;
    l_U3500 = 0;
    l_U3501 = 0;
    l_U3529 = 10.00000000;
    l_U3530 = 15.00000000;
    l_U3545 = 0;
    l_U3546 = 0;
    l_U3547 = 0;
    l_U3548 = 0;
    l_U3549 = 0;
    l_U3550 = 0;
    l_U3551 = 0;
    l_U3552 = 0;
    l_U3553 = 0;
    l_U3554 = 0;
    l_U3555 = 0;
    l_U3556 = 0;
    l_U3557 = 0;
    l_U3558 = 0;
    l_U3559 = 0;
    l_U3560 = 0;
    l_U3561 = 0;
    l_U3562 = 0;
    l_U3563 = 0;
    l_U3564 = 0;
    l_U3565 = 0;
    l_U3566 = 0;
    l_U3567 = 0;
    l_U3568 = 0;
    l_U3570 = 0;
    l_U3571 = 0;
    l_U3573 = 0;
    l_U3683 = 0.00000000;
    l_U3684 = 0.00000000;
    l_U3692 = 0.00000000;
    l_U3695 = 45.00000000;
    l_U3713 = 0;
    l_U3714 = 0;
    l_U3715 = 0;
    l_U3716 = 0;
    l_U3717 = 0;
    l_U3721 = -7.30000000;
    l_U5361 = 22.00000000;
    l_U5390 = 0;
    l_U5416 = 0;
    l_U5488 = 0;
    l_U5490 = 0;
    l_U5501 = 0;
    l_U5510 = 800869680;
    l_U5511 = 1159759556;
    l_U5516 = 0;
    l_U5517 = -1;
    l_U5518 = 0;
    l_U5519 = 0;
    l_U5524 = 1;
    l_U5629 = 0;
    l_U5639 = 0.50000000;
    l_U5642 = 0;
    l_U5645 = 0;
    l_U5646 = 0;
    l_U5647 = 0;
    l_U5654 = "MF5_END";
    l_U5656 = 0;
    l_U5664 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1114();
        l_U5628 = 1;
        sub_3437();
    }
    sub_11213();
    while (true)
    {
        WAIT( 0 );
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (IS_PLAYER_PLAYING( sub_4478() ))
        {
            switch (l_U332)
            {
                case 0:
                sub_22070( 0 );
                sub_64359( 0 );
                if (l_U5610[0] == 16)
                {
                    sub_64395();
                    l_U332 = 1;
                }
                break;
                case 1:
                sub_22070( 1 );
                sub_64359( 1 );
                if (l_U5610[1] == 16)
                {
                    sub_64395();
                    l_U332 = 2;
                }
                break;
                case 2:
                sub_22070( 2 );
                sub_64359( 2 );
                if (l_U5610[2] == 16)
                {
                    sub_64395();
                    l_U332 = 3;
                }
                break;
                case 3:
                sub_22070( 3 );
                sub_64359( 3 );
                if (l_U5610[3] == 16)
                {
                    sub_64395();
                    l_U332 = 4;
                }
                break;
                case 4:
                sub_22070( 4 );
                sub_64359( 4 );
                if (l_U5610[4] == 16)
                {
                    sub_64395();
                    l_U332 = 5;
                }
                break;
                case 5:
                sub_22070( 5 );
                sub_64359( 5 );
                if (l_U5610[5] == 16)
                {
                    sub_64395();
                    l_U332 = 6;
                }
                break;
                case 6:
                sub_22070( 6 );
                sub_64359( 6 );
                if (l_U5610[6] == 16)
                {
                    sub_64395();
                    l_U332 = 7;
                }
                break;
                case 7:
                sub_22070( 7 );
                sub_64359( 7 );
                if (l_U5610[7] == 16)
                {
                    sub_64395();
                    l_U332 = 8;
                }
                break;
                case 8:
                sub_22070( 8 );
                sub_64359( 8 );
                if (l_U5610[8] == 16)
                {
                    sub_64395();
                    l_U332 = 9;
                }
                break;
                case 9:
                sub_22070( 9 );
                sub_64359( 9 );
                if (l_U5610[9] == 16)
                {
                    sub_64395();
                    l_U332 = 10;
                }
                break;
                case 10:
                WAIT( 3000 );
                sub_22070( 10 );
                sub_3437();
                break;
            }
            if (IS_SCREEN_FADING_OUT())
            {
                sub_37575();
            }
        }
    }
    return;
}

void sub_1114()
{
    int iVar2;

    iVar2 = 0;
    sub_1128( iVar2 );
    sub_2414( iVar2 );
    return;
}

void sub_1128(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1137();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1313();
        sub_1521();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1646();
            sub_1698();
            g_U11063 = 1;
        }
    }
    sub_1791();
    sub_1930();
    uVar5 = sub_2043( uParam0 );
    sub_2321( uVar5, 0 );
    return;
}

void sub_1137()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_1313()
{
    if (g_U10972)
    {
        return;
    }
    sub_1340( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1461();
    }
    return;
}

void sub_1340(int iParam0)
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
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1461()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1521()
{
    sub_1530();
    return;
}

void sub_1530()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1646()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1698()
{
    sub_1707();
    return;
}

void sub_1707()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1791()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1930()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1952();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1952()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2043(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2274( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2274(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2321(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2414(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2423();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3198())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3264();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2423()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2461( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2461( 1, g_U575[I] )) != 0)
            {
                sub_2747( I );
            }
        }
    }
    if (NOT sub_2913())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_2461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2747(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2832( g_U575 - 1 );
    return;
}

void sub_2832(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2913()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2461( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3198()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3264()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3437()
{
    MUTE_GAMEWORLD_AUDIO( 0 );
    g_U9583 = 0;
    g_U9309 = 0;
    sub_3466();
    FREEZE_CHAR_POSITION( sub_3539(), 1 );
    ENABLE_END_CREDITS_FADE();
    if ((IS_SCREEN_FADED_IN()) || (IS_SCREEN_FADING_IN()))
    {
        DO_SCREEN_FADE_OUT( 3000 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (l_U5628 == 0)
    {
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    RELEASE_WEATHER();
    sub_3710( 0 );
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        SET_CHAR_HEADING( sub_3539(), 305.90000000 );
    }
    sub_3800();
    STOP_CREDITS();
    STOP_END_CREDITS_MUSIC();
    SET_WIDESCREEN_BORDERS( 0 );
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        if (DOES_OBJECT_EXIST( l_U2516 ))
        {
            if (IS_PED_ATTACHED_TO_OBJECT( sub_3539(), l_U2516 ))
            {
                DETACH_PED( sub_3539(), 1 );
            }
            DELETE_OBJECT( ref l_U2516 );
        }
    }
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    g_U10935 = 0;
    if (l_U5628 == 0)
    {
        LOAD_SCENE( -465.86160000, 152.99840000, 8.84810000 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        FREEZE_CHAR_POSITION( sub_3539(), 0 );
    }
    # -NULL-0xc27cb1( 1 );
    FORCE_WIND( -1 );
    sub_4147( ref l_U5655 );
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3539() )))
        {
            SET_CHAR_VISIBLE( sub_3539(), 1 );
            SET_CHAR_COLLISION( sub_3539(), 1 );
            SET_CHAR_COORDINATES( sub_3539(), -465.86160000, 152.99840000, 8.84810000 );
            SET_CHAR_HEADING( sub_3539(), 270.00000000 );
        }
        else
        {
            SET_CHAR_COLLISION( sub_3539(), 1 );
            SET_CHAR_VISIBLE( sub_3539(), 1 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3539(), -465.86160000, 152.99840000, 8.84810000 );
            SET_CHAR_HEADING( sub_3539(), 270.00000000 );
        }
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
    }
    SET_TIME_SCALE( 1.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (l_U5628 == 0)
    {
        if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT()))
        {
            DO_SCREEN_FADE_IN( 3000 );
        }
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        SET_PLAYER_CONTROL( sub_4478(), 1 );
        FREEZE_CHAR_POSITION( sub_3539(), 0 );
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if (l_U5628 == 0)
    {
        AWARD_ACHIEVEMENT( 63 );
        GIVE_WEAPON_TO_CHAR( sub_3539(), 33, 750, 0 );
        SET_CURRENT_CHAR_WEAPON( sub_3539(), 33, 1 );
        g_U25 = 80;
        sub_4601();
    }
    g_U9584 = 1;
    SET_MAX_WANTED_LEVEL( 6 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3466()
{
    sub_3476( 1 );
    sub_3476( 2 );
    sub_3476( 0 );
    return;
}

void sub_3476(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_3539()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3710(boolean bParam0)
{
    g_U30177 = bParam0;
    if (bParam0)
    {
        g_U30248 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30248 = nil;
    }
    return;
}

void sub_3800()
{
    int I;

    for ( I = 0; I <= 17; I++ )
    {
        if (DOES_CAM_EXIST( l_U2497[I] ))
        {
            DESTROY_CAM( l_U2497[I] );
            l_U2497[I] = nil;
        }
    }
    if (DOES_CAM_EXIST( l_U2496 ))
    {
        DESTROY_CAM( l_U2496 );
        l_U2496 = nil;
    }
    DESTROY_ALL_CAMS();
    return;
}

void sub_4147(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_4478()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4601()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_4619();
    sub_4678( iVar2, iVar3, iVar4 );
    return;
}

void sub_4619()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U5604[I] = 4;
    }
    return;
}

void sub_4678(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_4708( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_4708(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_4736();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_4910( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_4910( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_4910( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_4910( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_4910( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_4910( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_5487( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((NOT g_U12382[uParam0]._fU148[I]._fU12) AND (g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_5935( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4478() );
    sub_2423();
    bVar28 = true;
    uVar29 = sub_5487( uParam0, iVar7 );
    uVar30 = sub_2043( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_10209( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_4736();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_10660( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_10739( uParam0 );
                sub_10778( 0 );
                sub_2321( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_10953();
        }
    }
    if (bParam2)
    {
        sub_4736();
        sub_11052();
        sub_10778( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_4736();
        sub_11104();
        sub_10778( 0 );
        sub_2321( uVar30, 0 );
    }
    sub_1930();
    return;
}

void sub_4736()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_4910(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5487(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2274( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_5935(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_6031( uParam1 );
        break;
        case 1:
        bVar8 = sub_6912( uParam1 );
        break;
        case 2:
        bVar8 = sub_7101( uParam1 );
        break;
        case 3:
        bVar8 = sub_7319( uParam1 );
        break;
        case 4:
        bVar8 = sub_7917( uParam1 );
        break;
        case 5:
        bVar8 = sub_8050( uParam1 );
        break;
        case 6:
        bVar8 = sub_8247( uParam1 );
        break;
        case 7:
        bVar8 = sub_8384( uParam1 );
        break;
        case 8:
        bVar8 = sub_8533( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_7530( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_5487( uParam0, uParam1 );
    if (bParam3)
    {
        sub_8751( uVar9, uParam0 );
    }
    return 1;
}

int sub_6031(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_6198( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6198( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_6198( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_6198( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_6198( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_6198( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_6198( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_6198( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_6198( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_6198( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_6198( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_6198( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_6820( "Gay Tony", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Gay Tony", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_6198(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_6209( uParam1 );
    sub_6383( uParam0, 0, uParam2 );
    sub_6383( uParam0, 1, uParam3 );
    sub_6383( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_4619();
    return;
}

void sub_6209(unknown uParam0)
{
    ADD_SCORE( sub_4478(), uParam0 );
    sub_6234( uParam0 );
    return;
}

void sub_6234(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2274( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_6383(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_6820(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6912(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6198( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6198( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_6820( "Mori", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Mori", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7101(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6198( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6198( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_6198( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_6820( "Yusuf", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Yusuf", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7319(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6198( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6198( iVar3, 0, sub_7408(), sub_7674(), 0, 0 );
        break;
        default:
        sub_6820( "Dominicans", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Dominicans", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7408()
{
    switch (l_U5604[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7530( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7530(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7674()
{
    switch (l_U5604[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7530( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_7917(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_6820( "Mum", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Mum", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8050(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6198( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6198( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_6820( "Bulgarin", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Bulgarin", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8247(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_6820( "Rocco", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Rocco", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8384(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6198( iVar3, 0, sub_7408(), sub_7674(), 0, 0 );
        break;
        default:
        sub_6820( "Henrique", 1 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6820( "Henrique", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8533(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_6820( "Reserve 1", 0 );
        sub_6198( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_8751(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_8812( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_9538( iParam1 );
    }
    return;
}

int sub_8812(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_8952( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_8952(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_9122( 0 );
    return;
}

void sub_9122(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_9367();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_9367()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_9538(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_9777( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_9777( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_9777( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_9777( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_9777( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_9777( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_9777(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_10209(unknown uParam0, unknown uParam1)
{
    sub_10228( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_10228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_10660(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
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

void sub_10739(unknown uParam0)
{
    sub_1791();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_10778(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_10829( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_10829(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10953()
{
    sub_10962();
    return;
}

void sub_10962()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_11052()
{
    sub_10962();
    return;
}

void sub_11104()
{
    sub_10962();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_11213()
{
    int I;

    l_U5657 = IS_EPISODIC_DISC_BUILD();
    if (l_U5657)
    {
        sub_11244();
    }
    for ( I = 0; I <= 15; I++ )
    {
        l_U5610[I] = 0;
    }
    sub_3710( 1 );
    sub_11327();
    sub_16021();
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_4478() ))
    {
        SET_PLAYER_CONTROL( sub_4478(), 0 );
    }
    g_U10935 = 1;
    sub_17891();
    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        if (HAS_CHAR_GOT_WEAPON( sub_3539(), 0 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_3539(), 0, 1 );
        }
    }
    sub_3466();
    g_U9309 = 1;
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 3000 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    SET_MAX_WANTED_LEVEL( 0 );
    if (IS_PLAYER_PLAYING( sub_4478() ))
    {
        SET_PLAYER_CONTROL( sub_4478(), 0 );
        SET_EVERYONE_IGNORE_PLAYER( sub_4478(), 1 );
    }
    ALLOW_EMERGENCY_SERVICES( 0 );
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    MUTE_GAMEWORLD_AUDIO( 1 );
    LOAD_ADDITIONAL_TEXT( "MF10AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "CREDIT", 0 );
    LOAD_ADDITIONAL_TEXT( "CREDIT1", 2 );
    START_END_CREDITS_MUSIC();
    WAIT( 1000 );
    DISABLE_END_CREDITS_FADE();
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
    # -NULL-0xc27cb1( 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_18385( ref l_U5655 );
    GET_GAME_TIMER( ref l_U5633 );
    sub_18427( l_U332 );
    g_U43562 = 1;
    WAIT( 0 );
    return;
}

void sub_11244()
{
    l_U2309[0][0] = 60000;
    l_U2442[2] = 18000;
    return;
}

void sub_11327()
{
    l_U547[4][0] = {-1256.41900000, 1690.52900000, 41.08672000};
    l_U1428[4][0] = {-19.20584000, -0.00000000, 128.58200000};
    l_U547[4][1] = {-1268.50400000, 1682.23800000, 34.18338000};
    l_U1428[4][1] = {-29.01731000, 0.00000000, 122.76630000};
    l_U547[4][2] = {-1276.82900000, 1678.69900000, 31.51991000};
    l_U1428[4][2] = {-9.60522900, 0.00000000, 113.92140000};
    l_U547[4][3] = {-1286.55200000, 1676.27700000, 30.50694000};
    l_U1428[4][3] = {-2.85262000, 0.00000000, 89.83010000};
    l_U547[4][4] = {-1296.08400000, 1676.27700000, 30.50694000};
    l_U1428[4][4] = {-3.44217800, -0.00000000, 72.70613000};
    l_U547[4][5] = {-1303.93600000, 1680.20700000, 30.50694000};
    l_U1428[4][5] = {-3.44217800, 0.00000000, 34.37656000};
    l_U547[4][6] = {-1306.51200000, 1680.20700000, 30.50694000};
    l_U1428[4][6] = {1.14557800, -0.00000000, 2.60737100};
    l_U2374[4] = 7;
    l_U2309[4][0] = 121000;
    l_U2309[4][1] = 121000;
    l_U2391[4] = 20;
    l_U2408[4] = 5;
    l_U2476[4] = 0;
    l_U2459[4] = 1740;
    l_U2442[4] = 14000;
    l_U547[2][0] = {-392.76730000, 1497.68000000, 11.42862000};
    l_U1428[2][0] = {3.56347000, -0.00000000, 90.96722000};
    l_U547[2][1] = {-395.08970000, 1493.26700000, 11.30854000};
    l_U1428[2][1] = {-1.70460900, 0.00000000, 158.36420000};
    l_U547[2][2] = {-396.06580000, 1489.53200000, 11.33557000};
    l_U1428[2][2] = {0.07050500, 0.00000000, -132.57810000};
    l_U547[2][3] = {-391.13310000, 1486.79400000, 11.23966000};
    l_U1428[2][3] = {-5.04374900, -0.00000000, -109.47620000};
    l_U547[2][4] = {-388.04720000, 1488.71100000, 10.81141000};
    l_U1428[2][4] = {-2.66630000, -0.00000000, 8.34134300};
    l_U547[2][5] = {-386.10350000, 1495.40900000, 10.63964000};
    l_U1428[2][5] = {3.39168600, 0.00000000, 131.57030000};
    l_U547[2][6] = {-391.21480000, 1496.21500000, 10.92850000};
    l_U1428[2][6] = {-2.90710400, 0.00000000, -150.84010000};
    l_U2374[2] = 7;
    l_U2309[2][0] = 80000;
    l_U2309[2][1] = 90000;
    l_U2391[2] = 10;
    l_U2408[2] = 0;
    l_U2476[2] = 1;
    l_U2459[2] = 1740;
    l_U2442[2] = 14000;
    l_U547[6][0] = {-1351.45300000, -1139.32900000, 11.01721000};
    l_U1428[6][0] = {-29.09140000, -0.00000000, -57.81957000};
    l_U547[6][1] = {-1209.29000000, -1064.20000000, 11.87121000};
    l_U1428[6][1] = {2.63160300, -0.00000000, -47.38961000};
    l_U547[6][2] = {-1088.29000000, -1064.20000000, 11.87121000};
    l_U1428[6][2] = {-5.95656100, 0.00000000, 33.23550000};
    l_U547[6][3] = {-968.69600000, -1064.20000000, 11.87121000};
    l_U1428[6][3] = {2.63160300, -0.00000000, 65.36841000};
    l_U2374[6] = 4;
    l_U2309[6][0] = 80000;
    l_U2309[6][1] = 80000;
    l_U2391[6] = 18;
    l_U2408[6] = 0;
    l_U2476[6] = 1;
    l_U2459[6] = 1740;
    l_U2442[6] = 14000;
    l_U351[7] = {2357.00500000, 354.26430000, 59.04930000};
    l_U400[7] = {-7.05075500, -0.00000000, -99.75306000};
    l_U449[7] = {2353.07200000, 364.57580000, 6.15845700};
    l_U498[7] = {-0.70582100, -0.00000000, -53.79203000};
    l_U2374[7] = 2;
    l_U2309[7][0] = 40000;
    l_U2391[7] = 6;
    l_U2408[7] = 30;
    l_U2476[7] = 1;
    l_U2442[7] = 13000;
    l_U547[9][0] = {2392.42100000, -62.02073000, 6.88443400};
    l_U1428[9][0] = {13.91284000, 0.00000000, 46.82056000};
    l_U547[9][1] = {2465.14400000, 34.44182000, 6.76873800};
    l_U1428[9][1] = {4.78876800, -0.00000000, -11.11267000};
    l_U547[9][2] = {2534.78500000, 114.63630000, 6.88405100};
    l_U1428[9][2] = {9.18097900, -0.00000000, -12.64577000};
    l_U547[9][3] = {2607.44000000, 218.61090000, 6.88443400};
    l_U1428[9][3] = {13.10198000, 0.00000000, -42.10387000};
    l_U547[9][4] = {2702.73600000, 326.05530000, 16.64734000};
    l_U1428[9][4] = {10.82630000, -0.00000000, -41.58020000};
    l_U547[9][5] = {2762.67600000, 393.76440000, 27.08692000};
    l_U1428[9][5] = {5.74550400, 0.00000000, -41.42910000};
    l_U2374[9] = 6;
    l_U2309[9][0] = 37000;
    l_U2391[9] = 20;
    l_U2408[9] = 3;
    l_U2476[9] = 1;
    l_U2442[9] = 12000;
    l_U547[3][0] = {-242.53800000, 262.53670000, 15.59679000};
    l_U1428[3][0] = {28.02906000, 0.00000000, 151.87030000};
    l_U547[3][1] = {-120.41740000, 262.53670000, 15.59679000};
    l_U1428[3][1] = {28.02906000, 0.00000000, 151.87030000};
    l_U2374[3] = 2;
    l_U2309[3][0] = 60000;
    l_U2391[3] = 17;
    l_U2408[3] = 26;
    l_U2476[3] = 0;
    l_U2442[3] = 10000;
    l_U547[1][0] = {977.25980000, 271.24490000, 39.93381000};
    l_U1428[1][0] = {-23.73640000, -0.00000000, 90.80213000};
    l_U547[1][1] = {975.76600000, 249.55630000, 41.24870000};
    l_U1428[1][1] = {1.27570000, 0.00000000, 98.52650000};
    l_U547[1][2] = {976.51790000, 223.75910000, 43.28480000};
    l_U1428[1][2] = {8.37337400, 0.00000000, 83.68536000};
    l_U547[1][3] = {976.51790000, 196.75910000, 43.28480000};
    l_U1428[1][3] = {8.11846600, -0.00000000, 85.46327000};
    l_U547[1][4] = {976.87550000, 170.60900000, 43.84370000};
    l_U1428[1][4] = {7.53770000, 0.00000000, 131.12110000};
    l_U547[1][5] = {976.87310000, 144.03850000, 44.36570000};
    l_U1428[1][5] = {6.30260000, 0.00000000, 144.82130000};
    l_U547[1][6] = {976.87310000, 118.19450000, 44.36570000};
    l_U1428[1][6] = {6.30260000, 0.00000000, 149.15980000};
    l_U547[1][7] = {976.87310000, 92.10840000, 44.36570000};
    l_U1428[1][7] = {0.45660000, 0.00000000, 149.15980000};
    l_U547[1][8] = {976.87310000, 68.39340000, 44.36570000};
    l_U1428[1][8] = {-5.39560000, 0.00000000, 149.15980000};
    l_U547[1][9] = {976.87310000, 42.41040000, 44.36570000};
    l_U1428[1][9] = {-7.35090000, 0.00000000, 149.15980000};
    l_U547[1][10] = {976.87310000, 16.76590000, 44.36570000};
    l_U1428[1][10] = {-10.25960000, 0.00000000, 152.52480000};
    l_U547[1][11] = {976.87310000, -10.61770000, 44.36570000};
    l_U1428[1][11] = {-8.02290000, 0.00000000, 145.64260000};
    l_U547[1][12] = {976.87310000, -36.29020000, 44.36570000};
    l_U1428[1][12] = {-8.02290000, 0.00000000, 141.68590000};
    l_U547[1][13] = {976.87310000, -69.94140000, 44.36570000};
    l_U1428[1][13] = {0.29380000, 0.00000000, 113.63860000};
    l_U2374[1] = 14;
    l_U2309[1][0] = 43500;
    l_U2391[1] = 17;
    l_U2408[1] = 26;
    l_U2476[1] = 1;
    l_U2442[1] = 12000;
    l_U547[8][0] = {-399.21820000, 390.69550000, 13.46106000};
    l_U1428[8][0] = {52.89384000, 0.00000000, 6.57059000};
    l_U547[8][1] = {-398.98320000, 395.07740000, 14.55024000};
    l_U1428[8][1] = {8.06952200, 0.00000000, 3.43137200};
    l_U547[8][2] = {-399.38170000, 399.13880000, 15.13051000};
    l_U1428[8][2] = {-1.04336400, -0.00000000, -8.77942000};
    l_U547[8][3] = {-396.03960000, 400.65010000, 15.16399000};
    l_U1428[8][3] = {-27.44322000, -0.00000000, -88.44540000};
    l_U547[8][4] = {-392.16830000, 400.70770000, 13.46970000};
    l_U1428[8][4] = {-62.75002000, -0.00000100, -119.14750000};
    l_U547[8][5] = {-390.59360000, 398.22270000, 12.54030000};
    l_U1428[8][5] = {-65.83804000, 0.00000100, 118.05740000};
    l_U547[8][6] = {-393.36540000, 397.41310000, 10.32456000};
    l_U1428[8][6] = {-53.49292000, 0.00000000, 27.25653000};
    l_U547[8][7] = {-394.01160000, 400.15230000, 6.93259000};
    l_U1428[8][7] = {-40.79420000, 0.00000000, 0.75031400};
    l_U547[8][8] = {-393.14480000, 402.36090000, 6.24894400};
    l_U1428[8][8] = {-3.10629500, -0.00000000, -38.28959000};
    l_U547[8][9] = {-389.61440000, 405.64970000, 5.99387300};
    l_U1428[8][9] = {-0.12404200, -0.00000000, -30.28340000};
    l_U547[8][10] = {-386.46490000, 408.96690000, 5.86781800};
    l_U1428[8][10] = {-1.37571800, 0.00000000, -15.83231000};
    l_U547[8][11] = {-384.76850000, 413.02230000, 5.74838400};
    l_U1428[8][11] = {3.13928700, -0.00000000, -11.60314000};
    l_U547[8][12] = {-383.52220000, 416.04110000, 5.96011400};
    l_U1428[8][12] = {0.42289700, -0.00000000, 15.94608000};
    l_U547[8][13] = {-385.11870000, 419.55520000, 6.10313800};
    l_U1428[8][13] = {3.95116100, -0.00000000, 58.67842000};
    l_U547[8][14] = {-387.68480000, 423.50210000, 6.20305900};
    l_U1428[8][14] = {3.99730600, -0.00000000, 68.41961000};
    l_U547[8][15] = {-389.60710000, 425.93730000, 6.27780600};
    l_U1428[8][15] = {3.38576400, 0.00000000, 87.23486000};
    l_U547[8][16] = {-392.98560000, 427.42710000, 6.46551800};
    l_U1428[8][16] = {0.39552700, 0.00000000, -135.69650000};
    l_U547[8][17] = {-394.12840000, 424.09190000, 6.28451400};
    l_U1428[8][17] = {7.82288800, 0.00000000, -68.07862000};
    l_U2374[8] = 18;
    l_U2309[8][0] = 95000;
    l_U2391[8] = 23;
    l_U2408[8] = 7;
    l_U2476[8] = 3;
    l_U2442[8] = 14000;
    l_U547[0][0] = {1496.42000000, 525.73670000, 30.36287000};
    l_U1428[0][0] = {11.94140000, -0.00000000, 14.51243000};
    l_U547[0][1] = {1498.33700000, 518.33390000, 76.74191000};
    l_U1428[0][1] = {-45.67233000, 0.00000000, 14.51243000};
    l_U2374[0] = 2;
    l_U2309[0][0] = 50000;
    l_U2391[0] = 8;
    l_U2408[0] = 0;
    l_U2476[0] = 1;
    l_U2459[0] = 1625;
    l_U2442[0] = 9000;
    l_U547[5][0] = {-434.85440000, 348.39520000, 12.79910000};
    l_U1428[5][0] = {-3.12347200, -0.00000000, -83.34962000};
    l_U547[5][1] = {-432.13080000, 351.37060000, 12.06778000};
    l_U1428[5][1] = {-0.22312200, -0.00000000, -154.07020000};
    l_U547[5][2] = {-430.40140000, 352.38260000, 11.75797000};
    l_U1428[5][2] = {6.16632400, 0.00000000, -129.98010000};
    l_U547[5][3] = {-428.43420000, 355.00350000, 11.65548000};
    l_U1428[5][3] = {6.92064200, -0.00000000, -142.01780000};
    l_U2374[5] = 4;
    l_U2309[5][0] = 70000;
    l_U2391[5] = 23;
    l_U2408[5] = 0;
    l_U2476[5] = 1;
    l_U2459[5] = 1625;
    l_U2442[5] = 14000;
    return;
}

void sub_16021()
{
    l_U3739[6][0]._fU0 = {780, 236, 4};
    l_U3739[6][0]._fU12 = 269.55570000;
    l_U3739[6][0]._fU24 = sub_16076();
    l_U3739[6][0]._fU28 = -911507684;
    l_U3739[6][3]._fU0 = {783.59960000, 235.58630000, 3.50150000};
    l_U3739[6][3]._fU12 = 97.16790000;
    l_U3739[6][3]._fU28 = 1613899343;
    l_U3739[6][7]._fU0 = {780.21270000, 235.15290000, 4.50000000};
    l_U3739[6][7]._fU12 = 267.89580000;
    l_U3739[6][7]._fU28 = 896408642;
    l_U3739[6][10]._fU0 = {802.90000000, 236.05000000, 5.17443000};
    l_U3739[6][10]._fU12 = 93.81000000;
    l_U3739[6][10]._fU28 = -1992728631;
    l_U3739[3][8]._fU0 = {-240.80000000, 223.30000000, 197.97520000};
    l_U3739[3][8]._fU12 = 90.00000000;
    l_U3739[3][8]._fU28 = -448171135;
    l_U3739[1][0]._fU0 = {1165.04400000, -381.96420000, 44.56480000};
    l_U3739[1][0]._fU12 = 175.09600000;
    l_U3739[1][0]._fU28 = -911507684;
    l_U3739[1][0]._fU24 = sub_16491( 1 );
    l_U3739[1][1]._fU0 = {1164.49000000, -408.99500000, 39.50460000};
    l_U3739[1][1]._fU12 = 182.39730000;
    l_U3739[1][1]._fU28 = -1729980128;
    l_U3739[1][1]._fU24 = sub_16491( 1 );
    l_U3739[1][2]._fU0 = {1164.49000000, -408.99500000, 39.50460000};
    l_U3739[1][2]._fU12 = 182.39730000;
    l_U3739[1][2]._fU28 = -1729980128;
    l_U3739[1][2]._fU24 = sub_16491( 1 );
    l_U3739[4][0]._fU0 = {-97.34470000, 876.41970000, 13.68650000};
    l_U3739[4][0]._fU12 = 349.17130000;
    l_U3739[4][0]._fU28 = -911507684;
    l_U3739[4][3]._fU0 = {-102.48830000, 761.25740000, 14.29050000};
    l_U3739[4][3]._fU12 = 275.36250000;
    l_U3739[4][3]._fU28 = 1613899343;
    l_U3739[4][4]._fU0 = {-126.85670000, 790.98110000, 32.24260000};
    l_U3739[4][4]._fU12 = 270.00000000;
    l_U3739[4][4]._fU28 = 1976355936;
    l_U3739[9][0]._fU0 = {-54.56000000, 12.35150000, 13.83230000};
    l_U3739[9][0]._fU12 = 183.35020000;
    l_U3739[9][0]._fU24 = sub_16076();
    l_U3739[9][0]._fU28 = -911507684;
    l_U3739[9][3]._fU0 = {81.73940000, -347.23170000, 13.75790000};
    l_U3739[9][3]._fU12 = 281.62800000;
    l_U3739[9][3]._fU28 = 1613899343;
    l_U3739[9][11]._fU0 = {84.57530000, -346.87980000, 12.75790000};
    l_U3739[9][11]._fU12 = 279.78060000;
    l_U3739[9][11]._fU28 = 1690783035;
    l_U3739[9][9]._fU0 = {86.84670000, -346.62510000, 12.72980000};
    l_U3739[9][9]._fU12 = 274.20480000;
    l_U3739[9][9]._fU28 = 1169442297;
    l_U3739[8][3]._fU0 = {81.73940000, -347.23170000, 13.75790000};
    l_U3739[8][3]._fU12 = 281.62800000;
    l_U3739[8][3]._fU28 = 1613899343;
    l_U3739[8][11]._fU0 = {84.57530000, -346.87980000, 12.75790000};
    l_U3739[8][11]._fU12 = 279.78060000;
    l_U3739[8][11]._fU28 = 1690783035;
    l_U3739[8][9]._fU0 = {86.84670000, -346.62510000, 12.72980000};
    l_U3739[8][9]._fU12 = 274.20480000;
    l_U3739[8][9]._fU28 = 1169442297;
    l_U3739[0][0]._fU0 = {778.23570000, -375.03340000, 6.85730000};
    l_U3739[0][0]._fU12 = 183.35020000;
    l_U3739[0][0]._fU24 = sub_16076();
    l_U3739[0][0]._fU28 = -911507684;
    l_U3739[0][3]._fU0 = {913.59500000, -209.12960000, 26.23430000};
    l_U3739[0][3]._fU12 = 183.35020000;
    l_U3739[0][3]._fU24 = -1932515764;
    l_U3739[0][3]._fU28 = 1613899343;
    l_U3739[0][10]._fU28 = -1992728631;
    return;
}

int sub_16076()
{
    return 1063483177;
}

int sub_16491(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_17891()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_3539() )))
    {
        REQUEST_MODEL( 2093083147 );
        while (NOT (HAS_MODEL_LOADED( 2093083147 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( sub_3539() )))
        {
            GET_CHAR_COORDINATES( sub_3539(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        if (NOT (DOES_OBJECT_EXIST( l_U2516 )))
        {
            CREATE_OBJECT( 2093083147, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U2516, 1 );
        }
        SET_OBJECT_COLLISION( l_U2516, 0 );
        SET_OBJECT_VISIBLE( l_U2516, 0 );
    }
    return;
}

void sub_18385(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_18427(int iParam0)
{
    PRINTSTRING( "LOADING Assets for SHOT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    if (iParam0 == 6)
    {
        sub_18496();
        REQUEST_MODEL( 788747387 );
        REQUEST_CAR_RECORDING( 561 );
        REQUEST_MODEL( 1224353592 );
        REQUEST_MODEL( -556126186 );
    }
    if (iParam0 == 9)
    {
        REQUEST_MODEL( -1541379918 );
    }
    if (iParam0 == 7)
    {
        REQUEST_MODEL( -956048545 );
        REQUEST_MODEL( 1690783035 );
        REQUEST_MODEL( 8772846 );
    }
    if (iParam0 == 8)
    {
        REQUEST_MODEL( -844218756 );
    }
    if (iParam0 == 0)
    {
        LOAD_ALL_OBJECTS_NOW();
    }
    if (iParam0 == 3)
    {
        REQUEST_MODEL( -448171135 );
        REQUEST_MODEL( -339587598 );
        REQUEST_CAR_RECORDING( 105 );
    }
    if (iParam0 == 1)
    {
        REQUEST_MODEL( 353883353 );
        REQUEST_MODEL( -183203150 );
        REQUEST_CAR_RECORDING( 225 );
        REQUEST_CAR_RECORDING( 215 );
        REQUEST_CAR_RECORDING( 235 );
        REQUEST_CAR_RECORDING( 237 );
        REQUEST_CAR_RECORDING( 223 );
        REQUEST_MODEL( 800869680 );
        REQUEST_MODEL( 1976355936 );
        REQUEST_ANIMS( "missyusuf04" );
        REQUEST_MODEL( -448171135 );
        REQUEST_MODEL( 1638119866 );
    }
    if (iParam0 == 4)
    {
        REQUEST_MODEL( -973801307 );
        REQUEST_MODEL( -1684055465 );
        REQUEST_MODEL( -844218756 );
        REQUEST_ANIMS( "mini_champagne" );
        REQUEST_ANIMS( "missDANCE_FEMidl_a" );
        REQUEST_ANIMS( "missDANCE_FEMidl_b" );
        REQUEST_ANIMS( "missDANCE_FEMidl_c" );
        REQUEST_MODEL( 1266833010 );
    }
    if (iParam0 == 2)
    {
        REQUEST_MODEL( -1729980128 );
        REQUEST_MODEL( 1662225612 );
        sub_21429();
    }
    return;
}

void sub_18496()
{
    l_U108[0]._fU72 = -2075782048;
    l_U108[0]._fU76 = -2075782048;
    l_U108[0]._fU84 = 100000;
    l_U108[0]._fU88._fU0 = -1402767135;
    l_U108[0]._fU88._fU4 = -1366882930;
    l_U108[0]._fU88._fU8 = -828457641;
    l_U108[0]._fU88._fU12 = -1313618655;
    l_U108[0]._fU88._fU16 = -828457641;
    l_U108[0]._fU88._fU20 = -1313618655;
    l_U108[1]._fU72 = 1239854102;
    l_U108[1]._fU76 = 518033353;
    l_U108[1]._fU80 = 100.00000000;
    l_U108[1]._fU84 = 2500.00000000;
    l_U108[1]._fU8[0] = {-1174.24800000, -993.05820000, 5.72642400};
    l_U108[1]._fU8[1] = {-1174.24800000, -993.05820000, 5.72642400};
    l_U108[1]._fU8[2] = {-1172.77200000, -997.23500000, 5.39730300};
    l_U108[1]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[1]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[1]._fU88._fU0 = -1689692499;
    l_U108[1]._fU88._fU4 = -1143889885;
    l_U108[1]._fU88._fU8 = 1302805358;
    l_U108[1]._fU88._fU12 = -740515878;
    l_U108[1]._fU88._fU20 = 256624776;
    l_U108[1]._fU112._fU4 = "amb_ship_plume";
    l_U108[1]._fU112._fU8 = {0.00000000, 31.50000000, 4.50000000};
    l_U108[1]._fU112._fU20 = 1.00000000;
    l_U108[2]._fU72 = 1930762713;
    l_U108[2]._fU76 = -1366166054;
    l_U108[2]._fU80 = 100.00000000;
    l_U108[2]._fU84 = 2500.00000000;
    l_U108[2]._fU8[0] = {-1159.47200000, -986.90060000, 7.15143100};
    l_U108[2]._fU8[1] = {-1155.91100000, -993.99900000, 7.75265600};
    l_U108[2]._fU8[2] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[2]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[2]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[2]._fU88._fU0 = -1996508646;
    l_U108[2]._fU88._fU4 = -855358840;
    l_U108[2]._fU88._fU8 = 1682302867;
    l_U108[2]._fU88._fU12 = -529900459;
    l_U108[2]._fU88._fU20 = 163992799;
    l_U108[2]._fU112._fU4 = "amb_ship_whitesmoke";
    l_U108[2]._fU112._fU8 = {0.90000000, 7.60000000, 7.50000000};
    l_U108[2]._fU112._fU20 = 0.60000000;
    l_U108[3]._fU72 = 1233545547;
    l_U108[3]._fU76 = 1595218282;
    l_U108[3]._fU80 = 100.00000000;
    l_U108[3]._fU84 = 2500.00000000;
    l_U108[3]._fU8[0] = {-1143.55400000, -988.64510000, 12.47237000};
    l_U108[3]._fU8[1] = {-1140.69200000, -984.67130000, 13.07621000};
    l_U108[3]._fU8[2] = {-1143.04700000, -992.28350000, 13.16513000};
    l_U108[3]._fU8[3] = {-1138.28600000, -991.39350000, 13.00777000};
    l_U108[3]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[3]._fU88._fU0 = 57419505;
    l_U108[3]._fU88._fU4 = -530945740;
    l_U108[3]._fU88._fU8 = -471505204;
    l_U108[3]._fU88._fU12 = -1031741483;
    l_U108[3]._fU88._fU20 = -285371601;
    l_U108[3]._fU112._fU4 = "amb_ship_whitesmoke";
    l_U108[3]._fU112._fU8 = {0.00000000, -2.00000000, 11.30000000};
    l_U108[3]._fU112._fU20 = 1.00000000;
    l_U108[4]._fU72 = 1005833766;
    l_U108[4]._fU76 = 2120126803;
    l_U108[4]._fU80 = 100.00000000;
    l_U108[4]._fU84 = 2500.00000000;
    l_U108[4]._fU8[0] = {-1132.41900000, -987.18930000, 18.40566000};
    l_U108[4]._fU8[1] = {-1136.07800000, -987.57600000, 15.11125000};
    l_U108[4]._fU8[2] = {-1130.48300000, -986.28170000, 18.23182000};
    l_U108[4]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[4]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[4]._fU88._fU0 = -249789870;
    l_U108[4]._fU88._fU4 = 1993446944;
    l_U108[4]._fU88._fU8 = -239336839;
    l_U108[4]._fU88._fU12 = 13155365;
    l_U108[4]._fU88._fU20 = 288897752;
    l_U108[4]._fU112._fU4 = "amb_ship_plume";
    l_U108[4]._fU112._fU8 = {0.00000000, -12.00000000, 10.00000000};
    l_U108[4]._fU112._fU20 = 0.50000000;
    l_U108[5]._fU72 = 67157199;
    l_U108[5]._fU76 = 1789985121;
    l_U108[5]._fU80 = 100.00000000;
    l_U108[5]._fU8[0] = {-1117.77900000, -984.02560000, 6.92463900};
    l_U108[5]._fU8[1] = {-1113.66500000, -980.72750000, 7.55649900};
    l_U108[5]._fU8[2] = {-1111.57700000, -987.52530000, 7.32094000};
    l_U108[5]._fU8[3] = {-1108.77600000, -983.11060000, 5.65747300};
    l_U108[5]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U108[5]._fU88._fU0 = -1080811710;
    l_U108[5]._fU88._fU4 = 459792206;
    l_U108[5]._fU88._fU8 = -535896009;
    l_U108[5]._fU88._fU12 = -843141289;
    l_U108[5]._fU88._fU20 = -670316162;
    l_U108[5]._fU112._fU4 = "amb_ship_plume";
    l_U108[5]._fU112._fU8 = {0.00000000, -27.70000000, 1.50000000};
    l_U108[5]._fU112._fU20 = 1.40000000;
    l_U324 = {-1142.77700000, -988.49450000, 1.05540000};
    l_U330 = 98.10810000;
    l_U327 = {0.00000000, 0.00000000, 98.10810000};
    return;
}

int sub_21429()
{
    REQUEST_MODEL( l_U2762 );
    REQUEST_MODEL( l_U2763 );
    REQUEST_MODEL( l_U2758 );
    REQUEST_MODEL( l_U2759 );
    REQUEST_MODEL( l_U2760 );
    REQUEST_MODEL( l_U2761 );
    GET_GAME_VIEWPORT_ID( ref l_U3065 );
    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U3065, l_U2764 );
    REQUEST_ANIMS( l_U2765 );
    REQUEST_ANIMS( l_U2766 );
    REQUEST_ANIMS( l_U2757 );
    sub_21574();
    SET_DEAD_PEDS_DROP_WEAPONS( 0 );
    if ((((((((((HAS_MODEL_LOADED( l_U2758 )) AND (HAS_MODEL_LOADED( l_U2759 ))) AND (HAS_MODEL_LOADED( l_U2760 ))) AND (HAS_MODEL_LOADED( l_U2761 ))) AND (HAS_MODEL_LOADED( l_U2762 ))) AND (HAS_MODEL_LOADED( l_U2763 ))) AND (HAVE_ANIMS_LOADED( l_U2765 ))) AND (HAVE_ANIMS_LOADED( l_U2766 ))) AND (HAVE_ANIMS_LOADED( l_U2757 ))) AND (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\FIGHT_CLUB_ROAR" )))
    {
        l_U2883 = 1;
        return 1;
    }
    return 0;
}

void sub_21574()
{
    if (l_U3064 == 0)
    {
        # -sub_C1FFC0-0xc214c8( 0, ref l_U2885 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U2886 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2887 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2888 );
        LOAD_COMBAT_DECISION_MAKER( 7, ref l_U2889 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2890 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2884 );
        l_U3064 = 1;
    }
    return;
}

void sub_22070(int iParam0)
{
    switch (l_U5610[iParam0])
    {
        case 0:
        if (sub_22145( iParam0 ))
        {
            if (iParam0 == 2)
            {
                sub_23822( 0 );
            }
            sub_3800();
            l_U5610[iParam0] = 1;
        }
        break;
        case 1:
        sub_30802();
        if (iParam0 == 6)
        {
            sub_30853();
            sub_32027();
        }
        else if (iParam0 == 9)
        {
            sub_36833();
            sub_37310();
        }
        else if (iParam0 == 7)
        {
            sub_40921();
            sub_41953();
        }
        else if (iParam0 == 3)
        {
            sub_42675();
            sub_43194( ref l_U3739[iParam0][4], ref l_U3739[iParam0][8] );
        }
        else if (iParam0 == 1)
        {
            sub_43541();
            sub_44041();
        }
        else if (iParam0 == 4)
        {
            sub_50939();
            sub_51432();
        }
        else if (iParam0 == 2)
        {
            sub_53337();
            sub_53914();
        }
        else if (iParam0 == 8)
        {
            sub_56061();
            sub_58591();
        }
        else if (iParam0 == 0)
        {
            sub_59038();
            sub_59886( l_U3739[iParam0][3]._fU16 );
        }
        else if (iParam0 == 5)
        {
            sub_60208();
        };;;;;;;;;;
        if (l_U333[iParam0] == 7)
        {
            l_U5610[iParam0] = 10;
        }
        break;
        case 10:
        if (iParam0 == 9)
        {
            ENABLE_END_CREDITS_FADE();
        }
        DO_SCREEN_FADE_OUT( 3000 );
        l_U5610[iParam0] = 11;
        break;
        case 11:
        if (IS_SCREEN_FADED_OUT())
        {
            if (l_U350 == 1)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                l_U350 = 0;
            }
            if (iParam0 == 0)
            {
                SWITCH_RANDOM_TRAINS( 1 );
            }
            sub_60882( iParam0 );
            if (l_U5657)
            {
                WAIT( 7500 );
            }
            else
            {
                WAIT( 6500 );
            }
            sub_18427( sub_63801( iParam0 ) );
            if (l_U5657)
            {
                if ((sub_63801( iParam0 )) == 2)
                {
                    WAIT( 5000 );
                }
            }
            l_U5610[iParam0] = 12;
        }
        break;
        case 12:
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_ACTIVE( l_U2496, 0 );
            SET_CAM_PROPAGATE( l_U2496, 0 );
        }
        if (l_U350 == 1)
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U350 = 0;
        }
        l_U5610[iParam0] = 16;
        break;
        case 16: break;
    }
    sub_63971( l_U332 );
    return;
}

int sub_22145(int iParam0)
{
    sub_18427( iParam0 );
    if (iParam0 == 0)
    {
        return 1;
    }
    if (iParam0 == 5)
    {
        return 1;
    }
    if (iParam0 == 6)
    {
        if (sub_22196())
        {
            if (HAS_MODEL_LOADED( 788747387 ))
            {
                if (HAS_MODEL_LOADED( -556126186 ))
                {
                    if (HAS_CAR_RECORDING_BEEN_LOADED( 561 ))
                    {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
    if (iParam0 == 9)
    {
        if (HAS_MODEL_LOADED( -1541379918 ))
        {
            return 1;
        }
        return 0;
    }
    if (iParam0 == 7)
    {
        if (HAS_MODEL_LOADED( -956048545 ))
        {
            if (HAS_MODEL_LOADED( 1690783035 ))
            {
                if (HAS_MODEL_LOADED( 8772846 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    if (iParam0 == 8)
    {
        if (NOT (sub_22709( iParam0 )))
        {
            return 0;
        }
    }
    if (iParam0 == 3)
    {
        if (NOT (sub_22822( iParam0 )))
        {
            return 0;
        }
    }
    if (iParam0 == 1)
    {
        if (HAS_MODEL_LOADED( 353883353 ))
        {
            if (HAS_MODEL_LOADED( -448171135 ))
            {
                if (HAS_MODEL_LOADED( -183203150 ))
                {
                    if (HAS_CAR_RECORDING_BEEN_LOADED( 225 ))
                    {
                        if (HAS_CAR_RECORDING_BEEN_LOADED( 215 ))
                        {
                            if (HAS_CAR_RECORDING_BEEN_LOADED( 235 ))
                            {
                                if (HAS_CAR_RECORDING_BEEN_LOADED( 237 ))
                                {
                                    if (HAS_CAR_RECORDING_BEEN_LOADED( 223 ))
                                    {
                                        if (HAS_MODEL_LOADED( 800869680 ))
                                        {
                                            if (HAS_MODEL_LOADED( 1976355936 ))
                                            {
                                                if (HAVE_ANIMS_LOADED( "missyusuf04" ))
                                                {
                                                    if (HAS_MODEL_LOADED( 1638119866 ))
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
                }
            }
        }
        return 0;
    }
    if (iParam0 == 4)
    {
        if (HAS_MODEL_LOADED( -973801307 ))
        {
            if (HAS_MODEL_LOADED( -1684055465 ))
            {
                if (HAS_MODEL_LOADED( -844218756 ))
                {
                    if (HAVE_ANIMS_LOADED( "mini_champagne" ))
                    {
                        if (HAVE_ANIMS_LOADED( "missDANCE_FEMidl_a" ))
                        {
                            if (HAVE_ANIMS_LOADED( "missDANCE_FEMidl_b" ))
                            {
                                if (HAVE_ANIMS_LOADED( "missDANCE_FEMidl_c" ))
                                {
                                    if (HAS_MODEL_LOADED( 1266833010 ))
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
        return 0;
    }
    if (iParam0 == 2)
    {
        if (((HAS_MODEL_LOADED( -1729980128 )) AND (HAS_MODEL_LOADED( 1662225612 ))) AND (sub_21429()))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_22196()
{
    if ((((((((((((NOT (HAS_MODEL_LOADED( -2075782048 ))) || (NOT (HAS_MODEL_LOADED( 1239854102 )))) || (NOT (HAS_MODEL_LOADED( 1930762713 )))) || (NOT (HAS_MODEL_LOADED( 1233545547 )))) || (NOT (HAS_MODEL_LOADED( 1005833766 )))) || (NOT (HAS_MODEL_LOADED( 67157199 )))) || (NOT (HAS_MODEL_LOADED( 518033353 )))) || (NOT (HAS_MODEL_LOADED( -1366166054 )))) || (NOT (HAS_MODEL_LOADED( 1595218282 )))) || (NOT (HAS_MODEL_LOADED( 2120126803 )))) || (NOT (HAS_MODEL_LOADED( 1789985121 )))) || (NOT (HAS_MODEL_LOADED( -556126186 ))))
    {
        REQUEST_MODEL( -2075782048 );
        REQUEST_MODEL( 1239854102 );
        REQUEST_MODEL( 1930762713 );
        REQUEST_MODEL( 1233545547 );
        REQUEST_MODEL( 1005833766 );
        REQUEST_MODEL( 67157199 );
        REQUEST_MODEL( 518033353 );
        REQUEST_MODEL( -1366166054 );
        REQUEST_MODEL( 1595218282 );
        REQUEST_MODEL( 2120126803 );
        REQUEST_MODEL( 1789985121 );
        REQUEST_MODEL( -556126186 );
        return 0;
    }
    return 1;
}

int sub_22709(unknown uParam0)
{
    if (NOT (HAS_MODEL_LOADED( -844218756 )))
    {
        PRINTSTRING( "Are_scorseseDancingAssetsLoaded... loading" );
        return 0;
    }
    return 1;
}

int sub_22822(unknown uParam0)
{
    if (NOT (HAS_MODEL_LOADED( -339587598 )))
    {
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- waiting for SWIFT to load --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        return 0;
    }
    if (NOT (HAS_MODEL_LOADED( -448171135 )))
    {
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- waiting for IG_YUSEF to load --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        return 0;
    }
    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 105 )))
    {
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- waiting for car rec 105 to load --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        return 0;
    }
    return 1;
}

void sub_23822(int iParam0)
{
    int I;

    sub_23832( 1 );
    l_U2568[0] = {-380.00000000, 1498.14000000, 9.71030000};
    l_U2568[1] = {-381.76000000, 1498.64000000, 9.71030000};
    l_U2568[2] = {-392.38000000, 1495.73800000, 9.71030000};
    l_U2568[3] = {-381.62640000, 1498.05300000, 9.71030000};
    l_U2568[4] = {-379.81110000, 1488.55300000, 9.71030000};
    l_U2568[5] = {-384.04000000, 1499.59000000, 9.71030000};
    l_U2568[6] = {-386.37890000, 1500.22400000, 9.71030000};
    l_U2568[7] = {-387.11810000, 1500.60000000, 9.71030000};
    l_U2568[8] = {-390.25000000, 1502.32000000, 9.71030000};
    l_U2568[9] = {-391.13000000, 1499.44000000, 9.71030000};
    l_U2568[10] = {-391.37000000, 1498.54000000, 9.71030000};
    l_U2568[11] = {-392.00000000, 1496.78000000, 9.71030000};
    l_U2568[12] = {-391.90960000, 1496.53000000, 9.71040000};
    l_U2568[13] = {-393.26000000, 1494.50000000, 9.71030000};
    l_U2568[14] = {-394.55000000, 1492.99000000, 9.71030000};
    l_U2568[15] = {-394.33110000, 1490.60600000, 9.71030000};
    l_U2568[16] = {-393.49410000, 1488.65600000, 9.71030000};
    l_U2568[17] = {-392.22440000, 1488.12600000, 9.71030000};
    l_U2568[18] = {-394.05000000, 1486.99000000, 9.71000000};
    l_U2568[19] = {-385.96000000, 1484.27000000, 9.71030000};
    l_U2568[20] = {-379.49000000, 1489.48000000, 9.71030000};
    l_U2568[21] = {-386.29990000, 1485.05600000, 9.71030000};
    l_U2568[22] = {-385.24310000, 1484.54400000, 9.71030000};
    l_U2568[23] = {-384.16400000, 1483.99100000, 9.71030000};
    l_U2568[24] = {-382.86990000, 1483.95700000, 9.71040000};
    l_U2568[25] = {-382.01660000, 1484.82600000, 9.71030000};
    l_U2568[26] = {-381.15000000, 1486.68000000, 9.71030000};
    l_U2568[27] = {-380.53000000, 1487.97000000, 9.71030000};
    l_U2568[28] = {-379.36000000, 1490.32000000, 9.71040000};
    l_U2568[29] = {-375.13000000, 1493.28000000, 9.71030000};
    l_U2568[30] = {-377.73000000, 1494.45000000, 9.71030000};
    l_U2568[31] = {-378.49000000, 1497.50000000, 9.71030000};
    l_U2568[32] = {-379.19740000, 1498.27000000, 9.71030000};
    l_U2568[33] = {-381.02660000, 1498.74500000, 9.71030000};
    l_U2568[34] = {-382.18640000, 1499.61400000, 9.71030000};
    l_U2568[35] = {-383.46080000, 1500.35600000, 9.71030000};
    l_U2568[36] = {-384.02050000, 1500.68100000, 9.71030000};
    l_U2568[37] = {-385.08850000, 1501.30200000, 9.71030000};
    l_U2568[38] = {-387.08870000, 1502.50100000, 9.71030000};
    l_U2568[39] = {-388.55750000, 1502.80100000, 9.71030000};
    l_U2568[39] = {-390.10220000, 1501.98500000, 9.71030000};
    l_U2568[39] = {-391.04730000, 1500.44000000, 9.71030000};
    l_U2568[40] = {-392.27450000, 1497.82900000, 9.71030000};
    l_U2568[41] = {-393.32890000, 1495.65800000, 9.71040000};
    l_U2568[42] = {-394.24090000, 1493.72600000, 9.71040000};
    l_U2568[43] = {-395.09110000, 1491.84700000, 9.71030000};
    l_U2568[44] = {-395.47950000, 1489.60100000, 9.71030000};
    l_U2568[45] = {-387.90790000, 1484.64600000, 9.71030000};
    l_U2568[47] = {-383.15580000, 1480.85600000, 9.71030000};
    l_U2568[48] = {-381.78020000, 1483.17100000, 9.71030000};
    l_U2568[49] = {-380.67900000, 1485.18100000, 9.71030000};
    l_U2568[50] = {-379.03640000, 1486.38300000, 9.71030000};
    l_U2568[51] = {-378.15320000, 1488.69800000, 9.71030000};
    l_U2568[52] = {-376.83120000, 1489.68600000, 9.71030000};
    CLEAR_AREA_OF_CHARS( l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, 10.00000000 );
    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        WAIT( 40 );
        sub_25512( ref l_U2891[I], l_U2568[I]._fU0, l_U2568[I]._fU4, l_U2568[I]._fU8, 180.00000000, l_U2885, l_U2884, 0, 0, 0 );
        if (NOT (IS_CHAR_INJURED( sub_3539() )))
        {
            SET_CHAR_NEVER_TARGETTED( l_U2891[I], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2891[I], 1 );
            SET_CHAR_KEEP_TASK( l_U2891[I], 1 );
            if (iParam0 == 1)
            {
                sub_25852( I, 1, 1 );
            }
            else
            {
                sub_25852( I, 0, 1 );
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2758 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2759 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2760 );
    sub_29986();
    sub_30376();
    sub_30575();
    return;
}

void sub_23832(int iParam0)
{
    if (iParam0 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -390.20000000, 1487.70000000, 10.80000000, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -387.50300000, 1486.44500000, 10.84700000, 1, 0.00000000 );
    }
    else
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -390.20000000, 1487.70000000, 10.80000000, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -387.50300000, 1486.44500000, 10.84700000, 0, 0.00000000 );
    }
    return;
}

void sub_25512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar12 );
    if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
    {
        switch (uVar12)
        {
            case 0:
            CREATE_CHAR( 8, l_U2758, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
            case 1:
            CREATE_CHAR( 8, l_U2759, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
            case 2:
            CREATE_CHAR( 8, l_U2760, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U2764 );
        SET_CHAR_HEADING( (uParam0^), uParam4 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 4 );
        SET_CHAR_DECISION_MAKER( (uParam0^), uParam5 );
        SET_COMBAT_DECISION_MAKER( (uParam0^), uParam6 );
        SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    }
    return;
}

void sub_25852(unknown uParam0, boolean bParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar6 );
    if ((NOT (IS_CHAR_INJURED( l_U2891[uParam0] ))) AND (NOT (IS_CHAR_INJURED( sub_3539() ))))
    {
        switch (uVar6)
        {
            case 0:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_A", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 1:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_B", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 2:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_C", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 3:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_D", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 4:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_E", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            default:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_3539(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U2529._fU0, l_U2529._fU4, l_U2529._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_A", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U2891[uParam0], uVar5 );
            sub_26148( l_U2891[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
        }
    }
    return;
}

void sub_26148(unknown uParam0)
{
    sub_26157();
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, "FIGHT_CHEER", l_U2767, 1, 1, 1 );
    }
    return;
}

void sub_26157()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 70, ref iVar2 );
    if (iVar2 == 0)
    {
        l_U2767 = "M_M_ALCOHOLIC";
    }
    else if (iVar2 == 1)
    {
        l_U2767 = "M_M_BUSINESS_02";
    }
    else if (iVar2 == 2)
    {
        l_U2767 = "M_M_CRACKHEAD";
    }
    else if (iVar2 == 3)
    {
        l_U2767 = "M_M_EE_HEAVY_01";
    }
    else if (iVar2 == 4)
    {
        l_U2767 = "M_M_PMANHAT_01";
    }
    else if (iVar2 == 5)
    {
        l_U2767 = "M_Y_GENSTREET_11";
    }
    else if (iVar2 == 6)
    {
        l_U2767 = "M_Y_SOHO_01";
    }
    else if (iVar2 == 7)
    {
        l_U2767 = "M_O_STREET_01";
    }
    else if (iVar2 == 8)
    {
        l_U2767 = "M_M_TRAMPBLACK";
    }
    else if (iVar2 == 9)
    {
        l_U2767 = "M_M_TRAIN_01";
    }
    else if (iVar2 == 10)
    {
        l_U2767 = "M_Y_PMANHAT_02";
    }
    else if (iVar2 == 11)
    {
        l_U2767 = "M_M_PINDUS_02";
    }
    else if (iVar2 == 12)
    {
        l_U2767 = "M_M_FATMOB_01";
    }
    else if (iVar2 == 13)
    {
        l_U2767 = "M_Y_SHADY_02";
    }
    else if (iVar2 == 14)
    {
        l_U2767 = "M_Y_STREET_03";
    }
    else if (iVar2 == 15)
    {
        l_U2767 = "M_Y_STREETPUNK_02";
    }
    else if (iVar2 == 16)
    {
        l_U2767 = "M_Y_LEASTSIDE_01";
    }
    else if (iVar2 == 17)
    {
        l_U2767 = "M_M_PMANHAT_01";
    }
    else if (iVar2 == 18)
    {
        l_U2767 = "M_M_PITALIAN_01";
    }
    else if (iVar2 == 19)
    {
        l_U2767 = "M_O_PJERSEY_01";
    }
    else if (iVar2 == 20)
    {
        l_U2767 = "M_M_FATMOB_01";
    }
    else if (iVar2 == 21)
    {
        l_U2767 = "M_M_CHINATOWN";
    }
    else if (iVar2 == 22)
    {
        l_U2767 = "M_M_EE_HEAVY_02";
    }
    else if (iVar2 == 23)
    {
        l_U2767 = "M_M_PHARBRON_01";
    }
    else if (iVar2 == 24)
    {
        l_U2767 = " M_M_PINDUS_01";
    }
    else if (iVar2 == 25)
    {
        l_U2767 = "M_M_PITALIAN_02";
    }
    else if (iVar2 == 26)
    {
        l_U2767 = "M_M_PLATIN_03";
    }
    else if (iVar2 == 27)
    {
        l_U2767 = "M_M_TAXIDRIVER";
    }
    else if (iVar2 == 28)
    {
        l_U2767 = "M_M_TRUCKER_01";
    }
    else if (iVar2 == 29)
    {
        l_U2767 = "M_O_EASTEURO_01";
    }
    else if (iVar2 == 30)
    {
        l_U2767 = "M_O_STREET_01";
    }
    else if (iVar2 == 31)
    {
        l_U2767 = "M_Y_BOHOGUY_01";
    }
    else if (iVar2 == 32)
    {
        l_U2767 = "M_Y_BOUNCER_01";
    }
    else if (iVar2 == 33)
    {
        l_U2767 = "M_Y_BRONX_01";
    }
    else if (iVar2 == 34)
    {
        l_U2767 = "M_Y_BUSINESS_01";
    }
    else if (iVar2 == 35)
    {
        l_U2767 = "M_Y_BUSINESS_02";
    }
    else if (iVar2 == 36)
    {
        l_U2767 = "M_Y_CHINATOWN_03";
    }
    else if (iVar2 == 37)
    {
        l_U2767 = "M_Y_CLUBFIT";
    }
    else if (iVar2 == 38)
    {
        l_U2767 = "M_Y_DEALER";
    }
    else if (iVar2 == 39)
    {
        l_U2767 = "M_Y_DODGY_01";
    }
    else if (iVar2 == 40)
    {
        l_U2767 = "M_Y_DOWNTOWN_01";
    }
    else if (iVar2 == 41)
    {
        l_U2767 = "M_Y_DOWNTOWN_02";
    }
    else if (iVar2 == 42)
    {
        l_U2767 = "M_Y_DOWNTOWN_03";
    }
    else if (iVar2 == 43)
    {
        l_U2767 = "M_Y_DRUG_01";
    }
    else if (iVar2 == 44)
    {
        l_U2767 = "M_Y_EASTEURO_01";
    }
    else if (iVar2 == 45)
    {
        l_U2767 = "M_Y_GOON_01";
    }
    else if (iVar2 == 46)
    {
        l_U2767 = "M_Y_HARDMAN_01";
    }
    else if (iVar2 == 47)
    {
        l_U2767 = "M_Y_HARLEM_01";
    }
    else if (iVar2 == 48)
    {
        l_U2767 = "M_Y_HARLEM_02";
    }
    else if (iVar2 == 49)
    {
        l_U2767 = "M_Y_HARLEM_04";
    }
    else if (iVar2 == 50)
    {
        l_U2767 = "M_Y_HASID_01";
    }
    else if (iVar2 == 51)
    {
        l_U2767 = "M_Y_LEASTSIDE_01";
    }
    else if (iVar2 == 52)
    {
        l_U2767 = "M_Y_PHARBRON_01";
    }
    else if (iVar2 == 53)
    {
        l_U2767 = "M_Y_PJERSEY_01";
    }
    else if (iVar2 == 54)
    {
        l_U2767 = "M_Y_PLATIN_01";
    }
    else if (iVar2 == 55)
    {
        l_U2767 = "M_Y_PLATIN_03";
    }
    else if (iVar2 == 56)
    {
        l_U2767 = " M_Y_PMANHAT_01";
    }
    else if (iVar2 == 57)
    {
        l_U2767 = "M_Y_PMANHAT_02";
    }
    else if (iVar2 == 58)
    {
        l_U2767 = "M_Y_PQUEENS_01";
    }
    else if (iVar2 == 59)
    {
        l_U2767 = "M_Y_QUEENSBRIDGE";
    }
    else if (iVar2 == 60)
    {
        l_U2767 = "M_Y_RUNNER";
    }
    else if (iVar2 == 61)
    {
        l_U2767 = "M_Y_SHADY_02";
    }
    else if (iVar2 == 62)
    {
        l_U2767 = "M_Y_SKATEBIKE_01";
    }
    else if (iVar2 == 63)
    {
        l_U2767 = "M_Y_SOHO_01";
    }
    else if (iVar2 == 64)
    {
        l_U2767 = "M_Y_STREET_03";
    }
    else if (iVar2 == 65)
    {
        l_U2767 = "M_Y_STREET_04";
    }
    else if (iVar2 == 66)
    {
        l_U2767 = "M_Y_STREETPUNK_02";
    }
    else if (iVar2 == 67)
    {
        l_U2767 = "M_Y_STREETPUNK_04";
    }
    else if (iVar2 == 68)
    {
        l_U2767 = "M_Y_STREETPUNK_05";
    }
    else if (iVar2 == 69)
    {
        l_U2767 = "M_Y_TOUGH_05";
    }
    else
    {
        l_U2767 = "M_Y_GENSTREET_11";
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_29986()
{
    if (HAS_MODEL_LOADED( l_U2761 ))
    {
        if (NOT (DOES_CHAR_EXIST( l_U2945 )))
        {
            CREATE_CHAR( 4, l_U2761, l_U2728._fU0, l_U2728._fU4, l_U2728._fU8, ref l_U2945, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2945 )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U2945, l_U2764 );
            SET_CHAR_COORDINATES( l_U2945, l_U2728._fU0, l_U2728._fU4, l_U2728._fU8 );
            SET_CHAR_HEADING( l_U2945, l_U2754 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2945, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U2945, 1 );
            sub_30196( 3, l_U2945, "BOOKIE", 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U2945, 8, 1, 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2761 );
        }
    }
    return;
}

void sub_30196(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_30276( "\n PED NUMBER ", uParam0 );
    sub_30316( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_30276(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_30316(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_30376()
{
    if (HAS_MODEL_LOADED( l_U2762 ))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U2969 )))
        {
            CREATE_OBJECT( l_U2762, l_U2731._fU0, l_U2731._fU4, l_U2731._fU8, ref l_U2969, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U2969 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2969, l_U2764 );
            SET_OBJECT_COORDINATES( l_U2969, l_U2731._fU0, l_U2731._fU4, l_U2731._fU8 );
            SET_OBJECT_HEADING( l_U2969, l_U2755 );
            FREEZE_OBJECT_POSITION( l_U2969, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2762 );
        }
    }
    return;
}

void sub_30575()
{
    if (HAS_MODEL_LOADED( l_U2763 ))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U2970 )))
        {
            CREATE_OBJECT( l_U2763, l_U2734._fU0, l_U2734._fU4, l_U2734._fU8, ref l_U2970, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U2970 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U2970, l_U2764 );
            SET_OBJECT_COORDINATES( l_U2970, l_U2734._fU0, l_U2734._fU4, l_U2734._fU8 );
            SET_OBJECT_HEADING( l_U2970, l_U2756 );
            FREEZE_OBJECT_POSITION( l_U2970, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2763 );
        }
    }
    return;
}

void sub_30802()
{
    if (g_U9583 == 0)
    {
        START_CREDITS();
        g_U9583 = 1;
    }
    return;
}

void sub_30853()
{
    switch (l_U333[6])
    {
        case 0:
        sub_3800();
        CLEAR_AREA( l_U547[6][0]._fU0, l_U547[6][0]._fU4, l_U547[6][0]._fU8, 70.00000000, 1 );
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 6, l_U2309[6][1], 1, 0, 1112014848 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.04500000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[6] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.04500000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[6])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[6] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[6] = 2;
        }
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[6][1] - 8000))
            {
                l_U333[6] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_31030(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    int I;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int J;

    if (DOES_CAM_EXIST( l_U2496 ))
    {
        DESTROY_CAM( l_U2496 );
    }
    for ( I = 0; I <= (l_U2374[uParam0] - 1); I++ )
    {
        CREATE_CAM( 14, ref l_U2497[I] );
        SET_CAM_POS( l_U2497[I], l_U547[uParam0][I]._fU0, l_U547[uParam0][I]._fU4, l_U547[uParam0][I]._fU8 );
        SET_CAM_ROT( l_U2497[I], l_U1428[uParam0][I]._fU0, l_U1428[uParam0][I]._fU4, l_U1428[uParam0][I]._fU8 );
        SET_CAM_FOV( l_U2497[I], uParam4 );
        iVar7++;
    }
    CREATE_CAM( 25, ref l_U2496 );
    SET_CAM_SPLINE_DURATION( l_U2496, uParam1 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U2496, uParam2 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U2496, uParam3 );
    SET_CAM_ACTIVE( l_U2496, 1 );
    SET_CAM_PROPAGATE( l_U2496, 1 );
    FORCE_WEATHER_NOW( l_U2476[uParam0] );
    SET_TIME_OF_DAY( l_U2391[uParam0], l_U2408[uParam0] );
    for ( J = 0; J <= (iVar7 - 1); J++ )
    {
        ADD_CAM_SPLINE_NODE( l_U2496, l_U2497[J] );
    }
    return;
}

void sub_31556()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CAM_EXIST( l_U2496 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_3539() )))
        {
            GET_CAM_POS( l_U2496, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            SET_OBJECT_COORDINATES( l_U2516, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_3539(), l_U2516 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3539() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3539(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                }
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3539() )))
                {
                    ATTACH_PED_TO_OBJECT( sub_3539(), l_U2516, 0, 0, 0, 0, 0, 0, 0, 0 );
                }
            }
        }
    }
    return;
}

void sub_32027()
{
    switch (l_U5501)
    {
        case 0:
        GET_GAME_TIMER( ref l_U5505 );
        sub_32099();
        sub_32907();
        SETTIMERA( 0 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            l_U5501 = 2;
        }
        break;
        case 2:
        if (TIMERA() > 0)
        {
            CREATE_CAR( 788747387, -305.66550000, -373.53040000, 96.98060000, ref l_U3275, 1 );
            SET_CAR_PROOFS( l_U3275, 1, 1, 1, 1, 1 );
            SET_CAR_COLLISION( l_U3275, 0 );
            CREATE_CHAR_INSIDE_CAR( l_U3275, 26, -556126186, ref l_U3271 );
            START_PLAYBACK_RECORDED_CAR( l_U3275, 561 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3275, 5000.00000000 );
            SET_PLAYBACK_SPEED( l_U3275, 0.85000000 );
            l_U5501 = 3;
        }
        break;
        case 3:
        if (NOT (sub_33763( 35000 )))
        {
            if (TIMERB() > (sub_33872( 2500, 4000 )))
            {
                l_U3129 = sub_33872( 0, 7 );
                if (NOT (IS_CHAR_DEAD( l_U313[l_U3129]._fU0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U3271 )))
                    {
                        GET_CAM_POS( l_U2496, ref l_U3265._fU0, ref l_U3265._fU4, ref l_U3265._fU8 );
                        GET_CHAR_COORDINATES( l_U3271, ref l_U3268._fU0, ref l_U3268._fU4, ref l_U3268._fU8 );
                        if ((VDIST( l_U3268, l_U3265 )) < 90.00000000)
                        {
                            TASK_SHOOT_AT_COORD( l_U313[l_U3129]._fU0, l_U3265._fU0, l_U3265._fU4, l_U3265._fU8, 1000, 1 );
                            SETTIMERB( 0 );
                        }
                        else if ((sub_34135( l_U313[l_U3129]._fU0, l_U3271, 1 )) < 100.00000000)
                        {
                            TASK_SHOOT_AT_CHAR( l_U313[l_U3129]._fU0, l_U3271, 1000, 1 );
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
        }
        if ((sub_33763( 21000 )) AND (l_U3262 == 0))
        {
            sub_34431( sub_34343( 5 ) );
            WAIT( 500 );
            sub_34431( sub_34343( 5 ) );
            l_U3262 = 1;
        }
        if (sub_33763( 26500 ))
        {
            sub_34799( 5 );
        }
        if ((sub_33763( 25000 )) AND (l_U3277 == 0))
        {
            if ((NOT (IS_CHAR_DEAD( l_U3276 ))) AND (NOT (IS_CAR_DEAD( l_U3275 ))))
            {
                sub_34431( sub_34343( 2 ) );
            }
            l_U3277 = 1;
        }
        if ((sub_33763( 28000 )) AND (l_U3126 == 0))
        {
            sub_34799( 2 );
            sub_34431( sub_34343( 1 ) );
            sub_34431( sub_34343( 1 ) );
            l_U3126 = 1;
        }
        if ((sub_33763( 35000 )) AND (l_U3127 == 0))
        {
            sub_34799( 1 );
            sub_34431( sub_34343( 3 ) );
            sub_34431( sub_34343( 4 ) );
            l_U3127 = 1;
        }
        if ((sub_33763( 36000 )) AND (l_U3278 == 0))
        {
            GET_CAM_POS( l_U2496, ref l_U3265._fU0, ref l_U3265._fU4, ref l_U3265._fU8 );
            sub_34431( l_U3265 );
            WAIT( 500 );
            sub_34799( 3 );
            WAIT( 500 );
            sub_34799( 4 );
            sub_34431( l_U3265 );
            l_U3278 = 1;
        }
        sub_35703();
        break;
        case 4: break;
    }
    return;
}

void sub_32099()
{
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    sub_32187( 0 );
    sub_32187( 1 );
    sub_32187( 2 );
    sub_32187( 3 );
    sub_32187( 4 );
    sub_32187( 5 );
    return;
}

void sub_32187(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        CREATE_OBJECT_NO_OFFSET( l_U108[0]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[0]._fU0, 1 );
        break;
        case 1:
        CREATE_OBJECT_NO_OFFSET( l_U108[1]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[1]._fU0, 1 );
        break;
        case 2:
        CREATE_OBJECT_NO_OFFSET( l_U108[2]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[2]._fU0, 1 );
        break;
        case 3:
        CREATE_OBJECT_NO_OFFSET( l_U108[3]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[3]._fU0, 1 );
        break;
        case 4:
        CREATE_OBJECT_NO_OFFSET( l_U108[4]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[4]._fU0, 1 );
        break;
        case 5:
        CREATE_OBJECT_NO_OFFSET( l_U108[5]._fU72, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[5]._fU0, 1 );
        break;
    }
    uVar3 = uParam0;
    if (DOES_OBJECT_EXIST( l_U108[uParam0]._fU0 ))
    {
        SET_OBJECT_HEADING( l_U108[uParam0]._fU0, l_U330 );
        FREEZE_OBJECT_POSITION( l_U108[uParam0]._fU0, 1 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U108[uParam0]._fU88._fU4, l_U108[uParam0]._fU88._fU12 );
        if (l_U108[uParam0]._fU84 > 1000)
        {
            SET_OBJECT_HEALTH( l_U108[uParam0]._fU0, l_U108[uParam0]._fU84 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SETUP_BOAT_SECTION() object doesn't exist" );
    }
    return;
}

void sub_32907()
{
    unknown uVar2;

    l_U313[0]._fU0 = sub_32946( -556126186, 24, -1121.61200000, -979.37730000, 8.56250000, 11.06650000, 18, 0 );
    l_U313[1]._fU0 = sub_32946( -556126186, 24, -1143.77500000, -981.99270000, 7.96630000, 0.01830000, 18, 0 );
    l_U313[2]._fU0 = sub_32946( -556126186, 24, -1169.28800000, -987.63230000, 8.32890000, 54.89530000, 18, 0 );
    l_U313[3]._fU0 = sub_32946( -556126186, 24, -1169.97400000, -995.88740000, 8.22640000, 191.63730000, 18, 0 );
    l_U313[4]._fU0 = sub_32946( -556126186, 24, -1148.68800000, -995.55850000, 7.55550000, 217.76650000, 18, 0 );
    l_U313[5]._fU0 = sub_32946( -556126186, 24, -1121.05300000, -991.50640000, 7.55750000, 222.87960000, 18, 0 );
    l_U313[6]._fU0 = sub_32946( -556126186, 24, -1175.87700000, -992.98930000, 7.24260000, 93.37980000, 18, 0 );
    l_U313[7]._fU0 = sub_32946( -556126186, 24, -1167.64600000, -997.09010000, 7.02970000, 49.39800000, 18, 0 );
    l_U313[8]._fU0 = sub_32946( -556126186, 24, -1107.05800000, -986.00240000, 8.32010000, 49.39800000, 18, 0 );
    l_U313[9]._fU0 = sub_32946( -556126186, 24, -1114.22800000, -981.87150000, 8.32010000, 217.76650000, 18, 0 );
    return;
}

void sub_32946(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( Result, 1 );
    if (iParam6 != 0)
    {
        GIVE_WEAPON_TO_CHAR( Result, iParam6, 3000, 1 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 24 );
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, uParam7 );
    SET_PED_DONT_DO_EVASIVE_DIVES( Result, 1 );
    SET_CHAR_WILL_USE_COVER( Result, 0 );
    SET_SENSE_RANGE( Result, 250.00000000 );
    return Result;
}

int sub_33763(int iParam0)
{
    if (IS_SCREEN_FADED_IN())
    {
        GET_GAME_TIMER( ref l_U5506 );
        l_U5507 = l_U5506 - l_U5505;
        if (l_U5507 > iParam0)
        {
            return 1;
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U5505 );
    }
    return 0;
}

void sub_33872(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_34135(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_DEAD( uParam1 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        if (iParam2 == 0)
        {
            uVar5._fU8 = 0.00000000;
            uVar8._fU8 = 0.00000000;
        }
    }
    else
    {
        return 1E9;
    }
    return VDIST( uVar5, uVar8 );
}

void sub_34343(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( l_U108[uParam0]._fU0 ))
    {
        GET_OBJECT_COORDINATES( l_U108[uParam0]._fU0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    Result._fU8 += 4.00000000;
    return Result;
}

void sub_34431(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U3260 > 19)
    {
        SCRIPT_ASSERT( "Max number of rockets reached! Rocket overwrite..." );
        l_U3260 = 9;
    }
    l_U3157[l_U3260] = {uParam0};
    if (NOT (IS_CAR_DEAD( l_U3275 )))
    {
        if ((l_U3260 mod 2) == 0)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U3275, -1.50000000, 1.00000000, -0.50000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U3275, 1.50000000, 1.00000000, -0.50000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        }
    }
    CREATE_OBJECT( 1224353592, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U3218[l_U3260], 1 );
    l_U3239[l_U3260] = START_PTFX( "weap_rocket", uVar5, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
    l_U3260++;
    return;
}

void sub_34799(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int I;
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

    if (DOES_OBJECT_EXIST( l_U108[uParam0]._fU0 ))
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (sub_34878( l_U108[uParam0]._fU8[I], 0.00000000, 0.00000000, 0.00000000 )))
            {
                uVar8 = {l_U108[uParam0]._fU8[I]};
                ADD_EXPLOSION( uVar8._fU0, uVar8._fU4, uVar8._fU8, 20, 1.00000000, 1, 0, 1.00000000 );
            }
        }
        DELETE_OBJECT( ref l_U108[uParam0]._fU0 );
        CREATE_OBJECT_NO_OFFSET( l_U108[uParam0]._fU76, l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U108[uParam0]._fU4, 1 );
        g_U43018[uParam0] = l_U108[uParam0]._fU4;
        SET_OBJECT_ROTATION( l_U108[uParam0]._fU4, l_U327._fU0, l_U327._fU4, l_U327._fU8 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U108[uParam0]._fU88._fU12, l_U108[uParam0]._fU88._fU20 );
        uVar14 = l_U108[uParam0]._fU112._fU4;
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U108[uParam0]._fU4, l_U108[uParam0]._fU112._fU8._fU0, l_U108[uParam0]._fU112._fU8._fU4, l_U108[uParam0]._fU112._fU8._fU8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        uVar15 = l_U108[uParam0]._fU112._fU20;
        l_U108[uParam0]._fU112._fU0 = START_PTFX( uVar14, uVar11, 0.00000000, 0.00000000, 0.00000000, uVar15 );
        FREEZE_OBJECT_POSITION( l_U108[uParam0]._fU4, 1 );
    }
    return;
}

boolean sub_34878(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8);
}

void sub_35703()
{
    int I;
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

    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U3218[I] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3218[I], 0.00000000, -1.00000000, 0.00000000, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            UPDATE_PTFX_OFFSETS( l_U3239[I], uVar6, 0.00000000, 0.00000000, 0.00000000 );
            SET_OBJECT_HEADING( l_U3218[I], sub_35900( sub_35838( l_U3218[I] ), l_U3157[I] ) );
            SET_OBJECT_ROTATION( l_U3218[I], 0.00000000, sub_36220( sub_35838( l_U3218[I] ), l_U3157[I] ), sub_35900( sub_35838( l_U3218[I] ), l_U3157[I] ) );
            if (DOES_OBJECT_HAVE_PHYSICS( l_U3218[I] ))
            {
                APPLY_FORCE_TO_OBJECT( l_U3218[I], 1, sub_36359( l_U3157[I], sub_35838( l_U3218[I] ) ), 0, 0, 0, 0, 0, 1, 1 );
            }
            GET_OBJECT_VELOCITY( l_U3218[I], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            if (NOT (IS_CHAR_DEAD( l_U3271 )))
            {
                GET_CHAR_COORDINATES( l_U3271, ref l_U3268._fU0, ref l_U3268._fU4, ref l_U3268._fU8 );
            }
            if (((LOCATE_OBJECT_3D( l_U3218[I], l_U3157[I]._fU0, l_U3157[I]._fU4, l_U3157[I]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) || (IS_OBJECT_IN_WATER( l_U3218[I] ))) || (LOCATE_OBJECT_3D( l_U3218[I], -1141.83000000, -997.00000000, 5.00000000, 4.50000000, 4.50000000, 9.50000000, 0 )))
            {
                uVar12 = {sub_35838( l_U3218[I] )};
                ADD_EXPLOSION( uVar12._fU0, uVar12._fU4, uVar12._fU8 - 0.50000000, 20, 1.00000000, 1, 0, 1.00000000 );
                DELETE_OBJECT( ref l_U3218[I] );
                STOP_PTFX( l_U3239[I] );
            }
        }
    }
    return;
}

void sub_35838(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

float sub_35900(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    if ((uParam0._fU0 - uParam3._fU0) > 0)
    {
        if ((uParam0._fU4 - uParam3._fU4) <= 0)
        {
            return (ATAN( (uParam3._fU4 - uParam0._fU4) / (uParam3._fU0 - uParam0._fU0) )) + 90;
        }
        else if ((uParam0._fU4 - uParam3._fU4) > 0)
        {
            return (ATAN( (uParam3._fU4 - uParam0._fU4) / (uParam3._fU0 - uParam0._fU0) )) + 90;
        }
    }
    else if ((uParam0._fU0 - uParam3._fU0) <= 0)
    {
        if ((uParam0._fU4 - uParam3._fU4) > 0)
        {
            return (ATAN( (uParam3._fU4 - uParam0._fU4) / (uParam3._fU0 - uParam0._fU0) )) + 270;
        }
        else if ((uParam0._fU4 - uParam3._fU4) <= 0)
        {
            return (ATAN( (uParam3._fU4 - uParam0._fU4) / (uParam3._fU0 - uParam0._fU0) )) + 270;
        }
    }
    return 0.00000000;
}

void sub_36220(vector vParam0, vector vParam3)
{
    return ACOS( (vParam3.z - vParam0.z) / (VMAG( vParam3 - vParam0 )) );
}

void sub_36359(vector vParam0, vector vParam3)
{
    vector Result;
    unknown uVar11;

    Result = {vParam0 - vParam3};
    uVar11 = VMAG( Result );
    Result.x /= uVar11;
    Result.y /= uVar11;
    Result.z /= uVar11;
    Result = {Result * 4.25000000};
    return Result;
}

void sub_36833()
{
    switch (l_U333[9])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 9, l_U2309[9][0], 1, 1, 1112014848 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.03500000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[9] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.03500000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[9])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[9] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[9] = 2;
        }
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[9][0] - 3000))
            {
                l_U333[9] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_37310()
{
    switch (l_U5501)
    {
        case 0:
        SWITCH_AMBIENT_PLANES( 0 );
        GET_GAME_TIMER( ref l_U5505 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            l_U5501 = 2;
            SETTIMERA( 0 );
        }
        break;
        case 2:
        if (TIMERA() > 1000)
        {
            CREATE_OBJECT_NO_OFFSET( -1541379918, 2349.45000000, -80.71000000, 7.35000000, ref l_U5314._fU4, 1 );
            SET_OBJECT_HEADING( l_U5314._fU4, 319.00000000 );
            l_U3491 = START_PTFX_ON_OBJ( "lear_jet_engine", l_U5314._fU4, 0.00000000, -11.70000000, 2.90000000, 0.00000000, 0.00000000, 0.00000000, 1.50000000 );
            SETTIMERA( 0 );
            sub_37575();
            l_U5501 = 4;
        }
        break;
        case 4:
        sub_37575();
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        break;
    }
    return;
}

void sub_37575()
{
    float fVar2;

    if (DOES_OBJECT_EXIST( l_U5314._fU4 ))
    {
        switch (l_U5295)
        {
            case 0:
            l_U5296 = {2349.45000000, -80.71000000, 7.35000000};
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5314._fU4, 0.00000000, 141.50000000, 0.00000000, ref l_U5299._fU0, ref l_U5299._fU4, ref l_U5299._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5314._fU4, 0.00000000, 226.00000000, 0.00000000, ref l_U5302._fU0, ref l_U5302._fU4, ref l_U5302._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5314._fU4, 0.00000000, 1500.00000000, 0.00000000, ref l_U5305._fU0, ref l_U5305._fU4, ref l_U5305._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5314._fU4, 0.00000000, 1500.00000000, 93.00000000, ref l_U5308._fU0, ref l_U5308._fU4, ref l_U5308._fU8 );
            l_U5314._fU16 = {l_U5296};
            l_U5336 = {l_U5299 - l_U5296};
            sub_37910( ref l_U5336 );
            l_U5339 = {l_U5336};
            l_U5314._fU32 = 0;
            l_U5314._fU36 = 0;
            l_U5314._fU28 = 0;
            l_U5295++;
            break;
            case 1:
            l_U5342 = 0.40000000;
            if (NOT (LOCATE_OBJECT_3D( l_U5314._fU4, l_U5299._fU0, l_U5299._fU4, l_U5299._fU8, 5.00000000, 2.00000000, 5.00000000, 0 )))
            {
                GET_FRAME_TIME( ref l_U5343 );
                l_U5343 *= 22.00000000;
                l_U5314._fU16._fU0 += l_U5339._fU0 * l_U5343;
                l_U5314._fU16._fU4 += l_U5339._fU4 * l_U5343;
                l_U5314._fU16._fU8 += l_U5339._fU8 * l_U5343;
                SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
                l_U5295++;
            }
            break;
            case 2:
            l_U5342 = 0.60000000;
            if (NOT (LOCATE_OBJECT_3D( l_U5314._fU4, l_U5299._fU0, l_U5299._fU4, l_U5299._fU8, 5.00000000, 2.00000000, 5.00000000, 0 )))
            {
                GET_FRAME_TIME( ref l_U5343 );
                l_U5343 *= 22.00000000;
                l_U5314._fU16._fU0 += l_U5339._fU0 * l_U5343;
                l_U5314._fU16._fU4 += l_U5339._fU4 * l_U5343;
                l_U5314._fU16._fU8 += l_U5339._fU8 * l_U5343;
                SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
            }
            else
            {
                l_U5344 = {l_U5302 - l_U5299};
                sub_37910( ref l_U5344 );
                l_U5339 = {l_U5344};
                GET_FRAME_TIME( ref l_U5343 );
                l_U5343 *= 22.00000000;
                l_U5314._fU16._fU0 += l_U5339._fU0 * l_U5343;
                l_U5314._fU16._fU4 += l_U5339._fU4 * l_U5343;
                l_U5314._fU16._fU8 += l_U5339._fU8 * l_U5343;
                SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
                l_U5295++;
            }
            break;
            case 3:
            l_U5342 = 0.80000000;
            if (NOT (LOCATE_OBJECT_3D( l_U5314._fU4, l_U5302._fU0, l_U5302._fU4, l_U5302._fU8, 5.00000000, 2.00000000, 5.00000000, 0 )))
            {
                GET_FRAME_TIME( ref l_U5343 );
                l_U5343 *= 22.00000000;
                l_U5314._fU16._fU0 += l_U5339._fU0 * l_U5343;
                l_U5314._fU16._fU4 += l_U5339._fU4 * l_U5343;
                l_U5314._fU16._fU8 += l_U5339._fU8 * l_U5343;
                if (NOT l_U5347)
                {
                    SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 + 0.02000000 );
                    l_U5347 = 1;
                }
                else
                {
                    SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
                    l_U5347 = 0;
                }
                GET_OBJECT_QUATERNION( l_U5314._fU4, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                PRINTFLOAT( l_U5314._fU40._fU0 );
                PRINTNL();
                GET_OBJECT_HEADING( l_U5314._fU4, ref l_U5314._fU28 );
                GET_FRAME_TIME( ref fVar2 );
                fVar2 *= 2.00000000;
                l_U5314._fU32 += fVar2;
                sub_39306( l_U5314._fU32, l_U5314._fU36, l_U5314._fU28, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                SET_OBJECT_QUATERNION( l_U5314._fU4, l_U5314._fU40._fU0, l_U5314._fU40._fU4, l_U5314._fU40._fU8, l_U5314._fU40._fU12 );
            }
            else
            {
                l_U5348 = {l_U5305 - l_U5302};
                sub_37910( ref l_U5348 );
                l_U5351 = {l_U5348};
                l_U5354 = {l_U5308 - l_U5302};
                sub_37910( ref l_U5354 );
                l_U5357 = {l_U5354};
                l_U5360 = 0;
                GET_FRAME_TIME( ref l_U5343 );
                l_U5343 *= 22.00000000;
                l_U5314._fU16._fU0 += l_U5339._fU0 * l_U5343;
                l_U5314._fU16._fU4 += l_U5339._fU4 * l_U5343;
                l_U5314._fU16._fU8 += l_U5339._fU8 * l_U5343;
                SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
                GET_OBJECT_QUATERNION( l_U5314._fU4, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                PRINTFLOAT( l_U5314._fU40._fU0 );
                PRINTNL();
                GET_OBJECT_HEADING( l_U5314._fU4, ref l_U5314._fU28 );
                GET_FRAME_TIME( ref fVar2 );
                fVar2 *= 5.00000000;
                l_U5314._fU32 += fVar2;
                sub_39306( l_U5314._fU32, l_U5314._fU36, l_U5314._fU28, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                SET_OBJECT_QUATERNION( l_U5314._fU4, l_U5314._fU40._fU0, l_U5314._fU40._fU4, l_U5314._fU40._fU8, l_U5314._fU40._fU12 );
                l_U5295++;
            }
            break;
            case 4:
            l_U5342 = 1.00000000;
            if (NOT (LOCATE_OBJECT_3D( l_U5314._fU4, l_U5308._fU0, l_U5308._fU4, l_U5308._fU8, 5.00000000, 2.00000000, 5.00000000, 0 )))
            {
                GET_FRAME_TIME( ref l_U5343 );
                l_U5360 += l_U5343;
                if (l_U5360 > 13)
                {
                    l_U5360 = 13;
                }
                if (l_U5361 < 30.00000000)
                {
                    l_U5361 *= 1.00100000;
                }
                else
                {
                    l_U5361 = 30.00000000;
                }
                PRINTFLOAT( l_U5361 );
                PRINTNL();
                l_U5314._fU16 = {l_U5314._fU16 + ((l_U5361 * l_U5343) * ((l_U5351 * ((13 - l_U5360) / 13)) + (l_U5357 * (l_U5360 / 13))))};
                SET_OBJECT_COORDINATES( l_U5314._fU4, l_U5314._fU16._fU0, l_U5314._fU16._fU4, l_U5314._fU16._fU8 );
                GET_OBJECT_QUATERNION( l_U5314._fU4, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                PRINTFLOAT( l_U5314._fU40._fU0 );
                PRINTNL();
                if (l_U5314._fU40._fU0 > 0.55000000)
                {
                    GET_OBJECT_HEADING( l_U5314._fU4, ref l_U5314._fU28 );
                    GET_FRAME_TIME( ref fVar2 );
                    fVar2 *= 11.00000000;
                    l_U5314._fU32 += fVar2;
                    sub_39306( l_U5314._fU32, l_U5314._fU36, l_U5314._fU28, ref l_U5314._fU40._fU0, ref l_U5314._fU40._fU4, ref l_U5314._fU40._fU8, ref l_U5314._fU40._fU12 );
                    SET_OBJECT_QUATERNION( l_U5314._fU4, l_U5314._fU40._fU0, l_U5314._fU40._fU4, l_U5314._fU40._fU8, l_U5314._fU40._fU12 );
                }
            }
            else
            {
                l_U5295++;
            }
            break;
            case 5: break;
        }
    }
    return;
}

void sub_37910(int iParam0)
{
    float fVar3;

    fVar3 = 1 / (sub_37923( iParam0 ));
    iParam0->_fU0 *= fVar3;
    iParam0->_fU4 *= fVar3;
    iParam0->_fU8 *= fVar3;
    return;
}

void sub_37923(int iParam0)
{
    return SQRT( ((iParam0->_fU0 * iParam0->_fU0) + (iParam0->_fU4 * iParam0->_fU4)) + (iParam0->_fU8 * iParam0->_fU8) );
}

void sub_39306(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    float fVar9;
    float fVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    fVar9 = uParam0 * 0.50000000;
    fVar10 = uParam1 * 0.50000000;
    fVar11 = uParam2 * 0.50000000;
    uVar12 = COS( fVar10 );
    uVar13 = SIN( fVar10 );
    uVar14 = COS( fVar9 );
    uVar15 = SIN( fVar9 );
    uVar16 = COS( fVar11 );
    uVar17 = SIN( fVar11 );
    (uParam3^) = ((uVar16 * uVar15) * uVar12) + ((uVar17 * uVar14) * uVar13);
    (uParam4^) = ((uVar16 * uVar14) * uVar13) - ((uVar17 * uVar15) * uVar12);
    (uParam4^) *= -1.00000000;
    (uParam5^) = ((uVar17 * uVar14) * uVar12) - ((uVar16 * uVar15) * uVar13);
    (uParam6^) = ((uVar16 * uVar14) * uVar12) + ((uVar17 * uVar15) * uVar13);
    return;
}

void sub_40921()
{
    switch (l_U333[7])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_41034( 7, l_U2309[7][0], 1 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[7] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[7])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[7] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[7] = 2;
        }
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[7][0] + 9000))
            {
                l_U333[7] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_41034(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int I;

    if (DOES_CAM_EXIST( l_U2496 ))
    {
        DESTROY_CAM( l_U2496 );
    }
    CREATE_CAM( 14, ref l_U2497[iVar5] );
    SET_CAM_POS( l_U2497[iVar5], l_U351[iParam0]._fU0, l_U351[iParam0]._fU4, l_U351[iParam0]._fU8 );
    SET_CAM_ROT( l_U2497[iVar5], l_U400[iParam0]._fU0, l_U400[iParam0]._fU4, l_U400[iParam0]._fU8 );
    if (iParam0 == 6)
    {
        SET_CAM_FOV( l_U2497[iVar5], 45 );
    }
    else
    {
        SET_CAM_FOV( l_U2497[iVar5], 50 );
    }
    iVar5++;
    CREATE_CAM( 14, ref l_U2497[iVar5] );
    SET_CAM_POS( l_U2497[iVar5], l_U449[iParam0]._fU0, l_U449[iParam0]._fU4, l_U449[iParam0]._fU8 );
    SET_CAM_ROT( l_U2497[iVar5], l_U498[iParam0]._fU0, l_U498[iParam0]._fU4, l_U498[iParam0]._fU8 );
    if (iParam0 == 6)
    {
        SET_CAM_FOV( l_U2497[iVar5], 45 );
    }
    else
    {
        SET_CAM_FOV( l_U2497[iVar5], 50 );
    }
    iVar5++;
    CREATE_CAM( 25, ref l_U2496 );
    SET_CAM_SPLINE_DURATION( l_U2496, uParam1 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U2496, uParam2 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U2496, 1 );
    SET_CAM_ACTIVE( l_U2496, 1 );
    SET_CAM_PROPAGATE( l_U2496, 1 );
    SET_TIME_OF_DAY( l_U2391[iParam0], l_U2408[iParam0] );
    FORCE_WEATHER_NOW( l_U2476[iParam0] );
    for ( I = 0; I <= (iVar5 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U2496, l_U2497[I] );
    }
    return;
}

void sub_41953()
{
    CLEAR_AREA_OF_CARS( 2355.44800000, 366.96040000, 5.55590000, 300.00000000 );
    switch (l_U5501)
    {
        case 0:
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            CREATE_CAR( -956048545, 2355.44800000, 366.96040000, 5.55590000, ref l_U5494, 1 );
            SET_VEHICLE_QUATERNION( l_U5494, 0.00090000, 0.02750000, -0.04720000, 0.99850000 );
            CREATE_CHAR_AS_PASSENGER( l_U5494, 26, 1690783035, 2, ref l_U3489 );
            SET_CHAR_COMPONENT_VARIATION( l_U3489, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U3489, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U3489, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U3489, 3, 0, 0 );
            l_U5501 = 2;
            SET_CHAR_COMPONENT_VARIATION( l_U3489, 8, 1, 0 );
            CREATE_CHAR_INSIDE_CAR( l_U5494, 26, 8772846, ref l_U3430 );
            SETTIMERA( 0 );
        }
        break;
        case 2:
        if (TIMERA() > 37000)
        {
            OPEN_SEQUENCE_TASK( ref l_U3285 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2366.46100000, 376.63860000, 6.08520000, 2, -2, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U3285 );
            if (NOT (IS_CHAR_INJURED( l_U3489 )))
            {
                TASK_PERFORM_SEQUENCE( l_U3489, l_U3285 );
            }
            CLEAR_SEQUENCE_TASK( l_U3285 );
            l_U5501 = 3;
        }
        break;
        case 3:
        if (TIMERA() > 38500)
        {
            if ((NOT (IS_CAR_DEAD( l_U5494 ))) AND (NOT (IS_CHAR_DEAD( l_U3430 ))))
            {
                TASK_CAR_DRIVE_TO_COORD( l_U3430, l_U5494, 2330.80200000, 491.15110000, 5.97580000, 10.00000000, 0, -956048545, 0, 1.00000000, 1 );
                l_U5501 = 4;
            }
        }
        break;
        case 4:
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        if (IS_SCREEN_FADED_OUT())
        {
            ;
        }
        break;
    }
    return;
}

void sub_42675()
{
    switch (l_U333[3])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 3, l_U2309[3][0], 0, 1, 1112014848 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[3] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.02000000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[3])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[3] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[3] = 2;
        }
        PRINTSTRING( "chase\n" );
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[3][0] - 18000))
            {
                l_U333[3] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_43194(unknown uParam0, unknown uParam1)
{
    CLEAR_AREA_OF_CARS( -68.06000000, 252.10000000, 14.00000000, 300.00000000 );
    switch (l_U5501)
    {
        case 0:
        GET_GAME_TIMER( ref l_U5505 );
        l_U5501 = 1;
        SETTIMERA( 0 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            l_U5501 = 2;
        }
        l_U5501 = 2;
        break;
        case 2:
        if (TIMERA() > 5700)
        {
            CREATE_CAR( -339587598, 0.00000000, 0.00000000, 0.00000000, ref l_U3417, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U3417, 26, -448171135, ref l_U3273 );
            SET_HELI_BLADES_FULL_SPEED( l_U3417 );
            START_PLAYBACK_RECORDED_CAR( l_U3417, 105 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3417, 0 );
            PRINTSTRING( "updating playback\n" );
            l_U5501 = 3;
        }
        break;
        case 3:
        l_U5501 = 4;
        break;
        case 4:
        break;
        break;
    }
    return;
}

void sub_43541()
{
    PRINTSTRING( "shiftin gweight" );
    switch (l_U333[1])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 1, l_U2309[1][0], 1, 0, 40.00000000 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[1] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[1])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[1] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[1] = 2;
        }
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[1][0] + 0))
            {
                l_U333[1] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_44041()
{
    switch (l_U5501)
    {
        case 0:
        GET_GAME_TIMER( ref l_U5505 );
        SWITCH_RANDOM_TRAINS( 0 );
        CREATE_CAR( 353883353, 0.00000000, 0.00000000, 0.00000000, ref l_U3102[0], 1 );
        CREATE_CAR( 353883353, 0.00000000, 0.00000000, 0.00000000, ref l_U3102[1], 1 );
        CREATE_CAR( 353883353, 0.00000000, 0.00000000, 0.00000000, ref l_U3102[2], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U3102[0], 26, -183203150, ref l_U3106[0] );
        CREATE_CHAR_INSIDE_CAR( l_U3102[1], 26, -183203150, ref l_U3106[4] );
        CREATE_CHAR_INSIDE_CAR( l_U3102[2], 26, -183203150, ref l_U3106[5] );
        CREATE_CHAR_AS_PASSENGER( l_U3102[0], 26, -183203150, 0, ref l_U3106[1] );
        CREATE_CHAR_AS_PASSENGER( l_U3102[0], 26, -183203150, 1, ref l_U3106[2] );
        CREATE_CHAR_AS_PASSENGER( l_U3102[0], 26, -183203150, 2, ref l_U3106[3] );
        GIVE_WEAPON_TO_CHAR( l_U3106[1], 13, 30000, 1 );
        GIVE_WEAPON_TO_CHAR( l_U3106[2], 13, 30000, 1 );
        GIVE_WEAPON_TO_CHAR( l_U3106[3], 13, 30000, 1 );
        SET_CHAR_RELATIONSHIP( l_U3106[1], 5, 23 );
        SET_CHAR_RELATIONSHIP( l_U3106[2], 5, 23 );
        SET_CHAR_RELATIONSHIP( l_U3106[3], 5, 23 );
        CREATE_CHAR( 26, 1976355936, 968.00000000, 229.00000000, 46.00000000, ref l_U3271, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U3271, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U3271, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U3271, 5, 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U3271, 23 );
        GIVE_WEAPON_TO_CHAR( l_U3271, 30, 30000, 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U3102[0] );
        SET_HELI_BLADES_FULL_SPEED( l_U3102[1] );
        SET_HELI_BLADES_FULL_SPEED( l_U3102[2] );
        START_PLAYBACK_RECORDED_CAR( l_U3102[2], 225 );
        START_PLAYBACK_RECORDED_CAR( l_U3102[1], 215 );
        START_PLAYBACK_RECORDED_CAR( l_U3102[0], 237 );
        PAUSE_PLAYBACK_RECORDED_CAR( l_U3102[0] );
        PAUSE_PLAYBACK_RECORDED_CAR( l_U3102[1] );
        PAUSE_PLAYBACK_RECORDED_CAR( l_U3102[2] );
        CREATE_MISSION_TRAIN( 4, 801.16300000, 252.12500000, 34.67920000, 1, ref l_U3095[0] );
        SET_TRAIN_SPEED( l_U3095[0], 13 );
        SET_TRAIN_CRUISE_SPEED( l_U3095[0], 13 );
        GET_TRAIN_CARRIAGE( l_U3095[0], 0, ref l_U3095[0] );
        GET_TRAIN_CARRIAGE( l_U3095[0], 1, ref l_U3095[1] );
        GET_TRAIN_CARRIAGE( l_U3095[0], 2, ref l_U3095[2] );
        SET_TRAIN_STOPS_FOR_STATIONS( l_U3095[0], 0 );
        CREATE_MISSION_TRAIN( 4, 748.80000000, 252.12500000, 34.67920000, 1, ref l_U3095[3] );
        SET_TRAIN_SPEED( l_U3095[3], 13 );
        SET_TRAIN_CRUISE_SPEED( l_U3095[3], 13 );
        GET_TRAIN_CARRIAGE( l_U3095[3], 0, ref l_U3095[3] );
        GET_TRAIN_CARRIAGE( l_U3095[3], 1, ref l_U3095[4] );
        GET_TRAIN_CARRIAGE( l_U3095[3], 2, ref l_U3095[5] );
        SET_TRAIN_STOPS_FOR_STATIONS( l_U3095[3], 0 );
        CREATE_CAR( 1638119866, 937.54640000, 172.58110000, 33.39470000, ref l_U3274, 1 );
        SET_CAR_HEADING( l_U3274, 4.20580000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3274 );
        CREATE_CHAR_INSIDE_CAR( l_U3274, 26, -448171135, ref l_U3273 );
        TASK_CAR_DRIVE_TO_COORD( l_U3273, l_U3274, 881.47860000, 274.43740000, 25.71270000, 25.00000000, 1, 1638119866, 2, 1.00000000, 1 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            if (NOT (IS_CAR_DEAD( l_U3095[0] )))
            {
                SET_TRAIN_SPEED( l_U3095[0], 11 );
                SET_TRAIN_CRUISE_SPEED( l_U3095[0], 11 );
            }
            if (NOT (IS_CAR_DEAD( l_U3095[3] )))
            {
                SET_TRAIN_SPEED( l_U3095[3], 11 );
                SET_TRAIN_CRUISE_SPEED( l_U3095[3], 11 );
            }
            SETTIMERA( 0 );
            l_U5501 = 2;
        }
        else
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.01000000 );
        }
        break;
        case 2:
        if ((TIMERA() > 8750) AND (l_U3114 == 0))
        {
            if (NOT (IS_CAR_DEAD( l_U3102[0] )))
            {
                UNPAUSE_PLAYBACK_RECORDED_CAR( l_U3102[0] );
                SET_PLAYBACK_SPEED( l_U3102[0], 0.87000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U3102[1] )))
            {
                UNPAUSE_PLAYBACK_RECORDED_CAR( l_U3102[1] );
            }
            if (NOT (IS_CAR_DEAD( l_U3102[2] )))
            {
                UNPAUSE_PLAYBACK_RECORDED_CAR( l_U3102[2] );
            }
            l_U3114 = 1;
        }
        if (TIMERA() > 11000)
        {
            if (DOES_VEHICLE_EXIST( l_U3095[5] ))
            {
                if ((IS_VEH_DRIVEABLE( l_U3095[5] )) AND (NOT (IS_CHAR_INJURED( l_U3271 ))))
                {
                    l_U3734 = 5;
                    ATTACH_PED_TO_CAR( l_U3271, l_U3095[5], 0, 0, -7.30000000, 7, 0, 0, 1, 0 );
                    l_U3115._fU8 = 7.00000000;
                    SET_PLAYER_CONTROL_ADVANCED( sub_4478(), 0, 1, 1 );
                    TASK_PLAY_ANIM_WITH_FLAGS( l_U3271, "Jump_Land_roll", "missyusuf04", 4.00000000, -1, 2 );
                }
            }
            l_U5501 = 3;
        }
        PRINTSTRING( "updating playback\n" );
        break;
        case 3:
        if ((NOT (IS_CHAR_INJURED( l_U3271 ))) AND (NOT (IS_CAR_DEAD( l_U3095[5] ))))
        {
            if (l_U3115._fU8 > 3.61000000)
            {
                l_U3115._fU8 -= 0.60000000;
                ATTACH_PED_TO_CAR( l_U3271, l_U3095[5], 0, 0, -7.30000000, l_U3115._fU8, 0, 0, 1, 0 );
            }
            else if (l_U3115._fU8 < 3.59000000)
            {
                l_U3115._fU8 = 3.60000000;
                ATTACH_PED_TO_CAR( l_U3271, l_U3095[5], 0, 0, -7.30000000, l_U3115._fU8, 0, 0, 1, 0 );
            }
            if (l_U3115._fU8 == 3.60000000)
            {
                WAIT( 500 );
                l_U5501 = 4;
            }
        }
        break;
        case 4:
        if (TIMERA() < 27000)
        {
            sub_46005( 65476 );
        }
        else
        {
            sub_46005( 0 );
            if (l_U3130 == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U3271 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U3106[0] )))
                    {
                        if (NOT (sub_50518( l_U3271, 57 )))
                        {
                            TASK_SHOOT_AT_CHAR( l_U3271, l_U3106[0], 10000, 3 );
                            l_U3130 = 1;
                        }
                    }
                }
            }
        }
        if (TIMERA() > 31000)
        {
            if (l_U3128 == 0)
            {
                if (NOT (IS_CAR_DEAD( l_U3102[0] )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3102[0] ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U3102[0] );
                        EXPLODE_CAR( l_U3102[0], 1, 0 );
                        l_U3128 = 1;
                    }
                }
            }
        }
        if (TIMERA() > 33000)
        {
            if (l_U3128 == 1)
            {
                if (NOT (IS_CAR_DEAD( l_U3102[0] )))
                {
                    EXPLODE_CAR( l_U3102[0], 1, 0 );
                }
            }
        }
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        break;
    }
    return;
}

void sub_46005(int iParam0)
{
    switch (l_U3713)
    {
        case 0:
        if ((l_U3714 == 0) AND (NOT (IS_CHAR_INJURED( l_U3271 ))))
        {
            if (l_U3715 == 0)
            {
                if (l_U3716 == 0)
                {
                    if (((NOT (IS_CHAR_DUCKING( l_U3271 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 6 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 4 ))))
                    {
                        SET_CHAR_DUCKING( l_U3271, 1 );
                    }
                    if (l_U3717 == 0)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U3271 )))
                        {
                            if ((((((IS_CONTROL_JUST_PRESSED( 0, 20 )) AND (NOT (IS_CONTROL_PRESSED( 0, 6 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 4 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "duck" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "get_up" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "duck_idle" ))))
                            {
                                SET_CHAR_DUCKING( l_U3271, 1 );
                                if (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "duck" )))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U3718 );
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "duck", "missyusuf04", 4.00000000, 0, 1, 1, 1, -1 );
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "duck_idle", "missyusuf04", 4.00000000, 1, 1, 1, 0, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U3718 );
                                    TASK_PERFORM_SEQUENCE( l_U3271, l_U3718 );
                                    CLEAR_SEQUENCE_TASK( l_U3718 );
                                    if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                                    {
                                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.56000000, 0, 0, 1, 0 );
                                    }
                                    l_U3722 = 1;
                                }
                            }
                            if (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "duck" ))
                            {
                                SET_CHAR_ANIM_SPEED( l_U3271, "missyusuf04", "duck", 1.20000000 );
                                GET_CHAR_ANIM_CURRENT_TIME( l_U3271, "missyusuf04", "duck", ref l_U3280 );
                                if (l_U3280 > 0.99000000)
                                {
                                    l_U3717 = 1;
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U3271 )))
                    {
                        if ((((IS_CONTROL_JUST_PRESSED( 0, 20 )) AND (NOT (IS_CONTROL_PRESSED( 0, 6 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 4 )))) AND (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "duck_idle" )))
                        {
                            SET_CHAR_DUCKING( l_U3271, 1 );
                            if (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "get_up" )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U3719 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "get_up", "missyusuf04", 1000.00000000, 0, 1, 1, 1, -1 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "idle", "MOVE_CROUCH_RIFLE", 4.00000000, 0, 1, 1, 0, 10 );
                                CLOSE_SEQUENCE_TASK( l_U3719 );
                                TASK_PERFORM_SEQUENCE( l_U3271, l_U3719 );
                                CLEAR_SEQUENCE_TASK( l_U3719 );
                                l_U3722 = 0;
                            }
                        }
                        if (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "get_up" ))
                        {
                            SET_CHAR_ANIM_SPEED( l_U3271, "missyusuf04", "get_up", 1.50000000 );
                            GET_CHAR_ANIM_CURRENT_TIME( l_U3271, "missyusuf04", "get_up", ref l_U3280 );
                            if (l_U3280 > 0.99000000)
                            {
                                l_U3723 = 0;
                                l_U3724 = 0;
                                l_U3717 = 0;
                            }
                        }
                    }
                    if (((l_U3717 == 0) AND (l_U3722 == 0)) AND (l_U3725 == 0))
                    {
                        if (l_U3726 == 1)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U3271 )))
                            {
                                if ((NOT (IS_CONTROL_PRESSED( 0, 6 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 4 ))))
                                {
                                    l_U3727 = 0;
                                    if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                                    {
                                        DETACH_PED( l_U3271, 1 );
                                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 180, 0, 1, 0 );
                                    }
                                }
                                else
                                {
                                    l_U3727 = 1;
                                    if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                                    {
                                        DETACH_PED( l_U3271, 1 );
                                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 180, 360, 1, 0 );
                                    }
                                }
                            }
                            if (l_U3728 == 1)
                            {
                                if (IS_CONTROL_JUST_PRESSED( 0, 7 ))
                                {
                                    l_U3726 = 0;
                                }
                            }
                        }
                        else if (l_U3728 == 1)
                        {
                            if ((IS_CONTROL_JUST_PRESSED( 0, 7 )) AND (l_U3726 == 0))
                            {
                                l_U3726 = 1;
                            }
                        }
                        if ((NOT (IS_CONTROL_PRESSED( 0, 6 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 4 ))))
                        {
                            if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                            {
                                DETACH_PED( l_U3271, 1 );
                                ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                            }
                        }
                        else if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                        {
                            DETACH_PED( l_U3271, 1 );
                            ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 360, 1, 0 );
                        };;;
                    }
                }
            }
            if ((l_U3717 == 0) AND (l_U3722 == 0))
            {
                if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                {
                    if (l_U3734 > 0)
                    {
                        if (iParam0 < 65496)
                        {
                            l_U3726 = 0;
                            if (l_U3721 < 7.30000000)
                            {
                                if (NOT (IS_CONTROL_PRESSED( 0, 1 )))
                                {
                                    l_U3721 += 0.11000000;
                                    if (IS_CHAR_PLAYING_ANIM( l_U3271, "MOVE_CROUCH_RIFLE", "WALK" ))
                                    {
                                        SET_CHAR_ANIM_SPEED( l_U3271, "MOVE_CROUCH_RIFLE", "WALK", 0.80000000 );
                                    }
                                }
                                else
                                {
                                    l_U3721 += 0.11000000;
                                    if (IS_CHAR_PLAYING_ANIM( l_U3271, "MOVE_CROUCH_RIFLE", "WALK" ))
                                    {
                                        SET_CHAR_ANIM_SPEED( l_U3271, "MOVE_CROUCH_RIFLE", "WALK", 1.10000000 );
                                    }
                                }
                                ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                                if (NOT l_U3723)
                                {
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U3271, "walk", "MOVE_CROUCH_RIFLE", 4.00000000, 1, 1, 1, 0, -1 );
                                    l_U3723 = 1;
                                    l_U3724 = 0;
                                }
                            }
                        }
                        if (l_U3721 >= 7.30000000)
                        {
                            if (l_U3727 == 0)
                            {
                                l_U3725 = 1;
                                if ((NOT (IS_CHAR_INJURED( l_U3271 ))) AND (IS_VEH_DRIVEABLE( l_U3095[l_U3734] )))
                                {
                                    if (l_U3729 == 1)
                                    {
                                        l_U3721 = -9.96000000;
                                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                                        l_U3729 = 0;
                                        l_U3713++;
                                        break;
                                    }
                                    else if (IS_CHAR_PLAYING_ANIM( l_U3271, "MOVE_CROUCH_RIFLE", "walk" ))
                                    {
                                        GET_CHAR_ANIM_CURRENT_TIME( l_U3271, "MOVE_CROUCH_RIFLE", "walk", ref l_U3280 );
                                    }
                                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump_r" ))))
                                    {
                                        if ((l_U3280 < 0.25000000) || (l_U3280 > 0.75000000))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U3720 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "jump", "missyusuf04", 4.00000000, 0, 1, 1, 0, -1 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "walk", "MOVE_CROUCH_RIFLE", 4.00000000, 1, 1, 1, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U3720 );
                                            TASK_PERFORM_SEQUENCE( l_U3271, l_U3720 );
                                            CLEAR_SEQUENCE_TASK( l_U3720 );
                                        }
                                        if ((l_U3280 > 0.25000000) AND (l_U3280 < 0.75000000))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U3720 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "jump_r", "missyusuf04", 4.00000000, 0, 1, 1, 0, -1 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "walk", "MOVE_CROUCH_RIFLE", 4.00000000, 1, 1, 1, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U3720 );
                                            TASK_PERFORM_SEQUENCE( l_U3271, l_U3720 );
                                            CLEAR_SEQUENCE_TASK( l_U3720 );
                                        }
                                    }
                                    else
                                    {
                                        l_U3734--;
                                        if (l_U3734 <= 0)
                                        {
                                            l_U3734 = 0;
                                            if ((NOT (IS_CHAR_INJURED( l_U3271 ))) AND (IS_VEH_DRIVEABLE( l_U3095[l_U3734] )))
                                            {
                                                l_U3721 = -9.96000000;
                                                ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                                                l_U3729 = 0;
                                                l_U3713++;
                                                break;
                                            }
                                        }
                                        l_U3729 = 1;
                                    }
                                }
                            }
                        }
                        if (((NOT (iParam0 < 65496)) || (IS_CONTROL_PRESSED( 0, 6 ))) || ((((IS_CONTROL_PRESSED( 0, 4 )) AND (l_U3725 == 0)) AND (l_U3722 == 0)) AND (l_U3717 == 0)))
                        {
                            if (NOT l_U3724)
                            {
                                if (l_U3715 == 0)
                                {
                                    if (IS_VEH_DRIVEABLE( l_U3095[l_U3734] ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U3271, "idle", "MOVE_CROUCH_RIFLE", 4.00000000, 0, 1, 1, 0, 1 );
                                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 360, 1, 0 );
                                        l_U3723 = 0;
                                        l_U3724 = 1;
                                    }
                                }
                            }
                        }
                        GET_GAME_TIMER( ref l_U3730 );
                    }
                    else if (l_U3731 == 0)
                    {
                        if (NOT l_U3724)
                        {
                            if (IS_VEH_DRIVEABLE( l_U3095[0] ))
                            {
                                TASK_PLAY_ANIM( l_U3271, "idle", "MOVE_CROUCH_RIFLE", 4.00000000, 0, 1, 1, 0, 1 );
                                SET_CHAR_DUCKING( l_U3271, 1 );
                                ATTACH_PED_TO_CAR( l_U3271, l_U3095[0], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                                l_U3723 = 0;
                                l_U3724 = 1;
                            }
                        }
                    }
                }
            }
            else if (l_U3734 == 0)
            {
                if (l_U3731 == 1)
                {
                    GET_GAME_TIMER( ref l_U3732 );
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U3271 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U3271, "missyusuf04", "jump", ref l_U3280 );
                GET_FRAME_TIME( ref l_U3733 );
                if ((l_U3280 > 0.25000000) AND (l_U3280 < 0.99000000))
                {
                    l_U3721 += (0.15000000 * l_U3733) * 30.00000000;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump_r" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U3271, "missyusuf04", "jump_r", ref l_U3280 );
                GET_FRAME_TIME( ref l_U3733 );
                if ((l_U3280 > 0.15000000) AND (l_U3280 < 0.99000000))
                {
                    l_U3721 += (0.15000000 * l_U3733) * 30.00000000;
                }
            }
            if ((IS_VEH_DRIVEABLE( l_U3095[l_U3734] )) AND (NOT (IS_CHAR_INJURED( l_U3271 ))))
            {
                ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
            }
            if (l_U3734 > 0)
            {
                if (l_U3729 == 1)
                {
                    if ((IS_VEH_DRIVEABLE( l_U3095[l_U3734] )) AND (NOT (IS_CHAR_INJURED( l_U3271 ))))
                    {
                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[l_U3734], 0, 0, l_U3721, 3.60000000, 0, 0, 1, 0 );
                    }
                    if (((iParam0 < 65496) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 ))))
                    {
                        l_U3723 = 1;
                        l_U3724 = 0;
                    }
                    else
                    {
                        l_U3723 = 0;
                        l_U3724 = 0;
                    }
                    l_U3729 = 0;
                    l_U3725 = 0;
                    l_U3713 = 0;
                    break;
                }
                if ((HAS_CHAR_ANIM_FINISHED( l_U3271, "missyusuf04", "jump" )) || (HAS_CHAR_ANIM_FINISHED( l_U3271, "missyusuf04", "jump_r" )))
                {
                    l_U3729 = 1;
                }
            }
            else if (l_U3729 == 1)
            {
                if (NOT l_U3724)
                {
                    if (IS_VEH_DRIVEABLE( l_U3095[0] ))
                    {
                        TASK_PLAY_ANIM( l_U3271, "idle", "MOVE_CROUCH", 4.00000000, 0, 0, 0, 0, 1 );
                        SET_CHAR_DUCKING( l_U3271, 1 );
                        ATTACH_PED_TO_CAR( l_U3271, l_U3095[0], 0, 0, l_U3721, 3.60000000, 0, 360, 1, 0 );
                        SET_CHAR_USES_UPPERBODY_DAMAGE_ANIMS_ONLY( l_U3271, 1 );
                        BLEND_OUT_CHAR_MOVE_ANIMS( l_U3271 );
                        l_U3725 = 0;
                        l_U3723 = 0;
                        l_U3724 = 1;
                        l_U3713 = 0;
                        break;
                    }
                }
            }
            if ((HAS_CHAR_ANIM_FINISHED( l_U3271, "missyusuf04", "jump" )) || (HAS_CHAR_ANIM_FINISHED( l_U3271, "missyusuf04", "jump_r" )))
            {
                l_U3729 = 1;
            }
            if ((NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U3271, "missyusuf04", "jump_r" ))))
            {
                l_U3721 = -7.40000000;
                l_U3723 = 0;
                l_U3724 = 0;
                l_U3729 = 0;
                l_U3725 = 0;
                l_U3713 = 0;
            }
        }
        break;
    }
    return;
}

int sub_50518(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_50939()
{
    switch (l_U333[4])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 4, l_U2309[4][0], 0, 1, 1112014848 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[4] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.02000000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[4])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[4] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[4] = 2;
        }
        PRINTSTRING( "chase\n" );
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[4][0] - 6000))
            {
                l_U333[4] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_51432()
{
    unknown uVar2;

    switch (l_U5501)
    {
        case 0:
        GET_GAME_TIMER( ref l_U5505 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            CREATE_CHAR( 26, -973801307, -1305.40700000, 1684.14500000, 29.84300000, ref l_U3418, 1 );
            SET_CHAR_HEADING( l_U3418, 239.98570000 );
            CREATE_CHAR( 26, -1684055465, -1306.74500000, 1687.20700000, 29.33960000, ref l_U3419[0], 1 );
            SET_CHAR_HEADING( l_U3419[0], 228.98570000 );
            CREATE_CHAR( 26, -844218756, -1308.54200000, 1685.24300000, 29.34050000, ref l_U3419[1], 1 );
            SET_CHAR_HEADING( l_U3419[1], 275.89780000 );
            CREATE_CHAR( 26, -1684055465, -1287.76000000, 1675.44000000, 29.35000000, ref l_U3419[2], 1 );
            SET_CHAR_HEADING( l_U3419[2], 349.05120000 );
            CREATE_CHAR( 26, -844218756, -1287.68300000, 1678.56900000, 30.35430000, ref l_U3419[3], 1 );
            SET_CHAR_HEADING( l_U3419[3], 180.08930000 );
            CREATE_CHAR( 26, -1684055465, -1296.61400000, 1686.33600000, 29.33390000, ref l_U3419[4], 1 );
            SET_CHAR_HEADING( l_U3419[4], 109.52030000 );
            CREATE_CHAR( 26, -844218756, -1298.16100000, 1690.79500000, 29.67640000, ref l_U3419[5], 1 );
            SET_CHAR_HEADING( l_U3419[5], 180.59000000 );
            CREATE_CHAR( 26, -1684055465, -1302.33100000, 1676.93300000, 29.33210000, ref l_U3419[6], 1 );
            SET_CHAR_HEADING( l_U3419[6], 30.61090000 );
            CREATE_CHAR( 26, -844218756, -1299.20300000, 1674.43700000, 29.67670000, ref l_U3419[7], 1 );
            SET_CHAR_HEADING( l_U3419[7], 28.03840000 );
            TASK_PLAY_ANIM( l_U3419[0], "loop_a", "missDance_femidl_a", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[1], "loop_b", "missDance_femidl_b", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[2], "loop_c", "missDance_femidl_c", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[3], "loop_a", "missDance_femidl_a", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[4], "loop_b", "missDance_femidl_b", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[5], "loop_c", "missDance_femidl_c", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[6], "loop_b", "missDance_femidl_b", 8.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( l_U3419[7], "loop_a", "missDance_femidl_a", 8.00000000, 1, 0, 0, 0, -1 );
            CREATE_CHAR( 26, -844218756, -1264.79600000, 1672.39900000, 29.82390000, ref l_U3419[8], 1 );
            SET_CHAR_HEADING( l_U3419[8], 161.03840000 );
            CREATE_CHAR( 26, -844218756, -1261.18400000, 1671.56500000, 29.87870000, ref l_U3419[9], 1 );
            SET_CHAR_HEADING( l_U3419[9], 161.03840000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U3419[8], -1283.16200000, 1689.57600000, 30.68140000, 3, -1, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U3419[9], -1289.07900000, 1691.87100000, 29.67640000, 3, -1, 0.50000000 );
            CREATE_OBJECT_NO_OFFSET( 1266833010, -1289.07900000, 1691.87100000, 29.67640000, ref l_U3261, 1 );
            ATTACH_OBJECT_TO_PED( l_U3261, l_U3418, 1232, 0.10000000, 0.14000000, -0.21900000, -3.34000000, -2.72000000, -1.21000000, 0 );
            START_PTFX_ON_OBJ( "drink_champagne_dribble", l_U3261, 0.00000000, 0.00000000, 0.35000000, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_PLAY_ANIM( 0, "DRINK_HIGH_GULP", "mini_champagne", 8.00000000, 1, 0, 0, 0, 105000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "DRINK_CELEBRATE", "mini_champagne", 8.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U3418, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U5501 = 2;
            SETTIMERA( 0 );
        }
        break;
        case 2:
        if (TIMERA() > 22000)
        {
            if (NOT (IS_CHAR_INJURED( l_U3419[8] )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3419[8] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U3419[8], -1264.79600000, 1672.39900000, 29.82390000, 3, -1, 0.50000000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U3419[9] )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3419[9] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U3419[9], -1261.18400000, 1671.56500000, 29.87870000, 3, -1, 0.50000000 );
            }
            l_U5501 = 4;
        }
        PRINTSTRING( "updating playback\n" );
        break;
        case 4:
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        break;
    }
    return;
}

void sub_53337()
{
    unknown uVar2;

    switch (l_U333[2])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 1 );
        sub_31030( 2, l_U2309[2][0], 0, 1, 45.00000000 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[2] = 1;
        break;
        case 1:
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.02000000 );
        }
        sub_31556();
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            WAIT( 0 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "E2fightchamber" );
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[2])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[2] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[2] = 2;
        }
        PRINTSTRING( "angels\n" );
        break;
        case 2:
        if (IS_SCREEN_FADING_IN())
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3539(), "E2fightchamber" );
        }
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[2][0] - 6000))
            {
                l_U333[2] = 7;
            }
        }
        break;
        case 7: break;
    }
    return;
}

void sub_53914()
{
    switch (l_U5501)
    {
        case 0:
        if (IS_SCREEN_FADING_IN())
        {
            SETTIMERA( 0 );
            sub_53987();
            GET_GAME_TIMER( ref l_U5505 );
            l_U5501 = 1;
        }
        break;
        case 1:
        l_U5501 = 2;
        break;
        case 2:
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -386.90000000, 1486.40000000, 9.90000000, 1, -1.00000000 );
        if (TIMERA() > 35500)
        {
            CREATE_CHAR( 26, 1662225612, l_U3118._fU0, l_U3118._fU4, l_U3118._fU8, ref l_U3264, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U3264, 1, 1, 0 );
            CREATE_CHAR( 26, -1729980128, l_U3118._fU0, l_U3118._fU4, l_U3118._fU8, ref l_U3263, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U3263, 1, 1, 0 );
            sub_54361( l_U3264, l_U3118, l_U3121 );
            if (NOT (IS_CHAR_INJURED( l_U3264 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U3264, 0.06400000, 0.71300000, -1, ref l_U3122._fU0, ref l_U3122._fU4, ref l_U3122._fU8 );
            }
            sub_54361( l_U3263, l_U3122, l_U3121 - 180 );
            if (NOT (IS_CHAR_INJURED( l_U3264 )))
            {
                TASK_PLAY_ANIM( l_U3264, "Tut_Fight_A", l_U2757, 8.00000000, 1, 1, 1, 0, -2 );
            }
            if (NOT (IS_CHAR_INJURED( l_U3263 )))
            {
                TASK_PLAY_ANIM( l_U3263, "Tut_Fight_B", l_U2757, 8.00000000, 1, 1, 1, 0, -2 );
            }
            if (NOT (IS_CHAR_INJURED( l_U3264 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U3264, l_U2757, "Tut_Fight_A" ))
                {
                    SET_CHAR_ANIM_CURRENT_TIME( l_U3264, l_U2757, "Tut_Fight_A", 0.10000000 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U3263 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U3263, l_U2757, "Tut_Fight_B" ))
                {
                    SET_CHAR_ANIM_CURRENT_TIME( l_U3263, l_U2757, "Tut_Fight_B", 0.10000000 );
                }
            }
            l_U5501 = 4;
        }
        sub_54876();
        break;
        case 4:
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -386.90000000, 1486.40000000, 9.90000000, 1, -1.00000000 );
        sub_54876();
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        break;
    }
    return;
}

void sub_53987()
{
    if (NOT (IS_CHAR_INJURED( l_U2945 )))
    {
        if (NOT (sub_54022( l_U2945, 80 )))
        {
            TASK_PLAY_ANIM( l_U2945, "bookie_tictac", l_U2757, 8.00000000, 1, 1, 1, 0, -2 );
        }
    }
    return;
}

int sub_54022(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    else
    {
        return 0;
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_54361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
        else
        {
            SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
    }
    return;
}

void sub_54876()
{
    GET_GAME_TIMER( ref l_U3080 );
    l_U3081 = l_U3080 - l_U3079;
    if (l_U3081 > 1000)
    {
        sub_54926();
        GET_GAME_TIMER( ref l_U3079 );
    }
    return;
}

void sub_54926()
{
    if (l_U3078 == 0)
    {
        sub_54947();
        l_U3078 = 1;
    }
    else if (l_U3078 == 1)
    {
        sub_55251();
        l_U3078 = 2;
    }
    else if (l_U3078 == 2)
    {
        sub_55555();
        l_U3078 = 0;
    };;;
    return;
}

void sub_54947()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1494, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1489, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65153, 1494, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1495, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65147, 1493, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_55251()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1492, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1495, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1496, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1490, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_55555()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1487, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1488, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65153, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1493, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_56061()
{
    switch (l_U333[8])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 1 );
        sub_31030( 8, l_U2309[8][0], 1, 0, 1112014848 );
        sub_31556();
        sub_56190();
        sub_56250( 0, 1 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.04500000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[8] = 1;
        break;
        case 1:
        sub_31556();
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.01000000 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[8])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[8] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[8] = 2;
        }
        PRINTSTRING( "SCORSESE_DANCING\n" );
        break;
        case 2:
        sub_31556();
        GET_GAME_TIMER( ref l_U2494 );
        l_U2495 = l_U2494 - l_U2493;
        if (l_U2495 > (l_U2309[8][0] - 3000))
        {
            l_U333[8] = 7;
        }
        break;
        case 7: break;
    }
    return;
}

void sub_56190()
{
    sub_56200( 1 );
    sub_56200( 2 );
    sub_56200( 0 );
    return;
}

void sub_56200(unknown uParam0)
{
    g_U30226[uParam0] = nil;
    return;
}

void sub_56250(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_3539() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_56630( sub_3539(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_56630( sub_3539(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_56630( sub_3539(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_57907( 0 );
        sub_57907( 1 );
        sub_57907( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U331 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U331;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_56630(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_56641( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_56801( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_56641(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_56801(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_56829( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_56829(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_3539(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_57907(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_58591()
{
    switch (l_U5501)
    {
        case 0:
        GET_GAME_TIMER( ref l_U5505 );
        l_U5501 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADING_IN())
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 725112888, 65138, 398, 15, 0, 1.00000000 );
            SETTIMERA( 0 );
            CREATE_CHAR( 26, -844218756, -399.56000000, 392.99960000, 12.86720000, ref l_U3113, 1 );
            SET_CHAR_HEADING( l_U3113, 343.03320000 );
            l_U5501 = 2;
        }
        break;
        case 2:
        if (TIMERA() > 8500)
        {
            if (NOT (IS_CHAR_DEAD( l_U3113 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U3113, -381.53770000, 419.79620000, 5.16930000, 2, -2, 0.50000000 );
            }
            l_U5501 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U3113 )))
        {
            MODIFY_CHAR_MOVE_BLEND_RATIO( l_U3113, 0.60000000 );
        }
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        break;
    }
    return;
}

void sub_59038()
{
    switch (l_U333[0])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 0, l_U2309[0][0], 1, 1, 1112014848 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[0] = 1;
        break;
        case 1:
        sub_31556();
        if (IS_SCREEN_FADED_OUT())
        {
            if (DOES_CAM_EXIST( l_U2496 ))
            {
                SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
            }
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[0])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[0] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[0] = 2;
        }
        break;
        case 2:
        sub_31556();
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > (l_U2309[0][0] - 9500))
            {
                l_U333[0] = 7;
            }
        }
        break;
        case 3:
        sub_59519( 0 );
        sub_31556();
        sub_3800();
        sub_59616( 0, l_U547[0][l_U2374[0] - 1], l_U1428[0][l_U2374[0] - 1] );
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[0] = 4;
        break;
        case 4:
        sub_31556();
        GET_GAME_TIMER( ref l_U2494 );
        l_U2495 = l_U2494 - l_U2493;
        if (l_U2495 > l_U2309[0][1])
        {
            l_U333[0] = 7;
        }
        break;
        case 7: break;
    }
    return;
}

void sub_59519(unknown uParam0)
{
    GET_TIME_OF_DAY( ref l_U2391[uParam0], ref l_U2408[uParam0] );
    return;
}

void sub_59616(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (DOES_CAM_EXIST( l_U2496 ))
    {
        DESTROY_CAM( l_U2496 );
    }
    CREATE_CAM( 14, ref l_U2496 );
    SET_CAM_POS( l_U2496, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    SET_CAM_ROT( l_U2496, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CAM_FOV( l_U2496, 50 );
    SET_CAM_ACTIVE( l_U2496, 1 );
    SET_CAM_PROPAGATE( l_U2496, 1 );
    return;
}

void sub_59886(unknown uParam0)
{
    switch (l_U5501)
    {
        case 0:
        CLEAR_AREA_OF_CHARS( 1461.43000000, 532.19020000, 28.33540000, 150.00000000 );
        LOAD_PATH_NODES_IN_AREA( -102.58420000, 614.27320000, -32.58420000, 684.27320000 );
        GET_GAME_TIMER( ref l_U5505 );
        l_U5501 = 1;
        break;
        case 1:
        if (TIMERA() > 15000)
        {
            l_U5501 = 2;
        }
        break;
        case 2: break;
        case 4:
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "------- FINISHED_PLAYBACK --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        if (IS_SCREEN_FADED_OUT())
        {
            ;
        }
        break;
    }
    return;
}

void sub_60208()
{
    unknown uVar2;

    switch (l_U333[5])
    {
        case 0:
        sub_3800();
        FREEZE_CHAR_POSITION( sub_3539(), 1 );
        SET_CHAR_VISIBLE( sub_3539(), 0 );
        SET_CHAR_COLLISION( sub_3539(), 0 );
        sub_31030( 5, l_U2309[5][0], 1, 1, 1112014848 );
        sub_31556();
        sub_60338( 1 );
        sub_56190();
        sub_56250( 0, 1 );
        if (l_U350 == 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U350 = 1;
        }
        if (DOES_CAM_EXIST( l_U2496 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U2496, 0.00000000 );
        }
        GET_GAME_TIMER( ref l_U2493 );
        l_U333[5] = 1;
        break;
        case 1:
        sub_31556();
        if (IS_SCREEN_FADED_OUT())
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            WAIT( 0 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "Room_bar" );
            GET_GAME_TIMER( ref l_U2494 );
            l_U2495 = l_U2494 - l_U2493;
            if (l_U2495 > l_U2442[5])
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                GET_GAME_TIMER( ref l_U2493 );
                l_U333[5] = 2;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U2493 );
            l_U333[5] = 2;
        }
        break;
        case 2:
        sub_31556();
        GET_GAME_TIMER( ref l_U2494 );
        l_U2495 = l_U2494 - l_U2493;
        if (l_U2495 > (l_U2309[5][0] - 14000))
        {
            l_U333[5] = 7;
        }
        break;
        case 7: break;
    }
    return;
}

void sub_60338(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_60882(int iParam0)
{
    int I;

    PRINTSTRING( "Unloading Assets for SHOT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    if (iParam0 == 6)
    {
        sub_60953();
        DELETE_CHAR( ref l_U3271 );
        DELETE_CHAR( ref l_U3276 );
        DELETE_CAR( ref l_U3275 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 788747387 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1224353592 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -556126186 );
        for ( I = 0; I <= 19; I++ )
        {
            DELETE_OBJECT( ref l_U3218[I] );
        }
    }
    if (iParam0 == 9)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1541379918 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U5314._fU4 );
        SWITCH_AMBIENT_PLANES( 1 );
    }
    if (iParam0 == 7)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -956048545 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1690783035 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
        DELETE_CHAR( ref l_U3489 );
        DELETE_CHAR( ref l_U3430 );
        DELETE_CAR( ref l_U5494 );
        REMOVE_CAR_RECORDING( 850 );
    }
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 3)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -339587598 );
        DELETE_CAR( ref l_U3417 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -448171135 );
        DELETE_CHAR( ref l_U3273 );
    }
    if (iParam0 == 1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 353883353 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
        REMOVE_CAR_RECORDING( 225 );
        REMOVE_CAR_RECORDING( 215 );
        REMOVE_CAR_RECORDING( 235 );
        REMOVE_CAR_RECORDING( 237 );
        REMOVE_CAR_RECORDING( 223 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976355936 );
        REMOVE_ANIMS( "missyusuf04" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1638119866 );
        DELETE_CAR( ref l_U3274 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -448171135 );
        REMOVE_ANIMS( "missyusuf04" );
        DELETE_CHAR( ref l_U3106[0] );
        DELETE_CHAR( ref l_U3106[1] );
        DELETE_CHAR( ref l_U3106[2] );
        DELETE_CHAR( ref l_U3106[3] );
        DELETE_CHAR( ref l_U3106[4] );
        DELETE_CHAR( ref l_U3106[5] );
        DELETE_CAR( ref l_U3102[0] );
        DELETE_CAR( ref l_U3102[1] );
        DELETE_CAR( ref l_U3102[2] );
        DELETE_CAR( ref l_U3095[0] );
        DELETE_CAR( ref l_U3095[1] );
        DELETE_CAR( ref l_U3095[2] );
        DELETE_CAR( ref l_U3274 );
        DELETE_CHAR( ref l_U3273 );
        DELETE_CHAR( ref l_U3271 );
        SWITCH_RANDOM_TRAINS( 1 );
    }
    if (iParam0 == 4)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -973801307 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        REMOVE_ANIMS( "mini_champagne" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1266833010 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U3261 );
        REMOVE_ANIMS( "missDANCE_FEMidl_a" );
        REMOVE_ANIMS( "missDANCE_FEMidl_b" );
        REMOVE_ANIMS( "missDANCE_FEMidl_c" );
        DELETE_CHAR( ref l_U3419[0] );
        DELETE_CHAR( ref l_U3419[1] );
        DELETE_CHAR( ref l_U3419[2] );
        DELETE_CHAR( ref l_U3419[3] );
        DELETE_CHAR( ref l_U3419[4] );
        DELETE_CHAR( ref l_U3419[5] );
        DELETE_CHAR( ref l_U3419[6] );
        DELETE_CHAR( ref l_U3419[7] );
        DELETE_CHAR( ref l_U3419[8] );
        DELETE_CHAR( ref l_U3419[9] );
        DELETE_CHAR( ref l_U3418 );
    }
    if (iParam0 == 8)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        DELETE_CHAR( ref l_U3113 );
    }
    if (iParam0 == 2)
    {
        sub_62940();
        sub_63421();
        REMOVE_ANIMS( "mini_fight" );
        REMOVE_ANIMS( "amb@watch_melee" );
        REMOVE_ANIMS( "missBrian_3" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1169721927 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3264 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1729980128 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662225612 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3263 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 648140560 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2065581610 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2969 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2970 );
        CLEAR_ROOM_FOR_CHAR( sub_3539() );
    }
    if (iParam0 == 5)
    {
        sub_60338( 0 );
    }
    return;
}

void sub_60953()
{
    int I;

    sub_60963( 1 );
    DELETE_OBJECT( ref l_U108[0]._fU0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2075782048 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1239854102 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1930762713 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1233545547 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1005833766 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 67157199 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 518033353 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1366166054 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1595218282 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2120126803 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1789985121 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -556126186 );
    for ( I = 0; I <= 9; I++ )
    {
        DELETE_CHAR( ref l_U313[I]._fU0 );
    }
    return;
}

void sub_60963(boolean bParam0)
{
    int I;

    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1313618655, -1366882930 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -740515878, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 256624776, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -529900459, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 163992799, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1031741483, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -285371601, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 13155365, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 288897752, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -843141289, 459792206 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -670316162, 459792206 );
    I = 0;
    for ( I = 0; I < g_U43011; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43011[I] ))
            {
                DELETE_OBJECT( ref g_U43011[I] );
            }
        }
        g_U43011[I] = nil;
    }
    for ( I = 0; I < g_U43018; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43018[I] ))
            {
                DELETE_OBJECT( ref g_U43018[I] );
            }
        }
        g_U43018[I] = nil;
    }
    return;
}

void sub_62940()
{
    int I;

    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2891[I] ))
        {
            DELETE_CHAR( ref l_U2891[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U2945 ))
    {
        DELETE_CHAR( ref l_U2945 );
    }
    sub_63041();
    sub_63134( 0 );
    sub_63223();
    if (l_U2883 == 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
        l_U2883 = 0;
    }
    if (DOES_OBJECT_EXIST( l_U2969 ))
    {
        DELETE_OBJECT( ref l_U2969 );
    }
    if (DOES_OBJECT_EXIST( l_U2970 ))
    {
        DELETE_OBJECT( ref l_U2970 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2758 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2759 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2760 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2761 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2763 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2762 );
    return;
}

void sub_63041()
{
    if (l_U2826 == 1)
    {
        STOP_STREAM();
        l_U2826 = 0;
    }
    if (l_U2827 == 1)
    {
        STOP_STREAM();
        l_U2827 = 0;
    }
    if (l_U2828 == 1)
    {
        STOP_STREAM();
        l_U2828 = 0;
    }
    return;
}

void sub_63134(int iParam0)
{
    if (iParam0 == 1)
    {
        if (l_U3049 == 0)
        {
            SET_PED_NON_CREATION_AREA( 65134, 1470, 0, 65154, 1490, 20 );
            l_U3049 = 1;
        }
    }
    else
    {
        CLEAR_PED_NON_CREATION_AREA();
        l_U3049 = 0;
    }
    return;
}

void sub_63223()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_63421()
{
    int I;

    I = 0;
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2946[I] ))
        {
            DELETE_CHAR( ref l_U2946[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2964[I] ))
        {
            DELETE_CHAR( ref l_U2964[I] );
        }
    }
    return;
}

int sub_63801(int iParam0)
{
    return iParam0 + 1;
}

void sub_63971(int iParam0)
{
    GET_GAME_TIMER( ref l_U5634 );
    l_U5635 = l_U5634 - l_U5633;
    if (iParam0 < 10)
    {
        if (l_U5635 > 5000)
        {
            if (g_U9583 == 1)
            {
                if (sub_64042())
                {
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                        if (iParam0 == 9)
                        {
                            sub_37575();
                        }
                    }
                    ENABLE_END_CREDITS_FADE();
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                            if (iParam0 == 9)
                            {
                                sub_37575();
                            }
                        }
                    }
                    ENABLE_END_CREDITS_FADE();
                    STOP_CREDITS();
                    if (DOES_CAM_EXIST( l_U2496 ))
                    {
                        SET_CAM_ACTIVE( l_U2496, 0 );
                        SET_CAM_PROPAGATE( l_U2496, 0 );
                    }
                    if (l_U350 == 1)
                    {
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        l_U350 = 0;
                    }
                    l_U332 = 10;
                }
            }
        }
    }
    return;
}

int sub_64042()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_64359(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return;
}

void sub_64395()
{
    l_U5501 = 0;
    return;
}
