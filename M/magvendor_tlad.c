void main()
{
    l_U0 = 0.40000000;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U7 = 0;
    l_U11 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U45 = {0, 0, 0};
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U77 = -1;
    l_U78 = -1;
    l_U79 = 1;
    l_U81 = 0;
    l_U83 = 0;
    l_U89 = 0;
    l_U90 = 0;
    l_U94 = -1360999125;
    l_U95 = -268530289;
    l_U96 = 2043092722;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_176();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U10956 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_665() ))
            {
                if (g_U9547 == 1)
                {
                    if (DOES_OBJECT_EXIST( l_U113 ))
                    {
                        if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U113 ))
                        {
                            switch (l_U13)
                            {
                                case 0:
                                sub_949( l_U113 );
                                l_U13 = 1;
                                break;
                                case 1:
                                sub_2406( l_U113 );
                                break;
                                case 2:
                                l_U91 = 0;
                                sub_2925();
                                sub_3125();
                                sub_5117( l_U113 );
                                break;
                                case 3:
                                sub_8224();
                                sub_8474( l_U113 );
                                sub_5117( l_U113 );
                                break;
                                case 4:
                                sub_8224();
                                sub_10186( l_U113 );
                                sub_5117( l_U113 );
                                break;
                                case 5:
                                sub_8224();
                                sub_11137( l_U113 );
                                sub_5117( l_U113 );
                                break;
                                case 6:
                                sub_8224();
                                sub_12939( l_U27, l_U24, "CUSTOMER_JUICE", "VENDOR_JUICE", "amb@kiosk", l_U108, l_U42, l_U45, 3, "SELL_GOODS", 0.20000000, 0, -0.02000000, 0.04000000, -0.20000000, 2.28000000, "player_drink", l_U99, 0.17000000, 0.38000000, 0.64000000, 10, ref l_U91, 0.86500000, l_U113, l_U94, ref l_U111, ref l_U92 );
                                if (l_U91 == 1)
                                {
                                    if (l_U92 == 1)
                                    {
                                        sub_15255();
                                    }
                                    sub_395( 2, "sprunk_act" );
                                    sub_395( 2, "classprunk_act" );
                                    SET_MINIGAME_IN_PROGRESS( 0 );
                                    l_U13 = 2;
                                    l_U91 = 0;
                                }
                                break;
                            }
                        }
                        else
                        {
                            sub_176();
                        }
                    }
                    else
                    {
                        sub_176();
                    }
                }
                else
                {
                    sub_176();
                }
            }
            else
            {
                sub_176();
            }
        }
        else
        {
            sub_176();
        }
    }
    return;
}

void sub_176()
{
    if (DOES_OBJECT_EXIST( l_U106 ))
    {
        if (IS_OBJECT_ATTACHED( l_U106 ))
        {
            DETACH_OBJECT( l_U106, 1 );
        }
        DELETE_OBJECT( ref l_U106 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U106 );
    }
    if (DOES_OBJECT_EXIST( l_U107 ))
    {
        if (IS_OBJECT_ATTACHED( l_U107 ))
        {
            DETACH_OBJECT( l_U107, 1 );
        }
        DELETE_OBJECT( ref l_U107 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U107 );
    }
    if (NOT (IS_CHAR_DEAD( l_U99 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U99 );
    }
    if (NOT (IS_CHAR_DEAD( l_U100 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
    }
    sub_395( 2, "sprunk_act" );
    sub_395( 2, "classprunk_act" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_395(int iParam0, string sParam1)
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
            if ((g_U10468 == iParam0) AND (l_U6))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U6 = 0;
                if (l_U4)
                {
                    sub_616();
                    l_U4 = 0;
                }
            }
            if (l_U5)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_665(), 1 );
                l_U5 = 0;
            }
            if (l_U3)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U3 = 0;
            }
        }
    }
    return;
}

void sub_616()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_665()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_949(unknown uParam0)
{
    l_U97 = sub_958();
    REQUEST_ANIMS( "amb@kiosk" );
    REQUEST_MODEL( 957096072 );
    REQUEST_MODEL( l_U97 );
    sub_1656();
    l_U48._fU0 = 0.00000000;
    l_U48._fU4 = 0.00000000;
    l_U48._fU8 = 0.00000000;
    l_U51._fU0 = 0.00000000;
    l_U51._fU4 = 180.00000000;
    l_U51._fU8 = 0.00000000;
    sub_1745();
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        sub_1796( uParam0 );
    }
    return;
}

void sub_958()
{
    int iVar2;
    unknown uVar3;
    int Result;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = -186113957;
    iVar5 = 142730876;
    iVar6 = 768442188;
    iVar7 = 420915580;
    FIND_PRIMARY_POPULATION_ZONE_GROUP( ref iVar2, ref uVar3 );
    if (iVar2 == 0)
    {
        return Result;
    }
    if (iVar2 == 1)
    {
        return iVar7;
    }
    if (iVar2 == 2)
    {
        return Result;
    }
    if (iVar2 == 3)
    {
        return Result;
    }
    if (iVar2 == 4)
    {
        return iVar7;
    }
    if (iVar2 == 5)
    {
        return iVar7;
    }
    if (iVar2 == 6)
    {
        return Result;
    }
    if (iVar2 == 7)
    {
        return Result;
    }
    if (iVar2 == 8)
    {
        return Result;
    }
    if (iVar2 == 9)
    {
        return Result;
    }
    if (iVar2 == 10)
    {
        return Result;
    }
    if (iVar2 == 11)
    {
        return iVar5;
    }
    if (iVar2 == 13)
    {
        return iVar5;
    }
    if (iVar2 == 14)
    {
        return Result;
    }
    if (iVar2 == 15)
    {
        return iVar6;
    }
    if (iVar2 == 16)
    {
        return iVar7;
    }
    if (iVar2 == 17)
    {
        return iVar7;
    }
    if (iVar2 == 18)
    {
        return iVar6;
    }
    if (iVar2 == 19)
    {
        return Result;
    }
    if (iVar2 == 20)
    {
        return Result;
    }
    if (iVar2 == 21)
    {
        return iVar6;
    }
    if (iVar2 == 22)
    {
        return Result;
    }
    if (iVar2 == 23)
    {
        return Result;
    }
    if (iVar2 == 24)
    {
        return iVar6;
    }
    if (iVar2 == 25)
    {
        return iVar5;
    }
    if (iVar2 == 26)
    {
        return iVar5;
    }
    if (iVar2 == 27)
    {
        return iVar5;
    }
    if (iVar2 == 28)
    {
        return iVar5;
    }
    if (iVar2 == 29)
    {
        return iVar5;
    }
    if (iVar2 == 30)
    {
        return iVar7;
    }
    if (iVar2 == 31)
    {
        return iVar7;
    }
    if (iVar2 == 32)
    {
        return iVar7;
    }
    if (iVar2 == 33)
    {
        return Result;
    }
    if (iVar2 == 34)
    {
        return iVar5;
    }
    if (iVar2 == 35)
    {
        return iVar5;
    }
    if (iVar2 == 36)
    {
        return iVar5;
    }
    if (iVar2 == 37)
    {
        return Result;
    }
    if (iVar2 == 38)
    {
        return Result;
    }
    if (iVar2 == 39)
    {
        return iVar6;
    }
    if (iVar2 == 40)
    {
        return iVar6;
    }
    if (iVar2 == 41)
    {
        return iVar7;
    }
    return Result;
}

void sub_1656()
{
    return;
}

void sub_1745()
{
    l_U93 = "sprunk_act";
    return;
}

void sub_1796(unknown uParam0)
{
    if (-2047685421 == l_U98)
    {
        l_U42._fU0 = -1.40000000;
        l_U42._fU4 = -0.10000000;
        l_U42._fU8 = 0.70000000;
    }
    else if (-1654925163 == l_U98)
    {
        l_U42._fU0 = -1.78000000;
        l_U42._fU4 = -0.92000000;
        l_U42._fU8 = 1.14500000;
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
        GET_OBJECT_MODEL( uParam0, ref l_U98 );
        if (-2047685421 == l_U98)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.50000000, -1.00000000, ref l_U27._fU0, ref l_U27._fU4, ref l_U27._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.30000000, 0.00000000, ref l_U24._fU0, ref l_U24._fU4, ref l_U24._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.50000000, 1.30000000, ref l_U36._fU0, ref l_U36._fU4, ref l_U36._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.39500000, -0.16000000, 0.77000000, ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, -1.25000000, 0.00000000, ref l_U27._fU0, ref l_U27._fU4, ref l_U27._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.00000000, 0, ref l_U24._fU0, ref l_U24._fU4, ref l_U24._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.50000000, 1.30000000, ref l_U36._fU0, ref l_U36._fU4, ref l_U36._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.68000000, -0.92000000, 1.14200000, ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
        }
        GET_HEADING_FROM_VECTOR_2D( l_U27._fU0 - l_U24._fU0, l_U27._fU4 - l_U24._fU4, ref l_U54 );
        GET_OBJECT_HEADING( uParam0, ref l_U61 );
        l_U62 = l_U61;
        l_U55 = l_U54 - 180;
    }
    return;
}

void sub_2406(unknown uParam0)
{
    sub_1796( uParam0 );
    if (-2047685421 == l_U98)
    {
        l_U42._fU0 = -1.39500000;
        l_U42._fU4 = -0.16000000;
        l_U42._fU8 = 0.77000000;
    }
    else if (-1654925163 == l_U98)
    {
        l_U42._fU0 = -1.68000000;
        l_U42._fU4 = -0.92000000;
        l_U42._fU8 = 1.14200000;
    }
    if (((NOT (IS_OBJECT_ON_SCREEN( uParam0 ))) AND (HAS_MODEL_LOADED( 957096072 ))) AND (HAS_MODEL_LOADED( l_U97 )))
    {
        COPY_SHARED_COMBAT_DECISION_MAKER( 65560, ref g_U9545 );
        CREATE_CHAR( 4, l_U97, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U99, 1 );
        if (NOT (IS_CHAR_INJURED( l_U99 )))
        {
            SET_CHAR_HEADING( l_U99, l_U54 );
            TASK_START_SCENARIO_IN_PLACE( l_U99, "scenario_standing", -1082130432 );
            SET_CHAR_WILL_USE_COVER( l_U99, 0 );
            SET_CHAR_IN_CUTSCENE( l_U99, 1 );
            SET_COMBAT_DECISION_MAKER( l_U99, g_U9545 );
            if ((GET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U99 )) == 0)
            {
                SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U99, 1 );
            }
        }
        CREATE_OBJECT( 957096072, l_U39._fU0, l_U39._fU4, l_U39._fU8, ref l_U108, 1 );
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_HEADING( l_U108, l_U62 );
            SET_OBJECT_COLLISION( l_U108, 1 );
            if (NOT (IS_OBJECT_ATTACHED( l_U108 )))
            {
                ATTACH_OBJECT_TO_OBJECT( l_U108, uParam0, 3, l_U42, l_U45 );
            }
        }
        l_U13 = 2;
    }
    return;
}

void sub_2925()
{
    switch (l_U84)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U99 )))
        {
            SAY_AMBIENT_SPEECH( l_U99, "ATTRACT_NEWS", 0, 1, 0 );
            GET_GAME_TIMER( ref l_U85 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref l_U88 );
            l_U84++;
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U86 );
        l_U87 = l_U86 - l_U85;
        if (l_U87 > (6000 + l_U88))
        {
            l_U84--;
        }
        break;
    }
    return;
}

void sub_3125()
{
    switch (l_U14)
    {
        case 0:
        if (l_U63 == 1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref l_U79 );
        }
        if (l_U79 == 0)
        {
            if (l_U65 == 0)
            {
                l_U14 = 3;
            }
        }
        else if (l_U79 == 1)
        {
            REQUEST_MODEL( l_U95 );
            REQUEST_MODEL( 583751396 );
            if (DOES_OBJECT_EXIST( l_U107 ))
            {
                if (IS_OBJECT_ATTACHED( l_U107 ))
                {
                    DETACH_OBJECT( l_U107, 1 );
                }
                DELETE_OBJECT( ref l_U107 );
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U107 );
            }
            l_U14 = 1;
        }
        else if (l_U79 == 2)
        {
            REQUEST_MODEL( l_U96 );
            l_U14 = 2;
        }
        else
        {
            REQUEST_MODEL( l_U94 );
            l_U14 = 4;
        };;;
        break;
        case 1:
        if (l_U100 == nil)
        {
            if (((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( 583751396 ))) AND (HAS_MODEL_LOADED( l_U95 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U21._fU0, l_U21._fU4, l_U21._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U100 );
            }
        }
        if (l_U100 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U100 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U100 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U100 )))
                    {
                        if (NOT (sub_3611( l_U27 )))
                        {
                            SET_CHAR_AS_MISSION_CHAR( l_U100 );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U100, 0 );
                            SET_CHAR_IN_CUTSCENE( l_U100, 1 );
                            CREATE_OBJECT( 583751396, l_U36._fU0, l_U36._fU4, l_U36._fU8, ref l_U106, 1 );
                            if (DOES_OBJECT_EXIST( l_U106 ))
                            {
                                SET_OBJECT_VISIBLE( l_U106, 0 );
                                if (NOT (IS_CHAR_DEAD( l_U99 )))
                                {
                                    if (NOT (IS_OBJECT_ATTACHED( l_U106 )))
                                    {
                                        ATTACH_OBJECT_TO_PED( l_U106, l_U99, 1232, 0.10000000, 0.02000000, 0, 0, 0, 0, 0 );
                                    }
                                }
                            }
                            sub_3924( l_U107 );
                            CREATE_OBJECT( 583751396, l_U36._fU0, l_U36._fU4, l_U36._fU8 + 0.02000000, ref l_U107, 1 );
                            if (DOES_OBJECT_EXIST( l_U107 ))
                            {
                                SET_OBJECT_VISIBLE( l_U107, 0 );
                                if (NOT (IS_CHAR_DEAD( l_U100 )))
                                {
                                    if (NOT (IS_OBJECT_ATTACHED( l_U107 )))
                                    {
                                        ATTACH_OBJECT_TO_PED( l_U107, l_U100, 1219, 0.10000000, 0.02000000, 0, 0, 3.18000000, 0, 0 );
                                    }
                                }
                            }
                            l_U77 = -1;
                            l_U15 = 0;
                            l_U13 = 3;
                        }
                        else
                        {
                            l_U100 = nil;
                            l_U77 = -1;
                        }
                    }
                    else
                    {
                        l_U100 = nil;
                        l_U77 = -1;
                    }
                }
                else
                {
                    l_U100 = nil;
                    l_U77 = -1;
                }
            }
            else
            {
                l_U100 = nil;
                l_U77 = -1;
            }
        }
        break;
        case 2:
        if (l_U100 == nil)
        {
            if ((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( l_U96 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U21._fU0, l_U21._fU4, l_U21._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U100 );
            }
        }
        if (l_U100 != nil)
        {
            if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U100 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U100 )))
                {
                    if (NOT (sub_3611( l_U27 )))
                    {
                        SET_CHAR_AS_MISSION_CHAR( l_U100 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U100, 0 );
                        SET_CHAR_IN_CUTSCENE( l_U100, 1 );
                        l_U77 = -1;
                        CREATE_OBJECT( l_U96, l_U36._fU0, l_U36._fU4, l_U36._fU8, ref l_U109, 1 );
                        if (DOES_OBJECT_EXIST( l_U109 ))
                        {
                            SET_OBJECT_VISIBLE( l_U109, 0 );
                            if (NOT (IS_CHAR_DEAD( l_U100 )))
                            {
                                if (NOT (IS_OBJECT_ATTACHED( l_U109 )))
                                {
                                    ATTACH_OBJECT_TO_PED( l_U109, l_U100, 1232, 0, 0, 0, 0, 0, 0, 0 );
                                }
                            }
                        }
                        l_U15 = 0;
                        l_U13 = 4;
                    }
                    else
                    {
                        l_U100 = nil;
                        l_U77 = -1;
                    }
                }
                else
                {
                    l_U100 = nil;
                    l_U77 = -1;
                }
            }
            else
            {
                l_U100 = nil;
                l_U77 = -1;
            }
        }
        break;
        case 4:
        if (l_U100 == nil)
        {
            if ((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( l_U94 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U21._fU0, l_U21._fU4, l_U21._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U100 );
            }
        }
        if (l_U100 != nil)
        {
            if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U100 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U100 )))
                {
                    if (NOT (sub_3611( l_U27 )))
                    {
                        SET_CHAR_AS_MISSION_CHAR( l_U100 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U100, 0 );
                        SET_CHAR_IN_CUTSCENE( l_U100, 1 );
                        CREATE_OBJECT( l_U94, l_U36._fU0, l_U36._fU4, l_U36._fU8, ref l_U110, 1 );
                        if (DOES_OBJECT_EXIST( l_U110 ))
                        {
                            SET_OBJECT_VISIBLE( l_U110, 0 );
                            if (NOT (IS_CHAR_DEAD( l_U100 )))
                            {
                                if (NOT (IS_OBJECT_ATTACHED( l_U110 )))
                                {
                                    ATTACH_OBJECT_TO_PED( l_U110, l_U100, 1232, 0, 0, 0, 0, 0, 0, 0 );
                                }
                            }
                        }
                        l_U77 = -1;
                        l_U15 = 0;
                        l_U13 = 5;
                    }
                    else
                    {
                        l_U100 = nil;
                        l_U77 = -1;
                    }
                }
                else
                {
                    l_U100 = nil;
                    l_U77 = -1;
                }
            }
            else
            {
                l_U100 = nil;
                l_U77 = -1;
            }
        }
        break;
    }
    return;
}

int sub_3611(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3620(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3620()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3924(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_ATTACHED( uParam0 ))
        {
            DETACH_OBJECT( uParam0, 0 );
        }
        DELETE_OBJECT( ref uParam0 );
    }
    return;
}

void sub_5117(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( l_U99 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U99, sub_3620(), 0 ))
        {
            SET_CHAR_RELATIONSHIP( l_U99, 5, 0 );
            sub_5181();
            sub_176();
        }
    }
    GET_CURRENT_CHAR_WEAPON( sub_3620(), ref uVar3 );
    if (NOT (IS_CHAR_DEAD( l_U99 )))
    {
        if (IS_PLAYER_TARGETTING_CHAR( sub_665(), l_U99 ))
        {
            if (NOT sub_5313())
            {
                sub_5181();
                sub_176();
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U99 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U99, 0 ))
        {
            sub_176();
        }
    }
    if (DOES_CHAR_EXIST( l_U99 ))
    {
        if (IS_CHAR_DEAD( l_U99 ))
        {
            sub_176();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U99 ))
        {
            sub_176();
        }
        if (IS_CHAR_INJURED( l_U99 ))
        {
            sub_176();
        }
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_3620() ))
    {
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            if (IS_OBJECT_ATTACHED( l_U111 ))
            {
                DETACH_OBJECT( l_U111, 1 );
            }
            DELETE_OBJECT( ref l_U111 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U111 );
        }
    }
    if (sub_5625())
    {
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            if (IS_OBJECT_ATTACHED( l_U111 ))
            {
                DETACH_OBJECT( l_U111, 1 );
            }
            DELETE_OBJECT( ref l_U111 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U111 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U100 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U100, sub_3620(), 0 ))
        {
            l_U100 = nil;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U79 );
            l_U14 = 0;
            l_U13 = 2;
            l_U15 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U100 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_3620(), l_U100 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U100 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U100 );
                TASK_WANDER_STANDARD( l_U100 );
            }
            l_U100 = nil;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U79 );
            l_U14 = 0;
            l_U13 = 2;
            l_U15 = 0;
        }
    }
    if (IS_CHAR_SHOOTING_IN_AREA( sub_3620(), l_U24._fU0 - 30, l_U24._fU4 - 30, l_U24._fU0 + 30, l_U24._fU4 + 30, 0 ))
    {
        sub_5181();
        sub_176();
    }
    if (NOT (IS_OBJECT_UPRIGHT( uParam0, 30 )))
    {
        sub_176();
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U21._fU0, l_U21._fU4, l_U21._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
        {
            sub_1796( uParam0 );
        }
    }
    if (l_U64 == 0)
    {
        if (DOES_CHAR_EXIST( l_U99 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U99 )))
            {
                GET_CHAR_HEADING( l_U99, ref l_U59 );
                if ((l_U15 != 9) AND (l_U15 != 8))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U99, l_U24._fU0, l_U24._fU4, l_U24._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
                    {
                        if (l_U100 != nil)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U100 )))
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
                                l_U100 = nil;
                            }
                        }
                        l_U64 = 1;
                    }
                }
            }
        }
    }
    if (l_U64 == 1)
    {
        sub_176();
    }
    if (NOT (IS_CHAR_INJURED( l_U99 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U99 )))
        {
            if (NOT (IS_CHAR_GETTING_UP( l_U99 )))
            {
                if ((sub_6488( l_U93, l_U27, 3.00000000, 3.00000000, 3.00000000, "amb@kiosk", 0 )) == 1)
                {
                    if (l_U100 != nil)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U100 )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
                            l_U100 = nil;
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U108 ))
                    {
                        ATTACH_OBJECT_TO_OBJECT( l_U108, uParam0, 3, l_U42, 0, 0, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U99 )))
                    {
                        CLEAR_CHAR_TASKS( l_U99 );
                    }
                    sub_7991();
                    sub_8038();
                    l_U13 = 6;
                }
            }
            else
            {
                sub_395( 2, "sprunk_act" );
                sub_395( 2, "classprunk_act" );
            }
        }
        else
        {
            sub_395( 2, "sprunk_act" );
            sub_395( 2, "classprunk_act" );
        }
    }
    return;
}

void sub_5181()
{
    if (NOT (IS_CHAR_INJURED( l_U99 )))
    {
        CLEAR_CHAR_TASKS( l_U99 );
        SET_CHAR_KEEP_TASK( l_U99, 1 );
        TASK_DUCK( l_U99, -2 );
    }
    return;
}

int sub_5313()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_3620(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    if (iVar2 == 3)
    {
        return 1;
    }
    if (iVar2 == 1)
    {
        return 1;
    }
    if (iVar2 == 46)
    {
        return 1;
    }
    return 0;
}

int sub_5625()
{
    if (sub_5634())
    {
        if (sub_5673())
        {
            return 1;
        }
    }
    return 0;
}

int sub_5634()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_5673()
{
    if (g_U94._fU60 != -1)
    {
        if ((g_U15862[g_U94._fU60]._fU196._fU24 == 0) || (g_U15862[g_U94._fU60]._fU196._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_6488(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int iVar11;

    if (l_U13 != 6)
    {
        if (IS_PLAYER_PLAYING( sub_665() ))
        {
            if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_665() ))
            {
                GET_INTERIOR_FROM_CHAR( sub_3620(), ref iVar11 );
                if (iVar11 == nil)
                {
                    if (NOT (IS_CHAR_INJURED( l_U99 )))
                    {
                        if (NOT (IS_PED_RAGDOLL( l_U99 )))
                        {
                            if (NOT (IS_CHAR_GETTING_UP( l_U99 )))
                            {
                                if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U99 )))
                                {
                                    if (HAVE_ANIMS_LOADED( uParam7 ))
                                    {
                                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3620() )))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3620(), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, 0 ))
                                            {
                                                sub_1745();
                                                if (sub_6719( 2, 0 ))
                                                {
                                                    if (sub_6977( 2, uParam0, 0 ))
                                                    {
                                                        if (IS_SCORE_GREATER( sub_665(), uParam8 ))
                                                        {
                                                            SET_MINIGAME_IN_PROGRESS( 1 );
                                                            REMOVE_PED_HELMET( sub_3620(), 1 );
                                                            SET_PLAYER_CONTROL( sub_665(), 0 );
                                                            return 1;
                                                        }
                                                        else
                                                        {
                                                            sub_7665( "FAIL_TRAN", 3000, 0 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_395( 2, uParam0 );
                                                }
                                            }
                                            else
                                            {
                                                sub_395( 2, uParam0 );
                                            }
                                        }
                                        else
                                        {
                                            sub_395( 2, uParam0 );
                                        }
                                    }
                                    else
                                    {
                                        sub_395( 2, uParam0 );
                                    }
                                }
                                else
                                {
                                    sub_395( 2, uParam0 );
                                }
                            }
                            else
                            {
                                sub_395( 2, uParam0 );
                            }
                        }
                        else
                        {
                            sub_395( 2, uParam0 );
                        }
                    }
                    else
                    {
                        sub_395( 2, uParam0 );
                    }
                }
                else
                {
                    sub_395( 2, uParam0 );
                }
            }
            else
            {
                sub_395( 2, uParam0 );
            }
        }
    }
    return 0;
}

int sub_6719(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_665() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_665() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_665() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_5634())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3620() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_6871())
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

void sub_6871()
{
    return sub_6882( 0, 0 );
}

int sub_6882(boolean bParam0, unknown uParam1)
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

int sub_6977(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6719( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U5)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_665(), 0 );
                l_U5 = 1;
            }
            g_U10468 = uParam0;
            l_U6 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7252();
                l_U4 = 1;
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
                            l_U3 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U3)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U3 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7252()
{
    return sub_6882( 1, 1 );
}

int sub_7665(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_7991()
{
    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_3620() );
    }
    return;
}

void sub_8038()
{
    sub_395( 2, "sprunk_act" );
    sub_395( 2, "classprunk_act" );
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    return;
}

void sub_8224()
{
    if (NOT (IS_CHAR_INJURED( l_U100 )))
    {
        if (l_U15 > 6)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U100 );
                if (NOT (IS_CHAR_INJURED( l_U99 )))
                {
                    CLEAR_CHAR_TASKS( l_U99 );
                }
                l_U15 = 14;
            }
        }
        if (l_U17 > 2)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U100 );
                if (NOT (IS_CHAR_INJURED( l_U99 )))
                {
                    CLEAR_CHAR_TASKS( l_U99 );
                }
                l_U17 = 14;
            }
        }
    }
    return;
}

void sub_8474(unknown uParam0)
{
    if (DOES_CHAR_EXIST( l_U100 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U100 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U99 )))
            {
                switch (l_U15)
                {
                    case 0:
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, 2, -2, 1.00000000 );
                    if (sub_8653( l_U99, l_U24 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD( l_U99, l_U24._fU0, l_U24._fU4, l_U24._fU8, l_U54, 2.00000000 );
                    }
                    l_U15 = 1;
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U100, 27, ref l_U18 );
                    if ((l_U18 == 7) || (l_U18 == 2))
                    {
                        l_U15 = 2;
                    }
                    break;
                    case 2:
                    if (sub_8653( l_U100, l_U27 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, l_U55, 10.00000000, 30.00000000 );
                        l_U18 = 0;
                        l_U15 = 3;
                    }
                    else
                    {
                        l_U15 = 0;
                    }
                    break;
                    case 3:
                    GET_SCRIPT_TASK_STATUS( l_U100, 68, ref l_U18 );
                    if ((l_U18 == 7) || (l_U18 == 2))
                    {
                        l_U15 = 6;
                    }
                    break;
                    case 6:
                    TASK_PLAY_ANIM( l_U100, "CUSTOMER_CIGS", "amb@kiosk", 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM_WITH_FLAGS( l_U100, "CUSTOMER_CIGS", "amb@kiosk", 8.00000000, -2, 8 );
                    TASK_PLAY_ANIM( l_U99, "VENDOR_CIGS", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    l_U18 = 0;
                    l_U15 = 9;
                    break;
                    case 9:
                    if (IS_CHAR_PLAYING_ANIM( l_U99, "amb@kiosk", "VENDOR_CIGS" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U99, "amb@kiosk", "VENDOR_CIGS", ref l_U58 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_CIGS" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_CIGS", ref l_U60 );
                    }
                    if ((l_U58 > 0.48300000) AND (l_U66[0] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U106 ))
                        {
                            SET_OBJECT_VISIBLE( l_U106, 1 );
                            l_U66[0] = 1;
                        }
                    }
                    if ((l_U58 > 0.64000000) AND (l_U66[1] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U106 ))
                        {
                            SAY_AMBIENT_SPEECH( l_U99, "SELL_GOODS", 0, 1, 0 );
                            SET_OBJECT_VISIBLE( l_U106, 0 );
                            l_U66[1] = 1;
                        }
                    }
                    if ((l_U60 > 0.47100000) AND (l_U66[2] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U107 ))
                        {
                            SET_OBJECT_VISIBLE( l_U107, 1 );
                            l_U66[2] = 1;
                        }
                    }
                    if ((l_U60 > 0.61200000) AND (l_U66[3] == 0))
                    {
                        CREATE_OBJECT( l_U95, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U103, 1 );
                        ATTACH_OBJECT_TO_PED( l_U103, l_U100, 1232, -0.02600000, 0.02000000, 0.01400000, -0.14000000, 0, -0.20000000, 0 );
                        l_U66[3] = 1;
                    }
                    if ((l_U60 > 0.72000000) AND (l_U66[4] == 0))
                    {
                        sub_3924( l_U107 );
                        l_U66[4] = 1;
                    }
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U99, "amb@kiosk", "VENDOR_CIGS" )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_CIGS" )))
                        {
                            SAY_AMBIENT_SPEECH( l_U100, "Thanks", 1, 0, 0 );
                            l_U78 = -1;
                            l_U15 = 14;
                        }
                    }
                    break;
                    case 14:
                    l_U15 = 16;
                    break;
                    case 16:
                    for ( l_U82 = 0; l_U82 <= 9; l_U82++ )
                    {
                        l_U66[l_U82] = 0;
                    }
                    l_U83 = 0;
                    if (DOES_OBJECT_EXIST( l_U106 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U106 ))
                        {
                            DETACH_OBJECT( l_U106, 1 );
                        }
                        DELETE_OBJECT( ref l_U106 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U106 );
                    }
                    if (DOES_OBJECT_EXIST( l_U107 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U107 ))
                        {
                            DETACH_OBJECT( l_U107, 1 );
                        }
                        DELETE_OBJECT( ref l_U107 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U107 );
                    }
                    if (DOES_OBJECT_EXIST( l_U103 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U103 ))
                        {
                            DETACH_OBJECT( l_U103, 1 );
                        }
                        DELETE_OBJECT( ref l_U103 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U103 );
                    }
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U79 );
                    l_U14 = 0;
                    l_U15 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U100 )))
                    {
                        GIVE_PED_AMBIENT_OBJECT( l_U100, l_U95 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
                    }
                    l_U100 = nil;
                    l_U13 = 2;
                    break;
                }
            }
        }
    }
    return;
}

int sub_8653(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if ((VDIST( uVar6, uParam1 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10186(unknown uParam0)
{
    if (DOES_CHAR_EXIST( l_U100 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U100 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U99 )))
            {
                switch (l_U15)
                {
                    case 0:
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, 2, -2, 1.00000000 );
                    if (sub_8653( l_U99, l_U24 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD( l_U99, l_U24._fU0, l_U24._fU4, l_U24._fU8, l_U54, 2.00000000 );
                    }
                    l_U15 = 1;
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U100, 27, ref l_U18 );
                    if ((l_U18 == 7) || (l_U18 == 2))
                    {
                        l_U15 = 2;
                    }
                    break;
                    case 2:
                    if (sub_8653( l_U100, l_U27 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, l_U55, 10.00000000, 30.00000000 );
                        l_U18 = 0;
                        l_U15 = 3;
                    }
                    else
                    {
                        l_U15 = 0;
                    }
                    break;
                    case 3:
                    GET_SCRIPT_TASK_STATUS( l_U100, 68, ref l_U18 );
                    if ((l_U18 == 7) || (l_U18 == 2))
                    {
                        l_U15 = 6;
                    }
                    break;
                    case 6:
                    TASK_PLAY_ANIM( l_U100, "CUSTOMER_PAPER", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( l_U99, "VENDOR_PAPER", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    l_U18 = 0;
                    l_U15 = 7;
                    break;
                    case 7:
                    if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_PAPER" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_PAPER", ref l_U58 );
                        if (l_U58 > 0.55600000)
                        {
                            if (DOES_OBJECT_EXIST( l_U109 ))
                            {
                                SET_OBJECT_VISIBLE( l_U109, 1 );
                            }
                            SAY_AMBIENT_SPEECH( l_U99, "SELL_GOODS", 0, 1, 0 );
                            l_U15 = 13;
                        }
                    }
                    break;
                    case 13:
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_PAPER" )))
                    {
                        SAY_AMBIENT_SPEECH( l_U100, "Thanks", 1, 0, 0 );
                        l_U15 = 14;
                    }
                    break;
                    case 14:
                    l_U15 = 16;
                    break;
                    case 16:
                    if (DOES_OBJECT_EXIST( l_U109 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U109 ))
                        {
                            DETACH_OBJECT( l_U109, 1 );
                        }
                        DELETE_OBJECT( ref l_U109 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U109 );
                    }
                    GIVE_PED_AMBIENT_OBJECT( l_U100, l_U96 );
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U79 );
                    l_U14 = 0;
                    l_U15 = 0;
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
                    l_U100 = nil;
                    l_U13 = 2;
                    break;
                }
            }
        }
    }
    return;
}

void sub_11137(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U100 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U99 )))
        {
            switch (l_U17)
            {
                case 0:
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, 2, -2, 1.00000000 );
                if (sub_8653( l_U99, l_U24 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U99, l_U24._fU0, l_U24._fU4, l_U24._fU8, l_U54, 2.00000000 );
                }
                l_U18 = 0;
                l_U17 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( l_U100, 27, ref l_U18 );
                if ((l_U18 == 7) || (l_U18 == 2))
                {
                    l_U17 = 2;
                }
                break;
                case 2:
                if (sub_8653( l_U100, l_U27 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U100, l_U27._fU0, l_U27._fU4, l_U27._fU8, l_U55, 10.00000000, 270.00000000 );
                    l_U17 = 3;
                }
                else
                {
                    l_U17 = 0;
                }
                break;
                case 3:
                GET_SCRIPT_TASK_STATUS( l_U100, 68, ref l_U18 );
                if ((l_U18 == 7) || (l_U18 == 2))
                {
                    l_U17 = 6;
                }
                break;
                case 6:
                TASK_PLAY_ANIM( l_U100, "CUSTOMER_JUICE", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U99, "VENDOR_JUICE", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                l_U18 = 0;
                l_U58 = 0.00000000;
                l_U17 = 7;
                break;
                case 7:
                if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_JUICE", ref l_U58 );
                }
                if (l_U58 > 0.17000000)
                {
                    l_U62 = 0;
                    l_U17 = 8;
                }
                break;
                case 8:
                if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_JUICE", ref l_U58 );
                }
                if (l_U81 == 10)
                {
                    l_U17 = 9;
                }
                else
                {
                    l_U62 -= 0.10000000;
                    ATTACH_OBJECT_TO_OBJECT( l_U108, uParam0, 3, l_U42, 0.00000000, 0.00000000, l_U62 );
                    l_U81++;
                }
                if (l_U58 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U110, 1 );
                }
                break;
                case 9:
                if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_JUICE", ref l_U58 );
                }
                if (l_U58 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U110, 1 );
                }
                l_U18 = 0;
                l_U58 = 0.00000000;
                l_U81 = 0;
                l_U17 = 10;
                break;
                case 10:
                if (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U100, "amb@kiosk", "CUSTOMER_JUICE", ref l_U58 );
                }
                if (l_U58 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U110, 1 );
                }
                if (l_U58 > 0.64000000)
                {
                    SAY_AMBIENT_SPEECH( l_U100, "Buy_Drink", 1, 0, 0 );
                    l_U17 = 11;
                }
                break;
                case 11:
                l_U62 += 0.10000000;
                ATTACH_OBJECT_TO_OBJECT( l_U108, uParam0, 3, l_U42, 0.00000000, 0.00000000, l_U62 );
                l_U81++;
                if (l_U81 == 10)
                {
                    ATTACH_OBJECT_TO_OBJECT( l_U108, uParam0, 3, l_U42, 0.00000000, 0.00000000, 0.00000000 );
                    l_U17 = 12;
                }
                break;
                case 12:
                SAY_AMBIENT_SPEECH( l_U99, "SELL_GOODS", 0, 1, 0 );
                l_U18 = 0;
                l_U58 = 0.00000000;
                l_U81 = 0;
                l_U17 = 13;
                break;
                case 13:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U100, "amb@kiosk", "CUSTOMER_JUICE" )))
                {
                    SAY_AMBIENT_SPEECH( l_U100, "Thanks", 1, 0, 0 );
                    l_U17 = 14;
                }
                break;
                case 14:
                if (DOES_OBJECT_EXIST( l_U110 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U110 ))
                    {
                        DETACH_OBJECT( l_U110, 1 );
                    }
                    DELETE_OBJECT( ref l_U110 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U110 );
                }
                GIVE_PED_AMBIENT_OBJECT( l_U100, l_U94 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U100 );
                l_U100 = nil;
                GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U79 );
                l_U14 = 0;
                l_U17 = 0;
                l_U100 = nil;
                l_U13 = 2;
                break;
            }
        }
    }
    return;
}

void sub_12939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, float fParam26, float fParam27, float fParam28, int iParam29, unknown uParam30, float fParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35)
{
    int iVar38;
    float fVar39;
    unknown uVar40;
    float fVar41;

    fVar41 = 0.00000000;
    if (NOT (IS_CHAR_INJURED( uParam25 )))
    {
        switch (l_U7)
        {
            case 0:
            REQUEST_MODEL( uParam33 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3620(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 2, -2, 2.00000000 );
            l_U7 = 1;
            break;
            case 1:
            sub_13164();
            GET_SCRIPT_TASK_STATUS( sub_3620(), 27, ref iVar38 );
            if (iVar38 == 7)
            {
                l_U7 = 2;
            }
            break;
            case 2:
            sub_13164();
            GET_HEADING_FROM_VECTOR_2D( uParam0._fU0 - uParam3._fU0, uParam0._fU4 - uParam3._fU4, ref uVar40 );
            fVar39 = uVar40 - 180;
            if (sub_13433( uParam0 ))
            {
                TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_3620(), uParam0._fU0, uParam0._fU4, uParam0._fU8, fVar39, 10.00000000, 270.00000000 );
                if (IS_PLAYER_PLAYING( sub_665() ))
                {
                    SET_PLAYER_CONTROL( sub_665(), 0 );
                }
                l_U7 = 3;
            }
            else
            {
                l_U7 = 0;
            }
            break;
            case 3:
            sub_13164();
            if (HAS_MODEL_LOADED( uParam33 ))
            {
                sub_13632();
                l_U7 = 4;
            }
            break;
            case 4:
            sub_13164();
            GET_SCRIPT_TASK_STATUS( sub_3620(), 68, ref iVar38 );
            if (iVar38 == 7)
            {
                CREATE_OBJECT( uParam33, uParam3._fU0, uParam3._fU4, uParam3._fU8, uParam34, 1 );
                l_U7 = 5;
            }
            break;
            case 5:
            if (DOES_OBJECT_EXIST( (uParam34^) ))
            {
                SET_OBJECT_VISIBLE( (uParam34^), 0 );
                ATTACH_OBJECT_TO_PED( (uParam34^), sub_3620(), 1232, 0, 0, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM( sub_3620(), uParam6, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( uParam25, uParam7, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
                iVar38 = 0;
                fVar41 = 0.00000000;
                l_U10 = 0;
                l_U7 = 6;
            }
            break;
            case 6:
            if (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3620(), uParam8, uParam6, ref fVar41 );
            }
            if (fVar41 > fParam26)
            {
                l_U7 = 7;
            }
            break;
            case 7:
            if (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3620(), uParam8, uParam6, ref fVar41 );
            }
            if (l_U10 == iParam29)
            {
                l_U7 = 8;
            }
            else
            {
                l_U9 -= 0.10000000;
                ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, uParam13._fU0, uParam13._fU4, l_U9 );
                l_U10++;
            }
            if (fVar41 > fParam27)
            {
                if (DOES_OBJECT_EXIST( (uParam34^) ))
                {
                    SET_OBJECT_VISIBLE( (uParam34^), 1 );
                }
            }
            break;
            case 8:
            if (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3620(), uParam8, uParam6, ref fVar41 );
            }
            if (fVar41 > fParam27)
            {
                if (DOES_OBJECT_EXIST( (uParam34^) ))
                {
                    SAY_AMBIENT_SPEECH( sub_3620(), "GENERIC_BUY", 1, 1, 0 );
                    SET_OBJECT_VISIBLE( (uParam34^), 1 );
                }
            }
            iVar38 = 0;
            fVar41 = 0.00000000;
            l_U10 = 0;
            l_U7 = 9;
            break;
            case 9:
            if (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3620(), uParam8, uParam6, ref fVar41 );
            }
            if (fVar41 > fParam27)
            {
                if (DOES_OBJECT_EXIST( (uParam34^) ))
                {
                    SET_OBJECT_VISIBLE( (uParam34^), 1 );
                }
            }
            if (fVar41 > fParam28)
            {
                l_U7 = 10;
            }
            break;
            case 10:
            l_U9 += 0.10000000;
            if (DOES_OBJECT_EXIST( uParam9 ))
            {
                ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, uParam13._fU0, uParam13._fU4, l_U9 );
                l_U10++;
            }
            if (l_U10 == iParam29)
            {
                if (DOES_OBJECT_EXIST( uParam9 ))
                {
                    ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, 0, 0, 0 );
                    l_U7 = 11;
                }
            }
            break;
            case 11:
            SAY_AMBIENT_SPEECH( uParam25, uParam17, 0, 0, 0 );
            l_U7 = 12;
            break;
            case 12:
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam6 )))
            {
                SAY_AMBIENT_SPEECH( sub_3620(), "THANKS", 1, 1, 0 );
                l_U7 = 13;
            }
            break;
            case 13:
            sub_14689( 1 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_3620(), uParam24, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
            (uParam35^) = 1;
            l_U7 = 14;
            break;
            case 14:
            if (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam24 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3620(), uParam8, uParam24, ref fVar41 );
            }
            if (fVar41 > fParam31)
            {
                if (DOES_OBJECT_EXIST( (uParam34^) ))
                {
                    if (IS_OBJECT_ATTACHED( (uParam34^) ))
                    {
                        DETACH_OBJECT( (uParam34^), 1 );
                    }
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( uParam34 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam33 );
                }
            }
            sub_14923();
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_3620(), uParam8, uParam24 )))
            {
                l_U7 = 15;
            }
            break;
            case 15:
            if (DOES_OBJECT_EXIST( (uParam34^) ))
            {
                if (IS_OBJECT_ATTACHED( (uParam34^) ))
                {
                    DETACH_OBJECT( (uParam34^), 1 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( uParam34 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( uParam33 );
            }
            SET_PLAYER_CONTROL( sub_665(), 1 );
            sub_15116();
            l_U7 = 0;
            (uParam30^) = 1;
            break;
        }
    }
    return;
}

void sub_13164()
{
    if (sub_13173())
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3620() );
        l_U7 = 15;
    }
    return;
}

int sub_13173()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_13221()))
    {
        return 1;
    }
    return 0;
}

int sub_13221()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

int sub_13433(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        GET_CHAR_COORDINATES( sub_3620(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_13632()
{
    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3620(), ref l_U11 );
        if (l_U11 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_3620(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_3620(), 0, 1 );
        }
        if (l_U11 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_3620(), 0, 1 );
        }
    }
    return;
}

void sub_14689(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_665(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_665(), 1 );
    }
    return;
}

void sub_14923()
{
    if ((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 )))
    {
        CLEAR_CHAR_TASKS( sub_3620() );
    }
    return;
}

void sub_15116()
{
    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        if (l_U11 != 0)
        {
            if (l_U11 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_3620(), l_U11, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_3620(), 46 );
            }
        }
    }
    return;
}

void sub_15255()
{
    ADD_SCORE( sub_665(), -1 );
    sub_15279( 0, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 374, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 1 );
    sub_15706();
    SET_CHAR_HEALTH( sub_3620(), sub_15781() );
    return;
}

void sub_15279(unknown uParam0, unknown uParam1)
{
    sub_15300( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_15300(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15706()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_665() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_665() );
        }
    }
    sub_7991();
    return;
}

void sub_15781()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_3620() )))
    {
        GET_CHAR_HEALTH( sub_3620(), ref Result );
        if (Result <= 150)
        {
            Result += 50;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}