void main()
{
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 1;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U115 = -525076767;
    l_U134 = 0;
    l_U139 = "amb@beg_standing";
    StrCopy( ref l_U140, "BEG11", 16 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_129();
    }
    WAIT( 0 );
    l_U111 = l_U147;
    sub_738();
    if (g_U8670)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbeggar" )) == 1)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPimpNpros" )) == 0)
            {
                g_U8670 = 0;
            }
        }
    }
    if (NOT l_U104)
    {
        l_U110 = 1;
    }
    while (l_U104)
    {
        WAIT( 0 );
        if (sub_1058())
        {
            switch (l_U102)
            {
                case 0:
                sub_1295();
                break;
                case 1:
                sub_1415();
                break;
                case 2:
                if (l_U109)
                {
                    sub_6312();
                }
                break;
                default: break;
            }
        }
        else
        {
            l_U104 = 0;
        }
        sub_6443();
    }
    if (l_U105)
    {
        if (DOES_CHAR_EXIST( l_U111 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U111 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U111, 1 );
            }
        }
        g_U8670 = 0;
    }
    sub_129();
    return;
}

void sub_129()
{
    if (NOT l_U110)
    {
        if (NOT (IS_CHAR_INJURED( l_U111 )))
        {
            CLEAR_CHAR_TASKS( l_U111 );
            CLEAR_CHAR_SECONDARY_TASK( l_U111 );
        }
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U111 );
    if (DOES_OBJECT_EXIST( l_U138 ))
    {
        if (IS_OBJECT_ATTACHED( l_U138 ))
        {
            DETACH_OBJECT( l_U138, 0 );
            DELETE_OBJECT( ref l_U138 );
        }
    }
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U138 );
    REMOVE_BLIP( l_U112 );
    REMOVE_BLIP( l_U113 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U115 );
    REMOVE_ANIMS( l_U139 );
    sub_324( 2, ref l_U140 );
    if (l_U109 == 1)
    {
        REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
        l_U109 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_324(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_545();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_594(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_545()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_594()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_738()
{
    int iVar2;

    if (DOES_CHAR_EXIST( l_U111 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U111 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U111, 1 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U111 )))
    {
        if (NOT (IS_CHAR_USING_SCENARIO( l_U111, "Scenario_LayingDruggie" )))
        {
            GET_CHAR_COORDINATES( l_U111, ref l_U116._fU0, ref l_U116._fU4, ref l_U116._fU8 );
            GET_INTERIOR_FROM_CHAR( l_U111, ref iVar2 );
            if (NOT (iVar2 == nil))
            {
                l_U108 = 1;
            }
        }
        else
        {
            l_U104 = 0;
            l_U102 = 2;
        }
    }
    else
    {
        l_U104 = 0;
    }
    return;
}

int sub_1058()
{
    int iVar2;

    if (DOES_CHAR_EXIST( l_U111 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U111 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U111 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1120() )))
                {
                    if (NOT g_U10978)
                    {
                        if (IS_PLAYER_CONTROL_ON( sub_594() ))
                        {
                            GET_INTERIOR_FROM_CHAR( sub_1120(), ref iVar2 );
                            if (NOT (iVar2 == nil))
                            {
                                if (NOT l_U108)
                                {
                                    return 0;
                                }
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1120()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1295()
{
    REQUEST_ANIMS( l_U139 );
    REQUEST_MODEL( l_U115 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U139 ))) || (NOT (HAS_MODEL_LOADED( l_U115 ))))
    {
        ;
    }
    else
    {
        l_U102 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U111 )))
    {
        SET_CHAR_MONEY( l_U111, 0 );
    }
    return;
}

void sub_1415()
{
    if (NOT (l_U103 == 9))
    {
        sub_1437();
    }
    switch (l_U103)
    {
        case 0:
        if ((IS_SCORE_GREATER( sub_594(), 9 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_594(), 0 ))))
        {
            l_U103 = 1;
        }
        else
        {
            l_U102 = 2;
        }
        break;
        case 1:
        if (NOT g_U8670)
        {
            if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U111, sub_1120(), 10.00000000, 10.00000000, 2.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_594(), 0 ))))
            {
                sub_1719();
            }
        }
        break;
        case 2:
        MODIFY_CHAR_MOVE_STATE( l_U111, 2 );
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U111, sub_1120(), 15.00000000, 15.00000000, 2.00000000, 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U111, 29, ref l_U135 );
            if (l_U135 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U111, ref l_U136 );
                if (l_U136 > 0)
                {
                    sub_2001();
                }
            }
        }
        else
        {
            l_U103 = 10;
        }
        break;
        case 3:
        MODIFY_CHAR_MOVE_STATE( l_U111, 2 );
        GET_SCRIPT_TASK_STATUS( l_U111, 29, ref l_U135 );
        if (l_U135 == 7)
        {
            sub_2220();
        }
        break;
        case 4:
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U111, sub_1120(), 5.00000000, 5.00000000, 2.00000000, 0 ))
        {
            sub_2461();
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U111 );
            CLEAR_CHAR_SECONDARY_TASK( l_U111 );
            sub_324( 2, ref l_U140 );
            l_U103 = 10;
        }
        break;
        case 5:
        GET_SCRIPT_TASK_STATUS( sub_1120(), 102, ref l_U135 );
        if (l_U135 == 7)
        {
            sub_4504();
        }
        break;
        case 6:
        sub_5026();
        break;
        case 7:
        sub_5356();
        break;
        case 8:
        GET_SCRIPT_TASK_STATUS( l_U111, 29, ref l_U135 );
        if (l_U135 == 7)
        {
            l_U103 = 10;
        }
        break;
        case 9:
        if (l_U109)
        {
            if (IS_PED_IN_COMBAT( l_U111 ))
            {
                REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
                l_U109 = 0;
            }
        }
        l_U103 = 10;
        break;
        case 10:
        if (l_U109)
        {
            sub_6312();
        }
        l_U102 = 2;
        break;
    }
    return;
}

void sub_1437()
{
    if ((IS_PED_IN_COMBAT( l_U111 )) || (IS_PED_IN_COMBAT( sub_1120() )))
    {
        sub_324( 2, ref l_U140 );
        l_U103 = 9;
    }
    return;
}

void sub_1719()
{
    SAY_AMBIENT_SPEECH( l_U111, "Generic_Hi", 0, 0, 0 );
    g_U8670 = 1;
    l_U105 = 1;
    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U111, 0 );
    OPEN_SEQUENCE_TASK( ref l_U114 );
    TASK_GO_TO_CHAR( 0, sub_1120(), -1, 2.00000000 );
    TASK_STAND_STILL( 0, -2 );
    CLOSE_SEQUENCE_TASK( l_U114 );
    TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
    CLEAR_SEQUENCE_TASK( l_U114 );
    l_U103 = 2;
    MODIFY_CHAR_MOVE_STATE( l_U111, 2 );
    return;
}

void sub_2001()
{
    SAY_AMBIENT_SPEECH( l_U111, "Solicit", 0, 0, 0 );
    CLEAR_CHAR_TASKS( l_U111 );
    OPEN_SEQUENCE_TASK( ref l_U114 );
    TASK_GO_TO_CHAR( 0, sub_1120(), -1, 2.00000000 );
    if (HAVE_ANIMS_LOADED( l_U139 ))
    {
        ;
    }
    CLOSE_SEQUENCE_TASK( l_U114 );
    TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
    CLEAR_SEQUENCE_TASK( l_U114 );
    MODIFY_CHAR_MOVE_STATE( l_U111, 2 );
    l_U103 = 3;
    return;
}

void sub_2220()
{
    OPEN_SEQUENCE_TASK( ref l_U114 );
    if (HAVE_ANIMS_LOADED( l_U139 ))
    {
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "WALK_HASSLE_MONEY", l_U139, 12.00000000, 1, 0, 0, 0, -1 );
    }
    TASK_GO_TO_CHAR( 0, sub_1120(), -1, 2.00000000 );
    TASK_STAND_STILL( 0, -2 );
    SET_SEQUENCE_TO_REPEAT( l_U114, 1 );
    CLOSE_SEQUENCE_TASK( l_U114 );
    TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
    CLEAR_SEQUENCE_TASK( l_U114 );
    GET_GAME_TIMER( ref l_U129 );
    GET_GAME_TIMER( ref l_U131 );
    l_U103 = 4;
    return;
}

void sub_2461()
{
    MODIFY_CHAR_MOVE_STATE( l_U111, 2 );
    if (sub_2485( 2, 0 ))
    {
        if (sub_2774( 2, ref l_U140, 0 ))
        {
            sub_324( 2, ref l_U140 );
            SAY_AMBIENT_SPEECH( l_U111, "THANKS", 0, 0, 0 );
            if (HAVE_ANIMS_LOADED( l_U139 ))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1120(), "throw_right", l_U139, 12.00000000, 0, 0, 0, 0, -1 );
            }
            l_U103 = 5;
        }
        else
        {
            GET_GAME_TIMER( ref l_U132 );
            l_U133 = l_U132 - l_U129;
            if (l_U133 >= 15000)
            {
                SAY_AMBIENT_SPEECH( l_U111, "SOLICIT_TURNED_DOWN", 0, 0, 0 );
                CLEAR_CHAR_TASKS( l_U111 );
                CLEAR_CHAR_SECONDARY_TASK( l_U111 );
                sub_324( 2, ref l_U140 );
                CLEAR_CHAR_TASKS( l_U111 );
                OPEN_SEQUENCE_TASK( ref l_U114 );
                if (HAVE_ANIMS_LOADED( l_U139 ))
                {
                    TASK_PLAY_ANIM( 0, "crazy_rant_01", l_U139, 12.00000000, 0, 0, 0, 0, -1 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U116._fU0, l_U116._fU4, l_U116._fU8, 2, -2, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U114 );
                TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
                CLEAR_SEQUENCE_TASK( l_U114 );
                l_U103 = 8;
            }
            else
            {
                l_U133 = l_U132 - l_U131;
                if (l_U133 >= 5000)
                {
                    GET_GAME_TIMER( ref l_U131 );
                }
                GET_SCRIPT_TASK_STATUS( l_U111, 29, ref l_U135 );
                if (l_U135 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U111, ref l_U136 );
                    if (l_U136 > 1)
                    {
                        GET_CHAR_COORDINATES( l_U111, ref l_U119._fU0, ref l_U119._fU4, ref l_U119._fU8 );
                        GET_CHAR_COORDINATES( sub_1120(), ref l_U122._fU0, ref l_U122._fU4, ref l_U122._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( l_U119._fU0, l_U119._fU4, l_U119._fU8, l_U122._fU0, l_U122._fU4, l_U122._fU8, ref l_U128 );
                        if (l_U128 > 5.00000000)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U114 );
                            if (HAVE_ANIMS_LOADED( l_U139 ))
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "WALK_HASSLE_MONEY", l_U139, 12.00000000, 1, 0, 0, 0, -1 );
                            }
                            TASK_GO_TO_CHAR( 0, sub_1120(), -1, 2.00000000 );
                            SET_SEQUENCE_TO_REPEAT( l_U114, 1 );
                            CLOSE_SEQUENCE_TASK( l_U114 );
                            TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
                            CLEAR_SEQUENCE_TASK( l_U114 );
                        }
                    }
                }
            }
        }
    }
    else
    {
        sub_324( 2, ref l_U140 );
        GET_GAME_TIMER( ref l_U132 );
        l_U133 = l_U132 - l_U129;
        if (l_U133 >= 15000)
        {
            SAY_AMBIENT_SPEECH( l_U111, "SOLICIT_TURNED_DOWN", 0, 0, 0 );
            CLEAR_CHAR_TASKS( l_U111 );
            CLEAR_CHAR_SECONDARY_TASK( l_U111 );
            CLEAR_CHAR_TASKS( l_U111 );
            OPEN_SEQUENCE_TASK( ref l_U114 );
            if (HAVE_ANIMS_LOADED( l_U139 ))
            {
                TASK_PLAY_ANIM( 0, "crazy_rant_01", l_U139, 12.00000000, 0, 0, 0, 0, -1 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U116._fU0, l_U116._fU4, l_U116._fU8, 2, -2, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U114 );
            TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
            CLEAR_SEQUENCE_TASK( l_U114 );
            l_U103 = 8;
        }
    }
    return;
}

int sub_2485(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_594() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_594() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_594() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_2581())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1120() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_2666())
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

int sub_2581()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2666()
{
    return sub_2677( 0, 0 );
}

int sub_2677(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_2774(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_2485( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_594(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_3049();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_3049()
{
    return sub_2677( 1, 1 );
}

void sub_4504()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1120(), l_U139, "throw_right" )))
    {
        if (DOES_OBJECT_EXIST( l_U138 ))
        {
            if (IS_OBJECT_ATTACHED( l_U138 ))
            {
                DETACH_OBJECT( l_U138, 1 );
                GET_OBJECT_COORDINATES( l_U138, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
            }
        }
        l_U125._fU8 += 0.10000000;
        if (IS_SCORE_GREATER( sub_594(), 9 ))
        {
            ADD_SCORE( sub_594(), -10 );
            l_U106 = 1;
        }
        sub_324( 2, ref l_U140 );
        l_U103 = 6;
    }
    else if (NOT l_U107)
    {
        GET_CHAR_COORDINATES( sub_1120(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT( l_U115, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U138, 1 );
        ATTACH_OBJECT_TO_PED( l_U138, sub_1120(), 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        l_U107 = 1;
    }
    else
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_1120(), l_U139, "throw_right", ref fVar5 );
        if (fVar5 >= 0.59000000)
        {
            if (DOES_OBJECT_EXIST( l_U138 ))
            {
                if (IS_OBJECT_ATTACHED( l_U138 ))
                {
                    DETACH_OBJECT( l_U138, 1 );
                    GET_OBJECT_COORDINATES( l_U138, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
                }
            }
            l_U125._fU8 += 0.10000000;
            if (IS_SCORE_GREATER( sub_594(), 9 ))
            {
                ADD_SCORE( sub_594(), -10 );
                l_U106 = 1;
            }
            l_U103 = 6;
        }
    }
    return;
}

void sub_5026()
{
    if (l_U106)
    {
        if (l_U107)
        {
            if (DOES_OBJECT_EXIST( l_U138 ))
            {
                if (IS_OBJECT_STATIC( l_U138 ))
                {
                    GET_OBJECT_COORDINATES( l_U138, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
                    CREATE_MONEY_PICKUP( l_U125._fU0, l_U125._fU4, l_U125._fU8, 10, 1, ref l_U137 );
                    DELETE_OBJECT( ref l_U138 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U138 );
                    CLEAR_CHAR_TASKS( l_U111 );
                    CLEAR_CHAR_SECONDARY_TASK( l_U111 );
                    OPEN_SEQUENCE_TASK( ref l_U114 );
                    TASK_STAND_STILL( 0, 1000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U125._fU0, l_U125._fU4, l_U125._fU8, 2, -2, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U114 );
                    TASK_PERFORM_SEQUENCE( l_U111, l_U114 );
                    CLEAR_SEQUENCE_TASK( l_U114 );
                    l_U103 = 7;
                }
            }
            else
            {
                l_U103 = 10;
            }
        }
        else
        {
            l_U103 = 10;
        }
    }
    if (NOT l_U106)
    {
        l_U103 = 10;
    }
    return;
}

void sub_5356()
{
    if (NOT (HAS_PICKUP_BEEN_COLLECTED( l_U137 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U111 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U111, 29, ref l_U135 );
            if (l_U135 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U111, 1, 0 );
                REMOVE_PICKUP( l_U137 );
                SET_CHAR_MONEY( l_U111, 10 );
                INCREMENT_INT_STAT_NO_MESSAGE( 103, 10 );
                INCREMENT_INT_STAT_NO_MESSAGE( 304, 1 );
                sub_5493( 7, 10 );
                sub_5898();
                l_U103 = 10;
            }
        }
    }
    else
    {
        l_U103 = 10;
    }
    return;
}

void sub_5493(unknown uParam0, unknown uParam1)
{
    sub_5514( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_5514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_5898()
{
    int iVar2;
    int iVar3;
    int iVar4;

    ProtectedSet(g_U8702, ProtectedGet(g_U8702) + 1);
    if (ProtectedGet(g_U8702) >= 3)
    {
        switch (g_U8703)
        {
            case 0:
            g_U8703 = 1;
            break;
            case 1:
            g_U8703 = 2;
            break;
            case 2:
            g_U8703 = 0;
            break;
        }
        CREATE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS_IN_AREA( l_U144, 200.00000000, g_U8703 );
        l_U109 = 1;
        GET_GAME_TIMER( ref l_U130 );
        ProtectedSet(g_U8702, ProtectedGet(g_U8702) - 3);
    }
    iVar3 = 0;
    iVar4 = 0;
    GET_CURRENT_CHAR_WEAPON( sub_1120(), ref iVar2 );
    if (((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 18))
    {
        ADD_AMMO_TO_CHAR( sub_1120(), iVar2, 1 );
    }
    else
    {
        GET_MAX_AMMO_IN_CLIP( sub_1120(), iVar2, ref iVar3 );
        if (GET_AMMO_IN_CLIP( sub_1120(), iVar2, ref iVar4 ))
        {
            if (iVar4 < iVar3)
            {
                SET_AMMO_IN_CLIP( sub_1120(), iVar2, iVar3 );
            }
        }
    }
    return;
}

void sub_6312()
{
    GET_GAME_TIMER( ref l_U132 );
    l_U133 = l_U132 - l_U130;
    if (l_U133 >= 10000)
    {
        REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
        l_U109 = 0;
    }
    return;
}

void sub_6443()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U104 = 0;
    }
    return;
}
