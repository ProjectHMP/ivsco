void main()
{
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
    l_U549 = 0;
    l_U550 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U553 = 0;
    l_U554 = 0;
    l_U555 = 0;
    l_U558 = 1;
    l_U559 = 0;
    l_U560 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U738 = {-0.65000000, 1.00000000, 0.10000000};
    l_U741 = {0.00000000, 0.00000000, -1.00000000};
    l_U744 = {863.92500000, -124.98700000, 4.93060000};
    l_U747 = {864.92500000, -118.48700000, 10.73060000};
    l_U758 = "smoke_ds";
    l_U792 = 270.00000000;
    l_U793 = 90.00000000;
    l_U794 = 180.00000000;
    l_U795 = 0.45000000;
    l_U800 = 9999;
    l_U805 = 10.00000000;
    l_U824 = -1;
    l_U825 = -1;
    l_U826 = 1;
    l_U827 = 0;
    l_U830 = {1.50000000, 2.25000000, 0.00000000};
    l_U833 = 0.10000000;
    l_U834 = 0.00000000;
    l_U835 = 1.00000000;
    l_U836 = -0.50000000;
    l_U837 = 0.50000000;
    l_U839 = 0;
    l_U840 = 0;
    l_U841 = 0;
    l_U842 = {735.59310000, 41.99930000, 8.89700000};
    l_U845 = {10.00000000, 12.00000000, 5.00000000};
    l_U848 = -1;
    l_U849 = 0;
    l_U850 = 0;
    l_U851 = 0;
    l_U852 = {1225.13900000, 56.51060000, 38.11570000};
    l_U855 = {10.00000000, 10.00000000, 5.00000000};
    l_U858 = -1;
    l_U859 = 0;
    l_U860 = {1238.70000000, 441.20000000, 35.00000000};
    l_U863 = {35.00000000, 60.00000000, 20.00000000};
    l_U867 = 0;
    l_U869 = 0;
    l_U870 = 0;
    l_U871 = 0;
    l_U872 = 0;
    l_U873 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        g_U64548[l_U570] = 5;
        sub_678();
        sub_3813();
    }
    sub_5091( l_U874 );
    sub_9292();
    while (l_U558)
    {
        WAIT( 0 );
        switch (l_U553)
        {
            case 0:
            if (((LOCATE_CHAR_ANY_MEANS_2D( sub_11230(), l_U651._fU12._fU0, l_U651._fU12._fU4, 100.00000000, 100.00000000, 0 )) || (l_U556 == 3)) || (l_U556 == 8))
            {
                if (NOT l_U559)
                {
                    if (sub_11339())
                    {
                        l_U559 = 1;
                    }
                }
                else if (NOT (sub_21608( l_U651._fU0 )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U651._fU8 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U651._fU0, ref l_U651._fU8 );
                        SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
                        if ((l_U556 == 3) || (l_U556 == 8))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                            sub_21968( ref l_U651._fU8 );
                        }
                        else
                        {
                            SET_ROUTE( l_U651._fU8, 1 );
                        }
                    }
                    if ((LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_11230(), l_U651._fU0, 20.00000000, 20.00000000, 0 )) || (l_U556 == 7))
                    {
                        l_U553 = 1;
                    }
                    else if (NOT (IS_CAR_DEAD( l_U651._fU0 )))
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() ))
                        {
                            l_U553 = 1;
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U571._fU0 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U571._fU0, sub_11230(), 0 ))
                        {
                            l_U553 = 1;
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U581[0]._fU0 )))
                    {
                        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U581[0]._fU0, sub_11230(), 0 )) || ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_11230(), l_U581[0]._fU0, 25.00000000, 25.00000000, 0 )) AND (l_U556 == 9)))
                        {
                            l_U553 = 1;
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U581[1]._fU0 )))
                    {
                        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U581[1]._fU0, sub_11230(), 0 )) || ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_11230(), l_U581[1]._fU0, 25.00000000, 25.00000000, 0 )) AND (l_U556 == 9)))
                        {
                            l_U553 = 1;
                        }
                    }
                    for ( l_U801 = 0; l_U801 < l_U602; l_U801++ )
                    {
                        if (NOT (IS_CHAR_DEAD( l_U602[l_U801]._fU0 )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U602[l_U801]._fU0, sub_11230(), 0 ))
                            {
                                l_U553 = 1;
                            }
                        }
                    }
                    if (IS_BULLET_IN_AREA( l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8, 15.00000000, 1 ))
                    {
                        l_U553 = 1;
                    }
                }
                else
                {
                    sub_9361( "current_roman10m_stage = FAILED_SUBPART FIND_VEHICLE.IS_CAR_UNSTEALABLE(desired.veh)\n" );
                    if (sub_21608( l_U651._fU0 ))
                    {
                        sub_22637( 1 );
                        g_U64577++;
                        g_U64577 = g_U64577 mod 10;
                        sub_24455();
                    }
                    else
                    {
                        sub_22637( 2 );
                        g_U64577++;
                        g_U64577 = g_U64577 mod 10;
                        sub_24455();
                    }
                }
            }
            break;
            case 1:
            if (NOT (sub_21608( l_U651._fU0 )))
            {
                switch (l_U556)
                {
                    case 0:
                    if (sub_24968())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 1:
                    if (sub_29798())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 2:
                    if (sub_33343())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 4:
                    if (sub_35354())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 3:
                    if (sub_37313())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U651._fU8 ))
                    {
                        SET_ROUTE( l_U651._fU8, 0 );
                    }
                    break;
                    case 5:
                    if (sub_40198())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 6:
                    if (sub_43878())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 7:
                    if (sub_45041())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                    case 8:
                    if (sub_45745())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U651._fU8 ))
                    {
                        SET_ROUTE( l_U651._fU8, 0 );
                    }
                    break;
                    case 9:
                    if (sub_45868())
                    {
                        if (sub_29491())
                        {
                            l_U553 = 2;
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_9361( "current_roman10m_stage = FAILED_SUBPART PLAY_OUT_STEALING_SCENARIO.IS_CAR_UNSTEALABLE(desired.veh)\n" );
                if (sub_21608( l_U651._fU0 ))
                {
                    sub_22637( 1 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
                else
                {
                    sub_22637( 2 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
            }
            break;
            case 2:
            sub_47597();
            if (l_U556 == 1)
            {
                if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    sub_30050( l_U581[0]._fU0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                {
                    sub_30050( l_U581[1]._fU0 );
                }
            }
            if (NOT (sub_21608( l_U651._fU0 )))
            {
                if (NOT (LOCATE_CAR_2D( l_U651._fU0, l_U681._fU0, l_U681._fU4, 7.75000000, 3.75000000, 0 )))
                {
                    if (NOT g_U64579)
                    {
                        if (sub_49913())
                        {
                            g_U64579 = 1;
                        }
                    }
                    else
                    {
                        sub_50573();
                    }
                    if (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 ))
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_799(), 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U669 ))
                            {
                                SET_ROUTE( l_U669, 0 );
                                REMOVE_BLIP( l_U669 );
                                CLEAR_THIS_PRINT( "GOTO_LOCKUP_C" );
                                CLEAR_THIS_PRINT( "GOTO_LOCKUP_B" );
                                PRINT_NOW( "R10_WANTED", 7500, 1 );
                            }
                        }
                        else if (NOT l_U568)
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_11230(), l_U678._fU0, l_U678._fU4, l_U678._fU8, 8.00000000, 8.00000000, 3.00000000, 0 ))
                            {
                                CLEAR_THIS_PRINT( "R10_WANTED" );
                                if (l_U651._fU64)
                                {
                                    PRINT_NOW( "PARK_C_LOCKUP", 7500, 1 );
                                }
                                else
                                {
                                    PRINT_NOW( "PARK_B_LOCKUP", 7500, 1 );
                                }
                                sub_52875( 0 );
                                l_U568 = 1;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_11230(), l_U678._fU0, l_U678._fU4, l_U678._fU8, 25.00000000, 25.00000000, 3.00000000, 0 )))
                        {
                            l_U568 = 0;
                        }
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                            REMOVE_BLIP( l_U651._fU8 );
                        }
                        if (LOCATE_CHAR_IN_CAR_3D( sub_11230(), l_U681._fU0, l_U681._fU4, l_U681._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            ;
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U669 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U681._fU0, l_U681._fU4, l_U681._fU8, ref l_U669 );
                            CHANGE_BLIP_COLOUR( l_U669, 5 );
                            SET_ROUTE( l_U669, 1 );
                            l_U569 = 1;
                            CLEAR_THIS_PRINT( "R10_WANTED" );
                            if (l_U651._fU64)
                            {
                                PRINT_NOW( "GOTO_LOCKUP_C", 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( "GOTO_LOCKUP_B", 7500, 1 );
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U669 ))
                    {
                        SET_ROUTE( l_U669, 0 );
                        REMOVE_BLIP( l_U669 );
                    }
                    if (IS_WANTED_LEVEL_GREATER( sub_799(), 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                            REMOVE_BLIP( l_U651._fU8 );
                            CLEAR_THIS_PRINT( "GETIN_C" );
                            CLEAR_THIS_PRINT( "GETIN_B" );
                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "R10_WANTED", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                            {
                                PRINT_NOW( "R10_WANTED", 7500, 1 );
                            }
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U651._fU8 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U651._fU0, ref l_U651._fU8 );
                        SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
                        SET_ROUTE( l_U651._fU8, 1 );
                        CLEAR_THIS_PRINT( "R10_WANTED" );
                        if (l_U569)
                        {
                            if (l_U651._fU64)
                            {
                                PRINT_NOW( "GETIN_C", 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( "GETIN_B", 7500, 1 );
                            }
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_11230(), l_U651._fU0, 250.00000000, 250.00000000, 0 )))
                    {
                        sub_9361( "current_roman10m_stage = FAILED_SUBPART too far from deh\n" );
                        if (sub_21608( l_U651._fU0 ))
                        {
                            sub_22637( 1 );
                            g_U64577++;
                            g_U64577 = g_U64577 mod 10;
                            sub_24455();
                        }
                        else
                        {
                            sub_22637( 2 );
                            g_U64577++;
                            g_U64577 = g_U64577 mod 10;
                            sub_24455();
                        }
                    };;;;
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 ))
                {
                    GET_CAR_SPEED( l_U651._fU0, ref l_U804 );
                    if (LOCATE_CAR_2D( l_U651._fU0, l_U681._fU0, l_U681._fU4, 4.00000000, 3.75000000, 0 ))
                    {
                        if (sub_54009( 1, 1 ))
                        {
                            if (DOES_BLIP_EXIST( l_U669 ))
                            {
                                SET_ROUTE( l_U669, 0 );
                                REMOVE_BLIP( l_U669 );
                            }
                            l_U553 = 3;
                        }
                    }
                    else if (LOCATE_CHAR_IN_CAR_3D( sub_11230(), l_U681._fU0, l_U681._fU4, l_U681._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        ;
                    }
                }
                else if (LOCATE_CHAR_ON_FOOT_3D( sub_11230(), l_U681._fU0, l_U681._fU4, l_U681._fU8, 8.00000000, 3.80000000, 3.00000000, 0 ))
                {
                    if (DOES_OBJECT_EXIST( g_U9167 ))
                    {
                        GET_OBJECT_COORDINATES( g_U9167, ref l_U639._fU28._fU0, ref l_U639._fU28._fU4, ref l_U639._fU28._fU8 );
                        if (l_U639._fU28._fU8 < l_U639._fU0[0]._fU8)
                        {
                            SLIDE_OBJECT( g_U9167, l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, l_U639._fU0[0]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                        }
                    }
                };;;
            }
            else
            {
                sub_9361( "current_roman10m_stage = FAILED_SUBPART GET_VEHICLE_TO_LOCKUP.IS_CAR_UNSTEALABLE(desired.veh)\n" );
                if (sub_21608( l_U651._fU0 ))
                {
                    sub_22637( 1 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
                else
                {
                    sub_22637( 2 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
            }
            break;
            case 3:
            sub_54830();
            break;
        }
    }
    sub_3813();
    return;
}

void sub_678()
{
    sub_687();
    return;
}

void sub_687()
{
    int iVar2;

    iVar2 = 22;
    sub_701( iVar2 );
    sub_2228( iVar2 );
    return;
}

void sub_701(unknown uParam0)
{
    if (g_U813)
    {
        sub_720();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_799(), 150 );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 8:
        case 19:
        case 22:
        sub_896( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_2007( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_2142();
    return;
}

void sub_720()
{
    sub_729();
    return;
}

void sub_729()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_799()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_907( uParam1 );
    sub_1102( uParam0, 0, uParam2 );
    sub_1102( uParam0, 1, uParam3 );
    sub_1102( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1874();
    return;
}

void sub_907(unknown uParam0)
{
    ADD_SCORE( sub_799(), uParam0 );
    sub_932( uParam0 );
    return;
}

void sub_932(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1043( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1043(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1102(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_1259( uParam0 );
    }
    return;
}

void sub_1259(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

void sub_1874()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_2007(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_2142()
{
    sub_2151();
    return;
}

void sub_2151()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2228(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_2007( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U13391[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_2007( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U13391[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U13391[uParam0]._fU160._fU100 < iVar3)
    {
        g_U13391[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U10978 = 0;
    g_U10981[uParam0]._fU28 = 1;
    sub_2627();
    sub_3251();
    uVar4 = sub_3286( uParam0 );
    sub_3706( uVar4, 0 );
    return;
}

void sub_2627()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2665( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2665( 1, g_U569[I] )) != 0)
            {
                sub_2951( I );
            }
        }
    }
    if (NOT sub_3117())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_2665(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2951(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_3036( g_U569 - 1 );
    return;
}

void sub_3036(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_3117()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2665( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3251()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_3286(unknown uParam0)
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
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1043( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_3706(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_3813()
{
    if (DOES_VEHICLE_EXIST( l_U651._fU0 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U651._fU0 );
    }
    switch (l_U556)
    {
        case 0:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        REMOVE_DECISION_MAKER( l_U760 );
        REMOVE_DECISION_MAKER( l_U761 );
        SWITCH_PED_PATHS_OFF( l_U808[0]._fU0, l_U808[0]._fU4, l_U808[0]._fU8, l_U808[1]._fU0, l_U808[1]._fU4, l_U808[1]._fU8 );
        break;
        case 1:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U762 );
        REMOVE_DECISION_MAKER( l_U761 );
        break;
        case 2:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U807 );
        REMOVE_DECISION_MAKER( l_U760 );
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U762 );
        REMOVE_DECISION_MAKER( l_U761 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U808[0]._fU0, l_U808[0]._fU4, l_U808[0]._fU8, l_U808[1]._fU0, l_U808[1]._fU4, l_U808[1]._fU8 );
        break;
        case 4:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U602[0]._fU0 );
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U760 );
        REMOVE_DECISION_MAKER( l_U762 );
        REMOVE_DECISION_MAKER( l_U761 );
        CLEAR_SEQUENCE_TASK( l_U636 );
        break;
        case 3:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        break;
        case 5:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U807 );
        for ( l_U801 = 0; l_U801 < l_U815; l_U801++ )
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U815[l_U801] );
        }
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U760 );
        REMOVE_DECISION_MAKER( l_U762 );
        REMOVE_DECISION_MAKER( l_U761 );
        CLEAR_SEQUENCE_TASK( l_U637 );
        break;
        case 6:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[1]._fU0 );
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U760 );
        REMOVE_DECISION_MAKER( l_U762 );
        REMOVE_DECISION_MAKER( l_U761 );
        CLEAR_SEQUENCE_TASK( l_U633 );
        CLEAR_SEQUENCE_TASK( l_U634 );
        CLEAR_SEQUENCE_TASK( l_U635 );
        break;
        case 7:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U581[0]._fU0 );
        break;
        case 8:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        break;
        case 9:
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U571._fU0 );
        REMOVE_DECISION_MAKER( l_U759 );
        REMOVE_DECISION_MAKER( l_U762 );
        break;
    }
    REMOVE_ANIMS( "missRoman10" );
    sub_4920();
    DONT_SUPPRESS_CAR_MODEL( l_U651._fU4 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_5033();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4920()
{
    int I;

    if (l_U514 != 0)
    {
        for ( I = 0; I <= (l_U514 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U481[I] );
        }
    }
    l_U514 = 0;
    return;
}

void sub_5033()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_5091(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U557 = uParam0._fU0;
    l_U556 = uParam0._fU4;
    l_U570 = uParam0._fU8;
    l_U678 = {861.12460000, -122.48690000, 5.93060000};
    l_U681 = {872.01850000, -121.64500000, 7.50010000};
    l_U639._fU0[0] = {864.32000000, l_U681._fU4, 12.00000000 - 0.50000000};
    l_U639._fU0[1] = {l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, 7.40000000};
    l_U639._fU28 = {l_U639._fU0[0]};
    switch (l_U557)
    {
        case 0:
        l_U651._fU4 = -1041692462;
        StrCopy( ref l_U750, "GET_BANSHEE", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 67;
        l_U651._fU28[1] = 4;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 1:
        l_U651._fU4 = 2006918058;
        StrCopy( ref l_U750, "GET_CAVALCADE", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 34;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 2:
        l_U651._fU4 = -1097828879;
        StrCopy( ref l_U750, "GET_FELTZER", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 8;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 3:
        l_U651._fU4 = 886934177;
        StrCopy( ref l_U750, "GET_INTRUDER", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 7;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 4:
        l_U651._fU4 = -808457413;
        StrCopy( ref l_U750, "GET_PATRIOT", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 2;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 5:
        l_U651._fU4 = 1376298265;
        StrCopy( ref l_U750, "GET_PMP600", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 36;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 6:
        l_U651._fU4 = -1685021548;
        StrCopy( ref l_U750, "GET_TURISMO", 16 );
        l_U651._fU64 = 1;
        l_U651._fU28[0] = 28;
        l_U651._fU28[1] = 15;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 7:
        l_U651._fU4 = 1203311498;
        StrCopy( ref l_U750, "GET_NRG900", 16 );
        l_U651._fU64 = 0;
        l_U651._fU28[0] = 27;
        l_U651._fU28[1] = 1;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 8:
        l_U651._fU4 = -909201658;
        StrCopy( ref l_U750, "GET_PCJ", 16 );
        l_U651._fU64 = 0;
        l_U651._fU28[0] = 3;
        l_U651._fU28[1] = 0;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
        case 9:
        l_U651._fU4 = 788045382;
        StrCopy( ref l_U750, "GET_SANCHEZ", 16 );
        l_U651._fU64 = 0;
        l_U651._fU28[0] = 35;
        l_U651._fU28[1] = 35;
        l_U651._fU28[2] = 0;
        l_U651._fU28[3] = 0;
        break;
    }
    if (l_U651._fU64)
    {
        l_U806 = "R10p_LB_C";
    }
    else
    {
        l_U806 = "R10p_LB_B";
    }
    switch (l_U556)
    {
        case 0:
        l_U651._fU12 = {1376.88600000, -251.18110000, 19.64360000};
        l_U651._fU24 = 179.73930000;
        l_U571._fU8 = {0.19000000, 0.69830000, 0.43040000};
        l_U571._fU20 = 181.92400000;
        l_U571._fU4 = -1143910864;
        l_U581[0]._fU8 = {1376.26300000, -255.28380000, 19.16440000};
        l_U581[0]._fU20 = 9.17200000;
        l_U581[0]._fU4 = -301223260;
        l_U581[1]._fU8 = {1375.18000000, -253.87000000, 19.28340000};
        l_U581[1]._fU20 = 242.48000000;
        l_U581[1]._fU4 = l_U581[0]._fU4;
        l_U674 = {1352.66400000, -251.56970000, 23.19490000};
        l_U677 = 261.88060000;
        l_U808[0] = {l_U651._fU12 - (vector( l_U805, l_U805, l_U805))};
        l_U808[1] = {l_U651._fU12 + (vector( l_U805, l_U805, l_U805))};
        StrCopy( ref l_U754, "FROM_HEDGEBURY", 16 );
        break;
        case 1:
        l_U651._fU12 = {1521.97100000, 103.66170000, 22.64720000};
        l_U651._fU24 = 228.72660000;
        l_U674 = {1497.53800000, 101.42510000, 22.77360000};
        l_U677 = 271.31510000;
        StrCopy( ref l_U754, "FROM_GRAYFORDS", 16 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref l_U802 );
        break;
        case 2:
        l_U651._fU12 = {1108.01500000, -151.00530000, 32.16010000};
        l_U651._fU24 = 175.65280000;
        l_U571._fU8 = {1105.10600000, -147.20430000, 32.21850000};
        l_U571._fU20 = 193.15420000;
        l_U571._fU4 = 1180218190;
        l_U581[0]._fU8 = {1104.95900000, -146.57290000, 32.21790000};
        l_U581[0]._fU20 = 192.28140000;
        l_U581[0]._fU4 = -183203150;
        l_U581[1]._fU8 = {1105.69200000, -142.19340000, 32.22110000};
        l_U581[1]._fU20 = 212.74090000;
        l_U581[1]._fU4 = -370395528;
        l_U674 = {1102.91700000, -114.74820000, 34.86350000};
        l_U677 = 219.06750000;
        l_U808[0] = {1102.60200000, -210.12190000, 21.56280000};
        l_U808[1] = {1121.47900000, -112.47830000, 36.17690000};
        StrCopy( ref l_U754, "FROM_S_SLOPES", 16 );
        break;
        case 3:
        l_U651._fU12 = {1167.54900000, -138.79470000, 29.88520000};
        l_U651._fU24 = 87.93650000;
        l_U674 = {1206.50900000, -137.42770000, 26.81520000};
        l_U677 = 90.83390000;
        l_U571._fU4 = -1850743775;
        StrCopy( ref l_U754, "FROM_S_SLOPES", 16 );
        break;
        case 4:
        l_U651._fU12 = {733.50290000, 1457.02800000, 13.90220000};
        l_U651._fU24 = 190.03870000;
        l_U674 = {732.33910000, 1490.48500000, 14.14350000};
        l_U677 = 237.37290000;
        l_U571._fU4 = -1420592428;
        l_U581[0]._fU4 = 996267216;
        switch (l_U557)
        {
            case 0:
            case 6:
            l_U581[0]._fU8 = {734.93140000, 1457.51800000, 13.11990000};
            break;
            case 4:
            case 5:
            case 1:
            case 2:
            case 3:
            l_U581[0]._fU8 = {735.49380000, 1457.43800000, 13.09780000};
            break;
            case 7:
            case 8:
            case 9:
            l_U581[0]._fU8 = {734.85840000, 1457.32100000, 13.12260000};
            break;
            default:
              case 10:
        }
        l_U581[0]._fU20 = 117.67980000;
        if ((l_U557 == 7) || (l_U557 == 8))
        {
            l_U758 = "smoke_sports_bike";
        }
        else if (l_U557 == 9)
        {
            l_U758 = "smoke_dirt_bike";
        }
        else
        {
            l_U758 = "smoke_ds";
        }
        StrCopy( ref l_U754, "FROM_CHASEPOINT", 16 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U802 );
        break;
        case 5:
        l_U651._fU12 = {736.02420000, 44.18560000, 5.58680000};
        l_U651._fU24 = 185.04000000;
        l_U670 = {737.55160000, 34.67990000, 6.02880000};
        l_U673 = 168.08630000;
        l_U571._fU4 = 897868981;
        l_U571._fU8 = {737.52960000, 43.97150000, 4.77350000};
        l_U571._fU20 = 180.00000000;
        l_U581[0]._fU4 = -1420592428;
        l_U581[0]._fU8 = {739.63400000, 43.99860000, 4.77320000};
        l_U581[0]._fU20 = 180.00000000;
        l_U581[1]._fU4 = l_U581[0]._fU4;
        l_U581[1]._fU8 = {738.17040000, 40.42740000, 4.77270000};
        l_U581[1]._fU20 = 0.00000000;
        l_U602[0]._fU4 = -1420592428;
        l_U602[0]._fU8 = {740.09970000, 39.87480000, 4.77320000};
        l_U602[0]._fU20 = 0.00000000;
        l_U674 = {733.56420000, 79.73980000, 4.77540000};
        l_U677 = 166.49280000;
        StrCopy( ref l_U754, "FROM_DOWNTOWN", 16 );
        break;
        case 6:
        l_U651._fU12 = {1222.23900000, 56.81060000, 35.64350000};
        l_U651._fU24 = 218.98640000;
        l_U571._fU4 = -1481923910;
        l_U571._fU8 = {1220.04300000, 59.44770000, 35.30310000};
        l_U571._fU20 = 253.77890000;
        l_U581[0]._fU4 = -1283406538;
        l_U581[0]._fU8 = {1221.35900000, 59.70230000, 35.37220000};
        l_U581[0]._fU20 = 197.09160000;
        l_U581[1]._fU4 = l_U581[0]._fU4;
        l_U581[1]._fU8 = {1219.15500000, 57.77210000, 35.15960000};
        l_U581[1]._fU20 = 273.27090000;
        l_U674 = {1226.15600000, 29.62200000, 34.61390000};
        l_U677 = 0.00000000;
        StrCopy( ref l_U754, "FROM_SCHOTTLER", 16 );
        break;
        case 7:
        l_U651._fU12 = {1264.69200000, 423.22190000, 23.17510000};
        l_U651._fU24 = 90.00000000;
        l_U571._fU4 = -1149743642;
        l_U571._fU8 = {1264.96400000, 421.95660000, 22.59860000};
        l_U571._fU20 = 85.09730000;
        l_U581[0]._fU4 = -1298691925;
        l_U581[0]._fU8 = {1256.27600000, 429.74190000, 23.62290000};
        l_U581[0]._fU20 = 276.53690000;
        l_U674 = {1238.76200000, 424.74180000, 21.65380000};
        l_U677 = 270.00000000;
        StrCopy( ref l_U754, "FROM_CERVESA", 16 );
        break;
        case 8:
        l_U651._fU12 = {1694.17900000, 908.28730000, 15.04240000};
        l_U651._fU24 = 39.67730000;
        l_U674 = {1708.56200000, 879.73380000, 15.00390000};
        l_U677 = 20.82680000;
        StrCopy( ref l_U754, "FROM_MEADOWS", 16 );
        break;
        case 9:
        l_U651._fU12 = {1667.06500000, 422.07830000, 28.45390000};
        l_U651._fU24 = 270.00000000;
        l_U581[0]._fU4 = -183203150;
        l_U581[0]._fU8 = {1642.90100000, 412.18840000, 30.78940000};
        l_U581[0]._fU20 = 271.66680000;
        l_U581[1]._fU4 = l_U581[0]._fU4;
        l_U581[1]._fU8 = {1642.58400000, 413.62680000, 31.08170000};
        l_U581[1]._fU20 = 260.11360000;
        l_U674 = {1624.62000000, 418.06900000, 28.04290000};
        l_U677 = 270.00000000;
        StrCopy( ref l_U754, "FROM_WILLIS", 16 );
        break;
    }
    l_U687[0] = {861.05110000, -120.02920000, 6.30710000};
    l_U703[0] = {-8.28420000, -0.00000000, -122.94740000};
    l_U719[0] = 70.00000000;
    l_U725[0] = 1.00000000;
    l_U731[0] = 11.00000000;
    l_U687[1] = {859.42890000, -118.92790000, 13.91580000};
    l_U703[1] = {-44.07680000, 0.00000000, -137.64310000};
    l_U719[1] = 70.00000000;
    l_U725[1] = 7.00000000;
    l_U731[1] = 9.50000000;
    l_U687[2] = {859.78500000, -121.70480000, 5.49740000};
    l_U703[2] = {28.21990000, -0.00000000, -90.85720000};
    l_U719[2] = 70.00000000;
    l_U725[2] = 2.00000000;
    l_U731[2] = 10.00000000;
    l_U687[3] = {858.39400000, -121.52800000, 14.45480000};
    l_U703[3] = {-43.92390000, 0.00000000, -88.36870000};
    l_U719[3] = 70.60000000;
    l_U725[3] = 8.00000000;
    l_U731[3] = 9.50000000;
    l_U687[4] = {861.17100000, -126.39620000, 6.65530000};
    l_U703[4] = {-3.47080000, -0.00000000, -19.97010000};
    l_U719[4] = 70.00000000;
    l_U725[4] = 4.50000000;
    l_U731[4] = 5.50000000;
    GENERATE_RANDOM_INT_IN_RANGE( 0, l_U687 - 1, ref l_U737 );
    return;
}

void sub_9292()
{
    sub_9308( l_U651._fU4 );
    SUPPRESS_CAR_MODEL( l_U651._fU4 );
    REQUEST_ANIMS( "missRoman10" );
    switch (l_U556)
    {
        case 0:
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9650( l_U581[1]._fU4 );
        sub_9778( 1 );
        sub_9778( 7 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U761, 15 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 1:
        sub_9650( 1290755317 );
        sub_9650( 768442188 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U759 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U762 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 2:
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9650( l_U581[1]._fU4 );
        sub_9778( 7 );
        sub_9308( 2046537925 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U759 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U762 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U761, 15 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        break;
        case 4:
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9778( 7 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U759 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U762 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U761, 25 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 3:
        sub_9650( l_U571._fU4 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 5:
        sub_9308( 904750859 );
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9778( 1 );
        sub_9778( 3 );
        sub_9333( -237900182 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U759 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U762 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        break;
        case 6:
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9778( 12 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U759 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U762 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 7:
        sub_9650( l_U571._fU4 );
        sub_9650( l_U581[0]._fU4 );
        sub_9778( 10 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 8:
        sub_9650( 1865082075 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        break;
        case 9:
        sub_9650( l_U581[0]._fU4 );
        sub_9650( l_U581[1]._fU4 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U760 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U761 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        break;
    }
    ADD_BLIP_FOR_COORD( l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8, ref l_U651._fU8 );
    SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
    SET_ROUTE( l_U651._fU8, 1 );
    sub_10672( "ROMA10P", 0 );
    sub_10825( "RP10AUD" );
    sub_10672( "RP10AUD", 6 );
    sub_10963( "Roma10" );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    PRINT_STRING_IN_STRING( ref l_U750, ref l_U754, 7000, 1 );
    return;
}

void sub_9308(unknown uParam0)
{
    char[64] cVar3;

    if (IS_THIS_MODEL_A_VEHICLE( uParam0 ))
    {
        sub_9333( uParam0 );
    }
    else
    {
        StrCopy( ref cVar3, "model ", 64 );
        ConcatString(ref cVar3, GET_MODEL_NAME_FOR_DEBUG( uParam0 ), 64);
        ConcatString(ref cVar3, " not a vehicle model", 64);
        SCRIPT_ASSERT( ref cVar3 );
    }
    return;
}

void sub_9333(unknown uParam0)
{
    sub_9361( "REQUEST_A_MODEL(" );
    sub_9361( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_9361( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U481[l_U514] = uParam0;
    l_U514++;
    return;
}

void sub_9361(unknown uParam0)
{
    return;
}

void sub_9650(unknown uParam0)
{
    char[64] cVar3;

    if (IS_THIS_MODEL_A_PED( uParam0 ))
    {
        sub_9333( uParam0 );
    }
    else
    {
        StrCopy( ref cVar3, "model ", 64 );
        ConcatString(ref cVar3, GET_MODEL_NAME_FOR_DEBUG( uParam0 ), 64);
        ConcatString(ref cVar3, " not a ped model", 64);
        SCRIPT_ASSERT( ref cVar3 );
    }
    return;
}

void sub_9778(unknown uParam0)
{
    unknown uVar3;

    GET_WEAPONTYPE_MODEL( uParam0, ref uVar3 );
    sub_9333( uVar3 );
    return;
}

void sub_10672(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_10708())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_10708()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_10825(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_10844();
    return;
}

void sub_10844()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_10963(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_11230()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_11339()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (DOES_VEHICLE_EXIST( l_U651._fU0 )))
    {
        if (sub_11368())
        {
            CREATE_CAR( l_U651._fU4, l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8, ref l_U651._fU0, 1 );
            SET_CAR_HEADING( l_U651._fU0, l_U651._fU24 );
            SET_CAR_ON_GROUND_PROPERLY( l_U651._fU0 );
            ADD_UPSIDEDOWN_CAR_CHECK( l_U651._fU0 );
            SET_VEH_HAS_STRONG_AXLES( l_U651._fU0, 1 );
            if (DOES_BLIP_EXIST( l_U651._fU8 ))
            {
                SET_ROUTE( l_U651._fU8, 0 );
                REMOVE_BLIP( l_U651._fU8 );
            }
            CHANGE_CAR_COLOUR( l_U651._fU0, l_U651._fU28[0], l_U651._fU28[1] );
            SET_EXTRA_CAR_COLOURS( l_U651._fU0, l_U651._fU28[2], l_U651._fU28[2] );
        }
        else
        {
            return 0;
        }
    }
    else if ((NOT l_U823) AND (NOT (IS_CAR_DEAD( l_U651._fU0 ))))
    {
        if (SET_CAR_ON_GROUND_PROPERLY( l_U651._fU0 ))
        {
            l_U823 = 1;
        }
    }
    switch (l_U556)
    {
        case 0:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if (((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" ))) AND (NOT (IS_CAR_DEAD( l_U651._fU0 ))))
            {
                if (NOT (IS_CAR_WAITING_FOR_WORLD_COLLISION( l_U651._fU0 )))
                {
                    GET_MODEL_DIMENSIONS( l_U651._fU4, ref l_U783, ref l_U786 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, l_U571._fU8._fU0, l_U571._fU8._fU4 + l_U786._fU4, l_U571._fU8._fU8, ref l_U571._fU8._fU0, ref l_U571._fU8._fU4, ref l_U571._fU8._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU8._fU8 );
                    CREATE_CHAR( 7, l_U571._fU4, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU0, 1 );
                    SET_CHAR_HEADING( l_U571._fU0, l_U571._fU20 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                    sub_12254();
                    SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U760 );
                    SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U761 );
                    GIVE_WEAPON_TO_CHAR( l_U571._fU0, 7, 500, 0 );
                    SET_CHAR_NAME_DEBUG( l_U571._fU0, "gang driver" );
                    sub_9361( "  * SWITCH_PED_PATHS_OFF(" );
                    sub_12664( l_U808[0] );
                    sub_9361( ", " );
                    sub_12664( l_U808[1] );
                    sub_9361( ")\n" );
                    SWITCH_PED_PATHS_OFF( l_U808[0]._fU0, l_U808[0]._fU4, l_U808[0]._fU8, l_U808[1]._fU0, l_U808[1]._fU4, l_U808[1]._fU8 );
                }
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if (((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" ))) AND (NOT (IS_CHAR_DEAD( l_U571._fU0 ))))
            {
                CREATE_CHAR( 7, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                TASK_PLAY_ANIM( l_U581[0]._fU0, "agree", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 1, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U581[0]._fU0, 0, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "gang mate0" );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[1]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                CREATE_CHAR( 7, l_U581[1]._fU4, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, ref l_U581[1]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[1]._fU0, l_U581[1]._fU20 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[1]._fU0 );
                TASK_PLAY_ANIM( l_U581[1]._fU0, "explain_a", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[1]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[1]._fU0, 7, 500, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U581[1]._fU0, 0, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[1]._fU0, "gang mate1" );
            }
            else
            {
                return 0;
            }
        }
        break;
        case 1:
        GET_MODEL_DIMENSIONS( l_U651._fU4, ref l_U783, ref l_U786 );
        if (NOT (IS_CAR_DEAD( l_U651._fU0 )))
        {
            SET_VEHICLE_DIRT_LEVEL( l_U651._fU0, 0.00000000 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, 0.00000000, l_U786._fU4 + l_U795, 0.00000000, ref l_U571._fU8._fU0, ref l_U571._fU8._fU4, ref l_U571._fU8._fU8 );
                CREATE_CHAR( 4, 768442188, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU0, 1 );
                SET_CHAR_HEADING( l_U571._fU0, l_U651._fU24 + l_U794 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U761 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U571._fU0, 23 );
                SET_CHAR_RELATIONSHIP( l_U571._fU0, 2, 0 );
                TASK_PLAY_ANIM( l_U571._fU0, "CARWASH_C", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "wash driver" );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, l_U786._fU0 + l_U795, 0.00000000, 0.00000000, ref l_U581[0]._fU8._fU0, ref l_U581[0]._fU8._fU4, ref l_U581[0]._fU8._fU8 );
                CREATE_CHAR( 4, 768442188, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U651._fU24 + l_U793 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                TASK_PLAY_ANIM( l_U581[0]._fU0, "CARWASH_A", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U581[0]._fU0, 23 );
                SET_CHAR_RELATIONSHIP( l_U581[0]._fU0, 2, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "wash mate0" );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[1]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, l_U783._fU0 - l_U795, l_U786._fU4 * 0.50000000, 0.00000000, ref l_U581[1]._fU8._fU0, ref l_U581[1]._fU8._fU4, ref l_U581[1]._fU8._fU8 );
                CREATE_CHAR( 5, 1290755317, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, ref l_U581[1]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[1]._fU0, l_U651._fU24 + l_U792 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[1]._fU0 );
                TASK_PLAY_ANIM( l_U581[1]._fU0, "CARWASH_C", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[1]._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U762 );
                SET_CHAR_NAME_DEBUG( l_U581[1]._fU0, "wash mate1" );
                sub_14718( 1, l_U581[1]._fU0, "CARWASH", 0 );
            }
            else
            {
                return 0;
            }
        }
        break;
        case 2:
        if (NOT (DOES_VEHICLE_EXIST( l_U807 )))
        {
            if (sub_11368())
            {
                CREATE_CAR( 2046537925, 1107.31100000, -142.74220000, 32.12350000, ref l_U807, 1 );
                SET_CAR_HEADING( l_U807, 182.56810000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U807 );
                SWITCH_CAR_SIREN( l_U807, 1 );
                OPEN_CAR_DOOR( l_U807, 1 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                CREATE_CHAR( 4, l_U571._fU4, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_HEADING( l_U571._fU0, l_U571._fU20 );
                TASK_PLAY_ANIM( l_U571._fU0, "searched_pose", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U762 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "cops driver" );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                CREATE_CHAR( 6, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                TASK_PLAY_ANIM( l_U581[0]._fU0, "cop_search", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 7, 30000, 0 );
                SET_CHAR_ACCURACY( l_U581[0]._fU0, 15 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "cops mate0" );
                SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U581[0]._fU0, 1 );
            }
            else
            {
                return 0;
            }
        }
        if ((NOT (DOES_CHAR_EXIST( l_U581[1]._fU0 ))) AND (IS_VEH_DRIVEABLE( l_U807 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 6, l_U581[1]._fU4, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, ref l_U581[1]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[1]._fU0 );
                SET_CHAR_HEADING( l_U581[1]._fU0, l_U581[1]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[1]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[1]._fU0, 7, 30000, 0 );
                SET_CHAR_ACCURACY( l_U581[1]._fU0, 15 );
                SET_CHAR_NAME_DEBUG( l_U581[1]._fU0, "cops mate1" );
                SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U581[1]._fU0, 1 );
            }
            else
            {
                return 0;
            }
        }
        SWITCH_ROADS_OFF( l_U808[0]._fU0, l_U808[0]._fU4, l_U808[0]._fU8, l_U808[1]._fU0, l_U808[1]._fU4, l_U808[1]._fU8 );
        break;
        case 4:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if (((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" ))) AND (IS_VEH_DRIVEABLE( l_U651._fU0 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U651._fU0, 4, l_U571._fU4, ref l_U571._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                TASK_PLAY_ANIM( l_U571._fU0, l_U758, "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U571._fU0, 7, 500, 0 );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U651._fU12, 20.00000000, 5 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "pimp driver" );
                sub_14718( 3, l_U571._fU0, "PIMP", 0 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if (((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" ))) AND (NOT (IS_CAR_DEAD( l_U651._fU0 ))))
            {
                CREATE_CHAR( 24, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                OPEN_SEQUENCE_TASK( ref l_U638 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8 );
                TASK_START_SCENARIO_AT_POSITION( 0, "Scenario_Prostitute", l_U581[0]._fU8, l_U581[0]._fU20 );
                CLOSE_SEQUENCE_TASK( l_U638 );
                TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U638 );
                CLEAR_SEQUENCE_TASK( l_U638 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U762 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "pimp mate0" );
                if (NOT (IS_CHAR_DEAD( l_U571._fU0 )))
                {
                    TASK_LOOK_AT_CHAR( l_U571._fU0, l_U581[0]._fU0, -2, 0 );
                }
            }
            else
            {
                return 0;
            }
        }
        break;
        case 3:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (IS_VEH_DRIVEABLE( l_U651._fU0 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U651._fU0, 5, l_U571._fU4, ref l_U571._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "ride driver" );
                TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, 12.00000000, 6 );
                if (DOES_BLIP_EXIST( l_U651._fU8 ))
                {
                    SET_ROUTE( l_U651._fU8, 0 );
                }
                if (NOT (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U651._fU0 )))
                {
                    ADD_STUCK_CAR_CHECK_WITH_WARP( l_U651._fU0, 1.00000000, 2000, 1, 1, 1, 1 );
                }
            }
            else
            {
                return 0;
            }
        }
        break;
        case 5:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (IS_VEH_DRIVEABLE( l_U651._fU0 )))
            {
                CREATE_CHAR( 4, l_U571._fU4, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_HEADING( l_U571._fU0, l_U571._fU20 );
                sub_14718( 5, l_U571._fU0, "BOSS", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U571._fU0, 0, 1, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U571._fU0, 1, 0, 2 );
                SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U759 );
                SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U762 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "docks driver" );
                TASK_START_SCENARIO_IN_PLACE( l_U571._fU0, "Scenario_SmokingOutsideOffice", -1082130432 );
                CLEAR_SEQUENCE_TASK( l_U637 );
                OPEN_SEQUENCE_TASK( ref l_U637 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 743.49490000, 38.52830000, 5.77810000 );
                TASK_EXTEND_ROUTE( 754.31220000, -10.83140000, 5.77430000 );
                TASK_EXTEND_ROUTE( 807.27310000, -1.03970000, 5.94300000 );
                TASK_DRIVE_POINT_ROUTE_ADVANCED( 0, l_U651._fU0, 15.00000000, 0, l_U651._fU4, 3 );
                TASK_CAR_DRIVE_WANDER( 0, l_U651._fU0, 25.00000000, 3 );
                CLOSE_SEQUENCE_TASK( l_U637 );
                SWITCH_ROADS_OFF( l_U651._fU12._fU0 - 25.00000000, l_U651._fU12._fU4 - 25.00000000, l_U651._fU12._fU8 - 25.00000000, l_U651._fU12._fU0 + 25.00000000, l_U651._fU12._fU4 + 25.00000000, l_U651._fU12._fU8 + 25.00000000 );
                CLEAR_AREA( l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8, 25.00000000, 0 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 3, 30000, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "docks mate0" );
                TASK_START_SCENARIO_IN_PLACE( l_U581[0]._fU0, "Scenario_SmokingOutsideOffice", -1082130432 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[1]._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U581[1]._fU4, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, ref l_U581[1]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[1]._fU0 );
                SET_CHAR_HEADING( l_U581[1]._fU0, l_U581[1]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[1]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[1]._fU0, 1, 30000, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[1]._fU0, "docks mate1" );
                TASK_START_SCENARIO_IN_PLACE( l_U581[1]._fU0, "Scenario_Standing", -1082130432 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U602[0]._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U602[0]._fU4, l_U602[0]._fU8._fU0, l_U602[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U602[0]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U602[0]._fU0 );
                SET_CHAR_HEADING( l_U602[0]._fU0, l_U602[0]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U602[0]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U602[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U602[0]._fU0, 1, 30000, 0 );
                SET_CHAR_NAME_DEBUG( l_U602[0]._fU0, "docks extra0" );
                TASK_START_SCENARIO_IN_PLACE( l_U602[0]._fU0, "Scenario_Standing", -1082130432 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U807 )))
        {
            if (sub_11368())
            {
                CREATE_CAR( 904750859, l_U670._fU0, l_U670._fU4, l_U670._fU8, ref l_U807, 1 );
                SET_CAR_HEADING( l_U807, l_U673 );
                SET_CAR_ON_GROUND_PROPERLY( l_U807 );
                OPEN_CAR_DOOR( l_U807, 2 );
                OPEN_CAR_DOOR( l_U807, 3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, -0.95000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[0], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[0], l_U807, 0, -0.95000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, -0.35000000, -3.25000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[1], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[1], l_U807, 0, -0.35000000, -3.25000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, 0.85000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[3], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[3], l_U807, 0, 0.85000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, 0.20000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[4], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[4], l_U807, 0, 0.20000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, -0.45000000, -2.45000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[5], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[5], l_U807, 0, -0.45000000, -2.45000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U807, -0.95000000, -1.80000000, -0.10000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                CREATE_OBJECT_NO_OFFSET( -237900182, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U815[6], 1 );
                ATTACH_OBJECT_TO_CAR( l_U815[6], l_U807, 0, -0.95000000, -1.80000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000 );
            }
            else
            {
                return 0;
            }
        }
        break;
        case 6:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U571._fU4, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, ref l_U571._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_HEADING( l_U571._fU0, l_U571._fU20 );
                SET_CHAR_DECISION_MAKER( l_U571._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U571._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U571._fU0, 12, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U571._fU0, 0, 0 );
                TASK_START_SCENARIO_IN_PLACE( l_U571._fU0, "Scenario_SmokingOutsideOffice", -1082130432 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "alley driver" );
                sub_14718( 6, l_U571._fU0, "PUSHER", 0 );
                OPEN_SEQUENCE_TASK( ref l_U633 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_11230() );
                TASK_STAND_STILL( 0, 2500 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_COMBAT( 0, sub_11230() );
                CLOSE_SEQUENCE_TASK( l_U633 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 12, 30000, 0 );
                TASK_START_SCENARIO_IN_PLACE( l_U581[0]._fU0, "HangOut_Street", -1082130432 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "alley mate0" );
                sub_14718( 7, l_U581[0]._fU0, "ADDICT", 0 );
                OPEN_SEQUENCE_TASK( ref l_U634 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_STAND_STILL( 0, 3000 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_11230(), 60.00000000, -1, 0, 0, 0, 60.00000000 );
                CLOSE_SEQUENCE_TASK( l_U634 );
                OPEN_SEQUENCE_TASK( ref l_U635 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_11230() );
                TASK_PLAY_ANIM( 0, "indicate_front", "missRoman10", 8.00000000, 0, 0, 0, 1, 1500 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_11230(), 60.00000000, -1, 0, 0, 0, 60.00000000 );
                CLOSE_SEQUENCE_TASK( l_U635 );
            }
            else
            {
                return 0;
            }
        }
        if ((IS_VEH_DRIVEABLE( l_U651._fU0 )) AND (l_U651._fU64))
        {
            OPEN_CAR_DOOR( l_U651._fU0, 5 );
        }
        break;
        case 7:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (NOT (IS_CAR_DEAD( l_U651._fU0 ))))
            {
                CREATE_CHAR_INSIDE_CAR( l_U651._fU0, 4, l_U571._fU4, ref l_U571._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "carpark driver" );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if (sub_11368())
            {
                CREATE_CHAR( 4, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 10, 500, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U581[0]._fU0, 0, 0 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "carpark attendent" );
                sub_14718( 2, l_U571._fU0, "ATTENDANT", 0 );
            }
            else
            {
                return 0;
            }
        }
        break;
        case 8:
        if (NOT (DOES_CHAR_EXIST( l_U571._fU0 )))
        {
            if ((sub_11368()) AND (IS_VEH_DRIVEABLE( l_U651._fU0 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U651._fU0, 4, 1865082075, ref l_U571._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U571._fU0 );
                TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, 7.50000000, 6 );
                if (DOES_BLIP_EXIST( l_U651._fU8 ))
                {
                    SET_ROUTE( l_U651._fU8, 0 );
                }
                SET_CHAR_NAME_DEBUG( l_U571._fU0, "poser driver" );
                if (NOT (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U651._fU0 )))
                {
                    ADD_STUCK_CAR_CHECK_WITH_WARP( l_U651._fU0, 1.00000000, 2000, 1, 1, 1, 1 );
                }
            }
            else
            {
                return 0;
            }
        }
        break;
        case 9:
        if (NOT (DOES_CHAR_EXIST( l_U581[0]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                CREATE_CHAR( 6, l_U581[0]._fU4, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, ref l_U581[0]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[0]._fU0 );
                SET_CHAR_HEADING( l_U581[0]._fU0, l_U581[0]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[0]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[0]._fU0, 7, 30000, 0 );
                SET_CHAR_ACCURACY( l_U581[0]._fU0, 15 );
                SET_CHAR_NAME_DEBUG( l_U581[0]._fU0, "station mate0" );
                SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U581[0]._fU0, 1 );
            }
            else
            {
                return 0;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U581[1]._fU0 )))
        {
            if ((sub_11368()) AND (HAVE_ANIMS_LOADED( "missRoman10" )))
            {
                CREATE_CHAR( 6, l_U581[1]._fU4, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, ref l_U581[1]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[1]._fU0 );
                SET_CHAR_HEADING( l_U581[1]._fU0, l_U581[1]._fU20 );
                SET_CHAR_DECISION_MAKER( l_U581[1]._fU0, l_U760 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U761 );
                GIVE_WEAPON_TO_CHAR( l_U581[1]._fU0, 7, 30000, 0 );
                SET_CHAR_ACCURACY( l_U581[1]._fU0, 15 );
                SET_CHAR_NAME_DEBUG( l_U581[1]._fU0, "station mate1" );
                SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U581[1]._fU0, 1 );
            }
            else
            {
                return 0;
            }
        }
        if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
        {
            LOCK_CAR_DOORS( l_U651._fU0, 7 );
            SET_VEH_ALARM( l_U651._fU0, 1 );
        }
        else
        {
            return 0;
        }
        break;
    }
    return 1;
}

int sub_11368()
{
    int I;

    if (l_U514 != 0)
    {
        for ( I = 0; I <= (l_U514 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U481[I] )))
            {
                REQUEST_MODEL( l_U481[I] );
                sub_9361( "REQUEST_MODEL(" );
                sub_9361( GET_MODEL_NAME_FOR_DEBUG( l_U481[I] ) );
                sub_9361( ") [" );
                sub_11501( I );
                sub_9361( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_11501(unknown uParam0)
{
    return;
}

void sub_12254()
{
    switch (l_U557)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        if (sub_12373( l_U571._fU0, 114 ))
        {
            TASK_START_SCENARIO_IN_PLACE( l_U571._fU0, "Scenario_Standing", -1082130432 );
        }
        break;
        case 7:
        case 8:
        case 9:
        if (sub_12373( l_U571._fU0, 114 ))
        {
            TASK_START_SCENARIO_IN_PLACE( l_U571._fU0, "Scenario_Standing", -1082130432 );
        }
        break;
        default:
          case 10:
    }
    return;
}

int sub_12373(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_12664(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U9231)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_14718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_14802( "\n PED NUMBER ", uParam0 );
    sub_14842( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_14802(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14842(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_21608(unknown uParam0)
{
    if (NOT (IS_VEH_DRIVEABLE( uParam0 )))
    {
        sub_9361( "NOT IS_VEH_DRIVEABLE(VehicleIndex)\n" );
        return 1;
        break;
    }
    if (IS_CAR_DEAD( uParam0 ))
    {
        sub_9361( "IS_CAR_DEAD(VehicleIndex)\n" );
        return 1;
    }
    if ((IS_CAR_STUCK_ON_ROOF( uParam0 )) AND (NOT (IS_THIS_MODEL_A_BIKE( l_U651._fU4 ))))
    {
        sub_9361( "IS_CAR_STUCK_ON_ROOF(VehicleIndex) AND NOT IS_THIS_MODEL_A_BIKE(desired.model)\n" );
        return 1;
    }
    return 0;
}

void sub_21968(unknown uParam0)
{
    g_U2223 = (uParam0^);
    return;
}

void sub_22637(unknown uParam0)
{
    int iVar3;
    char[16] cVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    array(ref cVar4, 3);
    StrCopy( ref cVar4[0], sub_22652( uParam0 ), 16 );
    iVar3 = 8;
    StrCopy( ref cVar4[1], "R10_INSULT", 16 );
    StrCopy( ref cVar4[2], "R10_CHILL", 16 );
    sub_23853( iVar3, ref cVar4, "RP10AUD", 10000, 1 );
    return;
}

string sub_22652(unknown uParam0)
{
    switch (l_U557)
    {
        case 0:
        switch (uParam0)
        {
            case 0:
            return "R10_BANSH";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 1:
        switch (uParam0)
        {
            case 0:
            return "R10_CAVAL";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 0:
            return "R10_FELTZER";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            return "R10_INTRUDER";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 4:
        switch (uParam0)
        {
            case 0:
            return "R10_PATRIOT";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 5:
        switch (uParam0)
        {
            case 0:
            return "R10_PMP600";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 6:
        switch (uParam0)
        {
            case 0:
            return "R10_SABRE";
            break;
            case 1:
            return "R10_TRASHC";
            break;
            case 2:
            return "R10_NOCAR";
            break;
        }
        break;
        case 7:
        switch (uParam0)
        {
            case 0:
            return "R10_NRG900";
            break;
            case 1:
            return "R10_TRASHB";
            break;
            case 2:
            return "R10_NOBIKE";
            break;
        }
        break;
        case 8:
        switch (uParam0)
        {
            case 0:
            return "R10_PCJ600";
            break;
            case 1:
            return "R10_TRASHB";
            break;
            case 2:
            return "R10_NOBIKE";
            break;
        }
        break;
        case 9:
        switch (uParam0)
        {
            case 0:
            return "R10_SANCHEZ";
            break;
            case 1:
            return "R10_TRASHB";
            break;
            case 2:
            return "R10_NOBIKE";
            break;
        }
        break;
    }
    return "get_callLevel_0(null)";
}

void sub_23853(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_23873( uParam0, uParam1, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_23873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_24455()
{
    sub_678();
    if (DOES_BLIP_EXIST( l_U651._fU8 ))
    {
        SET_ROUTE( l_U651._fU8, 0 );
        REMOVE_BLIP( l_U651._fU8 );
    }
    if (sub_21608( l_U651._fU0 ))
    {
        g_U64548[l_U570] = 3;
        if (l_U651._fU64)
        {
            PRINT_NOW( "R10_F_C_DEAD", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "R10_F_B_DEAD", 7500, 1 );
        }
    }
    else
    {
        g_U64548[l_U570] = 4;
        if (l_U651._fU64)
        {
            PRINT_NOW( "R10_F_C_LOST", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "R10_F_B_LOST", 7500, 1 );
        }
    }
    if (g_U64575 > 2)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_799(), 150 );
        SAY_AMBIENT_SPEECH( sub_11230(), "MISSION_FAIL_RAGE", 1, 0, 0 );
    }
    g_U64575++;
    l_U558 = 0;
    return;
}

int sub_24968()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 )))
    {
        switch (l_U555)
        {
            case 0:
            if (((NOT (IS_CHAR_INJURED( l_U571._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))) AND (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 ))))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_11230(), l_U808[0]._fU0, l_U808[0]._fU4, l_U808[0]._fU8, l_U808[1]._fU0, l_U808[1]._fU4, l_U808[1]._fU8, 0 )))
                {
                    if (l_U565)
                    {
                        if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U571._fU0, l_U571._fU8._fU0, l_U571._fU8._fU4, 1.00000000, 1.00000000, 0 )))
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U571._fU0, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, 2, -1 );
                        }
                        else
                        {
                            GET_CURRENT_CHAR_WEAPON( l_U571._fU0, ref iVar3 );
                            if (iVar3 != 0)
                            {
                                TASK_SWAP_WEAPON( l_U571._fU0, 1 );
                            }
                            else if (sub_12373( l_U571._fU0, 29 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar2 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U581[0]._fU0 );
                                TASK_PLAY_ANIM( 0, "agree", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "indicate_front", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "agree", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "agree", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U581[1]._fU0 );
                                TASK_PLAY_ANIM( 0, "agree", "missRoman10", 4.00000000, 0, 0, 0, 0, 0 );
                                SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
                                CLOSE_SEQUENCE_TASK( uVar2 );
                                TASK_PERFORM_SEQUENCE( l_U571._fU0, uVar2 );
                                CLEAR_SEQUENCE_TASK( uVar2 );
                            }
                        }
                        if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U581[0]._fU0, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, 1.00000000, 1.00000000, 0 )))
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U581[0]._fU0, l_U581[0]._fU8._fU0, l_U581[0]._fU8._fU4, l_U581[0]._fU8._fU8, 2, -1 );
                        }
                        else
                        {
                            GET_CURRENT_CHAR_WEAPON( l_U571._fU0, ref iVar3 );
                            if (iVar3 != 0)
                            {
                                TASK_SWAP_WEAPON( l_U571._fU0, 1 );
                            }
                            else if (sub_12373( l_U581[0]._fU0, 29 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar2 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U571._fU0 );
                                TASK_PLAY_ANIM( 0, "agree", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar2 );
                                TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, uVar2 );
                                CLEAR_SEQUENCE_TASK( uVar2 );
                            }
                        }
                        if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U581[1]._fU0, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, 1.00000000, 1.00000000, 0 )))
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U581[1]._fU0, l_U581[1]._fU8._fU0, l_U581[1]._fU8._fU4, l_U581[1]._fU8._fU8, 2, -1 );
                        }
                        else
                        {
                            GET_CURRENT_CHAR_WEAPON( l_U571._fU0, ref iVar3 );
                            if (iVar3 != 0)
                            {
                                TASK_SWAP_WEAPON( l_U571._fU0, 1 );
                            }
                            else if (sub_12373( l_U581[1]._fU0, 29 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar2 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U571._fU0 );
                                TASK_PLAY_ANIM( 0, "explain_a", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar2 );
                                TASK_PERFORM_SEQUENCE( l_U581[1]._fU0, uVar2 );
                                CLEAR_SEQUENCE_TASK( uVar2 );
                            }
                        }
                    }
                }
                else
                {
                    sub_26232( l_U571._fU0, 0, 3.00000000 );
                    sub_26232( l_U581[0]._fU0, 1500, 3.50000000 );
                    sub_26232( l_U581[1]._fU0, 2000, 4.00000000 );
                    if (NOT l_U565)
                    {
                        SAY_AMBIENT_SPEECH( l_U571._fU0, "GANG_WATCH_THIS_GUY", 1, 0, 0 );
                        l_U565 = 1;
                    }
                    l_U555 = 1;
                }
            }
            else
            {
                l_U555 = 2;
            }
            break;
            case 1:
            if (((NOT (IS_CHAR_INJURED( l_U571._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))) AND (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 ))))
            {
                if (IS_CHAR_IN_AREA_3D( sub_11230(), l_U808[0]._fU0 - 5.00000000, l_U808[0]._fU4 - 5.00000000, l_U808[0]._fU8 - 5.00000000, l_U808[1]._fU0 + 2.50000000, l_U808[1]._fU4 + 5.00000000, l_U808[1]._fU8 + 5.00000000, 0 ))
                {
                    if (NOT (sub_26661( l_U571._fU0, 3.00000000 )))
                    {
                        sub_26232( l_U581[0]._fU0, 500, 3.50000000 );
                        sub_26232( l_U581[1]._fU0, 750, 4.00000000 );
                    }
                    if (NOT (sub_26661( l_U581[0]._fU0, 3.50000000 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U581[0]._fU0, sub_11230(), -1, 0 );
                    }
                    if (NOT (sub_26661( l_U581[1]._fU0, 4.00000000 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U581[1]._fU0, sub_11230(), -1, 0 );
                    }
                    if (((IS_PLAYER_TARGETTING_CHAR( sub_799(), l_U571._fU0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_799(), l_U581[0]._fU0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_799(), l_U581[1]._fU0 )))
                    {
                        l_U555 = 2;
                    }
                    if (sub_27220( l_U651._fU0 ))
                    {
                        l_U555 = 2;
                    }
                }
                else
                {
                    l_U555 = 0;
                }
            }
            else
            {
                l_U555 = 2;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 )))
                {
                    if (sub_12373( l_U571._fU0, 12 ))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( l_U571._fU0, l_U651._fU0, -2 );
                    }
                }
                else if (sub_12373( l_U571._fU0, 16 ))
                {
                    TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, 20.00000000, 3 );
                    if (DOES_BLIP_EXIST( l_U651._fU8 ))
                    {
                        SET_ROUTE( l_U651._fU8, 0 );
                    }
                }
                else
                {
                    sub_27528();
                }
                if (sub_27220( l_U651._fU0 ))
                {
                    if (NOT l_U827)
                    {
                        SAY_AMBIENT_SPEECH( l_U571._fU0, "JACKED_IN_CAR", 1, 0, 0 );
                        l_U827 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if (IS_CHAR_INJURED( l_U571._fU0 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U581[0]._fU0, l_U651._fU0 )))
                    {
                        if (sub_12373( l_U581[0]._fU0, 12 ))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U581[0]._fU0, l_U651._fU0, -2 );
                        }
                    }
                    else if (sub_12373( l_U581[0]._fU0, 16 ))
                    {
                        TASK_CAR_DRIVE_WANDER( l_U581[0]._fU0, l_U651._fU0, 20.00000000, 3 );
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                        }
                    }
                    else
                    {
                        sub_27528();
                    }
                }
                else if (sub_12373( l_U581[0]._fU0, 91 ))
                {
                    TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                    TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                }
                if (NOT l_U827)
                {
                    SAY_AMBIENT_SPEECH( l_U581[0]._fU0, "JACKED_ON_STREET", 1, 0, 0 );
                    l_U827 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                if ((IS_CHAR_INJURED( l_U571._fU0 )) AND (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U581[1]._fU0, l_U651._fU0 )))
                    {
                        if (sub_12373( l_U581[1]._fU0, 12 ))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U581[1]._fU0, l_U651._fU0, -2 );
                        }
                    }
                    else if (sub_12373( l_U581[1]._fU0, 16 ))
                    {
                        TASK_CAR_DRIVE_WANDER( l_U581[1]._fU0, l_U651._fU0, 20.00000000, 3 );
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                        }
                    }
                    else
                    {
                        sub_27528();
                    }
                }
                else if (sub_12373( l_U581[1]._fU0, 91 ))
                {
                    TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                    TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                }
                if (NOT l_U827)
                {
                    SAY_AMBIENT_SPEECH( l_U581[1]._fU0, "JACKED_ON_STREET", 1, 0, 0 );
                    l_U827 = 1;
                }
            }
            break;
        }
        return 0;
        break;
    }
    return 1;
}

void sub_26232(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    GET_CURRENT_CHAR_WEAPON( uParam0, ref iVar5 );
    OPEN_SEQUENCE_TASK( ref l_U638 );
    TASK_PAUSE( 0, uParam1 );
    TASK_GO_TO_CHAR( 0, sub_11230(), -1, uParam2 );
    if (iVar5 == 0)
    {
        TASK_SWAP_WEAPON( 0, 1 );
    }
    CLOSE_SEQUENCE_TASK( l_U638 );
    TASK_PERFORM_SEQUENCE( uParam0, l_U638 );
    CLEAR_SEQUENCE_TASK( l_U638 );
    return;
}

int sub_26661(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (sub_12373( uParam0, 29 )))
    {
        GET_SEQUENCE_PROGRESS( uParam0, ref iVar4 );
        if (iVar4 == 1)
        {
            MODIFY_CHAR_MOVE_STATE( uParam0, 2 );
        }
        return 1;
        break;
    }
    if ((sub_26729( uParam0, sub_11230() )) > (uParam1 * 1.50000000))
    {
        sub_26232( uParam0, 0, uParam1 );
    }
    else
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( uParam0, sub_11230() );
    }
    return 0;
}

void sub_26729(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((NOT (DOES_CHAR_EXIST( uParam0 ))) || (NOT (DOES_CHAR_EXIST( uParam1 ))))
    {
        return 9999.00000000;
        break;
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        N_1363505769( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
    return Result;
}

int sub_27220(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        return ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_11230() )) AND (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_11230(), uParam0, 2.00000000, 2.00000000, 0 ))) || (IS_CHAR_SITTING_IN_CAR( sub_11230(), uParam0 ));
        break;
    }
    return 0;
}

int sub_27528()
{
    if ((NOT (IS_CHAR_DEAD( l_U571._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U651._fU0 ))))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U571._fU0, l_U651._fU0 ))
        {
            sub_27605( ref l_U571._fU0 );
        }
        else
        {
            sub_28288();
        }
    }
    else
    {
        sub_28288();
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_11230(), l_U651._fU0, 250.00000000, 250.00000000, 250.00000000, 0 )))
    {
        sub_9361( "current_roman10m_stage = FAILED_SUBPART (DO_CHASE_STUFF.outside of lost dist)\n" );
        if (sub_21608( l_U651._fU0 ))
        {
            sub_22637( 1 );
            g_U64577++;
            g_U64577 = g_U64577 mod 10;
            sub_24455();
        }
        else
        {
            sub_22637( 2 );
            g_U64577++;
            g_U64577 = g_U64577 mod 10;
            sub_24455();
        }
    }
    return 1;
}

void sub_27605(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U552)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U550) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U551 + 500))
        {
            l_U550 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_11230() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_27773())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U552)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U551 );
            l_U550 = 1;
            l_U549 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U549) AND (NOT l_U550))
        {
            if (l_U552)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U549 = 1;
        }
    }
    else if (l_U549)
    {
        if (l_U552)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U549 = 0;
    };;;
    return;
}

int sub_27773()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_28288()
{
    if (l_U552)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U550 = 0;
    l_U549 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

int sub_29491()
{
    if (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 ))
    {
        if (DOES_BLIP_EXIST( l_U651._fU8 ))
        {
            SET_ROUTE( l_U651._fU8, 0 );
            REMOVE_BLIP( l_U651._fU8 );
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_799(), 0 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U669 )))
            {
                ADD_BLIP_FOR_COORD( l_U681._fU0, l_U681._fU4, l_U681._fU8, ref l_U669 );
                CHANGE_BLIP_COLOUR( l_U669, 5 );
                SET_ROUTE( l_U669, 1 );
            }
            if (l_U651._fU64)
            {
                PRINT( "GOTO_LOCKUP_C", 7500, 1 );
            }
            else
            {
                PRINT( "GOTO_LOCKUP_B", 7500, 1 );
            }
        }
        else
        {
            PRINT_NOW( "R10_WANTED", 7500, 1 );
        }
        return 1;
    }
    return 0;
}

int sub_29798()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;

    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        vVar14 = {1528.91200000, 105.29670000, 23.54110000};
        if (NOT (sub_27220( l_U651._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U581[0]._fU0, sub_11230(), 0 )))
                {
                    if ((HAS_CHAR_ANIM_FINISHED( l_U581[0]._fU0, "missRoman10", "CARWASH_C" )) AND (sub_12373( l_U581[0]._fU0, 91 )))
                    {
                        TASK_PLAY_ANIM( l_U581[0]._fU0, "CARWASH_C", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                    }
                }
                else
                {
                    sub_30050( l_U581[0]._fU0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                sub_30050( l_U581[1]._fU0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U581[1]._fU0, sub_11230(), 0 )))
                {
                    if ((HAS_CHAR_ANIM_FINISHED( l_U581[1]._fU0, "missRoman10", "CARWASH_C" )) AND (sub_12373( l_U581[1]._fU0, 91 )))
                    {
                        TASK_PLAY_ANIM( l_U581[1]._fU0, "CARWASH_C", "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                    }
                }
                else
                {
                    sub_30050( l_U581[1]._fU0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                sub_30050( l_U581[0]._fU0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U571._fU0, vVar14.x, vVar14.y, vVar14.z, 1.00000000, 1.00000000, 2.00000000, 0 )))
                {
                    if (sub_12373( l_U571._fU0, 29 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U638 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar14.x, vVar14.y, vVar14.z, 2, -1, 0.50000000 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U651._fU12._fU0, l_U651._fU12._fU4, l_U651._fU12._fU8 );
                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", -1082130432 );
                        CLOSE_SEQUENCE_TASK( l_U638 );
                        TASK_PERFORM_SEQUENCE( l_U571._fU0, l_U638 );
                        CLEAR_SEQUENCE_TASK( l_U638 );
                    }
                }
                else if ((sub_12373( l_U571._fU0, 114 )) AND (sub_12373( l_U571._fU0, 29 )))
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U571._fU0, "Scenario_SmokingOutsideOffice", -1082130432 );
                }
                if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
                {
                    if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_11230(), l_U651._fU0, 3.00000000, 3.00000000, 3.00000000, 0 ))
                    {
                        if (NOT l_U769)
                        {
                            sub_31104( "R10_WASHER", ref l_U771, 6, 1 );
                            l_U769 = 1;
                        }
                        if (((IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_799(), l_U571._fU0 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U571._fU0, sub_11230(), 0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U571._fU0 );
                            TASK_SMART_FLEE_CHAR( l_U571._fU0, sub_11230(), 100.00000000, -1 );
                            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                            {
                                sub_30050( l_U581[0]._fU0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                            {
                                sub_30050( l_U581[1]._fU0 );
                            }
                            if (NOT l_U770)
                            {
                                sub_31104( "R10_STEALS", ref l_U777, 6, 1 );
                                l_U770 = 1;
                            }
                        }
                    }
                    else if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_11230(), l_U651._fU0, 4.00000000, 4.00000000, 4.00000000, 0 ))))
                    {
                        ;
                    }
                }
            }
            else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U571._fU0, sub_11230(), 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    sub_30050( l_U581[0]._fU0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                {
                    sub_30050( l_U581[1]._fU0 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
        {
            CLEAR_CHAR_TASKS( l_U571._fU0 );
            TASK_SMART_FLEE_CHAR( l_U571._fU0, sub_11230(), 100.00000000, -1 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, l_U830._fU0, l_U830._fU4, 2.50000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, l_U830._fU0, l_U830._fU4 * -1.00000000, -1.00000000, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( l_U571._fU0, uVar17._fU0, uVar17._fU4, uVar17._fU8, uVar20._fU0, uVar20._fU4, uVar20._fU8, l_U830._fU0 * -2.00000000, 0 ))
            {
                if (NOT (IS_PED_RAGDOLL( l_U571._fU0 )))
                {
                    UNLOCK_RAGDOLL( l_U571._fU0, 1 );
                    SWITCH_PED_TO_RAGDOLL( l_U571._fU0, 50000, 60000, 1, 1, 1, 0 );
                    CREATE_NM_MESSAGE( 1, 79 );
                    SEND_NM_MESSAGE( l_U571._fU0 );
                    uVar23 = {(((vVar2 + vVar5) + vVar8) + vVar11) * 0.25000000};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U651._fU0, uVar23._fU0, uVar23._fU4, uVar23._fU8, ref uVar23._fU0, ref uVar23._fU4, ref uVar23._fU8 );
                    CREATE_NM_MESSAGE( 1, 119 );
                    SET_NM_MESSAGE_VEC3( 121, uVar23 );
                    SET_NM_MESSAGE_FLOAT( 122, 0.50000000 );
                    SET_NM_MESSAGE_BOOL( 123, 1 );
                    SEND_NM_MESSAGE( l_U571._fU0 );
                    vVar2 = {l_U833 + l_U783._fU0, l_U834, l_U836};
                    vVar5 = {l_U833 + l_U783._fU0, l_U834, l_U837};
                    vVar8 = {l_U833 + l_U783._fU0, l_U835, l_U837};
                    vVar11 = {l_U833 + l_U783._fU0, l_U835, l_U836};
                    CREATE_NM_MESSAGE( 1, 161 );
                    SET_NM_MESSAGE_INSTANCE_INDEX( 177, 0, l_U651._fU0, 0 );
                    SET_NM_MESSAGE_VEC3( 165, vVar2 );
                    SET_NM_MESSAGE_VEC3( 166, vVar5 );
                    SET_NM_MESSAGE_VEC3( 167, vVar8 );
                    SET_NM_MESSAGE_VEC3( 168, vVar11 );
                    SET_NM_MESSAGE_BOOL( 175, 1 );
                    SET_NM_MESSAGE_BOOL( 176, 1 );
                    SET_NM_MESSAGE_BOOL( 172, 1 );
                    SET_NM_MESSAGE_BOOL( 178, 1 );
                    SET_NM_MESSAGE_FLOAT( 164, -1.00000000 );
                    SEND_NM_MESSAGE( l_U571._fU0 );
                    CREATE_NM_MESSAGE( 1, 67 );
                    SEND_NM_MESSAGE( l_U571._fU0 );
                }
            }
            if (NOT l_U770)
            {
                sub_31104( "R10_STEALS", ref l_U777, 6, 1 );
                l_U770 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
        {
            sub_30050( l_U581[0]._fU0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
        {
            sub_30050( l_U581[1]._fU0 );
        }
        return 1;;
    }
    return 0;
}

void sub_30050(unknown uParam0)
{
    if ((NOT (IS_CHAR_ARMED( sub_11230(), 6 ))) AND (NOT l_U839))
    {
        PRINTSTRING( "not armed..., " );
        if (sub_12373( uParam0, 91 ))
        {
            CLEAR_CHAR_TASKS( uParam0 );
            TASK_CLEAR_LOOK_AT( uParam0 );
            TASK_COMBAT( uParam0, sub_11230() );
        }
        if (IS_CHAR_SHOOTING( sub_11230() ))
        {
            l_U839 = 1;
        }
    }
    else
    {
        PRINTSTRING( "ARMED!!!\n" );
        if (NOT l_U838)
        {
            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                CLEAR_CHAR_TASKS( l_U581[0]._fU0 );
                SET_COMBAT_DECISION_MAKER( l_U581[0]._fU0, l_U762 );
            }
            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                CLEAR_CHAR_TASKS( l_U581[1]._fU0 );
                SET_COMBAT_DECISION_MAKER( l_U581[1]._fU0, l_U762 );
            }
            l_U838 = 1;
        }
        if (sub_12373( uParam0, 25 ))
        {
            CLEAR_CHAR_TASKS( uParam0 );
            TASK_SMART_FLEE_CHAR( uParam0, sub_11230(), 50.00000000, -1 );
        }
    }
    return;
}

void sub_31104(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_31127( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_31127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_31181( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_31181(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_31203( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_31883( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_31203(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9361( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_9361( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_9361( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_31883(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_33343()
{
    int iVar2;
    int iVar3;
    float fVar4;

    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 )))
        {
            if (NOT l_U566)
            {
                if (((((((NOT (IS_CHAR_INJURED( l_U571._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))) AND (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))) AND (NOT (IS_CHAR_SHOOTING( sub_11230() )))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_799(), 0 )))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() )))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U807, sub_11230() ))))
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_11230(), l_U581[0]._fU0, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U581[1]._fU0, sub_11230() );
                        SAY_AMBIENT_SPEECH( l_U581[1]._fU0, "ASK_FOR_ID", 1, 0, 0 );
                        l_U566 = 1;
                    }
                    else if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_11230(), l_U651._fU0, 3.00000000, 3.00000000, 2.00000000, 0 ))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U581[1]._fU0, sub_11230() );
                        SAY_AMBIENT_SPEECH( l_U581[1]._fU0, "CHASE_IN_GROUP", 1, 0, 0 );
                        l_U566 = 1;
                    }
                    else if (NOT (IS_CHAR_PLAYING_ANIM( l_U571._fU0, "missRoman10", "searched_pose" )))
                    {
                        SAY_AMBIENT_SPEECH( l_U581[0]._fU0, "CHASE_IN_GROUP", 1, 0, 0 );
                        l_U566 = 1;
                    };;;
                }
                else
                {
                    l_U566 = 1;
                }
            }
            else
            {
                iVar3 = 0;
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U571._fU0, "missRoman10", "searched_pose" )))
                    {
                        iVar3 = 1;
                    }
                }
                else
                {
                    iVar3 = 1;
                }
                if ((((((((sub_33961( l_U581[0]._fU0, 1.00000000 )) || (sub_33961( l_U581[1]._fU0, 1.00000000 ))) || (sub_33961( l_U571._fU0, 1.00000000 ))) || (iVar3)) || (IS_CHAR_SHOOTING( sub_11230() ))) || (IS_WANTED_LEVEL_GREATER( sub_799(), 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U807, sub_11230() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                    {
                        if (sub_12373( l_U571._fU0, 25 ))
                        {
                            CLEAR_CHAR_TASKS( l_U571._fU0 );
                            TASK_SMART_FLEE_CHAR( l_U571._fU0, sub_11230(), 100.00000000, -1 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                    {
                        if (NOT (IS_PED_IN_COMBAT( l_U581[0]._fU0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U581[0]._fU0 );
                            TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                            TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                    {
                        if (NOT (IS_PED_IN_COMBAT( l_U581[1]._fU0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U581[1]._fU0 );
                            TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                            TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                        }
                    }
                    if (NOT l_U840)
                    {
                        STORE_WANTED_LEVEL( sub_799(), ref iVar2 );
                        if (iVar2 <= 2)
                        {
                            ALTER_WANTED_LEVEL_NO_DROP( sub_799(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_799() );
                        }
                        l_U840 = 1;
                    }
                    l_U566 = 1;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U651._fU8 )))
            {
                ADD_BLIP_FOR_CAR( l_U651._fU0, ref l_U651._fU8 );
                SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
                SET_ROUTE( l_U651._fU8, 1 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U651._fU8 ))
        {
            SET_ROUTE( l_U651._fU8, 0 );
            REMOVE_BLIP( l_U651._fU8 );
            if (NOT (IS_CHAR_DEAD( l_U571._fU0 )))
            {
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 100.00000000, ref fVar4 );
                if (fVar4 < 50.00000000)
                {
                    SAY_AMBIENT_SPEECH( l_U571._fU0, "SHIT", 1, 0, 0 );
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U571._fU0, "SHOCKED", 1, 0, 0 );
                }
            }
        }
        if (NOT l_U841)
        {
            if ((NOT (IS_CHAR_DEAD( l_U581[0]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U581[1]._fU0 ))))
            {
                STORE_WANTED_LEVEL( sub_799(), ref iVar2 );
                if (iVar2 <= 2)
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_799(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_799() );
                }
            }
            SETTIMERA( 0 );
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                TASK_SMART_FLEE_CHAR( l_U571._fU0, sub_11230(), 100.00000000, -1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if (NOT (IS_PED_IN_COMBAT( l_U581[0]._fU0 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                    TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                if (NOT (IS_PED_IN_COMBAT( l_U581[1]._fU0 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                    TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                }
            }
            if (l_U651._fU64)
            {
                TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_STEAL_CAR" );
            }
            else
            {
                TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_STEAL_VEHICLE" );
            }
            PRINT( "R10_WANTED", 7500, 1 );
            l_U841 = 1;
        }
        else
        {
            STORE_WANTED_LEVEL( sub_799(), ref iVar2 );
            if (iVar2 <= 0)
            {
                CLEAR_THIS_PRINT( "R10_WANTED" );
                return 1;
            }
        }
    }
    return 0;
}

int sub_33961(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_PLAYER_TARGETTING_CHAR( sub_799(), uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_11230(), uParam0, uParam1, uParam1, 0 )))
        {
            return 1;
        }
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_11230(), 0 ))
        {
            return 1;
        }
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (IS_EXPLOSION_IN_SPHERE( -1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_35354()
{
    if (NOT l_U560)
    {
        if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
        {
            if ((((sub_12373( l_U581[0]._fU0, 115 )) AND (sub_12373( l_U581[0]._fU0, 34 ))) AND (sub_12373( l_U581[0]._fU0, 29 ))) AND (sub_12373( l_U581[0]._fU0, 25 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    TASK_START_SCENARIO_AT_POSITION( l_U581[0]._fU0, "Scenario_Prostitute", l_U581[0]._fU8, l_U581[0]._fU20 );
                }
                else
                {
                    TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
                }
            }
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U581[0]._fU0, sub_11230(), 0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, 20.00000000, 6 );
                    SET_VEHICLE_CAN_BE_TARGETTED( l_U651._fU0, 1 );
                    if (DOES_BLIP_EXIST( l_U651._fU8 ))
                    {
                        SET_ROUTE( l_U651._fU8, 0 );
                    }
                }
                l_U560 = 1;
            }
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if (sub_12373( l_U581[0]._fU0, 25 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U581[0]._fU0 );
                    TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
                {
                    if ((IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() )))
                    {
                        if (NOT l_U770)
                        {
                            sub_31104( "R10_PIMPC", ref l_U777, 6, 1 );
                            l_U770 = 1;
                        }
                        TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, 20.00000000, 6 );
                        SET_VEHICLE_CAN_BE_TARGETTED( l_U651._fU0, 1 );
                        l_U560 = 1;
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
        {
            if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
            {
                if (HAS_CHAR_ANIM_FINISHED( l_U571._fU0, "missRoman10", l_U758 ))
                {
                    sub_9361( "  ** TASK_PL AY_ANIM(driver.ped, 'smoke_ds', 'missRoman10', 4.0, TRUE, FALSE, FALSE, FALSE, 0)\n" );
                    TASK_PLAY_ANIM( l_U571._fU0, l_U758, "missRoman10", 4.00000000, 1, 0, 0, 0, 0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if (sub_12373( l_U581[0]._fU0, 25 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U581[0]._fU0 );
                    TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
        {
            if (sub_12373( l_U581[0]._fU0, 25 ))
            {
                CLEAR_CHAR_TASKS( l_U581[0]._fU0 );
                TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
            }
        }
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
        {
            CLEAR_HELP();
        }
        return 1;;
        if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
        {
            if (sub_27220( l_U651._fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    if (sub_12373( l_U581[0]._fU0, 25 ))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U581[0]._fU0 );
                        TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                    TASK_COMBAT( l_U571._fU0, sub_11230() );
                }
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
                {
                    CLEAR_HELP();
                }
                if (NOT l_U770)
                {
                    sub_31104( "R10_PIMPC", ref l_U777, 6, 1 );
                    l_U770 = 1;
                }
                return 1;
            }
        }
    }
    else
    {
        CLEAR_PRINTS();
        if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
        {
            if (sub_12373( l_U581[0]._fU0, 25 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U581[0]._fU0 );
                TASK_SMART_FLEE_CHAR( l_U581[0]._fU0, sub_11230(), 100.00000000, -1 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
        {
            if (NOT (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U651._fU0 )))
            {
                ADD_STUCK_CAR_CHECK_WITH_WARP( l_U651._fU0, 1.00000000, 2000, 1, 1, 1, 1 );
            }
            GET_CAR_HEALTH( l_U651._fU0, ref l_U651._fU68 );
            if (l_U651._fU68 < 500)
            {
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                    TASK_COMBAT( l_U571._fU0, sub_11230() );
                }
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
                {
                    CLEAR_HELP();
                }
                if (NOT l_U770)
                {
                    sub_31104( "R10_PIMPC", ref l_U777, 6, 1 );
                    l_U770 = 1;
                }
                return 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
                {
                    sub_27528();
                }
                else
                {
                    TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                    TASK_COMBAT( l_U571._fU0, sub_11230() );
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
                    {
                        CLEAR_HELP();
                    }
                    if (NOT l_U770)
                    {
                        sub_31104( "R10_PIMPC", ref l_U777, 6, 1 );
                        l_U770 = 1;
                    }
                }
            }
            if (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 ))
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
                {
                    CLEAR_HELP();
                }
                sub_28288();
                return 1;
            }
        }
    }
    return 0;
}

void sub_37313()
{
    if (NOT g_U64545)
    {
        return sub_37340( 10.00000000 );
        break;
    }
    return sub_38526( 10.00000000 );
}

int sub_37340(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        GET_CAR_HEALTH( l_U651._fU0, ref l_U800 );
        if (DOES_BLIP_EXIST( l_U651._fU8 ))
        {
            SET_ROUTE( l_U651._fU8, 0 );
        }
        PRINTSTRING( "  * STEAL_FROM_MOVING_VEH_EASY\n" );
        if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
        {
            if (NOT l_U560)
            {
                GET_CAR_HEALTH( l_U651._fU0, ref l_U800 );
                if ((NOT (sub_37517( l_U651._fU0 ))) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U571._fU0, sub_11230(), 0 ))))
                {
                    PRINTSTRING( "  ** NOT bDriver_makes_getaway - wander\n" );
                    if (sub_12373( l_U571._fU0, 16 ))
                    {
                        TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, uParam0, 2 );
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                        }
                    }
                }
                else
                {
                    PRINTSTRING( "  ** NOT bDriver_makes_getaway - LEAVE CAR!!!\n" );
                    CLEAR_CHAR_TASKS( l_U571._fU0 );
                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( l_U571._fU0, l_U651._fU0 );
                    REMOVE_STUCK_CAR_CHECK( l_U651._fU0 );
                    l_U560 = 1;
                }
            }
            else if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
            {
                PRINTSTRING( "  ** bDriver_makes_getaway - still in car\n" );
                if (sub_12373( l_U571._fU0, 13 ))
                {
                    CLEAR_CHAR_TASKS( l_U571._fU0 );
                    TASK_LEAVE_CAR( l_U571._fU0, l_U651._fU0 );
                }
            }
            else if ((NOT (IS_CHAR_ARMED( sub_11230(), 6 ))) AND (NOT (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 ))))
            {
                PRINTSTRING( "  ** bDriver_makes_getaway - not armed\n" );
                if (sub_12373( l_U571._fU0, 21 ))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GO_TO_CHAR( l_U571._fU0, sub_11230(), -2, 1.50000000 );
                    if (l_U651._fU64)
                    {
                        SAY_AMBIENT_SPEECH( l_U571._fU0, "CRASH_CAR", 1, 0, 0 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U571._fU0, "CRASH_BIKE", 1, 0, 0 );
                    }
                }
                else
                {
                    MODIFY_CHAR_MOVE_STATE( l_U571._fU0, 2 );
                }
            }
            else
            {
                PRINTSTRING( "  ** bDriver_makes_getaway - armed\n" );
                if (sub_12373( l_U571._fU0, 58 ))
                {
                    CLEAR_CHAR_TASKS( l_U571._fU0 );
                    TASK_FLEE_CHAR_ANY_MEANS( l_U571._fU0, sub_11230(), 60.00000000, -1, 0, 0, 0, 60.00000000 );
                    SAY_AMBIENT_SPEECH( l_U571._fU0, "JACKED_SOFT", 1, 0, 0 );
                }
            };;;
        }
        if (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 ))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
            {
                CLEAR_HELP();
            }
            sub_28288();
            return 1;
        }
        else
        {
            sub_27528();
        }
    }
    return 0;
}

int sub_37517(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_11230() ))
    {
        return 1;
    }
    else
    {
        GET_CAR_CHAR_IS_USING( sub_11230(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CAR( uParam0, uVar3 ))
            {
                GET_CAR_HEALTH( uParam0, ref iVar4 );
                if (iVar4 < 900)
                {
                    return 1;
                }
            }
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
    }
    return 0;
}

int sub_38526(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        if (DOES_BLIP_EXIST( l_U651._fU8 ))
        {
            SET_ROUTE( l_U651._fU8, 0 );
        }
        PRINTSTRING( "  * STEAL_FROM_MOVING_VEH_HARD\n" );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 )))
        {
            if (NOT l_U560)
            {
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    GET_CAR_HEALTH( l_U651._fU0, ref l_U800 );
                    if (((NOT (LOCATE_CHAR_IN_CAR_CAR_3D( sub_11230(), l_U651._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))) AND (NOT (sub_37517( l_U651._fU0 )))) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U571._fU0, sub_11230(), 0 ))))
                    {
                        PRINTSTRING( "  ** NOT bDriver_makes_getaway - wander slow\n" );
                        if (sub_12373( l_U571._fU0, 16 ))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, uParam0, 2 );
                        }
                    }
                    else
                    {
                        PRINTSTRING( "  ** NOT bDriver_makes_getaway - wander fast\n" );
                        CLEAR_CHAR_TASKS( l_U571._fU0 );
                        TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, uParam0 * 2.50000000, 3 );
                        if (DOES_BLIP_EXIST( l_U651._fU8 ))
                        {
                            SET_ROUTE( l_U651._fU8, 0 );
                        }
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U651._fU0 );
                        CLEAR_CAR_LAST_WEAPON_DAMAGE( l_U651._fU0 );
                        REMOVE_STUCK_CAR_CHECK( l_U651._fU0 );
                        ADD_STUCK_CAR_CHECK( l_U651._fU0, 0.50000000, 5000 );
                        l_U560 = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if ((NOT (sub_37517( l_U651._fU0 ))) AND (NOT (sub_27220( l_U651._fU0 ))))
                {
                    GET_CAR_HEALTH( l_U651._fU0, ref l_U651._fU68 );
                    PRINTSTRING( "  ** bDriver_makes_getaway - wander fast: " );
                    PRINTINT( l_U651._fU68 );
                    PRINTNL();
                    if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
                    {
                        if (sub_12373( l_U571._fU0, 16 ))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U571._fU0, l_U651._fU0, uParam0 * 2.50000000, 3 );
                            if (DOES_BLIP_EXIST( l_U651._fU8 ))
                            {
                                SET_ROUTE( l_U651._fU8, 0 );
                            }
                        }
                    }
                }
                else
                {
                    PRINTSTRING( "  ** bDriver_makes_getaway - attack\n" );
                    GET_CAR_SPEED( l_U651._fU0, ref l_U804 );
                    if (l_U804 >= 0.50000000)
                    {
                        PRINTSTRING( "  *** slow down - " );
                        PRINTFLOAT( l_U804 );
                        PRINTNL();
                        REMOVE_STUCK_CAR_CHECK( l_U651._fU0 );
                        if (sub_12373( l_U571._fU0, 48 ))
                        {
                            TASK_CAR_TEMP_ACTION( l_U571._fU0, l_U651._fU0, 24, 500 );
                        }
                    }
                    else if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
                    {
                        PRINTSTRING( "  *** leave car\n" );
                        if (sub_12373( l_U571._fU0, 97 ))
                        {
                            TASK_LEAVE_CAR_DONT_CLOSE_DOOR( l_U571._fU0, l_U651._fU0 );
                            REMOVE_STUCK_CAR_CHECK( l_U651._fU0 );
                            if (NOT l_U567)
                            {
                                l_U567 = 1;
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_ARMED( sub_11230(), 6 )))
                    {
                        PRINTSTRING( "  *** fight\n" );
                        if (sub_12373( l_U571._fU0, 91 ))
                        {
                            TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                            TASK_COMBAT( l_U571._fU0, sub_11230() );
                        }
                    }
                    else
                    {
                        PRINTSTRING( "  *** flee\n" );
                        if (sub_12373( l_U571._fU0, 58 ))
                        {
                            CLEAR_CHAR_TASKS( l_U571._fU0 );
                            TASK_FLEE_CHAR_ANY_MEANS( l_U571._fU0, sub_11230(), 60.00000000, -1, 0, 0, 0, 60.00000000 );
                        }
                    }
                    if (NOT l_U567)
                    {
                        l_U567 = 1;
                    };;;
                }
            }
            sub_27528();
            if ((((CHECK_STUCK_TIMER( l_U651._fU0, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U651._fU0, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U651._fU0, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U651._fU0, 0, 5000 )))
            {
                if (sub_21608( l_U651._fU0 ))
                {
                    sub_22637( 1 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
                else
                {
                    sub_22637( 2 );
                    g_U64577++;
                    g_U64577 = g_U64577 mod 10;
                    sub_24455();
                }
                return 0;
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
        {
            CLEAR_HELP();
        }
        sub_28288();
        return 1;;
    }
    return 0;
}

int sub_40198()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int I;

    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        if ((NOT (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 ))) AND (NOT (sub_27220( l_U651._fU0 ))))
        {
            if (NOT l_U850)
            {
                iVar5 = 0;
                for ( I = 0; I < l_U581; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U581[I]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U581[I]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_11230(), l_U842._fU0, l_U842._fU4, l_U842._fU8, l_U845._fU0, l_U845._fU4, l_U845._fU8, 0 ))
                            {
                                if (sub_12373( l_U581[I]._fU0, 21 ))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_GO_TO_CHAR( l_U581[I]._fU0, sub_11230(), -1, 4.00000000 );
                                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                                    {
                                        if (NOT l_U851)
                                        {
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U581[I]._fU0, "GANG_ASK_PLAYER_LEAVE", "M_M_GBIK_LO_03_FULL_01", 1, 0, 0 );
                                            l_U851 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    MODIFY_CHAR_MOVE_STATE( l_U581[I]._fU0, 2 );
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U581[I]._fU0, l_U581[I]._fU8._fU0, l_U581[I]._fU8._fU4, 1.60000000, 1.60000000, 0 )))
                            {
                                if (sub_12373( l_U581[I]._fU0, 17 ))
                                {
                                    TASK_GO_STRAIGHT_TO_COORD( l_U581[I]._fU0, l_U581[I]._fU8._fU0, l_U581[I]._fU8._fU4, l_U581[I]._fU8._fU8, 2, -1 );
                                    l_U851 = 0;
                                }
                            }
                            else if (sub_12373( l_U581[I]._fU0, 29 ))
                            {
                                if (DOES_CHAR_EXIST( l_U602[I]._fU0 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U602[I]._fU0 )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U638 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U602[I]._fU0 );
                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
                                        CLOSE_SEQUENCE_TASK( l_U638 );
                                        TASK_PERFORM_SEQUENCE( l_U581[I]._fU0, l_U638 );
                                        CLEAR_SEQUENCE_TASK( l_U638 );
                                    }
                                    else
                                    {
                                        PRINTSTRING( "  * extra_ped[" );
                                        PRINTINT( I );
                                        PRINTSTRING( "].ped injured!!!" );
                                        iVar5 = 1;
                                    }
                                }
                            };;;
                            if ((sub_33961( l_U581[I]._fU0, 15.00000000 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U581[I]._fU0, sub_11230() )))
                            {
                                PRINTSTRING( "  * drivers_mate[" );
                                PRINTINT( I );
                                PRINTSTRING( "].ped spotted!!!" );
                                iVar5 = 1;
                            }
                        }
                        else
                        {
                            PRINTSTRING( "  * drivers_mate[" );
                            PRINTINT( I );
                            PRINTSTRING( "].ped injured!!!" );
                            iVar5 = 1;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U602[I]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U602[I]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_11230(), l_U842._fU0, l_U842._fU4, l_U842._fU8, l_U845._fU0, l_U845._fU4, l_U845._fU8, 0 ))
                            {
                                if (sub_12373( l_U602[I]._fU0, 21 ))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_GO_TO_CHAR( l_U602[I]._fU0, sub_11230(), -1, 6.00000000 );
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U602[I]._fU0, l_U602[I]._fU8._fU0, l_U602[I]._fU8._fU4, 1.60000000, 1.60000000, 0 )))
                            {
                                if (sub_12373( l_U602[I]._fU0, 17 ))
                                {
                                    TASK_GO_STRAIGHT_TO_COORD( l_U602[I]._fU0, l_U602[I]._fU8._fU0, l_U602[I]._fU8._fU4, l_U602[I]._fU8._fU8, 2, -1 );
                                }
                            }
                            else if (sub_12373( l_U602[I]._fU0, 29 ))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U581[I]._fU0 )))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U638 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U581[I]._fU0 );
                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
                                    CLOSE_SEQUENCE_TASK( l_U638 );
                                    TASK_PERFORM_SEQUENCE( l_U602[I]._fU0, l_U638 );
                                    CLEAR_SEQUENCE_TASK( l_U638 );
                                }
                                else
                                {
                                    iVar5 = 1;
                                }
                            };;;
                            if ((sub_33961( l_U602[I]._fU0, 15.00000000 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U602[I]._fU0, sub_11230() )))
                            {
                                iVar5 = 1;
                            }
                        }
                        else
                        {
                            iVar5 = 1;
                        }
                    }
                }
                if (((LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_11230(), l_U651._fU0, 2.00000000, 2.00000000, 0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() ))) || (iVar5))
                {
                    l_U850 = 1;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
            {
                if ((HAS_CHAR_SPOTTED_CHAR( l_U581[0]._fU0, sub_11230() )) AND (NOT l_U561[1]))
                {
                    l_U561[0] = 1;
                }
                if (l_U561[0])
                {
                    if (sub_12373( l_U581[0]._fU0, 91 ))
                    {
                        if (NOT l_U769)
                        {
                            sub_31104( "R10_GOONS", ref l_U771, 6, 1 );
                            l_U769 = 1;
                        }
                        TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                        TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                    }
                    for ( l_U801 = 0; l_U801 < l_U602; l_U801++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U602[l_U801]._fU0 )))
                        {
                            if (sub_12373( l_U602[l_U801]._fU0, 91 ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U602[l_U801]._fU0 );
                                TASK_COMBAT( l_U602[l_U801]._fU0, sub_11230() );
                            }
                        }
                    }
                }
                else if (l_U561[1])
                {
                    if (((NOT (IS_CHAR_IN_CAR( l_U581[0]._fU0, l_U651._fU0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U581[0]._fU0 )))) AND (NOT l_U849))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                        {
                            if (sub_12373( l_U571._fU0, 11 ))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U571._fU0, l_U651._fU0, -2, 0 );
                            }
                        }
                        if (sub_12373( l_U581[0]._fU0, 12 ))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U581[0]._fU0, l_U651._fU0, -2 );
                        }
                    }
                    else if ((NOT (IS_CHAR_INJURED( l_U571._fU0 ))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() ))))
                    {
                        if (sub_12373( l_U581[0]._fU0, 29 ))
                        {
                            if (NOT l_U770)
                            {
                                sub_31104( "R10_BOSS", ref l_U777, 6, 1 );
                                l_U770 = 1;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                            {
                                if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U637 );
                                    l_U849 = 1;
                                    if (DOES_BLIP_EXIST( l_U651._fU8 ))
                                    {
                                        SET_ROUTE( l_U651._fU8, 0 );
                                    }
                                }
                            }
                        }
                    }
                    else if (sub_12373( l_U581[0]._fU0, 91 ))
                    {
                        CLEAR_CHAR_TASKS( l_U581[0]._fU0 );
                        TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                        TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                    };;;
                }
            }
            else
            {
                l_U561[0] = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
            {
                if ((HAS_CHAR_SPOTTED_CHAR( l_U581[1]._fU0, sub_11230() )) AND (NOT l_U561[0]))
                {
                    l_U561[1] = 1;
                }
                if (l_U561[1])
                {
                    if (sub_12373( l_U581[1]._fU0, 91 ))
                    {
                        if (NOT l_U769)
                        {
                            sub_31104( "R10_GOONS", ref l_U771, 6, 1 );
                            l_U769 = 1;
                        }
                        TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                        TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                    }
                    for ( l_U801 = 0; l_U801 < l_U602; l_U801++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U602[l_U801]._fU0 )))
                        {
                            if (sub_12373( l_U602[l_U801]._fU0, 91 ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U602[l_U801]._fU0 );
                                TASK_COMBAT( l_U602[l_U801]._fU0, sub_11230() );
                            }
                        }
                    }
                }
                else if (l_U561[0])
                {
                    if (((NOT (IS_CHAR_IN_CAR( l_U581[1]._fU0, l_U651._fU0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U581[1]._fU0 )))) AND (NOT l_U849))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                        {
                            if (sub_12373( l_U571._fU0, 11 ))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U571._fU0, l_U651._fU0, -2, 0 );
                            }
                        }
                        if ((sub_12373( l_U581[1]._fU0, 12 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U581[1]._fU0 ))))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U581[1]._fU0, l_U651._fU0, -2 );
                        }
                    }
                    else if ((NOT (IS_CHAR_INJURED( l_U571._fU0 ))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U651._fU0, sub_11230() ))))
                    {
                        if (sub_12373( l_U581[1]._fU0, 29 ))
                        {
                            if (NOT l_U770)
                            {
                                sub_31104( "R10_BOSS", ref l_U777, 6, 1 );
                                l_U770 = 1;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                            {
                                if (IS_CHAR_IN_CAR( l_U571._fU0, l_U651._fU0 ))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U581[1]._fU0, l_U637 );
                                    l_U849 = 1;
                                    if (DOES_BLIP_EXIST( l_U651._fU8 ))
                                    {
                                        SET_ROUTE( l_U651._fU8, 0 );
                                    }
                                }
                            }
                        }
                    }
                    else if (sub_12373( l_U581[1]._fU0, 91 ))
                    {
                        CLEAR_CHAR_TASKS( l_U581[1]._fU0 );
                        TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                        TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                    };;;
                }
            }
            else
            {
                l_U561[1] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
        {
            if (sub_12373( l_U571._fU0, 14 ))
            {
                GET_CHAR_COORDINATES( sub_11230(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                TASK_LEAVE_CAR_AND_FLEE( l_U571._fU0, l_U651._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
        {
            TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
            TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
        }
        if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
        {
            TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
            TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
        }
        for ( l_U801 = 0; l_U801 < l_U602; l_U801++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U602[l_U801]._fU0 )))
            {
                if (sub_12373( l_U602[l_U801]._fU0, 91 ))
                {
                    TASK_CLEAR_LOOK_AT( l_U602[l_U801]._fU0 );
                    TASK_COMBAT( l_U602[l_U801]._fU0, sub_11230() );
                }
            }
        }
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U806 ))
        {
            CLEAR_HELP();
        }
        return 1;;
    }
    return 0;
}

int sub_43878()
{
    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
            {
                if (NOT l_U769)
                {
                    if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U571._fU0, sub_11230() )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_11230(), l_U852._fU0, l_U852._fU4, l_U852._fU8, l_U855._fU0, l_U855._fU4, l_U855._fU8, 0 )))
                    {
                        GET_GAME_TIMER( ref l_U858 );
                        sub_31104( "R10_PUSHER", ref l_U771, 6, 1 );
                        TASK_GO_TO_CHAR( l_U571._fU0, sub_11230(), -1, 0.50000000 );
                        l_U769 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U803 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_11230(), l_U852._fU0, l_U852._fU4, l_U852._fU8, l_U855._fU0, l_U855._fU4, l_U855._fU8, 0 ))
                    {
                        if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U571._fU0, sub_11230() ))
                        {
                            if (l_U858 < 0)
                            {
                                GET_GAME_TIMER( ref l_U858 );
                                if (sub_12373( l_U571._fU0, 21 ))
                                {
                                    TASK_LOOK_AT_CHAR( l_U571._fU0, sub_11230(), -1, 0 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_GO_TO_CHAR( l_U571._fU0, sub_11230(), -1, 1.00000000 );
                                }
                            }
                            else if ((l_U803 >= (l_U858 + 7500)) || (IS_PLAYER_TARGETTING_CHAR( sub_799(), l_U571._fU0 )))
                            {
                                if (sub_12373( l_U571._fU0, 29 ))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_PERFORM_SEQUENCE( l_U571._fU0, l_U633 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                                {
                                    if (NOT l_U770)
                                    {
                                        sub_31104( "R10_ADDICT", ref l_U777, 6, 1 );
                                        l_U770 = 1;
                                    }
                                    if (sub_12373( l_U581[0]._fU0, 29 ))
                                    {
                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                        TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U633 );
                                    }
                                }
                            }
                            else
                            {
                                MODIFY_CHAR_MOVE_STATE( l_U571._fU0, 2 );
                            }
                        }
                    }
                    else if (sub_12373( l_U571._fU0, 28 ))
                    {
                        TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_GO_TO_COORD_ANY_MEANS( l_U571._fU0, l_U571._fU8._fU0, l_U571._fU8._fU4, l_U571._fU8._fU8, 2, 0 );
                    }
                    l_U858 = -1;;
                    if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                    {
                        if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U581[0]._fU0, sub_11230() )) AND (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_11230(), l_U581[0]._fU0, 6.00000000, 6.00000000, 0 )))
                        {
                            if (sub_12373( l_U571._fU0, 29 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U571._fU0, l_U633 );
                            }
                            if (sub_12373( l_U581[0]._fU0, 29 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U633 );
                            }
                        }
                    }
                    else if (sub_12373( l_U571._fU0, 29 ))
                    {
                        TASK_PERFORM_SEQUENCE( l_U571._fU0, l_U633 );
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U581[0]._fU0 )))
            {
                if (sub_12373( l_U581[0]._fU0, 29 ))
                {
                    TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U633 );
                }
            }
        }
        else if (l_U651._fU64)
        {
            CONTROL_CAR_DOOR( l_U651._fU0, 5, 0, 0.00000000 );
        }
        if ((NOT l_U770) AND (NOT (IS_CHAR_DEAD( l_U581[0]._fU0 ))))
        {
            sub_31104( "R10_ADDICT", ref l_U777, 6, 1 );
            l_U770 = 1;
        }
        return 1;;
    }
    return 0;
}

int sub_45041()
{
    vector vVar2;

    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 )))
        {
            vVar2 = {1230.83500000, 423.51090000, 22.53510000};
            if (NOT l_U859)
            {
                if (NOT (IS_CHAR_INJURED( l_U571._fU0 )))
                {
                    if (NOT (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U651._fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_11230(), l_U860._fU0, l_U860._fU4, l_U860._fU8, l_U863._fU0, l_U863._fU4, l_U863._fU8, 0 ))
                        {
                            ADD_STUCK_CAR_CHECK( l_U651._fU0, 0.50000000, 5000 );
                            TASK_CAR_DRIVE_TO_COORD( l_U571._fU0, l_U651._fU0, vVar2.x, vVar2.y, vVar2.z, 5.00000000, 0, l_U651._fU4, 3, 2.50000000, 50 );
                            if (DOES_BLIP_EXIST( l_U651._fU8 ))
                            {
                                SET_ROUTE( l_U651._fU8, 0 );
                            }
                        }
                    }
                    else if (LOCATE_CAR_3D( l_U651._fU0, vVar2.x, vVar2.y, vVar2.z, 4.00000000, 4.00000000, 4.00000000, 0 ))
                    {
                        if (NOT (CHECK_STUCK_TIMER( l_U651._fU0, 3, 60000 )))
                        {
                            if (sub_12373( l_U571._fU0, 15 ))
                            {
                                TASK_CAR_DRIVE_TO_COORD( l_U571._fU0, l_U651._fU0, vVar2.x, vVar2.y, vVar2.z, 5.00000000, 0, l_U651._fU4, 1, 2.50000000, 50 );
                                if (DOES_BLIP_EXIST( l_U651._fU8 ))
                                {
                                    SET_ROUTE( l_U651._fU8, 0 );
                                }
                            }
                        }
                        else
                        {
                            TASK_CLEAR_LOOK_AT( l_U571._fU0 );
                            TASK_COMBAT( l_U571._fU0, sub_11230() );
                        }
                        l_U859 = 1;
                    }
                }
            }
            else
            {
                return sub_38526( 17.50000000 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U581[0]._fU0 )))
        {
            if (NOT l_U770)
            {
                sub_31104( "R10_CAR", ref l_U777, 6, 1 );
                l_U770 = 1;
            }
            SET_CURRENT_CHAR_WEAPON( l_U581[0]._fU0, 10, 0 );
            TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
            TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
        }
        return 1;;
    }
    return 0;
}

void sub_45745()
{
    if (NOT g_U64545)
    {
        return sub_37340( 5.50000000 );
        break;
    }
    return sub_38526( 5.50000000 );
}

int sub_45868()
{
    int iVar2;
    int iVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( l_U651._fU0 ))
    {
        iVar3 = 500;
        iVar4 = 500;
        if (NOT l_U870)
        {
            if (NOT (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 )))
            {
                sub_45971( "player not in desired.veh\n" );
                if (NOT (IS_THIS_MODEL_A_BIKE( l_U651._fU4 )))
                {
                    if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_11230() )) AND (LOCATE_CHAR_ON_FOOT_CAR_2D( sub_11230(), l_U651._fU0, 2.00000000, 2.00000000, 0 )))
                    {
                        TRIGGER_VEH_ALARM( l_U651._fU0 );
                        l_U872 = 1;
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U581[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_799(), 0 )))) AND (NOT l_U872))
                {
                    if (NOT l_U869)
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U581[0]._fU0, 1717.88600000, 430.41450000, 28.65550000, 2, -2, 1.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U581[1]._fU0, 1718.60900000, 430.01500000, 28.68020000, 2, -2, 1.00000000 );
                        l_U869 = 1;
                    }
                    else if ((sub_12373( l_U581[0]._fU0, 27 )) AND (sub_12373( l_U581[1]._fU0, 27 )))
                    {
                        l_U870 = 1;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref iVar3 );
                    OPEN_SEQUENCE_TASK( ref l_U638 );
                    TASK_PAUSE( 0, iVar3 );
                    TASK_CLEAR_LOOK_AT( 0 );
                    TASK_COMBAT( 0, sub_11230() );
                    CLOSE_SEQUENCE_TASK( l_U638 );
                    TASK_PERFORM_SEQUENCE( l_U581[0]._fU0, l_U638 );
                    CLEAR_SEQUENCE_TASK( l_U638 );
                }
                if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( iVar3, 1500, ref iVar4 );
                    OPEN_SEQUENCE_TASK( ref l_U638 );
                    TASK_PAUSE( 0, iVar4 );
                    TASK_CLEAR_LOOK_AT( 0 );
                    TASK_COMBAT( 0, sub_11230() );
                    CLOSE_SEQUENCE_TASK( l_U638 );
                    TASK_PERFORM_SEQUENCE( l_U581[1]._fU0, l_U638 );
                    CLEAR_SEQUENCE_TASK( l_U638 );
                }
                if (NOT l_U840)
                {
                    STORE_WANTED_LEVEL( sub_799(), ref iVar2 );
                    if (iVar2 <= 2)
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_799(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_799() );
                    }
                    if (l_U651._fU64)
                    {
                        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_STEAL_CAR" );
                    }
                    else
                    {
                        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_STEAL_VEHICLE" );
                    }
                    l_U840 = 1;
                }
                l_U870 = 1;;
                if (NOT (DOES_BLIP_EXIST( l_U651._fU8 )))
                {
                    ADD_BLIP_FOR_CAR( l_U651._fU0, ref l_U651._fU8 );
                    SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
                    SET_ROUTE( l_U651._fU8, 1 );
                }
            }
            else
            {
                sub_45971( "player in desired.veh\n" );
                SET_VEH_ALARM( l_U651._fU0, 0 );
                if (NOT (IS_CHAR_INJURED( l_U581[0]._fU0 )))
                {
                    if ((sub_12373( l_U581[0]._fU0, 91 )) AND (sub_12373( l_U581[0]._fU0, 29 )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U581[0]._fU0 );
                        TASK_COMBAT( l_U581[0]._fU0, sub_11230() );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U581[1]._fU0 )))
                {
                    if ((sub_12373( l_U581[1]._fU0, 91 )) AND (sub_12373( l_U581[1]._fU0, 29 )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U581[1]._fU0 );
                        TASK_COMBAT( l_U581[1]._fU0, sub_11230() );
                    }
                }
                if (NOT l_U840)
                {
                    STORE_WANTED_LEVEL( sub_799(), ref iVar2 );
                    if (iVar2 <= 2)
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_799(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_799() );
                    }
                    PRINT( "R10_WANTED", 7500, 1 );
                    l_U840 = 1;
                }
                else
                {
                    return 1;
                }
            }
        }
        else
        {
            sub_45971( "bStation_cops_finished_path\n" );
            if (IS_CHAR_IN_CAR( sub_11230(), l_U651._fU0 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U651._fU8 )))
                {
                    ADD_BLIP_FOR_CAR( l_U651._fU0, ref l_U651._fU8 );
                    SET_BLIP_AS_FRIENDLY( l_U651._fU8, 1 );
                    SET_ROUTE( l_U651._fU8, 1 );
                    if (l_U651._fU64)
                    {
                        PRINT_NOW( "GETIN_C", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "GETIN_B", 7500, 1 );
                    }
                    l_U871 = 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_45971(unknown uParam0)
{
    PRINTSTRING( uParam0 );
    return;
}

void sub_47597()
{
    float fVar2;

    if (NOT l_U873)
    {
        if (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\RP10_EXOTIC_IMPORTS" ))
        {
            l_U873 = 1;
        }
    }
    else if ((DOES_OBJECT_EXIST( g_U9167 )) AND (IS_VEH_DRIVEABLE( l_U651._fU0 )))
    {
        GET_OBJECT_COORDINATES( g_U9167, ref l_U639._fU28._fU0, ref l_U639._fU28._fU4, ref l_U639._fU28._fU8 );
        if (NOT (DOES_BLIP_EXIST( l_U669 )))
        {
            if (((NOT ((sub_47781( sub_11230(), "BrucieMain" )) || (sub_47781( sub_11230(), "GtaMloRoom08" )))) AND (NOT ((sub_47882( l_U651._fU0, "BrucieMain" )) || (sub_47882( l_U651._fU0, "GtaMloRoom08" ))))) AND (NOT (IS_AREA_OCCUPIED( l_U744._fU0, l_U744._fU4, l_U744._fU8, l_U747._fU0, l_U747._fU4, l_U747._fU8, 0, 1, 0, 0, 0 ))))
            {
                if (l_U639._fU28._fU8 > l_U639._fU0[1]._fU8)
                {
                    SLIDE_OBJECT( g_U9167, l_U639._fU0[1]._fU0, l_U639._fU0[1]._fU4, l_U639._fU0[1]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                    PRINTSTRING( "  ** closing_pos\n" );
                    if (NOT l_U650)
                    {
                        l_U649 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                        l_U650 = 1;
                    }
                }
                else if (l_U650)
                {
                    STOP_SOUND( l_U649 );
                    l_U650 = 0;
                }
                PRINTSTRING( "  * CLOSED_POS 1\n" );
            }
            else if (l_U639._fU28._fU8 < l_U639._fU0[0]._fU8)
            {
                SLIDE_OBJECT( g_U9167, l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, l_U639._fU0[0]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                PRINTSTRING( "  ** opening_pos\n" );
                if (NOT l_U650)
                {
                    l_U649 = GET_SOUND_ID();
                    PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                    l_U650 = 1;
                }
            }
            else if (l_U650)
            {
                STOP_SOUND( l_U649 );
                l_U650 = 0;
            }
            PRINTSTRING( "  * OPEN_POS 0\n" );;
        }
        else if (((LOCATE_CHAR_IN_CAR_3D( sub_11230(), l_U678._fU0, l_U678._fU4, l_U678._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )) || (IS_AREA_OCCUPIED( l_U744._fU0, l_U744._fU4, l_U744._fU8, l_U747._fU0, l_U747._fU4, l_U747._fU8, 0, 1, 0, 0, 0 ))) || ((NOT ((sub_47781( sub_11230(), "BrucieMain" )) || (sub_47781( sub_11230(), "GtaMloRoom08" )))) AND ((sub_47882( l_U651._fU0, "BrucieMain" )) || (sub_47882( l_U651._fU0, "GtaMloRoom08" )))))
        {
            if (l_U639._fU28._fU8 < l_U639._fU0[0]._fU8)
            {
                SLIDE_OBJECT( g_U9167, l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, l_U639._fU0[0]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                PRINTSTRING( "  ** opening_pos\n" );
                if (NOT l_U650)
                {
                    l_U649 = GET_SOUND_ID();
                    PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                    l_U650 = 1;
                }
            }
            else if (l_U650)
            {
                STOP_SOUND( l_U649 );
                l_U650 = 0;
            }
            PRINTSTRING( "  * OPEN_POS 1\n" );
        }
        else
        {
            GET_CAR_COORDINATES( l_U651._fU0, ref l_U651._fU48._fU0, ref l_U651._fU48._fU4, ref l_U651._fU48._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( l_U639._fU28._fU0, l_U639._fU28._fU4, l_U639._fU28._fU8, l_U651._fU48._fU0, l_U651._fU48._fU4, l_U651._fU48._fU8, ref fVar2 );
            if (fVar2 < 25.00000000)
            {
                if (l_U639._fU28._fU8 < l_U639._fU0[0]._fU8)
                {
                    SLIDE_OBJECT( g_U9167, l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, l_U639._fU0[0]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                    PRINTSTRING( "  ** opening_pos\n" );
                    if (NOT l_U650)
                    {
                        l_U649 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                        l_U650 = 1;
                    }
                }
                else if (l_U650)
                {
                    STOP_SOUND( l_U649 );
                    l_U650 = 0;
                }
                PRINTSTRING( "  * OPEN_POS 2\n" );
            }
            else if (fVar2 > 35.00000000)
            {
                if (l_U639._fU28._fU8 > l_U639._fU0[1]._fU8)
                {
                    SLIDE_OBJECT( g_U9167, l_U639._fU0[1]._fU0, l_U639._fU0[1]._fU4, l_U639._fU0[1]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                    PRINTSTRING( "  ** closing_pos\n" );
                    if (NOT l_U650)
                    {
                        l_U649 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                        l_U650 = 1;
                    }
                }
                else if (l_U650)
                {
                    STOP_SOUND( l_U649 );
                    l_U650 = 0;
                }
                PRINTSTRING( "  * CLOSED_POS 2\n" );
            }
            else
            {
                PRINTSTRING( "  * fDist_to_lockup = " );
                PRINTFLOAT( fVar2 );
                PRINTNL();
            }
        }
    }
    return;
}

int sub_47781(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_47882(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_49913()
{
    if (((IS_CHAR_SITTING_IN_CAR( sub_11230(), l_U651._fU0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_799(), 0 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        if (l_U824 < 0)
        {
            GET_CAR_HEALTH( l_U651._fU0, ref l_U651._fU68 );
            if (l_U651._fU68 < 1000)
            {
                GET_GAME_TIMER( ref l_U824 );
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U803 );
            if (l_U803 >= (l_U824 + 7500))
            {
                sub_50086( "R10_H_PNS_", 1, 7500 );
                return 1;
            }
        }
    }
    else
    {
        l_U824 = -1;
    }
    return 0;
}

void sub_50086(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_50106( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_50106(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_50148( I );
            sub_50265( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_50148(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_50200( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_50200(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_50265(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

void sub_50573()
{
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "R10_H_PNS_2" ))
    {
        if (l_U825 < 0)
        {
            GET_GAME_TIMER( ref l_U825 );
        }
        else
        {
            GET_GAME_TIMER( ref l_U803 );
            if (l_U803 >= (l_U825 + 500))
            {
                sub_50673( 16, l_U826 );
                GET_GAME_TIMER( ref l_U825 );
                l_U826 = NOT l_U826;
            }
        }
    }
    else
    {
        sub_50673( 16, 0 );
    }
    return;
}

void sub_50673(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_50697();
    return;
}

void sub_50697()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_50725( 13 );
        if ((sub_50770( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_50871( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_51055( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_50725( 11 );
        if ((sub_50770( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_50871( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_51055( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_51249( I );
        if ((sub_50770( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_50871( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_51557( I );
        }
        else
        {
            sub_51055( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_51786();
    return;
}

int sub_50725(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_50770(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_50871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_51055(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_51249(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_51291( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_50725( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_51291(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_51557(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_51786()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_50725( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_51831( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_50725( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_51831( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_51249( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_51249( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_51831( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_51831( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_11230() )))
        {
            GET_CHAR_COORDINATES( sub_11230(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_52322( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_51831( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_51831(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_52322(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_52875(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_50148( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

int sub_54009(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_11230() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_11230(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_11230() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_11230(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_11230()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_11230() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_11230() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_799() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_799() )))
    {
        return 0;
    }
    return 1;
}

void sub_54830()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;

    switch (l_U554)
    {
        case 0:
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_799(), 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_11230(), 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        WAIT( 500 );
        SET_USE_HIGHDOF( 1 );
        sub_54946( ref l_U763 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_OBJECT_EXIST( g_U9167 ))
        {
            SET_OBJECT_COORDINATES( g_U9167, l_U639._fU0[0]._fU0, l_U639._fU0[0]._fU4, l_U639._fU0[0]._fU8 );
        }
        CREATE_CAM( 14, ref l_U764[0] );
        SET_CAM_POS( l_U764[0], 877.96940000, -123.44500000, 6.97805900 );
        SET_CAM_ROT( l_U764[0], -7.06259200, -0.00000000, 66.05276000 );
        SET_CAM_FOV( l_U764[0], 45.00000000 );
        CREATE_CAM( 14, ref l_U764[1] );
        SET_CAM_POS( l_U764[1], 878.15730000, -122.97230000, 6.92962000 );
        SET_CAM_ROT( l_U764[1], -8.71403700, 0.00000000, 69.28537000 );
        SET_CAM_FOV( l_U764[1], 45.00000000 );
        CREATE_CAM( 3, ref l_U764[2] );
        CREATE_CAM( 14, ref l_U768 );
        SET_CAM_POS( l_U768, l_U687[l_U737]._fU0, l_U687[l_U737]._fU4, l_U687[l_U737]._fU8 );
        SET_CAM_ROT( l_U768, l_U703[l_U737]._fU0, l_U703[l_U737]._fU4, l_U703[l_U737]._fU8 );
        SET_CAM_FOV( l_U768, l_U719[l_U737] );
        SET_CAM_NEAR_DOF( l_U768, l_U725[l_U737] );
        SET_CAM_FAR_DOF( l_U768, l_U731[l_U737] );
        SET_CAM_INTERP_STYLE_CORE( l_U764[2], l_U764[0], l_U764[1], 2500, 0 );
        SET_CAM_ACTIVE( l_U764[2], 1 );
        SET_CAM_PROPAGATE( l_U764[2], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( l_U651._fU0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "GtaMloRoom08" );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_11230(), "GtaMloRoom08" );
            OPEN_SEQUENCE_TASK( ref l_U638 );
            TASK_PAUSE( 0, 500 );
            TASK_LEAVE_CAR( 0, l_U651._fU0 );
            CLOSE_SEQUENCE_TASK( l_U638 );
            TASK_PERFORM_SEQUENCE( sub_11230(), l_U638 );
            CLEAR_SEQUENCE_TASK( l_U638 );
        }
        SETTIMERB( 0 );
        l_U554 = 1;
        break;
        case 1:
        if ((NOT (IS_CHAR_IN_ANY_CAR( sub_11230() ))) AND (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U764[2] ))))
        {
            if (NOT (IS_CAR_DEAD( l_U651._fU0 )))
            {
                GET_GROUND_Z_FOR_3D_COORD( l_U681._fU0, l_U681._fU4, l_U681._fU8, ref uVar7 );
                SET_CAR_HEADING( l_U651._fU0, 270.00000000 );
                iVar8 = 0;
            }
            SET_CHAR_COORDINATES( sub_11230(), 865.56380000, -121.67060000, 5.00010000 );
            SET_CHAR_HEADING( sub_11230(), 96.98970000 );
            if (NOT (IS_CHAR_DEAD( sub_11230() )))
            {
                TASK_GO_STRAIGHT_TO_COORD( sub_11230(), 862.28890000, -121.82350000, 5.95960000, 2, -1 );
            }
            SET_CAM_ACTIVE( l_U768, 1 );
            SET_CAM_PROPAGATE( l_U768, 1 );
            GET_GAME_VIEWPORT_ID( ref uVar9 );
            CLEAR_ROOM_FOR_VIEWPORT( uVar9 );
            CLEAR_AREA( l_U681._fU0, l_U681._fU4, l_U681._fU8, 15.00000000, 0 );
            l_U554 = 2;
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( g_U9167 ))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_11230(), l_U681._fU0, l_U681._fU4, l_U681._fU8, 8.00000000, 3.80000000, 3.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( g_U9167, ref l_U639._fU28._fU0, ref l_U639._fU28._fU4, ref l_U639._fU28._fU8 );
                if (l_U639._fU28._fU8 > l_U639._fU0[1]._fU8)
                {
                    SLIDE_OBJECT( g_U9167, l_U639._fU0[1]._fU0, l_U639._fU0[1]._fU4, l_U639._fU0[1]._fU8, 0.00000000, 0.00000000, 0.10000000, 0 );
                    if (NOT l_U650)
                    {
                        l_U649 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_OBJECT( l_U649, "RP10_EXOTIC_IMPORTS_GARAGE_DOOR", g_U9167 );
                        l_U650 = 1;
                    }
                }
                else if (l_U848 < 0)
                {
                    STOP_SOUND( l_U649 );
                    GET_GAME_TIMER( ref l_U848 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U803 );
                    if (l_U803 >= (l_U848 + 500))
                    {
                        l_U554 = 3;
                    }
                }
            }
        }
        break;
        case 3:
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_56448( ref l_U763 );
        SET_USE_HIGHDOF( 0 );
        if (DOES_VEHICLE_EXIST( l_U651._fU0 ))
        {
            if (NOT (IS_CAR_DEAD( l_U651._fU0 )))
            {
                GET_CAR_HEALTH( l_U651._fU0, ref l_U651._fU68 );
            }
            DELETE_CAR( ref l_U651._fU0 );
        }
        sub_5033();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_11230(), 0 );
        SET_PLAYER_CONTROL( sub_799(), 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_CHAR_COORDINATES( sub_11230(), 861.84340000, -121.71600000, 4.94930000 );
        SET_CHAR_HEADING( sub_11230(), 90.00000000 );
        GET_GAME_VIEWPORT_ID( ref uVar2 );
        CLEAR_ROOM_FOR_VIEWPORT( uVar2 );
        CLEAR_ROOM_FOR_CHAR( sub_11230() );
        MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        sub_56768();
        sub_56863();
        break;
    }
    return;
}

void sub_54946(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_56448(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_56768()
{
    int iVar2;
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar3, 3);
    StrCopy( ref cVar3[0], sub_22652( 0 ), 16 );
    iVar2 = 8;
    StrCopy( ref cVar3[1], "R10_PRAISE", 16 );
    StrCopy( ref cVar3[2], "R10_LATER", 16 );
    sub_23853( iVar2, ref cVar3, "RP10AUD", 10000, 1 );
    return;
}

void sub_56863()
{
    g_U64548[l_U570] = 2;
    if (l_U651._fU64)
    {
        sub_907( 1000 - sub_56904() );
    }
    else
    {
        sub_907( 800 - sub_56904() );
    }
    CLEAR_WANTED_LEVEL( sub_799() );
    g_U64575 = 0;
    l_U558 = 0;
    sub_57026();
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    if (NOT (GET_STAT_FRONTEND_VISIBILITY( 469 )))
    {
        SET_STAT_FRONTEND_VISIBILITY( 469, 1 );
    }
    INCREMENT_INT_STAT( 469, 1 );
    return;
}

void sub_56904()
{
    float fVar2;

    fVar2 = (TO_FLOAT( l_U651._fU68 )) / 1000.00000000;
    fVar2 = 1.00000000 - fVar2;
    fVar2 *= -500.00000000;
    return ROUND( fVar2 );
}

void sub_57026()
{
    sub_57035();
    return;
}

void sub_57035()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 22;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_57062( iVar3, iVar4, iVar5 );
    sub_2228( iVar2 );
    return;
}

void sub_57062(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 22;
    sub_57092( iVar5, uParam0, uParam1, uParam2, "Girl_26" );
    return;
}

void sub_57092(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_57188( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_57188( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_57188( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_57188( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_57188( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_57188( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_57765( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_58162( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_58162( 0, 4 );
            }
        }
    }
    if (NOT (sub_58251( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_799(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_799() );
    }
    sub_2627();
    bVar27 = true;
    uVar28 = sub_57765( iParam0, iVar7 );
    uVar29 = sub_3286( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_66532( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_66962();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_67047( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_67104( iParam0 );
                sub_67239( 0 );
                sub_3706( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_67347();
        }
    }
    if (bParam2)
    {
        sub_66962();
        sub_67435();
        sub_67239( 0 );
    }
    if (bParam3)
    {
        sub_66962();
        sub_67475();
        sub_67239( 0 );
        sub_3706( uVar29, 0 );
    }
    sub_67526();
    return;
}

void sub_57188(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_57765(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1043( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_58162(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_58251(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_58459( uParam1 );
        break;
        case 1:
        bVar8 = sub_59442( uParam1 );
        break;
        case 2:
        bVar8 = sub_59668( uParam1 );
        break;
        case 3:
        bVar8 = sub_59818( uParam1 );
        break;
        case 4:
        bVar8 = sub_60096( uParam1 );
        break;
        case 5:
        bVar8 = sub_60399( uParam1 );
        break;
        case 6:
        bVar8 = sub_60598( uParam1 );
        break;
        case 7:
        bVar8 = sub_60824( uParam1 );
        break;
        case 8:
        bVar8 = sub_61059( uParam1 );
        break;
        case 9:
        bVar8 = sub_61434( uParam1 );
        break;
        case 10:
        bVar8 = sub_61681( uParam1 );
        break;
        case 11:
        bVar8 = sub_61820( uParam1 );
        break;
        case 12:
        bVar8 = sub_62119( uParam1 );
        break;
        case 13:
        bVar8 = sub_62347( uParam1 );
        break;
        case 14:
        bVar8 = sub_62634( uParam1 );
        break;
        case 15:
        bVar8 = sub_62916( uParam1 );
        break;
        case 16:
        bVar8 = sub_63198( uParam1 );
        break;
        case 17:
        bVar8 = sub_63399( uParam1 );
        break;
        case 18:
        bVar8 = sub_63472( uParam1 );
        break;
        case 19:
        bVar8 = sub_63686( uParam1 );
        break;
        case 20:
        bVar8 = sub_63939( uParam1 );
        break;
        case 21:
        bVar8 = sub_64186( uParam1 );
        break;
        case 22:
        bVar8 = sub_64387( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_2007( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_57765( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_64710( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_58459(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_896( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_896( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_896( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_896( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_896( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_896( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_896( iVar3, 0, sub_59055(), sub_59191(), 0, 0 );
        break;
        default:
        sub_59350( "Friend 1", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Friend 1", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59055()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_2007( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_59191()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_2007( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_59350(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_59442(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 2", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 2", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59668(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_59350( "Girl 3", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Girl 3", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59818(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_896( iVar3, 0, sub_59055(), sub_59191(), 0, 0 );
        break;
        default:
        sub_59350( "Friend 4", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Friend 4", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60096(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 5", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 5", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60399(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 7", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 7", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60598(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 7b", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 7b", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60824(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_896( iVar3, 0, sub_59055(), sub_59191(), 0, 0 );
        break;
        default:
        sub_59350( "Friend 8", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Friend 8", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61059(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_896( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_896( iVar3, 0, sub_59055(), sub_59191(), 0, 0 );
        break;
        default:
        sub_59350( "Friend 9", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Friend 9", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61434(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_896( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_896( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_59350( "Contact 10", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_59350( "Contact 10", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61681(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_59350( "Girl 11", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Girl 11", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61820(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_59350( "Contact 12", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 12", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62119(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 13", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 13", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62347(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_896( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_896( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_896( iVar3, 0, sub_59055(), sub_59191(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_59350( "Friend 15", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Friend 15", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62634(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 16", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 16", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62916(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_896( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_59350( "Contact 18", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 18", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63198(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 19", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 19", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63399(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_59350( "Girl 20", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63472(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_59350( "Contact 21", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 21", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63686(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_896( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_59350( "Contact 22", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 22", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63939(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_896( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_896( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_896( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_59350( "Contact 24", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 24", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64186(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_896( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_896( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_59350( "Contact 25", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_59350( "Contact 25", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64387(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_896( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_59350( "Girl 26", 1 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_59350( "Girl 26", 0 );
        sub_896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_64710(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_64758( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_65489( iParam1 );
    }
    return;
}

int sub_64758(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_64898( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_64898(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_65080( 0 );
    return;
}

void sub_65080(boolean bParam0)
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
        sub_65335();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_65335()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_65489(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_65822( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_65822( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_65822( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_65822( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_65822( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_65822( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_65822( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_65822( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_65822( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_65822( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_65822( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_65822( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_65822( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_65822( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_65822( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_65822( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_65822( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_65822( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_65822( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_65822(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_66532(unknown uParam0, unknown uParam1)
{
    sub_66551( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_66551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_66962()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_67047(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_67104(unknown uParam0)
{
    sub_67113();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_67113()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_67239(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_67347()
{
    sub_67356();
    return;
}

void sub_67356()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_67435()
{
    sub_67356();
    return;
}

void sub_67475()
{
    sub_67356();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_67526()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_67548();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_67548()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}