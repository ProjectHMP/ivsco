void main()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    unknown uVar8;
    float fVar9;
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

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U118 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U362 = 6;
    l_U508 = 1574850459;
    l_U509 = -753587725;
    l_U510 = -1962071130;
    l_U511 = -1932515764;
    l_U512 = 0;
    l_U513 = 15;
    l_U555 = 0;
    l_U557 = 0;
    l_U558 = -1;
    l_U565 = nil;
    l_U576 = 1;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U605 = 0;
    l_U606 = 0;
    l_U607 = 0;
    l_U608 = 0;
    l_U610 = 0;
    l_U611 = 0;
    l_U629 = 0;
    l_U638 = 1;
    l_U639 = 1;
    l_U640 = 1;
    l_U641 = 1;
    l_U642 = {-1471.01800000, 490.53580000, 18.56540000};
    l_U645 = 90.55110000;
    l_U646 = {-250.84360000, 1454.18600000, 19.44580000};
    l_U649 = {1222.20000000, 83.90000000, 36.53960000};
    l_U652 = 270.58830000;
    l_U653 = {1231.50800000, 77.18400000, 36.92400000};
    l_U656 = {1267.30000000, 1483.78000000, 15.77000000};
    l_U666 = -344943009;
    l_U667 = 569305213;
    l_U676 = {1356.68000000, 998.14000000, 13.57000000};
    l_U680 = -713569950;
    l_U690 = -713569950;
    l_U696 = 0.00000000;
    l_U699 = 0;
    l_U700 = 0;
    l_U701 = 0;
    l_U702 = 0;
    fVar9 = 180.00000000;
    l_U609 = g_U15862[15]._fU196._fU0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_913();
        sub_3087();
    }
    GET_MAX_WANTED_LEVEL( ref l_U634 );
    sub_3548( 500 );
    sub_3655( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_3792();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            sub_10619();
        }
        switch (l_U506)
        {
            case 0:
            LOAD_ADDITIONAL_TEXT( "ASH2", 0 );
            sub_10927( "E1A2AUD" );
            LOAD_ADDITIONAL_TEXT( "E1A2AUD", 6 );
            if (IS_BIT_SET( g_U10959._fU0, 7 ))
            {
                sub_11080( "AB03_AA" );
                g_U39149[15] = 0;
            }
            sub_11753( 0, sub_3270(), "JOHNNY", 0 );
            REQUEST_ANIMS( "MISSASHLEY_2" );
            g_U10460 = 0;
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
            ADD_SCENARIO_BLOCKING_AREA( 1214.54000000, 61.38000000, 30.00000000, 1228.44000000, 79.00000000, 42.58000000 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            sub_12005();
            SUPPRESS_CAR_MODEL( l_U510 );
            SUPPRESS_CAR_MODEL( l_U511 );
            while (NOT sub_12164())
            {
                WAIT( 0 );
            }
            if (g_U39149[15] == 0)
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
                if (IS_VEH_DRIVEABLE( uVar2 ))
                {
                    GET_CAR_MODEL( uVar2, ref iVar3 );
                    if (IS_THIS_MODEL_A_BIKE( iVar3 ))
                    {
                        SET_CAR_AS_MISSION_CAR( uVar2 );
                        sub_16403( ref uVar2 );
                        SET_CAR_COORDINATES( uVar2, -1473.32300000, 490.41280000, 18.42030000 );
                        SET_CAR_HEADING( uVar2, 0.59180000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    }
                    else if ((IS_THIS_MODEL_A_CAR( iVar3 )) AND (iVar3 != l_U511))
                    {
                        SET_CAR_AS_MISSION_CAR( uVar2 );
                        sub_16403( ref uVar2 );
                        SET_CAR_COORDINATES( uVar2, -1474.70000000, 493.41280000, 19.42030000 );
                        SET_CAR_HEADING( uVar2, 0.59180000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    }
                    else
                    {
                        uVar2 = nil;
                    }
                }
                else
                {
                    uVar2 = nil;
                }
                CLEAR_AREA( -1473.31000000, 490.06000000, 19.13000000, 40.00000000, 1 );
                CLEAR_AREA( -131.40000000, -253.40000000, 12.00000000, 40.00000000, 1 );
                sub_16771();
                l_U633 = sub_17280( l_U646, 3 );
                if (DOES_VEHICLE_EXIST( uVar2 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
                }
                SET_PLAYER_CONTROL( sub_5259(), 1 );
                DO_SCREEN_FADE_IN( 500 );
                SWITCH_ROADS_OFF( -267.89240000, 1425.88500000, 9.28890000, -253.78750000, 1484.14100000, 29.43600000 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 75, 75, 75, 0 ))
                {
                    PRINT( "A2_DR_MALC", 7500, 0 );
                    l_U506 = 2;
                }
                else
                {
                    g_U15862[15]._fU196._fU0 = 1;
                    sub_17561( 3600 );
                    l_U506 = 1;
                }
            }
            if (g_U39149[15] == 1)
            {
                CLEAR_AREA( l_U646._fU0, l_U646._fU4, l_U646._fU8, 90.00000000, 1 );
                CLEAR_AREA( l_U646._fU0, l_U646._fU4 - 90.00000000, l_U646._fU8, 90.00000000, 1 );
                CLEAR_AREA( l_U646._fU0, l_U646._fU4 - 180.00000000, l_U646._fU8, 90.00000000, 1 );
                CLEAR_AREA( l_U646._fU0, l_U646._fU4 - 270.00000000, l_U646._fU8, 90.00000000, 1 );
                LOAD_SCENE( l_U646._fU0, l_U646._fU4, l_U646._fU8 );
                SET_CHAR_COORDINATES( sub_3270(), l_U646._fU0, l_U646._fU4, l_U646._fU8 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U566, l_U567, 0 );
                FREEZE_CHAR_POSITION( l_U566, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
                WARP_CHAR_INTO_CAR( sub_3270(), l_U567 );
                CLOSE_ALL_CAR_DOORS( l_U567 );
                SET_CAR_ON_GROUND_PROPERLY( l_U567 );
                LOCK_CAR_DOORS( l_U567, 1 );
                if (IS_VEH_DRIVEABLE( l_U568 ))
                {
                    LOCK_CAR_DOORS( l_U568, 1 );
                }
                DO_SCREEN_FADE_IN( 500 );
                SET_PLAYER_CONTROL( sub_5259(), 1 );
                l_U506 = 4;
            }
            if (g_U39149[15] == 2)
            {
                CLEAR_AREA( -131.40000000, -253.40000000, 12.00000000, 40.00000000, 1 );
                CLEAR_AREA( l_U649._fU0, l_U649._fU4, l_U649._fU8, 150.00000000, 1 );
                if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (IS_VEH_DRIVEABLE( l_U567 )))
                {
                    FREEZE_CHAR_POSITION( l_U566, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U566, l_U567, 0 );
                    FREEZE_CHAR_POSITION( l_U566, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
                    WARP_CHAR_INTO_CAR( sub_3270(), l_U567 );
                    CLOSE_ALL_CAR_DOORS( l_U567 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U567 );
                    LOCK_CAR_DOORS( l_U567, 1 );
                    if (IS_VEH_DRIVEABLE( l_U568 ))
                    {
                        LOCK_CAR_DOORS( l_U568, 1 );
                    }
                }
                SET_CHAR_COORDINATES( sub_3270(), l_U649._fU0, l_U649._fU4, l_U649._fU8 );
                LOAD_SCENE( l_U649._fU0, l_U649._fU4, l_U649._fU8 );
                l_U506 = 6;
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3270(), 0 );
            SET_CAM_BEHIND_PED( sub_3270() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            break;
            case 1:
            if (((sub_18479( 15, "E1A2_CALL1", "E1A2AUD", 500 )) || (IS_KEYBOARD_KEY_PRESSED( 36 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 75, 75, 75, 0 )))
            {
                if (sub_21526() == 3)
                {
                    sub_21729( 15 );
                }
                g_U15862[15]._fU196._fU0 = l_U609;
                PRINT( "A2_DR_MALC", 7500, 0 );
                l_U506 = 2;
            }
            break;
            case 2:
            sub_21968();
            break;
            case 3:
            sub_25344();
            if (IS_VEH_DRIVEABLE( l_U568 ))
            {
                LOCK_CAR_DOORS( l_U568, 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U567 ))
            {
                sub_17576( ref l_U621, 0 );
                sub_26001( 3 );
                LOCK_CAR_DOORS( l_U567, 1 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U567, 0 );
                if (l_U602)
                {
                    l_U506 = 7;
                }
                else
                {
                    PRINT_NOW( "A2_DRV_DEN", 7500, 0 );
                    sub_17576( ref l_U621, 10000 );
                    l_U555 = 0;
                    l_U506 = 4;
                }
            }
            else
            {
                PRINT( "A2_MALC_CD", 7500, 0 );
                l_U506 = 16;
            }
            break;
            case 4:
            sub_26160();
            sub_26349();
            break;
            case 5:
            sub_26160();
            sub_31754();
            break;
            case 6:
            sub_33973();
            STOP_PED_SPEAKING( l_U559, 1 );
            l_U593 = 0;
            break;
            case 7:
            sub_26160();
            sub_35362();
            break;
            case 8:
            sub_39563();
            sub_39614();
            l_U593 = 0;
            break;
            case 9:
            sub_26160();
            sub_44741();
            break;
            case 10:
            sub_54685();
            if (DOES_OBJECT_EXIST( l_U575 ))
            {
                DELETE_OBJECT( ref l_U575 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U566, 0 );
            }
            break;
            case 11:
            sub_3122( ref l_U520, 1 );
            sub_3122( ref l_U514, 1 );
            SET_PLAYER_CONTROL( sub_5259(), 0 );
            sub_3548( 1000 );
            sub_61634();
            l_U506 = 12;
            break;
            case 12:
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
            REQUEST_CAR_RECORDING( 2295 );
            while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 2295 )))
            {
                WAIT( 0 );
            }
            CLEAR_AREA_OF_CARS( l_U656._fU0, l_U656._fU4, l_U656._fU8, 100.00000000 );
            if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (NOT (IS_CAR_DEAD( l_U573 ))))
            {
                START_PLAYBACK_RECORDED_CAR( l_U573, 2295 );
                SET_PLAYBACK_SPEED( l_U573, 1.20000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U573, 2000.00000000 );
            }
            else if (DOES_VEHICLE_EXIST( l_U573 ))
            {
                DELETE_CAR( ref l_U573 );
            }
            if (DOES_CHAR_EXIST( l_U566 ))
            {
                DELETE_CHAR( ref l_U566 );
            }
            REMOVE_CAR_RECORDING( 2295 );
            WAIT( 1600 );
            sub_25829( 500 );
            bVar7 = true;
            while (bVar7)
            {
                if ((IS_CHAR_INJURED( l_U566 )) || (IS_CAR_DEAD( l_U573 )))
                {
                    bVar7 = false;
                }
                else if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U573 )))
                {
                    bVar7 = false;
                }
                WAIT( 0 );
            }
            if (DOES_VEHICLE_EXIST( l_U573 ))
            {
                DELETE_CAR( ref l_U573 );
            }
            if (DOES_CHAR_EXIST( l_U566 ))
            {
                DELETE_CHAR( ref l_U566 );
            }
            l_U506 = 13;
            break;
            case 13:
            sub_39563();
            sub_62562( 3, "E1A2_FAIL3", "E1A2AUD", 0 );
            sub_3792();
            break;
            case 14:
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U561 );
            REMOVE_BLIP( l_U572 );
            REMOVE_BLIP( l_U571 );
            sub_39563();
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 70.00000000, 70.00000000, 70.00000000, 0 )))
                {
                    l_U605 = 1;
                }
            }
            if ((IS_CHAR_INJURED( l_U559 )) || (l_U605))
            {
                if (IS_CHAR_INJURED( l_U566 ))
                {
                    sub_63321( 15, l_U566, 11 );
                }
                else if ((NOT (IS_VEH_DRIVEABLE( l_U573 ))) || (l_U606))
                {
                    sub_39563();
                    PRINTSTRING( "DO_FAIL_CUTSCENE_MALIVE_RDEAD_CDEAD\n" );
                    sub_63512();
                }
                else
                {
                    sub_39563();
                    PRINTSTRING( "DO_FAIL_CUTSCENE_MALIVE_RDEAD_CALIVE\n" );
                    sub_65445();
                }
                if (l_U605)
                {
                    sub_62562( 3, "E1A2_FAIL2", "E1A2AUD", 0 );
                }
                else
                {
                    sub_62562( 3, "E1A2_FAIL", "E1A2AUD", 0 );
                }
            }
            else if (IS_CHAR_INJURED( l_U566 ))
            {
                sub_63321( 15, l_U566, 11 );
                if ((NOT (IS_VEH_DRIVEABLE( l_U573 ))) || (l_U606))
                {
                    PRINTSTRING( "DO_FAIL_CUTSCENE_MDEAD_RALIVE_CDEAD\n" );
                    sub_67175();
                }
                else
                {
                    PRINTSTRING( "DO_FAIL_CUTSCENE_MDEAD_RALIVE_CALIVE\n" );
                    sub_68165();
                }
            }
            else if ((NOT (IS_VEH_DRIVEABLE( l_U573 ))) || (l_U606))
            {
                PRINTSTRING( "DO_FAIL_CUTSCENE_MALIVE_RALIVE_CDEAD\n" );
                sub_69281();
            }
            sub_62562( 3, "E1A2_FAIL2", "E1A2AUD", 0 );;
            sub_10619();
            break;
            case 15:
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U561 );
            REMOVE_BLIP( l_U572 );
            REMOVE_BLIP( l_U571 );
            sub_39563();
            if (IS_CHAR_INJURED( l_U566 ))
            {
                sub_63321( 15, l_U566, 11 );
            }
            else if ((l_U606) || (NOT (IS_VEH_DRIVEABLE( l_U567 ))))
            {
                sub_39563();
                sub_70919();
            }
            sub_62562( 3, "E1A2_FAIL2", "E1A2AUD", 0 );
            sub_10619();
            break;
            case 16:
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U561 );
            REMOVE_BLIP( l_U572 );
            REMOVE_BLIP( l_U571 );
            sub_39563();
            sub_62562( 3, "E1A2_FAIL2", "E1A2AUD", 0 );
            sub_10619();
            break;
        }
    }
    return;
}

void sub_913()
{
    sub_922();
    return;
}

void sub_922()
{
    int iVar2;

    iVar2 = 3;
    sub_936( iVar2 );
    sub_2077( iVar2 );
    return;
}

void sub_936(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_980();
        sub_1188();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1313();
            sub_1365();
            g_U11095 = 1;
        }
    }
    sub_1458();
    sub_1597();
    uVar5 = sub_1710( uParam0 );
    sub_1986( uVar5, 0 );
    return;
}

void sub_980()
{
    if (g_U10993)
    {
        return;
    }
    sub_1007( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1128();
    }
    return;
}

void sub_1007(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1128()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1188()
{
    sub_1197();
    return;
}

void sub_1197()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1313()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1365()
{
    sub_1374();
    return;
}

void sub_1374()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1458()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1597()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1619();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1619()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1710(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1941( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1941(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1986(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2077(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2086();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2846())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2912();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2086()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2124( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2124( 1, g_U572[I] )) != 0)
            {
                sub_2410( I );
            }
        }
    }
    if (NOT sub_2576())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2410(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2495( g_U572 - 1 );
    return;
}

void sub_2495(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2576()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2124( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2846()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2912()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3087()
{
    int iVar2;

    g_U15862[15]._fU196._fU0 = l_U609;
    sub_3122( ref l_U520, 0 );
    sub_3122( ref l_U514, 0 );
    g_U39235 = 0;
    g_U10460 = 1;
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3270(), 1 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -267.89240000, 1425.88500000, 9.28890000, -253.78750000, 1484.14100000, 29.43600000 );
    if (DOES_CAM_EXIST( l_U574 ))
    {
        if (IS_CAM_ACTIVE( l_U574 ))
        {
            BEGIN_CAM_COMMANDS( ref iVar2 );
            if (iVar2 == 1)
            {
                SET_CAM_PROPAGATE( l_U574, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            }
            END_CAM_COMMANDS( ref iVar2 );
        }
        DESTROY_CAM( l_U574 );
    }
    DONT_SUPPRESS_CAR_MODEL( l_U510 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( l_U634 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3122(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_3270()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3548(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_3655(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_3679( 0, 0 );
    }
    else
    {
        sub_3679( 1, 1 );
    }
    return;
}

void sub_3679(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_3792()
{
    g_U24 = 82;
    sub_3807();
    sub_3087();
    return;
}

void sub_3807()
{
    sub_3816();
    return;
}

void sub_3816()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_3834();
    sub_3893( iVar2, iVar3, iVar4 );
    return;
}

void sub_3834()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_3893(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_3925( iVar5, uParam0, uParam1, uParam2, "Contact_4" );
    return;
}

void sub_3925(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_4021( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_4021( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_4021( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_4021( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_4021( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_4021( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_4598( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_5046( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5259() );
    sub_2086();
    bVar28 = true;
    uVar29 = sub_4598( uParam0, iVar7 );
    uVar30 = sub_1710( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_9526( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_9960();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_10045( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_10124( uParam0 );
                sub_10163( 0 );
                sub_1986( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_10352();
        }
    }
    if (bParam2)
    {
        sub_9960();
        sub_10451();
        sub_10163( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_9960();
        sub_10503();
        sub_10163( 0 );
        sub_1986( uVar30, 0 );
    }
    sub_1597();
    return;
}

void sub_4021(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4598(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1941( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_5046(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5142( uParam1 );
        break;
        case 1:
        bVar8 = sub_5863( uParam1 );
        break;
        case 2:
        bVar8 = sub_6596( uParam1 );
        break;
        case 3:
        bVar8 = sub_6833( uParam1 );
        break;
        case 4:
        bVar8 = sub_6999( uParam1 );
        break;
        case 5:
        bVar8 = sub_7198( uParam1 );
        break;
        case 6:
        bVar8 = sub_7393( uParam1 );
        break;
        case 7:
        bVar8 = sub_7598( uParam1 );
        break;
        case 8:
        bVar8 = sub_7803( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6211( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4598( uParam0, uParam1 );
    if (bParam3)
    {
        sub_8089( uVar9, uParam0 );
    }
    return 1;
}

int sub_5142(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5239( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5239( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5239( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5239( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_5770( "Contact 1", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 1", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5239(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5250( uParam1 );
    sub_5450( uParam0, 0, uParam2 );
    sub_5450( uParam0, 1, uParam3 );
    sub_5450( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_3834();
    return;
}

void sub_5250(unknown uParam0)
{
    ADD_SCORE( sub_5259(), uParam0 );
    sub_5301( uParam0 );
    return;
}

void sub_5259()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5301(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1941( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5450(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_5770(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5863(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5239( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5239( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5239( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5239( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_5239( iVar3, 0, sub_6089(), sub_6355(), 0, 0 );
        break;
        default:
        sub_5770( "Contact 2", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 2", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6089()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6211( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6211(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6355()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6211( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_6596(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5239( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5239( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5239( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_5770( "Contact 3", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 3", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6833(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5770( "Friend 4", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Friend 4", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5239( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5239( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_5770( "Contact 5", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 5", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7198(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5239( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5239( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5770( "Contact 6", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 6", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7393(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_5239( iVar3, 0, sub_6089(), sub_6355(), 0, 0 );
        break;
        default:
        sub_5770( "Friend 7", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Friend 7", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7598(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_5239( iVar3, 0, sub_6089(), sub_6355(), 0, 0 );
        break;
        default:
        sub_5770( "Friend 8", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Friend 8", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7803(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5239( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5770( "Contact 9", 1 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5770( "Contact 9", 0 );
        sub_5239( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_8089(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_8150( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_8868( iParam1 );
    }
    return;
}

int sub_8150(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_8290( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_8290(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_8460( 0 );
    return;
}

void sub_8460(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_8705();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_8705()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_8868(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_9099( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_9099( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_9099( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_9099( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_9099( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_9099( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_9099(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_9526(unknown uParam0, unknown uParam1)
{
    sub_9545( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_9545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9960()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_10045(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10124(unknown uParam0)
{
    sub_1458();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_10163(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_10214( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_10214(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10352()
{
    sub_10361();
    return;
}

void sub_10361()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_10451()
{
    sub_10361();
    return;
}

void sub_10503()
{
    sub_10361();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_10619()
{
    sub_10628();
    sub_3087();
    return;
}

void sub_10628()
{
    sub_10637();
    return;
}

void sub_10637()
{
    int iVar2;

    iVar2 = 3;
    sub_10651( iVar2 );
    sub_2077( iVar2 );
    return;
}

void sub_10651(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5259(), 150 );
    CLEAR_HELP();
    sub_936( uParam0 );
    return;
}

void sub_10927(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_10944();
    return;
}

void sub_10944()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_11080(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    while (NOT (sub_11091( 1, 1 )))
    {
        WAIT( 0 );
    }
    ENABLE_SCENE_STREAMING( 0 );
    bVar3 = false;
    GET_CURRENT_WEATHER( ref uVar4 );
    if (COMPARE_STRING( uParam0, "AB03_AA" ))
    {
        bVar3 = true;
        sub_3548( 500 );
        FORCE_WEATHER_NOW( 0 );
    }
    LOAD_ADDITIONAL_TEXT( "E1A2AUD", 6 );
    START_CUTSCENE_NOW( uParam0 );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    if (bVar3)
    {
        FORCE_WEATHER_NOW( uVar4 );
        RELEASE_WEATHER();
    }
    ENABLE_SCENE_STREAMING( 1 );
    CLEAR_NAMED_CUTSCENE( uParam0 );
    return;
}

int sub_11091(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3270(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_11215( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_11215(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3270(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3270(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3270()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5259() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5259() )))
    {
        return 0;
    }
    return 1;
}

void sub_11753(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_11833( "\n PED NUMBER ", uParam0 );
    sub_11873( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_11833(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11873(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12005()
{
    # -sub_C1FFC0-0xc214c8( 3, ref l_U562 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U563 );
    SET_DECISION_MAKER_ATTRIBUTE_RETREATING_BEHAVIOUR( l_U563, 0 );
    N_1061756705( l_U562, 15 );
    N_1061756705( l_U562, 31 );
    N_1061756705( l_U562, 79 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U562, 79, 202, 100.00000000, 100.00000000, 100.00000000, 100.00000000, 1, 0 );
    return;
}

int sub_12164()
{
    unknown uVar2;

    REQUEST_MODEL( l_U510 );
    REQUEST_ANIMS( "MISSASHLEY_2" );
    sub_12208( 15 );
    if (((NOT (HAS_MODEL_LOADED( l_U510 ))) || (NOT (HAVE_ANIMS_LOADED( "MISSASHLEY_2" )))) || (NOT (sub_12590( 15 ))))
    {
        return 0;
    }
    CLEAR_AREA( l_U646._fU0, l_U646._fU4, l_U646._fU8, 40.00000000, 1 );
    while (NOT (sub_12691( ref l_U568, -250.00000000, 1454.34300000, 19.44700000, 1.63780000 )))
    {
        WAIT( 0 );
        CLEAR_AREA( l_U646._fU0, l_U646._fU4, l_U646._fU8, 40.00000000, 1 );
    }
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U568, 1 );
    FREEZE_CAR_POSITION( l_U568, 1 );
    LOCK_CAR_DOORS( l_U568, 3 );
    if (NOT (IS_CHAR_DEAD( l_U566 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar2 );
        TASK_PLAY_ANIM( 0, "lean", "missashley_2", 0.50000000, 1, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( uVar2 );
        TASK_PERFORM_SEQUENCE( l_U566, uVar2 );
        CLEAR_SEQUENCE_TASK( uVar2 );
        ADD_BLIP_FOR_CHAR( l_U566, ref l_U572 );
        SET_BLIP_AS_FRIENDLY( l_U572, 1 );
        CHANGE_BLIP_DISPLAY( l_U572, 1 );
    }
    sub_14748( 15, ref l_U566, -250.29000000, 1454.30300000, 19.44580000, 97.84220000 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U566, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
    GIVE_WEAPON_TO_CHAR( l_U566, 7, 30000, 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U566, 1 );
    FREEZE_CHAR_POSITION( l_U566, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U566, 1 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U566, 1 );
    sub_11753( 1, l_U566, "MALC", 0 );
    l_U567 = sub_16113( -266.61790000, 1450.89500000, 19.26840000, 180.04150000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U567, 0 );
    GET_CAR_HEALTH( l_U567, ref l_U635 );
    LOCK_CAR_DOORS( l_U567, 3 );
    sub_16247( 15 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U510 );
    return 1;
}

void sub_12208(unknown uParam0)
{
    REQUEST_MODEL( sub_12219( uParam0 ) );
    return;
}

int sub_12219(unknown uParam0)
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
    sub_1941( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_12590(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_12219( uParam0 ) );
}

void sub_12691(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_12708( uParam0, 15, uParam1, uParam4 );
}

void sub_12708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_12719( uParam1 );
    return sub_12952( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_12719(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

int sub_12952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_13086( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_13086(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_14748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_14759( uParam0 ), sub_12219( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_14866( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_14972( uParam0, (uParam1^) );
    return;
}

int sub_14759(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_14866(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_14972(unknown uParam0, unknown uParam1)
{
    sub_14984( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_14984(unknown uParam0, int iParam1)
{
    sub_14995( uParam0 );
    if (iParam1 == 22)
    {
        sub_15095( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_15754( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_14995(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_15095(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_3270()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_15754(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_15095( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_15095( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_16113(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    CREATE_CAR( l_U510, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    SET_CAR_COLOUR_COMBINATION( Result, 1 );
    SET_VEH_HAS_STRONG_AXLES( Result, 1 );
    HAS_CAR_BEEN_RESPRAYED( Result );
    return Result;
}

void sub_16247(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_12219( uParam0 ) );
    return;
}

void sub_16403(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if ((GET_ENGINE_HEALTH( (uParam0^) )) < 200.00000000)
        {
            SET_ENGINE_HEALTH( (uParam0^), 200.00000000 );
        }
        GET_CAR_HEALTH( (uParam0^), ref iVar3 );
        if (iVar3 < 200)
        {
            SET_CAR_HEALTH( (uParam0^), 200 );
        }
        if ((GET_PETROL_TANK_HEALTH( (uParam0^) )) < 200.00000000)
        {
            SET_PETROL_TANK_HEALTH( (uParam0^), 200.00000000 );
        }
        CLOSE_ALL_CAR_DOORS( (uParam0^) );
    }
    return;
}

void sub_16771()
{
    unknown uVar2;

    sub_16806( l_U642._fU0, l_U642._fU4, l_U642._fU8, l_U645 );
    WAIT( 0 );
    SET_CAM_BEHIND_PED( sub_3270() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

void sub_16806(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_PLAYER_PLAYING( sub_5259() ))
    {
        if (NOT (sub_16838( uParam0, uParam1, uParam2 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3270(), uParam0, uParam1, uParam2 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3270(), uParam0, uParam1, uParam2 );
            }
        }
        SET_CHAR_HEADING( sub_3270(), uParam3 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

int sub_16838(unknown uParam0, unknown uParam1, unknown uParam2)
{
    LOAD_SCENE( uParam0, uParam1, uParam2 );
    if (sub_16896( uParam0, uParam1, uParam2, g_U11005[0]._fU20, "E1_Lost_grndsave" ))
    {
        return 1;
    }
    return 0;
}

int sub_16896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;

    if (NOT (sub_16911( uParam0, uParam3 )))
    {
        return 0;
    }
    uVar9 = GET_HASH_KEY( uParam6 );
    GET_INTERIOR_AT_COORDS( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar10 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, uVar9 );
    if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_3270(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_3270(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    SET_ROOM_FOR_CHAR_BY_KEY( sub_3270(), uVar9 );
    return 1;
}

int sub_16911(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_17280(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    CHANGE_BLIP_COLOUR( Result, uParam3 );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_17561(unknown uParam0)
{
    sub_17576( ref l_U618, uParam0 );
    return;
}

void sub_17576(int iParam0, int iParam1)
{
    int iVar4;

    GET_GAME_TIMER( ref iVar4 );
    if (iParam1 == 0)
    {
        iParam0->_fU0 = 0;
    }
    else
    {
        iParam0->_fU0 = iVar4 + iParam1;
    }
    iParam0->_fU4 = 0;
    return;
}

int sub_18479(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (sub_18492( ref l_U618 ))
    {
        if (sub_18571( uParam0, uParam1, uParam2 ))
        {
            sub_17576( ref l_U618, 0 );
        }
        else
        {
            sub_17576( ref l_U618, 500 );
        }
    }
    if (sub_21480( ref l_U618 ))
    {
        switch (sub_21526())
        {
            case 1:
            case 2:
            sub_17576( ref l_U618, 500 );
            break;
            case 6:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_18492(int iParam0)
{
    int iVar3;

    if ((NOT iParam0->_fU4) AND (iParam0->_fU0 > 0))
    {
        GET_GAME_TIMER( ref iVar3 );
        if (iVar3 >= iParam0->_fU0)
        {
            iParam0->_fU4 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_18571(unknown uParam0, unknown uParam1, unknown uParam2)
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

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_18629( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_18629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_18699( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_18699( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5259() )))
    {
        sub_18699( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3270() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() ))))
    {
        sub_18699( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_18699( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_19156()) AND (NOT bParam11))
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
                sub_18699( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_19156()) AND (NOT bParam11))
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
    sub_20528( uParam0, ref g_U94._fU176 );
    sub_20924( ref g_U94._fU160 );
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
        sub_11873( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_18699(unknown uParam0)
{
    return;
}

int sub_19156()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_19213())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_19213()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5259() )))
    {
        sub_18699( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_18699( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_18699( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_18699( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5259() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3270() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3270(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_18699( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3270() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_18699( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_18699( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5259() )))
    {
        sub_18699( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_20528(unknown uParam0, unknown uParam1)
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

void sub_20924(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_21480(int iParam0)
{
    if ((NOT iParam0->_fU4) AND (iParam0->_fU0 == 0))
    {
        return 1;
    }
    return 0;
}

int sub_21526()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

void sub_21729(int iParam0)
{
    if (g_U94._fU60 == iParam0)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U94._fU0 != 1000) AND (g_U94._fU0 != 1001))
            {
                g_U94._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_21968()
{
    if (IS_CHAR_INJURED( l_U566 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U566 )))
        {
            SET_CHAR_HEALTH( l_U566, 0 );
        }
        sub_22038( "A2_MALC_DD" );
    }
    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U566, sub_3270(), 0 ))
    {
        CLEAR_CHAR_TASKS( l_U566 );
        sub_22038( "A2_MALCFLEE" );
    }
    else if (NOT (IS_VEH_DRIVEABLE( l_U567 )))
    {
        sub_22038( "A2_MALC_CD" );
    }
    else if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U567, sub_3270() ))
    {
        sub_22038( "A2_MALC_CI" );
    }
    else if (NOT (IS_VEH_DRIVEABLE( l_U568 )))
    {
        sub_22038( "A2_MALC_BD" );
    }
    else if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U568, sub_3270() ))
    {
        sub_22038( "A2_MALC_BI" );
    }
    else if (IS_EXPLOSION_IN_SPHERE( -1, l_U646._fU0, l_U646._fU4, l_U646._fU8, 8.00000000 ))
    {
        sub_22038( "A2_MALC_BI" );
    }
    else if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 8.00000000, 8.00000000, 8.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_3270() )))) AND (NOT (IS_CHAR_IN_ANY_BOAT( sub_3270() )))) AND (NOT (IS_CHAR_IN_ANY_PLANE( sub_3270() ))))
    {
        if (sub_11091( 1, 1 ))
        {
            SET_PLAYER_CONTROL( sub_5259(), 0 );
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U572 );
            l_U506 = 3;
        }
    }
    else if (sub_24627( "5552222" ))
    {
        if (NOT l_U602)
        {
            if (sub_24765( "E1A2_CALL2", "E1A2AUD", 1 ))
            {
                sub_24980( "ROMAN" );
                l_U602 = 1;
            }
        }
    }
    else if (((sub_25021( 1 )) AND (l_U602)) AND (NOT l_U592))
    {
        PRINT( "A2_ROM_TXI3", 7500, 0 );
        l_U592 = 1;
    };;;;;;;;;;
    return;
}

void sub_22038(unknown uParam0)
{
    boolean bVar3;

    if (NOT (IS_CHAR_DEAD( l_U566 )))
    {
        FREEZE_CHAR_POSITION( l_U566, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U567 )))
    {
        LOCK_CAR_DOORS( l_U567, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U568 )))
    {
        LOCK_CAR_DOORS( l_U568, 1 );
    }
    REMOVE_BLIP( l_U572 );
    REMOVE_BLIP( l_U633 );
    sub_22165( 0 );
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 0 );
        if (IS_CHAR_INJURED( l_U566 ))
        {
            bVar3 = false;
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U566, 25, 25, 25, 0 ))
        {
            bVar3 = NOT (sub_22395( "E1A2_MALC", ref l_U520, 7, 1 ));
        }
        else
        {
            bVar3 = false;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U566 )))
    {
        if (IS_VEH_DRIVEABLE( l_U568 ))
        {
            TASK_CAR_MISSION_PED_TARGET( l_U566, l_U568, sub_3270(), 8, 50.00000000, 2, 200, -1 );
        }
        else if (IS_VEH_DRIVEABLE( l_U567 ))
        {
            TASK_CAR_MISSION_PED_TARGET( l_U566, l_U567, sub_3270(), 8, 50.00000000, 2, 200, -1 );
        }
        else
        {
            TASK_SMART_FLEE_CHAR( l_U566, sub_3270(), 200.00000000, -1 );
        }
    }
    SETTIMERA( 0 );
    while (sub_23524( l_U520 ))
    {
        WAIT( 0 );
        SETTIMERA( 0 );
        if (IS_CHAR_INJURED( l_U566 ))
        {
            sub_3122( ref l_U520, 0 );
        }
    }
    while (TIMERA() < 500)
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    if (IS_CHAR_INJURED( l_U566 ))
    {
        PRINT_NOW( "A2_MALC_DD", 7500, 0 );
    }
    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U566, sub_3270(), 0 ))
    {
        PRINT_NOW( "A2_MALCFLEE", 7500, 0 );
    }
    else if (NOT (IS_VEH_DRIVEABLE( l_U567 )))
    {
        PRINT_NOW( "A2_MALC_CD", 7500, 0 );
    }
    else if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U567, sub_3270() ))
    {
        PRINT_NOW( "A2_MALC_CI", 7500, 0 );
    }
    else if (NOT (IS_VEH_DRIVEABLE( l_U568 )))
    {
        PRINT_NOW( "A2_MALC_BD", 7500, 0 );
    }
    else if (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U568, sub_3270() )))
    {
        PRINT_NOW( "A2_MALCFLEE", 7500, 0 );
    }
    else
    {
        PRINT_NOW( uParam0, 7500, 0 );
    };;;;;;
    if (NOT (IS_CHAR_INJURED( l_U566 )))
    {
        SET_CHAR_KEEP_TASK( l_U566, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U566 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U567 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U568 );
    l_U506 = 16;
    return;
}

void sub_22165(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 4) AND (g_U8944 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_22395(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22416( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_22416(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22470( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22470(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22492( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_23168( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_22492(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18699( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_18699( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_18699( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_23168(int iParam0, int iParam1)
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

int sub_23524(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_18699( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18699( "\n speech is not playing" );
    }
    return 0;
}

int sub_24627(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U94._fU0 == 1005) AND (g_U94._fU508 >= 4))
    {
        if (g_U94._fU60 == 21)
        {
            return COMPARE_STRING( ref g_U94._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_24765(unknown uParam0, unknown uParam1, boolean bParam2)
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
            return sub_18629( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_20528( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_24980(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

int sub_25021(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3270(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_18699( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_25344()
{
    unknown uVar2;

    sub_3548( 500 );
    ALTER_WANTED_LEVEL( sub_5259(), 0 );
    CLEAR_AREA( l_U646._fU0, l_U646._fU4, l_U646._fU8, 25.00000000, 1 );
    if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3270(), ref uVar2 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            SET_CAR_COORDINATES( uVar2, -256.81010000, 1446.49700000, 19.89000000 );
            SET_CAR_HEADING( uVar2, 0.19580000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            GET_CAR_MODEL( uVar2, ref l_U512 );
            SET_CAR_AS_MISSION_CAR( uVar2 );
        }
    }
    if (g_U39149[15] == 0)
    {
        sub_11080( "AB02_BA" );
    }
    g_U39149[15] = 1;
    if (IS_VEH_DRIVEABLE( l_U568 ))
    {
        FREEZE_CAR_POSITION( l_U568, 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (IS_VEH_DRIVEABLE( l_U567 )))
    {
        FREEZE_CHAR_POSITION( l_U566, 0 );
        FREEZE_CAR_POSITION( l_U567, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U566, l_U567, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
        WARP_CHAR_INTO_CAR( sub_3270(), l_U567 );
        CLOSE_ALL_CAR_DOORS( l_U567 );
        SET_CAR_ON_GROUND_PROPERLY( l_U567 );
    }
    SET_PLAYER_CONTROL( sub_5259(), 1 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
    }
    sub_25829( 500 );
    return;
}

void sub_25829(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_IN()) AND (NOT IS_SCREEN_FADING_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_26001(unknown uParam0)
{
    l_U362 = uParam0;
    return;
}

void sub_26160()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_VEHICLE_EXIST( l_U568 ))
    {
        uVar2 = {sub_26192( l_U568, 1 )};
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 120, 120, 120, 0 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U568 );
        }
    }
    return;
}

void sub_26192(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_26349()
{
    int iVar2;

    if (IS_CHAR_INJURED( l_U566 ))
    {
        REMOVE_BLIP( l_U633 );
        REMOVE_BLIP( l_U572 );
        REMOVE_BLIP( l_U571 );
        sub_26415( ref l_U514 );
        PRINT_NOW( "A2_MALC_DD", 7500, 0 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
        l_U506 = 16;
    }
    else if ((sub_24627( "5552222" )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U649._fU0, l_U649._fU4, l_U649._fU8, 300, 300, 300, 0 ))))
    {
        if ((sub_23524( l_U514 )) AND (NOT (sub_27002( l_U514 ))))
        {
            sub_26415( ref l_U514 );
        }
        if (sub_23524( l_U520 ))
        {
            sub_3122( ref l_U520, 0 );
        }
        if (NOT l_U602)
        {
            if (sub_24765( "E1A2_CALL2", "E1A2AUD", 1 ))
            {
                sub_24980( "ROMAN" );
                l_U506 = 7;
                SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
                l_U602 = 1;
            }
        }
        sub_17576( ref l_U621, 7000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
    }
    else
    {
        sub_27202();
        if (((NOT (IS_VEH_DRIVEABLE( l_U567 ))) AND (NOT (sub_23524( l_U514 )))) AND (NOT (sub_23524( l_U520 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U566 )))
            {
                PRINT( "A2_MALC_CD", 7500, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
            }
            l_U506 = 15;
        }
        SWITCH_ROADS_OFF( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
    }
    switch (sub_29545( ref l_U567, ref l_U571, "", "" ))
    {
        case 4: break;
        case 5:
        REMOVE_BLIP( l_U633 );
        break;
        case 1: l_U606 = 1;
        case 0:
        if (sub_23524( l_U514 ))
        {
            sub_26415( ref l_U514 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            PRINT( "A2_MALC_CD", 7500, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
        }
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
        l_U506 = 15;
        break;
        case 3:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            WARP_CHAR_INTO_CAR( sub_3270(), l_U567 );
            if (NOT (IS_CAR_DEAD( l_U567 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U566, l_U567 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U566, l_U567, 0 );
                }
            }
        }
        if (IS_THIS_PRINT_BEING_DISPLAYED( "A2_DRV_DEN", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
        {
            CLEAR_THIS_PRINT( "A2_DRV_DEN" );
        }
        if (NOT l_U593)
        {
            if (((((NOT (IS_CAR_ON_FIRE( l_U567 ))) || (NOT (IS_CAR_IN_WATER( l_U567 )))) || ((GET_ENGINE_HEALTH( l_U567 )) >= 0.00000000)) || ((GET_PETROL_TANK_HEALTH( l_U567 )) >= 0.00000000)) || (iVar2 >= 300))
            {
                if (NOT sub_28693())
                {
                    PRINT_NOW( "A2_GTINCAR", 7500, 0 );
                    l_U593 = 1;
                }
            }
            else
            {
                PRINT( "A2_MALC_CD", 7500, 0 );
                SWITCH_ROADS_BACK_TO_ORIGINAL( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
                l_U506 = 15;
            }
        }
        REMOVE_BLIP( l_U572 );
        if (NOT (IS_CAR_DEAD( l_U567 )))
        {
            if (IS_CHAR_IN_CAR( l_U566, l_U567 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U571 )))
                {
                    l_U633 = sub_17280( l_U649, 5 );
                }
            }
            else if (NOT (IS_GROUP_MEMBER( l_U566, sub_30512() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U566, 12, 12, 12, 0 ))
                {
                    SET_GROUP_MEMBER( sub_30512(), l_U566 );
                }
            }
        }
        break;
        case 2:
        if (IS_CHAR_IN_CAR( l_U566, l_U567 ))
        {
            REMOVE_BLIP( l_U572 );
            if (IS_GROUP_MEMBER( l_U566, sub_30512() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U566 );
                REMOVE_BLIP( l_U572 );
            }
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
            {
                TASK_LEAVE_CAR( l_U566, l_U567 );
            }
            if (IS_THIS_PRINT_BEING_DISPLAYED( "A2_GTINCAR", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_THIS_PRINT( "A2_GTINCAR" );
            }
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U649._fU0, l_U649._fU4, l_U649._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 0 )) AND (sub_11091( 1, 1 ))) AND (NOT sub_27576()))
            {
                sub_3122( ref l_U514, 1 );
                REMOVE_BLIP( l_U633 );
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() ))
                {
                    SET_PLAYER_CONTROL( sub_5259(), 0 );
                }
                if (sub_27576())
                {
                    if (NOT l_U597)
                    {
                        PRINT_NOW( "A2_WNTD_LS", 7500, 0 );
                        l_U597 = 1;
                    }
                }
                else if (NOT l_U598)
                {
                    PRINT_NOW( "A2_ROMDEN2", 7500, 0 );
                    l_U598 = 1;
                }
                l_U506 = 5;
            }
            else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                sub_31058( l_U649._fU0, l_U649._fU4, l_U649._fU8, 269.98750000 );
            }
            if (sub_27576())
            {
                if (DOES_BLIP_EXIST( l_U633 ))
                {
                    REMOVE_BLIP( l_U633 );
                }
                else if (((((NOT l_U597) AND (l_U581)) AND ((sub_31213( ref l_U621 )) > 0)) AND (NOT sub_28693())) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    PRINT_NOW( "A2_WNTD_LS", 7500, 0 );
                    l_U597 = 1;
                }
            }
            else
            {
                LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U649._fU0, l_U649._fU4, l_U649._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 1 );
                if (NOT (DOES_BLIP_EXIST( l_U633 )))
                {
                    l_U633 = sub_17280( l_U649, 5 );
                }
                if (NOT l_U594)
                {
                    PRINT_NOW( "A2_DRV_DEN", 7500, 0 );
                    l_U594 = 1;
                }
            }
        }
        else
        {
            REMOVE_BLIP( l_U633 );
            if (NOT (DOES_BLIP_EXIST( l_U572 )))
            {
                ADD_BLIP_FOR_CHAR( l_U566, ref l_U572 );
                SET_BLIP_AS_FRIENDLY( l_U572, 1 );
            }
            if (NOT l_U595)
            {
                PRINT_NOW( "A2_PU_MALC", 7500, 0 );
                l_U595 = 1;
            }
            if (NOT (IS_GROUP_MEMBER( l_U566, sub_30512() )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U566, 12, 12, 12, 0 )) AND (IS_VEH_DRIVEABLE( l_U567 )))
                {
                    GET_CAR_HEALTH( l_U567, ref iVar2 );
                    if (((((NOT (IS_CAR_ON_FIRE( l_U567 ))) AND (NOT (IS_CAR_IN_WATER( l_U567 )))) AND ((GET_ENGINE_HEALTH( l_U567 )) >= 0.00000000)) AND ((GET_PETROL_TANK_HEALTH( l_U567 )) >= 0.00000000)) AND (iVar2 >= 300))
                    {
                        SET_GROUP_MEMBER( sub_30512(), l_U566 );
                    }
                }
            }
        }
        break;
    }
    return;
}

int sub_26415(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_18699( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_18699( "\n CONVERSATION PAUSED AT LINE " );
            sub_26571( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_18699( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_18699( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_18699( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_26571(unknown uParam0)
{
    return;
}

void sub_27002(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_27202()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (sub_21480( ref l_U621 ))
    {
        sub_17576( ref l_U621, 2500 );
    }
    else if (sub_18492( ref l_U621 ))
    {
        if ((sub_27267( sub_3270(), l_U566, 1 )) AND (NOT sub_27507()))
        {
            if (sub_27002( l_U514 ))
            {
                if ((NOT (sub_23524( l_U520 ))) AND (NOT sub_27576()))
                {
                    if (NOT (sub_27631( ref l_U526, ref l_U514, 6, 1 )))
                    {
                        sub_17576( ref l_U621, 100 );
                    }
                }
                else
                {
                    sub_17576( ref l_U621, 100 );
                }
            }
            else if (NOT l_U555)
            {
                if (DOES_VEHICLE_EXIST( l_U568 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U568 )))
                    {
                        PRINTSTRING( "Malc's bike is dead\n" );
                        l_U555 = 1;
                    }
                }
                PRINTSTRING( "gb_ASH2_conversation1 = " );
                PRINTINT( g_U39237 );
                PRINTNL();
                switch (g_U39237)
                {
                    case 0:
                    StrCopy( ref l_U526[0], "E1A2_B1AV1", 16 );
                    StrCopy( ref l_U526[1], "E1A2_B1BV1", 16 );
                    StrCopy( ref l_U526[2], "E1A2_B1CV1", 16 );
                    StrCopy( ref l_U526[3], "E1A2_B1DV1", 16 );
                    StrCopy( ref l_U526[4], "", 16 );
                    StrCopy( ref l_U526[5], "", 16 );
                    StrCopy( ref l_U526[6], "", 16 );
                    break;
                    case 1:
                    StrCopy( ref l_U526[0], "E1A2_B1AV2", 16 );
                    StrCopy( ref l_U526[1], "E1A2_B1BV2", 16 );
                    StrCopy( ref l_U526[2], "E1A2_B1CV2", 16 );
                    StrCopy( ref l_U526[3], "E1A2_B1DV2", 16 );
                    StrCopy( ref l_U526[4], "", 16 );
                    StrCopy( ref l_U526[5], "", 16 );
                    StrCopy( ref l_U526[6], "", 16 );
                    break;
                    default:
                    l_U555 = 1;
                    break;
                }
                if (l_U555)
                {
                    SAY_AMBIENT_SPEECH( l_U566, "LISTEN_TO_RADIO", 0, 0, 0 );
                    PRINTSTRING( "Malc says LISTEN_TO_RADIO\n" );
                }
                else if (sub_28284( ref l_U526, ref l_U514, 6, 1 ))
                {
                    g_U39237++;
                }
                else
                {
                    sub_17576( ref l_U621, 100 );
                }
            }
        }
        else
        {
            sub_17576( ref l_U621, 100 );
        }
    }
    else if (NOT (sub_27267( sub_3270(), l_U566, 1 )))
    {
        if (sub_23524( l_U514 ))
        {
            sub_26415( ref l_U514 );
            if (NOT l_U585)
            {
                if (IS_VEH_DRIVEABLE( l_U567 ))
                {
                    if (NOT (IS_CAR_ON_FIRE( l_U567 )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U566, l_U567 ))
                        {
                            l_U585 = sub_22395( "E1A2_GETOUT", ref l_U520, 7, 1 );
                        }
                    }
                }
            }
        }
        sub_17576( ref l_U621, 0 );
    }
    else if (((sub_23524( l_U514 )) AND ((sub_21526() == 0) || (sub_21526() == 3))) AND (NOT (sub_27002( l_U514 ))))
    {
        sub_26415( ref l_U514 );
        sub_17576( ref l_U621, 0 );
    }
    l_U585 = 0;
    if (sub_27576())
    {
        if (NOT l_U581)
        {
            if (NOT (sub_27002( l_U514 )))
            {
                sub_26415( ref l_U514 );
            }
            if ((NOT sub_28693()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                l_U581 = sub_22395( "E1A2_LOSE", ref l_U520, 7, 1 );
            }
        }
        sub_17576( ref l_U621, 0 );
    }
    else
    {
        l_U581 = 0;
    }
    if ((sub_27507()) AND (sub_23524( l_U514 )))
    {
        sub_26415( ref l_U514 );
        sub_17576( ref l_U621, 2500 );
    }
    if (((DOES_VEHICLE_EXIST( l_U567 )) AND (NOT (IS_VEH_DRIVEABLE( l_U567 )))) || ((DOES_VEHICLE_EXIST( l_U568 )) AND (NOT (IS_VEH_DRIVEABLE( l_U568 )))))
    {
        if (((NOT l_U582) AND (NOT (sub_23524( l_U520 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U566 ))))
        {
            if (sub_23524( l_U514 ))
            {
                sub_26415( ref l_U514 );
                sub_17576( ref l_U621, 999999 );
                l_U555 = 1;
            }
            bVar2 = true;
            if ((NOT (IS_VEH_DRIVEABLE( l_U567 ))) AND (IS_CHAR_IN_ANY_CAR( l_U566 )))
            {
                bVar2 = false;
            }
            if (bVar2)
            {
                PRINTSTRING( "bAllowSpeak = TRUE\n" );
            }
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U566, sub_3270(), 15, 15, 12, 0 )) AND (bVar2))
            {
                if (sub_22395( "E1A2_MALC", ref l_U520, 7, 1 ))
                {
                    PRINTSTRING( "PLAY_SINGLE_SPEECH returned TRUE\n" );
                    l_U582 = 1;
                    if ((DOES_VEHICLE_EXIST( l_U567 )) AND (NOT (IS_VEH_DRIVEABLE( l_U567 ))))
                    {
                        uVar3 = {sub_26192( l_U567, 1 )};
                    }
                    else if ((DOES_VEHICLE_EXIST( l_U568 )) AND (NOT (IS_VEH_DRIVEABLE( l_U568 ))))
                    {
                        uVar3 = {sub_26192( l_U568, 1 )};
                    }
                    TASK_LOOK_AT_COORD( l_U566, uVar3._fU0, uVar3._fU4, uVar3._fU8, 10000, 0 );
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U566, uVar3._fU0, uVar3._fU4, uVar3._fU8, 30, 30, 30, 0 ))
                    {
                        TASK_TURN_CHAR_TO_FACE_COORD( l_U566, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                    }
                }
                else
                {
                    PRINTSTRING( "PLAY_SINGLE_SPEECH returned FALSE\n" );
                }
            }
        }
    };;;
    return;
}

void sub_27267(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_27297( ref uVar5, uParam2 );
}

int sub_27297(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_27322( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_27322( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_27322(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_27507()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_27576()
{
    return (WANTED_STARS_ARE_FLASHING()) || (IS_WANTED_LEVEL_GREATER( sub_5259(), 0 ));
}

void sub_27631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_27652( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_27652(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    if (iParam2->_fU12)
    {
        return sub_22470( uParam0, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_28284(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_28305( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_28305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_22470( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_28693()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_29545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if ((((CHECK_STUCK_TIMER( (uParam0^), 3, 60000 )) || (CHECK_STUCK_TIMER( (uParam0^), 2, 30000 ))) || (CHECK_STUCK_TIMER( (uParam0^), 1, 40000 ))) || (CHECK_STUCK_TIMER( (uParam0^), 0, 5000 )))
        {
            return 1;
        }
        if (IS_CHAR_IN_CAR( sub_3270(), (uParam0^) ))
        {
            if (NOT (l_U362 == 2))
            {
                if (DOES_BLIP_EXIST( (uParam1^) ))
                {
                    REMOVE_BLIP( (uParam1^) );
                }
                if (NOT (COMPARE_STRING( uParam2, "" )))
                {
                    PRINT_NOW( uParam2, 5000, 0 );
                }
                l_U362 = 2;
                return 4;
            }
            return 2;
        }
        else if (NOT (l_U362 == 3))
        {
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                ADD_BLIP_FOR_CAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            }
            if (NOT (COMPARE_STRING( uParam3, "" )))
            {
                PRINT_NOW( uParam3, 5000, 0 );
            }
            l_U362 = 3;
            return 5;
        }
        return 3;;
    }
    return 0;
}

void sub_30512()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_31058(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_PLAYER_PLAYING( sub_5259() ))
    {
        if (NOT (sub_16838( uParam0, uParam1, uParam2 )))
        {
            SET_CHAR_COORDINATES( sub_3270(), uParam0, uParam1, uParam2 );
        }
        SET_CHAR_HEADING( sub_3270(), uParam3 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

int sub_31213(int iParam0)
{
    int Result;

    GET_GAME_TIMER( ref Result );
    Result = iParam0->_fU0 - Result;
    if (Result > 0)
    {
        return Result;
    }
    return 0;
}

void sub_31754()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    SWITCH_ROADS_OFF( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
    if ((NOT (IS_VEH_DRIVEABLE( l_U567 ))) || (IS_CHAR_INJURED( l_U566 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( l_U649._fU0, l_U649._fU4 - 20.00000000, l_U649._fU8 + 1.00000000, 0, 0, 0, 0 );
        }
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1197.60000000, 75.00000000, 30.00000000, 1256.40000000, 101.20000000, 46.50000000 );
        l_U506 = 4;
    }
    else if (NOT (IS_PLAYER_CONTROL_ON( sub_5259() )))
    {
        if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() )) AND (IS_CHAR_STOPPED( sub_3270() ))) || (NOT (IS_CHAR_IN_ANY_CAR( sub_3270() ))))
        {
            if (NOT l_U608)
            {
                ;
            }
            SET_PLAYER_CONTROL( sub_5259(), 1 );
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U608 = 1;
        }
    }
    else if (DOES_CHAR_EXIST( l_U559 ))
    {
        ;
    }
    else
    {
        GET_GAME_VIEWPORT_ID( ref uVar4 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar4, 1221.46800000, 67.67220000, 37.79860000, 0.20000000 )))
        {
            SETTIMERB( 0 );
        }
        if ((((((TIMERA() > 30000) || (TIMERB() > 5000)) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))) AND (sub_11091( 1, 1 ))) AND (NOT (sub_23524( l_U520 )))) AND (NOT sub_27576()))
        {
            if (NOT (HAS_MODEL_LOADED( l_U509 )))
            {
                REQUEST_MODEL( l_U509 );
            }
            else
            {
                sub_32247( 1227.27600000, 66.41290000, 36.79860000, 89.34070000, ref l_U559 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1222.51000000, 66.01000000, 37.80000000, 2, -1, 1.00000000 );
                TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( 0, 1221.46800000, 74.67220000, 36.79860000, 2, -1, 1.00000000, 353.09420000 );
                TASK_STAND_STILL( 0, 10000 );
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, 1221.46800000, 70.67220000, 36.79860000, 353.09420000, 4.00000000, -1, 1221.46800000, 65.67220000, 36.79860000, 4.00000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U566 )) AND (IS_CHAR_STOPPED( l_U566 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
                    if (IS_GROUP_MEMBER( l_U566, sub_30512() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U566 );
                    }
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_PAUSE( 0, 2300 );
                    TASK_LOOK_AT_CHAR( 0, l_U559, 15000, 0 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, 1222.50500000, 76.00350000, 36.62420000, 2, -2 );
                    TASK_LOOK_AT_CHAR( 0, sub_3270(), 9999999, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
                    TASK_STAND_STILL( 0, 5000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U566, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
                else if (NOT (IS_GROUP_MEMBER( l_U566, sub_30512() )))
                {
                    SET_GROUP_MEMBER( sub_30512(), l_U566 );
                }
                SET_PLAYER_CONTROL( sub_5259(), 0 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_PAUSE( 0, 1600 );
                TASK_LOOK_AT_CHAR( 0, l_U559, 15000, 0 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1219.50500000, 76.00350000, 36.62420000, 2, -2 );
                TASK_LOOK_AT_CHAR( 0, sub_3270(), 9999999, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
                TASK_STAND_STILL( 0, 5000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_3270(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                BEGIN_CAM_COMMANDS( ref iVar5 );
                if (iVar5 == 1)
                {
                    CREATE_CAM( 14, ref uVar6 );
                    SET_CAM_POS( uVar6, 1216.13200000, 91.01909000, 40.21034000 );
                    SET_CAM_ROT( uVar6, -6.59590900, -0.00000000, -153.37160000 );
                    SET_CAM_FOV( uVar6, 45.00000000 );
                    SET_CAM_ACTIVE( uVar6, 1 );
                    SET_CAM_PROPAGATE( uVar6, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    DISPLAY_HUD( 0 );
                    DISPLAY_RADAR( 0 );
                }
                l_U601 = 0;
                SETTIMERA( 0 );
                while ((sub_23524( l_U520 )) || (TIMERA() < 3500))
                {
                    WAIT( 0 );
                    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() ))) AND (NOT l_U601))
                    {
                        l_U601 = sub_22395( "E1A2_DEN", ref l_U520, 7, 1 );
                    }
                }
                sub_3548( 500 );
                if (iVar5 == 1)
                {
                    SET_CAM_PROPAGATE( uVar6, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( uVar6 );
                    DISPLAY_HUD( 1 );
                    DISPLAY_RADAR( 1 );
                }
                END_CAM_COMMANDS( ref iVar5 );
                l_U506 = 6;
            }
        }
        else if (sub_27576())
        {
            if (NOT l_U597)
            {
                PRINT_NOW( "A2_WNTD_LS", 7500, 0 );
                l_U597 = 1;
            }
        }
        else
        {
            l_U597 = 0;
            if ((NOT (IS_VEH_DRIVEABLE( l_U567 ))) || (IS_CHAR_INJURED( l_U566 )))
            {
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( l_U649._fU0, l_U649._fU4 - 20.00000000, l_U649._fU8 + 1.00000000, 0, 0, 0, 0 );
                }
                l_U506 = 4;
            }
            else if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), l_U649._fU0, l_U649._fU4, l_U649._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 0 ))) || (NOT (IS_CHAR_IN_CAR( sub_3270(), l_U567 ))))
            {
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( l_U649._fU0, l_U649._fU4 - 20.00000000, l_U649._fU8 + 1.00000000, 0, 0, 0, 0 );
                }
                SETTIMERA( 0 );
                l_U506 = 4;
            }
            else if (((NOT (sub_23524( l_U520 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT l_U599))
            {
                if ((sub_33859( 0, 2 )) == 0)
                {
                    l_U599 = sub_22395( "E1A2_WAIT1", ref l_U520, 7, 1 );
                }
                else
                {
                    l_U599 = sub_22395( "E1A2_WAIT2", ref l_U520, 7, 1 );
                }
            };;;
        }
    };;;
    return;
}

void sub_32247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    CREATE_CHAR( 26, l_U509, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam4, 1 );
    SET_CHAR_HEADING( (uParam4^), 304.43380000 );
    sub_32301( uParam4 );
    return;
}

void sub_32301(unknown uParam0)
{
    sub_11753( 2, (uParam0^), "ROMAN", 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    ENABLE_PED_HELMET( (uParam0^), 0 );
    SET_ROMANS_MOOD( 2 );
    sub_15095( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    SET_CHAR_DECISION_MAKER( (uParam0^), l_U562 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), l_U563 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( (uParam0^), 0 );
    SET_PED_DIES_WHEN_INJURED( (uParam0^), 1 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_STAY_IN_CAR_WHEN_JACKED( (uParam0^), 1 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( (uParam0^), 0 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( (uParam0^), 0 );
    SET_CHAR_DROWNS_IN_SINKING_VEHICLE( (uParam0^), 1 );
    SET_CHAR_FORCE_DIE_IN_CAR( (uParam0^), 1 );
    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( (uParam0^), 1 );
    SET_CHAR_ALLOWED_TO_DUCK( (uParam0^), 0 );
    SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( (uParam0^), 0 );
    l_U565 = GET_ANIM_GROUP_FROM_CHAR( (uParam0^) );
    return;
}

void sub_33859(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_33973()
{
    SET_PLAYER_CONTROL( sub_5259(), 0 );
    sub_3548( 500 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    SET_MAX_WANTED_LEVEL( 1 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    ALTER_WANTED_LEVEL( sub_5259(), 0 );
    if (DOES_VEHICLE_EXIST( l_U568 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U568 );
    }
    DELETE_CHAR( ref l_U566 );
    REMOVE_BLIP( l_U561 );
    if (DOES_CHAR_EXIST( l_U559 ))
    {
        DELETE_CHAR( ref l_U559 );
    }
    if (IS_CAR_DEAD( l_U567 ))
    {
        l_U506 = 16;
        return;
    }
    SET_CAR_CAN_BE_DAMAGED( l_U567, 0 );
    sub_16403( ref l_U567 );
    SET_CAR_PROOFS( l_U567, 1, 1, 1, 1, 1 );
    SET_CAR_ENGINE_ON( l_U567, 0, 1 );
    CLEAR_AREA( l_U649._fU0, l_U649._fU4, l_U649._fU8, 20.00000000, 1 );
    CLEAR_AREA_OF_COPS( l_U649._fU0, l_U649._fU4, l_U649._fU8, 25.00000000 );
    if (g_U39149[15] == 1)
    {
        sub_11080( "AB02_CA" );
    }
    g_U39149[15] = 2;
    REQUEST_MODEL( l_U509 );
    sub_12208( 15 );
    LOAD_ALL_OBJECTS_NOW();
    CLEAR_AREA( l_U649._fU0, l_U649._fU4, l_U649._fU8, 10.00000000, 1 );
    CLEAR_AREA_OF_COPS( l_U649._fU0, l_U649._fU4, l_U649._fU8, 15.00000000 );
    if (IS_CAR_DEAD( l_U567 ))
    {
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_5259(), 1 );
        l_U506 = 14;
        return;
    }
    SET_CAR_COORDINATES( l_U567, l_U649._fU0, l_U649._fU4, l_U649._fU8 );
    SET_CAR_HEADING( l_U567, l_U652 );
    SET_CAR_ON_GROUND_PROPERLY( l_U567 );
    SET_CAR_CAN_BE_DAMAGED( l_U567, 1 );
    SET_CAR_PROOFS( l_U567, 0, 0, 0, 0, 0 );
    sub_16403( ref l_U567 );
    WARP_CHAR_INTO_CAR( sub_3270(), l_U567 );
    sub_34593( l_U567, ref l_U559 );
    sub_34640( ref l_U559, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U509 );
    sub_34718( 15, ref l_U566, l_U567, 2 );
    sub_16247( 15 );
    l_U573 = l_U567;
    sub_34798();
    l_U506 = 9;
    return;
}

void sub_34593(unknown uParam0, unknown uParam1)
{
    CREATE_CHAR_AS_PASSENGER( uParam0, 26, l_U509, 1, uParam1 );
    sub_32301( uParam1 );
    return;
}

void sub_34640(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, 1, 0 );
    }
    else
    {
        SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, 0, 0 );
    }
    return;
}

void sub_34718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_CHAR_AS_PASSENGER( uParam2, sub_14759( uParam0 ), sub_12219( uParam0 ), uParam3, uParam1 );
    sub_14866( uParam0, (uParam1^) );
    sub_14972( uParam0, (uParam1^) );
    return;
}

void sub_34798()
{
    if ((IS_CHAR_INJURED( l_U566 )) AND (NOT (IS_CHAR_DEAD( l_U566 ))))
    {
        REVIVE_INJURED_PED( l_U566 );
        SET_CHAR_HEALTH( l_U566, 300 );
    }
    if (NOT (IS_CHAR_INJURED( l_U566 )))
    {
        GIVE_WEAPON_TO_CHAR( l_U566, 7, 30000, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U566, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U566, 1 );
        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U566, 2 );
        SET_CURRENT_CHAR_WEAPON( l_U566, 7, 1 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U566, 1 );
        sub_11753( 1, l_U566, "MALC", 0 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U566, 0 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    ALTER_WANTED_LEVEL( sub_5259(), 0 );
    sub_26001( 2 );
    SET_PLAYER_CONTROL( sub_5259(), 1 );
    sub_25829( 500 );
    sub_17576( ref l_U621, 0 );
    sub_17576( ref l_U612, 17000 );
    l_U633 = sub_17280( l_U656, 5 );
    if (IS_VEH_DRIVEABLE( l_U573 ))
    {
        while (NOT (sub_22395( "E1A2_GOING", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
        WAIT( 0 );
        while (sub_23524( l_U514 ))
        {
            WAIT( 0 );
        }
        WAIT( 500 );
        SET_CAR_ENGINE_ON( l_U573, 1, 1 );
        PRINT( "A2_DR_WARE", 7500, 0 );
    }
    l_U555 = 0;
    sub_17576( ref l_U621, 10000 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    l_U597 = 0;
    return;
}

void sub_35362()
{
    if (IS_CHAR_INJURED( l_U566 ))
    {
        REMOVE_BLIP( l_U633 );
        REMOVE_BLIP( l_U572 );
        REMOVE_BLIP( l_U571 );
        sub_3122( ref l_U514, 0 );
        PRINT_NOW( "A2_MALC_DD", 7500, 0 );
        l_U506 = 16;
    }
    else
    {
        sub_35469();
        if (NOT (IS_CHAR_INJURED( l_U559 )))
        {
            if (((l_U507 == 2) || (l_U507 == 3)) || ((l_U507 == 1) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (TIMERB() > 15000))))
            {
                if (NOT (DOES_BLIP_EXIST( l_U561 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
                    SET_BLIP_AS_FRIENDLY( l_U561, 1 );
                }
                if (NOT l_U601)
                {
                    l_U601 = sub_22395( "E1A2_DEN", ref l_U520, 7, 1 );
                }
                else if ((NOT l_U590) AND (NOT sub_28693()))
                {
                    PRINT_NOW( "A2_ROM_TXI", 7500, 0 );
                    l_U590 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            if ((NOT (IS_GROUP_MEMBER( l_U566, sub_30512() ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U566, 15.00000000, 15.00000000, 15.00000000, 0 )))
            {
                SET_GROUP_MEMBER( sub_30512(), l_U566 );
            }
        }
        REMOVE_BLIP( l_U633 );
        REMOVE_BLIP( l_U571 );
    }
    return;
}

void sub_35469()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    uVar6 = {sub_35484( sub_3270(), 1 )};
    GET_GAME_TIMER( ref iVar10 );
    if (l_U507 == 0)
    {
        if (sub_25021( 1 ))
        {
            l_U607 = 1;
            REQUEST_MODEL( l_U509 );
            REQUEST_MODEL( l_U511 );
            if ((HAS_MODEL_LOADED( l_U509 )) AND (HAS_MODEL_LOADED( l_U511 )))
            {
                if (sub_35687( uVar6, 70.00000000 + l_U696, ref uVar2, ref uVar5 ))
                {
                    l_U564 = sub_35965( uVar2, uVar5 );
                    if (DOES_VEHICLE_EXIST( l_U564 ))
                    {
                        sub_32247( uVar2, uVar5, ref l_U559 );
                        WARP_CHAR_INTO_CAR( l_U559, l_U564 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U559, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U559, 1 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U564, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_CAR_MISSION_PED_TARGET( 0, l_U564, sub_3270(), 4, 11.00000000, 2, 20, -1 );
                        TASK_CAR_MISSION_PED_TARGET( 0, l_U564, sub_3270(), 21, 5.00000000, 4, -1, -1 );
                        TASK_CAR_TEMP_ACTION( 0, l_U564, 24, 500 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        TASK_PERFORM_SEQUENCE( l_U559, uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U509 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U511 );
                        SETTIMERB( 0 );
                        PRINTSTRING( "Creating Roman at " );
                        PRINTVECTOR( uVar2 );
                        PRINTNL();
                        RESET_STUCK_TIMER( l_U564, 4 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        if (NOT (IS_CHAR_INJURED( l_U566 )))
                        {
                            SET_CHAR_PROOFS( l_U566, 1, 1, 1, 1, 1 );
                        }
                        l_U507 = 1;
                    }
                }
                l_U696 += 10.00000000;
                if (l_U696 > 120.00000000)
                {
                    l_U696 = -30.00000000;
                }
            }
        }
    }
    else if ((IS_CHAR_DEAD( l_U559 )) || (IS_CAR_DEAD( l_U564 )))
    {
        PRINTSTRING( "ROMAN OR TAXI IS DEAD\n" );
        REMOVE_BLIP( l_U561 );
        if (NOT l_U600)
        {
            PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            SET_CHAR_PROOFS( l_U566, 0, 0, 0, 0, 0 );
        }
        l_U506 = 14;
    }
    else if ((IS_CHAR_INJURED( l_U559 )) || (NOT (IS_VEH_DRIVEABLE( l_U564 ))))
    {
        PRINTSTRING( "ROMAN OR TAXI IS INJURED\n" );
        REMOVE_BLIP( l_U561 );
        if (NOT (IS_CHAR_DEAD( l_U559 )))
        {
            SET_CHAR_HEALTH( l_U559, 0 );
        }
        if (NOT l_U600)
        {
            PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            SET_CHAR_PROOFS( l_U566, 0, 0, 0, 0, 0 );
        }
        l_U506 = 14;
    }
    else if ((CHECK_STUCK_TIMER( l_U564, 1, 40000 )) || (CHECK_STUCK_TIMER( l_U564, 0, 5000 )))
    {
        PRINTSTRING( "ROMAN IS STUCK\n" );
        REMOVE_BLIP( l_U561 );
        if (NOT (IS_CAR_DEAD( l_U564 )))
        {
            SET_CAR_HEALTH( l_U564, 10 );
        }
        if (NOT (IS_CHAR_DEAD( l_U559 )))
        {
            SET_CHAR_HEALTH( l_U559, 0 );
        }
        REMOVE_BLIP( l_U561 );
        if (NOT l_U600)
        {
            PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            SET_CHAR_PROOFS( l_U566, 0, 0, 0, 0, 0 );
        }
        l_U506 = 14;
    }
    else if ((NOT l_U591) AND (NOT sub_28693()))
    {
        PRINT( "A2_ROM_TXI2", 7500, 0 );
        l_U591 = 1;
    }
    if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U559, sub_3270(), 0 )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U564, sub_3270() )) AND (NOT (IS_CAR_HEALTH_GREATER( l_U564, 1950 ))))) || ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 20.00000000, 20.00000000, 20.00000000, 0 )) AND (IS_WANTED_LEVEL_GREATER( sub_5259(), 0 ))))
    {
        if (((l_U507 != 4) AND (NOT (IS_CHAR_INJURED( l_U559 )))) AND (NOT (IS_CAR_DEAD( l_U564 ))))
        {
            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U564 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U559 );
            SETTIMERA( 0 );
            PANIC_SCREAM( l_U559 );
            GET_GAME_TIMER( ref l_U697 );
            TASK_CAR_MISSION_PED_TARGET( l_U559, l_U564, sub_3270(), 8, 50.00000000, 2, 200, -1 );
            REMOVE_BLIP( l_U561 );
            SET_CAN_BURST_CAR_TYRES( l_U564, 0 );
            SET_CREATE_RANDOM_COPS( 1 );
            l_U507 = 4;
        }
    }
    else if (l_U507 != 1)
    {
        if ((IS_CHAR_ON_SCREEN( l_U559 )) || (IS_CAR_ON_SCREEN( l_U564 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 150.00000000, 150.00000000, 150.00000000, 0 )))
            {
                l_U506 = 14;
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 100.00000000, 100.00000000, 100.00000000, 0 )))
        {
            l_U506 = 14;
        }
        if (l_U506 == 14)
        {
            DELETE_CHAR( ref l_U559 );
            DELETE_CAR( ref l_U564 );
            PRINT_NOW( "A2_ROM_ESC", 7500, 0 );
            l_U506 = 14;
            l_U605 = 1;
            return;
        }
    }
    switch (l_U507)
    {
        case 1:
        if (sub_21480( ref l_U624 ))
        {
            if (((sub_37805( l_U559, 29 )) || (CHECK_STUCK_TIMER( l_U564, 3, 60000 ))) || (CHECK_STUCK_TIMER( l_U564, 2, 30000 )))
            {
                sub_17576( ref l_U624, 40000 );
            }
        }
        else
        {
            l_U507 = 2;
        }
        break;
        case 2:
        if (sub_18492( ref l_U624 ))
        {
            TASK_CAR_MISSION_PED_TARGET( l_U559, l_U564, sub_3270(), 8, 35.00000000, 2, 200, -1 );
            l_U507 = 3;
        }
        else if (((sub_11091( 1, 1 )) AND ((IS_CAR_STOPPED( l_U564 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 10.00000000, 10.00000000, 10.00000000, 0 )))) AND (NOT (IS_CHAR_INJURED( l_U559 ))))
        {
            GET_INTERIOR_FROM_CHAR( l_U559, ref iVar11 );
            GET_INTERIOR_FROM_CHAR( sub_3270(), ref iVar12 );
            if (iVar11 == iVar12)
            {
                SET_CREATE_RANDOM_COPS( 1 );
                l_U506 = 8;
            }
        }
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 8.00000000, 8.00000000, 8.00000000, 0 ))
        {
            OPEN_SEQUENCE_TASK( ref uVar9 );
            TASK_CAR_MISSION_COORS_TARGET( 0, l_U564, uVar6._fU0, uVar6._fU4, uVar6._fU8, 21, 5.00000000, 2, -1, -1 );
            TASK_CAR_TEMP_ACTION( 0, l_U564, 24, 25000 );
            CLOSE_SEQUENCE_TASK( uVar9 );
            TASK_PERFORM_SEQUENCE( l_U559, uVar9 );
            CLEAR_SEQUENCE_TASK( uVar9 );
            l_U507 = 1;
            sub_17576( ref l_U624, 0 );
        }
        if ((IS_CHAR_ON_SCREEN( l_U559 )) || (IS_CAR_ON_SCREEN( l_U564 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 150.00000000, 150.00000000, 150.00000000, 0 )))
            {
                l_U506 = 14;
                l_U605 = 1;
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 100.00000000, 100.00000000, 100.00000000, 0 )))
        {
            l_U506 = 14;
            l_U605 = 1;
        }
        if (l_U506 == 14)
        {
            DELETE_CHAR( ref l_U559 );
            DELETE_CAR( ref l_U564 );
            PRINT_NOW( "A2_ROM_ESC", 7500, 0 );
            l_U506 = 14;
            l_U605 = 1;
            return;
        }
        break;
        case 4:
        REMOVE_BLIP( l_U561 );
        if (sub_37805( l_U559, 49 ))
        {
            TASK_CAR_MISSION_PED_TARGET( l_U559, l_U564, sub_3270(), 8, 50.00000000, 2, 200, -1 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( l_U559, 50.00000000 );
        }
        if (l_U600)
        {
            if (TIMERA() > 4000)
            {
                if (DOES_CHAR_EXIST( l_U559 ))
                {
                    l_U605 = 1;
                }
                l_U506 = 14;
            }
        }
        else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 100.00000000, 100.00000000, 100.00000000, 0 ))) || (((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 50.00000000, 50.00000000, 50.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U559 )))) AND (NOT (IS_CAR_ON_SCREEN( l_U564 )))))
        {
            l_U605 = 1;
            DELETE_CHAR( ref l_U559 );
            DELETE_CAR( ref l_U564 );
            PRINT_NOW( "A2_ROM_SPK", 7500, 0 );
            l_U600 = 1;
            l_U506 = 14;
        }
        else if ((((TIMERA() > 10000) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 50.00000000, 50.00000000, 50.00000000, 0 )))) || (CHECK_STUCK_TIMER( l_U564, 3, 60000 ))) || (CHECK_STUCK_TIMER( l_U564, 2, 30000 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                SET_CHAR_KEEP_TASK( l_U559, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U559 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U564 );
            PRINT_NOW( "A2_ROM_SPK", 5000, 0 );
            SETTIMERA( 0 );
            l_U600 = 1;
            l_U605 = 1;
            l_U506 = 14;
        }
        else if (TIMERA() > 30000)
        {
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                SET_CHAR_KEEP_TASK( l_U559, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U559 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U564 );
            PRINT_NOW( "A2_ROM_SPK", 5000, 0 );
            l_U600 = 1;
            l_U605 = 1;
            l_U506 = 14;
            SETTIMERA( 0 );
        };;;;
        if (NOT (IS_CHAR_INJURED( l_U559 )))
        {
            if ((iVar10 - l_U697) > 5000)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 25, 25, 25, 0 ))
                {
                    PANIC_SCREAM( l_U559 );
                    GET_GAME_TIMER( ref l_U697 );
                }
            }
        }
        break;
    };;;;;
    return;
}

void sub_35484(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_35687(vector vParam0, unknown uParam3, int iParam4, unknown uParam5)
{
    int I;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    boolean bVar15;
    int iVar16;

    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref uVar9 );
    GET_GAME_VIEWPORT_ID( ref uVar10 );
    for ( I = 0; I <= 359; I += 15 )
    {
        LIMIT_ANGLE( uVar9 + (TO_FLOAT( I )), ref uVar11 );
        uVar12 = {vParam0 + (vector( 0, uParam3 * (SIN( uVar11 )), -uParam3 * (COS( uVar11 ))))};
        bVar15 = false;
        bVar15 = GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar12._fU0, uVar12._fU4, uVar12._fU8, iParam4 + 0, iParam4 + 4, iParam4 + 8, uParam5 );
        GET_INTERIOR_AT_COORDS( iParam4->_fU0, iParam4->_fU4, iParam4->_fU8, ref iVar16 );
        if ((iVar16 != nil) || (iParam4->_fU8 < 0))
        {
            bVar15 = false;
        }
        if (bVar15)
        {
            return NOT (CAM_IS_SPHERE_VISIBLE( uVar10, iParam4->_fU0, iParam4->_fU4, iParam4->_fU8, 2.00000000 ));
        }
    }
    return 0;
}

void sub_35965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    REQUEST_MODEL( l_U511 );
    if (NOT (HAS_MODEL_LOADED( l_U511 )))
    {
        return nil;
    }
    CREATE_CAR( l_U511, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    if (l_U511 == -1932515764)
    {
        SET_CAR_COLOUR_COMBINATION( Result, 0 );
        SET_VEHICLE_DIRT_LEVEL( Result, 15.00000000 );
    }
    else if (l_U511 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( Result, 2 );
        SET_VEHICLE_DIRT_LEVEL( Result, 0.00000000 );
    }
    SET_CAR_HEALTH( Result, 2000 );
    STOP_CAR_BREAKING( Result, 1 );
    SET_VEH_HAS_STRONG_AXLES( Result, 1 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    HAS_CAR_BEEN_RESPRAYED( Result );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U511 );
    }
    return Result;
}

int sub_37805(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_39563()
{
    while ((IS_MESSAGE_BEING_DISPLAYED()) || (NOT (sub_11091( 1, 0 ))))
    {
        WAIT( 0 );
    }
    return;
}

void sub_39614()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
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
    int[0] iVar18;
    int[0] iVar22;
    int[0] iVar26;
    boolean bVar30;
    boolean bVar31;
    int iVar32;
    int iVar33;
    vector[3] vVar34;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    vector[3] vVar44;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    int iVar54;

    if ((IS_CHAR_INJURED( l_U566 )) || (IS_CHAR_INJURED( l_U559 )))
    {
        l_U506 = 14;
        return;
    }
    else if (IS_CAR_DEAD( l_U564 ))
    {
        DELETE_CHAR( ref l_U559 );
        l_U506 = 14;
        return;
    }
    REMOVE_BLIP( l_U561 );
    REMOVE_BLIP( l_U633 );
    REMOVE_BLIP( l_U572 );
    REMOVE_BLIP( l_U571 );
    SET_PLAYER_CONTROL( sub_5259(), 0 );
    sub_3548( 500 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    sub_3122( ref l_U520, 0 );
    sub_3122( ref l_U514, 0 );
    SET_MAX_WANTED_LEVEL( 1 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    ALTER_WANTED_LEVEL( sub_5259(), 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    uVar3 = {sub_35484( l_U559, 1 )};
    CLEAR_AREA( uVar3._fU0, uVar3._fU4, uVar3._fU8, 25.00000000, 1 );
    SWITCH_MAD_DRIVERS( 0 );
    if (NOT (IS_CAR_DEAD( l_U564 )))
    {
        GET_CAR_HEADING( l_U564, ref uVar6 );
        GET_CAR_COORDINATES( l_U564, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U659._fU0, l_U659._fU4, l_U659._fU8, l_U576, ref l_U662._fU0, ref l_U662._fU4, ref l_U662._fU8, ref l_U665 );
        if (NOT (IS_CAR_DEAD( l_U567 )))
        {
            I = l_U576 + 1;
            uVar7 = {sub_26192( l_U567, 1 )};
            uVar13 = {uVar7};
            GET_CAR_HEADING( l_U567, ref uVar17 );
            while (((LOCATE_CAR_3D( l_U567, l_U662._fU0, l_U662._fU4, l_U662._fU8, 6.00000000, 6.00000000, 6.00000000, 0 )) AND (GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar7._fU0, uVar7._fU4, uVar7._fU8, I, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8, ref uVar16 ))) AND (I < 5))
            {
                uVar13 = {uVar10};
                uVar17 = uVar16;
                I++;
            }
            CLEAR_AREA( uVar13._fU0, uVar13._fU4, uVar13._fU8, 4.00000000, 1 );
            SET_CAR_COORDINATES( l_U567, uVar13._fU0, uVar13._fU4, uVar13._fU8 );
            SET_CAR_HEADING( l_U567, uVar17 );
            SET_CAR_ON_GROUND_PROPERLY( l_U567 );
        }
        SET_CAR_COORDINATES( l_U564, l_U662._fU0, l_U662._fU4, l_U662._fU8 );
        SET_CAR_HEADING( l_U564, sub_40332( l_U665, uVar6 ) );
        SET_CAR_ON_GROUND_PROPERLY( l_U564 );
        SET_CAR_CAN_BE_DAMAGED( l_U564, 0 );
        sub_16403( ref l_U564 );
        SET_CAR_PROOFS( l_U564, 1, 1, 1, 1, 1 );
        SET_CAR_ENGINE_ON( l_U564, 0, 1 );
        RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
    }
    if (NOT (IS_CAR_DEAD( l_U567 )))
    {
        sub_16403( ref l_U567 );
    }
    if (NOT (IS_CHAR_INJURED( l_U559 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
        CLEAR_CHAR_TASKS( l_U559 );
    }
    if (NOT (IS_CHAR_INJURED( l_U566 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
    }
    array(ref iVar18, 3);
    array(ref iVar22, 3);
    array(ref iVar26, 3);
    if (NOT (IS_CAR_DEAD( l_U564 )))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, 3.50000000, 0.00000000, 0.00000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U659._fU0, l_U659._fU4, l_U659._fU8 + 1.00000000, ref l_U659._fU8 );
        if (IS_CHAR_IN_ANY_CAR( sub_3270() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3270(), l_U659._fU0, l_U659._fU4, l_U659._fU8 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3270(), l_U659._fU0, l_U659._fU4, l_U659._fU8 );
        }
        if (NOT (IS_CHAR_INJURED( l_U559 )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3270(), l_U559 );
        }
        if (NOT (IS_CHAR_DEAD( l_U566 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, 4.00000000, -0.50000000, 0.00000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U659._fU0, l_U659._fU4, l_U659._fU8 + 1.00000000, ref l_U659._fU8 );
            if (IS_CHAR_IN_ANY_CAR( l_U566 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U566, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U566, 2 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U566, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
            }
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U566, l_U559 );
            }
        }
    }
    if (((NOT (IS_CHAR_INJURED( l_U559 ))) AND (NOT (IS_CHAR_INJURED( l_U566 )))) AND (NOT (IS_CAR_DEAD( l_U564 ))))
    {
        OPEN_SEQUENCE_TASK( ref iVar22[0] );
        TASK_LEAVE_ANY_CAR( 0 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        TASK_OPEN_PASSENGER_DOOR( 0, l_U564, 10000, 2 );
        TASK_LOOK_AT_CHAR( 0, sub_3270(), 10000, 0 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3270() );
        TASK_PAUSE( 0, 5000 );
        TASK_LOOK_AT_CHAR( 0, l_U566, 10000, 0 );
        TASK_PAUSE( 0, 5000 );
        TASK_LOOK_AT_CHAR( 0, sub_3270(), 10000, 0 );
        CLOSE_SEQUENCE_TASK( iVar22[0] );
        OPEN_SEQUENCE_TASK( ref iVar22[1] );
        TASK_LOOK_AT_CHAR( 0, sub_3270(), 10000, 0 );
        TASK_STAND_STILL( 0, 1600 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U566 );
        TASK_LOOK_AT_CHAR( 0, l_U566, 10000, 0 );
        CLOSE_SEQUENCE_TASK( iVar22[1] );
        OPEN_SEQUENCE_TASK( ref iVar22[2] );
        TASK_LOOK_AT_CHAR( 0, l_U566, 10000, 0 );
        TASK_STAND_STILL( 0, 500 );
        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U564, -1, 2 );
        TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U564 );
        TASK_LOOK_AT_CHAR( 0, l_U566, 10000, 0 );
        TASK_PAUSE( 0, 1000 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, -4.00000000, 0.00000000, 4.00000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        TASK_LOOK_AT_COORD( 0, l_U659._fU0, l_U659._fU4, l_U659._fU8, 10000, 0 );
        CLOSE_SEQUENCE_TASK( iVar22[2] );
        OPEN_SEQUENCE_TASK( ref iVar26[0] );
        TASK_LOOK_AT_CHAR( 0, l_U559, 10000, 0 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
        TASK_PAUSE( 0, 4000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
        CLOSE_SEQUENCE_TASK( iVar26[0] );
        OPEN_SEQUENCE_TASK( ref iVar26[1] );
        TASK_LOOK_AT_CHAR( 0, l_U559, 10000, 0 );
        TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( 0, l_U564, 1.70000000, -2.50000000, 0.00000000, 2, -1 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
        TASK_STAND_STILL( 0, 5000 );
        TASK_AIM_GUN_AT_CHAR( 0, l_U559, 5000 );
        TASK_STAND_STILL( 0, 600 );
        CLOSE_SEQUENCE_TASK( iVar26[1] );
        OPEN_SEQUENCE_TASK( ref iVar26[2] );
        TASK_LOOK_AT_CHAR( 0, l_U559, 10000, 0 );
        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U564, -1, 2 );
        CLOSE_SEQUENCE_TASK( iVar26[2] );
        OPEN_SEQUENCE_TASK( ref iVar18[0] );
        TASK_LOOK_AT_CHAR( 0, l_U559, 10000, 0 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
        CLOSE_SEQUENCE_TASK( iVar18[0] );
        OPEN_SEQUENCE_TASK( ref iVar18[1] );
        TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( 0, l_U564, 1.75000000, 0.00000000, 0.00000000, 2, -1 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U559 );
        TASK_STAND_STILL( 0, 12000 );
        CLOSE_SEQUENCE_TASK( iVar18[1] );
        OPEN_SEQUENCE_TASK( ref iVar18[2] );
        SET_NEXT_DESIRED_MOVE_STATE( 3 );
        TASK_ENTER_CAR_AS_DRIVER( 0, l_U564, -1 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, -4.00000000, -2.00000000, 0.00000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        TASK_LOOK_AT_COORD( 0, l_U659._fU0, l_U659._fU4, l_U659._fU8, 10000, 0 );
        CLOSE_SEQUENCE_TASK( iVar18[2] );
    }
    if (NOT (IS_CHAR_DEAD( l_U559 )))
    {
        CREATE_CAM( 14, ref l_U574 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        if (NOT (IS_CAR_DEAD( l_U564 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, -3.50000000, -4.60000000, -0.30000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        }
        SET_CAM_POS( l_U574, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, -0.90000000, 0.00000000, 1.30000000, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
        POINT_CAM_AT_COORD( l_U574, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
        SET_CAM_FOV( l_U574, 45.00000000 );
        SET_CAM_ACTIVE( l_U574, 1 );
        SET_CAM_PROPAGATE( l_U574, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    SWITCH_ROADS_OFF( uVar3._fU0 - 25.00000000, uVar3._fU4 - 25.00000000, uVar3._fU8 - 25.00000000, uVar3._fU0 + 25.00000000, uVar3._fU4 + 25.00000000, uVar3._fU8 + 25.00000000 );
    WAIT( 0 );
    CLEAR_AREA( uVar3._fU0, uVar3._fU4, uVar3._fU8, 40.00000000, 1 );
    DO_SCREEN_FADE_IN( 500 );
    bVar30 = true;
    bVar31 = false;
    SETTIMERA( 0 );
    l_U629 = 0;
    iVar33 = -1;
    array(ref vVar34, 3);
    vVar34[0] = {-2.90000000, -3.80000000, -0.15000000};
    vVar34[1] = {0.90000000, 1.00000000, 0.60000000};
    vVar34[2] = {-1.60000000, -1.20000000, 0.60000000};
    array(ref vVar44, 3);
    vVar44[0] = {0.40000000, 0.10000000, 0.35000000};
    vVar44[1] = {1.40000000, -1.30000000, 0.75000000};
    vVar44[2] = {1.00000000, 0.00000000, 0.50000000};
    iVar54 = l_U629;
    while (bVar30)
    {
        WAIT( 0 );
        SWITCH_ROADS_OFF( uVar3._fU0 - 25.00000000, uVar3._fU4 - 25.00000000, uVar3._fU8 - 25.00000000, uVar3._fU0 + 25.00000000, uVar3._fU4 + 25.00000000, uVar3._fU8 + 25.00000000 );
        if (((IS_CHAR_INJURED( l_U559 )) || (IS_CHAR_INJURED( l_U566 ))) || (NOT (IS_VEH_DRIVEABLE( l_U564 ))))
        {
            sub_3122( ref l_U520, 0 );
            bVar30 = false;
        }
        else if ((DOES_CAM_EXIST( l_U574 )) AND (iVar54 != l_U629))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, vVar34[l_U629]._fU0, vVar34[l_U629]._fU4, vVar34[l_U629]._fU8, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
            SET_CAM_POS( l_U574, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U564, vVar44[l_U629]._fU0, vVar44[l_U629]._fU4, vVar44[l_U629]._fU8, ref l_U659._fU0, ref l_U659._fU4, ref l_U659._fU8 );
            POINT_CAM_AT_COORD( l_U574, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
            SET_CAM_DOF_FOCUSPOINT( l_U574, vVar44[l_U629]._fU0, vVar44[l_U629]._fU4, vVar44[l_U629]._fU8, 1.20000000 );
            iVar54 = l_U629;
        }
        if (NOT bVar31)
        {
            bVar31 = sub_22395( "E1A2_LIMO", ref l_U520, 7, 1 );
        }
        else if (sub_43245( ref l_U520 ))
        {
            bVar30 = false;
        }
        else
        {
            iVar32 = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
            switch (iVar32)
            {
                case 0:
                if (iVar33 != iVar32)
                {
                    TASK_PERFORM_SEQUENCE( l_U559, iVar22[0] );
                    TASK_PERFORM_SEQUENCE( l_U566, iVar26[0] );
                    TASK_PERFORM_SEQUENCE( sub_3270(), iVar18[0] );
                    iVar33 = iVar32;
                }
                break;
                case 3:
                if (l_U629 != 1)
                {
                    CLEAR_AREA( uVar3._fU0, uVar3._fU4, uVar3._fU8, 25.00000000, 1 );
                    l_U629 = 1;
                }
                break;
                case 8:
                if (iVar33 != iVar32)
                {
                    TASK_PERFORM_SEQUENCE( l_U566, iVar26[1] );
                    TASK_PERFORM_SEQUENCE( sub_3270(), iVar18[1] );
                    iVar33 = iVar32;
                }
                break;
                case 10:
                if (iVar33 != iVar32)
                {
                    TASK_PERFORM_SEQUENCE( l_U559, iVar22[1] );
                    iVar33 = iVar32;
                }
                break;
                case 12:
                if (iVar33 != iVar32)
                {
                    TASK_PERFORM_SEQUENCE( l_U559, iVar22[2] );
                    TASK_PERFORM_SEQUENCE( sub_3270(), iVar18[2] );
                    iVar33 = iVar32;
                    SETTIMERA( 0 );
                }
                else if (TIMERA() > 1700)
                {
                    if (l_U629 != 2)
                    {
                        CLEAR_AREA( uVar3._fU0, uVar3._fU4, uVar3._fU8, 25.00000000, 1 );
                        l_U629 = 2;
                    }
                }
                break;
                default:
                if (iVar32 > 12)
                {
                    if (l_U629 != 2)
                    {
                        CLEAR_AREA( uVar3._fU0, uVar3._fU4, uVar3._fU8, 25.00000000, 1 );
                        l_U629 = 2;
                    }
                    if (((IS_CHAR_SITTING_IN_CAR( l_U559, l_U564 )) AND (IS_CAR_PASSENGER_SEAT_FREE( l_U564, 2 ))) AND (iVar33 == 12))
                    {
                        TASK_PERFORM_SEQUENCE( l_U566, iVar26[2] );
                        iVar33 = 13;
                    }
                }
                break;
            }
        }
        if ((IS_SCREEN_FADED_IN()) AND (sub_43896()))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar30 = false;
        }
    }
    sub_3122( ref l_U520, 1 );
    sub_3122( ref l_U514, 1 );
    sub_3548( 500 );
    sub_3122( ref l_U520, 0 );
    sub_3122( ref l_U514, 0 );
    if (NOT (IS_CAR_DEAD( l_U564 )))
    {
        SET_CAR_CAN_BE_DAMAGED( l_U564, 1 );
        sub_16403( ref l_U564 );
        SET_CAR_PROOFS( l_U564, 0, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_DEAD( l_U559 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U559 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U559, l_U564, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U566 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U566, l_U564, 2 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
        WARP_CHAR_INTO_CAR( sub_3270(), l_U564 );
        CLOSE_ALL_CAR_DOORS( l_U564 );
    }
    for ( I = 0; I < iVar18; I++ )
    {
        CLEAR_SEQUENCE_TASK( iVar18[I] );
    }
    for ( I = 0; I < iVar22; I++ )
    {
        CLEAR_SEQUENCE_TASK( iVar22[I] );
    }
    for ( I = 0; I < iVar26; I++ )
    {
        CLEAR_SEQUENCE_TASK( iVar26[I] );
    }
    if (DOES_VEHICLE_EXIST( l_U567 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U567 );
    }
    if (NOT (IS_CHAR_DEAD( l_U566 )))
    {
        if (IS_GROUP_MEMBER( l_U566, sub_30512() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U566 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            SET_CHAR_PROOFS( l_U566, 0, 0, 0, 0, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U559 )))
    {
        sub_34640( ref l_U559, 1 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    SET_PLAYER_CONTROL( sub_5259(), 1 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( uVar3._fU0 - 25.00000000, uVar3._fU4 - 25.00000000, uVar3._fU8 - 25.00000000, uVar3._fU0 + 25.00000000, uVar3._fU4 + 25.00000000, uVar3._fU8 + 25.00000000 );
    SWITCH_MAD_DRIVERS( 1 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_3270() );
    l_U573 = l_U564;
    sub_34798();
    l_U506 = 9;
    return;
}

void sub_40332(unknown Result, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    uVar4 = {-SIN( Result ), COS( Result ), 0.00000000};
    uVar7 = {-SIN( uParam1 ), COS( uParam1 ), 0.00000000};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar7._fU0, uVar7._fU4, ref fVar10 );
    if (((fVar10 > 90.00000000) AND (fVar10 < 270.00000000)) || ((fVar10 < -90.00000000) AND (fVar10 > -270.00000000)))
    {
        return Result + 180.00000000;
    }
    return Result;
}

int sub_43245(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

int sub_43896()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_44741()
{
    sub_44750();
    if (IS_CHAR_INJURED( l_U559 ))
    {
        sub_26415( ref l_U514 );
        REMOVE_BLIP( l_U633 );
        PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        l_U506 = 14;
    }
    else if (IS_CHAR_INJURED( l_U566 ))
    {
        sub_26415( ref l_U514 );
        REMOVE_BLIP( l_U633 );
        PRINT_NOW( "A2_MALC_DD", 7500, 0 );
        l_U506 = 14;
    }
    else
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U559, 1 );
        sub_45051();
        if ((GET_ENGINE_HEALTH( l_U573 )) == 0.00000000)
        {
            SET_ENGINE_HEALTH( l_U573, -10.00000000 );
        }
        switch (sub_29545( ref l_U573, ref l_U571, "", "" ))
        {
            case 4:
            CLEAR_THIS_PRINT( "A2_GTINCAR" );
            break;
            case 5:
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U572 );
            break;
            case 1: l_U606 = 1;
            case 0:
            if (sub_23524( l_U514 ))
            {
                sub_3122( ref l_U514, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U566 )))
            {
                if (l_U607 == 0)
                {
                    PRINT( "A2_MALC_CD", 7500, 0 );
                }
                else
                {
                    PRINT( "A2_CAR_CD", 7500, 0 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
            }
            l_U506 = 14;
            break;
            case 3:
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                WARP_CHAR_INTO_CAR( sub_3270(), l_U573 );
            }
            if ((IS_CHAR_ON_FOOT( l_U566 )) AND (NOT (IS_GROUP_MEMBER( l_U566, sub_30512() ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U566, sub_3270(), 12, 12, 12, 0 ))
                {
                    SET_GROUP_MEMBER( sub_30512(), l_U566 );
                    REMOVE_BLIP( l_U572 );
                }
            }
            else if ((IS_CHAR_IN_CAR( l_U566, l_U573 )) AND (IS_GROUP_MEMBER( l_U566, sub_30512() )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U566 );
                REMOVE_BLIP( l_U572 );
            }
            if ((NOT l_U593) AND (NOT sub_28693()))
            {
                PRINT_NOW( "A2_GTINCAR", 7500, 0 );
                l_U593 = 1;
            }
            break;
            case 2:
            if (NOT (sub_45159( sub_3270(), l_U559, l_U566, 1 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U566, l_U573 )))
                {
                    REMOVE_BLIP( l_U633 );
                    if ((((IS_VEH_DRIVEABLE( l_U573 )) AND (NOT (IS_CAR_ON_FIRE( l_U573 )))) AND (NOT (IS_CAR_IN_WATER( l_U573 )))) AND ((GET_ENGINE_HEALTH( l_U573 )) > 0.00000000))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U572 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U566, ref l_U572 );
                            SET_BLIP_AS_FRIENDLY( l_U572, 1 );
                        }
                        if (((NOT l_U595) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT sub_28693()))
                        {
                            PRINT( "A2_PU_MALC", 7500, 0 );
                            l_U595 = 1;
                        }
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U566, sub_3270(), 12, 12, 12, 0 )) AND (NOT (IS_GROUP_MEMBER( l_U566, sub_30512() ))))
                        {
                            SET_GROUP_MEMBER( sub_30512(), l_U566 );
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "A2_PU_MALC", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_THIS_PRINT( "A2_PU_MALC" );
                            }
                        }
                    }
                }
            }
            else if (sub_27576())
            {
                REMOVE_BLIP( l_U572 );
                REMOVE_BLIP( l_U633 );
            }
            else
            {
                REMOVE_BLIP( l_U572 );
                if ((LOCATE_CHAR_IN_CAR_3D( l_U559, l_U656._fU0, l_U656._fU4, l_U656._fU8 + 8.00000000, 2.50000000, 2.50000000, 8.00000000, 1 )) AND (sub_11091( 1, 1 )))
                {
                    sub_26415( ref l_U514 );
                    REMOVE_BLIP( l_U633 );
                    l_U506 = 11;
                }
                else if (NOT l_U596)
                {
                    PRINT_NOW( "A2_DR_WARE", 7500, 0 );
                    l_U596 = 1;
                }
                if (NOT (DOES_BLIP_EXIST( l_U633 )))
                {
                    l_U633 = sub_17280( l_U656, 5 );
                }
                sub_47865();
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
                {
                    SET_ENGINE_HEALTH( l_U573, 0 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    sub_31058( 1219.74500000, 1483.41100000, 15.78430000, 264.72840000 );
                }
            }
            if ((IS_CHAR_IN_CAR( l_U566, l_U573 )) AND (IS_GROUP_MEMBER( l_U566, sub_30512() )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U566 );
                if (NOT GET_CREATE_RANDOM_COPS())
                {
                    SET_CREATE_RANDOM_COPS( 1 );
                    SET_WANTED_MULTIPLIER( 0.10000000 );
                }
            }
            break;
        }
        if (l_U603)
        {
            if (NOT (IS_CAR_DEAD( l_U573 )))
            {
                CONTROL_CAR_DOOR( l_U573, 2, 0, 0.00000000 );
                SHUT_CAR_DOOR( l_U573, 2 );
            }
        }
        else
        {
            sub_50451();
        }
    }
    sub_51292();
    sub_51868();
    sub_52816();
    sub_53430();
    sub_54135();
    return;
}

void sub_44750()
{
    if ((IS_CHAR_IN_AREA_2D( sub_3270(), 1033, -8, 1576, 1953, 0 )) || (IS_CHAR_IN_AREA_2D( sub_3270(), 65189, 933, 975, 1920, 0 )))
    {
        if (NOT l_U611)
        {
            SET_CAR_DENSITY_MULTIPLIER( 1.90000000 );
            l_U611 = 1;
        }
    }
    else if (l_U611)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        l_U611 = 0;
    }
    return;
}

void sub_45051()
{
    char[16] cVar2;
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

    array(ref cVar2, 3);
    StrCopy( ref cVar2[0], "E1A2_IN", 16 );
    StrCopy( ref cVar2[1], "E1A2_RESP", 16 );
    StrCopy( ref cVar2[2], "E1A2_KILLY", 16 );
    if (sub_21480( ref l_U621 ))
    {
        sub_17576( ref l_U621, 2500 );
    }
    if (sub_45159( sub_3270(), l_U566, l_U559, 1 ))
    {
        if (sub_27576())
        {
            if (NOT l_U581)
            {
                if ((NOT (sub_27002( l_U514 ))) AND (l_U556))
                {
                    sub_3122( ref l_U514, 0 );
                }
                if ((NOT sub_28693()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    l_U581 = sub_22395( "E1A2_LOSE", ref l_U520, 7, 1 );
                }
            }
        }
        else
        {
            l_U581 = 0;
            if ((((l_U557 < l_U526) AND (l_U556)) AND (NOT (sub_23524( l_U514 )))) AND (NOT (sub_27002( l_U514 ))))
            {
                l_U556 = 0;
                sub_17576( ref l_U621, 1 );
            }
            if (NOT l_U556)
            {
                if ((sub_31213( ref l_U621 )) == 0)
                {
                    if (l_U558 < 0)
                    {
                        l_U558 = g_U39238;
                    }
                    switch (l_U558)
                    {
                        case 1:
                        StrCopy( ref l_U526[0], "E1A2_RECOG", 16 );
                        StrCopy( ref l_U526[1], "E1A2_B2AV1", 16 );
                        StrCopy( ref l_U526[2], "E1A2_B2BV1", 16 );
                        StrCopy( ref l_U526[3], "E1A2_B2CV1", 16 );
                        StrCopy( ref l_U526[4], "E1A2_B2DV1", 16 );
                        StrCopy( ref l_U526[5], "E1A2_B2EV1", 16 );
                        StrCopy( ref l_U526[6], "E1A2_B2FV1", 16 );
                        l_U555 = 0;
                        break;
                        case 0:
                        StrCopy( ref l_U526[0], "E1A2_RECOG", 16 );
                        StrCopy( ref l_U526[1], "E1A2_2AV2", 16 );
                        StrCopy( ref l_U526[2], "E1A2_B2BV2", 16 );
                        StrCopy( ref l_U526[3], "E1A2_B2CV2", 16 );
                        StrCopy( ref l_U526[4], "E1A2_2DV2", 16 );
                        StrCopy( ref l_U526[5], "E1A2_2EV2", 16 );
                        StrCopy( ref l_U526[6], "E1A2_2FV2", 16 );
                        l_U555 = 0;
                        break;
                        default:
                        l_U555 = 1;
                        break;
                    }
                    if ((l_U603) AND (NOT l_U580))
                    {
                        l_U580 = sub_28284( ref cVar2, ref l_U520, 7, 1 );
                        sub_17576( ref l_U621, 15000 );
                    }
                    else if (l_U555)
                    {
                        SAY_AMBIENT_SPEECH( l_U566, "LISTEN_TO_RADIO", 0, 0, 0 );
                        l_U557 = l_U526;
                    }
                    else if (l_U557 < l_U526)
                    {
                        if (sub_22395( ref l_U526[l_U557], ref l_U514, 6, 1 ))
                        {
                            l_U556 = 1;
                            if (l_U557 == 0)
                            {
                                g_U39238++;
                                if (NOT l_U603)
                                {
                                    sub_17576( ref l_U612, 7000 );
                                }
                            }
                            PRINTSTRING( "Starting speech #1\n" );
                            l_U557++;
                        }
                    };;;
                }
            }
            else if ((NOT (sub_23524( l_U514 ))) AND ((sub_31213( ref l_U621 )) == 0))
            {
                if ((sub_23524( l_U520 )) || (IS_MESSAGE_BEING_DISPLAYED()))
                {
                    sub_17576( ref l_U621, 2500 );
                }
                else if ((l_U603) AND (NOT l_U580))
                {
                    l_U580 = sub_28284( ref cVar2, ref l_U520, 7, 1 );
                    sub_17576( ref l_U621, 15000 );
                }
                else if (NOT l_U555)
                {
                    if (l_U557 < l_U526)
                    {
                        if (sub_22395( ref l_U526[l_U557], ref l_U514, 6, 1 ))
                        {
                            l_U557++;
                            if ((NOT l_U603) AND (l_U557 == 0))
                            {
                                sub_17576( ref l_U612, 7000 );
                            }
                            PRINTSTRING( "Starting speech #2\n" );
                            l_U556 = 1;
                        }
                    }
                };;;
            }
        }
        l_U582 = 0;
        l_U585 = 0;
    }
    else if ((l_U556) AND (sub_23524( l_U514 )))
    {
        sub_3122( ref l_U514, 0 );
    }
    sub_17576( ref l_U621, 5000 );
    if (NOT (IS_VEH_DRIVEABLE( l_U573 )))
    {
        if (((NOT l_U582) AND (NOT (sub_23524( l_U520 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U566 ))))
        {
            if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U566, sub_3270(), 15, 15, 12, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3270() ))))
            {
                if (sub_22395( "E1A2_MALC", ref l_U520, 7, 1 ))
                {
                    l_U582 = 1;
                    if (DOES_VEHICLE_EXIST( l_U573 ))
                    {
                        TASK_LOOK_AT_VEHICLE( l_U566, l_U573, 10000, 0 );
                        uVar15 = {sub_26192( l_U573, 1 )};
                        TASK_TURN_CHAR_TO_FACE_COORD( l_U566, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                }
            }
        }
    }
    else if (NOT sub_28693())
    {
        if (NOT l_U585)
        {
            if ((((IS_CHAR_SITTING_IN_CAR( l_U566, l_U573 )) AND (IS_CHAR_SITTING_IN_CAR( l_U559, l_U573 ))) AND (NOT (IS_CHAR_SITTING_IN_CAR( sub_3270(), l_U573 )))) AND (NOT (IS_CAR_ON_FIRE( l_U573 ))))
            {
                l_U585 = sub_22395( "E1A2_GETOUT", ref l_U520, 7, 1 );
            }
        }
    };;;
    return;
}

void sub_45159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[3] uVar6;

    array(ref uVar6, 3);
    uVar6[0] = uParam0;
    uVar6[1] = uParam1;
    uVar6[2] = uParam2;
    return sub_27297( ref uVar6, uParam3 );
}

void sub_47865()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    string sVar8;
    string sVar9;

    if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (NOT (IS_CHAR_INJURED( l_U559 ))))
    {
        if (sub_45159( l_U559, l_U566, sub_3270(), 1 ))
        {
            if (NOT (DOES_OBJECT_EXIST( l_U575 )))
            {
                GET_WEAPONTYPE_MODEL( 7, ref uVar2 );
                if (NOT (HAS_MODEL_LOADED( uVar2 )))
                {
                    REQUEST_MODEL( uVar2 );
                }
                else
                {
                    uVar3 = {sub_35484( l_U566, 1 )};
                    CREATE_OBJECT( uVar2, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U575, 1 );
                    ATTACH_OBJECT_TO_PED( l_U575, l_U566, 1219, 0.09000000, 0.00000000, 0.00000000, 134.90000000, 0.00000000, 0.00000000, 1 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U566, 1 );
                }
            }
            GET_GAME_TIMER( ref uVar6 );
            GET_CHAR_SPEED( l_U566, ref uVar7 );
            if (sub_23524( l_U514 ))
            {
                sVar8 = nil;
                sVar9 = nil;
                if ((l_U701 != (sub_48150( l_U514 ))) AND (l_U557 > 0))
                {
                    l_U701 = sub_48150( l_U514 );
                    if (l_U558 == 0)
                    {
                        switch (l_U557 - 1)
                        {
                            case 1:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "of_course";
                                break;
                                case 3:
                                sVar8 = "nod_no";
                                break;
                                case 5:
                                sVar8 = "car_backchat_01_victim";
                                sVar9 = "car_backchat_01_perp";
                                break;
                            }
                            break;
                            case 2:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "of_course";
                                break;
                                case 4:
                                sVar8 = "car_backchat_02_victim";
                                sVar9 = "car_backchat_02_perp";
                                break;
                                case 6:
                                sVar8 = "you_will_love_this";
                                break;
                            }
                            break;
                            case 3:
                            switch (l_U701)
                            {
                                case 2:
                                sVar8 = "nod_no";
                                break;
                                case 8:
                                sVar8 = "dont_hit_me";
                                break;
                                case 9:
                                sVar8 = "car_backchat_01_victim";
                                sVar9 = "car_backchat_01_perp";
                                break;
                                case 11:
                                sVar8 = "dont_hit_me";
                                break;
                            }
                            break;
                            case 4:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "nod_no";
                                break;
                                case 6:
                                sVar8 = "dont_hit_me";
                                break;
                                case 9:
                                sVar8 = "car_backchat_02_victim";
                                sVar9 = "car_backchat_02_perp";
                                break;
                                case 11:
                                sVar8 = "nod_no";
                                break;
                                case 13:
                                sVar8 = "of_course";
                                break;
                            }
                            break;
                            case 5:
                            switch (l_U701)
                            {
                                case 2:
                                sVar8 = "of_course";
                                break;
                                case 6:
                                sVar8 = "nod_no";
                                break;
                            }
                            break;
                            case 6:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "of_course";
                                break;
                                case 4:
                                sVar8 = "dont_hit_me";
                                break;
                                case 5:
                                sVar8 = "nod_no";
                                break;
                                case 7:
                                sVar8 = "of_course";
                                break;
                            }
                            break;
                        }
                    }
                    else
                    {
                        switch (l_U557 - 1)
                        {
                            case 1:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "dont_hit_me";
                                break;
                                case 2:
                                sVar8 = "nod_no";
                                break;
                                case 4:
                                sVar8 = "car_backchat_01_victim";
                                sVar9 = "car_backchat_01_perp";
                                break;
                            }
                            break;
                            case 2:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "dont_hit_me";
                                break;
                                case 4:
                                sVar8 = "of_course";
                                break;
                                case 7:
                                sVar8 = "car_backchat_01_victim";
                                sVar9 = "car_backchat_01_perp";
                                break;
                            }
                            break;
                            case 3:
                            switch (l_U701)
                            {
                                case 0:
                                sVar8 = "car_backchat_02_victim";
                                sVar9 = "car_backchat_02_perp";
                                break;
                                case 4:
                                sVar8 = "dont_hit_me";
                                break;
                                case 7:
                                sVar8 = "of_course";
                                break;
                                case 1:
                                sVar8 = "car_backchat_01_victim";
                                sVar9 = "car_backchat_01_perp";
                                break;
                                case 13:
                                sVar8 = "dont_hit_me";
                                break;
                            }
                            break;
                            case 4:
                            switch (l_U701)
                            {
                                case 2:
                                sVar8 = "of_course";
                                break;
                                case 5:
                                sVar8 = "nod_no";
                                break;
                            }
                            break;
                            case 5:
                            switch (l_U701)
                            {
                                case 2:
                                sVar8 = "of_course";
                                break;
                                case 5:
                                sVar8 = "dont_hit_me";
                                break;
                            }
                            break;
                            case 6:
                            switch (l_U701)
                            {
                                case 2:
                                sVar8 = "nod_no";
                                break;
                                case 5:
                                sVar8 = "you_will_love_this";
                                break;
                                case 12:
                                sVar8 = "of_course";
                                break;
                                case 13:
                                sVar8 = "nod_no";
                                break;
                            }
                            break;
                        }
                    }
                    if (NOT (IS_STRING_NULL( sVar8 )))
                    {
                        TASK_PLAY_ANIM_UPPER_BODY( l_U559, sVar8, "MISSASHLEY_2", 8.00000000, 0, 0, 0, 0, 0 );
                    }
                    if (NOT (IS_STRING_NULL( sVar9 )))
                    {
                        TASK_PLAY_ANIM_UPPER_BODY( l_U566, sVar9, "MISSASHLEY_2", 8.00000000, 0, 0, 0, 0, 0 );
                    }
                }
            }
        }
        else if (DOES_OBJECT_EXIST( l_U575 ))
        {
            if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U566 ))) || (NOT (IS_OBJECT_ATTACHED( l_U575 ))))
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U566, 0 );
                DELETE_OBJECT( ref l_U575 );
            }
        }
    }
    return;
}

void sub_48150(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_23524( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_50451()
{
    float fVar2;
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;

    if (NOT l_U603)
    {
        if (NOT (IS_CHAR_IN_CAR( l_U559, l_U573 )))
        {
            l_U506 = 10;
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U573, -16.00000000, -16.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U559, uVar5._fU0, uVar5._fU4, uVar5._fU8, 4, -1, 8.00000000 );
            l_U603 = 1;
            SET_CHAR_IS_TARGET_PRIORITY( l_U559, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
            REMOVE_BLIP( l_U633 );
            sub_3122( ref l_U514, 0 );
            SET_CREATE_RANDOM_COPS( 0 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
        }
        else if (NOT (IS_CHAR_SITTING_IN_CAR( l_U559, l_U573 )))
        {
            GET_CHAR_SPEED( l_U559, ref fVar2 );
            GET_GAME_TIMER( ref iVar8 );
            if (((((fVar2 >= 1.00000000) AND (sub_50701())) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (NOT PLAYER_IS_INTERACTING_WITH_GARAGE())) AND ((iVar8 - l_U702) > 2000))
            {
                GET_SCRIPT_TASK_STATUS( l_U559, 30, ref iVar4 );
                if (iVar4 == 7)
                {
                    TASK_LEAVE_CAR_IMMEDIATELY( l_U559, l_U573 );
                    PRINTSTRING( "Giving Roman TASK_LEAVE_CAR_IMMEDIATELY\n" );
                }
            }
        }
        else if (sub_18492( ref l_U612 ))
        {
            GET_CHAR_SPEED( l_U559, ref fVar2 );
            if ((((fVar2 < 1.85000000) AND (sub_50701())) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (NOT PLAYER_IS_INTERACTING_WITH_GARAGE()))
            {
                GET_SCRIPT_TASK_STATUS( l_U559, 29, ref iVar4 );
                if (iVar4 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    if (IS_CHAR_IN_ANY_CAR( l_U559 ))
                    {
                        TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, sub_51064( l_U559 ) );
                    }
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    TASK_PERFORM_SEQUENCE( l_U559, uVar3 );
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    PLAY_AUDIO_EVENT_FROM_VEHICLE( "A2_KIDNAP_ROMAN_OPEN_DOOR", l_U573 );
                    TASK_LOOK_AT_CHAR( sub_3270(), l_U559, 9999999, 0 );
                    GET_GAME_TIMER( ref l_U702 );
                    PRINTSTRING( "Giving Roman TASK_LEAVE_CAR_DONT_CLOSE_DOOR\n" );
                }
            }
            else
            {
                sub_17576( ref l_U612, 1 );
            }
        };;;
    }
    return;
}

int sub_50701()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U573 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U573, -1.50000000, -0.90000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar5 = GET_CLOSEST_CAR( uVar2, 2.50000000, 0, 2149 );
        if (DOES_VEHICLE_EXIST( uVar5 ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_51064(unknown uParam0)
{
    unknown Result;

    if (sub_27322( uParam0, ref Result, 1 ))
    {
        return Result;
    }
    return nil;
}

void sub_51292()
{
    SWITCH_ROADS_OFF( 1040.57400000, 220.05160000, 20.67990000, 1075.57400000, 160.05160000, 40.67990000 );
    if (l_U679)
    {
        if (DOES_VEHICLE_EXIST( l_U681 ))
        {
            if (NOT (IS_CAR_DEAD( l_U681 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3270(), l_U681, 100.00000000, 100.00000000, 100.00000000, 0 )))
                {
                    sub_51422();
                }
            }
        }
    }
    else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1061.57400000, 203.05160000, 30.67990000, 85.00000000, 85.00000000, 85.00000000, 0 )) AND ((g_U39235) || (NOT l_U603)))
    {
        l_U679 = sub_51560();
    }
    return;
}

void sub_51422()
{
    if (NOT (IS_CHAR_INJURED( l_U682 )))
    {
        SET_CHAR_KEEP_TASK( l_U682, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U682 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U681 );
    return;
}

int sub_51560()
{
    unknown uVar2;

    if (NOT (HAS_MODEL_LOADED( l_U680 )))
    {
        PRIORITIZE_STREAMING_REQUEST();
        REQUEST_MODEL( l_U680 );
        return 0;
    }
    if (NOT (CAN_CREATE_RANDOM_CHAR( 1, 0 )))
    {
        return 0;
    }
    CLEAR_AREA_OF_CARS( 1061.57400000, 203.05160000, 30.67990000, 5.00000000 );
    CREATE_CAR( l_U680, 1061.57400000, 203.05160000, 30.67990000, ref l_U681, 1 );
    SET_CAR_HEADING( l_U681, 327.04050000 );
    SET_CAR_FORWARD_SPEED( l_U681, 15.00000000 );
    CREATE_RANDOM_CHAR_AS_DRIVER( l_U681, ref l_U682 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( 0, l_U681, 1065.49100000, 354.48760000, 28.45840000, 4, 20.00000000, 2, -1, -1 );
    TASK_CAR_DRIVE_WANDER( 0, l_U681, 10.00000000, 4 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    TASK_PERFORM_SEQUENCE( l_U682, uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U680 );
    return 1;
}

void sub_51868()
{
    SWITCH_ROADS_OFF( 1117.04000000, 293.36000000, 25.59000000, 1182.54000000, 310.57000000, 44.47000000 );
    if (l_U683)
    {
        if (DOES_VEHICLE_EXIST( l_U684 ))
        {
            if (NOT (IS_CAR_DEAD( l_U684 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3270(), l_U684, 120.00000000, 120.00000000, 120.00000000, 0 )))
                {
                    sub_51998();
                }
            }
        }
    }
    else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1134.21300000, 300.33060000, 30.62340000, 76.00000000, 76.00000000, 76.00000000, 0 )) AND ((g_U39235) || (NOT l_U603)))
    {
        l_U683 = sub_52136();
    }
    return;
}

void sub_51998()
{
    if (NOT (IS_CHAR_INJURED( l_U685 )))
    {
        SET_CHAR_KEEP_TASK( l_U685, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U685 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U684 );
    return;
}

int sub_52136()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;

    if (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        return 0;
    }
    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar2, ref iVar3 );
    if (iVar3 != 0)
    {
        sub_52206( "- no model in memory" );
        return 0;
    }
    CLEAR_AREA_OF_CARS( 1134.21300000, 300.33060000, 30.62340000, 3.00000000 );
    CREATE_CAR( uVar2, 1134.21300000, 300.33060000, 31.62340000, ref l_U684, 1 );
    SET_CAR_HEADING( l_U684, 95.33850000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U684 );
    SET_CAR_FORWARD_SPEED( l_U684, 10.00000000 );
    CREATE_RANDOM_CHAR_AS_DRIVER( l_U684, ref l_U685 );
    OPEN_SEQUENCE_TASK( ref uVar4 );
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( 0, l_U684, 1207.74200000, 384.63950000, 21.46430000, 4, 10.00000000, 2, -1, -1 );
    TASK_CAR_DRIVE_WANDER( 0, l_U684, 10.00000000, 4 );
    CLOSE_SEQUENCE_TASK( uVar4 );
    TASK_PERFORM_SEQUENCE( l_U685, uVar4 );
    CLEAR_SEQUENCE_TASK( uVar4 );
    return 1;
}

void sub_52206(unknown uParam0)
{
    sub_52227( uParam0, 0, 0, 0, 0, 0, 1 );
    return;
}

void sub_52227(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    while (l_U504 >= l_U363)
    {
        sub_52252();
    }
    sub_52472( ref l_U363[l_U504], uParam0, uParam1, uParam2, uParam3, uParam6 );
    l_U504++;
    GET_GAME_TIMER( ref iVar9 );
    l_U505 = iVar9 + 1600;
    return;
}

void sub_52252()
{
    int I;

    for ( I = 1; I <= (l_U363 - 1); I++ )
    {
        sub_52297( ref l_U363[I], ref l_U363[I - 1] );
    }
    sub_52390( ref l_U363[l_U363 - 1] );
    if (l_U504 > 0)
    {
        l_U504--;
    }
    return;
}

void sub_52297(int iParam0, int iParam1)
{
    iParam1->_fU4 = iParam0->_fU4;
    iParam1->_fU8 = iParam0->_fU8;
    iParam1->_fU12 = iParam0->_fU12;
    iParam1->_fU16 = {iParam0->_fU16};
    iParam1->_fU0 = iParam0->_fU0;
    return;
}

void sub_52390(int iParam0)
{
    iParam0->_fU0 = 0;
    return;
}

void sub_52472(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU4 = uParam1;
    iParam0->_fU8 = uParam2;
    iParam0->_fU12 = uParam3;
    iParam0->_fU16 = {uParam4};
    iParam0->_fU0 = uParam7;
    return;
}

void sub_52816()
{
    SWITCH_ROADS_OFF( 1150.93100000, 601.15120000, 30.66640000, 1245.84400000, 625.93300000, 45.17690000 );
    if (l_U686)
    {
        if (DOES_VEHICLE_EXIST( l_U687 ))
        {
            if (NOT (IS_CAR_DEAD( l_U687 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3270(), l_U687, 130.00000000, 130.00000000, 130.00000000, 0 )))
                {
                    sub_52946();
                }
            }
        }
    }
    else if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1162.16300000, 621.66230000, 37.69430000, 110.00000000, 110.00000000, 110.00000000, 0 )) AND ((g_U39235) || (NOT l_U603))) AND (NOT g_U39236))
    {
        l_U686 = sub_53093();
    }
    return;
}

void sub_52946()
{
    if (NOT (IS_CHAR_INJURED( l_U688 )))
    {
        SET_CHAR_KEEP_TASK( l_U688, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U687 );
    return;
}

int sub_53093()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;

    iVar2 = 1938952078;
    if (NOT (HAS_MODEL_LOADED( iVar2 )))
    {
        PRIORITIZE_STREAMING_REQUEST();
        REQUEST_MODEL( iVar2 );
        return 0;
    }
    if (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        return 0;
    }
    CLEAR_AREA_OF_CARS( 1165.16300000, 621.66230000, 37.69430000, 3.00000000 );
    CREATE_CAR( iVar2, 1165.16300000, 621.66230000, 37.69430000, ref l_U687, 1 );
    SET_CAR_HEADING( l_U687, 273.47860000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U687 );
    SET_CAR_FORWARD_SPEED( l_U687, 20.00000000 );
    CREATE_RANDOM_CHAR_AS_DRIVER( l_U687, ref l_U688 );
    OPEN_SEQUENCE_TASK( ref uVar4 );
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( 0, l_U687, 1261.80300000, 527.66280000, 27.82410000, 4, 20.00000000, 2, -1, -1 );
    TASK_CAR_DRIVE_WANDER( 0, l_U687, 20.00000000, 4 );
    CLOSE_SEQUENCE_TASK( uVar4 );
    TASK_PERFORM_SEQUENCE( l_U688, uVar4 );
    CLEAR_SEQUENCE_TASK( uVar4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar2 );
    SWITCH_CAR_SIREN( l_U687, 1 );
    g_U39236 = 1;
    return 1;
}

void sub_53430()
{
    int iVar2;

    SWITCH_ROADS_OFF( 1271.27300000, 975.18850000, 12.68010000, 1363.77100000, 999.13280000, 12.60220000 );
    if (l_U689)
    {
        if (DOES_VEHICLE_EXIST( l_U691 ))
        {
            if (NOT (IS_CAR_DEAD( l_U691 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3270(), l_U691, 120.00000000, 120.00000000, 120.00000000, 0 )))
                {
                    sub_53560();
                }
                else if ((NOT (IS_CHAR_INJURED( l_U692 ))) AND (IS_VEH_DRIVEABLE( l_U691 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U692, 29, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        TASK_CAR_DRIVE_WANDER( l_U692, l_U691, 15.00000000, 0 );
                        SET_CHAR_KEEP_TASK( l_U692, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U692 );
                        l_U692 = nil;
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U691 );
                        l_U691 = nil;
                    }
                }
            }
        }
    }
    else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1361.27300000, 980.18850000, 12.68010000, 120.00000000, 120.00000000, 120.00000000, 0 )) AND ((g_U39235) || (NOT l_U603)))
    {
        l_U689 = sub_53829();
    }
    return;
}

void sub_53560()
{
    if (NOT (IS_CHAR_INJURED( l_U692 )))
    {
        SET_CHAR_KEEP_TASK( l_U692, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U692 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U691 );
    return;
}

int sub_53829()
{
    unknown uVar2;

    if (NOT (HAS_MODEL_LOADED( l_U690 )))
    {
        PRIORITIZE_STREAMING_REQUEST();
        REQUEST_MODEL( l_U690 );
        return 0;
    }
    if (NOT (CAN_CREATE_RANDOM_CHAR( 1, 0 )))
    {
        return 0;
    }
    CLEAR_AREA_OF_CARS( 1271.27300000, 980.18850000, 12.68010000, 5.00000000 );
    CREATE_CAR( l_U690, 1271.27300000, 980.18850000, 12.68010000, ref l_U691, 1 );
    SET_CAR_HEADING( l_U691, 270.28560000 );
    SET_CAR_FORWARD_SPEED( l_U691, 15.00000000 );
    CREATE_RANDOM_CHAR_AS_DRIVER( l_U691, ref l_U692 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( 0, l_U691, 1361.77100000, 997.13280000, 12.60220000, 4, 15.00000000, 4, 10, -2 );
    TASK_CAR_TEMP_ACTION( 0, l_U691, 24, 10000 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    TASK_PERFORM_SEQUENCE( l_U692, uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U690 );
    return 1;
}

void sub_54135()
{
    if (l_U693)
    {
        if (DOES_VEHICLE_EXIST( l_U694 ))
        {
            if (NOT (IS_CAR_DEAD( l_U694 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3270(), l_U694, 130.00000000, 130.00000000, 130.00000000, 0 )))
                {
                    sub_54228();
                }
            }
        }
    }
    else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1404.05900000, 1570.27900000, 2.77820000, 120.00000000, 120.00000000, 120.00000000, 0 )) AND ((g_U39235) || (NOT l_U603)))
    {
        l_U693 = sub_54366();
    }
    return;
}

void sub_54228()
{
    if (NOT (IS_CHAR_INJURED( l_U695 )))
    {
        SET_CHAR_KEEP_TASK( l_U695, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U695 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U694 );
    return;
}

int sub_54366()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;

    iVar2 = -119658072;
    if (NOT (HAS_MODEL_LOADED( iVar2 )))
    {
        PRIORITIZE_STREAMING_REQUEST();
        REQUEST_MODEL( iVar2 );
        return 0;
    }
    if (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        return 0;
    }
    CREATE_CAR( iVar2, 1404.05900000, 1570.27900000, 2.77820000, ref l_U694, 1 );
    SET_CAR_HEADING( l_U694, 273.10880000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U694 );
    CREATE_RANDOM_CHAR_AS_DRIVER( l_U694, ref l_U695 );
    OPEN_SEQUENCE_TASK( ref uVar4 );
    TASK_CAR_TEMP_ACTION( 0, l_U694, 24, 500 );
    TASK_CAR_TEMP_ACTION( 0, l_U694, 9, 2000 );
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( 0, l_U694, 1424.52100000, 1703.82100000, 15.69080000, 4, 20.00000000, 2, -2, -2 );
    TASK_CAR_DRIVE_WANDER( 0, l_U694, 20.00000000, 0 );
    CLOSE_SEQUENCE_TASK( uVar4 );
    TASK_PERFORM_SEQUENCE( l_U695, uVar4 );
    CLEAR_SEQUENCE_TASK( uVar4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar2 );
    return 1;
}

void sub_54685()
{
    int iVar2;

    sub_44750();
    if ((IS_CHAR_INJURED( l_U559 )) AND (IS_CHAR_INJURED( l_U566 )))
    {
        PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        REMOVE_BLIP( l_U561 );
        l_U506 = 14;
    }
    else if (IS_CHAR_INJURED( l_U559 ))
    {
        PRINT_NOW( "A2_ROM_DD", 7500, 0 );
        REMOVE_BLIP( l_U561 );
        l_U506 = 14;
    }
    else if (IS_CHAR_INJURED( l_U566 ))
    {
        PRINT_NOW( "A2_MALC_DD", 7500, 0 );
        l_U506 = 14;
    }
    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 120.00000000, 120.00000000, 120.00000000, 0 )))
    {
        PRINT_NOW( "A2_ROM_ESC", 7500, 0 );
        l_U605 = 1;
        l_U506 = 14;
    }
    else if (NOT (IS_VEH_DRIVEABLE( l_U573 )))
    {
        if (l_U607 == 0)
        {
            PRINT_NOW( "A2_MALC_CD", 7500, 0 );
        }
        else
        {
            PRINT_NOW( "A2_CAR_CD", 7500, 0 );
        }
        l_U506 = 14;
    }
    else if ((((CHECK_STUCK_TIMER( l_U573, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U573, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U573, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U573, 0, 5000 )))
    {
        l_U606 = 1;
        if (sub_23524( l_U514 ))
        {
            sub_3122( ref l_U514, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U566 )))
        {
            if (l_U607 == 0)
            {
                PRINT( "A2_MALC_CD", 7500, 0 );
            }
            else
            {
                PRINT( "A2_CAR_CD", 7500, 0 );
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 0 );
        }
        l_U506 = 14;
    }
    else if (HAS_CAR_BEEN_RESPRAYED( l_U573 ))
    {
        if (DOES_CHAR_EXIST( l_U559 ))
        {
            DELETE_CHAR( ref l_U559 );
            REMOVE_BLIP( l_U561 );
            sub_3122( ref l_U520, 1 );
        }
        while ((IS_MESSAGE_BEING_DISPLAYED()) AND (NOT IS_SCREEN_FADED_IN()))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "A2_ROM_ESC", 7500, 0 );
        l_U605 = 1;
        l_U506 = 14;
    }
    else if (sub_55424( l_U559 ))
    {
        sub_26415( ref l_U514 );
        REMOVE_BLIP( l_U633 );
        l_U506 = 11;
    }
    else
    {
        sub_55571();
        if ((IS_CHAR_IN_CAR( sub_3270(), l_U573 )) AND (IS_CHAR_IN_CAR( l_U559, l_U573 )))
        {
            CLEAR_CHAR_TASKS( l_U559 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
            SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U559, 1 );
            SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U566, 1 );
            REMOVE_ANIMS( "move_m@roman_scared" );
            REMOVE_CHAR_FROM_GROUP( l_U559 );
            REMOVE_BLIP( l_U561 );
            REMOVE_BLIP( l_U571 );
            sub_26001( 6 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            TASK_CLEAR_LOOK_AT( sub_3270() );
            l_U580 = 0;
            l_U506 = 9;
        }
        else if (NOT (IS_CHAR_IN_CAR( l_U566, l_U573 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U566, 11, ref iVar2 );
            if (iVar2 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( l_U566, l_U573, -2, 2 );
            }
        }
        sub_56726();
        sub_60723();;
    };;;;;;;;
    return;
}

int sub_55424(unknown uParam0)
{
    if ((IS_CHAR_IN_AREA_3D( uParam0, 1220.57000000, 1361.83000000, 15.42000000, 1277.99000000, 1494.83000000, 25.44000000, 0 )) AND (NOT (IS_CHAR_IN_AREA_3D( uParam0, 1219.27000000, 1473.03000000, 15.42000000, 1257.42000000, 1494.83000000, 25.44000000, 0 ))))
    {
        return 1;
    }
    return 0;
}

void sub_55571()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_GAME_TIMER( ref iVar2 );
    if (((l_U560 == 1) AND (NOT (sub_23524( l_U520 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U566 ))))
    {
        if ((((sub_55627()) AND (NOT l_U584)) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 20, 20, 20, 0 ))) AND (TIMERA() > 4000))
        {
            if (sub_22395( "E1A2_TARGET", ref l_U520, 7, 1 ))
            {
                l_U627 = iVar2;
                l_U584 = 1;
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U559, sub_3270(), 25, 25, 25, 0 ))
        {
            if ((l_U627 + 18000) < iVar2)
            {
                if (sub_22395( "E1A2_RUNS2", ref l_U520, 7, 1 ))
                {
                    l_U627 = iVar2;
                }
            }
        }
        else if (sub_27267( sub_3270(), l_U566, 1 ))
        {
            if ((l_U627 + 18000) < iVar2)
            {
                if (sub_22395( "E1A2_GETR", ref l_U520, 7, 1 ))
                {
                    l_U627 = iVar2;
                }
            }
        }
        else if (NOT (IS_VEH_DRIVEABLE( l_U567 )))
        {
            if (NOT l_U582)
            {
                if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U566, sub_3270(), 15, 15, 15, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3270() ))))
                {
                    if (sub_22395( "E1A2_MALC", ref l_U520, 7, 1 ))
                    {
                        l_U582 = 1;
                        if (DOES_VEHICLE_EXIST( l_U567 ))
                        {
                            TASK_LOOK_AT_VEHICLE( l_U566, l_U567, 10000, 0 );
                            uVar3 = {sub_26192( l_U567, 1 )};
                            TASK_TURN_CHAR_TO_FACE_COORD( l_U566, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                        }
                        l_U627 = iVar2;
                    }
                }
            }
        };;;;
    }
    return;
}

int sub_55627()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;

    if (((sub_55647( sub_3270(), l_U559, 1 )) < 12.00000000) AND ((IS_PLAYER_TARGETTING_CHAR( sub_5259(), l_U559 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5259(), l_U559 ))))
    {
        return 1;
    }
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U559, sub_3270(), 0 )) AND (NOT (IS_CHAR_HEALTH_GREATER( l_U559, 150 ))))
    {
        return 1;
    }
    if (((sub_55647( sub_3270(), l_U559, 1 )) < 15.00000000) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U559, sub_3270(), 0 )))
    {
        return 1;
    }
    uVar2 = {sub_35484( l_U559, 1 )};
    if (IS_BULLET_IN_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 1 ))
    {
        return 1;
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U559, sub_3270(), 0 ))
    {
        for ( I = 1; I <= 44; I++ )
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U559, I ))
            {
                return 1;
            }
        }
    }
    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U559 );
    CLEAR_CHAR_LAST_WEAPON_DAMAGE( l_U559 );
    return 0;
}

void sub_55647(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_35484( uParam0, uParam2 ), sub_35484( uParam1, uParam2 ) );
}

void sub_56726()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int iVar16;
    int iVar17;

    array(ref cVar7, 2);
    GET_GAME_TIMER( ref iVar16 );
    iVar17 = 0;
    switch (l_U560)
    {
        case 0:
        if (NOT l_U577)
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U559 )))
            {
                StrCopy( ref cVar7[0], "E1A2_RUNS", 16 );
                StrCopy( ref cVar7[1], "E1A2_CAR", 16 );
                l_U577 = sub_28284( ref cVar7, ref l_U520, 8, 1 );
                if (l_U577)
                {
                    GET_GAME_TIMER( ref l_U627 );
                }
                SET_CHAR_PROOFS( l_U559, 0, 0, 0, 1, 0 );
            }
        }
        else if ((NOT (sub_23524( l_U514 ))) AND (NOT (sub_23524( l_U520 ))))
        {
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_CHAR_NEVER_TARGETTED( l_U559, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U559, 1 );
            SETTIMERA( 0 );
            l_U560 = 1;
        }
        GET_SCRIPT_TASK_STATUS( l_U559, 27, ref iVar6 );
        if (iVar6 == 7)
        {
            sub_57017();
            SETTIMERB( 0 );
        }
        else if ((GET_NAVMESH_ROUTE_RESULT( l_U559 )) == 2)
        {
            sub_57017();
            SETTIMERB( 0 );
        }
        else if (TIMERB() > 3000)
        {
            sub_57017();
            SETTIMERB( 0 );
        };;;;
        break;
        case 1:
        if (TIMERA() > 4000)
        {
            SET_CHAR_PROOFS( l_U559, 0, 0, 0, 0, 0 );
        }
        if (NOT l_U699)
        {
            if ((sub_55627()) AND (TIMERA() > 4000))
            {
                if ((sub_57246( sub_35484( l_U559, 1 ), 25.00000000 )) AND (IS_CHAR_IN_CAR( sub_3270(), l_U573 )))
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_5259(), 1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5259() );
                }
                sub_17576( ref l_U615, 10000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
                uVar2 = {sub_26192( l_U573, 1 )};
                OPEN_SEQUENCE_TASK( ref uVar5 );
                TASK_LOOK_AT_CHAR( 0, sub_3270(), 3000, 0 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                TASK_STAND_STILL( 0, 500 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                SETTIMERB( 0 );
                l_U699 = 1;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U559, 27, ref iVar6 );
                if (iVar6 == 7)
                {
                    sub_57017();
                    SETTIMERB( 0 );
                }
                else if ((GET_NAVMESH_ROUTE_RESULT( l_U559 )) == 2)
                {
                    sub_57017();
                    SETTIMERB( 0 );
                }
                else if (TIMERB() > 3000)
                {
                    sub_57017();
                    SETTIMERB( 0 );
                };;;
            }
        }
        else if (NOT (HAVE_ANIMS_LOADED( "move_m@roman_scared" )))
        {
            PRIORITIZE_STREAMING_REQUEST();
            REQUEST_ANIMS( "move_m@roman_scared" );
        }
        else if ((sub_37805( l_U559, 29 )) || (TIMERB() > 5000))
        {
            if ((NOT (IS_PED_RAGDOLL( l_U559 ))) AND (NOT (IS_CHAR_GETTING_UP( l_U559 ))))
            {
                SET_ANIM_GROUP_FOR_CHAR( l_U559, "move_m@roman_scared" );
                SET_CHAR_PROOFS( l_U559, 0, 0, 0, 0, 0 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                uVar2 = {sub_26192( l_U573, 1 )};
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -2, 8.00000000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U573, -2, 1 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                l_U560 = 2;
            }
        };;;
        break;
        case 2:
        if (NOT l_U583)
        {
            if (((NOT (sub_23524( l_U520 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U559 )))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 25, 25, 25, 0 )))
            {
                l_U583 = sub_22395( "E1A2_SUBMIT", ref l_U520, 7, 1 );
            }
        }
        else if ((IS_CHAR_SITTING_IN_CAR( l_U559, l_U573 )) AND (l_U603))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
            GET_SCRIPT_TASK_STATUS( l_U559, 0, ref iVar6 );
            if (iVar6 == 7)
            {
                TASK_PAUSE( l_U559, 1000 );
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U559, l_U573, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U559, 29, ref iVar6 );
            if (iVar6 == 7)
            {
                if (IS_GROUP_MEMBER( l_U559, sub_30512() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U559 );
                }
                OPEN_SEQUENCE_TASK( ref uVar5 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U573, -2, 1 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U559, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
            }
            else if (NOT l_U578)
            {
                if ((LOCATE_CHAR_IN_CAR_CHAR_3D( l_U566, sub_3270(), 20.00000000, 20.00000000, 20.00000000, 0 )) AND (NOT sub_28693()))
                {
                    TASK_LOOK_AT_CHAR( l_U566, l_U559, 10000, 0 );
                    StrCopy( ref cVar7[0], "E1A2_GETIN", 16 );
                    StrCopy( ref cVar7[1], "E1A2_CHUB", 16 );
                    l_U578 = sub_28284( ref cVar7, ref l_U520, 7, 1 );
                }
            }
        }
        else if (NOT l_U610)
        {
            if (((GET_NAVMESH_ROUTE_RESULT( l_U559 )) == 2) || ((GET_NAVMESH_ROUTE_RESULT( l_U559 )) == 0))
            {
                PRINTSTRING( "Roman can't find a navmesh route\n" );
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 12, 12, 12, 0 ))
                {
                    CLEAR_CHAR_TASKS( l_U559 );
                    SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U559, 0 );
                    SET_GROUP_MEMBER( sub_30512(), l_U559 );
                    SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U559, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U559, 1 );
                    PRINTSTRING( "Setting Roman as group member\n" );
                }
                else
                {
                    TASK_GO_TO_CHAR( l_U559, sub_3270(), -2, 8.00000000 );
                    REMOVE_BLIP( l_U571 );
                    if (NOT (DOES_BLIP_EXIST( l_U561 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
                        SET_BLIP_AS_FRIENDLY( l_U561, 1 );
                    }
                    if ((NOT l_U588) AND (NOT sub_28693()))
                    {
                        PRINT_NOW( "A2_ROM_ES3", 7500, 0 );
                        l_U588 = 1;
                    }
                    PRINTSTRING( "Too far to set Roman as group memebr\n" );
                }
                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U559, -1 );
                l_U610 = 1;
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( l_U559 )) == 1)
            {
                PRINTSTRING( "Roman's navmesh route not yet tried\n" );
            }
            else if (IS_GROUP_MEMBER( l_U559, sub_30512() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U559 );
            }
            GET_SCRIPT_TASK_STATUS( l_U559, 29, ref iVar6 );
            if (iVar6 == 7)
            {
                OPEN_SEQUENCE_TASK( ref uVar5 );
                uVar2 = {sub_26192( l_U573, 1 )};
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -2, 8.00000000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U573, -2, 1 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                PRINTSTRING( "Giving Roman task to go to car\n" );
            }
            if (IS_CHAR_IN_CAR( sub_3270(), l_U573 ))
            {
                REMOVE_BLIP( l_U571 );
                if (NOT (DOES_BLIP_EXIST( l_U561 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
                    SET_BLIP_AS_FRIENDLY( l_U561, 1 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 12, 12, 12, 0 )))
                {
                    if ((NOT l_U588) AND (NOT sub_28693()))
                    {
                        PRINT_NOW( "A2_ROM_ES3", 7500, 0 );
                        l_U588 = 1;
                    }
                }
            }
            else
            {
                REMOVE_BLIP( l_U561 );
                if (NOT (DOES_BLIP_EXIST( l_U571 )))
                {
                    ADD_BLIP_FOR_CAR( l_U573, ref l_U571 );
                    SET_BLIP_AS_FRIENDLY( l_U571, 1 );
                }
                if ((NOT l_U586) AND (NOT sub_28693()))
                {
                    PRINT_NOW( "A2_ROM_2CR", 7500, 0 );
                    l_U586 = 1;
                }
            };;;
        }
        else if (IS_GROUP_MEMBER( l_U559, sub_30512() ))
        {
            if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U559, l_U573, 38.00000000, 38.00000000, 38.00000000, 0 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U559 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                uVar2 = {sub_26192( l_U573, 1 )};
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -2, 8.00000000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U573, -2, 1 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U559, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
                PRINTSTRING( "Roman is in range of car\n" );
                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U559, 1 );
                l_U610 = 0;
            }
            else
            {
                SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U559, 0 );
                if (IS_CHAR_IN_CAR( sub_3270(), l_U573 ))
                {
                    REMOVE_BLIP( l_U561 );
                    if (NOT (DOES_BLIP_EXIST( l_U571 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U573, ref l_U571 );
                        SET_BLIP_AS_FRIENDLY( l_U571, 1 );
                    }
                    if ((NOT l_U588) AND (NOT sub_28693()))
                    {
                        PRINT_NOW( "A2_ROM_ES3", 7500, 0 );
                        l_U588 = 1;
                    }
                }
                else
                {
                    REMOVE_BLIP( l_U561 );
                    if (NOT (DOES_BLIP_EXIST( l_U571 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U573, ref l_U571 );
                        SET_BLIP_AS_FRIENDLY( l_U571, 1 );
                    }
                    if ((NOT l_U586) AND (NOT sub_28693()))
                    {
                        PRINT_NOW( "A2_ROM_2CR", 7500, 0 );
                        l_U586 = 1;
                    }
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3270(), l_U559, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            CLEAR_CHAR_TASKS( l_U559 );
            SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U559, 0 );
            SET_GROUP_MEMBER( sub_30512(), l_U559 );
            SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U559, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U559, 1 );
            PRINTSTRING( "Setting Roman as group member\n" );
        }
        else
        {
            REMOVE_BLIP( l_U571 );
            if (NOT (DOES_BLIP_EXIST( l_U561 )))
            {
                ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
                SET_BLIP_AS_FRIENDLY( l_U561, 1 );
            }
            if (NOT l_U588)
            {
                PRINT_NOW( "A2_ROM_ES3", 7500, 0 );
                l_U588 = 1;
            }
        };;;
        if (NOT (IS_PED_LOOKING_AT_PED( sub_3270(), l_U559 )))
        {
            TASK_LOOK_AT_CHAR( sub_3270(), l_U559, 9999999, 0 );
        }
        iVar17 = sub_55627();
        if (((iVar17) || ((iVar16 - l_U628) > 15000)) AND (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U559, sub_3270(), 25, 25, 25, 0 )))
        {
            if ((IS_CHAR_PLAYING_ANIM( l_U559, "MISSASHLEY_2", "roman_plead" )) || (sub_28693()))
            {
                GET_GAME_TIMER( ref l_U628 );
            }
            else if ((iVar17) AND ((iVar16 - l_U628) < 5000))
            {
                ;
            }
            else if (NOT l_U578)
            {
                if (sub_22395( "E1A2_NAG", ref l_U520, 7, 1 ))
                {
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U559, "roman_plead", "MISSASHLEY_2", 8.00000000, 0, 0, 0, 0, 0 );
                    TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 5000, 0 );
                    GET_GAME_TIMER( ref l_U628 );
                }
            };;;
        };;;;
        break;
    }
    return;
}

void sub_57017()
{
    int iVar2;

    GET_SCRIPT_TASK_STATUS( l_U559, 25, ref iVar2 );
    if (iVar2 == 7)
    {
        TASK_SMART_FLEE_CHAR( l_U559, sub_3270(), 200.00000000, -1 );
    }
    return;
}

int sub_57246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 29 );
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
    END_CHAR_SEARCH_CRITERIA();
    if (((((IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3 )) || (GET_CLOSEST_CHAR( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1, 1, ref uVar6 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 2313.56400000, 329.26040000, 5.62550000, 30, 50, 2.50000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 555.74960000, 748.71250000, 20.64650000, 30, 50, 2.50000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3270(), 1356.29000000, 995.31000000, 13.38000000, 25, 25, 2.50000000, 0 )))
    {
        return 1;
    }
    return 0;
}

void sub_60723()
{
    int iVar2;

    if (IS_GROUP_MEMBER( l_U559, sub_30512() ))
    {
        if (((NOT (DOES_BLIP_EXIST( l_U571 ))) AND (NOT (IS_CHAR_IN_CAR( sub_3270(), l_U573 )))) AND (NOT (IS_CHAR_IN_CAR( l_U559, l_U573 ))))
        {
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U561 );
            ADD_BLIP_FOR_CAR( l_U573, ref l_U571 );
            SET_BLIP_AS_FRIENDLY( l_U571, 1 );
            l_U586 = 1;
            l_U587 = 0;
            l_U588 = 0;
            l_U589 = 0;
        }
        if ((((DOES_BLIP_EXIST( l_U571 )) AND (NOT (DOES_BLIP_EXIST( l_U561 )))) AND (IS_CHAR_IN_CAR( sub_3270(), l_U573 ))) AND (NOT (IS_CHAR_IN_CAR( l_U559, l_U573 ))))
        {
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U571 );
            ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
            SET_BLIP_AS_FRIENDLY( l_U561, 1 );
            l_U586 = 0;
            l_U587 = 0;
            l_U588 = 0;
            l_U589 = 1;
        }
    }
    else if ((NOT (DOES_BLIP_EXIST( l_U561 ))) AND ((l_U560 == 1) || (l_U560 == 0)))
    {
        REMOVE_BLIP( l_U633 );
        REMOVE_BLIP( l_U571 );
        ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
        SET_BLIP_AS_FRIENDLY( l_U561, 1 );
        l_U586 = 0;
        l_U587 = 1;
        l_U588 = 0;
        l_U589 = 0;
    }
    else if ((NOT (DOES_BLIP_EXIST( l_U561 ))) AND (NOT (IS_CHAR_IN_CAR( l_U559, l_U573 ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U559, 29, ref iVar2 );
        if (iVar2 == 7)
        {
            REMOVE_BLIP( l_U633 );
            REMOVE_BLIP( l_U571 );
            ADD_BLIP_FOR_CHAR( l_U559, ref l_U561 );
            SET_BLIP_AS_FRIENDLY( l_U561, 1 );
            l_U586 = 0;
            l_U587 = 0;
            l_U588 = 1;
            l_U589 = 0;
        }
    };;;
    if (NOT (sub_23524( l_U520 )))
    {
        if ((l_U586) AND (l_U638 == 1))
        {
            PRINT_NOW( "A2_ROM_2CR", 7500, 0 );
            l_U586 = 0;
            l_U638 = 0;
        }
        if (((l_U587) AND (l_U560 == 1)) AND (l_U641 == 1))
        {
            PRINT_NOW( "A2_ROM_ES2", 7500, 0 );
            l_U587 = 0;
            l_U641 = 0;
        }
        if ((l_U588) AND (l_U640 == 1))
        {
            PRINT_NOW( "A2_ROM_ES3", 7500, 0 );
            l_U588 = 0;
            l_U640 = 0;
        }
        if ((l_U589) AND (l_U639 == 1))
        {
            PRINT_NOW( "A2_ROM_ES4", 7500, 0 );
            l_U589 = 0;
            l_U639 = 0;
        }
    }
    return;
}

void sub_61634()
{
    CLEAR_WANTED_LEVEL( sub_5259() );
    WAIT( 1600 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    DELETE_CHAR( ref l_U559 );
    if (IS_CHAR_INJURED( l_U566 ))
    {
        DELETE_CHAR( ref l_U566 );
        if (DOES_VEHICLE_EXIST( l_U573 ))
        {
            DELETE_CAR( ref l_U573 );
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U573 )))
    {
        sub_16403( ref l_U573 );
        SET_CAR_COORDINATES( l_U573, 1272.43200000, 1489.37800000, 16.27830000 );
        SET_VEHICLE_QUATERNION( l_U573, 0.00010000, -0.00010000, 0.67170000, 0.74080000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U573 );
        SET_CAR_CAN_BE_DAMAGED( l_U573, 0 );
        LOCK_CAR_DOORS( l_U573, 2 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U566 );
        WARP_CHAR_INTO_CAR( l_U566, l_U573 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U566, 1 );
        SET_CHAR_INVINCIBLE( l_U566, 1 );
    }
    else if (DOES_VEHICLE_EXIST( l_U573 ))
    {
        DELETE_CAR( ref l_U573 );
    };;;
    CLEAR_AREA( 1258.16700000, 1479.99000000, 15.76780000, 15.00000000, 1 );
    sub_11080( "AB03_ZA" );
    SET_CHAR_COORDINATES( sub_3270(), 1258.16700000, 1479.99000000, 15.76780000 );
    SET_CHAR_HEADING( sub_3270(), 66.18650000 );
    SET_PLAYER_CONTROL( sub_5259(), 1 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    WAIT( 1600 );
    return;
}

void sub_62562(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_62606( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_62606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
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
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_63321(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U38680._fU0 = uParam0;
    g_U38680._fU4 = iParam1;
    g_U38680._fU8 = uParam2;
    g_U38680._fU12 = 0;
    if (g_U12303)
    {
        g_U38680._fU12 = 1;
    }
    return;
}

void sub_63512()
{
    unknown uVar2;
    unknown uVar3;
    boolean bVar4;

    sub_12208( 15 );
    sub_63528( 1 );
    sub_16806( -254.29610000, 1455.58300000, 19.43900000, 178.72920000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    if (l_U512 == sub_63950())
    {
        CLEAR_AREA( -256.81010000, 1446.49700000, 19.33100000, 3.00000000, 1 );
        while (NOT (sub_64029( ref uVar3, -256.81010000, 1446.49700000, 19.33100000, 0.19580000 )))
        {
            WAIT( 0 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            SET_CAR_ON_GROUND_PROPERLY( uVar3 );
        }
        WAIT( 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
    }
    sub_14748( 15, ref l_U566, -254.61000000, 1454.33000000, 19.43860000, 351.40590000 );
    sub_11753( 1, l_U566, "MALC", 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
    sub_16247( 15 );
    TASK_CHAT_WITH_CHAR( l_U566, sub_3270(), 1, 0 );
    TASK_CHAT_WITH_CHAR( sub_3270(), l_U566, 0, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, -254.99180000, 1456.10600000, 21.03520000 );
    SET_CAM_ROT( l_U574, -5.31274500, 0.00000000, -151.37140000 );
    SET_CAM_FOV( l_U574, 45.00000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, -254.61000000, 1454.33000000, 19.43860000, 1.50000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    sub_25829( 500 );
    if (l_U605)
    {
        while (NOT (sub_22395( "E1A2_DROP3", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    else
    {
        while (NOT (sub_22395( "E1A2_DROP2", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    SETTIMERA( 0 );
    bVar4 = true;
    while (bVar4)
    {
        WAIT( 0 );
        if (l_U629 == 0)
        {
            if (TIMERA() > 4000)
            {
                SET_CAM_POS( l_U574, -248.08880000, 1457.17100000, 19.75636000 );
                SET_CAM_ROT( l_U574, 9.39249700, 0.00000000, 114.58420000 );
                SET_CAM_FOV( l_U574, 40.00000000 );
                SET_CAM_DOF_FOCUSPOINT( l_U574, -254.29610000, 1455.58300000, 19.43900000, 1.50000000 );
                l_U629 = 1;
            }
        }
        else if ((l_U629 == 1) AND (TIMERA() > 5500))
        {
            TASK_LOOK_AT_COORD( sub_3270(), -253.20000000, 1453.15000000, 19.44000000, 3000, 0 );
            l_U629 = 2;
        }
        if (NOT (sub_23524( l_U514 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U566 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U566, -251.40000000, 1440.31000000, 19.43000000, 2, -1 );
            }
            bVar4 = false;
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar4 = false;
        }
    }
    sub_3548( 500 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    SET_CHAR_HEADING( sub_3270(), 90.00000000 );
    sub_65083( 0 );
    return;
}

void sub_63528(unknown uParam0)
{
    REMOVE_BLIP( l_U561 );
    REMOVE_BLIP( l_U572 );
    REMOVE_BLIP( l_U571 );
    sub_3122( ref l_U514, 0 );
    sub_3122( ref l_U520, 0 );
    if (DOES_OBJECT_EXIST( l_U575 ))
    {
        DELETE_OBJECT( ref l_U575 );
    }
    WAIT( 0 );
    sub_39563();
    SET_PLAYER_CONTROL( sub_5259(), 0 );
    sub_3548( 500 );
    CLEAR_AREA( 1221.88400000, 81.87570000, 36.51760000, 50.00000000, 1 );
    CLEAR_AREA( -255.42440000, 1455.54400000, 19.33990000, 50.00000000, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    ALTER_WANTED_LEVEL( sub_5259(), 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3270(), 1 );
    SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    if (DOES_CHAR_EXIST( l_U566 ))
    {
        DELETE_CHAR( ref l_U566 );
    }
    if ((DOES_VEHICLE_EXIST( l_U567 )) AND (uParam0))
    {
        DELETE_CAR( ref l_U567 );
    }
    if ((DOES_VEHICLE_EXIST( l_U564 )) AND (uParam0))
    {
        DELETE_CAR( ref l_U564 );
    }
    if (DOES_CHAR_EXIST( l_U559 ))
    {
        DELETE_CHAR( ref l_U559 );
    }
    return;
}

int sub_63950()
{
    return 301427732;
}

int sub_64029(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_63950();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_13086( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_65083(boolean bParam0)
{
    if (bParam0)
    {
        CLEAR_CHAR_TASKS( sub_3270() );
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    }
    SET_PLAYER_CONTROL( sub_5259(), 1 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    sub_3122( ref l_U514, 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3270(), 0 );
    if (DOES_CHAR_EXIST( l_U566 ))
    {
        DELETE_CHAR( ref l_U566 );
    }
    if ((DOES_VEHICLE_EXIST( l_U567 )) AND (NOT bParam0))
    {
        DELETE_CAR( ref l_U567 );
    }
    if (DOES_CHAR_EXIST( l_U559 ))
    {
        DELETE_CHAR( ref l_U559 );
    }
    if ((DOES_VEHICLE_EXIST( l_U564 )) AND (NOT bParam0))
    {
        DELETE_CAR( ref l_U564 );
    }
    if (DOES_VEHICLE_EXIST( l_U568 ))
    {
        DELETE_CAR( ref l_U568 );
    }
    SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_3270() );
    sub_25829( 500 );
    return;
}

void sub_65445()
{
    unknown uVar2;
    unknown uVar3;
    boolean bVar4;

    REQUEST_MODEL( l_U510 );
    sub_12208( 15 );
    sub_63528( 0 );
    sub_16806( -255.42440000, 1455.54400000, 19.33990000, 90.38990000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    CLEAR_AREA( -257.12440000, 1455.54400000, 19.33990000, 15.00000000, 1 );
    if (l_U512 == sub_63950())
    {
        CLEAR_AREA( -254.82000000, 1470.59000000, 19.33100000, 3.00000000, 1 );
        while (NOT (sub_64029( ref uVar3, -256.81010000, 1446.49700000, 19.33100000, 0.19580000 )))
        {
            WAIT( 0 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            SET_CAR_ON_GROUND_PROPERLY( uVar3 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U573 ))
    {
        SET_CAR_COORDINATES( l_U573, -257.12440000, 1455.54400000, 19.33990000 );
        SET_CAR_HEADING( l_U573, 358.38990000 );
        sub_16403( ref l_U573 );
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
        if (DOES_VEHICLE_EXIST( l_U573 ))
        {
            DELETE_CAR( ref l_U573 );
        }
        l_U573 = sub_16113( -257.12440000, 1455.54400000, 19.33990000, 358.38990000 );
    }
    SET_CAR_ON_GROUND_PROPERLY( l_U573 );
    REMOVE_CAR_WINDOW( l_U573, 0 );
    REMOVE_CAR_WINDOW( l_U573, 1 );
    sub_65899( 15, ref l_U566, l_U573 );
    sub_11753( 1, l_U566, "MALC", 0 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_3270(), l_U573, 0 );
    sub_16247( 15 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U510 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_LOOK_AT_CHAR( 0, l_U566, 15000, 0 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    TASK_CHAT_WITH_CHAR( l_U566, sub_3270(), 1, 0 );
    TASK_CHAT_WITH_CHAR( sub_3270(), l_U566, 0, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, -256.89580000, 1458.73300000, 20.43909000 );
    SET_CAM_ROT( l_U574, -0.45777400, 0.00000000, 175.12740000 );
    SET_CAM_FOV( l_U574, 35.00000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, -256.02440000, 1455.54400000, 19.33990000, 1.50000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    sub_25829( 500 );
    SETTIMERA( 0 );
    l_U629 = 0;
    if (l_U605)
    {
        while (NOT (sub_22395( "E1A2_DROP3", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    else
    {
        while (NOT (sub_22395( "E1A2_DROP2", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    bVar4 = true;
    while (bVar4)
    {
        WAIT( 0 );
        if (l_U629 == 0)
        {
            if (TIMERA() > 9000)
            {
                SET_CAM_POS( l_U574, -257.09000000, 1446.58000000, 23.00000000 );
                SET_CAM_ROT( l_U574, -15.70000000, 0.00000000, 23.00000000 );
                SET_CAM_FOV( l_U574, 45.00000000 );
                SET_CAM_DOF_FOCUSPOINT( l_U574, -256.02440000, 1455.54400000, 19.33990000, 1.50000000 );
                l_U629 = 1;
            }
        }
        if (NOT (sub_23524( l_U514 )))
        {
            if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (IS_VEH_DRIVEABLE( l_U573 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3270(), l_U573 )))
                {
                    if (IS_CHAR_IN_CAR( l_U566, l_U573 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_PAUSE( 0, 2000 );
                        TASK_CAR_MISSION_PED_TARGET( 0, l_U573, sub_3270(), 8, 50.00000000, 2, -1, -1 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U566, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    else
                    {
                        TASK_GO_STRAIGHT_TO_COORD( l_U566, -251.40000000, 1440.31000000, 19.43000000, 2, -1 );
                    }
                }
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3270() ))
            {
                TASK_LEAVE_ANY_CAR( sub_3270() );
            }
            else
            {
                bVar4 = false;
            }
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar4 = false;
        }
    }
    sub_3548( 500 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
    SET_CHAR_COORDINATES( sub_3270(), -255.42440000, 1455.54400000, 19.33990000 );
    SET_CHAR_HEADING( sub_3270(), 90.38990000 );
    WAIT( 2500 );
    CLEAR_AREA( -257.12440000, 1455.54400000, 19.33990000, 4.00000000, 1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    DISPLAY_HUD( 1 );
    sub_65083( 0 );
    return;
}

void sub_65899(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CREATE_CHAR_INSIDE_CAR( uParam2, sub_14759( uParam0 ), sub_12219( uParam0 ), uParam1 );
    sub_14866( uParam0, (uParam1^) );
    sub_14972( uParam0, (uParam1^) );
    return;
}

void sub_67175()
{
    unknown uVar2;
    boolean bVar3;

    REQUEST_MODEL( l_U509 );
    sub_63528( 1 );
    sub_16806( 1221.88400000, 81.87570000, 36.51760000, 238.58620000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    sub_32247( 1222.77600000, 80.88800000, 36.57980000, 50.97380000, ref l_U559 );
    sub_34640( ref l_U559, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U509 );
    sub_16247( 15 );
    CLEAR_AREA( 1221.18400000, 82.17570000, 36.51760000, 15.00000000, 1 );
    SET_CHAR_HEADING( l_U559, 50.00000000 );
    TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 15000, 0 );
    TASK_STAND_STILL( l_U559, 15000 );
    TASK_LOOK_AT_CHAR( sub_3270(), l_U559, 9000, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, 1223.34500000, 74.21401000, 38.31810000 );
    SET_CAM_ROT( l_U574, -2.05865600, 0.00000000, 8.58593200 );
    SET_CAM_FOV( l_U574, 6.60000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, 1222.77600000, 80.88800000, 37.57980000, 1.50000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_LOOK_AT_COORD( 0, 1222.41000000, 80.72000000, 37.57980000, 2700, 0 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    TASK_PERFORM_SEQUENCE( sub_3270(), uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    sub_25829( 500 );
    while (NOT (sub_22395( "E1A2_DROP", ref l_U514, 7, 1 )))
    {
        WAIT( 0 );
    }
    SETTIMERA( 0 );
    l_U629 = 0;
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 0 );
        if (l_U629 == 0)
        {
            if (TIMERA() > 3500)
            {
                SET_CAM_POS( l_U574, 1221.80700000, 84.39491000, 38.20452000 );
                SET_CAM_ROT( l_U574, -0.39723500, 0.00000000, -171.01210000 );
                SET_CAM_FOV( l_U574, 18.00000000 );
                SET_CAM_DOF_FOCUSPOINT( l_U574, 1222.77600000, 80.88800000, 37.57980000, 1.50000000 );
                l_U629 = 1;
                if (NOT (IS_CHAR_INJURED( l_U559 )))
                {
                    TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 500, 0 );
                }
            }
        }
        if (NOT (sub_23524( l_U514 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U559, 1220.76000000, 69.43000000, 36.78000000, 3, -1 );
            }
            bVar3 = false;
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar3 = false;
        }
    }
    sub_3548( 500 );
    WAIT( 1500 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    DISPLAY_HUD( 1 );
    SET_CHAR_HEADING( sub_3270(), 0.00000000 );
    sub_65083( 0 );
    return;
}

void sub_68165()
{
    unknown uVar2;
    boolean bVar3;

    REQUEST_MODEL( l_U510 );
    REQUEST_MODEL( l_U509 );
    sub_63528( 0 );
    sub_16806( 1221.90100000, 83.90790000, 36.52660000, 270.00000000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    if (IS_VEH_DRIVEABLE( l_U573 ))
    {
        SET_CAR_COORDINATES( l_U573, 1221.90100000, 83.90790000, 36.52660000 );
        SET_CAR_HEADING( l_U573, 270.34860000 );
        sub_16403( ref l_U573 );
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3270() );
        if (DOES_VEHICLE_EXIST( l_U573 ))
        {
            DELETE_CAR( ref l_U573 );
        }
        l_U573 = sub_16113( 1221.90100000, 83.90790000, 36.52660000, 270.34860000 );
    }
    SET_CAR_ON_GROUND_PROPERLY( l_U573 );
    WARP_CHAR_INTO_CAR( sub_3270(), l_U573 );
    REMOVE_CAR_WINDOW( l_U573, 0 );
    REMOVE_CAR_WINDOW( l_U573, 1 );
    sub_32247( 1221.74400000, 82.33400000, 36.54100000, 0.00000000, ref l_U559 );
    sub_34640( ref l_U559, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U509 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U510 );
    CLEAR_AREA( 1206.48400000, 84.17170000, 36.00410000, 15.00000000, 1 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_LOOK_AT_CHAR( 0, l_U559, 15000, 0 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    TASK_PERFORM_SEQUENCE( sub_3270(), uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 15000, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, 1222.71700000, 81.86486000, 37.55500000 );
    SET_CAM_ROT( l_U574, 6.42112300, 0.00000000, 30.39278000 );
    SET_CAM_FOV( l_U574, 45.00000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, 1221.90100000, 83.90790000, 36.52660000, 1.20000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    sub_25829( 500 );
    while (NOT (sub_22395( "E1A2_DROP", ref l_U514, 7, 1 )))
    {
        WAIT( 0 );
    }
    l_U629 = 0;
    SETTIMERA( 0 );
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 0 );
        if (l_U629 == 0)
        {
            if (TIMERA() > 4000)
            {
                SET_CAM_POS( l_U574, 1223.69600000, 85.36333000, 37.84781000 );
                SET_CAM_ROT( l_U574, -1.73184300, -0.00000000, 137.78620000 );
                SET_CAM_FOV( l_U574, 45.00000000 );
                SET_CAM_DOF_FOCUSPOINT( l_U574, 1221.74400000, 82.53400000, 37.54100000, 1.00000000 );
                l_U629 = 1;
            }
        }
        if (NOT (sub_23524( l_U514 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U559, 1220.76000000, 69.43000000, 36.78000000, 3, -1 );
            }
            bVar3 = false;
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar3 = false;
        }
    }
    sub_3548( 500 );
    WAIT( 1500 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U573 );
    sub_65083( 1 );
    return;
}

void sub_69281()
{
    unknown uVar2;
    boolean bVar3;

    sub_12208( 15 );
    REQUEST_MODEL( l_U509 );
    sub_63528( 1 );
    sub_16806( 1221.88400000, 81.87570000, 36.51760000, 238.58620000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    sub_32247( 1222.77600000, 80.88800000, 36.57980000, 0.00000000, ref l_U559 );
    sub_34640( ref l_U559, 1 );
    sub_11753( 2, l_U559, "ROMAN", 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U559, 1 );
    sub_14748( 15, ref l_U566, 1223.35600000, 82.02820000, 36.63540000, 142.27800000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
    sub_11753( 1, l_U566, "MALC", 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U509 );
    sub_16247( 15 );
    CLEAR_AREA( 1221.18400000, 82.17570000, 36.51760000, 15.00000000, 1 );
    TASK_LOOK_AT_CHAR( l_U566, sub_3270(), 7000, 0 );
    TASK_STAND_STILL( l_U566, 15000 );
    TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 15000, 0 );
    TASK_STAND_STILL( l_U559, 15000 );
    TASK_LOOK_AT_CHAR( sub_3270(), l_U566, 9000, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, 1209.11500000, 76.18639000, 37.05954000 );
    SET_CAM_ROT( l_U574, 2.63163000, -0.00000000, -67.87898000 );
    SET_CAM_FOV( l_U574, 8.80000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, 1222.77600000, 80.88800000, 37.57980000, 1.50000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    sub_25829( 500 );
    SETTIMERA( 0 );
    l_U629 = 0;
    if (l_U607)
    {
        while (NOT (sub_22395( "E1A2_DROP", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    else
    {
        while (NOT (sub_22395( "E1A2_TRASH", ref l_U514, 7, 1 )))
        {
            WAIT( 0 );
        }
    }
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 0 );
        if ((l_U629 == 0) AND (TIMERA() > 4000))
        {
            SET_CAM_POS( l_U574, 1223.48000000, 80.49000000, 38.21000000 );
            SET_CAM_ROT( l_U574, 1.78000000, 0.00000000, 43.80000000 );
            SET_CAM_FOV( l_U574, 45.00000000 );
            l_U629 = 1;
            if ((NOT (IS_CHAR_INJURED( l_U559 ))) AND (NOT (IS_CHAR_INJURED( l_U566 ))))
            {
                TASK_LOOK_AT_CHAR( l_U559, l_U566, 2500, 0 );
                TASK_LOOK_AT_CHAR( sub_3270(), l_U559, 1500, 0 );
            }
        }
        else if ((l_U629 == 1) AND (TIMERA() > 6750))
        {
            SET_CAM_POS( l_U574, 1221.69100000, 83.52071000, 38.17923000 );
            SET_CAM_ROT( l_U574, -2.75418500, 0.00000000, -154.23530000 );
            SET_CAM_FOV( l_U574, 45.00000000 );
            SET_CAM_DOF_FOCUSPOINT( l_U574, 1222.77600000, 80.88800000, 37.57980000, 1.50000000 );
            l_U629 = 2;
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U559, sub_3270() );
            }
        }
        else if ((l_U629 == 2) AND (TIMERA() > 8000))
        {
            if ((NOT (IS_CHAR_INJURED( l_U566 ))) AND (NOT (IS_CHAR_INJURED( l_U559 ))))
            {
                TASK_LOOK_AT_CHAR( l_U566, l_U559, 1500, 0 );
            }
            l_U629 = 3;
        }
        else if ((l_U629 == 3) AND (TIMERA() > 9200))
        {
            l_U629 = 4;
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_LOOK_AT_CHAR( l_U559, sub_3270(), 3000, 0 );
            }
        };;;;
        if (NOT (sub_23524( l_U514 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U559 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U559, 1220.76000000, 69.43000000, 36.78000000, 3, -1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U566 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_LOOK_AT_CHAR( 0, sub_3270(), 1500, 0 );
                TASK_PAUSE( 0, 1000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1230.43000000, 78.91000000, 36.88000000, 2, -1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U566, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            bVar3 = false;
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar3 = false;
        }
    }
    sub_3548( 500 );
    WAIT( 1500 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    DISPLAY_HUD( 1 );
    SET_CHAR_HEADING( sub_3270(), 0.00000000 );
    sub_65083( 0 );
    return;
}

void sub_70919()
{
    unknown uVar2;
    unknown uVar3;
    boolean bVar4;

    sub_12208( 15 );
    sub_63528( 1 );
    sub_16806( -254.29610000, 1455.58300000, 19.43900000, 178.72920000 );
    WAIT( 0 );
    LOAD_ALL_OBJECTS_NOW();
    if (l_U512 == sub_63950())
    {
        CLEAR_AREA( -256.81010000, 1446.49700000, 19.33100000, 3.00000000, 1 );
        while (NOT (sub_64029( ref uVar3, -256.81010000, 1446.49700000, 19.33100000, 0.19580000 )))
        {
            WAIT( 0 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            SET_CAR_ON_GROUND_PROPERLY( uVar3 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
        }
    }
    sub_14748( 15, ref l_U566, -254.45920000, 1453.86500000, 19.43860000, 351.40590000 );
    sub_11753( 1, l_U566, "MALC", 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566, 1 );
    sub_16247( 15 );
    TASK_LOOK_AT_CHAR( l_U566, sub_3270(), 15000, 0 );
    TASK_STAND_STILL( l_U566, 15000 );
    TASK_LOOK_AT_CHAR( sub_3270(), l_U566, 9000, 0 );
    CREATE_CAM( 14, ref l_U574 );
    SET_CAM_POS( l_U574, -254.99180000, 1456.10600000, 21.03520000 );
    SET_CAM_ROT( l_U574, -5.31274500, 0.00000000, -151.37140000 );
    SET_CAM_FOV( l_U574, 45.00000000 );
    SET_CAM_DOF_FOCUSPOINT( l_U574, -254.49000000, 1453.11000000, 21.07000000, 0.50000000 );
    SET_CAM_ACTIVE( l_U574, 1 );
    SET_CAM_PROPAGATE( l_U574, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 500 );
    sub_25829( 500 );
    SETTIMERA( 0 );
    while (NOT (sub_22395( "E1A2_DROPM", ref l_U514, 7, 1 )))
    {
        WAIT( 0 );
    }
    bVar4 = true;
    while (bVar4)
    {
        WAIT( 0 );
        if (l_U629 == 0)
        {
            if (TIMERA() > 4000)
            {
                SET_CAM_POS( l_U574, -248.08880000, 1457.17100000, 19.75636000 );
                SET_CAM_ROT( l_U574, 9.39249700, 0.00000000, 114.58420000 );
                SET_CAM_FOV( l_U574, 40.00000000 );
                SET_CAM_DOF_FOCUSPOINT( l_U574, -254.29610000, 1455.58300000, 19.43900000, 1.50000000 );
                l_U629 = 1;
            }
        }
        else if ((l_U629 == 1) AND (TIMERA() > 5500))
        {
            TASK_LOOK_AT_COORD( sub_3270(), -253.20000000, 1453.15000000, 19.44000000, 3000, 0 );
            l_U629 = 2;
        }
        if (NOT (sub_23524( l_U514 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U566 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U566, -251.40000000, 1440.31000000, 19.43000000, 2, -1 );
            }
            bVar4 = false;
        }
        if ((sub_43896()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            INCREMENT_INT_STAT( 372, 1 );
            bVar4 = false;
        }
    }
    sub_3548( 500 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_PROPAGATE( l_U574, 0 );
    SET_CAM_ACTIVE( l_U574, 0 );
    DESTROY_CAM( l_U574 );
    SET_CHAR_HEADING( sub_3270(), 90.00000000 );
    sub_65083( 0 );
    return;
}