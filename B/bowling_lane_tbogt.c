void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U15 = 10;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U58 = 0;
    l_U59 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_117();
    }
    l_U31 = {l_U60._fU4[0]};
    l_U35 = l_U60._fU68[0];
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U31._fU0, l_U31._fU4, l_U31._fU8, ref l_U46, 1 );
    SET_OBJECT_HEADING( l_U46, l_U35 );
    SET_OBJECT_DYNAMIC( l_U46, 0 );
    SET_OBJECT_COLLISION( l_U46, 0 );
    FREEZE_OBJECT_POSITION( l_U46, 1 );
    SET_OBJECT_VISIBLE( l_U46, 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U58)
        {
            case 0:
            if (g_U10744 == 0)
            {
                GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U50 );
                GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U49 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U48 );
                if (NOT (l_U48 == nil))
                {
                    if ((l_U48 == l_U49) || (l_U48 == l_U50))
                    {
                        if (NOT g_U12379)
                        {
                            CLEAR_HELP();
                            PRINT_HELP( "BOWLING_49" );
                            g_U10744 = 1;
                        }
                    }
                }
            }
            if (DOES_OBJECT_EXIST( l_U46 ))
            {
                if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    if (l_U10 == 0)
                    {
                        if (NOT sub_594())
                        {
                            g_U43660 = 0;
                        }
                        else if (l_U37 == 0)
                        {
                            l_U37 = 1;
                        }
                        if (DOES_OBJECT_EXIST( l_U46 ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -0.60000000, 0.00000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -1.60000000, 2.60000000, 1.50000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -3.80000000, 36.40000000, -1.00000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, 21.20000000, 16.80000000, 1.00000000, ref l_U28._fU0, ref l_U28._fU4, ref l_U28._fU8 );
                            GET_OBJECT_HEADING( l_U46, ref l_U34 );
                        }
                        SWITCH_PED_PATHS_OFF( l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U28._fU0, l_U28._fU4, l_U28._fU8 );
                        l_U47 = -799229885;
                        l_U10 = 1;
                    }
                    if (l_U10 == 1)
                    {
                        if (sub_907())
                        {
                            if (NOT (DOES_CHAR_EXIST( l_U44 )))
                            {
                                CREATE_CHAR( 4, l_U47, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U44, 1 );
                                SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U44, 1 );
                                SET_CHAR_HEADING( l_U44, l_U34 );
                                SET_ROOM_FOR_CHAR_BY_NAME( l_U44, "E1_Bowl_room" );
                                l_U41 = 1;
                            }
                            l_U10 = 2;
                        }
                    }
                    if (l_U10 == 2)
                    {
                        sub_1091();
                    }
                }
                else
                {
                    sub_117();
                }
                break;
            }
            sub_117();
        }
    }
    return;
}

void sub_117()
{
    g_U10742 = 0;
    SWITCH_PED_PATHS_ON( l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U28._fU0, l_U28._fU4, l_U28._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_417()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_594()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_907()
{
    REQUEST_MODEL( l_U47 );
    if (HAS_MODEL_LOADED( l_U47 ))
    {
        return 1;
    }
    return 0;
}

void sub_1091()
{
    boolean bVar2;

    bVar2 = true;
    sub_1103();
    sub_1176();
    sub_1294();
    sub_1535();
    sub_1848();
    sub_2061();
    sub_2274();
    switch (l_U59)
    {
        case 0:
        if (NOT g_U10742)
        {
            if (sub_594())
            {
                if (g_U42875 == 0)
                {
                    bVar2 = false;
                }
                else if (g_U10745 == 1)
                {
                    bVar2 = false;
                }
                if (g_U10748 == 1)
                {
                    bVar2 = false;
                }
            }
            l_U43 = sub_1308( ref l_U45, 0 );
            if (l_U43)
            {
                GET_GROUP_SIZE( sub_1392(), ref l_U17, ref l_U18 );
                if (l_U18 == 0)
                {
                    bVar2 = false;
                }
            }
            if (g_U12379)
            {
                if (NOT (sub_2722( 14 )))
                {
                    bVar2 = false;
                }
            }
            if (IS_BIT_SET( g_U10938._fU0, 4 ))
            {
                bVar2 = false;
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1715(), 0 )))
            {
                l_U39 = 0;
            }
            if (bVar2)
            {
                if (DOES_CHAR_EXIST( l_U44 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U44 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U53 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U44, ref l_U53 );
                            sub_3105( l_U53 );
                            SET_BLIP_AS_FRIENDLY( l_U53, 1 );
                            CHANGE_BLIP_DISPLAY( l_U53, 1 );
                        }
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_3D( sub_417(), l_U22._fU0, l_U22._fU4, l_U22._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U40 == 1)
                    {
                        l_U40 = 0;
                    }
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1715(), 0 )))
                    {
                        if (NOT l_U38)
                        {
                            if (DOES_CHAR_EXIST( l_U44 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U44 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U44, sub_417() );
                                    if ((sub_3321( 2, 0 )) AND (sub_3599()))
                                    {
                                        if (l_U36 == 1)
                                        {
                                            if (IS_SCORE_GREATER( sub_1715(), l_U15 ))
                                            {
                                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" ))
                                                {
                                                    CLEAR_HELP();
                                                }
                                                l_U36 = 0;
                                            }
                                        }
                                        if (l_U36 == 0)
                                        {
                                            if (l_U16 == 0)
                                            {
                                                if (NOT sub_594())
                                                {
                                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                    {
                                                        PRINT_NOW( "BOWLING_07", 7500, 4 );
                                                    }
                                                }
                                                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                {
                                                    PRINT_NOW( "BOWLING_50", 7500, 4 );
                                                }
                                                l_U16 = 1;
                                            }
                                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" )))
                                            {
                                                PRINT_HELP_FOREVER( "BOWLING_46" );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_THIS_PRINT( "BOWLING_07" );
                                        CLEAR_THIS_PRINT( "BOWLING_50" );
                                        l_U16 = 0;
                                        if ((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )))
                                        {
                                            CLEAR_HELP();
                                        }
                                        l_U36 = 0;
                                    }
                                    if ((sub_3321( 2, 0 )) AND (sub_3599()))
                                    {
                                        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                        {
                                            if (NOT sub_594())
                                            {
                                                if (IS_SCORE_GREATER( sub_1715(), l_U15 ))
                                                {
                                                    PRINT_HELP_FOREVER( "BOWLING_45" );
                                                    l_U38 = 1;
                                                    l_U59 = 1;
                                                }
                                                else
                                                {
                                                    CLEAR_THIS_PRINT( "BOWLING_07" );
                                                    PRINT_HELP( "BOWLING_48" );
                                                    if (l_U36 == 0)
                                                    {
                                                        l_U36 = 1;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                l_U38 = 1;
                                                l_U59 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        CLEAR_THIS_PRINT( "BOWLING_07" );
                        CLEAR_THIS_PRINT( "BOWLING_50" );
                        l_U16 = 0;
                        if (DOES_CHAR_EXIST( l_U44 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U44 )))
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )))
                                {
                                    PRINT_HELP_FOREVER( "BOWLING_52" );
                                }
                                if (l_U39 == 0)
                                {
                                    SAY_AMBIENT_SPEECH( l_U44, "BOWL_WANTED", 0, 0, 2 );
                                    l_U39 = 1;
                                }
                            }
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U44 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U44 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U44, sub_417(), -2, 1 );
                    }
                }
                CLEAR_THIS_PRINT( "BOWLING_07" );
                CLEAR_THIS_PRINT( "BOWLING_50" );
                l_U16 = 0;
                if ((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )))
                {
                    CLEAR_HELP();
                }
                l_U36 = 0;;
            }
            else if ((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        if (NOT sub_594())
        {
            bVar2 = true;
            if (g_U12379)
            {
                if (NOT (sub_2722( 14 )))
                {
                    bVar2 = false;
                }
            }
            if ((sub_3321( 2, 0 )) AND (bVar2))
            {
                DISPLAY_CASH( 1 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" ))
                {
                    if (sub_4781())
                    {
                        bVar2 = true;
                        if (g_U12379)
                        {
                            if (NOT (sub_4855( 14 )))
                            {
                                bVar2 = false;
                            }
                        }
                        if (bVar2)
                        {
                            if (DOES_CHAR_EXIST( l_U44 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U44 )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
                                }
                            }
                            sub_5311();
                            sub_6137( l_U15 );
                            l_U59 = 2;
                            PRINT_NOW( "BOWLING_18", 6000, 4 );
                            CLEAR_HELP();
                        }
                        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                        }
                        l_U59 = 0;
                        l_U38 = 0;;
                    }
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        bVar2 = true;
                        if (g_U12379)
                        {
                            if (NOT (sub_4855( 14 )))
                            {
                                bVar2 = false;
                            }
                        }
                        if (bVar2)
                        {
                            if (DOES_CHAR_EXIST( l_U44 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U44 )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
                                }
                            }
                            sub_5311();
                            sub_6137( l_U15 );
                            g_U10743 = 1;
                            l_U59 = 2;
                            PRINT_NOW( "BOWLING_18", 6000, 4 );
                            CLEAR_HELP();
                        }
                        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                        }
                        l_U59 = 0;
                        l_U38 = 0;;
                    }
                }
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U59 = 0;
            l_U38 = 0;;
        }
        else if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U44 )))
            {
                SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
            }
        }
        CLEAR_HELP();
        PRINT_NOW( "BOWLING_18", 6000, 4 );
        g_U10743 = 1;
        l_U59 = 2;;
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_417(), l_U22._fU0, l_U22._fU4, l_U22._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U59 = 0;
            l_U38 = 0;
        }
        break;
        case 2:
        sub_6883();
        g_U10742 = 1;
        if (DOES_BLIP_EXIST( l_U53 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U53 );
        }
        l_U59 = 3;
        break;
        case 3:
        if (NOT sub_594())
        {
            if (g_U10742 == 0)
            {
                l_U11 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "TENPINBOWL" );
                if (l_U11 == 0)
                {
                    l_U38 = 0;
                    l_U59 = 0;
                    bVar2 = true;
                }
            }
        }
        break;
    }
    return;
}

void sub_1103()
{
    if (l_U37 == 1)
    {
        if (NOT sub_594())
        {
            CLEAR_HELP();
            g_U10742 = 0;
            l_U59 = 3;
            l_U37 = 0;
            g_U43660 = 0;
        }
    }
    return;
}

void sub_1176()
{
    if (sub_594())
    {
        if (l_U13 == 0)
        {
            if (g_U42875 == 1)
            {
                l_U13 = 1;
            }
        }
        if (l_U13 == 1)
        {
            if (g_U42875 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U53 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U53 );
                }
                l_U13 = 0;
            }
        }
    }
    return;
}

void sub_1294()
{
    l_U43 = sub_1308( ref l_U45, 0 );
    if (l_U43)
    {
        GET_GROUP_SIZE( sub_1392(), ref l_U17, ref l_U18 );
        if (l_U14 == 0)
        {
            if (l_U18 > 0)
            {
                l_U14 = 1;
            }
        }
        if (l_U14 == 1)
        {
            if (l_U18 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U53 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U53 );
                }
                l_U14 = 0;
            }
        }
    }
    return;
}

int sub_1308(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_1392()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1535()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                if (NOT sub_594())
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U44, sub_417(), 0 ))
                    {
                        sub_1625();
                        sub_117();
                    }
                }
                else if (NOT g_U43660)
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U44, sub_417(), 0 ))
                    {
                        sub_1625();
                        g_U43660 = 1;
                        sub_117();
                    }
                }
            }
        }
    }
    return;
}

void sub_1625()
{
    if (DOES_BLIP_EXIST( l_U53 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U53 );
    }
    CLEAR_CHAR_TASKS( l_U44 );
    if (NOT (IS_CHAR_INJURED( l_U44 )))
    {
        TASK_SMART_FLEE_CHAR( l_U44, sub_417(), 100.00000000, -1 );
    }
    SET_ALL_RANDOM_PEDS_FLEE( sub_1715(), 1 );
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}

void sub_1715()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1848()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U51 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U52 );
                if (l_U52 == l_U51)
                {
                    if (NOT sub_594())
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_417() ))
                        {
                            sub_1625();
                            sub_117();
                        }
                    }
                    else if (NOT g_U43660)
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_417() ))
                        {
                            sub_1625();
                            g_U43660 = 1;
                            sub_117();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2061()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U51 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U52 );
                if (l_U52 == l_U51)
                {
                    if (NOT sub_594())
                    {
                        if (IS_CHAR_SHOOTING( sub_417() ))
                        {
                            sub_1625();
                            sub_117();
                        }
                    }
                    else if (NOT g_U43660)
                    {
                        if (IS_CHAR_SHOOTING( sub_417() ))
                        {
                            sub_1625();
                            g_U43660 = 1;
                            sub_117();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2274()
{
    if (DOES_CHAR_EXIST( l_U44 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U44 )))
        {
            if (l_U40 == 0)
            {
                if (l_U48 == l_U49)
                {
                    if (IS_CHAR_IN_AREA_3D( sub_417(), -575.27670000, 64.99840000, 3.00000000, -600.65080000, 47.15970000, 7.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U44, "BOWL_MONKEY", 0, 0, 2 );
                        l_U40 = 1;
                    }
                }
                if (l_U48 == l_U50)
                {
                    if (IS_CHAR_IN_AREA_3D( sub_417(), 1185.75700000, -677.22860000, 10.00000000, 1168.07700000, -651.59310000, 18.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U44, "BOWL_MONKEY", 0, 0, 2 );
                        l_U40 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_2722(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2789( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2789(unknown uParam0)
{
    return 0;
}

void sub_3105(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

int sub_3321(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1715() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_1715() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1715() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_3417())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_417() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_3502())
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

int sub_3417()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3502()
{
    return sub_3513( 0, 0 );
}

int sub_3513(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_3599()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_4781()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_4855(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2789( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

void sub_5311()
{
    sub_5320();
    sub_5465( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_5539();
    return;
}

void sub_5320()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_5465(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5539()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_5577( 1, g_U575[I] )) == 0)
        {
            sub_5828( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6006())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_5577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_5828(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_5913( g_U575 - 1 );
    return;
}

void sub_5913(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_6006()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_5577( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_6137(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_1715(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_1715(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_6883()
{
    return;
}
