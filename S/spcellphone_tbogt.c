void main()
{
    int I;
    int iVar3;
    char[16] cVar4;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 225;
    l_U3 = -1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    g_U95._fU496 = GET_IS_HIDEF();
    g_U560 = 9;
    g_U95._fU0 = 1000;
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    g_U95._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES();
    if (g_U95._fU568 == 0)
    {
        g_U95._fU572 = 0;
    }
    else
    {
        g_U95._fU572 = 1;
    }
    g_U827 = 0;
    l_U14 = 0;
    l_U15 = -1;
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            g_U560 = 9;
            g_U95._fU496 = GET_IS_HIDEF();
            sub_213();
            for ( I = 0; I <= (g_U16014 - 1); I++ )
            {
                g_U16014[I]._fU212._fU24 = 6;
            }
            g_U95._fU632 = 0;
            g_U95._fU0 = 1000;
            g_U95._fU4 = 1000;
            g_U570 = 19;
            g_U571 = 19;
            g_U572 = 19;
            g_U95._fU404 = 1000;
            g_U95._fU580 = 0;
            g_U95._fU100 = 0;
            g_U95._fU104 = 0;
            g_U95._fU512 = nil;
            g_U95._fU124 = 0;
            g_U95._fU48 = 0;
            g_U95._fU52 = 0;
            g_U95._fU56 = 0;
            g_U95._fU392 = 0;
            g_U95._fU484 = 1;
            g_U95._fU656 = -1;
            g_U95._fU368 = 0;
            g_U95._fU372 = 0;
            g_U821 = 0;
            g_U822 = 0;
            g_U823 = 0;
            g_U824 = 0;
            g_U825 = 0;
            g_U826 = 0;
            g_U827 = 0;
            g_U95._fU580 = 0;
            g_U95._fU532 = 0;
            l_U6 = 0;
            g_U95._fU540 = 0;
            SET_SLEEP_MODE_ACTIVE( 0 );
            if (sub_1294())
            {
                SET_MESSAGES_WAITING( 1 );
            }
            g_U95._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES();
            if (g_U95._fU568 == 0)
            {
                g_U95._fU572 = 0;
            }
            else
            {
                g_U95._fU572 = 1;
            }
            l_U14 = 0;
            l_U15 = -1;
        }
        if ((NETWORK_HAVE_SUMMONS()) AND (NOT g_U95._fU580))
        {
            if (g_U560 == 9)
            {
                g_U16 = GET_EPISODE_INDEX_FROM_SUMMONS();
                g_U819 = g_U12379;
                g_U95._fU580 = 1;
                sub_1748();
            }
        }
        if (NOT g_U95._fU580)
        {
            switch (g_U95._fU40)
            {
                case 0:
                if (IS_PLAYER_PLAYING( sub_2787() ))
                {
                    switch (g_U560)
                    {
                        case 9:
                        if (IS_PLAYER_CONTROL_ON( sub_2787() ))
                        {
                            if (sub_2867())
                            {
                                if (((sub_3745( 0 )) == 0) AND (NOT (IS_BUTTON_PRESSED( 0, 4 ))))
                                {
                                    g_U95._fU376 = 0;
                                    g_U95._fU380 = 1;
                                    if ((g_U824) || (g_U828))
                                    {
                                        sub_7826( 3 );
                                    }
                                    else if (IS_PLAYER_SIGNED_IN_LOCALLY())
                                    {
                                        sub_7826( 2 );
                                    }
                                    else
                                    {
                                        sub_7826( 0 );
                                    }
                                }
                            }
                        }
                        break;
                        default:
                        if (NOT (IS_THREAD_ACTIVE( g_U561[g_U560] )))
                        {
                            sub_213();
                        }
                        break;
                    }
                }
                break;
                default:
                if (IS_PLAYER_PLAYING( sub_2787() ))
                {
                    switch (g_U560)
                    {
                        case 9:
                        if (NOT l_U14)
                        {
                            if (TIMERB() >= 60000)
                            {
                                l_U14 = 1;
                                sub_11293();
                            }
                        }
                        if (IS_PLAYER_CONTROL_ON( sub_2787() ))
                        {
                            if ((g_U95._fU48) || (g_U95._fU52))
                            {
                                if ((sub_2867()) || (g_U95._fU376))
                                {
                                    sub_7826( 1 );
                                }
                            }
                            else if (((sub_3745( 0 )) == 0) AND (NOT (IS_CONTROL_PRESSED( 0, 23 ))))
                            {
                                if (sub_2867())
                                {
                                    g_U95._fU376 = 0;
                                    g_U95._fU380 = 1;
                                    if ((g_U824) || (g_U828))
                                    {
                                        sub_7826( 3 );
                                    }
                                    else if (NOT g_U95._fU548)
                                    {
                                        if (g_U95._fU540)
                                        {
                                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                            {
                                                g_U95._fU548 = 1;
                                                PRINT_HELP( "CP_SLEEP_H1" );
                                            }
                                        }
                                    }
                                    sub_7826( 0 );;
                                }
                            }
                        }
                        else if (((g_U95._fU48) || (g_U95._fU52)) AND (g_U95._fU376))
                        {
                            sub_7826( 1 );
                        }
                        break;
                        default:
                        SETTIMERB( 0 );
                        if (NOT (IS_THREAD_ACTIVE( g_U561[g_U560] )))
                        {
                            sub_213();
                        }
                        else if (g_U95._fU392)
                        {
                            sub_9967( 1 );
                            g_U95._fU392 = 0;
                        }
                        break;
                    }
                    sub_11759();
                    switch (l_U6)
                    {
                        case 3: if (TIMERA() >= 5000)
                        {
                            sub_12612( ref l_U7, 0 );
                            l_U6 = 0;
                        }
                        case 0:
                        if (g_U95._fU0 == 1005)
                        {
                            if ((sub_14007( "9485550100" )) || (sub_14110( 12, 1, 0 )))
                            {
                                if (sub_14438( "MF6_LAZLOW", "", 1 ))
                                {
                                    sub_16887( "LAZLOW" );
                                    if (l_U6 == 3)
                                    {
                                        sub_12612( ref l_U7, 0 );
                                    }
                                    l_U6 = 1;
                                }
                            }
                        }
                        break;
                        case 1:
                        case 2:
                        switch (sub_16944())
                        {
                            case 6:
                            if (l_U6 == 2)
                            {
                                if (IS_GAME_IN_CONTROL_OF_MUSIC())
                                {
                                    iVar3 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
                                    sub_8296( " %%%% GRABBED Zit! ID ", iVar3 );
                                    sub_1880( "\n" );
                                    StrCopy( ref cVar4, "T182_", 16 );
                                    ConcatString(ref cVar4, iVar3, 16);
                                    if (iVar3 > 1)
                                    {
                                        if (DOES_TEXT_LABEL_EXIST( ref cVar4 ))
                                        {
                                            REPORT_TAGGED_RADIO_TRACK( iVar3 );
                                        }
                                        else
                                        {
                                            sub_8296( "\n setting Zit! ID to 1 as no text exists for ", iVar3 );
                                            sub_1880( "\n" );
                                            iVar3 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 290, 295, ref iVar3 );
                                }
                                sub_17243( 82, iVar3, 16383, 16383, ref l_U7 );
                                sub_17587( 12, 1 );
                                SETTIMERA( 0 );
                                l_U6 = 3;
                            }
                            else
                            {
                                l_U6 = 0;
                            }
                            break;
                            default:
                            if (sub_17754() >= 2)
                            {
                                l_U6 = 2;
                            }
                            break;
                        }
                        break;
                    }
                }
                break;
            }
        }
        else if (g_U560 != 9)
        {
            if (NOT (IS_THREAD_ACTIVE( g_U561[g_U560] )))
            {
                sub_213();
            }
        }
        if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
        {
            if (IS_PLAYER_PLAYING( sub_2787() ))
            {
                if (NETWORK_CHECK_INVITE_ARRIVAL())
                {
                    g_U95._fU572 = 1;
                    if (NOT g_U95._fU576)
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            g_U95._fU576 = 1;
                            PRINT_HELP( "FIRST_INVITE" );
                        }
                    }
                    PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
                    SET_PHONE_HUD_ITEM( 10, "INVITE_REC", 0 );
                    NETWORK_CLEAR_INVITE_ARRIVAL();
                }
            }
            if (g_U95._fU572)
            {
                g_U95._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES();
                if (g_U95._fU568 == 0)
                {
                    g_U95._fU572 = 0;
                }
            }
        }
        if (g_U95._fU540)
        {
            if (g_U12379)
            {
                g_U95._fU540 = 0;
                SET_SLEEP_MODE_ACTIVE( 0 );
            }
        }
    }
    return;
}

void sub_213()
{
    g_U560 = 9;
    sub_228();
    sub_403();
    g_U95._fU100 = 0;
    l_U14 = 0;
    sub_911();
    return;
}

void sub_228()
{
    int I;

    if (g_U560 == 9)
    {
        for ( I = 0; I <= (g_U561 - 1); I++ )
        {
            if (IS_THREAD_ACTIVE( g_U561[I] ))
            {
                DESTROY_THREAD( g_U561[I] );
            }
        }
        g_U95._fU124 = 0;
        g_U95._fU48 = 0;
        g_U95._fU52 = 0;
        g_U95._fU56 = 0;
        g_U95._fU392 = 0;
        g_U95._fU484 = 1;
        g_U95._fU532 = 0;
        g_U95._fU376 = 0;
    }
    return;
}

void sub_403()
{
    sub_412();
    sub_743( 0 );
    return;
}

void sub_412()
{
    int I;

    if (g_U485._fU164 != 0)
    {
        for ( I = 0; I <= (g_U485._fU164 - 1); I++ )
        {
            RELEASE_TEXTURE( g_U485._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_LQ" );
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_HQ" );
        g_U485._fU164 = 0;
        if (g_U485._fU168)
        {
            if (NOT IS_NETWORK_SESSION())
            {
                for ( I = 0; I <= 12; I++ )
                {
                    RELEASE_TEXTURE( g_U485._fU88[I] );
                }
            }
            else
            {
                RELEASE_TEXTURE( g_U485._fU88[12] );
            }
            MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_dial" );
            if (NOT IS_NETWORK_SESSION())
            {
                RELEASE_TEXTURE( g_U485._fU148[0] );
                RELEASE_TEXTURE( g_U485._fU148[1] );
                RELEASE_TEXTURE( g_U485._fU148[2] );
            }
            g_U485._fU168 = 0;
        }
    }
    return;
}

void sub_743(boolean bParam0)
{
    int I;
    char[32] cVar4;

    StrCopy( ref cVar4, "phone3D_HQ_private", 32 );
    if (bParam0)
    {
        ConcatString(ref cVar4, g_U95._fU400, 32);
    }
    else
    {
        ConcatString(ref cVar4, g_U95._fU396, 32);
    }
    if (g_U528._fU16)
    {
        for ( I = 0; I <= 2; I++ )
        {
            RELEASE_TEXTURE( g_U528._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( ref cVar4 );
        g_U528._fU16 = 0;
    }
    return;
}

void sub_911()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U12376[I] = 0;
    }
    return;
}

int sub_1294()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1332( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_1332(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1748()
{
    sub_1757();
    sub_2501();
    g_U11 = 1;
    return;
}

void sub_1757()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U43802 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_1880( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_1880( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_1880( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U43802 = 1;
                }
            }
        }
        if ((NOT NETWORK_IS_RENDEZVOUS()) || (NETWORK_HAVE_ACCEPTED_INVITE()))
        {
            NETWORK_LEAVE_GAME();
            sub_1880( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1880( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U43802 = 1;
            }
        }
        else
        {
            sub_1880( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_1880( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_1880(unknown uParam0)
{
    return;
}

void sub_2501()
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

    array(ref uVar2._fU0, 10);
    ref uVar2;
    uVar2._fU0[0] = g_U95._fU40;
    uVar2._fU0[1] = g_U95._fU108;
    uVar2._fU0[2] = g_U95._fU112;
    uVar2._fU0[3] = g_U95._fU396;
    if (g_U95._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (g_U95._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = g_U95._fU656;
    if ((g_U16014[12]._fU212._fU0) || (g_U95._fU1488))
    {
        uVar2._fU0[7] = 1;
    }
    else
    {
        uVar2._fU0[7] = 0;
    }
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar2 );
    return;
}

void sub_2787()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2867()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2787() )))
    {
        sub_1880( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1880( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_1880( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_1880( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2787() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3277() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3277(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1880( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3277() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1880( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_1880( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2787() )))
    {
        sub_1880( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_3277()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3745(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    int iVar7;
    int iVar8;

    iVar4 = uParam0;
    iVar7 = 19;
    iVar8 = 0;
    GET_MOUSE_WHEEL( ref iVar8 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        return 19;
    }
    switch (g_U570)
    {
        case 1:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0)) AND ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) || (NOT IS_USING_CONTROLLER())))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U573) AND (g_U95._fU484))
            {
                g_U570 = 5;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 5:
        if (((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U95._fU488)
            {
                g_U95._fU488 = iVar3 + g_U95._fU492;
                return 1;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 0:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 21 )))) AND (iVar8 >= 0))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U573) AND (g_U95._fU484))
            {
                g_U570 = 4;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 4:
        if (((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (iVar8 >= 0))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U95._fU488)
            {
                g_U95._fU488 = iVar3 + g_U95._fU492;
                return 0;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 2:
        if ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 ))))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_3911( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_3911( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U571)
    {
        case 6:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 181 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))))
        {
            uVar6 = sub_6491( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_6491( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_6491( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U572)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_6953( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_6953( iVar4 );
            break;
        }
    }
    if (Result != 19)
    {
        return Result;
    }
    if (iVar7 != 19)
    {
        return iVar7;
    }
    return uVar6;
}

void sub_3911(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    GET_MOUSE_WHEEL( ref iVar11 );
    if (IS_CONTROL_PRESSED( 2, 21 ))
    {
        iVar9 = 1;
    }
    if (IS_CONTROL_PRESSED( 2, 22 ))
    {
        iVar10 = 1;
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 )))
    {
        bVar3 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))
    {
        bVar4 = true;
    }
    if (IS_BUTTON_PRESSED( 0, 8 ))
    {
        bVar5 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 )))
    {
        bVar6 = true;
    }
    if (((iVar11 > 0) AND (g_U95._fU0 != 1002)) AND (g_U95._fU0 != 1003))
    {
        iVar7 = 1;
    }
    if ((((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )) AND (g_U95._fU0 != 1000)) AND (g_U95._fU0 != 1002)) || ((((iVar11 < 0) AND (g_U95._fU0 != 1000)) AND (g_U95._fU0 != 1002)) AND (g_U95._fU0 != 1003)))
    {
        iVar8 = 1;
    }
    if ((iVar9) AND ((g_U95._fU0 == 1000) || (g_U95._fU0 == 1002)))
    {
        GET_GAME_TIMER( ref g_U573 );
        g_U573 += 500;
        g_U570 = 0;
        switch (g_U95._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_4312( 2, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (NOT IS_USING_CONTROLLER()))
    {
        GET_GAME_TIMER( ref g_U573 );
        g_U573 += 500;
        g_U570 = 18;
        switch (g_U95._fU0)
        {
            case 1005: break;
            default:
            sub_4312( 8, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (g_U95._fU0 == 1002))
    {
        GET_GAME_TIMER( ref g_U573 );
        g_U573 += 500;
        g_U570 = 1;
        switch (g_U95._fU0)
        {
            case 1005: break;
            default:
            sub_4312( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U570 = 3;
        if ((g_U95._fU0 == 1003) || (g_U95._fU0 == 1009))
        {
            sub_4312( 7, uParam0 );
        }
    }
    else if ((((bVar4) || (iVar7)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U573 );
        g_U573 += 500;
        g_U95._fU488 = 0;
        g_U570 = 1;
        switch (g_U95._fU0)
        {
            case 1005: break;
            default:
            sub_4312( 8, uParam0 );
            break;
        }
    }
    else if ((((bVar5) || (iVar8)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U573 );
        g_U573 += 500;
        g_U95._fU488 = 0;
        g_U570 = 0;
        switch (g_U95._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_4312( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U570 = 2;
        if ((g_U95._fU0 == 1003) || (g_U95._fU0 == 1009))
        {
            sub_4312( 3, uParam0 );
        }
    }
    else
    {
        g_U570 = 19;
    };;;;;;;
    return g_U570;
}

void sub_4312(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((uParam1) AND ((NOT g_U95._fU376) || (g_U95._fU0 == 1005)))
    {
        uVar4 = GET_SOUND_ID();
        if (g_U95._fU0 == 1005)
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY_SPEED" );
        }
        else
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY" );
        }
        switch (uParam0)
        {
            case 0:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 10.00000000 );
            sub_1880( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_1880( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_1880( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_1880( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_1880( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_1880( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_1880( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_1880( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_1880( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_1880( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_1880( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_1880( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_6491(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U571 = 6;
        switch (g_U95._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_4312( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U571 = 7;
        if (g_U95._fU0 != 1007)
        {
            sub_4312( 4, uParam0 );
        }
    }
    else
    {
        g_U571 = 19;
    }
    return g_U571;
}

void sub_6953(unknown uParam0)
{
    g_U572 = 19;
    if (((g_U95._fU0 == 1003) || (g_U95._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U572 = 8;
            sub_4312( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U572 = 9;
            sub_4312( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U572 = 10;
            sub_4312( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U572 = 11;
            sub_4312( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U572 = 12;
            sub_4312( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U572 = 13;
            sub_4312( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U572 = 14;
            sub_4312( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U572 = 15;
            sub_4312( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U572 = 16;
            sub_4312( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U572 = 17;
            sub_4312( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U572;
}

void sub_7826(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    sub_7838( ref uVar3, uParam0 );
    g_U95._fU552 = USING_STANDARD_CONTROLS();
    REQUEST_SCRIPT( ref uVar3 );
    sub_8185();
    while (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
    {
        WAIT( 0 );
        REQUEST_SCRIPT( ref uVar3 );
    }
    SET_BITS_IN_RANGE( ref g_U95._fU96, 0, 15, 3 );
    g_U95._fU0 = 1000;
    g_U95._fU504 = 0;
    StrCopy( ref g_U95._fU128, "", 16 );
    g_U560 = uParam0;
    g_U561[uParam0] = START_NEW_SCRIPT( ref uVar3, 16888 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
    return;
}

void sub_7838(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        StrCopy( (uParam0^), "SPcellphoneMain", 32 );
        break;
        case 1:
        StrCopy( (uParam0^), "SPcellphoneCalling", 32 );
        break;
        case 2:
        StrCopy( (uParam0^), "SPcellphoneNetwork", 32 );
        break;
        case 3:
        StrCopy( (uParam0^), "SPcellphoneTutorial", 32 );
        break;
        case 4:
        StrCopy( (uParam0^), "MPcellphoneMain", 32 );
        break;
        case 5:
        StrCopy( (uParam0^), "MPcellphoneCalling", 32 );
        break;
        case 6:
        StrCopy( (uParam0^), "MPcellphoneNetwork", 32 );
        break;
        case 7:
        StrCopy( (uParam0^), "MPcellphoneParty", 32 );
        break;
    }
    return;
}

void sub_8185()
{
    sub_8194();
    return;
}

void sub_8194()
{
    char[16] cVar2;
    char[32] cVar6;
    boolean bVar14;

    StrCopy( ref cVar2, "phone3D_LQ", 16 );
    StrCopy( ref cVar6, "phone3D_dial", 32 );
    g_U95._fU40 = 2;
    sub_8296( "\n Number of phone textures loaded is ", g_U485._fU164 );
    if (g_U485._fU164 == 0)
    {
        if (g_U95._fU40 == 2)
        {
            StrCopy( ref cVar2, "phone3D_HQ", 16 );
        }
        REQUEST_STREAMED_TXD( ref cVar2, 1 );
        sub_1880( "\n requested streamed txd - " );
        sub_1880( "mainTXD" );
        bVar14 = true;
        sub_8431( 1, ref g_U95._fU8 );
        sub_9105();
        CREATE_MOBILE_PHONE( 1 );
        CHANGE_PLAYER_PHONE_MODEL( sub_2787(), -39973879 );
        CHANGE_PLAYER_PHONE_MODEL_OFFSETS( sub_2787(), 0.11300000, 0.00100000, 0.04500000, -0.10000000, -0.50100000, 2.85400000 );
        g_U836 = 1;
        REQUEST_STREAMED_TXD( ref cVar6, 1 );
        bVar14 = false;
        while ((NOT (HAS_STREAMED_TXD_LOADED( ref cVar2 ))) || (NOT bVar14))
        {
            WAIT( 0 );
            if (NOT bVar14)
            {
                if (HAS_STREAMED_TXD_LOADED( ref cVar6 ))
                {
                    bVar14 = true;
                }
            }
        }
        g_U485._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "menuArrow" );
        g_U485._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad1" );
        g_U485._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad2" );
        g_U485._fU0[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad3" );
        g_U485._fU0[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad4" );
        g_U485._fU0[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad5" );
        g_U485._fU0[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad6" );
        g_U485._fU0[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad7" );
        g_U485._fU0[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad8" );
        g_U485._fU0[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad9" );
        g_U485._fU0[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadStar" );
        g_U485._fU0[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad0" );
        g_U485._fU0[12] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadHash" );
        g_U485._fU0[13] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneLeft" );
        g_U485._fU0[14] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneRight" );
        g_U485._fU0[15] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertMsg" );
        g_U485._fU0[16] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertBell" );
        g_U485._fU0[17] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertInvite" );
        g_U485._fU0[18] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "inGTA" );
        if (g_U95._fU40 == 2)
        {
            g_U485._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope1" );
            g_U485._fU0[20] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope2" );
            g_U485._fU164 = 21;
            sub_9967( 0 );
        }
        else
        {
            g_U485._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "background" );
            g_U485._fU164 = 20;
        }
        if (NOT g_U485._fU168)
        {
            if (NOT IS_NETWORK_SESSION())
            {
                g_U485._fU88[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad1" );
                g_U485._fU88[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad2" );
                g_U485._fU88[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad3" );
                g_U485._fU88[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad4" );
                g_U485._fU88[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad5" );
                g_U485._fU88[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad6" );
                g_U485._fU88[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad7" );
                g_U485._fU88[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad8" );
                g_U485._fU88[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad9" );
                g_U485._fU88[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadStar" );
                g_U485._fU88[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad0" );
                g_U485._fU88[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadHash" );
                g_U485._fU144 = GET_TXD( "buttons" );
                if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                {
                    g_U485._fU148[0] = GET_TEXTURE( g_U485._fU144, "A_butt" );
                    g_U485._fU148[1] = GET_TEXTURE( g_U485._fU144, "X_butt" );
                    g_U485._fU148[2] = GET_TEXTURE( g_U485._fU144, "B_butt" );
                }
                else
                {
                    g_U485._fU148[0] = GET_TEXTURE( g_U485._fU144, "p_Cross" );
                    g_U485._fU148[1] = GET_TEXTURE( g_U485._fU144, "p_Square" );
                    g_U485._fU148[2] = GET_TEXTURE( g_U485._fU144, "p_Circle" );
                }
            }
            g_U485._fU88[12] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "background_base" );
            g_U485._fU168 = 1;
        }
        sub_1880( "\n streamed txd's loaded" );
    }
    return;
}

void sub_8296(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8431(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = 0.00000000;
    if (g_U836 == 1)
    {
        fVar4 = 5.50000000;
    }
    switch (uParam0)
    {
        case 1:
        if ((g_U95._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_8574( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        else
        {
            sub_8574( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U95._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_8574( uParam1, 11.50000000, -11.00000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        else
        {
            sub_8574( uParam1, 5.00000000, -7.00000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U95._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_8574( uParam1, 11.50000000, 4.50000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        else
        {
            sub_8574( uParam1, 5.00000000, 8.50000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U95._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_8574( uParam1, 11.50000000, -5.25000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        else
        {
            sub_8574( uParam1, 5.00000000, -0.75000000 + fVar4, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U95._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_8574(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_9105()
{
    SET_MOBILE_PHONE_SCALE( g_U95._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U95._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U95._fU8._fU12 );
    return;
}

void sub_9967(unknown uParam0)
{
    char[32] cVar3;

    StrCopy( ref cVar3, "phone3D_HQ_private", 32 );
    ConcatString(ref cVar3, g_U95._fU396, 32);
    REQUEST_STREAMED_TXD( ref cVar3, 1 );
    while (NOT (HAS_STREAMED_TXD_LOADED( ref cVar3 )))
    {
        WAIT( 0 );
    }
    sub_743( uParam0 );
    g_U528._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "background" );
    g_U528._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "logo" );
    g_U528._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "animated" );
    g_U528._fU16 = 1;
    return;
}

void sub_11293()
{
    int J;
    int I;

    for ( J = 0; J <= (g_U16014 - 1); J++ )
    {
        for ( I = 0; I <= (g_U16014._fU4._fU8._fU4._fU0 - 1); I++ )
        {
            g_U16014[J]._fU8[1]._fU0[I] = 0;
        }
    }
    return;
}

void sub_11759()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar2 = GET_MINUTES_OF_DAY();
    if (l_U15 == iVar2)
    {
        return;
    }
    else
    {
        l_U15 = iVar2;
    }
    if ((iVar2 != 0) AND (iVar2 != 30))
    {
        return;
    }
    uVar3 = GET_CURRENT_DAY_OF_WEEK();
    uVar4 = GET_HOURS_OF_DAY();
    iVar5 = 0;
    iVar6 = -1;
    iVar7 = -1;
    switch (uVar4)
    {
        case 7:
        case 11:
        case 17:
        case 23:
        iVar5 = 1;
        if (iVar2 != 30)
        {
            return;
        }
        break;
        case 6:
        case 10:
        case 16:
        case 22:
        if (iVar2 != 0)
        {
            return;
        }
        break;
        default:
        return;
        break;
    }
    switch (GET_HOURS_OF_DAY())
    {
        case 7:
        case 6:
        iVar6 = 8;
        iVar7 = sub_12047( uVar3, 1 );
        break;
        case 11:
        case 10:
        iVar6 = 12;
        iVar7 = sub_12047( uVar3, 2 );
        break;
        case 17:
        case 16:
        iVar6 = 18;
        iVar7 = sub_12047( uVar3, 3 );
        break;
        case 23:
        case 22:
        iVar6 = 0;
        sub_12248( ref uVar3, 1, 0, 6 );
        iVar7 = sub_12047( uVar3, 0 );
        break;
    }
    if (iVar7 != -1)
    {
        sub_12380( iVar7, iVar6 );
    }
    return;
}

int sub_12047(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_12248(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

void sub_12380(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (iParam0 > 0)
    {
        sub_12415( ref uVar4, "CP_APMNT_", iParam0, -1, -1 );
        PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
        SET_PHONE_HUD_ITEM( 3, ref uVar4, uParam1 );
    }
    return;
}

void sub_12415(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

int sub_12612(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_12682())
        {
            sub_12746( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_12959( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_12746( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_1332( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_1332( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_12682()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_1332( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_12746( I );
            return 1;
        }
    }
    return 0;
}

void sub_12746(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_12831( g_U575 - 1 );
    return;
}

void sub_12831(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_12959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_13024( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_13024(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1332( 0, uParam0 );
        if (iVar14 == (sub_1332( 0, uParam6 )))
        {
            iVar15 = sub_1332( 3, uParam0 );
            if (iVar15 == (sub_1332( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_14007(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U95._fU0 == 1005) AND (g_U95._fU508 >= 4))
    {
        if (g_U95._fU60 == 36)
        {
            return COMPARE_STRING( ref g_U95._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_14110(int iParam0, boolean bParam1, unknown uParam2)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_1880( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_1880( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U95._fU0 == 1005) AND (g_U95._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U95._fU508 >= 4) AND ((NOT g_U95._fU372) || (uParam2)))
            {
                return 1;
            }
        }
        else if (NOT g_U95._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14438(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U95._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_14546( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U95._fU368) == 1)
        {
            StrCopy( ref g_U95._fU224[0], uParam1, 16 );
            StrCopy( ref g_U95._fU224[1], uParam0, 16 );
            sub_15602( uVar23, ref g_U95._fU176 );
            g_U95._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_14546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_1880( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_1880( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2787() )))
    {
        sub_1880( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3277() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3277() ))))
    {
        sub_1880( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_1880( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_15061()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_1880( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_15061()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_15602( uParam0, ref g_U95._fU176 );
    sub_16262( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_16502( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_15061()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_2867())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

void sub_15602(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_16262(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

void sub_16502(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16887(unknown uParam0)
{
    StrCopy( ref g_U95._fU176, uParam0, 32 );
    return;
}

int sub_16944()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_17243(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_17265( uParam0, 0, iParam4 + 0 );
    sub_17265( uParam1, 1, iParam4 + 0 );
    sub_17265( uParam2, 2, iParam4 + 0 );
    sub_17265( uParam3, 3, iParam4 + 0 );
    sub_17265( 0, 4, iParam4 + 0 );
    sub_17265( 1, 5, iParam4 + 0 );
    sub_17265( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_17265(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_17587(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_17754()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}