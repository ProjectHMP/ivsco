void main()
{
    boolean bVar2;
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    int iVar7;
    int iVar8;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 225;
    l_U173 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U256 = 0;
    l_U259 = GET_CURRENT_LANGUAGE();
    bVar2 = false;
    bVar3 = false;
    l_U174 = 1;
    g_U94._fU540 = 0;
    SET_SLEEP_MODE_ACTIVE( 0 );
    g_U94._fU508 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    g_U558 = 1;
    PRINTSTRING( "\n cellphone3Dstructure.multipleChoiceNumber is " );
    PRINTINT( g_U94._fU424 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_213( ref l_U149, 1 );
        g_U94._fU0 = 1000;
        g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        sub_1023( "\n------------------------------------------" );
        sub_1023( "\n callStatus = CALL_ENDED" );
        sub_1023( "\n------------------------------------------" );
        g_U94._fU424 = -2;
        STOP_MOBILE_PHONE_RINGING();
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
        DESTROY_MOBILE_PHONE();
        TERMINATE_THIS_SCRIPT();
    }
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
    switch (g_U829)
    {
        case 0:
        g_U94._fU496 = GET_IS_HIDEF();
        break;
        case 1:
        g_U94._fU496 = 1;
        break;
        case 2:
        g_U94._fU496 = 0;
        break;
    }
    GET_SCREEN_RESOLUTION( ref iVar7, ref iVar8 );
    if ((iVar7 * iVar8) <= 480000)
    {
        g_U94._fU496 = 0;
        g_U94._fU500 = 0;
    }
    if (g_U94._fU380)
    {
        sub_1354( ref l_U114, ref l_U101 );
        sub_2579( ref l_U114 );
    }
    l_U171 = 1;
    g_U94._fU116 = 1;
    SCRIPT_IS_USING_MOBILE_PHONE( 1 );
    SETTIMERA( 0 );
    g_U94._fU504 = 0;
    if (g_U94._fU0 == 1000)
    {
        sub_213( ref l_U149, 1 );
        sub_3461();
        sub_3650();
    }
    else
    {
        l_U149._fU0 = 1;
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT sub_4117())
        {
            if ((NOT g_U94._fU504) AND (NOT l_U256))
            {
                g_U94._fU504 = 1;
                ABORT_SCRIPTED_CONVERSATION( 0 );
                if ((bVar2) || (g_U94._fU0 == 1004))
                {
                    g_U15862[g_U94._fU60]._fU196._fU24 = 2;
                }
                else if (g_U94._fU364 == 0)
                {
                    g_U15862[g_U94._fU60]._fU196._fU24 = 6;
                }
                else if (l_U173)
                {
                    g_U15862[g_U94._fU60]._fU196._fU24 = 4;
                }
                else
                {
                    g_U15862[g_U94._fU60]._fU196._fU24 = 5;
                };;;
                STOP_MOBILE_PHONE_RINGING();
                sub_5232( 1010 );
            }
        }
        else if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4129() ))
        {
            switch (g_U94._fU0)
            {
                case 1010:
                case 1000: break;
                default:
                if (IS_CONTROL_JUST_PRESSED( 0, 43 ))
                {
                    if ((IS_CHAR_IN_ANY_CAR( sub_4553() )) AND (NOT sub_5349()))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4553(), ref uVar4 );
                        GET_CAR_DOOR_LOCK_STATUS( uVar4, ref uVar5 );
                        switch (uVar5)
                        {
                            case 4: break;
                            default:
                            GET_CAR_SPEED( uVar4, ref fVar6 );
                            if ((fVar6 >= -10.00000000) AND (fVar6 <= 10.00000000))
                            {
                                TASK_LEAVE_ANY_CAR( sub_4553() );
                                l_U256 = 1;
                            }
                            break;
                        }
                    }
                }
                break;
            }
        }
        switch (g_U94._fU0)
        {
            case 1000:
            if (((g_U94._fU48) AND (NOT g_U94._fU376)) AND (NOT bVar2))
            {
                PLAY_AUDIO_EVENT( "MOBILE_PRERING" );
                bVar2 = true;
            }
            else if ((bVar2) AND (TIMERA() < 1000))
            {
                break;
            }
            bVar2 = false;
            if (g_U94._fU48)
            {
                sub_5232( 1004 );
            }
            else if (g_U94._fU52)
            {
                sub_5232( 1005 );
            }
            else
            {
                SCRIPT_ASSERT( "SL : cellphoneCALLING loaded not for calling or ringing" );
            };;;
            break;
            case 1004:
            if (((((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "E2PANS" ))) AND (COMPARE_STRING( ref g_U94._fU176, "JIM" ))) AND (COMPARE_STRING( ref g_U94._fU144, "E1MFAU" ))) AND (g_U15862[g_U94._fU60]._fU196._fU24 == 0)) AND (IS_EPISODIC_DISC_BUILD()))
            {
                PRINT_HELP( "E2PANS" );
            }
            sub_5928();
            if (sub_17097( ref l_U149, 2 ))
            {
                if (NOT l_U255)
                {
                    if ((g_U94._fU376) || (g_U94._fU532))
                    {
                        if (TIMERB() >= g_U94._fU80)
                        {
                            INCREMENT_INT_STAT_NO_MESSAGE( 302, 1 );
                            STOP_MOBILE_PHONE_RINGING();
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "E2PANS" ))
                            {
                                CLEAR_HELP();
                            }
                            g_U15862[g_U94._fU60]._fU196._fU24 = 3;
                            SETTIMERA( 0 );
                            TASK_USE_MOBILE_PHONE( sub_4553(), 1 );
                            l_U255 = 1;
                        }
                    }
                    else if (TIMERB() > 350)
                    {
                        if (TIMERB() < (g_U94._fU80 + 350))
                        {
                            switch (sub_18333( g_U94._fU524 ))
                            {
                                case 6:
                                INCREMENT_INT_STAT_NO_MESSAGE( 302, 1 );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "E2PANS" ))
                                {
                                    CLEAR_HELP();
                                }
                                STOP_MOBILE_PHONE_RINGING();
                                g_U15862[g_U94._fU60]._fU196._fU24 = 3;
                                SETTIMERA( 0 );
                                TASK_USE_MOBILE_PHONE( sub_4553(), 1 );
                                l_U255 = 1;
                                break;
                                case 7:
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "E2PANS" ))
                                {
                                    CLEAR_HELP();
                                }
                                STOP_MOBILE_PHONE_RINGING();
                                sub_5232( 1010 );
                                g_U15862[g_U94._fU60]._fU196._fU24 = 2;
                                break;
                            }
                        }
                        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "E2PANS" ))
                        {
                            CLEAR_HELP();
                        }
                        STOP_MOBILE_PHONE_RINGING();
                        sub_5232( 1010 );
                        g_U15862[g_U94._fU60]._fU196._fU24 = 1;;
                    }
                }
                else if (sub_21668())
                {
                    if (g_U8946 == 5)
                    {
                        if (NOT IS_MISSION_COMPLETE_PLAYING())
                        {
                            sub_5232( 1007 );
                        }
                    }
                    else if (g_U8946 != 4)
                    {
                        g_U15862[g_U94._fU60]._fU196._fU24 = 2;
                        sub_5232( 1010 );
                    }
                    else
                    {
                        sub_1023( "\n Phone is still trying to stream in text" );
                    }
                }
                else
                {
                    sub_1023( "\n Player dosent have the phone too his head" );
                }
            }
            else
            {
                SETTIMERB( 0 );
            }
            break;
            case 1005:
            sub_5928();
            if (sub_17097( ref l_U149, 2 ))
            {
                if (NOT g_U94._fU56)
                {
                    switch (sub_18333( g_U94._fU524 ))
                    {
                        case 7:
                        STOP_MOBILE_PHONE_RINGING();
                        sub_5232( 1010 );
                        g_U15862[g_U94._fU60]._fU196._fU24 = 2;
                        sub_1023( "\n------------------------------------------" );
                        sub_1023( "\n callStatus = CALL_HANG_UP" );
                        sub_1023( "\n------------------------------------------" );
                        break;
                        default:
                    }
                }
                if ((sub_21668()) AND (g_U94._fU508 >= 4))
                {
                    if (NOT l_U255)
                    {
                        if (NOT g_U94._fU384)
                        {
                            if (TIMERB() >= 2000)
                            {
                                l_U255 = 1;
                            }
                        }
                    }
                    else if (g_U94._fU368)
                    {
                        if (NOT g_U94._fU372)
                        {
                            StrCopy( ref l_U188[0], 4, g_U94._fU176, 8);
                            if (NOT (sub_22493( ref g_U94._fU224[1], ref g_U94._fU224[0], 1 )))
                            {
                                STOP_MOBILE_PHONE_RINGING();
                                if (g_U94._fU60 != 21)
                                {
                                    g_U15862[g_U94._fU60]._fU196._fU24 = 6;
                                    sub_1023( "\n------------------------------------------" );
                                    sub_1023( "\n callStatus = CALL_ENDED" );
                                    sub_1023( "\n------------------------------------------" );
                                }
                                sub_5232( 1010 );
                            }
                            StrCopy( ref g_U94._fU176, 8, l_U188[0], 4);
                        }
                        else if (g_U8946 == 5)
                        {
                            if (NOT IS_MISSION_COMPLETE_PLAYING())
                            {
                                STOP_MOBILE_PHONE_RINGING();
                                SETTIMERA( 0 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 301, 1 );
                                g_U94._fU368 = 0;
                                g_U15862[g_U94._fU60]._fU196._fU24 = 3;
                                sub_1023( "\n------------------------------------------" );
                                sub_1023( "\n callStatus = CALL_IN_CALL" );
                                sub_1023( "\n------------------------------------------" );
                                sub_5232( 1007 );
                            }
                        }
                        else if (g_U8946 != 4)
                        {
                            STOP_MOBILE_PHONE_RINGING();
                            if (g_U94._fU60 != 21)
                            {
                                g_U15862[g_U94._fU60]._fU196._fU24 = 2;
                                sub_1023( "\n------------------------------------------" );
                                sub_1023( "\n callStatus = CALL_HANG_UP" );
                                sub_1023( "\n------------------------------------------" );
                            }
                            sub_5232( 1010 );
                            sub_1023( "\n Putting phone away as it does not think text is streaming for the phone" );
                        };;;
                    }
                    else
                    {
                        STOP_MOBILE_PHONE_RINGING();
                        SETTIMERA( 0 );
                        sub_25418();
                        l_U257 = 1;
                        l_U258 = GET_SOUND_ID();
                        g_U15862[g_U94._fU60]._fU196._fU24 = 3;
                        sub_5232( 1007 );
                    }
                }
                else
                {
                    SETTIMERB( 0 );
                    if (sub_27373())
                    {
                        if (NOT sub_21668())
                        {
                            ;
                        }
                        if (g_U94._fU508 != 4)
                        {
                            ;
                        }
                    }
                }
            }
            break;
            case 1007:
            sub_17097( ref l_U149, 2 );
            sub_5928();
            if (NOT sub_21668())
            {
                break;
            }
            g_U8946 = 6;
            if (l_U257)
            {
                if ((TIMERB() >= 2500) || ((sub_18333( g_U94._fU524 )) == 7))
                {
                    STOP_SOUND( l_U258 );
                    RELEASE_SOUND_ID( l_U258 );
                    sub_5232( 1010 );
                }
            }
            else if (NOT IS_MOBILE_PHONE_CALL_ONGOING())
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 69, TIMERB() );
                if (g_U94._fU364)
                {
                    sub_5232( 1008 );
                    g_U94._fU364 = 0;
                }
                else if (g_U94._fU420)
                {
                    sub_5232( 1009 );
                    g_U94._fU420 = 0;
                }
                else if ((g_U15862[g_U94._fU60]._fU196._fU24 != 4) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 5))
                {
                    g_U15862[g_U94._fU60]._fU196._fU24 = 6;
                }
                PLAY_SOUND_FRONTEND( -1, "SFX_PHONE_REMOTE_HANG_UP_CLICK" );
                sub_5232( 1010 );;;
            }
            else if (g_U94._fU420)
            {
                sub_5232( 1009 );
                g_U94._fU420 = 0;
            }
            if (NOT g_U94._fU376)
            {
                switch (sub_18333( g_U94._fU524 ))
                {
                    case 1:
                    SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
                    break;
                    case 7:
                    ABORT_SCRIPTED_CONVERSATION( 0 );
                    if (g_U94._fU364)
                    {
                        sub_5232( 1008 );
                        g_U94._fU364 = 0;
                    }
                    else
                    {
                        PLAY_SOUND_FRONTEND( -1, "FRONTEND_GAME_PHONE_DIAL_HANG_UP" );
                        sub_5232( 1010 );
                    }
                    break;
                }
            };;;
            break;
            case 1008:
            sub_5928();
            sub_17097( ref l_U149, 2 );
            if (NOT l_U255)
            {
                switch (sub_18333( g_U94._fU524 ))
                {
                    case 6:
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_ANSWERED_YES" );
                    sub_1023( "\n------------------------------------------" );
                    g_U15862[g_U94._fU60]._fU196._fU24 = 4;
                    g_U94._fU364 = 0;
                    sub_28248( ref g_U94._fU260, ref g_U94._fU144, 1 );
                    l_U255 = 1;
                    l_U173 = 1;
                    break;
                    case 7:
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_ANSWERED_NO" );
                    sub_1023( "\n------------------------------------------" );
                    g_U15862[g_U94._fU60]._fU196._fU24 = 5;
                    g_U94._fU364 = 0;
                    PRINTSTRING( "\n loading from block " );
                    PRINTSTRING( ref g_U94._fU144 );
                    sub_28248( ref g_U94._fU312, ref g_U94._fU144, 1 );
                    l_U255 = 1;
                    l_U173 = 0;
                    break;
                }
            }
            else if (g_U8946 == 5)
            {
                if (NOT IS_MISSION_COMPLETE_PLAYING())
                {
                    sub_5232( 1007 );
                }
            }
            else if (g_U8946 != 4)
            {
                sub_5232( 1010 );
            };;;
            break;
            case 1009:
            sub_5928();
            if (IS_SCRIPTED_CONVERSATION_ONGOING())
            {
                g_U94._fU424 = -1;
                sub_5232( 1010 );
            }
            sub_21668();
            if (sub_17097( ref l_U149, 4 ))
            {
                if (g_U94._fU424 == 0)
                {
                    bVar3 = false;
                    if (NOT l_U256)
                    {
                        switch (sub_18333( g_U94._fU524 ))
                        {
                            case 3:
                            if (l_U174 < 3)
                            {
                                l_U174++;
                            }
                            break;
                            case 2:
                            if (l_U174 > 1)
                            {
                                l_U174--;
                            }
                            break;
                            case 6:
                            bVar3 = true;
                            break;
                            case 7:
                            g_U94._fU424 = -1;
                            ABORT_SCRIPTED_CONVERSATION( 0 );
                            sub_5232( 1010 );
                            break;
                            case 9:
                            l_U174 = 1;
                            bVar3 = true;
                            break;
                            case 10:
                            l_U174 = 2;
                            bVar3 = true;
                            break;
                            case 11:
                            l_U174 = 3;
                            bVar3 = true;
                            break;
                        }
                        if (bVar3)
                        {
                            if (IS_MOBILE_PHONE_CALL_ONGOING())
                            {
                                ABORT_SCRIPTED_CONVERSATION( 0 );
                            }
                            ConcatString(ref g_U94._fU128, l_U174, 16);
                            sub_13025( l_U174, 1 );
                            g_U94._fU424 = l_U174;
                        }
                    }
                }
                else if (g_U94._fU424 == -1)
                {
                    if (NOT IS_MISSION_COMPLETE_PLAYING())
                    {
                        sub_5232( 1007 );
                    }
                }
            }
            sub_9308( l_U174 );
            sub_29174( l_U174 );
            break;
            case 1010:
            if (NOT sub_5349())
            {
                TASK_USE_MOBILE_PHONE( sub_4553(), 0 );
            }
            g_U94._fU0 = 1001;
            case 1001:
            if (sub_17097( ref l_U149, 1 ))
            {
                g_U94._fU372 = 0;
                g_U94._fU368 = 0;
                g_U94._fU56 = 0;
                g_U94._fU0 = 1000;
                switch (g_U15862[g_U94._fU60]._fU196._fU24)
                {
                    case 4:
                    g_U15862[g_U94._fU60]._fU196._fU24 = 7;
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_ENDED_YES" );
                    sub_1023( "\n------------------------------------------" );
                    break;
                    case 5:
                    g_U15862[g_U94._fU60]._fU196._fU24 = 8;
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_ENDED_NO" );
                    sub_1023( "\n------------------------------------------" );
                    break;
                    case 3:
                    if (g_U94._fU364)
                    {
                        g_U15862[g_U94._fU60]._fU196._fU24 = 8;
                        sub_1023( "\n------------------------------------------" );
                        sub_1023( "\n callStatus = CALL_ENDED_NO" );
                        sub_1023( "\n------------------------------------------" );
                    }
                    else
                    {
                        g_U15862[g_U94._fU60]._fU196._fU24 = 6;
                        sub_1023( "\n------------------------------------------" );
                        sub_1023( "\n callStatus = CALL_ENDED" );
                        sub_1023( "\n------------------------------------------" );
                    }
                    break;
                    case 2:
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_HANG_UP" );
                    sub_1023( "\n------------------------------------------" );
                    break;
                    case 6:
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_ENDED" );
                    sub_1023( "\n------------------------------------------" );
                    break;
                    case 1:
                    sub_1023( "\n------------------------------------------" );
                    sub_1023( "\n callStatus = CALL_NOT_ANSWERED" );
                    sub_1023( "\n------------------------------------------" );
                    break;
                }
                SCRIPT_IS_USING_MOBILE_PHONE( 0 );
                STOP_MOBILE_PHONE_RINGING();
                DESTROY_MOBILE_PHONE();
                UNREGISTER_SCRIPT_WITH_AUDIO();
                g_U94._fU532 = 0;
                g_U94._fU376 = 0;
                g_U94._fU380 = 1;
                g_U94._fU384 = 0;
                g_U8946 = 0;
                g_U94._fU512 = nil;
                g_U94._fU508 = 0;
                g_U94._fU424 = -2;
                TERMINATE_THIS_SCRIPT();
            }
            break;
        }
    }
    return;
}

void sub_213(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_237( uParam1, ref g_U94._fU8 );
    sub_867();
    return;
}

void sub_237(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_354( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_354( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_354( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_354( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_354( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_354( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_354( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_354( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_354(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_867()
{
    SET_MOBILE_PHONE_SCALE( g_U94._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U94._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U94._fU8._fU12 );
    return;
}

void sub_1023(unknown uParam0)
{
    return;
}

void sub_1354(int iParam0, int iParam1)
{
    sub_1367( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        g_U94._fU564 = 2;
    }
    switch (g_U94._fU40)
    {
        case 2:
        sub_1474( iParam1 + 0, 90, 110, 110, 255 );
        sub_1474( iParam1 + 4, 0, 0, 0, 205 );
        sub_1474( iParam1 + 8, 0, 0, 0, 140 );
        sub_1474( iParam1 + 12, 0, 0, 0, 140 );
        sub_1474( iParam1 + 16, 0, 0, 0, 255 );
        sub_1474( iParam1 + 20, 0, 0, 0, 255 );
        sub_1474( iParam1 + 24, 0, 0, 0, 255 );
        sub_1474( iParam1 + 28, 0, 0, 0, 255 );
        sub_1474( iParam1 + 40, 0, 0, 0, 255 );
        sub_1474( iParam1 + 44, 255, 255, 255, 255 );
        sub_1474( iParam1 + 48, 255, 255, 255, 255 );
        sub_1474( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_1474( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_1474( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_1474( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_1474( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_1474( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;
        default:
        sub_1474( iParam1 + 0, 90, 110, 110, 255 );
        sub_1474( iParam1 + 4, 20, 30, 30, 255 );
        sub_1474( iParam1 + 8, 40, 60, 60, 255 );
        sub_1474( iParam1 + 12, 30, 50, 50, 255 );
        sub_1474( iParam1 + 16, 40, 60, 60, 255 );
        sub_1474( iParam1 + 20, 40, 60, 60, 255 );
        sub_1474( iParam1 + 24, 40, 60, 60, 255 );
        sub_1474( iParam1 + 28, 40, 60, 60, 255 );
        sub_1474( iParam1 + 32, 80, 100, 100, 255 );
        sub_1474( iParam1 + 36, 40, 60, 60, 255 );
        sub_1474( iParam1 + 40, 0, 0, 0, 255 );
        sub_1474( iParam1 + 44, 255, 255, 255, 255 );
        sub_1474( iParam1 + 48, 255, 255, 255, 255 );
        sub_1474( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_1474( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_1474( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_1474( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_1474( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_1474( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_1367(int iParam0, unknown uParam1)
{
    sub_1376();
    switch (g_U94._fU40)
    {
        case 2:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_1474( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_1474( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_1474( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_1474( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_1474( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_1474( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_1474( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_1474( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_1376()
{
    g_U94._fU560 = 17;
    g_U94._fU556 = 16;
    return;
}

void sub_1474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_2579(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_2653( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2653( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_2653( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2653( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_2653( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_2653( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2653( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2653( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2653( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2653( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2653( iParam0 + 132, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_2653( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2653( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2653( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_2653( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_2653( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_2653( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2653( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2653( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2653( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2653( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2653( iParam0 + 132, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2653( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_2653(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3461()
{
    sub_1023( "\n == Mobile Phone Created" );
    GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
    while (g_U94._fU44 == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
        sub_1023( "\n == Getting Render Target" );
    }
    sub_1023( "\n == Mobile Phone Loaded" );
    g_U94._fU8._fU24 = 324.00000000;
    return;
}

void sub_3650()
{
    int I;

    g_U526._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3686( I, 0 );
    }
    return;
}

void sub_3686(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar4 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar5 );
    switch (iParam0 / 2)
    {
        case 0:
        fVar6 = 0.10000000 + (uVar4 * 0.20000000);
        fVar8 = 0.20000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01400000 + (uVar5 * 0.00050000);
        break;
        case 1:
        fVar6 = 0.20000000 + (uVar4 * 0.15000000);
        fVar8 = 0.50000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01100000 + (uVar5 * 0.00050000);
        break;
        case 2:
        fVar6 = 0.40000000 + (uVar4 * 0.05000000);
        fVar8 = 0.90000000 + (uVar5 * 0.05000000);
        fVar9 = -0.00800000 + (uVar5 * 0.00050000);
        break;
    }
    if (bParam1)
    {
        fVar7 = 1.00000000 + (fVar8 * 0.50000000);
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.20000000, 0.81000000, ref fVar7 );
    }
    sub_3989( iParam0, fVar6, fVar7, fVar8, fVar8, fVar9 );
    return;
}

void sub_3989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_2653( ref g_U526._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_2653( ref g_U526._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U526._fU20[uParam0]._fU16 = uParam5;
    return;
}

int sub_4117()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4129() )))
    {
        sub_1023( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1023( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_1023( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_1023( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4129() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4553() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4553(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1023( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4553() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1023( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_1023( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4129() )))
    {
        sub_1023( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_4129()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4553()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5232(unknown uParam0)
{
    l_U171 = 1;
    g_U94._fU0 = uParam0;
    return;
}

int sub_5349()
{
    if (IS_CHAR_IN_ANY_CAR( sub_4553() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4553() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5928()
{
    if (g_U94._fU380)
    {
        SET_TEXT_RENDER_ID( g_U94._fU44 );
    }
    if (l_U171)
    {
        sub_5977();
    }
    if (g_U94._fU40 == 2)
    {
        sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U101._fU8 );
    }
    if (sub_7901( ref l_U259 ))
    {
        l_U114._fU116 = 1678728908;
        l_U114._fU128 = 1678728908;
    }
    switch (g_U94._fU0)
    {
        case 1004:
        if (g_U94._fU380)
        {
            sub_8067( 1, l_U101, 1, 0 );
            if (g_U94._fU40 == 2)
            {
                sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U101._fU8 );
            }
            if (g_U94._fU500)
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            if (NOT g_U94._fU532)
            {
                sub_10380( ref l_U114, "CP_NAV_IGNORE", "CP_ANSWER", ref l_U101 );
            }
            else
            {
                sub_10380( ref l_U114, "BLANK", "BLANK", ref l_U101 );
            }
            sub_11402( ref l_U114._fU0[0], ref l_U101 );
        }
        break;
        case 1005:
        case 1006:
        switch (g_U94._fU508)
        {
            case 0:
            if (g_U94._fU60 == 21)
            {
                l_U177 = {g_U94._fU128};
            }
            else
            {
                string(ref l_U177, g_U15862[g_U94._fU60]._fU196._fU28 / 1000, 16);
                ConcatString(ref l_U177, "5550", 16);
                ConcatString(ref l_U177, g_U15862[g_U94._fU60]._fU196._fU28 mod 1000, 16);
            }
            l_U186 = GET_LENGTH_OF_LITERAL_STRING( ref l_U177 );
            l_U187 = 0;
            g_U94._fU508 = 1;
            break;
            case 1:
            StrCopy( ref l_U181, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref l_U177, l_U187 + 1 ), 16 );
            if (STRING_TO_INT( ref l_U181, ref l_U185 ))
            {
                ;
            }
            l_U185 = l_U185 mod 10;
            sub_13025( l_U185, 1 );
            SETTIMERA( 0 );
            l_U187++;
            if (l_U187 >= l_U186)
            {
                g_U94._fU508 = 3;
            }
            else
            {
                g_U94._fU508 = 2;
            }
            break;
            case 2:
            if (TIMERA() >= 60)
            {
                g_U94._fU508 = 1;
            }
            break;
            case 3:
            if (TIMERA() >= 800)
            {
                START_MOBILE_PHONE_CALLING();
                g_U94._fU508 = 4;
            }
            break;
        }
        if (g_U94._fU380)
        {
            sub_8067( 1, l_U101, 1, 0 );
            if (g_U94._fU40 == 2)
            {
                sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U101._fU8 );
            }
            sub_6822( 0, 0, ref l_U114._fU0[0], "CP_INFO_CALLING", 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            if (g_U94._fU60 == 21)
            {
                sub_6822( 0, 5, ref l_U114._fU0[0], ref g_U94._fU128, 0.90000000, 0.70000000, 0.10000000, 0.90000000, 1, 0, 0, 0, 0, 1 );
            }
            else if (g_U94._fU500)
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.64000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.50000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            if (g_U94._fU56)
            {
                sub_10380( ref l_U114, "BLANK", "BLANK", ref l_U101 );
            }
            else
            {
                sub_10380( ref l_U114, "CP_NAV_HANG_UP", "BLANK", ref l_U101 );
            }
            sub_11402( ref l_U114._fU0[0], ref l_U101 );
        }
        break;
        case 1007:
        if (g_U94._fU380)
        {
            sub_8067( 1, l_U101, 1, 0 );
            if (g_U94._fU40 == 2)
            {
                sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U101._fU8 );
            }
            if (g_U94._fU40 != 2)
            {
                if (g_U94._fU60 == 21)
                {
                    sub_6822( 0, 5, ref l_U114._fU0[0], ref g_U94._fU128, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 1, 0, 0, 0, 0, 1 );
                }
                else
                {
                    sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                }
                sub_11991( ref l_U114._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            else if (g_U94._fU60 == 21)
            {
                sub_6822( 0, 5, ref l_U114._fU0[0], ref g_U94._fU128, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 1, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref l_U167, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            sub_11991( ref l_U114._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );;
            sub_10380( ref l_U114, "CP_NAV_HANG_UP", "BLANK", ref l_U101 );
            sub_11402( ref l_U114._fU0[0], ref l_U101 );
        }
        break;
        case 1008:
        if (g_U94._fU380)
        {
            sub_8067( 1, l_U101, 1, 0 );
            sub_15121( ref l_U114._fU0[0], ref l_U101, ref l_U243, ref l_U188, 0, ref l_U201, ref l_U202, l_U204 );
            sub_16215( ref l_U205, ref l_U101, l_U205._fU60 );
            sub_10380( ref l_U114, "CP_NAV_NO", "CP_NAV_YES", ref l_U101 );
            sub_11402( ref l_U114._fU0[0], ref l_U101 );
        }
        break;
        case 1009:
        if (g_U94._fU380)
        {
            sub_8067( 1, l_U101, 1, 0 );
            if (g_U94._fU40 == 2)
            {
                sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U101._fU8 );
            }
            if (g_U94._fU40 == 1)
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref g_U94._fU432[l_U174 - 1], 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                sub_11991( ref l_U114._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            else
            {
                sub_6822( 0, 0, ref l_U114._fU0[0], ref g_U94._fU432[l_U174 - 1], 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                sub_11991( ref l_U114._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            sub_10380( ref l_U114, "CP_NAV_HANG_UP", "CP_NAV_SELECT", ref l_U101 );
            sub_11402( ref l_U114._fU0[0], ref l_U101 );
        }
        break;
    }
    return;
}

void sub_5977()
{
    g_U94._fU528 = 0;
    switch (g_U94._fU0)
    {
        case 1004:
        if (g_U15862[g_U94._fU60]._fU196._fU0)
        {
            StrCopy( ref l_U167, "CONT_", 16 );
            ConcatString(ref l_U167, ref g_U15862[g_U94._fU60]._fU196._fU8, 16);
        }
        else
        {
            StrCopy( ref l_U167, "CONT_UN", 16 );
        }
        switch (g_U94._fU112)
        {
            case 0:
            case 1:
            case 4:
            START_CUSTOM_MOBILE_PHONE_RINGING( g_U94._fU108 );
            break;
        }
        break;
        case 1005:
        g_U94._fU508 = 0;
        if (g_U94._fU60 != 21)
        {
            if (g_U15862[g_U94._fU60]._fU196._fU0)
            {
                StrCopy( ref l_U167, "CONT_", 16 );
                ConcatString(ref l_U167, ref g_U15862[g_U94._fU60]._fU196._fU8, 16);
            }
            else
            {
                StrCopy( ref l_U167, "CONT_UN", 16 );
            }
        }
        else if (g_U94._fU124)
        {
            l_U149._fU0 = 3;
        }
        break;
        case 1007:
        if (NOT l_U257)
        {
            if (g_U8946 != 1)
            {
                sub_6419( "\n CELLPHONE PED VOICE IS ", ref g_U94._fU176 );
            }
            START_MOBILE_PHONE_CALL( sub_4553(), ref g_U94._fU160, g_U94._fU512, ref g_U94._fU176, 1, 1 );
        }
        else
        {
            PLAY_SOUND_FRONTEND( l_U258, "PHONE_ENGAGED_TONES" );
        }
        SETTIMERB( 0 );
        break;
        case 1008:
        l_U188[0] = {g_U94._fU208};
        StrCopy( ref l_U188[1], "", 16 );
        StrCopy( ref l_U188[2], "", 16 );
        sub_6632( ref l_U114._fU0[0], ref l_U188, 0, ref l_U204, ref l_U203, ref l_U201, ref l_U202, ref l_U205._fU44, ref l_U205._fU60, ref l_U205._fU56, ref l_U205._fU52 );
        break;
        case 1009:
        g_U94._fU424 = 0;
        break;
    }
    l_U255 = 0;
    l_U171 = 0;
    return;
}

void sub_6419(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6632(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;

    if (g_U94._fU500)
    {
        uVar13._fU0 = 0.08000000;
        uVar13._fU4 = 0.10000000;
        uVar15._fU0 = 0.08000000;
        uVar15._fU4 = 0.92000000;
        iVar17 = 6;
    }
    else if (g_U94._fU40 == 2)
    {
        uVar13._fU0 = 0.10000000;
        uVar15._fU0 = 0.10000000;
    }
    else
    {
        uVar13._fU0 = 0.05000000;
        uVar15._fU0 = 0.05000000;
    }
    uVar13._fU4 = 0.10000000;
    uVar15._fU4 = 0.90000000;
    iVar17 = 5;;
    sub_6822( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
    (uParam4^) = GET_NUMBER_LINES_WITH_SUBSTRINGS( uVar13._fU0, uVar13._fU4, ref (uParam1^)[0], ref (uParam1^)[1], ref (uParam1^)[2] );
    (uParam5^) = 0;
    (uParam7^) = 0;
    (uParam8^) = 0;
    if (bParam2)
    {
        g_U94._fU528 = 1;
        (uParam3^) = (uParam4^) + iVar17;
    }
    else
    {
        (uParam3^) = (uParam4^);
    }
    if ((uParam3^) <= iVar17)
    {
        (uParam6^) = (uParam4^) - 1;
        (uParam10^) = 0;
    }
    else
    {
        (uParam6^) = iVar17 - 1;
        (uParam10^) = 1;
        (uParam9^) = 0.72000000 / ((uParam3^) - (iVar17 - 1));
    }
    return;
}

void sub_6822(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
{
    float fVar16;
    float fVar17;

    fVar16 = ref iParam2->_fU0->_fU0;
    fVar17 = ref iParam2->_fU0->_fU4;
    if ((IS_JAPANESE_VERSION()) AND (iParam13 == 1))
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    switch (uParam0)
    {
        case 0:
        if (sub_6917( uParam3 ))
        {
            fVar16 *= 0.80000000;
            fVar17 *= 0.80000000;
        }
        SET_TEXT_SCALE( fVar16, fVar17 * 0.65000000 );
        fParam5 *= 0.65000000;
        break;
        case 1:
        SET_TEXT_SCALE( ref iParam2->_fU0->_fU0, (ref iParam2->_fU0->_fU4) * 0.35000000 );
        fParam5 *= 0.35000000;
        break;
    }
    switch (uParam8)
    {
        case 1:
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        break;
        case 2:
        SET_TEXT_CENTRE( 1 );
        break;
    }
    SET_TEXT_WRAP( uParam6, uParam7 );
    SET_TEXT_COLOUR( sub_7153( iParam2 + 8, 0 ), sub_7153( iParam2 + 8, 1 ), sub_7153( iParam2 + 8, 2 ), sub_7153( iParam2 + 8, 3 ) );
    SET_TEXT_DROPSHADOW( uParam12, 0, 0, 0, 255 );
    switch (uParam1)
    {
        case 2:
        case 1: SET_TEXT_LINE_DISPLAY( 0, 0 );
        case 0:
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 4:
        SET_TEXT_LINE_DISPLAY( uParam9, uParam10 );
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 5:
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_STRING( uParam4, fParam5, "STRING", uParam3 );
        SET_TEXT_USE_UNDERSCORE( 0 );
        break;
        case 6:
        DISPLAY_TEXT_WITH_NUMBER( uParam4, fParam5, uParam3, uParam11 );
        break;
    }
    return;
}

int sub_6917(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_7153(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

void sub_7750(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_7153( ref uParam5, 0 ), sub_7153( ref uParam5, 1 ), sub_7153( ref uParam5, 2 ), sub_7153( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_7153( ref uParam5, 0 ), sub_7153( ref uParam5, 1 ), sub_7153( ref uParam5, 2 ), sub_7153( ref uParam5, 3 ) );
    }
    return;
}

int sub_7901(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_8067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (g_U94._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_8139( 0, g_U526._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_8297( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U831 );
        }
        sub_8408( uParam0 );
        if (bParam15)
        {
            if (NOT g_U94._fU540)
            {
                sub_8139( 0, g_U526._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_7750( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((g_U94._fU0 == 1002) AND (NOT g_U94._fU540))
        {
            sub_8911( 0, g_U484._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12, 0 );
        }
        break;
    }
    switch (g_U94._fU0)
    {
        case 1003:
        case 1009: break;
        default:
        if (NOT g_U94._fU528)
        {
            sub_9308( 0 );
        }
        break;
    }
    return;
}

void sub_8139(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_8297(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, uParam5, uParam6, uParam7, uParam8 );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, uParam5, uParam6, uParam7, uParam8 );
    }
    return;
}

void sub_8408(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U526._fU124 > 0)
        {
            g_U526._fU124 -= 25;
            sub_8498( ref g_U526._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_8596();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U526._fU124 < 255)
            {
                g_U526._fU124 += 25;
                sub_8498( ref g_U526._fU124, 0, 255 );
            }
        }
        sub_1474( ref uVar4, 255, 255, 255, g_U526._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_8911( 0, g_U526._fU0[2], g_U526._fU20[I]._fU0._fU0, g_U526._fU20[I]._fU0._fU4, g_U526._fU20[I]._fU8._fU0, g_U526._fU20[I]._fU8._fU4, uVar4, 0 );
        }
        break;
    }
    return;
}

int sub_8498(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    };;;
    return 0;
}

void sub_8596()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U526._fU20[I]._fU0._fU4 += g_U526._fU20[I]._fU16;
        if ((g_U526._fU20[I]._fU0._fU4 + (g_U526._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3686( I, 1 );
        }
    }
    return;
}

void sub_8911(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, uParam7, sub_7153( ref uParam6, 0 ), sub_7153( ref uParam6, 1 ), sub_7153( ref uParam6, 2 ), sub_7153( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, uParam7, sub_7153( ref uParam6, 0 ), sub_7153( ref uParam6, 1 ), sub_7153( ref uParam6, 2 ), sub_7153( ref uParam6, 3 ) );
    }
    return;
}

void sub_9308(int iParam0)
{
    int I;

    sub_8297( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if ((NOT IS_USING_CONTROLLER()) AND (iParam0 > 0))
    {
        iParam0 = 0;
    }
    for ( I = 1; I <= 12; I++ )
    {
        if (iParam0 != I)
        {
            if (g_U94._fU496)
            {
                sub_9479( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 200, 200, 200, 255, 0 );
            }
            else
            {
                sub_8139( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        if (iParam0 != -1)
        {
            sub_9479( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255, 0 );
        }
        else
        {
            sub_9479( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255, 0 );
        }
        if (iParam0 != -2)
        {
            sub_9479( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255, 0 );
        }
        else
        {
            sub_9479( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255, 0 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_9479( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 100, 0, 255, l_U0 );
    }
    else
    {
        sub_9479( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 200, 0, 255, l_U0 );
    }
    if (iParam0 != -2)
    {
        sub_9479( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 100, 0, 0, 255, l_U1 );
    }
    else
    {
        sub_9479( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 200, 0, 0, 255, l_U1 );
    }
    return;
}

void sub_9479(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, uParam10, uParam6, uParam7, uParam8, uParam9 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, uParam10, uParam6, uParam7, uParam8, uParam9 );
    }
    return;
}

void sub_10380(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;

    iVar6 = GET_HASH_KEY( uParam2 );
    iVar7 = GET_HASH_KEY( uParam1 );
    if ((iVar6 != iParam0->_fU116) || (iVar7 != iParam0->_fU128))
    {
        iParam0->_fU116 = iVar6;
        iParam0->_fU128 = iVar7;
        sub_10461( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_10650( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU528)
        {
            sub_8297( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_7750( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_7750( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_7750( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_7750( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_6822( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->_fU100->_fU0, ref iParam0->_fU100->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_6822( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    return;
}

void sub_10461(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_10492( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_10492( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
    if (iParam0->_fU116 == 1678728908)
    {
        sParam1 = "A";
        iVar6[0] = 1;
    }
    if (iParam0->_fU128 == 1678728908)
    {
        sParam2 = "A";
        iVar6[1] = 1;
    }
    bVar5 = true;
    while (bVar5)
    {
        if (((sub_10650( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_10650( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
        {
            iParam0->_fU0[1]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[1]._fU0._fU4 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU4 *= 0.80000000;
        }
        else
        {
            bVar5 = false;
        }
    }
    return;
}

void sub_10492(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_10650(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    SET_TEXT_SCALE( uParam2, uParam3 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_11402(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    char[16] cVar7;

    iVar5 = GET_BITS_IN_RANGE( g_U94._fU96, 0, 15 );
    iVar6 = GET_BITS_IN_RANGE( g_U94._fU96, 16, 31 );
    iVar6++;
    if (iVar6 >= 120)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 301, ref iVar4 );
        if (iVar4 < 70)
        {
            if (iVar5 > 1)
            {
                iVar5--;
                SET_BITS_IN_RANGE( ref g_U94._fU96, 0, 15, iVar5 );
            }
        }
        else if (iVar4 > 200)
        {
            if (iVar5 < 4)
            {
                iVar5++;
                SET_BITS_IN_RANGE( ref g_U94._fU96, 0, 15, iVar5 );
            }
        }
        SET_BITS_IN_RANGE( ref g_U94._fU96, 16, 31, 0 );
    }
    else
    {
        SET_BITS_IN_RANGE( ref g_U94._fU96, 16, 31, iVar6 );
    }
    switch (g_U94._fU40)
    {
        case 2:
        sub_7750( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_8297( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_8297( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_8297( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_8297( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_6822( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_11991( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_6822( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_11991( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_7750( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_8297( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_8297( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_8297( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_8297( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_6822( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_11991( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_6822( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_11991( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
    }
    return;
}

void sub_11991(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    if (iParam3 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_6822( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_6822( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_6822( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

void sub_13025(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((uParam1) AND ((NOT g_U94._fU376) || (g_U94._fU0 == 1005)))
    {
        uVar4 = GET_SOUND_ID();
        if (g_U94._fU0 == 1005)
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
            sub_1023( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_1023( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_1023( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_1023( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_1023( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_1023( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_1023( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_1023( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_1023( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_1023( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_1023( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_1023( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_15121(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;
    int iVar16;

    iVar15 = 5;
    switch (g_U94._fU40)
    {
        case 2:
        if ((uParam4) AND ((uParam6^) != (iParam7 - 1)))
        {
            sub_7750( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_7750( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_7750( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
        break;
    }
    if (g_U94._fU500)
    {
        uVar10._fU0 = 0.08000000;
        uVar10._fU4 = 0.10000000;
        uVar12._fU0 = 0.08000000;
        uVar12._fU4 = 0.92000000;
        iVar15 = 6;
    }
    else if (g_U94._fU40 == 2)
    {
        uVar10._fU0 = 0.10000000;
        uVar12._fU0 = 0.10000000;
    }
    else
    {
        uVar10._fU0 = 0.05000000;
        uVar12._fU0 = 0.05000000;
    }
    uVar10._fU4 = 0.10000000;
    uVar12._fU4 = 0.90000000;
    iVar15 = 5;;
    fVar14 = 0.67000000 / (TO_FLOAT( iVar15 ));
    iVar16 = (uParam6^) - iParam7;
    if ((uParam4) AND (iVar16 < iVar15))
    {
        if (sub_15475( iParam2 ))
        {
            sub_8139( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_15756( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_6822( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_6822( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (g_U94._fU528)
    {
        sub_9308( 0 );
    }
    return;
}

int sub_15475(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU40)
    {
        return 1;
    }
    if (iParam0->_fU44)
    {
        if (HAS_STREAMED_TXD_LOADED( iParam0 + 0 ))
        {
            sub_15536( ref uVar3, iParam0->_fU32 );
            iParam0->_fU36 = GET_TEXTURE_FROM_STREAMED_TXD( iParam0 + 0, ref uVar3 );
            iParam0->_fU40 = 1;
            return 1;
        }
    }
    else
    {
        SCRIPT_ASSERT( "CELLPHONE - photo texture now loaded for some reason" );
    }
    return 0;
}

void sub_15536(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_15756(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_8297( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_8297( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_8297( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_8297( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_6822( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_16006( "\n photo sections", iParam2 );
    }
    return;
}

void sub_16006(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16215(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam2 != -1)
    {
        iVar5 = iParam2;
    }
    else
    {
        iVar5 = iParam0->_fU16[iParam0->_fU44];
    }
    if (iParam0->_fU52)
    {
        if (g_U94._fU40 == 1)
        {
            sub_7750( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_7750( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_7750( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_7750( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_7750( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_7750( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_7750( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_17097(int iParam0, int iParam1)
{
    boolean Result;
    int iVar5;

    if (g_U94._fU380)
    {
        Result = false;
        iVar5 = 0;
        if (g_U94._fU0 == 1004)
        {
            if ((g_U94._fU112 == 3) || (g_U94._fU112 == 4))
            {
                iVar5 = 1;
                if (g_U94._fU116)
                {
                    SHAKE_PAD( 0, 100, 256 );
                    g_U94._fU8._fU0._fU0 += 0.25000000;
                    if (g_U94._fU8._fU0._fU0 >= (g_U94._fU8._fU28 + 0.50000000))
                    {
                        g_U94._fU116 = 0;
                    }
                }
                else
                {
                    SHAKE_PAD( 0, 100, 128 );
                    g_U94._fU8._fU0._fU0 -= 0.25000000;
                    if (g_U94._fU8._fU0._fU0 <= (g_U94._fU8._fU28 - 0.50000000))
                    {
                        g_U94._fU116 = 1;
                    }
                }
            }
        }
        if (iParam0->_fU0 == iParam1)
        {
            sub_17377( iParam0, iVar5 );
            if (iParam1 == 1)
            {
                SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
            }
            Result = true;
        }
        else if (iParam1 == 1)
        {
            SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 1 );
        }
        if ((iParam0->_fU0 < 5) AND (iParam1 < 5))
        {
            sub_17821( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_17377( iParam0, iVar5 );
        }
        if ((NOT Result) || (iVar5))
        {
            sub_867();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_17377(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_17450( ref g_U94._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_17450( ref g_U94._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_17557( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_213( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_17450(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_17557(int iParam0)
{
    if ((ref ref iParam0->_fU4->_fU0->_fU4) >= 0.00000000)
    {
        if (g_U94._fU8._fU0._fU4 <= (ref ref iParam0->_fU36->_fU0->_fU4))
        {
            g_U94._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
            return 1;
        }
    }
    else if (g_U94._fU8._fU0._fU4 >= (ref ref iParam0->_fU36->_fU0->_fU4))
    {
        g_U94._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
        return 1;
    }
    return 0;
}

void sub_17821(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_237( uParam1, ref uVar5 );
    sub_237( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_18333(unknown uParam0)
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
    switch (g_U568)
    {
        case 1:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0)) AND ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) || (NOT IS_USING_CONTROLLER())))
        {
            Result = sub_18499( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U571) AND (g_U94._fU484))
            {
                g_U568 = 5;
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
            Result = sub_18499( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U94._fU488)
            {
                g_U94._fU488 = iVar3 + g_U94._fU492;
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
            Result = sub_18499( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U571) AND (g_U94._fU484))
            {
                g_U568 = 4;
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
            Result = sub_18499( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U94._fU488)
            {
                g_U94._fU488 = iVar3 + g_U94._fU492;
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
            Result = sub_18499( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_18499( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_18499( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_18499( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U569)
    {
        case 6:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 181 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))))
        {
            uVar6 = sub_20111( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_20111( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_20111( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U570)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_20573( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_20573( iVar4 );
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

void sub_18499(unknown uParam0)
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
    if (((iVar11 > 0) AND (g_U94._fU0 != 1002)) AND (g_U94._fU0 != 1003))
    {
        iVar7 = 1;
    }
    if ((((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )) AND (g_U94._fU0 != 1000)) AND (g_U94._fU0 != 1002)) || ((((iVar11 < 0) AND (g_U94._fU0 != 1000)) AND (g_U94._fU0 != 1002)) AND (g_U94._fU0 != 1003)))
    {
        iVar8 = 1;
    }
    if ((iVar9) AND ((g_U94._fU0 == 1000) || (g_U94._fU0 == 1002)))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 0;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_13025( 2, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (NOT IS_USING_CONTROLLER()))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 18;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_13025( 8, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (g_U94._fU0 == 1002))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 1;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_13025( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 3;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_13025( 7, uParam0 );
        }
    }
    else if ((((bVar4) || (iVar7)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U94._fU488 = 0;
        g_U568 = 1;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_13025( 8, uParam0 );
            break;
        }
    }
    else if ((((bVar5) || (iVar8)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U94._fU488 = 0;
        g_U568 = 0;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_13025( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 2;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_13025( 3, uParam0 );
        }
    }
    else
    {
        g_U568 = 19;
    };;;;;;;
    return g_U568;
}

void sub_20111(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U569 = 6;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_13025( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U569 = 7;
        if (g_U94._fU0 != 1007)
        {
            sub_13025( 4, uParam0 );
        }
    }
    else
    {
        g_U569 = 19;
    }
    return g_U569;
}

void sub_20573(unknown uParam0)
{
    g_U570 = 19;
    if (((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U570 = 8;
            sub_13025( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U570 = 9;
            sub_13025( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U570 = 10;
            sub_13025( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U570 = 11;
            sub_13025( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U570 = 12;
            sub_13025( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U570 = 13;
            sub_13025( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U570 = 14;
            sub_13025( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U570 = 15;
            sub_13025( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U570 = 16;
            sub_13025( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U570 = 17;
            sub_13025( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U570;
}

int sub_21668()
{
    unknown uVar2;
    int iVar3;

    if (l_U256)
    {
        l_U256 = IS_CHAR_IN_ANY_CAR( sub_4553() );
    }
    if (NOT l_U256)
    {
        GET_SCRIPT_TASK_STATUS( sub_4553(), 53, ref uVar2 );
        switch (uVar2)
        {
            case 7:
            case 2:
            if ((g_U94._fU0 != 1005) || (g_U94._fU508 >= 4))
            {
                sub_1023( "\n TELLING PLAYER TO USE PHONE" );
                TASK_USE_MOBILE_PHONE( sub_4553(), 1 );
            }
            return 0;
            break;
            default:
            GET_MOBILE_PHONE_TASK_SUB_TASK( sub_4553(), ref iVar3 );
            if (iVar3 != 1)
            {
                return 0;
            }
            break;
        }
    }
    return 1;
}

int sub_22493(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_22601( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_23657( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_22601(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_1023( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_1023( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4129() )))
    {
        sub_1023( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_4553() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4553() ))))
    {
        sub_1023( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_1023( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_23116()) AND (NOT bParam11))
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
                sub_1023( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_23116()) AND (NOT bParam11))
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
    sub_23657( uParam0, ref g_U94._fU176 );
    sub_24053( ref g_U94._fU160 );
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
        sub_6419( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_23116()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_4117())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

void sub_23657(unknown uParam0, unknown uParam1)
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

void sub_24053(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_25418()
{
    switch (GET_HASH_KEY( ref g_U94._fU128 ))
    {
        case 1306311795:
        if (COMPARE_STRING( ref g_U94._fU128, "4825550100" ))
        {
            sub_25667( 0 );
        }
        break;
        case -1630191725:
        if (COMPARE_STRING( ref g_U94._fU128, "4865550100" ))
        {
            sub_25667( 2 );
        }
        break;
        case 840034894:
        if (COMPARE_STRING( ref g_U94._fU128, "4865550150" ))
        {
            sub_25667( 3 );
        }
        break;
        case 504011964:
        if (COMPARE_STRING( ref g_U94._fU128, "3625550100" ))
        {
            sub_25667( 1 );
        }
        break;
        case -1298242752:
        if (COMPARE_STRING( ref g_U94._fU128, "2675550100" ))
        {
            sub_25667( 4 );
        }
        break;
        case -772602971:
        if (COMPARE_STRING( ref g_U94._fU128, "2675550150" ))
        {
            sub_25667( 5 );
        }
        break;
        case 1951436162:
        if (COMPARE_STRING( ref g_U94._fU128, "4685550100" ))
        {
            sub_25667( 7 );
        }
        break;
        case 305725148:
        if (COMPARE_STRING( ref g_U94._fU128, "3595550100" ))
        {
            sub_25667( 8 );
        }
        break;
        case 878687547:
        if (COMPARE_STRING( ref g_U94._fU128, "6255550100" ))
        {
            sub_25667( 10 );
        }
        break;
        case 503223609:
        if (COMPARE_STRING( ref g_U94._fU128, "6255550150" ))
        {
            sub_25667( 11 );
        }
        break;
        case 2133577737:
        if (COMPARE_STRING( ref g_U94._fU128, "9385550100" ))
        {
            sub_25667( 9 );
        }
        break;
        case 1853930698:
        if (COMPARE_STRING( ref g_U94._fU128, "2275550100" ))
        {
            sub_25667( 12 );
        }
        break;
        case -1987983124:
        if (COMPARE_STRING( ref g_U94._fU128, "2275550175" ))
        {
            sub_25667( 13 );
        }
        break;
        case -211509820:
        if (COMPARE_STRING( ref g_U94._fU128, "2275550147" ))
        {
            sub_25667( 14 );
        }
        break;
        case -397047894:
        if (COMPARE_STRING( ref g_U94._fU128, "2275550142" ))
        {
            sub_25667( 15 );
        }
        break;
        case -1540193883:
        if (COMPARE_STRING( ref g_U94._fU128, "2275550168" ))
        {
            sub_25667( 16 );
        }
        break;
        case -1111111111: break;
        case 727321466:
        if (COMPARE_STRING( ref g_U94._fU128, "2455550100" ))
        {
            sub_25667( 17 );
        }
        break;
        case -165930697:
        if (COMPARE_STRING( ref g_U94._fU128, "2455550150" ))
        {
            sub_25667( 18 );
        }
        break;
        case -244479142:
        if (COMPARE_STRING( ref g_U94._fU128, "2455550199" ))
        {
            sub_25667( 19 );
        }
        break;
        case 472770106:
        if (COMPARE_STRING( ref g_U94._fU128, "2455550125" ))
        {
            sub_25667( 20 );
        }
        break;
        case 1477285165:
        if (COMPARE_STRING( ref g_U94._fU128, "8265550150" ))
        {
            sub_25667( 21 );
        }
        break;
        case -943194404:
        if (COMPARE_STRING( ref g_U94._fU128, "8265550100" ))
        {
            sub_25667( 22 );
        }
        break;
    }
    return;
}

int sub_25667(unknown uParam0)
{
    SET_BIT( 1, uParam0 );
    switch (uParam0)
    {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        if (IS_INTERIOR_SCENE())
        {
            return 0;
        }
        break;
    }
    switch (uParam0)
    {
        case 0:
        ACTIVATE_CHEAT( 2 );
        ACTIVATE_CHEAT( 1 );
        break;
        case 1:
        ACTIVATE_CHEAT( 2 );
        break;
        case 2:
        ACTIVATE_CHEAT( 1 );
        break;
        case 3:
        ACTIVATE_CHEAT( 0 );
        break;
        case 4:
        ACTIVATE_CHEAT( 4 );
        break;
        case 5:
        ACTIVATE_CHEAT( 3 );
        break;
        case 7:
        ACTIVATE_CHEAT( 6 );
        break;
        case 8:
        ACTIVATE_CHEAT( 7 );
        break;
        case 9:
        ACTIVATE_CHEAT( 10 );
        break;
        case 10:
        ACTIVATE_CHEAT( 8 );
        break;
        case 11:
        ACTIVATE_CHEAT( 15 );
        break;
        case 12:
        ACTIVATE_CHEAT( 9 );
        break;
        case 13:
        ACTIVATE_CHEAT( 11 );
        break;
        case 14:
        ACTIVATE_CHEAT( 12 );
        break;
        case 15:
        ACTIVATE_CHEAT( 13 );
        break;
        case 16:
        ACTIVATE_CHEAT( 14 );
        break;
        case 17:
        ACTIVATE_CHEAT( 16 );
        break;
        case 18:
        ACTIVATE_CHEAT( 17 );
        break;
        case 19:
        ACTIVATE_CHEAT( 18 );
        break;
        case 20:
        ACTIVATE_CHEAT( 19 );
        break;
        case 21:
        ACTIVATE_CHEAT( 20 );
        break;
        case 22:
        ACTIVATE_CHEAT( 21 );
        break;
    }
    return 1;
    break;
    2;
    1;
    ref g_U94._fU536;
    1;
    ref g_U94._fU536;
    break;
}

int sub_27373()
{
    return 0;
}

int sub_28248(unknown uParam0, unknown uParam1, boolean bParam2)
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
        return sub_22601( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_23657( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_29174(int iParam0)
{
    if (iParam0 < 1)
    {
        return;
    }
    if (# -NULL-0xc27c84())
    {
        sub_9479( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 0, 200, 0, 255, 0 );
        if (iParam0 != 12)
        {
            sub_8139( 1, g_U484._fU144[0], (0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000)) + 0.03800000, 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    else if (# -NULL-0xc27bfa())
    {
        sub_9479( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 0, 200, 0, 255, 0 );
        if ((iParam0 != 12) AND (IS_USING_CONTROLLER()))
        {
            sub_8139( 1, g_U484._fU144[0], (0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000)) + 0.03800000, 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    else
    {
        sub_9479( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 108, 130, 187, 255, 0 );
        if (iParam0 != 12)
        {
            sub_8139( 1, g_U484._fU144[0], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    return;
}