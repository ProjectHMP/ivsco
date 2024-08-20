void main()
{
    l_U98 = 0;
    l_U99 = 0;
    l_U100 = 0;
    l_U101 = 1;
    l_U102 = 0;
    l_U116 = 0;
    l_U119 = "amb@drugd_sell";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_79();
    }
    WAIT( 0 );
    l_U103 = l_U120;
    if (DOES_CHAR_EXIST( l_U103 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U103 )))
        {
            if (IS_CHAR_USING_ANY_SCENARIO( l_U103 ))
            {
                if (IS_CHAR_USING_SCENARIO( l_U103, "Scenario_SellingDrugs" ))
                {
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U103, 1 );
                    GET_CHAR_COORDINATES( l_U103, ref l_U108._fU0, ref l_U108._fU4, ref l_U108._fU8 );
                }
                else
                {
                    l_U101 = 0;
                }
            }
            else
            {
                l_U101 = 0;
            }
        }
        else
        {
            l_U101 = 0;
        }
    }
    else
    {
        l_U101 = 0;
    }
    while (l_U101)
    {
        WAIT( 0 );
        if (sub_409())
        {
            switch (l_U98)
            {
                case 0:
                sub_517();
                break;
                case 1:
                sub_592();
                break;
                default: break;
            }
        }
        else
        {
            l_U101 = 0;
        }
        sub_2576();
    }
    sub_79();
    return;
}

void sub_79()
{
    if (NOT (IS_CHAR_DEAD( l_U103 )))
    {
        CLEAR_CHAR_SECONDARY_TASK( l_U103 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U103 );
    l_U103 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U104 );
    l_U104 = nil;
    REMOVE_BLIP( l_U105 );
    REMOVE_ANIMS( l_U119 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_409()
{
    if (DOES_CHAR_EXIST( l_U103 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U103 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U103 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_517()
{
    REQUEST_ANIMS( l_U119 );
    if (NOT (HAVE_ANIMS_LOADED( l_U119 )))
    {
        REQUEST_ANIMS( l_U119 );
    }
    else
    {
        l_U98 = 1;
    }
    return;
}

void sub_592()
{
    if ((NOT (l_U99 == 2)) AND (NOT (l_U99 == 3)))
    {
        if (IS_PED_IN_COMBAT( l_U103 ))
        {
            l_U99 = 2;
        }
    }
    switch (l_U99)
    {
        case 0:
        sub_690();
        break;
        case 1:
        sub_1322();
        break;
        case 2:
        l_U99 = 3;
        break;
        case 3: break;
    }
    return;
}

void sub_690()
{
    if (sub_699())
    {
        if (sub_964())
        {
            l_U99 = 1;
            l_U100 = 0;
        }
    }
    return;
}

int sub_699()
{
    int iVar2;

    iVar2 = nil;
    if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_712() )))
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_766(), 0 )))
        {
            GET_CHAR_COORDINATES( l_U103, ref l_U111._fU0, ref l_U111._fU4, ref l_U111._fU8 );
            BEGIN_CHAR_SEARCH_CRITERIA();
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 27 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 29 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
            END_CHAR_SEARCH_CRITERIA();
            GET_CLOSEST_CHAR( l_U111._fU0, l_U111._fU4, l_U111._fU8, 10.00000000, 1, 0, ref iVar2 );
            if (iVar2 == nil)
            {
                return 1;
            }
        }
    }
    iVar2 = nil;
    return 0;
}

void sub_712()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_766()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_964()
{
    GET_GAME_TIMER( ref l_U114 );
    l_U115 = l_U114 - l_U117;
    if (l_U115 >= 10000)
    {
        GET_CHAR_COORDINATES( l_U103, ref l_U111._fU0, ref l_U111._fU4, ref l_U111._fU8 );
        BEGIN_CHAR_SEARCH_CRITERIA();
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 26 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 27 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 28 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 29 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 30 );
        END_CHAR_SEARCH_CRITERIA();
        l_U104 = nil;
        GET_CLOSEST_CHAR( l_U111._fU0, l_U111._fU4, l_U111._fU8, 5.00000000, 1, 0, ref l_U104 );
        if (NOT (l_U104 == nil))
        {
            if (sub_1164( l_U104 ))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U104 );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U104, 0 );
                l_U102 = 0;
                return 1;
            }
            else
            {
                l_U104 = nil;
            }
        }
    }
    l_U104 = nil;
    return 0;
}

int sub_1164(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            uParam0 = nil;
            return 1;
        }
    }
    uParam0 = nil;
    return 0;
}

void sub_1322()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( l_U104 )))
    {
        switch (l_U100)
        {
            case 0:
            OPEN_SEQUENCE_TASK( ref l_U107 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U104 );
            CLOSE_SEQUENCE_TASK( l_U107 );
            TASK_PERFORM_SEQUENCE( l_U103, l_U107 );
            CLEAR_SEQUENCE_TASK( l_U107 );
            SAY_AMBIENT_SPEECH( l_U103, "DRUGS_SELL", 1, 1, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar5 );
            if (((iVar5 < 75) AND (NOT (IS_PED_HOLDING_AN_OBJECT( l_U104 )))) AND (NOT l_U102))
            {
                l_U100 = 2;
            }
            else
            {
                l_U100 = 4;
            }
            break;
            case 2:
            GET_SCRIPT_TASK_STATUS( l_U103, 29, ref l_U118 );
            if (l_U118 == 7)
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U103, 0.00000000, 0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U107 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, 8000, 1.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U103 );
                CLOSE_SEQUENCE_TASK( l_U107 );
                TASK_PERFORM_SEQUENCE( l_U104, l_U107 );
                CLEAR_SEQUENCE_TASK( l_U107 );
                OPEN_SEQUENCE_TASK( ref l_U107 );
                TASK_LOOK_AT_CHAR( 0, l_U104, 999999, 0 );
                TASK_STAND_STILL( 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U107 );
                TASK_PERFORM_SEQUENCE( l_U103, l_U107 );
                CLEAR_SEQUENCE_TASK( l_U107 );
                l_U100 = 1;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( l_U104, 29, ref l_U118 );
            if (l_U118 == 7)
            {
                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U104, l_U103, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U107 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U103 );
                    if (HAVE_ANIMS_LOADED( l_U119 ))
                    {
                        TASK_PLAY_ANIM( 0, "buy_drugs", l_U119, 12.00000000, 0, 0, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U107 );
                    TASK_PERFORM_SEQUENCE( l_U104, l_U107 );
                    CLEAR_SEQUENCE_TASK( l_U107 );
                    OPEN_SEQUENCE_TASK( ref l_U107 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U104 );
                    if (HAVE_ANIMS_LOADED( l_U119 ))
                    {
                        TASK_PLAY_ANIM( 0, "sell_drugs", l_U119, 12.00000000, 0, 0, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U107 );
                    TASK_PERFORM_SEQUENCE( l_U103, l_U107 );
                    CLEAR_SEQUENCE_TASK( l_U107 );
                    l_U100 = 3;
                }
                else
                {
                    l_U100 = 5;
                }
            }
            else if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U104, l_U103, 5.00000000 + 2.00000000, 5.00000000 + 2.00000000, 10.00000000, 0 )))
            {
                l_U100 = 5;
            }
            break;
            case 3:
            GET_SCRIPT_TASK_STATUS( l_U104, 29, ref l_U118 );
            if (l_U118 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U103, 29, ref l_U118 );
                if (l_U118 == 7)
                {
                    SAY_AMBIENT_SPEECH( l_U103, "DRUGS_SELL", 1, 1, 0 );
                    l_U100 = 5;
                }
            }
            break;
            case 4:
            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U103 )))
            {
                SAY_AMBIENT_SPEECH( l_U104, "DRUGS_REJECT", 1, 1, 0 );
                l_U100 = 6;
            }
            break;
            case 5:
            OPEN_SEQUENCE_TASK( ref l_U107 );
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( l_U107 );
            TASK_PERFORM_SEQUENCE( l_U104, l_U107 );
            CLEAR_SEQUENCE_TASK( l_U107 );
            l_U100 = 6;
            break;
            case 6:
            sub_2439();
            GET_GAME_TIMER( ref l_U117 );
            break;
        }
    }
    else
    {
        sub_2439();
    }
    return;
}

void sub_2439()
{
    CLEAR_CHAR_TASKS( l_U103 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U104 );
    l_U104 = nil;
    l_U99 = 0;
    return;
}

void sub_2576()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U101 = 0;
    }
    return;
}
