void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U117 = 0;
    l_U118 = 1;
    l_U163 = 0;
    l_U166 = -525076767;
    l_U167 = "amb@busker";
    StrCopy( ref l_U168, "BUSK1", 16 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_139();
    }
    WAIT( 0 );
    l_U119 = l_U172;
    if (g_U9227)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbusker" )) == 1)
        {
            g_U9227 = 0;
        }
    }
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            SET_CHAR_NAME_DEBUG( l_U119, "START" );
        }
    }
    if (NOT g_U9227)
    {
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            GET_CHAR_COORDINATES( l_U119, ref l_U135._fU0, ref l_U135._fU4, ref l_U135._fU8 );
            GET_GAME_TIMER( ref l_U164 );
            GET_GAME_TIMER( ref l_U161 );
            l_U164 = l_U164 mod 600000;
            g_U9227 = 1;
            l_U107 = 1;
        }
        else
        {
            l_U106 = 0;
        }
    }
    else
    {
        l_U106 = 0;
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            SET_CHAR_NAME_DEBUG( l_U119, "OTHRACTV" );
        }
    }
    if (l_U106)
    {
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            SET_CHAR_NAME_DEBUG( l_U119, "WAITING1" );
        }
    }
    while (l_U106)
    {
        WAIT( 0 );
        if (sub_1086())
        {
            switch (l_U104)
            {
                case 0:
                sub_1205();
                break;
                case 1:
                sub_1650();
                break;
                default: break;
            }
        }
        else
        {
            l_U106 = 0;
        }
        sub_4906();
    }
    sub_139();
    return;
}

void sub_139()
{
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
        if (l_U117)
        {
            ;
        }
        CLEAR_CHAR_SECONDARY_TASK( l_U119 );
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            TASK_WANDER_STANDARD( l_U119 );
        }
        SET_CHAR_KEEP_TASK( l_U119, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U134 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U166 );
    REMOVE_BLIP( l_U126 );
    REMOVE_ANIMS( l_U167 );
    sub_307( 2, ref l_U168 );
    if (l_U107)
    {
        g_U9227 = 0;
    }
    if (l_U117)
    {
        STOP_STREAM();
        l_U117 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_307(int iParam0, string sParam1)
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
                    sub_528();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_577(), 1 );
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

void sub_528()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_577()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1086()
{
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U119 )))
            {
                if (NOT g_U12303)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1205()
{
    REQUEST_ANIMS( l_U167 );
    REQUEST_MODEL( l_U166 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U167 ))) || (NOT (HAS_MODEL_LOADED( l_U166 ))))
    {
        GET_GAME_TIMER( ref l_U162 );
        if ((l_U162 - l_U161) > 10000)
        {
            l_U104 = 1;
            l_U105 = 7;
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                SET_CHAR_NAME_DEBUG( l_U119, "WANDER" );
                TASK_WANDER_STANDARD( l_U119 );
            }
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1374(), 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U164 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                SET_CHAR_NAME_DEBUG( l_U119, "ACTIVE" );
            }
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 0 );
            l_U118 = 0;
            l_U104 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U162 );
            if ((l_U162 - l_U161) > 10000)
            {
                l_U104 = 1;
                l_U105 = 7;
                if (NOT (IS_CHAR_INJURED( l_U119 )))
                {
                    SET_CHAR_NAME_DEBUG( l_U119, "WANDER" );
                    TASK_WANDER_STANDARD( l_U119 );
                }
            }
        }
    }
    return;
}

void sub_1374()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1650()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (l_U105 == 6))
    {
        if (IS_PED_IN_COMBAT( l_U119 ))
        {
            sub_307( 2, ref l_U168 );
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U119, sub_1374(), 300, -1 );
            l_U105 = 6;
        }
    }
    if (l_U117)
    {
        if (NOT sub_1737())
        {
            STOP_STREAM();
            l_U117 = 0;
            GET_GAME_TIMER( ref l_U164 );
            l_U164 = l_U164 mod 600000;
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                SET_CHAR_NAME_DEBUG( l_U119, "STOPPED" );
            }
        }
    }
    else if (sub_1737())
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U164 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                SET_CHAR_NAME_DEBUG( l_U119, "ACTIVE2" );
            }
            PLAY_STREAM_FROM_PED( l_U119 );
            l_U117 = 1;
        }
        else if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            SET_CHAR_NAME_DEBUG( l_U119, "WAITING2" );
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        SET_CHAR_NAME_DEBUG( l_U119, "NOSAX" );
    };;;
    switch (l_U105)
    {
        case 0:
        if (l_U107)
        {
            if (NOT l_U117)
            {
                if (IS_PED_HOLDING_AN_OBJECT( l_U119 ))
                {
                    if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U164 ))
                    {
                        PLAY_STREAM_FROM_PED( l_U119 );
                        l_U117 = 1;
                    }
                }
            }
            GET_CHAR_COORDINATES( l_U119, ref l_U138._fU0, ref l_U138._fU4, ref l_U138._fU8 );
            GET_CLOSEST_CAR_NODE( l_U138._fU0, l_U138._fU4, l_U138._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_GAME_TIMER( ref l_U160 );
            l_U105 = 1;
        }
        break;
        case 1:
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U119, sub_1374(), 5.00000000, 5.00000000, 1.00000000, 0 ))
        {
            if (IS_PED_HOLDING_AN_OBJECT( l_U119 ))
            {
                if (l_U117)
                {
                    sub_2510();
                }
                else
                {
                    sub_307( 2, ref l_U168 );
                }
            }
            else
            {
                sub_307( 2, ref l_U168 );
                l_U105 = 7;
            }
        }
        else
        {
            sub_307( 2, ref l_U168 );
        }
        break;
        case 3:
        GET_SCRIPT_TASK_STATUS( sub_1374(), 102, ref l_U165 );
        if (l_U165 == 7)
        {
            sub_3593();
        }
        break;
        case 4:
        sub_4115();
        break;
        case 7: break;
    }
    if (l_U117)
    {
        ;
    }
    if (NOT l_U118)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1374(), 50.00000000, 50.00000000, 20.00000000, 0 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U118 = 1;
        }
    }
    return;
}

int sub_1737()
{
    if (IS_PED_HOLDING_AN_OBJECT( l_U119 ))
    {
        if (IS_CHAR_USING_ANY_SCENARIO( l_U119 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( l_U119, "amb@busker", "sax_loop_a" )) || (IS_CHAR_PLAYING_ANIM( l_U119, "amb@busker", "sax_loop_b" ))) || (IS_CHAR_PLAYING_ANIM( l_U119, "amb@default", "busker_default" )))
            {
                if (NOT (IS_CHAR_GESTURING( l_U119 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2510()
{
    if (sub_2521( 2, 0 ))
    {
        if (sub_2810( 2, ref l_U168, 0 ))
        {
            if (HAVE_ANIMS_LOADED( l_U167 ))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1374(), "throw_right", l_U167, 12.00000000, 0, 0, 0, 0, -1 );
            }
            l_U105 = 3;
        }
    }
    else
    {
        sub_307( 2, ref l_U168 );
    }
    return;
}

int sub_2521(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_577() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_577() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_577() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_2617())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1374() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_2702())
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

int sub_2617()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2702()
{
    return sub_2713( 0, 0 );
}

int sub_2713(boolean bParam0, unknown uParam1)
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

int sub_2810(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_2521( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_577(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_3085();
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

void sub_3085()
{
    return sub_2713( 1, 1 );
}

void sub_3593()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1374(), l_U167, "throw_right" )))
    {
        if (DOES_OBJECT_EXIST( l_U134 ))
        {
            if (IS_OBJECT_ATTACHED( l_U134 ))
            {
                DETACH_OBJECT( l_U134, 1 );
                GET_OBJECT_COORDINATES( l_U134, ref l_U157._fU0, ref l_U157._fU4, ref l_U157._fU8 );
            }
        }
        l_U157._fU8 += 0.10000000;
        if (IS_SCORE_GREATER( sub_577(), 9 ))
        {
            ADD_SCORE( sub_577(), -10 );
            l_U110 = 1;
        }
        l_U105 = 4;
        sub_307( 2, ref l_U168 );
    }
    else if (NOT l_U109)
    {
        GET_CHAR_COORDINATES( sub_1374(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT( l_U166, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U134, 1 );
        ATTACH_OBJECT_TO_PED( l_U134, sub_1374(), 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        l_U109 = 1;
    }
    else
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_1374(), l_U167, "throw_right", ref fVar5 );
        if (fVar5 >= 0.59000000)
        {
            if (DOES_OBJECT_EXIST( l_U134 ))
            {
                if (IS_OBJECT_ATTACHED( l_U134 ))
                {
                    DETACH_OBJECT( l_U134, 1 );
                    GET_OBJECT_COORDINATES( l_U134, ref l_U157._fU0, ref l_U157._fU4, ref l_U157._fU8 );
                }
            }
            l_U157._fU8 += 0.10000000;
            if (IS_SCORE_GREATER( sub_577(), 9 ))
            {
                ADD_SCORE( sub_577(), -10 );
                l_U110 = 1;
            }
            l_U105 = 4;
        }
    }
    return;
}

void sub_4115()
{
    if (l_U110)
    {
        if (l_U109)
        {
            if (DOES_OBJECT_EXIST( l_U134 ))
            {
                if (IS_OBJECT_STATIC( l_U134 ))
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U134 );
                    sub_4189();
                    sub_4306( 8, 10 );
                    l_U105 = 7;
                    SAY_AMBIENT_SPEECH( l_U119, "THANKS", 1, 0, 0 );
                }
            }
            else
            {
                l_U105 = 7;
            }
        }
        else
        {
            l_U105 = 7;
        }
    }
    if (NOT l_U110)
    {
        l_U105 = 7;
    }
    return;
}

void sub_4189()
{
    ProtectedSet(g_U9257, ProtectedGet(g_U9257) + 1);
    if (ProtectedGet(g_U9257) >= 3)
    {
        sub_4225( 36 );
        sub_4225( 37 );
        ProtectedSet(g_U9257, ProtectedGet(g_U9257) - 3);
    }
    SET_CHAR_HEALTH( sub_1374(), 200 );
    return;
}

void sub_4225(int iParam0)
{
    SET_BIT( ref g_U94._fU412, iParam0 - 11 );
    return;
}

void sub_4306(unknown uParam0, unknown uParam1)
{
    sub_4327( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_4327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_4906()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U106 = 0;
    }
    return;
}
