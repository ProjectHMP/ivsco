void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U16 = 1;
    l_U25 = nil;
    l_U28 = 1;
    l_U31 = 0;
    l_U33 = 0;
    l_U34 = 0;
    l_U35 = 1844702918;
    l_U36 = "PLAY_BAR_GUY";
    l_U13 = l_U43;
    l_U11._fU0 = 4;
    GET_OBJECT_HEADING( l_U13, ref l_U34 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_141();
    }
    CREATE_WIDGET_GROUP( "Darts LAuncher" );
    ADD_WIDGET_TOGGLE( "contextButtonPressed", ref l_U29 );
    ADD_WIDGET_TOGGLE( "is_mission_in_progress", ref l_U16 );
    ADD_WIDGET_TOGGLE( "bMenuScreen", ref l_U31 );
    ADD_WIDGET_TOGGLE( "canPlayDarts", ref l_U38 );
    END_WIDGET_GROUP();
    sub_1029();
    sub_1228();
    sub_1775();
    while (l_U16)
    {
        WAIT( 0 );
        if (l_U29)
        {
            if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
            {
                PRINTSTRING( "contextButtonPressed set to FALSE \n" );
                l_U29 = 0;
            }
        }
        if (NOT (l_U10 == 1))
        {
            if (g_U12303)
            {
                if (NOT (sub_1976( 3 )))
                {
                    sub_141();
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_499() ))
        {
            if (DOES_OBJECT_EXIST( l_U13 ))
            {
                GET_OBJECT_COORDINATES( l_U13, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2512(), l_U21._fU0, l_U21._fU4, l_U21._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
                {
                    sub_141();
                }
            }
            else
            {
                sub_141();
            }
        }
        if (l_U10 == 0)
        {
            if (DOES_OBJECT_EXIST( l_U13 ))
            {
                sub_586( 1 );
                sub_2643();
                sub_2982();
                if (NOT (DOES_OBJECT_EXIST( l_U13 )))
                {
                    sub_141();
                }
                if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U13 )))
                {
                    sub_141();
                }
                if (NOT l_U31)
                {
                    if ((sub_3139( 2, 0 )) AND (sub_3417()))
                    {
                        if (((NOT (IS_CHAR_INJURED( l_U39 ))) || (NOT (IS_CHAR_INJURED( l_U40 )))) || (NOT (IS_CHAR_INJURED( l_U41 ))))
                        {
                            l_U20 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U39 )))
                            {
                                l_U20++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U40 )))
                            {
                                l_U20++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U41 )))
                            {
                                l_U20++;
                            }
                            if (l_U20 == 1)
                            {
                                if (((NOT (IS_CHAR_INJURED( l_U39 ))) AND (IS_CHAR_INJURED( l_U40 ))) AND (IS_CHAR_INJURED( l_U41 )))
                                {
                                    l_U36 = "DRT_01O";
                                    g_U9218 = l_U39;
                                }
                                if (((IS_CHAR_INJURED( l_U39 )) AND (NOT (IS_CHAR_INJURED( l_U40 )))) AND (IS_CHAR_INJURED( l_U41 )))
                                {
                                    l_U36 = "DRT_01P";
                                    g_U9218 = l_U40;
                                }
                                if (((IS_CHAR_INJURED( l_U39 )) AND (IS_CHAR_INJURED( l_U40 ))) AND (NOT (IS_CHAR_INJURED( l_U41 ))))
                                {
                                    l_U36 = "DRT_01Q";
                                    g_U9218 = l_U41;
                                }
                            }
                            else
                            {
                                l_U36 = "PLAY_BAR_GUY";
                            }
                        }
                        else
                        {
                            g_U9218 = l_U14;
                            l_U36 = "PLAY_BAR_GUY";
                        }
                        if (NOT (IS_STRING_NULL( l_U37 )))
                        {
                            if (NOT (COMPARE_STRING( l_U36, l_U37 )))
                            {
                                sub_229( 2, l_U37 );
                                l_U37 = l_U36;
                            }
                        }
                        else
                        {
                            l_U37 = l_U36;
                        }
                        if (NOT l_U29)
                        {
                            if (sub_5525( 2, l_U36, 0 ))
                            {
                                l_U29 = 1;
                                PRINTSTRING( "contextButtonPressed - set to true in darts trigger \n" );
                                l_U42 = 1;
                                if (g_U12303)
                                {
                                    if (NOT (sub_4576( 3 )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U39 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U39, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U40 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U40, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U41 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U41, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        };;;
                                        PRINTSTRING( "Arm wrestling not playable 10 \n" );
                                        l_U42 = 0;
                                    }
                                }
                                if (l_U42)
                                {
                                    if (l_U20 > 1)
                                    {
                                        SET_PLAYER_CONTROL( sub_499(), 0 );
                                        l_U31 = 1;
                                    }
                                    else if (NOT sub_6487())
                                    {
                                        sub_229( 2, l_U37 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_229( 2, l_U37 );
                    }
                }
                else if (NOT sub_3417())
                {
                    PRINTSTRING( "Darts - NOT canPlayDarts \n" );
                    l_U31 = 0;
                }
                g_U9218 = nil;
                l_U42 = 0;
                if ((((NOT (IS_CHAR_INJURED( l_U39 ))) AND (NOT (IS_CHAR_INJURED( l_U40 )))) AND (NOT (IS_CHAR_INJURED( l_U41 )))) AND (l_U31))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DRT_01K" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "DRT_01K", "NULL" );
                    }
                    if (NOT l_U42)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U39;
                            l_U42 = 1;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U40;
                            l_U42 = 1;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 14 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 117 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U41;
                            l_U42 = 1;
                        }
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U39 ))) AND (NOT (IS_CHAR_INJURED( l_U40 )))) AND (IS_CHAR_INJURED( l_U41 ))) AND (l_U31))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DRT_01L" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "DRT_01L", "NULL" );
                    }
                    if (NOT l_U42)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U39;
                            l_U42 = 1;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U40;
                            l_U42 = 1;
                        }
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U39 ))) AND (IS_CHAR_INJURED( l_U40 ))) AND (NOT (IS_CHAR_INJURED( l_U41 )))) AND (l_U31))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DRT_01M" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "DRT_01M", "NULL" );
                    }
                    if (NOT l_U42)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U39;
                            l_U42 = 1;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U41;
                            l_U42 = 1;
                        }
                    }
                }
                if ((((IS_CHAR_INJURED( l_U39 )) AND (NOT (IS_CHAR_INJURED( l_U40 )))) AND (NOT (IS_CHAR_INJURED( l_U41 )))) AND (l_U31))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DRT_01N" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "DRT_01N", "NULL" );
                    }
                    if (NOT l_U42)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U40;
                            l_U42 = 1;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            g_U9218 = l_U41;
                            l_U42 = 1;
                        }
                    }
                }
                if (((NOT (IS_CHAR_INJURED( l_U39 ))) AND (IS_CHAR_INJURED( l_U40 ))) AND (IS_CHAR_INJURED( l_U41 )))
                {
                    PRINTSTRING( "Darts - only jim alive \n" );
                    l_U31 = 0;
                    l_U42 = 0;
                }
                if (((IS_CHAR_INJURED( l_U39 )) AND (NOT (IS_CHAR_INJURED( l_U40 )))) AND (IS_CHAR_INJURED( l_U41 )))
                {
                    PRINTSTRING( "Darts - only terry alive \n" );
                    l_U31 = 0;
                    l_U42 = 0;
                }
                if (((IS_CHAR_INJURED( l_U39 )) AND (IS_CHAR_INJURED( l_U40 ))) AND (NOT (IS_CHAR_INJURED( l_U41 ))))
                {
                    PRINTSTRING( "Darts - only clay alive \n" );
                    l_U31 = 0;
                    l_U42 = 0;
                }
                if (((IS_CHAR_INJURED( l_U39 )) AND (IS_CHAR_INJURED( l_U40 ))) AND (IS_CHAR_INJURED( l_U41 )))
                {
                    PRINTSTRING( "Darts - no one alive \n" );
                    l_U31 = 0;
                    l_U42 = 0;
                }
                if (l_U42)
                {
                    if (NOT sub_6487())
                    {
                        l_U42 = 0;
                    }
                }
                if (NOT l_U42)
                {
                    if ((NOT l_U29) || (NOT l_U31))
                    {
                        if ((IS_CONTROL_PRESSED( 2, 23 )) || (NOT l_U31))
                        {
                            CLEAR_HELP();
                            l_U31 = 0;
                            l_U29 = 1;
                            PRINTSTRING( "contextButtonPressed set to TRUE 2 \n" );
                            sub_229( 2, l_U37 );
                            SET_PLAYER_CONTROL( sub_499(), 1 );
                        }
                    }
                }
            }
            else
            {
                sub_141();
            }
        }
        else if (l_U10 == 1)
        {
            l_U20 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "darts" );
            if (l_U20 == 0)
            {
                SETTIMERA( 0 );
                l_U31 = 0;
                l_U29 = 1;
                l_U28 = 1;
                sub_229( 2, l_U37 );
                l_U10 = 0;
            }
        }
    }
    sub_141();
    return;
}

void sub_141()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U35 );
    if (DOES_CHAR_EXIST( l_U14 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U14 );
    }
    if (NOT (l_U25 == nil))
    {
        RELEASE_TEXTURE( l_U25 );
    }
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "darts" );
    sub_229( 2, l_U37 );
    sub_586( 0 );
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_229(int iParam0, string sParam1)
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
                    sub_450();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_499(), 1 );
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

void sub_450()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_499()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_586(boolean bParam0)
{
    if (DOES_OBJECT_EXIST( l_U13 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U13, 0.00000000, -1.50000000, -1.72000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
        if (bParam0)
        {
            if (NOT l_U19)
            {
                CLEAR_AREA( l_U21._fU0, l_U21._fU4, l_U21._fU8, 1.00000000, 1 );
                SWITCH_PED_PATHS_OFF( l_U21._fU0 - 0.60000000, l_U21._fU4 - 0.60000000, l_U21._fU8 - 0.60000000, l_U21._fU0 + 0.60000000, l_U21._fU4 + 0.60000000, l_U21._fU8 + 0.60000000 );
                l_U19 = 1;
            }
        }
        else
        {
            SWITCH_PED_PATHS_ON( l_U21._fU0 - 0.60000000, l_U21._fU4 - 0.60000000, l_U21._fU8 - 0.60000000, l_U21._fU0 + 0.60000000, l_U21._fU4 + 0.60000000, l_U21._fU8 + 0.60000000 );
        }
    }
    return;
}

void sub_1029()
{
    REQUEST_STREAMED_TXD( "darts", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "darts" )))
    {
        WAIT( 0 );
    }
    l_U25 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", "CJ_BLACKBOARD" );
    SET_TEXT_RENDER_ID( l_U26 );
    sub_1156( "darts", "CJ_BLACKBOARD" );
    DRAW_SPRITE( l_U25, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_1156(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1228()
{
    GET_GROUP_SIZE( sub_1237(), ref l_U20, ref l_U20 );
    if (l_U20 == 1)
    {
        GET_GROUP_MEMBER( sub_1237(), 0, ref l_U15 );
        if (NOT (IS_CHAR_INJURED( l_U15 )))
        {
            if (sub_1333( l_U15 ))
            {
                l_U33 = 1;
            }
        }
    }
    return;
}

void sub_1237()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1333(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (((IS_CHAR_MODEL( uParam0, sub_1360( 1 ) )) || (IS_CHAR_MODEL( uParam0, sub_1360( 6 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1360( 7 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1360(unknown uParam0)
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
    sub_1659( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_1659(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1775()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    if (iVar2 < 1000)
    {
        l_U35 = 280474699;
    }
    else if (iVar2 < 2000)
    {
        l_U35 = -19263344;
    }
    else
    {
        l_U35 = 1844702918;
    }
    return;
}

int sub_1976(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_2005( iParam0 ))
    {
        return 0;
    }
    if (sub_2064( g_U26739._fU0 ))
    {
        if (NOT (sub_2096( g_U26739._fU0, iParam0 )))
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

int sub_2005(int iParam0)
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

int sub_2064(unknown uParam0)
{
    return 0;
}

int sub_2096(unknown uParam0, unknown uParam1)
{
    return 1;
}

void sub_2512()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2643()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT l_U18)
    {
        if (NOT l_U33)
        {
            GET_GROUP_SIZE( sub_1237(), ref l_U20, ref l_U20 );
            if (l_U20 == 0)
            {
                REQUEST_MODEL( l_U35 );
                while (NOT (HAS_MODEL_LOADED( l_U35 )))
                {
                    WAIT( 0 );
                }
                if (DOES_OBJECT_EXIST( l_U13 ))
                {
                    CREATE_CHAR( 4, l_U35, 1.00000000, 1.00000000, 1.00000000, ref l_U14, 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U14 );
                    GET_OBJECT_HEADING( l_U13, ref uVar2 );
                    SET_CHAR_HEADING( l_U14, uVar2 + 140.00000000 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U13, 0.60000000, -0.70000000, -1.73000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                    SET_CHAR_COORDINATES( l_U14, l_U21._fU0, l_U21._fU4, l_U21._fU8 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U14, 1 );
                    if (DOES_OBJECT_EXIST( l_U13 ))
                    {
                        GET_OBJECT_COORDINATES( l_U13, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                        GET_ROOM_KEY_FROM_OBJECT( l_U13, ref uVar3 );
                        SET_ROOM_FOR_CHAR_BY_KEY( l_U14, uVar3 );
                    }
                    else
                    {
                        l_U16 = 0;
                    }
                    l_U18 = 1;
                }
            }
        }
    }
    return;
}

void sub_2982()
{
    int iVar2;

    if ((l_U18) AND (NOT l_U30))
    {
        if (NOT (IS_CHAR_INJURED( l_U14 )))
        {
            GET_CHAR_HEALTH( l_U14, ref iVar2 );
            if (iVar2 < 150)
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U14, sub_2512(), 200.00000000, -2 );
                SET_CHAR_KEEP_TASK( l_U14, 1 );
                l_U30 = 1;
            }
        }
    }
    return;
}

int sub_3139(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_499() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_499() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_499() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_3235())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2512() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_3320())
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

int sub_3235()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3320()
{
    return sub_3331( 0, 0 );
}

int sub_3331(boolean bParam0, unknown uParam1)
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

int sub_3417()
{
    int iVar2;

    if (sub_3426())
    {
        l_U39 = sub_3675( 1 );
        l_U40 = sub_3675( 6 );
        l_U41 = sub_3675( 7 );
        if (l_U39 == nil)
        {
            l_U39 = sub_3880( 0 );
        }
        if (l_U40 == nil)
        {
            l_U40 = sub_3880( 1 );
        }
        if (l_U41 == nil)
        {
            l_U41 = sub_3880( 2 );
        }
        if (DOES_CHAR_EXIST( l_U39 ))
        {
            if (NOT (sub_4086( sub_2512(), l_U39 )))
            {
                l_U39 = nil;
            }
        }
        if (DOES_CHAR_EXIST( l_U40 ))
        {
            if (NOT (sub_4086( sub_2512(), l_U40 )))
            {
                l_U40 = nil;
            }
        }
        if (DOES_CHAR_EXIST( l_U41 ))
        {
            if (NOT (sub_4086( sub_2512(), l_U41 )))
            {
                l_U41 = nil;
            }
        }
    }
    if ((((IS_CHAR_INJURED( l_U14 )) AND (IS_CHAR_INJURED( l_U39 ))) AND (IS_CHAR_INJURED( l_U40 ))) AND (IS_CHAR_INJURED( l_U41 )))
    {
        return 0;
    }
    if (((IS_CHAR_INJURED( l_U39 )) AND (IS_CHAR_INJURED( l_U40 ))) AND (IS_CHAR_INJURED( l_U41 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U14 )))
        {
            if (l_U30)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_499() ))
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_499(), 0 )) || (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_499() ))))
        {
            return 0;
        }
    }
    if (NOT sub_4484())
    {
        return 0;
    }
    if (TIMERA() < 1000)
    {
        return 0;
    }
    if (NOT sub_3426())
    {
        return 0;
    }
    if (sub_4576( 3 ))
    {
        if (sub_4832( ref iVar2 ))
        {
            if (((iVar2 == 1) || (iVar2 == 6)) || (iVar2 == 7))
            {
                if (((NOT (DOES_CHAR_EXIST( l_U39 ))) AND (NOT (DOES_CHAR_EXIST( l_U40 )))) AND (NOT (DOES_CHAR_EXIST( l_U41 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12303)
    {
        if (sub_4832( ref iVar2 ))
        {
            if (((NOT (iVar2 == 1)) AND (NOT (iVar2 == 6))) AND (NOT (iVar2 == 7)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_3426()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U13, 0.00000000, -1.50000000, -1.72000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
    if (((IS_CHAR_IN_AREA_3D( sub_2512(), l_U21._fU0 - 1, l_U21._fU4 - 4.00000000, l_U21._fU8 - 1, l_U21._fU0 + 1, l_U21._fU4 + 1.60000000, l_U21._fU8 + 1, 0 )) AND ((l_U34 > 359) || (l_U34 < 1))) || ((IS_CHAR_IN_AREA_3D( sub_2512(), l_U21._fU0 - 1, l_U21._fU4 + 4.00000000, l_U21._fU8 - 1, l_U21._fU0 + 1, l_U21._fU4 - 1.60000000, l_U21._fU8 + 1, 0 )) AND ((l_U34 > 179) AND (l_U34 < 181))))
    {
        return 1;
    }
    return 0;
}

void sub_3675(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_499() ))
    {
        if (DOES_GROUP_EXIST( sub_1237() ))
        {
            GET_GROUP_SIZE( sub_1237(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_1237(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_1360( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_3880(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_4086(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_4484()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_4576(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12303)
    {
        return 1;
    }
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_2005( iParam0 ))
    {
        return 0;
    }
    if (sub_2064( g_U26739._fU0 ))
    {
        if (NOT (sub_2096( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
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
    }
    if (g_U26739._fU32 <= 0)
    {
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_4832(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

int sub_5525(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_3139( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_499(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5800();
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

void sub_5800()
{
    return sub_3331( 1, 1 );
}

int sub_6487()
{
    unknown uVar2;

    if (g_U12303)
    {
        if (NOT (sub_1976( 3 )))
        {
            return 0;
        }
    }
    if (NOT (g_U9218 == l_U14))
    {
        sub_6793( ref l_U11, sub_6544( g_U9218 ) );
        l_U17 = 1;
    }
    if (NOT l_U17)
    {
        GET_PLAYER_GROUP( sub_499(), ref uVar2 );
        if (NOT (IS_GROUP_MEMBER( l_U14, uVar2 )))
        {
            SET_GROUP_MEMBER( sub_1237(), l_U14 );
            PRINTSTRING( "DARTS LAUNCHER - barGuy added to players group \n" );
        }
    }
    sub_7078();
    l_U10 = 1;
    return 1;
}

int sub_6544(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, sub_1360( 0 ) ))
        {
            return 0;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 1 ) ))
        {
            return 1;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 2 ) ))
        {
            return 2;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 3 ) ))
        {
            return 3;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 4 ) ))
        {
            return 4;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 5 ) ))
        {
            return 5;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 6 ) ))
        {
            return 6;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 7 ) ))
        {
            return 7;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1360( 8 ) ))
        {
            return 8;
        }
    }
    return 19;
}

void sub_6793(int iParam0, unknown uParam1)
{
    PRINTSTRING( "SetDartsGameOpponent() - Called \n" );
    switch (uParam1)
    {
        case 1:
        iParam0->_fU0 = 0;
        break;
        case 6:
        iParam0->_fU0 = 1;
        break;
        case 7:
        iParam0->_fU0 = 2;
        break;
    }
    PRINTSTRING( "SetDartsGameOpponent() - Ended \n" );
    return;
}

void sub_7078()
{
    CLEAR_HELP();
    sub_7094();
    REQUEST_SCRIPT( "darts" );
    while (NOT (HAS_SCRIPT_LOADED( "darts" )))
    {
        REQUEST_SCRIPT( "darts" );
        PRINTSTRING( "darts launcher - waiting for darts to load \n" );
        WAIT( 0 );
    }
    l_U11._fU4 = l_U13;
    START_NEW_SCRIPT_WITH_ARGS( "darts", ref l_U11, 2, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "darts" );
    return;
}

void sub_7094()
{
    return;
}
