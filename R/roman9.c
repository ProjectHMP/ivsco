void main()
{
    int iVar2;
    int iVar3;

    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U481 = 0;
    l_U491 = 212900845;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = {972.31460000, -174.62050000, 23.19370000};
    l_U497 = 0;
    l_U498 = 0;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = -1;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    SET_CREATE_RANDOM_COPS( 0 );
    SET_WANTED_MULTIPLIER( 0.30000000 );
    LOAD_ADDITIONAL_TEXT( "ROMAN9", 0 );
    sub_250( "R9AUD" );
    LOAD_ADDITIONAL_TEXT( "R9AUD", 6 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_383();
        sub_2494( 1 );
    }
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "R_9" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "R_9" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U491 );
    if (NOT (IS_CHAR_DEAD( sub_8503() )))
    {
        LOAD_SCENE( 812.78420000, -259.71920000, 14.33700000 );
        SET_CHAR_COORDINATES( sub_8503(), 812.78420000, -259.71920000, 14.33700000 );
        SET_CHAR_HEADING( sub_8503(), 137.00000000 );
        SET_CHAR_VISIBLE( sub_8503(), 1 );
        if (IS_PLAYER_PLAYING( sub_6023() ))
        {
            SET_PLAYER_CONTROL( sub_6023(), 1 );
        }
    }
    DO_SCREEN_FADE_IN( 500 );
    LOAD_ADDITIONAL_TEXT( "ROMAN9", 0 );
    sub_21655();
    SETTIMERA( 0 );
    PRINT_NOW( "RM9_GET_TO_CAFE", 8000, 1 );
    sub_21865( 0, sub_8503(), "NIKO", 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            if (l_U481 <= 4)
            {
                sub_22060( 966.00120000, -174.29820000, 22.69400000, 85.00000000 );
                sub_2503();
                l_U481 = 4;
            }
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_2494( 0 );
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            TASK_DIE( sub_8503() );
        };;;
        sub_22726();
        iVar2 = 0;
        iVar3 = 0;
        switch (l_U481)
        {
            case 0: if (TIMERA() > 8000)
            {
                if (sub_23267())
                {
                    sub_2503();
                    sub_21655();
                    l_U481 = 1;
                }
            }
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_8503(), 975.79250000, -169.55270000, 25.00000000, 6.00000000, 6.00000000, 3.00000000, 0 ))
            {
                sub_2503();
                if ((NOT l_U493) AND (l_U492 != 2))
                {
                    PRINT_NOW( "RM9_SPEAK_ASSIS", 8000, 1 );
                    ADD_BLIP_FOR_CHAR( l_U489, ref l_U490 );
                    SET_BLIP_AS_FRIENDLY( l_U490, 1 );
                    l_U481 = 2;
                }
                else
                {
                    l_U493 = 1;
                    sub_23579();
                }
            }
            break;
            case 2:
            if (l_U492 == 2)
            {
                l_U493 = 1;
                sub_23579();
                REMOVE_BLIP( l_U490 );
                break;
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_8503(), 971.06700000, -172.14020000, 24.19370000, 1.80000000, 1.80000000, 1.80000000, 0 )))
            {
                if ((NOT sub_23726()) AND (NOT sub_23788()))
                {
                    sub_23866();
                }
                else if (sub_23965() != 0)
                {
                    REMOVE_BLIP( l_U490 );
                    l_U493 = 1;
                    sub_24014();
                }
                break;
            }
            if (NOT (sub_24094( 1, 1 )))
            {
                break;
            }
            SET_PLAYER_CONTROL( sub_6023(), 0 );
            REMOVE_BLIP( l_U490 );
            l_U481 = 3;
            SETTIMERB( 0 );
            case 3:
            if (((sub_24429()) AND (TIMERB() >= 1250)) AND (l_U498 > -1))
            {
                l_U498 = -1;
            }
            switch (l_U498)
            {
                case 0:
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_8503(), 1 );
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U489, 0, 0, 50000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_8503(), 972.28000000, -172.43000000, 23.19000000, 2, -1, 0.50000000 );
                l_U498++;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( sub_8503(), 27, ref l_U499 );
                if (l_U499 == 7)
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U489, sub_8503() );
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_8503(), l_U489 );
                    CLEAR_PRINTS();
                    sub_24794( "R9_CAFE", ref l_U483, 6, 1 );
                    l_U498++;
                }
                break;
                case 2:
                if (NOT (sub_25766( l_U483 )))
                {
                    l_U498 = -2;
                }
                break;
                case -1:
                CLEAR_CHAR_TASKS( sub_8503() );
                sub_25962( ref l_U483, 0 );
                case -2:
                l_U493 = 1;
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_8503(), 0 );
                SET_PLAYER_CONTROL( sub_6023(), 1 );
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U489, 0, 0, 0 );
                sub_23579();
                break;
            }
            break;
            case 4:
            if ((NOT sub_23726()) AND (NOT sub_23788()))
            {
                sub_23866();
            }
            else if (sub_23965() != 0)
            {
                sub_24014();
            }
            break;
            case 5:
            switch (sub_23965())
            {
                case 0:
                CLEAR_HELP();
                if (NOT l_U501)
                {
                    sub_23579();
                }
                else
                {
                    PRINT_NOW( "RM9_LEAVE_CAFE", 8000, 1 );
                    l_U481 = 6;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ON_FOOT_3D( sub_8503(), 963.00000000, -176.00000000, 23.00000000, 80.00000000, 80.00000000, 80.00000000, 0 ))
                {
                    if (NOT l_U500)
                    {
                        sub_4162( 9, 0, 16383, 16383, ref l_U502 );
                        sub_26406( ref l_U502, 1 );
                        sub_26439( ref l_U502, 0 );
                        sub_4869( ref l_U502, 0 );
                        l_U500 = 1;
                    }
                }
                else if (l_U500)
                {
                    sub_21184( ref l_U502 );
                    l_U500 = 0;
                }
                if (l_U501)
                {
                    if (NOT (# -NULL-0xc27bfa()))
                    {
                        PRINT_HELP_FOREVER( "R9_FIN_HELP_3" );
                    }
                    else
                    {
                        PRINT_HELP_FOREVER( "R9_FIN_3" );
                    }
                }
                else
                {
                    switch (g_U851._fU16)
                    {
                        case 1000:
                        PRINT_HELP_FOREVER( "R9_OS_HELP_4" );
                        break;
                        case 1001:
                        PRINT_HELP_FOREVER( "R9_OS_HELP_3" );
                        break;
                        default:
                        if ((NOT l_U513) || (TIMERA() < 5000))
                        {
                            PRINT_HELP_FOREVER( "R9_OS_HELP_1" );
                            if (NOT l_U513)
                            {
                                GET_MOUSE_INPUT( ref iVar2, ref iVar3 );
                                if ((((IS_BUTTON_PRESSED( 0, 0 )) || (IS_BUTTON_PRESSED( 0, 1 ))) || (iVar2 != 0)) || (iVar3 != 0))
                                {
                                    l_U513 = 1;
                                    SETTIMERA( 0 );
                                }
                            }
                        }
                        else
                        {
                            PRINT_HELP_FOREVER( "R9_OS_HELP_2" );
                        }
                        break;
                    }
                }
                break;
                case 3:
                case 4:
                if (NOT l_U515)
                {
                    if (sub_26831() > 0)
                    {
                        l_U515 = 1;
                    }
                }
                if (COMPARE_STRING( ref g_U857._fU232._fU0, "www.eyefind.info" ))
                {
                    if (NOT l_U501)
                    {
                        sub_26921( 0 );
                        if (((TIMERA() > 6000) AND (l_U517 < 3)) || ((l_U515) AND (l_U517 == 2)))
                        {
                            SETTIMERA( 0 );
                            l_U517++;
                            if ((l_U515) AND (l_U517 == 2))
                            {
                                l_U517++;
                            }
                        }
                        if (NOT (# -NULL-0xc27bfa()))
                        {
                            StrCopy( ref l_U522, "R9_WEB_HELP_", 16 );
                        }
                        else
                        {
                            StrCopy( ref l_U522, "R9_WEB_", 16 );
                        }
                        ConcatString(ref l_U522, l_U517, 16);
                        PRINT_HELP_FOREVER( ref l_U522 );
                    }
                    else
                    {
                        sub_26921( 1 );
                        if ((TIMERA() > 6000) AND (l_U521 < 2))
                        {
                            SETTIMERA( 0 );
                            l_U521++;
                        }
                        if (NOT (# -NULL-0xc27bfa()))
                        {
                            StrCopy( ref l_U522, "R9_FIN_HELP_", 16 );
                        }
                        else
                        {
                            StrCopy( ref l_U522, "R9_FIN_", 16 );
                        }
                        ConcatString(ref l_U522, l_U521, 16);
                        PRINT_HELP_FOREVER( ref l_U522 );
                    }
                }
                else if (COMPARE_STRING( ref g_U857._fU232._fU0, "mail.eyefind.info" ))
                {
                    switch (sub_27315( ref l_U502, 0 ))
                    {
                        case 5:
                        sub_26921( 1 );
                        l_U501 = 1;
                        if ((TIMERA() > 6000) AND (l_U521 < 2))
                        {
                            SETTIMERA( 0 );
                            l_U521++;
                        }
                        if (NOT (# -NULL-0xc27bfa()))
                        {
                            StrCopy( ref l_U522, "R9_FIN_HELP_", 16 );
                        }
                        else
                        {
                            StrCopy( ref l_U522, "R9_FIN_", 16 );
                        }
                        ConcatString(ref l_U522, l_U521, 16);
                        PRINT_HELP_FOREVER( ref l_U522 );
                        sub_27609( ref l_U502, 0, 1 );
                        break;
                        case 3:
                        switch (g_U851._fU16)
                        {
                            case 30:
                            sub_26921( 4 );
                            PRINT_HELP_FOREVER( "R9_BUT_HELP_1" );
                            break;
                            case 31:
                            sub_26921( 4 );
                            PRINT_HELP_FOREVER( "R9_BUT_HELP_2" );
                            break;
                            default:
                            sub_26921( 3 );
                            if ((TIMERA() > 6000) AND (l_U519 < 1))
                            {
                                SETTIMERA( 0 );
                                l_U519++;
                            }
                            StrCopy( ref l_U522, "R9_REPLY_HELP_", 16 );
                            ConcatString(ref l_U522, l_U519, 16);
                            PRINT_HELP_FOREVER( ref l_U522 );
                            break;
                        }
                        break;
                        default:
                        switch (g_U851._fU16)
                        {
                            case 0: break;
                            default:
                            sub_26921( 5 );
                            if ((TIMERA() > 6000) AND (l_U518 < 1))
                            {
                                SETTIMERA( 0 );
                                l_U518++;
                            }
                            if (NOT (# -NULL-0xc27bfa()))
                            {
                                StrCopy( ref l_U522, "R9_EMAIL_HELP_", 16 );
                            }
                            else
                            {
                                StrCopy( ref l_U522, "R9_EMAIL_", 16 );
                            }
                            ConcatString(ref l_U522, l_U518, 16);
                            PRINT_HELP_FOREVER( ref l_U522 );
                            break;
                        }
                        break;
                    }
                }
                else if (NOT l_U514)
                {
                    if (COMPARE_STRING( ref g_U857._fU232._fU0, "www.littlelacysurprisepageant.com" ))
                    {
                        l_U514 = 1;
                    }
                }
                sub_26921( 6 );
                if ((TIMERA() > 6000) AND (l_U520 < 1))
                {
                    SETTIMERA( 0 );
                    l_U520++;
                }
                if (NOT (# -NULL-0xc27bfa()))
                {
                    StrCopy( ref l_U522, "R9_WRONG_HELP_", 16 );
                }
                else
                {
                    StrCopy( ref l_U522, "R9_WRONG_", 16 );
                }
                ConcatString(ref l_U522, l_U520, 16);
                PRINT_HELP_FOREVER( ref l_U522 );;;
                break;
            }
            break;
            case 6:
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_8503(), 971.06700000, -172.14020000, 24.19370000, 1.80000000, 1.80000000, 1.80000000, 0 )) AND (l_U492 != 2)) AND (NOT l_U497))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_6023(), 0 )))
                {
                    sub_24794( "R9_EXIT", ref l_U483, 6, 1 );
                }
                l_U497 = 1;
            }
            else if (NOT sub_23726())
            {
                sub_25962( ref l_U483, 0 );
                sub_2494( 0 );
            }
            else if (sub_23965() != 0)
            {
                if (NOT l_U514)
                {
                    if (COMPARE_STRING( ref g_U857._fU232._fU0, "www.littlelacysurprisepageant.com" ))
                    {
                        l_U514 = 1;
                    }
                }
            };;;
            break;
        }
    }
    return;
}

void sub_250(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_267();
    return;
}

void sub_267()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_383()
{
    sub_392();
    return;
}

void sub_392()
{
    int iVar2;

    iVar2 = 0;
    sub_406( iVar2 );
    sub_1582( iVar2 );
    return;
}

void sub_406(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_450();
        sub_611();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_719();
            sub_758();
        }
    }
    sub_834();
    sub_935();
    uVar5 = sub_1048( uParam0 );
    sub_1489( uVar5, 0 );
    return;
}

void sub_450()
{
    sub_464( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_564();
    }
    return;
}

void sub_464(int iParam0)
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

void sub_564()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_611()
{
    sub_620();
    return;
}

void sub_620()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_719()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_758()
{
    sub_767();
    return;
}

void sub_767()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_834()
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

void sub_935()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_957();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_957()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1048(unknown uParam0)
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
    sub_1447( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1447(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1489(int iParam0, boolean bParam1)
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

void sub_1582(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1591();
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
        sub_2366();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1591()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1629( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1629( 1, g_U569[I] )) != 0)
            {
                sub_1915( I );
            }
        }
    }
    if (NOT sub_2081())
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

int sub_1629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1915(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2000( g_U569 - 1 );
    return;
}

void sub_2000(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2081()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1629( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2366()
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

void sub_2494(unknown uParam0)
{
    sub_2503();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    if (DOES_BLIP_EXIST( l_U490 ))
    {
        REMOVE_BLIP( l_U490 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U489 ))) AND (l_U492 == 1))
    {
        TASK_STAND_STILL( l_U489, -2 );
        SET_CHAR_KEEP_TASK( l_U489, 1 );
    }
    REMOVE_ANIMS( "gestures@niko" );
    switch (uParam0)
    {
        case 0:
        TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
        sub_2790( 13 );
        UNLOCK_MISSION_NEWS_STORY( 13 );
        if (NOT l_U514)
        {
            CLEAR_WANTED_LEVEL( sub_6023() );
        }
        sub_6062( 0 );
        sub_6122( 0 );
        sub_6182( 21 );
        sub_6937( 12 );
        sub_8814();
        sub_20422( 0, "R9_CALL1", "R9AUD", 0 );
        sub_21009( 8 );
        break;
        case 1:
        if (g_U9930 > 2)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_6023(), 150 );
        }
        break;
    }
    sub_21184( ref l_U502 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2503()
{
    if (DOES_BLIP_EXIST( l_U482 ))
    {
        REMOVE_BLIP( l_U482 );
        SET_ROUTE( l_U482, 0 );
    }
    sub_2570( "RM9_BLIP_HELP" );
    return;
}

void sub_2570(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_2790(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_2877( iParam0 ))
    {
        sub_3951( iParam0 );
    }
    return;
}

int sub_2877(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_2934( ref uVar3, 1, 0, 0 );
    sub_3546( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_3759( "\n ----------------------------------------------------------------" );
    sub_3844( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_3759( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_2934(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2987( iParam0, uParam1, uParam2 );
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
        sub_3119( iParam0 + 0 );
    }
    return;
}

void sub_2987(int iParam0, int iParam1, int iParam2)
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
        sub_3119( iParam0 + 0 );
    }
    return;
}

void sub_3119(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_3150( iParam0->_fU4 )))
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

int sub_3150(unknown uParam0)
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

void sub_3546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_3759(unknown uParam0)
{
    return;
}

void sub_3844(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3951(unknown uParam0)
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
        sub_4162( 20, 6, 16383, 16383, ref uVar4 );
        sub_4838( ref uVar4, 7 );
        sub_4869( ref uVar4, 0 );
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
        sub_4162( 20, 7, 9, 16383, ref uVar4 );
        sub_4838( ref uVar4, 7 );
        sub_4869( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_4162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_4186( uParam0, 0, iParam4 + 0 );
    sub_4186( uParam1, 1, iParam4 + 0 );
    sub_4186( uParam2, 2, iParam4 + 0 );
    sub_4186( uParam3, 3, iParam4 + 0 );
    sub_4186( 0, 4, iParam4 + 0 );
    sub_4186( 1, 5, iParam4 + 0 );
    sub_4186( 65535, 6, iParam4 + 0 );
    sub_4186( 0, 12, iParam4 + 0 );
    sub_4186( 0, 11, iParam4 + 0 );
    sub_4186( 0, 14, iParam4 + 0 );
    sub_4186( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_4186( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_4186( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_4186(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_4838(int iParam0, unknown uParam1)
{
    sub_4186( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_4869(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_4909())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_5596( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_5395( iVar5 );
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

int sub_4909()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_4943( 5, g_U968[I] )) == 7)
        {
            sub_5395( I );
            return 1;
        }
    }
    return 0;
}

int sub_4943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_5395(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_5468( 39 );
    return;
}

void sub_5468(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_5596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_5657( uParam0, g_U968[Result] ))
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

int sub_5657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_6023()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6062(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_2934( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_6122(unknown uParam0)
{
    if (g_U1816[uParam0] == 0)
    {
        sub_2934( ref g_U1821[uParam0], 4, 0, 0 );
        g_U1816[uParam0] = 1;
    }
    return;
}

void sub_6182(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_2934( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_2934( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_2934( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_2934( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_2934( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_2934( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_2934( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_2934( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_2934( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_2934( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_2934( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_2934( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_2934( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_2934( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_6937(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_6958();
    return;
}

void sub_6958()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_6986( 13 );
        if ((sub_7031( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_7132( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_7318( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_6986( 11 );
        if ((sub_7031( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_7132( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_7318( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_7512( I );
        if ((sub_7031( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_7132( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_7820( I );
        }
        else
        {
            sub_7318( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_8049();
    return;
}

int sub_6986(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_7031(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_7132(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U98 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_7318(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_7512(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_7554( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_6986( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_7554(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_7820(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_8049()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_6986( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_8094( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_6986( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_8094( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_7512( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_7512( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_8094( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_8094( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_8503() )))
        {
            GET_CHAR_COORDINATES( sub_8503(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_8621( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_8094( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_8094(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_8503()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_8814()
{
    sub_8823();
    return;
}

void sub_8823()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_8841();
    sub_8900( iVar2, iVar3, iVar4 );
    return;
}

void sub_8841()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_8900(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_8931( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_8931(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9027( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9027( ref cVar9 );
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
            sub_9027( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9027( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9027( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9027( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_9604( iParam0, iVar7 );;;
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
                sub_10001( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10001( 0, 4 );
            }
        }
    }
    if (NOT (sub_10090( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6023(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6023() );
    }
    sub_1591();
    bVar27 = true;
    uVar28 = sub_9604( iParam0, iVar7 );
    uVar29 = sub_1048( iParam0 );
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
                sub_19466( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_19896();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_19981( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20038( iParam0 );
                sub_20077( 0 );
                sub_1489( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20185();
        }
    }
    if (bParam2)
    {
        sub_19896();
        sub_20273();
        sub_20077( 0 );
    }
    if (bParam3)
    {
        sub_19896();
        sub_20313();
        sub_20077( 0 );
        sub_1489( uVar29, 0 );
    }
    sub_935();
    return;
}

void sub_9027(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_9604(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1447( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10001(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10090(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_10298( uParam1 );
        break;
        case 1:
        bVar8 = sub_12376( uParam1 );
        break;
        case 2:
        bVar8 = sub_12602( uParam1 );
        break;
        case 3:
        bVar8 = sub_12752( uParam1 );
        break;
        case 4:
        bVar8 = sub_13030( uParam1 );
        break;
        case 5:
        bVar8 = sub_13333( uParam1 );
        break;
        case 6:
        bVar8 = sub_13532( uParam1 );
        break;
        case 7:
        bVar8 = sub_13758( uParam1 );
        break;
        case 8:
        bVar8 = sub_13993( uParam1 );
        break;
        case 9:
        bVar8 = sub_14368( uParam1 );
        break;
        case 10:
        bVar8 = sub_14615( uParam1 );
        break;
        case 11:
        bVar8 = sub_14754( uParam1 );
        break;
        case 12:
        bVar8 = sub_15053( uParam1 );
        break;
        case 13:
        bVar8 = sub_15281( uParam1 );
        break;
        case 14:
        bVar8 = sub_15568( uParam1 );
        break;
        case 15:
        bVar8 = sub_15850( uParam1 );
        break;
        case 16:
        bVar8 = sub_16132( uParam1 );
        break;
        case 17:
        bVar8 = sub_16333( uParam1 );
        break;
        case 18:
        bVar8 = sub_16406( uParam1 );
        break;
        case 19:
        bVar8 = sub_16620( uParam1 );
        break;
        case 20:
        bVar8 = sub_16873( uParam1 );
        break;
        case 21:
        bVar8 = sub_17120( uParam1 );
        break;
        case 22:
        bVar8 = sub_17321( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_11981( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_9604( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_17644( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_10298(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_10577( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_10577( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_10577( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_10577( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_10577( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_10577( iVar3, 0, 3, 1, 0, 0 );
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
        sub_10577( iVar3, 0, sub_11859(), sub_12125(), 0, 0 );
        break;
        default:
        sub_12284( "Friend 1", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Friend 1", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_10588( uParam1 );
    sub_10762( uParam0, 0, uParam2 );
    sub_10762( uParam0, 1, uParam3 );
    sub_10762( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_8841();
    return;
}

void sub_10588(unknown uParam0)
{
    ADD_SCORE( sub_6023(), uParam0 );
    sub_10613( uParam0 );
    return;
}

void sub_10613(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1447( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_10762(unknown uParam0, int iParam1, int iParam2)
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
        sub_10919( uParam0 );
    }
    return;
}

void sub_10919(unknown uParam0)
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

int sub_11859()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_11981( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_11981(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12125()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_11981( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12284(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12376(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 2", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 2", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12602(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_12284( "Girl 3", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Girl 3", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12752(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10577( iVar3, 0, sub_11859(), sub_12125(), 0, 0 );
        break;
        default:
        sub_12284( "Friend 4", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Friend 4", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13030(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 5", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 5", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13333(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 7", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 7", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 7b", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 7b", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13758(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_10577( iVar3, 0, sub_11859(), sub_12125(), 0, 0 );
        break;
        default:
        sub_12284( "Friend 8", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Friend 8", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13993(unknown uParam0)
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
        sub_10577( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_10577( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_10577( iVar3, 0, sub_11859(), sub_12125(), 0, 0 );
        break;
        default:
        sub_12284( "Friend 9", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Friend 9", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14368(unknown uParam0)
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
        sub_10577( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_10577( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_10577( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_12284( "Contact 10", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12284( "Contact 10", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14615(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_12284( "Girl 11", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Girl 11", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14754(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_12284( "Contact 12", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 12", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15053(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 13", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 13", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15281(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_10577( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_10577( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10577( iVar3, 0, sub_11859(), sub_12125(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_12284( "Friend 15", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Friend 15", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15568(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 16", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 16", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15850(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10577( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_12284( "Contact 18", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 18", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16132(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 19", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 19", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16333(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_12284( "Girl 20", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16406(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_12284( "Contact 21", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 21", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16620(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10577( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_12284( "Contact 22", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 22", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10577( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10577( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10577( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_12284( "Contact 24", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 24", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10577( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10577( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10577( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_12284( "Contact 25", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12284( "Contact 25", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17321(unknown uParam0)
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
        sub_10577( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_12284( "Girl 26", 1 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12284( "Girl 26", 0 );
        sub_10577( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_17644(int iParam0, int iParam1)
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
    if (sub_17692( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_18423( iParam1 );
    }
    return;
}

int sub_17692(int iParam0, int iParam1)
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
            sub_17832( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_17832(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18014( 0 );
    return;
}

void sub_18014(boolean bParam0)
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
        sub_18269();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_18269()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_18423(int iParam0)
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
        sub_18756( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_18756( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_18756( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_18756( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_18756( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_18756( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_18756( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_18756( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_18756( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_18756( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_18756( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_18756( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_18756( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_18756( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_18756( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_18756( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_18756( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_18756( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_18756( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_18756(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_19466(unknown uParam0, unknown uParam1)
{
    sub_19485( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_19485(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19896()
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

int sub_19981(int iParam0, int iParam1)
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

void sub_20038(unknown uParam0)
{
    sub_834();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_20077(unknown uParam0)
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

void sub_20185()
{
    sub_20194();
    return;
}

void sub_20194()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20273()
{
    sub_20194();
    return;
}

void sub_20313()
{
    sub_20194();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_20422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_20466( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_20466(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_21009(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_21184(int iParam0)
{
    int I;

    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_5657( iParam0->_fU0, g_U968[I] ))
            {
                sub_5395( I );
                iParam0->_fU40 = -1;
            }
        }
    }
    return;
}

void sub_21655()
{
    if (NOT (DOES_BLIP_EXIST( l_U482 )))
    {
        ADD_BLIP_FOR_COORD( g_U10324[5]._fU0._fU0, g_U10324[5]._fU0._fU4, g_U10324[5]._fU0._fU8, ref l_U482 );
        CHANGE_BLIP_SPRITE( l_U482, g_U10324[5]._fU20 );
        SET_ROUTE( l_U482, 1 );
        CHANGE_BLIP_COLOUR( l_U482, 5 );
        sub_21781( ref l_U482 );
    }
    return;
}

void sub_21781(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

void sub_21865(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3844( "\n PED NUMBER ", uParam0 );
    sub_21973( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_21973(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_22060(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_PLAYER_PLAYING( sub_6023() ))
    {
        if (NOT (sub_22092( uParam0, uParam1, uParam2 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_8503() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_8503(), uParam0, uParam1, uParam2 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_8503(), uParam0, uParam1, uParam2 );
            }
        }
        SET_CHAR_HEADING( sub_8503(), uParam3 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

int sub_22092(unknown uParam0, unknown uParam1, unknown uParam2)
{
    LOAD_SCENE( uParam0, uParam1, uParam2 );
    if (sub_22144( uParam0, uParam1, uParam2, g_U9943[0]._fU20, "shitholerm" ))
    {
        return 1;
    }
    if (sub_22144( uParam0, uParam1, uParam2, g_U9943[1]._fU20, "bronxsaveroom01" ))
    {
        return 1;
    }
    if (sub_22144( uParam0, uParam1, uParam2, g_U9943[2]._fU20, "loftrm1" ))
    {
        return 1;
    }
    if (sub_22144( uParam0, uParam1, uParam2, g_U9943[3]._fU20, "JersSaveApt" ))
    {
        return 1;
    }
    if (sub_22144( uParam0, uParam1, uParam2, g_U9943[4]._fU20, "PlayXroom" ))
    {
        return 1;
    }
    return 0;
}

int sub_22144(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;

    if (NOT (sub_22159( uParam0, uParam3 )))
    {
        return 0;
    }
    uVar9 = GET_HASH_KEY( uParam6 );
    GET_INTERIOR_AT_COORDS( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar10 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, uVar9 );
    if (IS_CHAR_IN_ANY_CAR( sub_8503() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_8503(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_8503(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    SET_ROOM_FOR_CHAR_BY_KEY( sub_8503(), uVar9 );
    return 1;
}

int sub_22159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_22726()
{
    GET_INTERIOR_AT_COORDS( l_U494._fU0, l_U494._fU4, l_U494._fU8, ref l_U526 );
    switch (l_U492)
    {
        case 0:
        if (l_U526 != nil)
        {
            if (HAS_MODEL_LOADED( l_U491 ))
            {
                CREATE_CHAR( 5, l_U491, l_U494._fU0, l_U494._fU4, l_U494._fU8, ref l_U489, 1 );
                SET_CHAR_HEADING( l_U489, 23.47290000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U489, "GTA_MLOROOM02" );
                sub_21865( 1, l_U489, "TWAT_WORKER", 0 );
                l_U492 = 1;
                ALLOW_REACTION_ANIMS( l_U489, 1 );
            }
        }
        break;
        case 1:
        if (IS_CHAR_INJURED( l_U489 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U489 );
            l_U492 = 2;
        }
        else if (((((IS_PED_IN_COMBAT( l_U489 )) || (IS_PED_RETREATING( l_U489 ))) || (IS_PED_FLEEING( l_U489 ))) || ((IS_PLAYER_TARGETTING_CHAR( sub_6023(), l_U489 )) AND (IS_CHAR_ARMED( sub_8503(), 7 )))) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_6023(), l_U489 )) AND (IS_INTERIOR_SCENE())))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U489 );
            l_U492 = 2;
        }
        else if (l_U526 == nil)
        {
            DELETE_CHAR( ref l_U489 );
            l_U492 = 0;
        };;;
        break;
        case 2: break;
    }
    return;
}

int sub_23267()
{
    int iVar2;

    iVar2 = (TIMERA() / 500) mod 2;
    if (TIMERA() < 15500)
    {
        PRINT_HELP_FOREVER( "RM9_BLIP_HELP" );
        if (DOES_BLIP_EXIST( l_U482 ))
        {
            sub_21655();
        }
        if (iVar2 == 0)
        {
            FLASH_BLIP( l_U482, 0 );
        }
        else
        {
            FLASH_BLIP( l_U482, 1 );
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_23579()
{
    PRINT_NOW( "RM9_GET_TO_COMP", 8000, 1 );
    l_U481 = 4;
    return;
}

int sub_23726()
{
    int iVar2;

    if (l_U526 != nil)
    {
        GET_INTERIOR_FROM_CHAR( sub_8503(), ref iVar2 );
        if (iVar2 == l_U526)
        {
            return 1;
        }
    }
    return 0;
}

int sub_23788()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_8503(), 975.79250000, -169.55270000, 25.00000000, 14.00000000, 14.00000000, 10.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_23866()
{
    SETTIMERA( 0 );
    if (DOES_BLIP_EXIST( l_U490 ))
    {
        REMOVE_BLIP( l_U490 );
    }
    sub_21655();
    PRINT_NOW( "RM9_GET_BK_CAFE", 8000, 1 );
    l_U481 = 0;
    return;
}

void sub_23965()
{
    return g_U857._fU0;
}

void sub_24014()
{
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U516 = -1;
    l_U513 = 0;
    SETTIMERA( 0 );
    l_U481 = 5;
    return;
}

int sub_24094(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_8503() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_8503(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_8503() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_8503(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_8503()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_8503() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_8503() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6023() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6023() )))
    {
        return 0;
    }
    return 1;
}

int sub_24429()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24794(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24815( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_24815(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_24869( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_24869(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_24891( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_25567( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_24891(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3759( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3759( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3759( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_25567(int iParam0, int iParam1)
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

int sub_25766(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3759( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3759( "\n speech is not playing" );
    }
    return 0;
}

void sub_25962(int iParam0, unknown uParam1)
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

void sub_26406(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

void sub_26439(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_26831()
{
    return g_U857._fU24;
}

void sub_26921(int iParam0)
{
    if (l_U516 != iParam0)
    {
        SETTIMERA( 0 );
        l_U516 = iParam0;
    }
    return;
}

int sub_27315(int iParam0, int iParam1)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_5657( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_4943( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

void sub_27609(int iParam0, int iParam1, unknown uParam2)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_5657( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU16 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}