void main()
{
    l_U0 = 0.40000000;
    l_U5 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U43 = {0, 0, 0};
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U75 = -1;
    l_U76 = -1;
    l_U77 = 1;
    l_U79 = 0;
    l_U81 = 0;
    l_U87 = 0;
    l_U88 = 0;
    l_U92 = -1360999125;
    l_U93 = -268530289;
    l_U94 = 2043092722;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_160();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U9890 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_649() ))
            {
                if (g_U9077 == 1)
                {
                    if (DOES_OBJECT_EXIST( l_U111 ))
                    {
                        if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U111 ))
                        {
                            switch (l_U11)
                            {
                                case 0:
                                sub_933( l_U111 );
                                l_U11 = 1;
                                break;
                                case 1:
                                sub_2406( l_U111 );
                                break;
                                case 2:
                                l_U89 = 0;
                                sub_2918();
                                sub_3118();
                                sub_5110( l_U111 );
                                break;
                                case 3:
                                sub_8209();
                                sub_8459( l_U111 );
                                sub_5110( l_U111 );
                                break;
                                case 4:
                                sub_8209();
                                sub_10171( l_U111 );
                                sub_5110( l_U111 );
                                break;
                                case 5:
                                sub_8209();
                                sub_11122( l_U111 );
                                sub_5110( l_U111 );
                                break;
                                case 6:
                                sub_8209();
                                sub_12924( l_U25, l_U22, "CUSTOMER_JUICE", "VENDOR_JUICE", "amb@kiosk", l_U106, l_U40, l_U43, 3, "SELL_GOODS", 0.20000000, 0, -0.02000000, 0.04000000, -0.20000000, 2.28000000, "player_drink", l_U97, 0.17000000, 0.38000000, 0.64000000, 10, ref l_U89, 0.86500000, l_U111, l_U92, ref l_U109, ref l_U90 );
                                if (l_U89 == 1)
                                {
                                    if (l_U90 == 1)
                                    {
                                        sub_15240();
                                    }
                                    sub_379( 2, "sprunk_act" );
                                    sub_379( 2, "classprunk_act" );
                                    l_U11 = 2;
                                    l_U89 = 0;
                                }
                                break;
                            }
                        }
                        else
                        {
                            sub_160();
                        }
                    }
                    else
                    {
                        sub_160();
                    }
                }
                else
                {
                    sub_160();
                }
            }
            else
            {
                sub_160();
            }
        }
        else
        {
            sub_160();
        }
    }
    return;
}

void sub_160()
{
    if (DOES_OBJECT_EXIST( l_U104 ))
    {
        if (IS_OBJECT_ATTACHED( l_U104 ))
        {
            DETACH_OBJECT( l_U104, 1 );
        }
        DELETE_OBJECT( ref l_U104 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U104 );
    }
    if (DOES_OBJECT_EXIST( l_U105 ))
    {
        if (IS_OBJECT_ATTACHED( l_U105 ))
        {
            DETACH_OBJECT( l_U105, 1 );
        }
        DELETE_OBJECT( ref l_U105 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U105 );
    }
    if (NOT (IS_CHAR_DEAD( l_U97 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U97 );
    }
    if (NOT (IS_CHAR_DEAD( l_U98 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
    }
    sub_379( 2, "sprunk_act" );
    sub_379( 2, "classprunk_act" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_379(int iParam0, string sParam1)
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
            if ((g_U9172 == iParam0) AND (l_U4))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U4 = 0;
                if (l_U2)
                {
                    sub_600();
                    l_U2 = 0;
                }
            }
            if (l_U3)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_649(), 1 );
                l_U3 = 0;
            }
            if (l_U1)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U1 = 0;
            }
        }
    }
    return;
}

void sub_600()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_649()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_933(unknown uParam0)
{
    l_U95 = sub_942();
    REQUEST_ANIMS( "amb@kiosk" );
    REQUEST_MODEL( 957096072 );
    REQUEST_MODEL( l_U95 );
    sub_1640();
    l_U46._fU0 = 0.00000000;
    l_U46._fU4 = 0.00000000;
    l_U46._fU8 = 0.00000000;
    l_U49._fU0 = 0.00000000;
    l_U49._fU4 = 180.00000000;
    l_U49._fU8 = 0.00000000;
    sub_1729();
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        sub_1780( uParam0 );
    }
    return;
}

void sub_942()
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

void sub_1640()
{
    return;
}

void sub_1729()
{
    l_U91 = "sprunk_act";
    return;
}

void sub_1780(unknown uParam0)
{
    if (-2047685421 == l_U96)
    {
        l_U40._fU0 = -1.40000000;
        l_U40._fU4 = -0.10000000;
        l_U40._fU8 = 0.70000000;
    }
    else if (-1654925163 == l_U96)
    {
        l_U40._fU0 = -1.78000000;
        l_U40._fU4 = -0.92000000;
        l_U40._fU8 = 1.14500000;
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
        GET_OBJECT_MODEL( uParam0, ref l_U96 );
        if (-2047685421 == l_U96)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.50000000, -1.00000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.30000000, 0.00000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.50000000, 1.30000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.39500000, -0.16000000, 0.77000000, ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
        }
        else if (-1654925163 == l_U96)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, -1.25000000, 0.00000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.00000000, 0, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 1.50000000, 1.30000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.68000000, -0.92000000, 1.14200000, ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
        }
        GET_HEADING_FROM_VECTOR_2D( l_U25._fU0 - l_U22._fU0, l_U25._fU4 - l_U22._fU4, ref l_U52 );
        GET_OBJECT_HEADING( uParam0, ref l_U59 );
        l_U60 = l_U59;
        l_U53 = l_U52 - 180;
    }
    return;
}

void sub_2406(unknown uParam0)
{
    if (-2047685421 == l_U96)
    {
        l_U40._fU0 = -1.39500000;
        l_U40._fU4 = -0.16000000;
        l_U40._fU8 = 0.77000000;
    }
    else if (-1654925163 == l_U96)
    {
        l_U40._fU0 = -1.68000000;
        l_U40._fU4 = -0.92000000;
        l_U40._fU8 = 1.14200000;
    }
    if (((NOT (IS_OBJECT_ON_SCREEN( uParam0 ))) AND (HAS_MODEL_LOADED( 957096072 ))) AND (HAS_MODEL_LOADED( l_U95 )))
    {
        COPY_SHARED_COMBAT_DECISION_MAKER( 65560, ref g_U9075 );
        CREATE_CHAR( 4, l_U95, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U97, 1 );
        if (NOT (IS_CHAR_INJURED( l_U97 )))
        {
            SET_CHAR_HEADING( l_U97, l_U52 );
            TASK_START_SCENARIO_IN_PLACE( l_U97, "scenario_standing", -1082130432 );
            SET_CHAR_WILL_USE_COVER( l_U97, 0 );
            SET_CHAR_IN_CUTSCENE( l_U97, 1 );
            SET_COMBAT_DECISION_MAKER( l_U97, g_U9075 );
            if ((GET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U97 )) == 0)
            {
                SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U97, 1 );
            }
        }
        CREATE_OBJECT( 957096072, l_U37._fU0, l_U37._fU4, l_U37._fU8, ref l_U106, 1 );
        if (DOES_OBJECT_EXIST( l_U106 ))
        {
            SET_OBJECT_HEADING( l_U106, l_U60 );
            SET_OBJECT_COLLISION( l_U106, 1 );
            if (NOT (IS_OBJECT_ATTACHED( l_U106 )))
            {
                ATTACH_OBJECT_TO_OBJECT( l_U106, uParam0, 3, l_U40, l_U43 );
            }
        }
        l_U11 = 2;
    }
    return;
}

void sub_2918()
{
    switch (l_U82)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U97 )))
        {
            SAY_AMBIENT_SPEECH( l_U97, "ATTRACT_NEWS", 0, 1, 0 );
            GET_GAME_TIMER( ref l_U83 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref l_U86 );
            l_U82++;
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U84 );
        l_U85 = l_U84 - l_U83;
        if (l_U85 > (6000 + l_U86))
        {
            l_U82--;
        }
        break;
    }
    return;
}

void sub_3118()
{
    switch (l_U12)
    {
        case 0:
        if (l_U61 == 1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref l_U77 );
        }
        if (l_U77 == 0)
        {
            if (l_U63 == 0)
            {
                l_U12 = 3;
            }
        }
        else if (l_U77 == 1)
        {
            REQUEST_MODEL( l_U93 );
            REQUEST_MODEL( 583751396 );
            if (DOES_OBJECT_EXIST( l_U105 ))
            {
                if (IS_OBJECT_ATTACHED( l_U105 ))
                {
                    DETACH_OBJECT( l_U105, 1 );
                }
                DELETE_OBJECT( ref l_U105 );
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U105 );
            }
            l_U12 = 1;
        }
        else if (l_U77 == 2)
        {
            REQUEST_MODEL( l_U94 );
            l_U12 = 2;
        }
        else
        {
            REQUEST_MODEL( l_U92 );
            l_U12 = 4;
        };;;
        break;
        case 1:
        if (l_U98 == nil)
        {
            if (((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( 583751396 ))) AND (HAS_MODEL_LOADED( l_U93 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U19._fU0, l_U19._fU4, l_U19._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U98 );
            }
        }
        if (l_U98 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U98 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U98 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U98 )))
                    {
                        if (NOT (sub_3604( l_U25 )))
                        {
                            SET_CHAR_AS_MISSION_CHAR( l_U98 );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U98, 0 );
                            SET_CHAR_IN_CUTSCENE( l_U98, 1 );
                            CREATE_OBJECT( 583751396, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U104, 1 );
                            if (DOES_OBJECT_EXIST( l_U104 ))
                            {
                                SET_OBJECT_VISIBLE( l_U104, 0 );
                                if (NOT (IS_CHAR_DEAD( l_U97 )))
                                {
                                    if (NOT (IS_OBJECT_ATTACHED( l_U104 )))
                                    {
                                        ATTACH_OBJECT_TO_PED( l_U104, l_U97, 1232, 0.10000000, 0.02000000, 0, 0, 0, 0, 0 );
                                    }
                                }
                            }
                            sub_3917( l_U105 );
                            CREATE_OBJECT( 583751396, l_U34._fU0, l_U34._fU4, l_U34._fU8 + 0.02000000, ref l_U105, 1 );
                            if (DOES_OBJECT_EXIST( l_U105 ))
                            {
                                SET_OBJECT_VISIBLE( l_U105, 0 );
                                if (NOT (IS_CHAR_DEAD( l_U98 )))
                                {
                                    if (NOT (IS_OBJECT_ATTACHED( l_U105 )))
                                    {
                                        ATTACH_OBJECT_TO_PED( l_U105, l_U98, 1219, 0.10000000, 0.02000000, 0, 0, 3.18000000, 0, 0 );
                                    }
                                }
                            }
                            l_U75 = -1;
                            l_U13 = 0;
                            l_U11 = 3;
                        }
                        else
                        {
                            l_U98 = nil;
                            l_U75 = -1;
                        }
                    }
                    else
                    {
                        l_U98 = nil;
                        l_U75 = -1;
                    }
                }
                else
                {
                    l_U98 = nil;
                    l_U75 = -1;
                }
            }
            else
            {
                l_U98 = nil;
                l_U75 = -1;
            }
        }
        break;
        case 2:
        if (l_U98 == nil)
        {
            if ((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( l_U94 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U19._fU0, l_U19._fU4, l_U19._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U98 );
            }
        }
        if (l_U98 != nil)
        {
            if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U98 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U98 )))
                {
                    if (NOT (sub_3604( l_U25 )))
                    {
                        SET_CHAR_AS_MISSION_CHAR( l_U98 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U98, 0 );
                        SET_CHAR_IN_CUTSCENE( l_U98, 1 );
                        l_U75 = -1;
                        CREATE_OBJECT( l_U94, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U107, 1 );
                        if (DOES_OBJECT_EXIST( l_U107 ))
                        {
                            SET_OBJECT_VISIBLE( l_U107, 0 );
                            if (NOT (IS_CHAR_DEAD( l_U98 )))
                            {
                                if (NOT (IS_OBJECT_ATTACHED( l_U107 )))
                                {
                                    ATTACH_OBJECT_TO_PED( l_U107, l_U98, 1232, 0, 0, 0, 0, 0, 0, 0 );
                                }
                            }
                        }
                        l_U13 = 0;
                        l_U11 = 4;
                    }
                    else
                    {
                        l_U98 = nil;
                        l_U75 = -1;
                    }
                }
                else
                {
                    l_U98 = nil;
                    l_U75 = -1;
                }
            }
            else
            {
                l_U98 = nil;
                l_U75 = -1;
            }
        }
        break;
        case 4:
        if (l_U98 == nil)
        {
            if ((HAVE_ANIMS_LOADED( "amb@kiosk" )) AND (HAS_MODEL_LOADED( l_U92 )))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U19._fU0, l_U19._fU4, l_U19._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U98 );
            }
        }
        if (l_U98 != nil)
        {
            if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U98 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U98 )))
                {
                    if (NOT (sub_3604( l_U25 )))
                    {
                        SET_CHAR_AS_MISSION_CHAR( l_U98 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U98, 0 );
                        SET_CHAR_IN_CUTSCENE( l_U98, 1 );
                        CREATE_OBJECT( l_U92, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U108, 1 );
                        if (DOES_OBJECT_EXIST( l_U108 ))
                        {
                            SET_OBJECT_VISIBLE( l_U108, 0 );
                            if (NOT (IS_CHAR_DEAD( l_U98 )))
                            {
                                if (NOT (IS_OBJECT_ATTACHED( l_U108 )))
                                {
                                    ATTACH_OBJECT_TO_PED( l_U108, l_U98, 1232, 0, 0, 0, 0, 0, 0, 0 );
                                }
                            }
                        }
                        l_U75 = -1;
                        l_U13 = 0;
                        l_U11 = 5;
                    }
                    else
                    {
                        l_U98 = nil;
                        l_U75 = -1;
                    }
                }
                else
                {
                    l_U98 = nil;
                    l_U75 = -1;
                }
            }
            else
            {
                l_U98 = nil;
                l_U75 = -1;
            }
        }
        break;
    }
    return;
}

int sub_3604(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3613(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3613()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3917(unknown uParam0)
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

void sub_5110(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( l_U97 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U97, sub_3613(), 0 ))
        {
            SET_CHAR_RELATIONSHIP( l_U97, 5, 0 );
            sub_5174();
            sub_160();
        }
    }
    GET_CURRENT_CHAR_WEAPON( sub_3613(), ref uVar3 );
    if (NOT (IS_CHAR_DEAD( l_U97 )))
    {
        if (IS_PLAYER_TARGETTING_CHAR( sub_649(), l_U97 ))
        {
            if (NOT sub_5306())
            {
                sub_5174();
                sub_160();
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U97 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U97, 0 ))
        {
            sub_160();
        }
    }
    if (DOES_CHAR_EXIST( l_U97 ))
    {
        if (IS_CHAR_DEAD( l_U97 ))
        {
            sub_160();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U97 ))
        {
            sub_160();
        }
        if (IS_CHAR_INJURED( l_U97 ))
        {
            sub_160();
        }
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_3613() ))
    {
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            if (IS_OBJECT_ATTACHED( l_U109 ))
            {
                DETACH_OBJECT( l_U109, 1 );
            }
            DELETE_OBJECT( ref l_U109 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U109 );
        }
    }
    if (sub_5618())
    {
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            if (IS_OBJECT_ATTACHED( l_U109 ))
            {
                DETACH_OBJECT( l_U109, 1 );
            }
            DELETE_OBJECT( ref l_U109 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U109 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U98 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U98, sub_3613(), 0 ))
        {
            l_U98 = nil;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U77 );
            l_U12 = 0;
            l_U11 = 2;
            l_U13 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U98 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_3613(), l_U98 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U98 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U98 );
                TASK_WANDER_STANDARD( l_U98 );
            }
            l_U98 = nil;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U77 );
            l_U12 = 0;
            l_U11 = 2;
            l_U13 = 0;
        }
    }
    if (IS_CHAR_SHOOTING_IN_AREA( sub_3613(), l_U22._fU0 - 30, l_U22._fU4 - 30, l_U22._fU0 + 30, l_U22._fU4 + 30, 0 ))
    {
        sub_5174();
        sub_160();
    }
    if (NOT (IS_OBJECT_UPRIGHT( uParam0, 30 )))
    {
        sub_160();
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
        {
            sub_1780( uParam0 );
        }
    }
    if (l_U62 == 0)
    {
        if (DOES_CHAR_EXIST( l_U97 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U97 )))
            {
                GET_CHAR_HEADING( l_U97, ref l_U57 );
                if ((l_U13 != 9) AND (l_U13 != 8))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U97, l_U22._fU0, l_U22._fU4, l_U22._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
                    {
                        if (l_U98 != nil)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U98 )))
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
                                l_U98 = nil;
                            }
                        }
                        l_U62 = 1;
                    }
                }
            }
        }
    }
    if (l_U62 == 1)
    {
        sub_160();
    }
    if (NOT (IS_CHAR_INJURED( l_U97 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U97 )))
        {
            if (NOT (IS_CHAR_GETTING_UP( l_U97 )))
            {
                if ((sub_6481( l_U91, l_U25, 3.00000000, 3.00000000, 3.00000000, "amb@kiosk", 5 )) == 1)
                {
                    if (l_U98 != nil)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U98 )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
                            l_U98 = nil;
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U106 ))
                    {
                        ATTACH_OBJECT_TO_OBJECT( l_U106, uParam0, 3, l_U40, 0, 0, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U97 )))
                    {
                        CLEAR_CHAR_TASKS( l_U97 );
                    }
                    sub_7976();
                    sub_8023();
                    l_U11 = 6;
                }
            }
            else
            {
                sub_379( 2, "sprunk_act" );
                sub_379( 2, "classprunk_act" );
            }
        }
        else
        {
            sub_379( 2, "sprunk_act" );
            sub_379( 2, "classprunk_act" );
        }
    }
    return;
}

void sub_5174()
{
    if (NOT (IS_CHAR_INJURED( l_U97 )))
    {
        CLEAR_CHAR_TASKS( l_U97 );
        SET_CHAR_KEEP_TASK( l_U97, 1 );
        TASK_DUCK( l_U97, -2 );
    }
    return;
}

int sub_5306()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_3613(), ref iVar2 );
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

int sub_5618()
{
    if (sub_5627())
    {
        if (sub_5666())
        {
            return 1;
        }
    }
    return 0;
}

int sub_5627()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_5666()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_6481(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int iVar11;

    if (l_U11 != 6)
    {
        if (IS_PLAYER_PLAYING( sub_649() ))
        {
            if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_649() ))
            {
                GET_INTERIOR_FROM_CHAR( sub_3613(), ref iVar11 );
                if (iVar11 == nil)
                {
                    if (NOT (IS_CHAR_INJURED( l_U97 )))
                    {
                        if (NOT (IS_PED_RAGDOLL( l_U97 )))
                        {
                            if (NOT (IS_CHAR_GETTING_UP( l_U97 )))
                            {
                                if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U97 )))
                                {
                                    if (HAVE_ANIMS_LOADED( uParam7 ))
                                    {
                                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3613() )))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3613(), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, 0 ))
                                            {
                                                sub_1729();
                                                if (sub_6712( 2, 0 ))
                                                {
                                                    if (sub_6970( 2, uParam0, 0 ))
                                                    {
                                                        if (IS_SCORE_GREATER( sub_649(), uParam8 ))
                                                        {
                                                            REMOVE_PED_HELMET( sub_3613(), 1 );
                                                            SET_PLAYER_CONTROL( sub_649(), 0 );
                                                            return 1;
                                                        }
                                                        else
                                                        {
                                                            sub_7650( "FAIL_TRAN", 3000, 0 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_379( 2, uParam0 );
                                                }
                                            }
                                            else
                                            {
                                                sub_379( 2, uParam0 );
                                            }
                                        }
                                        else
                                        {
                                            sub_379( 2, uParam0 );
                                        }
                                    }
                                    else
                                    {
                                        sub_379( 2, uParam0 );
                                    }
                                }
                                else
                                {
                                    sub_379( 2, uParam0 );
                                }
                            }
                            else
                            {
                                sub_379( 2, uParam0 );
                            }
                        }
                        else
                        {
                            sub_379( 2, uParam0 );
                        }
                    }
                    else
                    {
                        sub_379( 2, uParam0 );
                    }
                }
                else
                {
                    sub_379( 2, uParam0 );
                }
            }
            else
            {
                sub_379( 2, uParam0 );
            }
        }
    }
    return 0;
}

int sub_6712(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_649() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_649() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_649() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_5627())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3613() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_6864())
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

void sub_6864()
{
    return sub_6875( 0, 0 );
}

int sub_6875(boolean bParam0, unknown uParam1)
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

int sub_6970(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6712( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U3)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_649(), 0 );
                l_U3 = 1;
            }
            g_U9172 = uParam0;
            l_U4 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7245();
                l_U2 = 1;
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
                            l_U1 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U1)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U1 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7245()
{
    return sub_6875( 1, 1 );
}

int sub_7650(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_7976()
{
    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_3613() );
    }
    return;
}

void sub_8023()
{
    sub_379( 2, "sprunk_act" );
    sub_379( 2, "classprunk_act" );
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    return;
}

void sub_8209()
{
    if (NOT (IS_CHAR_INJURED( l_U98 )))
    {
        if (l_U13 > 6)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U98 );
                if (NOT (IS_CHAR_INJURED( l_U97 )))
                {
                    CLEAR_CHAR_TASKS( l_U97 );
                }
                l_U13 = 14;
            }
        }
        if (l_U15 > 2)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U98 );
                if (NOT (IS_CHAR_INJURED( l_U97 )))
                {
                    CLEAR_CHAR_TASKS( l_U97 );
                }
                l_U15 = 14;
            }
        }
    }
    return;
}

void sub_8459(unknown uParam0)
{
    if (DOES_CHAR_EXIST( l_U98 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U98 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U97 )))
            {
                switch (l_U13)
                {
                    case 0:
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, 2, -2, 1.00000000 );
                    if (sub_8638( l_U97, l_U22 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD( l_U97, l_U22._fU0, l_U22._fU4, l_U22._fU8, l_U52, 2.00000000 );
                    }
                    l_U13 = 1;
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U98, 27, ref l_U16 );
                    if ((l_U16 == 7) || (l_U16 == 2))
                    {
                        l_U13 = 2;
                    }
                    break;
                    case 2:
                    if (sub_8638( l_U98, l_U25 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U53, 10.00000000, 30.00000000 );
                        l_U16 = 0;
                        l_U13 = 3;
                    }
                    else
                    {
                        l_U13 = 0;
                    }
                    break;
                    case 3:
                    GET_SCRIPT_TASK_STATUS( l_U98, 68, ref l_U16 );
                    if ((l_U16 == 7) || (l_U16 == 2))
                    {
                        l_U13 = 6;
                    }
                    break;
                    case 6:
                    TASK_PLAY_ANIM( l_U98, "CUSTOMER_CIGS", "amb@kiosk", 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM_WITH_FLAGS( l_U98, "CUSTOMER_CIGS", "amb@kiosk", 8.00000000, -2, 8 );
                    TASK_PLAY_ANIM( l_U97, "VENDOR_CIGS", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    l_U16 = 0;
                    l_U13 = 9;
                    break;
                    case 9:
                    if (IS_CHAR_PLAYING_ANIM( l_U97, "amb@kiosk", "VENDOR_CIGS" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U97, "amb@kiosk", "VENDOR_CIGS", ref l_U56 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_CIGS" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_CIGS", ref l_U58 );
                    }
                    if ((l_U56 > 0.48300000) AND (l_U64[0] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U104 ))
                        {
                            SET_OBJECT_VISIBLE( l_U104, 1 );
                            l_U64[0] = 1;
                        }
                    }
                    if ((l_U56 > 0.64000000) AND (l_U64[1] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U104 ))
                        {
                            SAY_AMBIENT_SPEECH( l_U97, "SELL_GOODS", 0, 1, 0 );
                            SET_OBJECT_VISIBLE( l_U104, 0 );
                            l_U64[1] = 1;
                        }
                    }
                    if ((l_U58 > 0.47100000) AND (l_U64[2] == 0))
                    {
                        if (DOES_OBJECT_EXIST( l_U105 ))
                        {
                            SET_OBJECT_VISIBLE( l_U105, 1 );
                            l_U64[2] = 1;
                        }
                    }
                    if ((l_U58 > 0.61200000) AND (l_U64[3] == 0))
                    {
                        CREATE_OBJECT( l_U93, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U101, 1 );
                        ATTACH_OBJECT_TO_PED( l_U101, l_U98, 1232, -0.02600000, 0.02000000, 0.01400000, -0.14000000, 0, -0.20000000, 0 );
                        l_U64[3] = 1;
                    }
                    if ((l_U58 > 0.72000000) AND (l_U64[4] == 0))
                    {
                        sub_3917( l_U105 );
                        l_U64[4] = 1;
                    }
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U97, "amb@kiosk", "VENDOR_CIGS" )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_CIGS" )))
                        {
                            SAY_AMBIENT_SPEECH( l_U98, "Thanks", 1, 0, 0 );
                            l_U76 = -1;
                            l_U13 = 14;
                        }
                    }
                    break;
                    case 14:
                    l_U13 = 16;
                    break;
                    case 16:
                    for ( l_U80 = 0; l_U80 <= 9; l_U80++ )
                    {
                        l_U64[l_U80] = 0;
                    }
                    l_U81 = 0;
                    if (DOES_OBJECT_EXIST( l_U104 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U104 ))
                        {
                            DETACH_OBJECT( l_U104, 1 );
                        }
                        DELETE_OBJECT( ref l_U104 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U104 );
                    }
                    if (DOES_OBJECT_EXIST( l_U105 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U105 ))
                        {
                            DETACH_OBJECT( l_U105, 1 );
                        }
                        DELETE_OBJECT( ref l_U105 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U105 );
                    }
                    if (DOES_OBJECT_EXIST( l_U101 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U101 ))
                        {
                            DETACH_OBJECT( l_U101, 1 );
                        }
                        DELETE_OBJECT( ref l_U101 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U101 );
                    }
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U77 );
                    l_U12 = 0;
                    l_U13 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U98 )))
                    {
                        GIVE_PED_AMBIENT_OBJECT( l_U98, l_U93 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
                    }
                    l_U98 = nil;
                    l_U11 = 2;
                    break;
                }
            }
        }
    }
    return;
}

int sub_8638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10171(unknown uParam0)
{
    if (DOES_CHAR_EXIST( l_U98 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U98 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U97 )))
            {
                switch (l_U13)
                {
                    case 0:
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, 2, -2, 1.00000000 );
                    if (sub_8638( l_U97, l_U22 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD( l_U97, l_U22._fU0, l_U22._fU4, l_U22._fU8, l_U52, 2.00000000 );
                    }
                    l_U13 = 1;
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U98, 27, ref l_U16 );
                    if ((l_U16 == 7) || (l_U16 == 2))
                    {
                        l_U13 = 2;
                    }
                    break;
                    case 2:
                    if (sub_8638( l_U98, l_U25 ))
                    {
                        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U53, 10.00000000, 30.00000000 );
                        l_U16 = 0;
                        l_U13 = 3;
                    }
                    else
                    {
                        l_U13 = 0;
                    }
                    break;
                    case 3:
                    GET_SCRIPT_TASK_STATUS( l_U98, 68, ref l_U16 );
                    if ((l_U16 == 7) || (l_U16 == 2))
                    {
                        l_U13 = 6;
                    }
                    break;
                    case 6:
                    TASK_PLAY_ANIM( l_U98, "CUSTOMER_PAPER", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( l_U97, "VENDOR_PAPER", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                    l_U16 = 0;
                    l_U13 = 7;
                    break;
                    case 7:
                    if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_PAPER" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_PAPER", ref l_U56 );
                        if (l_U56 > 0.55600000)
                        {
                            if (DOES_OBJECT_EXIST( l_U107 ))
                            {
                                SET_OBJECT_VISIBLE( l_U107, 1 );
                            }
                            SAY_AMBIENT_SPEECH( l_U97, "SELL_GOODS", 0, 1, 0 );
                            l_U13 = 13;
                        }
                    }
                    break;
                    case 13:
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_PAPER" )))
                    {
                        SAY_AMBIENT_SPEECH( l_U98, "Thanks", 1, 0, 0 );
                        l_U13 = 14;
                    }
                    break;
                    case 14:
                    l_U13 = 16;
                    break;
                    case 16:
                    if (DOES_OBJECT_EXIST( l_U107 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U107 ))
                        {
                            DETACH_OBJECT( l_U107, 1 );
                        }
                        DELETE_OBJECT( ref l_U107 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U107 );
                    }
                    GIVE_PED_AMBIENT_OBJECT( l_U98, l_U94 );
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U77 );
                    l_U12 = 0;
                    l_U13 = 0;
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
                    l_U98 = nil;
                    l_U11 = 2;
                    break;
                }
            }
        }
    }
    return;
}

void sub_11122(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U98 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U97 )))
        {
            switch (l_U15)
            {
                case 0:
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, 2, -2, 1.00000000 );
                if (sub_8638( l_U97, l_U22 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U97, l_U22._fU0, l_U22._fU4, l_U22._fU8, l_U52, 2.00000000 );
                }
                l_U16 = 0;
                l_U15 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( l_U98, 27, ref l_U16 );
                if ((l_U16 == 7) || (l_U16 == 2))
                {
                    l_U15 = 2;
                }
                break;
                case 2:
                if (sub_8638( l_U98, l_U25 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U98, l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U53, 10.00000000, 270.00000000 );
                    l_U15 = 3;
                }
                else
                {
                    l_U15 = 0;
                }
                break;
                case 3:
                GET_SCRIPT_TASK_STATUS( l_U98, 68, ref l_U16 );
                if ((l_U16 == 7) || (l_U16 == 2))
                {
                    l_U15 = 6;
                }
                break;
                case 6:
                TASK_PLAY_ANIM( l_U98, "CUSTOMER_JUICE", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U97, "VENDOR_JUICE", "amb@kiosk", 8.00000000, 0, 0, 0, 0, -2 );
                l_U16 = 0;
                l_U56 = 0.00000000;
                l_U15 = 7;
                break;
                case 7:
                if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_JUICE", ref l_U56 );
                }
                if (l_U56 > 0.17000000)
                {
                    l_U60 = 0;
                    l_U15 = 8;
                }
                break;
                case 8:
                if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_JUICE", ref l_U56 );
                }
                if (l_U79 == 10)
                {
                    l_U15 = 9;
                }
                else
                {
                    l_U60 -= 0.10000000;
                    ATTACH_OBJECT_TO_OBJECT( l_U106, uParam0, 3, l_U40, 0.00000000, 0.00000000, l_U60 );
                    l_U79++;
                }
                if (l_U56 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U108, 1 );
                }
                break;
                case 9:
                if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_JUICE", ref l_U56 );
                }
                if (l_U56 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U108, 1 );
                }
                l_U16 = 0;
                l_U56 = 0.00000000;
                l_U79 = 0;
                l_U15 = 10;
                break;
                case 10:
                if (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_JUICE" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U98, "amb@kiosk", "CUSTOMER_JUICE", ref l_U56 );
                }
                if (l_U56 > 0.38000000)
                {
                    SET_OBJECT_VISIBLE( l_U108, 1 );
                }
                if (l_U56 > 0.64000000)
                {
                    SAY_AMBIENT_SPEECH( l_U98, "Buy_Drink", 1, 0, 0 );
                    l_U15 = 11;
                }
                break;
                case 11:
                l_U60 += 0.10000000;
                ATTACH_OBJECT_TO_OBJECT( l_U106, uParam0, 3, l_U40, 0.00000000, 0.00000000, l_U60 );
                l_U79++;
                if (l_U79 == 10)
                {
                    ATTACH_OBJECT_TO_OBJECT( l_U106, uParam0, 3, l_U40, 0.00000000, 0.00000000, 0.00000000 );
                    l_U15 = 12;
                }
                break;
                case 12:
                SAY_AMBIENT_SPEECH( l_U97, "SELL_GOODS", 0, 1, 0 );
                l_U16 = 0;
                l_U56 = 0.00000000;
                l_U79 = 0;
                l_U15 = 13;
                break;
                case 13:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U98, "amb@kiosk", "CUSTOMER_JUICE" )))
                {
                    SAY_AMBIENT_SPEECH( l_U98, "Thanks", 1, 0, 0 );
                    l_U15 = 14;
                }
                break;
                case 14:
                if (DOES_OBJECT_EXIST( l_U108 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U108 ))
                    {
                        DETACH_OBJECT( l_U108, 1 );
                    }
                    DELETE_OBJECT( ref l_U108 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U108 );
                }
                GIVE_PED_AMBIENT_OBJECT( l_U98, l_U92 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U98 );
                l_U98 = nil;
                GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U77 );
                l_U12 = 0;
                l_U15 = 0;
                l_U98 = nil;
                l_U11 = 2;
                break;
            }
        }
    }
    return;
}

void sub_12924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, float fParam26, float fParam27, float fParam28, int iParam29, unknown uParam30, float fParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35)
{
    int iVar38;
    float fVar39;
    unknown uVar40;
    float fVar41;

    fVar41 = 0.00000000;
    if (NOT (IS_CHAR_INJURED( uParam25 )))
    {
        switch (l_U5)
        {
            case 0:
            REQUEST_MODEL( uParam33 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3613(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 2, -2, 2.00000000 );
            l_U5 = 1;
            break;
            case 1:
            sub_13149();
            GET_SCRIPT_TASK_STATUS( sub_3613(), 27, ref iVar38 );
            if (iVar38 == 7)
            {
                l_U5 = 2;
            }
            break;
            case 2:
            sub_13149();
            GET_HEADING_FROM_VECTOR_2D( uParam0._fU0 - uParam3._fU0, uParam0._fU4 - uParam3._fU4, ref uVar40 );
            fVar39 = uVar40 - 180;
            if (sub_13418( uParam0 ))
            {
                TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_3613(), uParam0._fU0, uParam0._fU4, uParam0._fU8, fVar39, 10.00000000, 270.00000000 );
                if (IS_PLAYER_PLAYING( sub_649() ))
                {
                    SET_PLAYER_CONTROL( sub_649(), 0 );
                }
                l_U5 = 3;
            }
            else
            {
                l_U5 = 0;
            }
            break;
            case 3:
            sub_13149();
            if (HAS_MODEL_LOADED( uParam33 ))
            {
                sub_13617();
                l_U5 = 4;
            }
            break;
            case 4:
            sub_13149();
            GET_SCRIPT_TASK_STATUS( sub_3613(), 68, ref iVar38 );
            if (iVar38 == 7)
            {
                CREATE_OBJECT( uParam33, uParam3._fU0, uParam3._fU4, uParam3._fU8, uParam34, 1 );
                l_U5 = 5;
            }
            break;
            case 5:
            if (DOES_OBJECT_EXIST( (uParam34^) ))
            {
                SET_OBJECT_VISIBLE( (uParam34^), 0 );
                ATTACH_OBJECT_TO_PED( (uParam34^), sub_3613(), 1232, 0, 0, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM( sub_3613(), uParam6, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( uParam25, uParam7, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
                iVar38 = 0;
                fVar41 = 0.00000000;
                l_U8 = 0;
                l_U5 = 6;
            }
            break;
            case 6:
            if (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3613(), uParam8, uParam6, ref fVar41 );
            }
            if (fVar41 > fParam26)
            {
                l_U5 = 7;
            }
            break;
            case 7:
            if (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3613(), uParam8, uParam6, ref fVar41 );
            }
            if (l_U8 == iParam29)
            {
                l_U5 = 8;
            }
            else
            {
                l_U7 -= 0.10000000;
                ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, uParam13._fU0, uParam13._fU4, l_U7 );
                l_U8++;
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
            if (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3613(), uParam8, uParam6, ref fVar41 );
            }
            if (fVar41 > fParam27)
            {
                if (DOES_OBJECT_EXIST( (uParam34^) ))
                {
                    SAY_AMBIENT_SPEECH( sub_3613(), "GENERIC_BUY", 1, 1, 0 );
                    SET_OBJECT_VISIBLE( (uParam34^), 1 );
                }
            }
            iVar38 = 0;
            fVar41 = 0.00000000;
            l_U8 = 0;
            l_U5 = 9;
            break;
            case 9:
            if (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam6 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3613(), uParam8, uParam6, ref fVar41 );
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
                l_U5 = 10;
            }
            break;
            case 10:
            l_U7 += 0.10000000;
            if (DOES_OBJECT_EXIST( uParam9 ))
            {
                ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, uParam13._fU0, uParam13._fU4, l_U7 );
                l_U8++;
            }
            if (l_U8 == iParam29)
            {
                if (DOES_OBJECT_EXIST( uParam9 ))
                {
                    ATTACH_OBJECT_TO_OBJECT( uParam9, uParam32, uParam16, uParam10, 0, 0, 0 );
                    l_U5 = 11;
                }
            }
            break;
            case 11:
            SAY_AMBIENT_SPEECH( uParam25, uParam17, 0, 0, 0 );
            l_U5 = 12;
            break;
            case 12:
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam6 )))
            {
                SAY_AMBIENT_SPEECH( sub_3613(), "THANKS", 1, 1, 0 );
                l_U5 = 13;
            }
            break;
            case 13:
            sub_14674( 1 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_3613(), uParam24, uParam8, 8.00000000, 0, 0, 0, 0, -2 );
            (uParam35^) = 1;
            l_U5 = 14;
            break;
            case 14:
            if (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam24 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3613(), uParam8, uParam24, ref fVar41 );
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
            sub_14908();
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_3613(), uParam8, uParam24 )))
            {
                l_U5 = 15;
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
            SET_PLAYER_CONTROL( sub_649(), 1 );
            sub_15101();
            l_U5 = 0;
            (uParam30^) = 1;
            break;
        }
    }
    return;
}

void sub_13149()
{
    if (sub_13158())
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3613() );
        l_U5 = 15;
    }
    return;
}

int sub_13158()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_13206()))
    {
        return 1;
    }
    return 0;
}

int sub_13206()
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

int sub_13418(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        GET_CHAR_COORDINATES( sub_3613(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_13617()
{
    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3613(), ref l_U9 );
        if (l_U9 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_3613(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_3613(), 0, 1 );
        }
        if (l_U9 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_3613(), 0, 1 );
        }
    }
    return;
}

void sub_14674(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_649(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_649(), 1 );
    }
    return;
}

void sub_14908()
{
    if ((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 )))
    {
        CLEAR_CHAR_TASKS( sub_3613() );
    }
    return;
}

void sub_15101()
{
    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        if (l_U9 != 0)
        {
            if (l_U9 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_3613(), l_U9, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_3613(), 46 );
            }
        }
    }
    return;
}

void sub_15240()
{
    ADD_SCORE( sub_649(), -1 );
    sub_15264( 0, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 374, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 1 );
    sub_15691();
    SET_CHAR_HEALTH( sub_3613(), sub_15766() );
    return;
}

void sub_15264(unknown uParam0, unknown uParam1)
{
    sub_15285( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_15285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15691()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_649() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_649() );
        }
    }
    sub_7976();
    return;
}

void sub_15766()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_3613() )))
    {
        GET_CHAR_HEALTH( sub_3613(), ref Result );
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