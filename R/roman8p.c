void main()
{
    char[16] cVar2;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

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
    l_U483 = 0;
    l_U484 = 0;
    l_U486 = 0;
    l_U487 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    array(ref uVar7._fU0._fU0, 3);
    ref uVar7._fU0;
    ref uVar7;
    iVar14 = 0;
    l_U483 = 0;
    if (sub_129( iVar14 ))
    {
        sub_380( iVar14, 0, 10, -1, -1, -1 );
        sub_380( iVar14, 1, 10, -1, -1, -1 );
        l_U484 = 1;
    }
    else if (sub_1180( iVar14, 10 ))
    {
        TERMINATE_THIS_SCRIPT();
    }
    l_U484 = 0;;
    while (true)
    {
        WAIT( 0 );
        if ((g_U10978) AND (l_U483 != 2))
        {
            l_U483 = 2;
        }
        switch (l_U483)
        {
            case 0:
            if (sub_1464( iVar14 ))
            {
                if (NOT (IS_CHAR_INJURED( sub_2265() )))
                {
                    if ((((LOCATE_CHAR_ANY_MEANS_2D( sub_2265(), 809.85820000, -262.74130000, 150.00000000, 150.00000000, 0 )) || (sub_2353())) || (sub_2404( 0 ))) || (NOT sub_2460()))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U488 );
                        if (sub_2353())
                        {
                            sub_2536();
                            l_U483 = 3;
                            break;
                        }
                        else if (l_U488 == 0)
                        {
                            sub_2536();
                            l_U483 = 3;
                            break;
                        }
                        else if (l_U488 == 1)
                        {
                            iVar6 = 0;
                            sub_7084( ref l_U489, "R8_START", ref iVar6 );
                            sub_7084( ref l_U489, "R8_NOFARE", ref iVar6 );
                            sub_7224( ref l_U489, ref iVar6 );
                            sub_7268();
                            l_U483 = 3;
                            break;
                        };;;
                    }
                    else
                    {
                        l_U486 = 0;
                        if ((g_U64767) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_2265(), g_U64764._fU0, g_U64764._fU4, 150.00000000, 150.00000000, 0 )))
                        {
                            l_U486 = 1;
                        }
                        if (NOT sub_2460())
                        {
                            l_U486 = 1;
                        }
                        if (l_U486)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U488 );
                            if (l_U488 == 0)
                            {
                                sub_2536();
                                l_U483 = 3;
                                break;
                            }
                            else if (l_U488 == 1)
                            {
                                iVar6 = 0;
                                sub_7084( ref l_U489, "R8_START", ref iVar6 );
                                sub_7084( ref l_U489, "R8_NOFARE", ref iVar6 );
                                sub_7224( ref l_U489, ref iVar6 );
                                sub_7268();
                                l_U483 = 3;
                                break;
                            }
                        }
                        else
                        {
                            l_U487 = 1;
                            uVar15 = sub_7864( iVar14 );
                            uVar16 = sub_7969( iVar14, 0, uVar15 );
                            uVar17 = sub_7969( iVar14, 1, uVar15 );
                            iVar6 = 0;
                            sub_7084( ref l_U489, "R8_START", ref iVar6 );
                            if (l_U484)
                            {
                                sub_7084( ref l_U489, "R8_RESP1", ref iVar6 );
                            }
                            else if (sub_8094( 0 ))
                            {
                                sub_7084( ref l_U489, "R8_FAREP", ref iVar6 );
                            }
                            else
                            {
                                sub_7084( ref l_U489, "R8_FAREF", ref iVar6 );
                            }
                            if (IS_VEH_DRIVEABLE( g_U64761 ))
                            {
                                if (((((CHECK_STUCK_TIMER( g_U64761, 3, 60000 )) || (CHECK_STUCK_TIMER( g_U64761, 2, 30000 ))) || (CHECK_STUCK_TIMER( g_U64761, 1, 40000 ))) || (CHECK_STUCK_TIMER( g_U64761, 0, 5000 ))) || (IS_CAR_IN_WATER( l_U570 )))
                                {
                                    MARK_CAR_AS_NO_LONGER_NEEDED( ref g_U64761 );
                                }
                                else
                                {
                                    sub_7084( ref l_U489, "R8_GOTCAB", ref iVar6 );
                                    PRINTNL();
                                    PRINTNL();
                                    PRINTSTRING( "veh drivable" );
                                    PRINTNL();
                                    PRINTNL();
                                }
                            }
                            else if (IS_CHAR_IN_ANY_CAR( sub_2265() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_2265(), ref l_U570 );
                                if (IS_VEH_DRIVEABLE( l_U570 ))
                                {
                                    if (IS_CAR_MODEL( l_U570, -1932515764 ))
                                    {
                                        if (((((CHECK_STUCK_TIMER( l_U570, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U570, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U570, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U570, 0, 5000 ))) || (IS_CAR_IN_WATER( l_U570 )))
                                        {
                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U570 );
                                        }
                                        else
                                        {
                                            g_U64761 = l_U570;
                                            sub_7084( ref l_U489, "R8_GOTCAB", ref iVar6 );
                                        }
                                    }
                                }
                            }
                            StrCopy( ref cVar2, "R8_PICK", 16 );
                            ConcatString(ref cVar2, uVar16, 16);
                            PRINTNL();
                            PRINTSTRING( ref cVar2 );
                            PRINTSTRING( " - THE PICKUP IS " );
                            PRINTINT( uVar16 );
                            sub_7084( ref l_U489, ref cVar2, ref iVar6 );
                            StrCopy( ref cVar2, "R8_DROP", 16 );
                            ConcatString(ref cVar2, uVar17, 16);
                            PRINTNL();
                            PRINTSTRING( ref cVar2 );
                            PRINTSTRING( " - THE DROPOFF IS " );
                            PRINTINT( uVar17 );
                            sub_7084( ref l_U489, ref cVar2, ref iVar6 );
                            l_U483 = 4;
                        }
                    }
                }
            }
            break;
            case 4:
            sub_7224( ref l_U489, ref iVar6 );
            sub_7268();
            break;
            case 1:
            l_U484 = 0;
            if ((NOT g_U10978) AND (NOT g_U91._fU580))
            {
                sub_8838();
            }
            else
            {
                l_U487 = 0;
                l_U483 = 0;
            }
            if (l_U487)
            {
                REQUEST_SCRIPT( "roman8m" );
                while (NOT (HAS_SCRIPT_LOADED( "roman8m" )))
                {
                    WAIT( 0 );
                    REQUEST_SCRIPT( "roman8m" );
                }
                sub_11885( iVar14 );
                START_NEW_SCRIPT( "roman8m", 8192 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "roman8m" );
                l_U483 = 2;
                l_U487 = 0;
            }
            break;
            case 2:
            if (NOT g_U10978)
            {
                if (sub_1180( iVar14, 10 ))
                {
                    sub_11993();
                    TERMINATE_THIS_SCRIPT();
                }
                sub_15774( iVar14 );
                l_U483 = 0;
            }
            break;
            case 3:
            if (sub_6714( 0 ))
            {
                l_U483 = 0;
            }
            break;
        }
    }
    return;
}

int sub_129(unknown uParam0)
{
    if (g_U15946[uParam0]._fU168._fU4)
    {
        sub_162( uParam0 );
        g_U15946[uParam0]._fU168._fU4 = 0;
        return 1;
    }
    return 0;
}

void sub_162(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        g_U15946[uParam0]._fU168._fU12[I] = 0;
    }
    for ( I = 0; I <= 2; I++ )
    {
        for ( J = 0; J <= 14; J++ )
        {
            g_U15946[uParam0]._fU168._fU76[I]._fU0[J] = -1;
        }
    }
    g_U15946[uParam0]._fU168._fU0 = 1;
    g_U15946[uParam0]._fU168._fU8 = 0;
    return;
}

void sub_380(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
    int I;
    int J;
    unknown uVar10;
    unknown uVar11;

    if (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] == -1)
    {
        for ( I = 0; I <= (iParam2 - 1); I++ )
        {
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = I;
        }
        for ( I = iParam2 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar11 );
            uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11] = uVar10;
        }
        if (iParam5 != -1)
        {
            for ( I = 0; I <= (iParam2 - 2); I++ )
            {
                if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam4))
                {
                    for ( J = I + 1; J <= (I + iParam5); J++ )
                    {
                        if (J < iParam2)
                        {
                            if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam4))
                            {
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = uVar10;
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] = uVar10;
                                return;
                            }
                        }
                    }
                    return;
                }
            }
        }
    }
    return;
}

int sub_1180(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_1269( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_1269( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

void sub_1269(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_1464(unknown uParam0)
{
    if (g_U15946[uParam0]._fU4 == 1)
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[3] == 1)
        {
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
            if (sub_1557())
            {
                return 0;
            }
            sub_2196();
            return 1;
        }
    }
    return 0;
}

int sub_1557()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_2196()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_2265()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2353()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "roman_taxi" )) >= 1)
    {
        return 1;
    }
    return 0;
}

int sub_2404(int iParam0)
{
    if (iParam0 == 57)
    {
        return 0;
    }
    if (NOT (g_U64542._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

int sub_2460()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2536()
{
    l_U485 = 1;
    if (sub_2578( ref g_U10981[0]._fU92, ref g_U10981[0]._fU76, 0 ))
    {
        while (l_U485)
        {
            WAIT( 0 );
            switch (sub_6626())
            {
                case 2:
                l_U485 = 0;
                break;
                default:
                if (sub_6714( 0 ))
                {
                    l_U485 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_2578(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_2686( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_4611( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_2686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_2756( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_2756( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2864() )))
    {
        sub_2756( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2265() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2265() ))))
    {
        sub_2756( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_2756( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_3239()) AND (NOT bParam11))
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
                sub_2756( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_3239()) AND (NOT bParam11))
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
    sub_4611( uParam0, ref g_U91._fU176 );
    sub_5992( ref g_U91._fU160 );
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
        sub_6232( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_2756(unknown uParam0)
{
    return;
}

void sub_2864()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3239()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_3296())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_3296()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2864() )))
    {
        sub_2756( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_2756( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_2756( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_2756( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2864() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2265() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2265(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_2756( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2265() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_2756( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_2756( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2864() )))
    {
        sub_2756( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_4611(int iParam0, unknown uParam1)
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

void sub_5992(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_6232(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6626()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_6714(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_2265(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_2756( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_7084(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_7224(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_7268()
{
    l_U485 = 1;
    if (sub_7297( ref l_U489, "Rp8AUD", 1 ))
    {
        while (l_U485)
        {
            WAIT( 0 );
            sub_7470();
            switch (sub_6626())
            {
                case 2:
                if (l_U483 == 4)
                {
                    l_U483 = 3;
                }
                l_U485 = 0;
                break;
                default:
                if (sub_6714( 0 ))
                {
                    if (l_U483 == 4)
                    {
                        l_U483 = 1;
                    }
                    l_U485 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_7297(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_2686( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_4611( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_7470()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U26757 = iVar2 + 2000;
    return;
}

int sub_7864(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15946[uParam0]._fU168._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_7969(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uParam2];
}

int sub_8094(unknown uParam0)
{
    if (g_U15946[uParam0]._fU168._fU0 == 1)
    {
        return 1;
    }
    return 0;
}

void sub_8838()
{
    sub_8847();
    return;
}

void sub_8847()
{
    int iVar2;

    iVar2 = 0;
    sub_8861( iVar2 );
    return;
}

void sub_8861(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_9013( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_9148();
    g_U13391[uParam0]._fU160._fU96 = 1;
    g_U10978 = 1;
    g_U10981[uParam0]._fU28 = 1;
    sub_9946( uParam0 );
    uVar3 = sub_11419( uParam0, g_U13391[uParam0]._fU160._fU76 );
    sub_11607( uVar3 );
    sub_11728();
    return;
}

void sub_9013(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_9148()
{
    sub_9157();
    sub_9260( ref g_U9893._fU68 );
    sub_9309();
    return;
}

void sub_9157()
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

void sub_9260(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_9309()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_9347( 1, g_U569[I] )) == 0)
        {
            sub_9598( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9776())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_9347(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9598(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_9683( g_U569 - 1 );
    return;
}

void sub_9683(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_9776()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_9347( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9946(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref uVar3, 4, g_U13391[uParam0]._fU160._fU44, 8);
    uVar7 = {sub_9982( ref uVar3, uParam0 )};
    sub_11247( uVar7 );
    return;
}

void sub_9982(unknown uParam0, unknown uParam1)
{
    char[16] Result;

    StrCopy( ref Result, uParam0, 16 );
    switch (uParam1)
    {
        case 3:
        switch (g_U64770)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> GLOBAL_DRUG_DEAL value = " );
            PRINTINT( g_U64770 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Drug_Dealing subpart identifier error" );
        }
        break;
        case 19:
        switch (g_U64982)
        {
            case 1:
            ConcatString(ref Result, "_A", 16);
            break;
            case 2:
            ConcatString(ref Result, "_B", 16);
            break;
            case 3:
            ConcatString(ref Result, "_C", 16);
            break;
            case 4:
            ConcatString(ref Result, "_D", 16);
            break;
            case 5:
            ConcatString(ref Result, "_E", 16);
            break;
            case 6:
            ConcatString(ref Result, "_F", 16);
            break;
            case 7:
            ConcatString(ref Result, "_G", 16);
            break;
            case 8:
            ConcatString(ref Result, "_H", 16);
            break;
            case 9:
            ConcatString(ref Result, "_I", 16);
            break;
            default:
            PRINTSTRING( "----------------> g_iBell2MissionNumber value = " );
            PRINTINT( g_U64982 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
        case 22:
        switch (g_U64547)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> current_roman10p_scenarios value (as an INT) = " );
            PRINTINT( g_U64547 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
    }
    return Result;
}

void sub_11247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_11419(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_11493( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_11493(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_11607(unknown uParam0)
{
    g_U9925 = g_U26758[uParam0]._fU8;
    if (g_U9925 >= 50000)
    {
        g_U9925 = sub_11653( g_U9925 );
    }
    return;
}

void sub_11653(int Result)
{
    if (Result == 50094)
    {
        if (g_U15654[12])
        {
            return 95;
        }
        else
        {
            return 94;
        }
    }
    return Result;
}

void sub_11728()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_11885(unknown uParam0)
{
    g_U91._fU68 = uParam0;
    return;
}

void sub_11993()
{
    sub_12002();
    return;
}

void sub_12002()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    sub_12032( iVar2, iVar3, "Friend_1" );
    return;
}

void sub_12032(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    sub_12047( uParam0, uParam1, uParam2 );
    uVar5 = g_U13391[uParam0]._fU160._fU76;
    g_U10981[uParam0]._fU24 = uVar5;
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uParam1]._fU8[0]._fU0[3] = 0;
    }
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    return;
}

void sub_12047(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_12191( ref cVar5 );
        return;
    }
    if (g_U13391[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_12191( ref cVar5 );
        return;
    }
    sub_12476( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_13211( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_13346( iVar21, uParam1, iVar22, iVar23 );
    }
    return;
}

void sub_12191(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_12476(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 5;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 22:
        iVar3 = 1;
        break;
        case 19:
        iVar3 = 2;
        break;
        case 8:
        iVar3 = 3;
        break;
        case -1:
        iVar3 = 4;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64792[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64792[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_12651( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_12651(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12833( 0 );
    return;
}

void sub_12833(boolean bParam0)
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
        sub_13088();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13088()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_13211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 39;
        (uParam2^) = 55;
        (uParam3^) = 360000;
        return 1;
        case 3:
        (uParam1^) = 40;
        (uParam2^) = 15;
        (uParam3^) = 360000;
        return 1;
        case 8:
        (uParam1^) = 41;
        (uParam2^) = 21;
        (uParam3^) = 360000;
        return 1;
    }
    return 0;
}

void sub_13346(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_13368( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_13368(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_13480( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_15414( iParam0, iParam3 );
    return;
}

void sub_13480(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_13503( uParam0 );
    sub_13994( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_14338( ref uVar4, 1 );
    sub_14366( ref uVar4, 0 );
    sub_14394( ref uVar4, 2 );
    sub_14424( ref uVar4 );
    return;
}

int sub_13503(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_11493( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_13994(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_14016( uParam0, 0, iParam4 + 0 );
    sub_14016( uParam1, 1, iParam4 + 0 );
    sub_14016( uParam2, 2, iParam4 + 0 );
    sub_14016( uParam3, 3, iParam4 + 0 );
    sub_14016( 0, 4, iParam4 + 0 );
    sub_14016( 1, 5, iParam4 + 0 );
    sub_14016( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_14016(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_14338(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_14366(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_14394(int iParam0, unknown uParam1)
{
    sub_14016( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_14424(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_14494())
        {
            sub_9598( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_14621( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_9598( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_9347( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_9347( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_14494()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_9347( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_9598( I );
            return 1;
        }
    }
    return 0;
}

int sub_14621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_14686( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_14686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_9347( 0, uParam0 );
        if (iVar14 == (sub_9347( 0, uParam6 )))
        {
            iVar15 = sub_9347( 3, uParam0 );
            if (iVar15 == (sub_9347( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_15414(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_15453( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_15453(int iParam0)
{
    int iVar3;

    iVar3 = sub_15462();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_15517();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_15462()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_15517()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_15774(int iParam0)
{
    if (g_U91._fU68 == iParam0)
    {
        g_U91._fU68 = -1;
    }
    return;
}