void main()
{
    int I;
    int iVar3;
    boolean bVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U122 = 10.00000000;
    l_U123 = 10.00000000;
    l_U136 = 0;
    l_U137 = 1;
    l_U138 = 3;
    l_U140 = 0;
    l_U157 = -1;
    l_U161 = 0;
    l_U162 = 1;
    l_U163 = 1;
    l_U171 = 150.00000000;
    l_U261 = 0;
    l_U262 = 150.00000000;
    l_U312 = 0;
    l_U521 = 0;
    l_U522 = 999999.90000000;
    l_U523 = 0.00000000;
    l_U524 = 0.26000000;
    l_U525 = 0.65000000;
    l_U527 = 5000.00000000;
    l_U528 = 5000.00000000;
    l_U530 = 0.00000000;
    l_U532 = 0;
    l_U543 = "amb@smoking_spliff";
    l_U544 = "create_spliff";
    l_U545 = "partial_smoke";
    l_U546 = "partial_smoke_car";
    l_U547 = {0.13700000, 0.03100000, 0.03500000};
    l_U550 = {2.21400000, -0.12100000, 0.00000000};
    l_U553 = {0.00000000, 0.00000000, 0.13600000};
    l_U556 = {0.00000000, 0.00000000, 0.00000000};
    l_U559 = {-0.48300000, -0.28500000, 0.62000000};
    l_U562 = {-0.48300000, -1.30000000, 0.62000000};
    l_U565 = {0.00000000, 0.00000000, 90.00000000};
    l_U568 = {0.00000000, -0.28500000, 0.50000000};
    l_U571 = {0.00000000, 0.00000000, 0.00000000};
    l_U581 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U612 = 0.00000000;
    l_U613 = 83.38870000;
    l_U620 = 90.00000000;
    l_U621 = 90.00000000;
    l_U640 = 0;
    l_U641 = 0;
    l_U647 = 0;
    l_U673 = {1332.56000000, 113.15500000, 30.98230000};
    l_U678 = {1383.00000000, 529.00000000, 33.00000000};
    l_U681 = {1363.00000000, 526.00000000, 33.00000000};
    l_U684 = {1371.00000000, 532.00000000, 42.00000000};
    l_U687 = {1366.31400000, 525.58000000, 33.10000000};
    l_U690 = {90.00000000, 0.00000000, 210.00000000};
    l_U693 = {1383.47900000, 528.60000000, 32.11960000};
    l_U696 = {1383.47900000, 531.19000000, 32.11960000};
    PRINTSTRING( "MISSION SCRIPT STARTED - JACOB1.SC\n" );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_876();
        sub_2986();
    }
    sub_3988( "LJ1AUD" );
    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        sub_4124( 0, sub_3065(), "NIKO", 0 );
        STOP_PED_SPEAKING( sub_3065(), 1 );
    }
    l_U648 = sub_4301( "LJ1AUD", "LJ1_OUT" );
    l_U649 = sub_4301( "LJ1AUD", "LJ1_BANT1V1" );
    l_U650 = sub_4301( "LJ1AUD", "LJ1_BANT1V2" );
    l_U651 = sub_4301( "LJ1AUD", "LJ1_2GO" );
    l_U652 = sub_4301( "LJ1AUD", "LJ1_BANT2V1" );
    l_U653 = sub_4301( "LJ1AUD", "LJ1_BANT2V2" );
    l_U654 = sub_4301( "LJ1AUD", "LJ1_WINDO" );
    l_U655 = sub_4301( "LJ1AUD", "LJ1_BANT3V1" );
    l_U656 = sub_4301( "LJ1AUD", "LJ1_BANT3V2" );
    while (true)
    {
        sub_4782();
        sub_4869();
        switch (l_U98)
        {
            case 0:
            SET_MISSION_FLAG( 1 );
            LOAD_ADDITIONAL_TEXT( "JACOB1", 0 );
            LOAD_ADDITIONAL_TEXT( "LJ1AUD", 6 );
            SWITCH_ROADS_OFF( 1260.06000000, 101.97290000, 25.00000000, 1374.07100000, 120.51070000, 35.00000000 );
            SWITCH_ROADS_OFF( 1804.01300000, 461.92520000, 12.13000000, 1815.13800000, 573.65020000, 40.23000000 );
            SWITCH_PED_PATHS_OFF( 1815.07900000, 455.12790000, 17.11650000, 1822.42900000, 595.62790000, 62.39150000 );
            SWITCH_PED_PATHS_OFF( 1732.18100000, 480.85480000, 14.51800000, 1797.55600000, 534.67980000, 58.06800000 );
            SWITCH_PED_PATHS_OFF( 1355.94500000, 520.77500000, 19.03530000, 1395.39500000, 542.55000000, 63.31030000 );
            ADD_SCENARIO_BLOCKING_AREA( 1355.94500000, 520.77500000, 19.03530000, 1395.39500000, 542.55000000, 63.31030000 );
            ADD_SCENARIO_BLOCKING_AREA( 1732.18100000, 480.85480000, 14.51800000, 1797.55600000, 534.67980000, 58.06800000 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3065(), 0 );
            g_U2219 = 1;
            SUPPRESS_CAR_MODEL( -498054846 );
            sub_5491( 1, 1 );
            break;
            case 1:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2995(), 0 );
                sub_5824( 3 );
                REQUEST_MODEL( -498054846 );
                REQUEST_ANIMS( "missjacob1" );
                if (g_U9893._fU24)
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                else
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 1:
                sub_6641( 1332.66700000, 119.57150000, 31.14940000, 25.00000000, 1322.08500000, 112.07840000, 31.89380000, 91.50070000 );
                CLEAR_AREA_OF_CARS( 1332.66700000, 119.57150000, 31.14940000, 3.00000000 );
                START_CUTSCENE_NOW( "lilj1_a" );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 2:
                if (HAS_CUTSCENE_LOADED())
                {
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    CLEAR_NAMED_CUTSCENE( "lilj1_a" );
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                SET_CHAR_COORDINATES( sub_3065(), 1332.75500000, 116.76190000, 30.68770000 );
                SET_CHAR_HEADING( sub_3065(), 195.49460000 );
                sub_3565();
                SET_GAME_CAM_HEADING( 0.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_5824( 3 );
                REQUEST_MODEL( -498054846 );
                REQUEST_ANIMS( "missjacob1" );
                REQUEST_MODEL( -1224113279 );
                LOAD_ALL_OBJECTS_NOW();
                while ((((NOT (sub_7419( 3 ))) || (NOT (HAS_MODEL_LOADED( -498054846 )))) || (NOT (HAVE_ANIMS_LOADED( "missjacob1" )))) || (NOT (HAS_MODEL_LOADED( -1224113279 ))))
                {
                    WAIT( 0 );
                }
                sub_7519();
                # -sub_C1FFC0-0xc214c8( 2, ref l_U606 );
                # -sub_C1FFC0-0xc214c8( 2, ref l_U607 );
                LOAD_COMBAT_DECISION_MAKER( 8, ref l_U609 );
                LOAD_COMBAT_DECISION_MAKER( 8, ref l_U610 );
                LOAD_COMBAT_DECISION_MAKER( 2, ref l_U608 );
                LOAD_COMBAT_DECISION_MAKER( 2, ref l_U611 );
                SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U610, 1 );
                SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U611, 2 );
                N_1061756705( l_U607, 12 );
                N_1061756705( l_U607, 43 );
                sub_6641( l_U673._fU0, l_U673._fU4, l_U673._fU8, 5.00000000, 1322.08500000, 112.07840000, 31.89380000, 91.50070000 );
                CLEAR_AREA( l_U673._fU0, l_U673._fU4, l_U673._fU8, 5.00000000, 1 );
                sub_7828( ref l_U676 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -498054846 );
                if (IS_VEH_DRIVEABLE( l_U676 ))
                {
                    SET_CAR_HEADING( l_U676, l_U613 );
                    SET_CAR_COORDINATES( l_U676, l_U673._fU0, l_U673._fU4, l_U673._fU8 );
                    sub_6981( l_U676 );
                    APPLY_FORCE_TO_CAR( l_U676, 1, 0.00000000, 0.00000000, -1.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 0 );
                    SET_VEH_HAS_STRONG_AXLES( l_U676, 1 );
                    SET_CAR_HEALTH( l_U676, 3000 );
                    SET_ENGINE_HEALTH( l_U676, 3000 );
                    SET_PETROL_TANK_HEALTH( l_U676, 3000 );
                }
                sub_8206( ref l_U676 );
                CLEAR_AREA_OF_CHARS( 1332.75500000, 116.76190000, 30.68770000, 200.00000000 );
                sub_8494( 3, ref l_U662, 1336.02300000, 115.69370000, 31.74940000, 72.99680000 );
                SET_CHAR_RELATIONSHIP( l_U662, 0, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U662, 24 );
                SET_PED_DIES_WHEN_INJURED( l_U662, 1 );
                sub_4124( 1, l_U662, "JACOB", 0 );
                l_U631 = 0;
                l_U632 = 0;
                if (NOT (IS_GROUP_MEMBER( l_U662, sub_10221() )))
                {
                    SET_GROUP_MEMBER( sub_10221(), l_U662 );
                }
                SET_WANTED_MULTIPLIER( 0.30000000 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                sub_5491( 3, 1 );
                break;
            }
            break;
            case 3:
            if (NOT l_U590)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
                {
                    RETUNE_RADIO_TO_STATION_NAME( "BABYLON" );
                    l_U590 = 1;
                }
            }
            sub_10390( l_U662 );
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                if (((IS_GROUP_MEMBER( l_U662, sub_10221() )) AND (IS_SCREEN_FADED_IN())) AND (NOT sub_23779()))
                {
                    switch (l_U632)
                    {
                        case 0:
                        if (l_U631 < l_U648)
                        {
                            if (sub_24124( "LJ1_OUT", l_U631, 1, ref l_U125, 6, 1 ))
                            {
                                l_U631++;
                            }
                        }
                        else
                        {
                            l_U631 = 0;
                            l_U632++;
                        }
                        break;
                        case 1:
                        if ((sub_25135( sub_3065(), l_U662 )) AND (sub_25241()))
                        {
                            switch (g_U64933)
                            {
                                case 0:
                                if (l_U631 < l_U649)
                                {
                                    if (NOT (sub_25485( sub_3065() )))
                                    {
                                        if (l_U631 < 5)
                                        {
                                            l_U631 = 5;
                                        }
                                    }
                                    if (sub_24124( "LJ1_BANT1V1", l_U631, 1, ref l_U125, 6, 1 ))
                                    {
                                        l_U631++;
                                    }
                                }
                                else
                                {
                                    g_U64933++;
                                    l_U631 = 0;
                                    l_U632++;
                                }
                                break;
                                case 1:
                                if (l_U631 < l_U650)
                                {
                                    if (NOT (sub_25485( sub_3065() )))
                                    {
                                        if (l_U631 < 1)
                                        {
                                            l_U631 = 1;
                                        }
                                    }
                                    if (sub_24124( "LJ1_BANT1V2", l_U631, 1, ref l_U125, 6, 1 ))
                                    {
                                        l_U631++;
                                    }
                                }
                                else
                                {
                                    g_U64933++;
                                    l_U631 = 0;
                                    l_U632++;
                                }
                                break;
                                default:
                                SAY_AMBIENT_SPEECH( l_U662, "LISTEN_TO_RADIO", 0, 0, 0 );
                                g_U64933++;
                                if (g_U64933 >= 5)
                                {
                                    g_U64933 = 0;
                                }
                                l_U631 = 0;
                                l_U632++;
                                break;
                            }
                        }
                        else if (sub_23801( l_U125 ))
                        {
                            sub_25947( ref l_U125, 0 );
                            l_U631--;
                            if (l_U631 < 0)
                            {
                                l_U631 = 0;
                            }
                        }
                        break;
                    }
                }
            }
            switch (ProtectedGet(l_U99))
            {
                case 0:
                WAIT( 1000 );
                POPULATE_NOW();
                sub_26156( -956048545 );
                sub_26770( 500, 1, 0 );
                if (DOES_VEHICLE_EXIST( l_U676 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
                }
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (DOES_VEHICLE_EXIST( l_U676 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3065(), l_U673._fU0, l_U673._fU4, l_U673._fU8, 150.00000000, 150.00000000, 150.00000000, 0 )))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
                        l_U676 = nil;
                    }
                }
                if (sub_27452( 1814.60900000, 507.64600000, 29.74800000, 2.50000000, 2.50000000, 2.50000000, 1, l_U662, "JA1_M1", "JA1_M3", "JA1_M4", 0, 1, "JA1_M25" ))
                {
                    sub_5491( 4, 1 );
                }
                else
                {
                    sub_31616( l_U662 );
                }
                break;
            }
            break;
            case 4:
            sub_32105();
            sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_33179( 1, 1 );
                CLEAR_AREA( 1799.50000000, 503.87390000, 28.39650000, 5.00000000, 1 );
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, 1821.83000000, 501.41530000, 29.24874000 );
                SET_CAM_ROT( l_U111, -3.57758000, -0.00000000, 52.58235000 );
                SET_CAM_FOV( l_U111, 30.90004000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar13 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar13, 5.00000000, 0.00000000, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                    CLEAR_AREA( uVar9._fU0, uVar9._fU4, uVar9._fU8, 6.00000000, 1 );
                }
                GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                REQUEST_MODEL( l_U657[0] );
                l_U631 = 0;
                l_U632 = 0;
                l_U618 = 3.00000000;
                l_U619 = 1.50000000;
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    switch (l_U632)
                    {
                        case 0:
                        if (sub_33860( "LJ1_ARR1", ref l_U125, 6, 1 ))
                        {
                            l_U632++;
                        }
                        break;
                        case 1:
                        if (NOT (sub_23801( l_U125 )))
                        {
                            GET_AMMO_IN_CHAR_WEAPON( sub_3065(), 7, ref I );
                            if (I <= 0)
                            {
                                l_U633 = 0;
                            }
                            else
                            {
                                l_U633 = 0;
                            }
                            l_U632++;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_INJURED( l_U662 )))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U662 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U668 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1799.50000000, 503.87390000, 28.39650000, 2, -1, 1.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U668 );
                            TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                            CLEAR_SEQUENCE_TASK( l_U668 );
                        }
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        break;
                    }
                }
                break;
                case 2:
                if (TIMERA() > 4000)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                GET_AMMO_IN_CHAR_WEAPON( sub_3065(), 7, ref I );
                if (I <= 0)
                {
                    GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                    REQUEST_MODEL( l_U657[0] );
                    if (NOT (HAS_MODEL_LOADED( l_U657[0] )))
                    {
                        REQUEST_MODEL( l_U657[0] );
                        while (NOT (HAS_MODEL_LOADED( l_U657[0] )))
                        {
                            REQUEST_MODEL( l_U657[0] );
                            WAIT( 0 );
                        }
                    }
                    if (IS_PLAYER_PLAYING( sub_2995() ))
                    {
                        GIVE_WEAPON_TO_CHAR( sub_3065(), 7, 50, 0 );
                    }
                }
                else
                {
                    ADD_AMMO_TO_CHAR( sub_3065(), 7, 50 );
                }
                SET_CURRENT_CHAR_WEAPON( sub_3065(), 7, 0 );
                if (l_U102)
                {
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U662 );
                        if (IS_GROUP_MEMBER( l_U662, sub_10221() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U662 );
                        }
                        CLEAR_AREA( 1802.72600000, 504.04820000, 28.36740000, 3.00000000, 1 );
                        SET_CHAR_COORDINATES( l_U662, 1802.72600000, 504.04820000, 27.36740000 );
                        SET_CHAR_HEADING( l_U662, 90.00000000 );
                    }
                    sub_26770( 500, 1, 1 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_26770( 0, 1, 0 );
                }
                l_U599 = 0;
                SETTIMERA( 0 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                sub_5491( 5, 1 );
                break;
            }
            break;
            case 5:
            sub_10390( l_U662 );
            if (NOT l_U599)
            {
                if (TIMERA() > 7000)
                {
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 1804.01300000, 461.92520000, 12.13000000, 1815.13800000, 573.65020000, 40.23000000 );
                    l_U599 = 1;
                }
            }
            if (sub_34861( 1775.63300000, 522.69500000, 29.30000000, 2.50000000, 2.50000000, 2.00000000, 1, "JA1_M9", "JA1_M4", 1, "JA1_M25" ))
            {
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U662 );
                }
                sub_20642( l_U662, 0 );
                DELETE_CHAR( ref l_U662 );
                SET_PLAYER_CONTROL( sub_2995(), 0 );
                sub_5491( 6, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                if (l_U669 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U668 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1799.50000000, 503.87390000, 28.39650000, 2, -1, 0.25000000 );
                    TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                    TASK_PLAY_ANIM( 0, "door_knock", "missjacob1", 4.00000000, 0, 1, 1, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U668 );
                    TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                    CLEAR_SEQUENCE_TASK( l_U668 );
                }
            }
            break;
            case 6:
            if ((ProtectedGet(l_U99) > 0) AND (ProtectedGet(l_U99) < 6))
            {
                if ((NOT sub_35926()) AND (TIMERA() < 5000))
                {
                    sub_32105();
                }
            }
            if ((ProtectedGet(l_U99) > 2) AND (ProtectedGet(l_U99) < 99))
            {
                if ((IS_CONTROL_PRESSED( 2, 22 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 37 )))
                {
                    ProtectedSet(l_U99, 99);
                    l_U102 = 1;
                }
            }
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_33179( 1, 1 );
                SET_WIDESCREEN_BORDERS( 0 );
                DISPLAY_HUD( 0 );
                DISPLAY_RADAR( 0 );
                CREATE_OBJECT_NO_OFFSET( -1224113279, 1774.25700000, 506.73010000, 28.55470000, ref l_U660, 1 );
                SET_OBJECT_HEADING( l_U660, 173.30000000 );
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, 1782.30400000, 530.05260000, 29.67467000 );
                SET_CAM_ROT( l_U111, -3.86162400, 0.00000000, 148.08750000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_FOV( l_U111, 36.00000000 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CLEAR_AREA( 1774.18000000, 504.13450000, 27.76120000, 10.00000000, 1 );
                CLEAR_AREA( 1774.40000000, 505.54140000, 27.73380000, 10.00000000, 1 );
                CLEAR_AREA( 1768.22600000, 493.53460000, 27.86260000, 10.00000000, 1 );
                l_U618 = 4.50000000;
                l_U619 = 2.30000000;
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                REQUEST_MODEL( -1500397869 );
                REQUEST_MODEL( -881358690 );
                GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                REQUEST_MODEL( l_U657[0] );
                while (((NOT (HAS_MODEL_LOADED( -1500397869 ))) || (NOT (HAS_MODEL_LOADED( -881358690 )))) || (NOT (HAS_MODEL_LOADED( l_U657[0] ))))
                {
                    REQUEST_MODEL( -1500397869 );
                    REQUEST_MODEL( -881358690 );
                    REQUEST_MODEL( l_U657[0] );
                    WAIT( 0 );
                }
                sub_36643( 1774.18000000, 504.13450000, 27.76120000, 50.00000000, -1500397869, 7, ref l_U663[0] );
                sub_36643( 1774.40000000, 505.54140000, 27.73380000, 92.00000000, -881358690, 7, ref l_U663[1] );
                sub_36643( 1768.22600000, 493.53460000, 27.86260000, 95.68330000, -1500397869, 7, ref l_U663[2] );
                TASK_DUCK( l_U663[2], -2 );
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                    {
                        FREEZE_CHAR_POSITION( l_U663[I], 1 );
                    }
                }
                SETTIMERA( 0 );
                l_U647 = 0;
                l_U634 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                if (TIMERA() > 5000)
                {
                    SET_WIDESCREEN_BORDERS( 1 );
                    if (sub_37212( 3, "LJ1_CALL1", "LJ1AUD", 1000, 1 ))
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 2:
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                if (sub_23976())
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                if (sub_41156( 0 ))
                {
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                    {
                        SET_CHAR_VISIBLE( l_U663[0], 1 );
                        FREEZE_CHAR_POSITION( l_U663[0], 0 );
                        CLEAR_CHAR_TASKS( l_U663[0] );
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        TASK_PAUSE( 0, 500 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3065(), 9999.00000000, 99999999 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U663[0], l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        SET_CHAR_VISIBLE( l_U663[1], 1 );
                        FREEZE_CHAR_POSITION( l_U663[1], 0 );
                        CLEAR_CHAR_TASKS( l_U663[1] );
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        TASK_PAUSE( 0, 3000 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3065(), 9999.00000000, 99999999 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U663[1], l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        SET_CHAR_VISIBLE( l_U663[2], 1 );
                        FREEZE_CHAR_POSITION( l_U663[2], 0 );
                        CLEAR_CHAR_TASKS( l_U663[2] );
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        TASK_PAUSE( 0, 5000 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3065(), 9999.00000000, 99999999 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U663[2], l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                    }
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    l_U647 = 1;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 5:
                if (TIMERA() > 2000)
                {
                    CREATE_CAM( 14, ref l_U113 );
                    SET_CAM_POS( l_U113, 1782.30400000, 530.05260000, 29.67467000 );
                    SET_CAM_ROT( l_U113, -3.86162400, 0.00000000, 148.08750000 );
                    SET_CAM_FOV( l_U113, 30.00000000 );
                    l_U618 = 5.00000000;
                    l_U619 = 25.00000000;
                    sub_32470( ref l_U113, l_U663[0], l_U618, l_U619 );
                    sub_32470( ref l_U111, l_U663[0], l_U618, l_U619 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 6:
                if (sub_42199( ref l_U111, ref l_U113, 2000 ))
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 7:
                if (l_U647 == 99)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                    {
                        FREEZE_CHAR_POSITION( l_U663[I], 0 );
                        SET_CHAR_VISIBLE( l_U663[I], 1 );
                    }
                }
                if (l_U102)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (sub_35926())
                    {
                        sub_42639( 3 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U663[0] );
                        SET_CHAR_COORDINATES( l_U663[0], 1762.36400000, 498.09650000, 28.01980000 );
                        SET_CHAR_HEADING( l_U663[0], 121.44560000 );
                        TASK_SMART_FLEE_CHAR( l_U663[0], sub_3065(), 9999.00000000, 99999999 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U663[1] );
                        SET_CHAR_COORDINATES( l_U663[1], 1765.71400000, 501.09670000, 28.02820000 );
                        SET_CHAR_HEADING( l_U663[1], 123.55040000 );
                        TASK_SMART_FLEE_CHAR( l_U663[1], sub_3065(), 9999.00000000, 99999999 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U663[2] );
                        SET_CHAR_COORDINATES( l_U663[2], 1767.65200000, 493.55620000, 27.86330000 );
                        SET_CHAR_HEADING( l_U663[2], 87.36890000 );
                        TASK_SMART_FLEE_CHAR( l_U663[2], sub_3065(), 9999.00000000, 99999999 );
                    }
                    WAIT( 500 );
                    sub_43188( 500, l_U111 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_43188( 1000, l_U111 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U660 );
                SET_WIDESCREEN_BORDERS( 0 );
                DISPLAY_HUD( 1 );
                DISPLAY_RADAR( 1 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                sub_5491( 7, 1 );
                break;
            }
            if (ProtectedGet(l_U99) < 99)
            {
                switch (l_U647)
                {
                    case 1:
                    if (TIMERB() > 500)
                    {
                        PLAY_SOUND_FROM_POSITION( -1, "LJ1_JACOBS_LADDER_KICK_DOWN_DOOR", 1774.60000000, 512.70000000, 28.80000000 );
                        SETTIMERB( 0 );
                        l_U647++;
                    }
                    break;
                    case 2:
                    if (TIMERB() > 1000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U663[0], "EXPLOSION_IS_IMMINENT", "M_Y_GJAM_LO_01_FULL_01", 1, 1, 2 );
                            SETTIMERB( 0 );
                            l_U647++;
                        }
                    }
                    break;
                    case 3:
                    if (TIMERB() > 2000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U663[1], "TAKE_COVER", "M_Y_GJAM_LO_02_FULL_01", 1, 1, 2 );
                            SETTIMERB( 0 );
                            l_U647++;
                        }
                    }
                    break;
                    case 4:
                    if (TIMERB() > 2000)
                    {
                        l_U647 = 99;
                    }
                    break;
                }
            }
            break;
            case 7:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar13 );
                    if (IS_VEH_DRIVEABLE( uVar13 ))
                    {
                        GET_CAR_HEALTH( uVar13, ref I );
                        if (I < 1000)
                        {
                            SET_CAR_HEALTH( uVar13, 1000 );
                        }
                        I = ROUND( GET_ENGINE_HEALTH( uVar13 ) );
                        if (I < 1000)
                        {
                            SET_ENGINE_HEALTH( uVar13, 1000.00000000 );
                        }
                        I = ROUND( GET_PETROL_TANK_HEALTH( uVar13 ) );
                        if (I < 1000)
                        {
                            SET_PETROL_TANK_HEALTH( uVar13, 1000.00000000 );
                        }
                    }
                }
                SWITCH_ROADS_OFF( 1706.96900000, 501.43790000, 16.80850000, 1725.91900000, 520.61290000, 35.08350000 );
                CLEAR_AREA_OF_CARS( 1718.14300000, 516.45320000, 27.96990000, 20.00000000 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                l_U597 = 1;
                l_U623[0] = 0;
                l_U623[1] = 0;
                l_U623[2] = 0;
                l_U643[0] = 0;
                l_U643[1] = 0;
                l_U643[2] = 0;
                SETTIMERB( 0 );
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U663[I], ref l_U576[I] );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                {
                    CREATE_GROUP( 0, ref l_U622, 1 );
                    SET_GROUP_LEADER( l_U622, l_U663[0] );
                }
                if (DOES_GROUP_EXIST( l_U622 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        SET_GROUP_MEMBER( l_U622, l_U663[1] );
                        SET_GROUP_SEPARATION_RANGE( l_U622, 9999.90000000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[1], 1 );
                        CLEAR_CHAR_TASKS( l_U663[1] );
                    }
                }
                if (DOES_GROUP_EXIST( l_U622 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        SET_GROUP_MEMBER( l_U622, l_U663[2] );
                        SET_GROUP_SEPARATION_RANGE( l_U622, 9999.90000000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[2], 1 );
                        CLEAR_CHAR_TASKS( l_U663[2] );
                    }
                }
                sub_28726( "JA1_M10", 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                switch (l_U623[0])
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U663[0], 29, ref l_U669 );
                        if (l_U669 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U668 );
                            TASK_SMART_FLEE_CHAR( 0, sub_3065(), 9999.00000000, 99999999 );
                            CLOSE_SEQUENCE_TASK( l_U668 );
                            TASK_PERFORM_SEQUENCE( l_U663[0], l_U668 );
                            CLEAR_SEQUENCE_TASK( l_U668 );
                            l_U623[0]++;
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                    {
                        switch (l_U643[0])
                        {
                            case 0:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[0], sub_3065(), 7.00000000, 7.00000000, 7.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[0], "SHIT", 1, 0, 0 );
                                l_U643[0]++;
                            }
                            break;
                            case 1:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[0], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[0]++;
                            }
                            break;
                            case 2:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[0], sub_3065(), 7.00000000, 7.00000000, 7.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[0], "SHIT", 1, 0, 0 );
                                l_U643[0]++;
                            }
                            break;
                            case 3:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[0], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[0] = 2;
                            }
                            break;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U663[0], 29, ref l_U669 );
                        if (l_U669 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U668 );
                            TASK_SMART_FLEE_CHAR( 0, sub_3065(), 9999.00000000, 99999999 );
                            CLOSE_SEQUENCE_TASK( l_U668 );
                            TASK_PERFORM_SEQUENCE( l_U663[0], l_U668 );
                            CLEAR_SEQUENCE_TASK( l_U668 );
                        }
                    }
                    break;
                }
                switch (l_U623[1])
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U663[1], 10.00000000, 10.00000000, 5.00000000, 0 ))
                        {
                            l_U623[1]++;
                        }
                        else if (DOES_GROUP_EXIST( l_U622 ))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U663[1], l_U622 )))
                            {
                                l_U623[1]++;
                            }
                        }
                        else
                        {
                            l_U623[1]++;
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        switch (l_U643[1])
                        {
                            case 0:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[1], sub_3065(), 7.00000000, 7.00000000, 5.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[1], "FIGHT", 1, 0, 0 );
                                l_U643[1]++;
                            }
                            break;
                            case 1:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[1], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[1]++;
                            }
                            break;
                            case 2:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[1], sub_3065(), 7.00000000, 7.00000000, 5.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[1], "FIGHT", 0, 0, 0 );
                                l_U643[1]++;
                            }
                            break;
                            case 3:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[1], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[1] = 2;
                            }
                            break;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U663[1], 40.00000000, 40.00000000, 5.00000000, 0 ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U663[1], 91, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[1], 0 );
                                TASK_COMBAT( l_U663[1], sub_3065() );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U663[1], 25, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[1], 0 );
                                TASK_SMART_FLEE_CHAR( l_U663[1], sub_3065(), 9999.00000000, 99999999 );
                            }
                        }
                    }
                    break;
                }
                switch (l_U623[2])
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U663[2], 5.00000000, 5.00000000, 5.00000000, 0 ))
                        {
                            l_U623[2]++;
                        }
                        else if (DOES_GROUP_EXIST( l_U622 ))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U663[2], l_U622 )))
                            {
                                l_U623[2]++;
                            }
                        }
                        else
                        {
                            l_U623[2]++;
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        switch (l_U643[2])
                        {
                            case 0:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[2], sub_3065(), 7.00000000, 7.00000000, 7.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[2], "FIGHT", 1, 0, 0 );
                                l_U643[2]++;
                            }
                            break;
                            case 1:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[2], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[2]++;
                            }
                            break;
                            case 2:
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[2], sub_3065(), 7.00000000, 7.00000000, 7.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U663[2], "FIGHT", 0, 0, 0 );
                                l_U643[2]++;
                            }
                            break;
                            case 3:
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U663[2], sub_3065(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U643[2] = 2;
                            }
                            break;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U663[2], 40.00000000, 40.00000000, 5.00000000, 0 ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U663[2], 91, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[2], 0 );
                                TASK_COMBAT( l_U663[2], sub_3065() );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U663[2], 25, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[2], 0 );
                                TASK_SMART_FLEE_CHAR( l_U663[2], sub_3065(), 9999.00000000, 99999999 );
                            }
                        }
                    }
                    break;
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    for ( I = 0; I < 3; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U663[I] ))
                        {
                            DELETE_CHAR( ref l_U663[I] );
                        }
                    }
                }
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U663[I] ))
                    {
                        if (IS_CHAR_INJURED( l_U663[I] ))
                        {
                            if (DOES_BLIP_EXIST( l_U576[I] ))
                            {
                                REMOVE_BLIP( l_U576[I] );
                            }
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U576[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U663[I], ref l_U576[I] );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U576[I] ))
                    {
                        REMOVE_BLIP( l_U576[I] );
                    }
                }
                if (((IS_CHAR_INJURED( l_U663[0] )) AND (IS_CHAR_INJURED( l_U663[1] ))) AND (IS_CHAR_INJURED( l_U663[2] )))
                {
                    for ( I = 0; I < 3; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U576[I] ))
                        {
                            REMOVE_BLIP( l_U576[I] );
                        }
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U663[0] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U663[1] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U663[2] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1500397869 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -881358690 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U657[0] );
                    SET_PLAYER_CONTROL( sub_2995(), 1 );
                    l_U631 = 0;
                    SETTIMERA( 0 );
                    sub_5491( 8, 1 );
                }
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U663[I] )))
                        {
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U663[I], sub_3065(), 200.00000000, 200.00000000, 0 ))) AND (sub_29889( 1, 1 )))
                            {
                                for ( I = 0; I < 4; I++ )
                                {
                                    if (DOES_BLIP_EXIST( l_U576[I] ))
                                    {
                                        REMOVE_BLIP( l_U576[I] );
                                    }
                                }
                                sub_47919( "JA1_M20" );
                                sub_5491( 18, 0 );
                            }
                        }
                    }
                }
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                    {
                        GET_CHAR_HEALTH( l_U663[I], ref l_U636[I] );
                    }
                }
                break;
            }
            break;
            case 8:
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT (sub_31264( 1799.57800000, 519.98890000, 27.57130000, 2.00000000, 1120403456 )))
                {
                    sub_8494( 3, ref l_U662, 1799.57800000, 519.98890000, 27.57130000, 8.15760000 );
                    SET_PED_DIES_WHEN_INJURED( l_U662, 1 );
                    SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U662, 0.00000000 );
                    SET_CHAR_ACCURACY( l_U662, 10 );
                    sub_4124( 1, l_U662, "JACOB", 0 );
                    SET_CHAR_DECISION_MAKER( l_U662, l_U607 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 1:
                if (TIMERA() > 2000)
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (sub_48382( l_U662, "JA1_M15", 1, 1, 0 ))
                    {
                        sub_5491( 9, 1 );
                    }
                    else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3065() ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U662, l_U123, l_U123, l_U123, 0 ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar13 );
                            if (IS_VEH_DRIVEABLE( uVar13 ))
                            {
                                GET_DRIVER_OF_CAR( uVar13, ref iVar12 );
                                if (iVar12 == sub_3065())
                                {
                                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar13, ref I );
                                    if (I > 0)
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( uVar13, 0 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U662, 11, ref l_U669 );
                                            if (l_U669 == 7)
                                            {
                                                if (IS_WANTED_LEVEL_GREATER( sub_2995(), 0 ))
                                                {
                                                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                                                }
                                                else
                                                {
                                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                }
                                                TASK_ENTER_CAR_AS_PASSENGER( l_U662, uVar13, -2, 0 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U662, l_U123 + 5.00000000, l_U123 + 5.00000000, l_U123 + 5.00000000, 0 )))
                        {
                            sub_31616( l_U662 );
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U662, 11, ref l_U669 );
                    if ((l_U669 == 7) AND (NOT (IS_GROUP_MEMBER( l_U662, sub_10221() ))))
                    {
                        if (TIMERA() > 3000)
                        {
                            switch (l_U641)
                            {
                                case 0:
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U662, 10.00000000, 1.00000000, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                TASK_LOOK_AT_COORD( l_U662, uVar9._fU0, uVar9._fU4, uVar9._fU8, 3000, 0 );
                                break;
                                case 1:
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U662, -10.00000000, 1.00000000, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                TASK_LOOK_AT_COORD( l_U662, uVar9._fU0, uVar9._fU4, uVar9._fU8, 3000, 0 );
                                break;
                                case 2:
                                TASK_LOOK_AT_CHAR( l_U662, sub_3065(), 3000, 0 );
                                break;
                            }
                            SETTIMERA( 0 );
                            l_U641++;
                            if (l_U641 > 2)
                            {
                                l_U641 = 0;
                            }
                        }
                    }
                    else
                    {
                        TASK_CLEAR_LOOK_AT( l_U662 );
                    }
                }
                break;
            }
            break;
            case 9:
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U633 );
                l_U631 = 0;
                l_U632 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (IS_GROUP_MEMBER( l_U662, sub_10221() ))
                    {
                        if ((sub_25135( sub_3065(), l_U662 )) AND (sub_25241()))
                        {
                            switch (l_U632)
                            {
                                case 0:
                                if (l_U631 < l_U651)
                                {
                                    if (NOT sub_23779())
                                    {
                                        if (sub_24124( "LJ1_2GO", l_U631, 1, ref l_U125, 6, 1 ))
                                        {
                                            l_U631++;
                                        }
                                    }
                                }
                                else if (NOT sub_23779())
                                {
                                    l_U631 = 0;
                                    l_U632++;
                                }
                                break;
                                case 1:
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2995(), 0 )))
                                {
                                    switch (g_U64934)
                                    {
                                        case 0:
                                        if (l_U631 < l_U652)
                                        {
                                            if (NOT sub_23779())
                                            {
                                                if (sub_24124( "LJ1_BANT2V1", l_U631, 1, ref l_U125, 6, 1 ))
                                                {
                                                    l_U631++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            g_U64934++;
                                            l_U631 = 0;
                                            l_U632++;
                                        }
                                        break;
                                        case 1:
                                        if (l_U631 < l_U653)
                                        {
                                            if (l_U631 == 3)
                                            {
                                                if (NOT (sub_25485( sub_3065() )))
                                                {
                                                    l_U631++;
                                                }
                                            }
                                            if (NOT sub_23779())
                                            {
                                                if (sub_24124( "LJ1_BANT2V2", l_U631, 1, ref l_U125, 6, 1 ))
                                                {
                                                    l_U631++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            g_U64934++;
                                            l_U631 = 0;
                                            l_U632++;
                                        }
                                        break;
                                        default:
                                        SAY_AMBIENT_SPEECH( l_U662, "LISTEN_TO_RADIO", 0, 0, 0 );
                                        g_U64934++;
                                        if (g_U64934 >= 5)
                                        {
                                            g_U64934 = 0;
                                        }
                                        l_U631 = 0;
                                        l_U632++;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        else if (sub_23801( l_U125 ))
                        {
                            sub_25947( ref l_U125, 0 );
                            l_U631--;
                            if (l_U631 < 0)
                            {
                                l_U631 = 0;
                            }
                        }
                    }
                }
                if (sub_49951( 1401.94200000, 529.84140000, 30.23200000, 2.50000000, 2.50000000, 2.50000000, 1, l_U662, "JA1_M19", "JA1_M3", 0, 1, "JA1_M25" ))
                {
                    SET_PLAYER_CONTROL( sub_2995(), 0 );
                    l_U631 = 0;
                    sub_5491( 10, 1 );
                }
                else
                {
                    sub_31616( l_U662 );
                    if (l_U591)
                    {
                        l_U591 = 0;
                    }
                }
                break;
            }
            break;
            case 10:
            sub_32105();
            sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_33179( 1, 1 );
                sub_20642( l_U662, 0 );
                REQUEST_MODEL( -1500397869 );
                GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                GET_WEAPONTYPE_MODEL( 10, ref l_U657[1] );
                REQUEST_MODEL( l_U657[0] );
                REQUEST_MODEL( l_U657[1] );
                REQUEST_MODEL( 1069950328 );
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, 1417.53000000, 521.36400000, 30.58094000 );
                SET_CAM_ROT( l_U111, 1.03937400, -0.00000000, 71.32181000 );
                SET_CAM_FOV( l_U111, 30.90004000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CLEAR_AREA_OF_COPS( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                l_U631 = 0;
                l_U632 = 0;
                l_U618 = 4.00000000;
                l_U619 = 2.00000000;
                sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
                REQUEST_ANIMS( "gestures@niko" );
                while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3065() )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( sub_3065(), l_U662 );
                    }
                    else
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar13 );
                        SET_CAR_AS_MISSION_CAR( uVar13 );
                    }
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U662 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U662, sub_3065() );
                    }
                }
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (NOT sub_23779())
                {
                    switch (l_U632)
                    {
                        case 0:
                        if (sub_33860( "LJ1_ARR2", ref l_U125, 6, 1 ))
                        {
                            l_U632++;
                        }
                        break;
                        case 1:
                        if (NOT (sub_23801( l_U125 )))
                        {
                            l_U631 = 0;
                            GET_AMMO_IN_CHAR_WEAPON( sub_3065(), 7, ref I );
                            if (I <= 0)
                            {
                                l_U633 = 0;
                            }
                            else
                            {
                                l_U633 = 1;
                            }
                            l_U632++;
                        }
                        break;
                        case 2:
                        ProtectedSet(l_U99, 99);
                        break;
                    }
                }
                break;
                case 99:
                GET_AMMO_IN_CHAR_WEAPON( sub_3065(), 7, ref I );
                if (I <= 0)
                {
                    GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                    if (NOT (HAS_MODEL_LOADED( l_U657[0] )))
                    {
                        REQUEST_MODEL( l_U657[0] );
                        while (NOT (HAS_MODEL_LOADED( l_U657[0] )))
                        {
                            REQUEST_MODEL( l_U657[0] );
                            WAIT( 0 );
                        }
                    }
                    if (IS_PLAYER_PLAYING( sub_2995() ))
                    {
                        GIVE_WEAPON_TO_CHAR( sub_3065(), 7, 50, 0 );
                    }
                }
                else
                {
                    ADD_AMMO_TO_CHAR( sub_3065(), 7, 50 );
                }
                SET_CURRENT_CHAR_WEAPON( sub_3065(), 7, 0 );
                if (l_U102)
                {
                    sub_43188( 0, l_U111 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_43188( 1000, l_U111 );
                }
                REMOVE_ANIMS( "gestures@niko" );
                l_U631 = 0;
                sub_5491( 11, 1 );
                break;
            }
            break;
            case 11:
            sub_52478();
            sub_10390( l_U662 );
            sub_52624();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_20642( l_U662, 0 );
                SWITCH_PED_PATHS_OFF( 1351.35600000, 518.77030000, 15.43400000, 1399.43100000, 545.02030000, 54.15900000 );
                ADD_SCENARIO_BLOCKING_AREA( 1351.35600000, 518.77030000, 15.43400000, 1399.43100000, 545.02030000, 54.15900000 );
                REQUEST_MODEL( -1500397869 );
                GET_WEAPONTYPE_MODEL( 7, ref l_U657[0] );
                GET_WEAPONTYPE_MODEL( 10, ref l_U657[1] );
                REQUEST_MODEL( l_U657[0] );
                REQUEST_MODEL( l_U657[1] );
                while (((NOT (HAS_MODEL_LOADED( -1500397869 ))) || (NOT (HAS_MODEL_LOADED( l_U657[0] )))) || (NOT (HAS_MODEL_LOADED( l_U657[1] ))))
                {
                    REQUEST_MODEL( -1500397869 );
                    REQUEST_MODEL( l_U657[0] );
                    REQUEST_MODEL( l_U657[1] );
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (IS_GROUP_MEMBER( l_U662, sub_10221() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U662 );
                    }
                    GIVE_WEAPON_TO_CHAR( l_U662, 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U662, 7, 1 );
                    SET_CHAR_WILL_USE_COVER( l_U662, 1 );
                    SET_CHAR_RELATIONSHIP( l_U662, 5, 23 );
                    SET_CHAR_MAX_HEALTH( l_U662, 250 );
                    SET_CHAR_HEALTH( l_U662, 250 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                    SET_COMBAT_DECISION_MAKER( l_U662, l_U611 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U662, "move_player" );
                    BLOCK_COWERING_IN_COVER( l_U662, 1 );
                    BLOCK_PEEKING_IN_COVER( l_U662, 1 );
                }
                for ( I = 0; I < 4; I++ )
                {
                    l_U623[I] = 0;
                }
                ADD_COVER_BLOCKING_AREA( 1384.23900000, 523.34000000, 30.93770000, 1386.84900000, 533.39010000, 35.55010000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1382.14000000, 525.98520000, 30.93770000, 1383.86800000, 527.80000000, 35.55010000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1382.06000000, 529.21030000, 30.93770000, 1383.79700000, 530.42990000, 35.55010000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1382.14000000, 528.40990000, 30.93770000, 1382.71000000, 531.54000000, 35.55010000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1383.90000000, 518.28980000, 25.86430000, 1392.70000000, 539.28980000, 37.43930000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1368.26500000, 524.67460000, 31.74510000, 1368.88700000, 526.29710000, 35.11010000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1367.59000000, 527.74060000, 26.23490000, 1368.99000000, 530.81560000, 35.10990000, 1, 1, 1 );
                ADD_COVER_BLOCKING_AREA( 1368.98900000, 531.64070000, 39.92680000, 1372.98900000, 533.04080000, 43.61180000, 1, 1, 1 );
                ADD_COVER_POINT( l_U693._fU0, l_U693._fU4, l_U693._fU8, 0, l_U620, 3, 0, ref l_U604 );
                ADD_COVER_POINT( l_U696._fU0, l_U696._fU4, l_U696._fU8, 1, l_U621, 3, 0, ref l_U605 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U668 );
                    if (IS_CHAR_IN_ANY_CAR( l_U662 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1395.82900000, 529.60380000, 28.97510000, 3, -1, 2.00000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1384.68700000, 529.67220000, 33.11430000, 3, -1, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1383.34400000, 531.14400000, 33.11400000, 3, -1, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U668 );
                    TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                    CLEAR_SEQUENCE_TASK( l_U668 );
                }
                ADD_BLIP_FOR_COORD( 1384.04200000, 528.74830000, 32.11420000, ref l_U575 );
                SET_ROUTE( l_U575, 1 );
                sub_28726( "JA1_M18", 0 );
                SETTIMERA( 0 );
                l_U631 = 0;
                l_U629 = 0;
                l_U628 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    switch (l_U628)
                    {
                        case 0:
                        CLEAR_CHAR_TASKS( l_U662 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        if (IS_CHAR_IN_ANY_CAR( l_U662 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1395.82900000, 529.60380000, 28.97510000, 3, -1, 2.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                        l_U628++;
                        break;
                        case 1:
                        GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                        if (l_U669 == 7)
                        {
                            CLEAR_CHAR_TASKS( l_U662 );
                            OPEN_SEQUENCE_TASK( ref l_U668 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1395.82900000, 529.60380000, 28.97510000, 3, -1, 2.00000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3065() );
                            CLOSE_SEQUENCE_TASK( l_U668 );
                            TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                            CLEAR_SEQUENCE_TASK( l_U668 );
                        }
                        GET_CHAR_COORDINATES( sub_3065(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        if ((LOCATE_CHAR_ON_FOOT_3D( sub_3065(), 1395.82900000, 529.60380000, 28.97510000, 6.00000000, 6.00000000, 2.00000000, 0 )) || (uVar6._fU0 < 1395.82900000))
                        {
                            CLEAR_CHAR_TASKS( l_U662 );
                            OPEN_SEQUENCE_TASK( ref l_U668 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1384.68700000, 529.67220000, 33.11430000, 3, -1, 0.50000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1383.34400000, 531.14400000, 33.11400000, 3, -1, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( l_U668 );
                            TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                            CLEAR_SEQUENCE_TASK( l_U668 );
                            sub_54544();
                            l_U628++;
                        }
                        break;
                        case 2:
                        if (LOCATE_CHAR_ON_FOOT_3D( l_U662, 1383.34400000, 531.14400000, 33.11400000, 1.25000000, 1.25000000, 2.00000000, 0 ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U662, 95, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U662 );
                                TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U668 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1383.34400000, 531.14400000, 33.11400000, 3, -1, 0.50000000 );
                                CLOSE_SEQUENCE_TASK( l_U668 );
                                TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                                CLEAR_SEQUENCE_TASK( l_U668 );
                            }
                        }
                        sub_54544();
                        break;
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3065(), 1383.67500000, 528.74700000, 32.94400000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    SET_PLAYER_CAN_USE_COVER( sub_2995(), 0 );
                }
                else
                {
                    SET_PLAYER_CAN_USE_COVER( sub_2995(), 1 );
                }
                bVar4 = false;
                if ((LOCATE_CHAR_ON_FOOT_3D( sub_3065(), 1383.67500000, 528.74700000, 32.94400000, 1.00000000, 1.00000000, 1.00000000, 1 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                {
                    bVar4 = true;
                }
                if (bVar4)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H4" )))
                    {
                        PRINT_HELP_FOREVER( "JA1_H4" );
                    }
                    if ((IS_CONTROL_PRESSED( 2, 28 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        SET_PLAYER_CONTROL( sub_2995(), 0 );
                        CLEAR_CHAR_TASKS( sub_3065() );
                        SET_PLAYER_CAN_USE_COVER( sub_2995(), 1 );
                        TASK_SEEK_COVER_TO_COVER_POINT( sub_3065(), l_U604, 1376.45500000, 531.47640000, 34.33640000, -1 );
                        SETTIMERA( 0 );
                        REMOVE_BLIP( l_U575 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H4" ))
                {
                    CLEAR_HELP();
                }
                break;
                case 2:
                if ((IS_PED_IN_COVER( sub_3065() )) || (TIMERA() > 2000))
                {
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                if (TIMERA() > 1000)
                {
                    if (sub_29889( 1, 1 ))
                    {
                        sub_5491( 12, 1 );
                    }
                }
                break;
            }
            break;
            case 12:
            if (DOES_CHAR_EXIST( l_U663[1] ))
            {
                sub_32105();
            }
            sub_55465();
            sub_58831();
            sub_52478();
            sub_52624();
            if (l_U581)
            {
                if (l_U612 < 1.00000000)
                {
                    GET_FRAME_TIME( ref uVar14 );
                    l_U612 += uVar14 * 3.00000000;
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U678, 1, l_U612 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_2995() ))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_3065(), 1381.43600000, 526.82820000, 25.84460000, 1385.43600000, 530.15320000, 35.11960000, 0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                    SET_CHAR_COORDINATES( sub_3065(), 1384.04200000, 528.74830000, 32.11420000 );
                    SET_CHAR_HEADING( sub_3065(), 90.00000000 );
                    TASK_SEEK_COVER_TO_COVER_POINT( sub_3065(), l_U604, 1376.45500000, 531.47640000, 34.33640000, -1 );
                }
            }
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_33179( 0, 1 );
                FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1375.00000000, 524.00000000, 22.00000000, 10.00000000, 1702291319, 1 );
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    sub_20642( l_U662, 1 );
                    if ((NOT (IS_PED_IN_COVER( l_U662 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U662, 1383.34400000, 531.14400000, 32.11400000, 0.50000000, 0.50000000, 2.00000000, 0 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U662 );
                        SET_CHAR_COORDINATES( l_U662, 1383.34400000, 531.14400000, 32.11400000 );
                        SET_CHAR_HEADING( l_U662, 270.00000000 );
                        SET_CURRENT_CHAR_WEAPON( l_U662, 7, 1 );
                        TASK_LOOK_AT_CHAR( l_U662, sub_3065(), -2, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U662, "bust_door_idle", "missjacob1", 1000.00000000, 1, 1, 1, 0, -1 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                        TASK_LOOK_AT_CHAR( 0, sub_3065(), -2, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bust_door_idle", "missjacob1", 4.00000000, 1, 1, 1, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                    }
                }
                GET_SCRIPT_TASK_STATUS( sub_3065(), 95, ref l_U669 );
                if (l_U669 == 7)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                    SET_CHAR_COORDINATES( sub_3065(), 1384.04200000, 528.74830000, 32.11420000 );
                    SET_CHAR_HEADING( sub_3065(), 90.00000000 );
                    TASK_SEEK_COVER_TO_COVER_POINT( sub_3065(), l_U604, 1376.45500000, 531.47640000, 34.33640000, -1 );
                }
                GET_AMMO_IN_CHAR_WEAPON( sub_3065(), 7, ref I );
                if (I > 0)
                {
                    SET_CURRENT_CHAR_WEAPON( sub_3065(), 7, 1 );
                }
                CLEAR_AREA( 1384.04200000, 528.74830000, 32.11420000, 2.00000000, 1 );
                CLEAR_WANTED_LEVEL( sub_2995() );
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, 1385.31100000, 531.71910000, 33.62578000 );
                SET_CAM_ROT( l_U111, -1.72286800, -0.00000000, 129.49690000 );
                SET_CAM_FOV( l_U111, 40.20001000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CLEAR_AREA_OF_COPS( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                CLEAR_AREA_OF_CHARS( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                sub_60213( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                l_U618 = 99.90000000;
                l_U619 = 2.00000000;
                l_U629 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (sub_33860( "LJ1_DOOR", ref l_U125, 6, 1 ))
                {
                    l_U629 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (NOT sub_23779())
                {
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        CLEAR_CHAR_TASKS( l_U662 );
                        TASK_CLEAR_LOOK_AT( l_U662 );
                        OPEN_SEQUENCE_TASK( ref l_U668 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bust_open_door_2", "missjacob1", 8.00000000, 0, 1, 1, 0, -1 );
                        TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U668 );
                        TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                        CLEAR_SEQUENCE_TASK( l_U668 );
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (NOT l_U581)
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U662, "missjacob1", "bust_open_door_2" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U662, "missjacob1", "bust_open_door_2", ref fVar5 );
                            if (fVar5 > 0.51800000)
                            {
                                l_U581 = 1;
                            }
                        }
                    }
                    GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                    if (((l_U669 == 7) || (TIMERA() > 7000)) || (l_U581))
                    {
                        CREATE_CAM( 14, ref l_U113 );
                        SET_CAM_POS( l_U113, 1385.88600000, 529.08190000, 32.93890000 );
                        SET_CAM_ROT( l_U113, 17.39116000, -0.00000000, 76.21951000 );
                        SET_CAM_FOV( l_U113, 45.00000000 );
                        l_U618 = 3.50000000;
                        l_U619 = 3.00000000;
                        l_U582 = 1;
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        SET_PLAYER_CONTROL( sub_2995(), 1 );
                        FREEZE_CHAR_POSITION( sub_3065(), 1 );
                        GET_SCRIPT_TASK_STATUS( sub_3065(), 95, ref l_U669 );
                        if (l_U669 == 7)
                        {
                            TASK_SEEK_COVER_TO_COVER_POINT( sub_3065(), l_U604, 1376.45500000, 531.47640000, 34.33640000, -1 );
                        }
                    }
                }
                break;
                case 4:
                if (sub_42199( ref l_U111, ref l_U113, 2000 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U663[1], "GENERIC_FUCK_OFF", 1, 1, 2 );
                    }
                    if (DOES_CAM_EXIST( l_U111 ))
                    {
                        DESTROY_CAM( l_U111 );
                    }
                    if (l_U102)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                        {
                            SET_CHAR_COORDINATES( l_U663[1], 1376.45500000, 531.47640000, 33.33640000 );
                            SET_CHAR_HEADING( l_U663[1], 270.00000000 );
                            l_U623[1] = 2;
                        }
                        sub_43188( 0, l_U113 );
                    }
                    else
                    {
                        sub_43188( 1000, l_U113 );
                    }
                    SETTIMERA( 0 );
                    if ((IS_AUTO_AIMING_ON()) AND (IS_USING_CONTROLLER()))
                    {
                        PRINTSTRING( "Setting auto aim ON version" );
                        PRINT_HELP( "JA1_H5" );
                    }
                    else
                    {
                        PRINTSTRING( "Setting auto aim OFF version" );
                    }
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 5:
                GET_SCRIPT_TASK_STATUS( sub_3065(), 95, ref l_U669 );
                if (l_U669 == 7)
                {
                    ProtectedSet(l_U99, 99);
                }
                if ((IS_AUTO_AIMING_ON()) AND (IS_USING_CONTROLLER()))
                {
                    if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2995(), l_U663[1] )) || (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5" )))) AND (TIMERA() >= 2000))
                    {
                        l_U629 = 1;
                        ProtectedSet(l_U99, 99);
                    }
                }
                else if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2995(), l_U663[1] )) AND (TIMERA() >= 2000))
                {
                    l_U629 = 1;
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                l_U582 = 1;
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U662 );
                }
                if (DOES_CAM_EXIST( l_U111 ))
                {
                    DESTROY_CAM( l_U111 );
                }
                CREATE_CAM( 14, ref l_U113 );
                SET_CAM_POS( l_U113, 1385.88600000, 529.08190000, 32.93890000 );
                SET_CAM_ROT( l_U113, 17.39116000, -0.00000000, 76.21951000 );
                SET_CAM_FOV( l_U113, 45.00000000 );
                sub_43188( 0, l_U113 );
                if (NOT l_U585)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U678, 1, 1.00000000 );
                    l_U585 = 1;
                }
                FREEZE_CHAR_POSITION( sub_3065(), 0 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                l_U603 = 1;
                sub_5491( 13, 1 );
                break;
            }
            break;
            case 13:
            sub_58831();
            sub_52478();
            sub_52624();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_20642( l_U662, 0 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                l_U597 = 1;
                sub_55465();
                if (sub_61900())
                {
                    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1375.00000000, 524.00000000, 22.00000000, 10.00000000, 1702291319, 1 );
                    CLEAR_AREA( l_U687._fU0, l_U687._fU4, l_U687._fU8, 1.00000000, 1 );
                    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, l_U687, l_U690, ref l_U661 );
                    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U661, "Room_KitchBen2" );
                    SET_PLAYER_CONTROL( sub_2995(), 1 );
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 0 );
                        TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                        BLOCK_PEEKING_IN_COVER( l_U662, 0 );
                    }
                    STOP_PED_SPEAKING( sub_3065(), 1 );
                    l_U628 = 0;
                    l_U634 = 0;
                    l_U632 = 0;
                    l_U631 = 0;
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 1:
                if (NOT l_U602)
                {
                    if (TIMERA() > 5000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                        {
                            SET_CAN_TARGET_CHAR_WITHOUT_LOS( l_U663[1], 0 );
                            l_U602 = 1;
                        }
                    }
                }
                sub_55465();
                if ((NOT l_U588) AND (NOT l_U589))
                {
                    switch (l_U629)
                    {
                        case 0:
                        if ((IS_AUTO_AIMING_ON()) AND (IS_USING_CONTROLLER()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                            {
                                SET_CAN_TARGET_CHAR_WITHOUT_LOS( l_U663[1], 1 );
                            }
                            if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                PRINT_HELP( "JA1_H5" );
                                l_U588 = 1;
                                l_U629++;
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5" ))
                            {
                                l_U588 = 1;
                                l_U629++;
                            }
                        }
                        else if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                        {
                            l_U588 = 1;
                            l_U629++;
                        }
                        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5B" ))
                        {
                            l_U588 = 1;
                            l_U629++;
                        };;;
                        break;
                        case 1:
                        bVar4 = false;
                        if (IS_AUTO_AIMING_ON())
                        {
                            if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5" ))) AND (l_U635 == 0))
                            {
                                bVar4 = true;
                            }
                        }
                        else if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5B" ))) AND (l_U635 == 0))
                        {
                            bVar4 = true;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_2995(), l_U663[1] ))
                            {
                                if (l_U616 > 1000.00000000)
                                {
                                    bVar4 = true;
                                }
                            }
                            else
                            {
                                l_U616 = 0.00000000;
                            }
                        }
                        if (bVar4)
                        {
                            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H5B" )))
                            {
                                CLEAR_HELP();
                            }
                            if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                PRINT_HELP( "JA1_H6_PC" );
                                l_U588 = 1;
                                l_U629++;
                            }
                        }
                        else if (NOT (l_U635 == 0))
                        {
                            l_U629++;
                        }
                        break;
                        case 2:
                        if (l_U628 > 2)
                        {
                            if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                if ((NOT (IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 ))) AND (NOT (IS_CHAR_IN_AREA_3D( sub_3065(), 1362.94900000, 527.54840000, 28.83660000, 1382.82400000, 532.57340000, 35.11160000, 0 ))))
                                {
                                    if (IS_PED_IN_COVER( sub_3065() ))
                                    {
                                        PRINT_HELP( "JA1_H11" );
                                        l_U588 = 1;
                                        l_U629++;
                                    }
                                    else
                                    {
                                        l_U629++;
                                    }
                                }
                                else
                                {
                                    l_U629++;
                                }
                            }
                        }
                        break;
                        case 3:
                        if ((IS_CHAR_IN_AREA_3D( sub_3065(), 1362.81800000, 522.89460000, 32.11000000, 1381.55000000, 528.11410000, 35.11000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3065(), 1362.83400000, 527.31600000, 32.11180000, 1370.59600000, 532.47380000, 35.11180000, 0 )))
                        {
                            if (IS_PED_IN_COVER( sub_3065() ))
                            {
                                if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                                {
                                    PRINT_HELP( "JA1_H7" );
                                    l_U588 = 1;
                                    l_U629++;
                                }
                            }
                        }
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JA1_H11" ))
                        {
                            if (NOT (IS_PED_IN_COVER( sub_3065() )))
                            {
                                CLEAR_HELP();
                            }
                        }
                        break;
                    }
                }
                if ((((NOT sub_23779()) AND (NOT l_U589)) AND (NOT l_U588)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                {
                    switch (l_U634)
                    {
                        case 0:
                        if (l_U629 > 2)
                        {
                            if ((NOT (IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 ))) AND (NOT (IS_CHAR_IN_AREA_3D( sub_3065(), 1362.94900000, 527.54840000, 28.83660000, 1382.82400000, 532.57340000, 35.11160000, 0 ))))
                            {
                                sub_28726( "JA1_M23", 0 );
                                l_U588 = 1;
                                l_U634++;
                            }
                            else
                            {
                                l_U634++;
                            }
                        }
                        break;
                        case 1: break;
                        case 2:
                        if (l_U642 > 1)
                        {
                            sub_28726( "JA1_M17", 0 );
                        }
                        else if (l_U642 == 1)
                        {
                            sub_28726( "JA1_M24", 0 );
                        }
                        l_U588 = 1;
                        l_U634++;
                        break;
                    }
                }
                else if (l_U634 == 1)
                {
                    if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if ((IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3065(), 1362.94900000, 527.54840000, 28.83660000, 1382.82400000, 532.57340000, 35.11160000, 0 )))
                        {
                            CLEAR_PRINTS();
                            l_U634++;
                        }
                    }
                    else
                    {
                        l_U634++;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    switch (l_U628)
                    {
                        case 0:
                        TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U662, 1383.67600000, 531.18080000, 32.11430000, 1.50000000 );
                        l_U628++;
                        break;
                        case 1:
                        if (NOT l_U592)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U662 )))
                            {
                                FORCE_PED_PINNED_DOWN( l_U662, 1, 9999999 );
                                l_U592 = 1;
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U662 )))
                        {
                            if (IS_CHAR_IN_AREA_3D( l_U662, 1383.02600000, 530.44480000, 32.11960000, 1383.72600000, 531.44480000, 35.11960000, 0 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U662, 95, ref l_U669 );
                                if (l_U669 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U662 );
                                    TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U662, 27, ref l_U669 );
                                if (l_U669 == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U662, 1383.34400000, 531.14400000, 33.11400000, 3, -1, 0.50000000 );
                                }
                            }
                        }
                        if (IS_CHAR_INJURED( l_U663[1] ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                            TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                            SETTIMERA( 0 );
                            l_U628++;
                        }
                        else
                        {
                            sub_64389();
                        }
                        break;
                        case 2:
                        if ((NOT (IS_CHAR_INJURED( l_U663[0] ))) AND (NOT (sub_64574( sub_3065() ))))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U662 )))
                            {
                                if (IS_CHAR_IN_AREA_3D( l_U662, 1383.02600000, 530.44480000, 32.11960000, 1383.72600000, 531.44480000, 35.11960000, 0 ))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U662, 95, ref l_U669 );
                                    if (l_U669 == 7)
                                    {
                                        CLEAR_CHAR_TASKS( l_U662 );
                                        TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                                    }
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U662, 27, ref l_U669 );
                                    if (l_U669 == 7)
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U662, 1383.34400000, 531.14400000, 33.11400000, 3, -1, 0.50000000 );
                                    }
                                }
                            }
                            if (TIMERA() > 1000)
                            {
                                switch (l_U635)
                                {
                                    case 0:
                                    sub_33179( 0, 1 );
                                    l_U589 = 1;
                                    CLEAR_HELP();
                                    CLEAR_PRINTS();
                                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                                    {
                                        SET_CHAR_PROOFS( l_U662, 1, 1, 1, 1, 1 );
                                        FORCE_PED_PINNED_DOWN( l_U662, 0, 0 );
                                        l_U592 = 0;
                                        GET_SCRIPT_TASK_STATUS( l_U662, 95, ref l_U669 );
                                        if (l_U669 == 7)
                                        {
                                            CLEAR_CHAR_TASKS( l_U662 );
                                            TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1380.13400000, 529.94830000, 33.11010000, 0 );
                                        }
                                    }
                                    CREATE_CAM( 14, ref l_U111 );
                                    SET_CAM_POS( l_U111, 1384.84500000, 531.29750000, 33.78900000 );
                                    SET_CAM_ROT( l_U111, -4.63240000, 0.00000000, 124.47840000 );
                                    SET_CAM_FOV( l_U111, 55.00000000 );
                                    SET_CAM_ACTIVE( l_U111, 1 );
                                    SET_CAM_PROPAGATE( l_U111, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    GET_GAME_VIEWPORT_ID( ref l_U677 );
                                    CLEAR_ROOM_FOR_VIEWPORT( l_U677 );
                                    CLEAR_AREA_OF_COPS( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                                    SETTIMERA( 0 );
                                    l_U631 = 0;
                                    l_U635++;
                                    break;
                                    case 1:
                                    if ((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                                    {
                                        switch (l_U632)
                                        {
                                            case 0:
                                            if (l_U631 < l_U654)
                                            {
                                                if (sub_24124( "LJ1_WINDO", l_U631, 1, ref l_U125, 6, 1 ))
                                                {
                                                    SETTIMERA( 0 );
                                                    l_U631++;
                                                }
                                            }
                                            else
                                            {
                                                l_U631 = 0;
                                                l_U632++;
                                            }
                                            break;
                                            default:
                                        }
                                    }
                                    if (((l_U631 > 1) || (IS_CONTROL_PRESSED( 2, 77 ))) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                                    {
                                        sub_65631();
                                        SET_CAM_ACTIVE( l_U111, 0 );
                                        SET_CAM_PROPAGATE( l_U111, 0 );
                                        l_U618 = 2.50000000;
                                        l_U619 = 2.50000000;
                                        SETTIMERA( 0 );
                                        l_U588 = 1;
                                        l_U635++;
                                    }
                                    break;
                                    case 2:
                                    if ((((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() > 4000)) || (IS_CONTROL_PRESSED( 2, 77 ))) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                                    {
                                        l_U635 = 99;
                                    }
                                    break;
                                    case 99:
                                    for ( I = 0; I < 4; I++ )
                                    {
                                        if (DOES_CAM_EXIST( l_U700[I] ))
                                        {
                                            DESTROY_CAM( l_U700[I] );
                                        }
                                    }
                                    if (DOES_CAM_EXIST( l_U699 ))
                                    {
                                        DESTROY_CAM( l_U699 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                                    {
                                        SET_CHAR_COLLISION( l_U662, 1 );
                                        FREEZE_CHAR_POSITION( l_U662, 0 );
                                        SET_CHAR_PROOFS( l_U662, 0, 0, 0, 0, 0 );
                                    }
                                    sub_26770( 0, 1, 0 );
                                    SET_GAME_CAM_HEADING( 90.00000000 );
                                    SET_PLAYER_CONTROL( sub_2995(), 1 );
                                    PRINT_HELP( "JA1_H9" );
                                    l_U631 = 0;
                                    l_U589 = 0;
                                    l_U635++;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            SETTIMERA( 0 );
                            l_U631 = 0;
                            l_U587 = 0;
                            sub_54544();
                            l_U628++;
                        }
                        break;
                        case 3:
                        if (((IS_CHAR_INJURED( l_U663[2] )) AND (IS_CHAR_INJURED( l_U663[3] ))) AND (IS_CHAR_INJURED( l_U663[0] )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U662 )))
                            {
                                if (NOT l_U587)
                                {
                                    CLEAR_PRINTS();
                                    if (sub_23801( l_U125 ))
                                    {
                                        sub_25947( ref l_U125, 0 );
                                    }
                                    CLEAR_CHAR_TASKS( l_U662 );
                                    l_U587 = 1;
                                }
                            }
                            if (NOT sub_23779())
                            {
                                switch (l_U631)
                                {
                                    case 0:
                                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U668 );
                                        if (LOCATE_CHAR_ANY_MEANS_3D( l_U662, 1375.76000000, 524.55980000, 33.10990000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                                        {
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1375.76000000, 524.55980000, 33.10990000, 2, -1, 0.50000000 );
                                        }
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3065() );
                                        CLOSE_SEQUENCE_TASK( l_U668 );
                                        TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                                        CLEAR_SEQUENCE_TASK( l_U668 );
                                    }
                                    l_U631++;
                                    break;
                                    case 1:
                                    l_U631++;
                                    break;
                                }
                            }
                            if (l_U631 > 1)
                            {
                                SETTIMERA( 0 );
                                l_U628++;
                            }
                        }
                        else if ((l_U629 > 0) AND (l_U634 > 0))
                        {
                            sub_64389();
                        }
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U662, 1375.76000000, 524.55980000, 33.10990000, 1.00000000, 1.00000000, 2.00000000, 0 )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U662, 0, 0 );
                            GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                            if (l_U669 == 7)
                            {
                                FORCE_PED_PINNED_DOWN( l_U662, 0, 0 );
                                l_U592 = 0;
                                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U662, 1375.76000000, 524.55980000, 33.10990000, 1.50000000 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                                OPEN_SEQUENCE_TASK( ref l_U668 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1375.76000000, 524.55980000, 33.10990000, 3, -1, 0.50000000 );
                                TASK_SEEK_COVER_TO_COORDS( 0, 1375.76000000, 524.55980000, 33.10990000, 1368.22700000, 525.81530000, 33.10990000, 1000 );
                                if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                                {
                                    TASK_COMBAT( 0, l_U663[2] );
                                }
                                else if (NOT (IS_CHAR_INJURED( l_U663[3] )))
                                {
                                    TASK_COMBAT( 0, l_U663[3] );
                                }
                                CLOSE_SEQUENCE_TASK( l_U668 );
                                TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                                CLEAR_SEQUENCE_TASK( l_U668 );
                            }
                        }
                        else if (NOT l_U592)
                        {
                            FORCE_PED_PINNED_DOWN( l_U662, 1, 9999999 );
                            l_U592 = 1;
                        }
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 0 );;;
                        break;
                        case 4:
                        if (TIMERA() > 1000)
                        {
                            CLEAR_HELP();
                            l_U628 = 99;
                        }
                        break;
                    }
                }
                if (NOT l_U601)
                {
                    if ((IS_CHAR_INJURED( l_U663[0] )) AND (IS_CHAR_INJURED( l_U663[1] )))
                    {
                        if (sub_64574( sub_3065() ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U678, 0, 0.00000000 );
                            l_U601 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3065(), l_U662, 350.00000000, 350.00000000, 0 )))
                    {
                        SET_CHAR_HEALTH( l_U662, 0 );
                    }
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U663[I] ))
                        {
                            DELETE_CHAR( ref l_U663[I] );
                        }
                    }
                }
                iVar3 = 0;
                for ( I = 0; I < 4; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U663[I] ))
                    {
                        if (IS_CHAR_INJURED( l_U663[I] ))
                        {
                            iVar3++;
                        }
                    }
                    else if (l_U640 == 4)
                    {
                        iVar3++;
                    }
                }
                for ( I = 0; I < 4; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U576[I] ))
                    {
                        if (DOES_CHAR_EXIST( l_U663[I] ))
                        {
                            if (IS_CHAR_INJURED( l_U663[I] ))
                            {
                                REMOVE_BLIP( l_U576[I] );
                            }
                        }
                        else
                        {
                            REMOVE_BLIP( l_U576[I] );
                        }
                    }
                }
                if (l_U617 > 10000.00000000)
                {
                    bVar4 = true;
                    for ( I = 0; I < 3; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                        {
                            if (IS_AMBIENT_SPEECH_PLAYING( l_U663[I] ))
                            {
                                bVar4 = false;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        if (IS_AMBIENT_SPEECH_PLAYING( l_U662 ))
                        {
                            bVar4 = false;
                        }
                    }
                    if (sub_23801( l_U125 ))
                    {
                        bVar4 = false;
                    }
                    if (bVar4)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U663[0] )))
                        {
                            iVar12 = l_U663[0];
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U663[1] )))
                        {
                            iVar12 = l_U663[1];
                        }
                        else if ((NOT (IS_CHAR_INJURED( l_U663[2] ))) AND (NOT (IS_CHAR_INJURED( l_U663[3] ))))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 2, 4, ref I );
                            iVar12 = l_U663[I];
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U663[2] )))
                        {
                            iVar12 = l_U663[2];
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U663[3] )))
                        {
                            iVar12 = l_U663[3];
                        };;;;;
                        if (NOT (IS_CHAR_INJURED( iVar12 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                            switch (I)
                            {
                                case 0:
                                SAY_AMBIENT_SPEECH( iVar12, "GANG_ATTACK_WARNING", 1, 1, 2 );
                                break;
                                case 1:
                                SAY_AMBIENT_SPEECH( iVar12, "MOVE_IN", 1, 1, 2 );
                                break;
                                case 2:
                                SAY_AMBIENT_SPEECH( iVar12, "SHIT", 1, 1, 2 );
                                break;
                            }
                            l_U617 = 0.00000000;
                        }
                    }
                }
                if ((iVar3 == 4) AND (l_U628 == 99))
                {
                    STOP_PED_SPEAKING( sub_3065(), 0 );
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        FORCE_PED_PINNED_DOWN( l_U662, 0, 0 );
                        CLEAR_CHAR_TASKS( l_U662 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U662, sub_3065() );
                        TASK_LOOK_AT_CHAR( l_U662, sub_3065(), -2, 0 );
                        l_U592 = 0;
                    }
                    if (NOT (HAS_PICKUP_BEEN_COLLECTED( l_U661 )))
                    {
                        l_U101 = 1;
                        sub_5491( 19, 1 );
                    }
                    else
                    {
                        SETTIMERA( 0 );
                        sub_5491( 15, 1 );
                    }
                }
                break;
            }
            break;
            case 19:
            sub_32105();
            sub_10390( l_U662 );
            sub_52624();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (sub_29889( 1, 1 ))
                {
                    sub_33179( 0, 0 );
                    if (sub_64574( sub_3065() ))
                    {
                        PRINTSTRING( "Jacob1 - Char is in kitchen \n" );
                        CREATE_CAM( 14, ref l_U111 );
                        SET_CAM_POS( l_U111, 1367.49800000, 524.59090000, 34.37550000 );
                        SET_CAM_ROT( l_U111, -36.19570000, 0.00000000, 49.55210000 );
                        SET_CAM_FOV( l_U111, 35.70000000 );
                        SET_CAM_ACTIVE( l_U111, 1 );
                        SET_CAM_PROPAGATE( l_U111, 1 );
                        SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 2000 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    }
                    else
                    {
                        PRINTSTRING( "Jacob1 - Char is not in lounge or kitchen \n" );
                        CREATE_CAM( 14, ref l_U111 );
                        SET_CAM_POS( l_U111, 1367.49800000, 524.59090000, 34.37550000 );
                        SET_CAM_ROT( l_U111, -36.19570000, 0.00000000, 49.55210000 );
                        SET_CAM_FOV( l_U111, 35.70000000 );
                        SET_CAM_ACTIVE( l_U111, 1 );
                        SET_CAM_PROPAGATE( l_U111, 1 );
                        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        WAIT( 0 );
                        GET_GAME_VIEWPORT_ID( ref l_U677 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U677, "Room_KitchBen2" );
                    }
                    CLEAR_AREA_OF_COPS( 1417.53000000, 521.36400000, 30.58094000, 200.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    PRINT_HELP( "JA1_H12" );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (TIMERA() > 6000))
                {
                    CLEAR_HELP();
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                for ( I = 0; I < 4; I++ )
                {
                    if (DOES_CAM_EXIST( l_U700[I] ))
                    {
                        DESTROY_CAM( l_U700[I] );
                    }
                }
                if (DOES_CAM_EXIST( l_U699 ))
                {
                    DESTROY_CAM( l_U699 );
                }
                sub_26770( 0, 1, 0 );
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                SETTIMERA( 0 );
                sub_5491( 15, 1 );
                break;
            }
            break;
            case 15:
            if (l_U597)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
                {
                    ALLOW_EMERGENCY_SERVICES( 1 );
                    l_U597 = 0;
                }
            }
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), l_U662, 10.00000000, 10.00000000, 2.00000000, 0 ))
                    {
                        TASK_CLEAR_LOOK_AT( l_U662 );
                        CLEAR_CHAR_TASKS( l_U662 );
                        CLEAR_PRINTS();
                        if (DOES_BLIP_EXIST( l_U575 ))
                        {
                            REMOVE_BLIP( l_U575 );
                        }
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                    else if (TIMERA() > 1000)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U575 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U662, ref l_U575 );
                            SET_BLIP_AS_FRIENDLY( l_U575, 1 );
                            sub_28726( "JA1_M14", 0 );
                            l_U588 = 1;
                        }
                    }
                }
                break;
                case 1:
                DONT_DISPATCH_COPS_FOR_PLAYER( sub_2995(), 0 );
                SET_CREATE_RANDOM_COPS( 1 );
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U662, sub_10221() )))
                    {
                        CLEAR_CHAR_TASKS( l_U662 );
                        SET_GROUP_MEMBER( sub_10221(), l_U662 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U662, 1 );
                    }
                }
                SETTIMERA( 0 );
                SWITCH_PED_PATHS_OFF( 1426.71100000, 27.77030000, 18.16470000, 1490.13600000, 73.99540000, 33.01470000 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (sub_33860( "LJ1_GOONS", ref l_U125, 6, 1 ))
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    if (NOT sub_23779())
                    {
                        if (sub_24124( "LJ1_UP2", 1, 1, ref l_U125, 6, 1 ))
                        {
                            l_U631 = 0;
                            l_U632 = 0;
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U633 );
                            TASK_SWAP_WEAPON( l_U662, 0 );
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                }
                break;
                case 4:
                if (NOT sub_23779())
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 5:
                if (sub_49951( 1482.85400000, 54.48600000, 26.12100000, 2.50000000, 2.50000000, 2.50000000, 1, l_U662, "JA1_M6", "JA1_M3", 0, 0, 0 ))
                {
                    SET_PLAYER_CONTROL( sub_2995(), 0 );
                    sub_5491( 16, 1 );
                }
                else
                {
                    sub_31616( l_U662 );
                }
                if (sub_25135( sub_3065(), l_U662 ))
                {
                    switch (l_U632)
                    {
                        case 0:
                        if (l_U633 == 0)
                        {
                            if (NOT sub_23779())
                            {
                                if (sub_33860( "LJ1_CAFE1", ref l_U125, 6, 1 ))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U633 );
                                    l_U631 = 0;
                                    l_U632++;
                                }
                            }
                        }
                        else if (NOT sub_23779())
                        {
                            if (sub_33860( "LJ1_CAFE2", ref l_U125, 6, 1 ))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U633 );
                                l_U631 = 0;
                                l_U632++;
                            }
                        }
                        break;
                        case 1:
                        switch (g_U64935)
                        {
                            case 0:
                            if (l_U631 < l_U655)
                            {
                                if (NOT sub_23779())
                                {
                                    if (sub_24124( "LJ1_BANT3V1", l_U631, 1, ref l_U125, 6, 1 ))
                                    {
                                        l_U631++;
                                    }
                                }
                            }
                            else
                            {
                                g_U64935++;
                                l_U631 = 0;
                                l_U632++;
                            }
                            break;
                            case 1:
                            if (l_U631 < l_U656)
                            {
                                if (NOT sub_23779())
                                {
                                    if (sub_24124( "LJ1_BANT3V2", l_U631, 1, ref l_U125, 6, 1 ))
                                    {
                                        l_U631++;
                                    }
                                }
                            }
                            else
                            {
                                g_U64935++;
                                l_U631 = 0;
                                l_U632++;
                            }
                            break;
                            default:
                            SAY_AMBIENT_SPEECH( l_U662, "LISTEN_TO_RADIO", 0, 0, 0 );
                            g_U64935++;
                            if (g_U64935 >= 5)
                            {
                                g_U64935 = 0;
                            }
                            l_U631 = 0;
                            l_U632++;
                            break;
                        }
                        break;
                    }
                }
                else if (sub_23801( l_U125 ))
                {
                    sub_25947( ref l_U125, 0 );
                    l_U631--;
                    if (l_U631 < 0)
                    {
                        l_U631 = 0;
                    }
                }
                break;
            }
            break;
            case 16:
            sub_32470( ref l_U111, sub_3065(), l_U618, l_U619 );
            sub_32105();
            sub_10390( l_U662 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (sub_29889( 1, 1 ))
                {
                    sub_33179( 1, 1 );
                    CREATE_CAM( 14, ref l_U111 );
                    SET_CAM_POS( l_U111, 1498.36500000, 41.35383000, 28.86989000 );
                    SET_CAM_ROT( l_U111, -7.33784300, -0.00000000, 50.53767000 );
                    SET_CAM_FOV( l_U111, 22.90000000 );
                    SET_CAM_ACTIVE( l_U111, 1 );
                    SET_CAM_PROPAGATE( l_U111, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    l_U618 = 3.00000000;
                    l_U619 = 5.00000000;
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3065(), l_U662, -2, 0 );
                    }
                    sub_6641( 1477.68800000, 54.36280000, 24.73720000, 5.00000000, 1483.26400000, 45.06430000, 23.82750000, 181.09470000 );
                    CLEAR_AREA_OF_CARS( 1477.68800000, 54.36280000, 24.73720000, 5.00000000 );
                    REQUEST_ANIMS( "gestures@niko" );
                    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U662 )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U662, sub_3065() );
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3065() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3065(), l_U662 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U631 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 1:
                if (NOT sub_23779())
                {
                    switch (l_U631)
                    {
                        case 0:
                        if (sub_24124( "LJ1_END", 0, 1, ref l_U125, 6, 1 ))
                        {
                            l_U631++;
                        }
                        break;
                        case 1:
                        if (sub_24124( "LJ1_END", 1, 1, ref l_U125, 6, 1 ))
                        {
                            l_U631++;
                        }
                        break;
                        case 2:
                        if (sub_24124( "LJ1_END", 2, 1, ref l_U125, 6, 1 ))
                        {
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                        break;
                    }
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U668 );
                    if (IS_CHAR_IN_ANY_CAR( l_U662 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1473.47200000, 54.47020000, 25.18550000, 2, 15000, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U668 );
                    TASK_PERFORM_SEQUENCE( l_U662, l_U668 );
                    CLEAR_SEQUENCE_TASK( l_U668 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                bVar4 = false;
                if (NOT (IS_CHAR_INJURED( l_U662 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U662, 29, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        bVar4 = true;
                    }
                }
                if (TIMERA() > 10000)
                {
                    bVar4 = true;
                }
                if (bVar4)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                REMOVE_ANIMS( "gestures@niko" );
                TASK_CLEAR_LOOK_AT( sub_3065() );
                sub_26770( 0, 1, 0 );
                sub_20642( l_U662, 0 );
                if (DOES_CHAR_EXIST( l_U662 ))
                {
                    DELETE_CHAR( ref l_U662 );
                }
                SET_PLAYER_CONTROL( sub_2995(), 1 );
                sub_72048();
                break;
            }
            break;
            case 18:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT sub_23779())
                {
                    if (sub_83759( 3, "LJ1_AWAY", "LJ1AUD" ))
                    {
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 1:
                if (sub_41156( 0 ))
                {
                    sub_2986();
                }
                break;
            }
            break;
        }
        if (DOES_CHAR_EXIST( l_U662 ))
        {
            if ((IS_CHAR_INJURED( l_U662 )) AND (sub_29889( 1, 1 )))
            {
                sub_83935( 3, l_U662, 3 );
                sub_47919( "JA1_M5" );
                sub_2986();
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            sub_5491( 18, 1 );
            sub_47919( "DEBUG" );
            sub_2986();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_72048();
        }
        if (l_U600)
        {
            for ( I = 0; I < 4; I++ )
            {
                if (DOES_CAM_EXIST( l_U700[I] ))
                {
                    DESTROY_CAM( l_U700[I] );
                }
            }
            if (DOES_CAM_EXIST( l_U699 ))
            {
                DESTROY_CAM( l_U699 );
            }
            sub_5491( 19, 1 );
            l_U600 = 0;
        }
        l_U588 = 0;
        sub_84180();
    }
    return;
}

void sub_876()
{
    sub_885();
    return;
}

void sub_885()
{
    int iVar2;

    iVar2 = 3;
    sub_899( iVar2 );
    sub_2075( iVar2 );
    return;
}

void sub_899(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_943();
        sub_1104();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1212();
            sub_1251();
        }
    }
    sub_1327();
    sub_1428();
    uVar5 = sub_1541( uParam0 );
    sub_1982( uVar5, 0 );
    return;
}

void sub_943()
{
    sub_957( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1057();
    }
    return;
}

void sub_957(int iParam0)
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
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1057()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1104()
{
    sub_1113();
    return;
}

void sub_1113()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1212()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1251()
{
    sub_1260();
    return;
}

void sub_1260()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1327()
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

void sub_1428()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1450();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1450()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1541(unknown uParam0)
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
    sub_1940( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1940(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1982(int iParam0, boolean bParam1)
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

void sub_2075(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2084();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2859();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2084()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2122( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2122( 1, g_U569[I] )) != 0)
            {
                sub_2408( I );
            }
        }
    }
    if (NOT sub_2574())
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

int sub_2122(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2408(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2493( g_U569 - 1 );
    return;
}

void sub_2493(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2574()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2122( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2859()
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

void sub_2986()
{
    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_2995(), 150 );
            SAY_AMBIENT_SPEECH( sub_3065(), "MISSION_FAIL_RAGE", 1, 1, 0 );
        }
    }
    sub_3136();
    sub_3249();
    return;
}

void sub_2995()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3065()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3136()
{
    sub_3145();
    return;
}

void sub_3145()
{
    int iVar2;

    iVar2 = 3;
    sub_3159( iVar2 );
    sub_2075( iVar2 );
    return;
}

void sub_3159(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2995(), 150 );
    CLEAR_HELP();
    sub_899( uParam0 );
    return;
}

void sub_3249()
{
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1260.06000000, 101.97290000, 25.00000000, 1374.07100000, 120.51070000, 35.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1804.01300000, 461.92520000, 12.13000000, 1815.13800000, 573.65020000, 40.23000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U678, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U681, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U684, 0, 0.00000000 );
    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        ALLOW_EMERGENCY_SERVICES( 1 );
        SET_PLAYER_CAN_USE_COVER( sub_2995(), 1 );
        SET_PLAYER_CONTROL( sub_2995(), 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2995(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2995(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        STOP_PED_SPEAKING( sub_3065(), 0 );
    }
    sub_3546();
    if (NOT (l_U604 == nil))
    {
        REMOVE_COVER_POINT( l_U604 );
    }
    if (NOT (l_U605 == nil))
    {
        REMOVE_COVER_POINT( l_U605 );
    }
    g_U2219 = 0;
    CLEAR_NAMED_CUTSCENE( "lilj1_a" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3546()
{
    if (l_U103)
    {
        sub_3565();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_3833( ref l_U100 );
        l_U103 = 0;
    }
    return;
}

void sub_3565()
{
    int Result;

    Result = 0;
    if (DOES_CAM_EXIST( l_U111 ))
    {
        SET_CAM_ACTIVE( l_U111, 0 );
        SET_CAM_PROPAGATE( l_U111, 0 );
        DESTROY_CAM( l_U111 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U112 ))
    {
        SET_CAM_ACTIVE( l_U112, 0 );
        SET_CAM_PROPAGATE( l_U112, 0 );
        DESTROY_CAM( l_U112 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U113 ))
    {
        SET_CAM_ACTIVE( l_U113, 0 );
        SET_CAM_PROPAGATE( l_U113, 0 );
        DESTROY_CAM( l_U113 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U114 ))
    {
        SET_CAM_ACTIVE( l_U114, 0 );
        SET_CAM_PROPAGATE( l_U114, 0 );
        DESTROY_CAM( l_U114 );
        Result = 1;
    }
    return Result;
}

void sub_3833(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_3988(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4005();
    return;
}

void sub_4005()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_4124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4204( "\n PED NUMBER ", uParam0 );
    sub_4244( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4204(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4244(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4301(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    Result = 0;
    REQUEST_ADDITIONAL_TEXT( uParam0, 6 );
    while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 6 )))
    {
        WAIT( 0 );
    }
    sub_4359( ref uVar5, uParam1, Result + 1, -1, -1 );
    ConcatString(ref uVar5, "A", 16);
    while (DOES_TEXT_LABEL_EXIST( ref uVar5 ))
    {
        Result++;
        sub_4359( ref uVar5, uParam1, Result + 1, -1, -1 );
        ConcatString(ref uVar5, "A", 16);
    }
    return Result;
}

void sub_4359(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_4782()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U614 += fVar2;
    l_U615 += fVar2;
    l_U616 += fVar2;
    l_U617 += fVar2;
    return;
}

void sub_4869()
{
    if (NOT l_U583)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U678, 1, 0.00000000 );
        l_U583 = 1;
    }
    if (NOT l_U584)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U681, 1, 0.00000000 );
        l_U584 = 1;
    }
    if (NOT l_U586)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U684, 1, 0.00000000 );
        l_U584 = 1;
    }
    return;
}

void sub_5491(int iParam0, boolean bParam1)
{
    l_U110 = 0;
    if (NOT (l_U98 == iParam0))
    {
        sub_5520();
        if (bParam1)
        {
            if (NOT l_U109)
            {
                CLEAR_PRINTS();
            }
        }
        CLEAR_HELP();
        l_U98 = iParam0;
        ProtectedSet(l_U99, 0);
        l_U101 = 1;
        l_U102 = 0;
        l_U110 = 1;
    }
    return;
}

void sub_5520()
{
    int I;

    if (DOES_BLIP_EXIST( l_U120 ))
    {
        REMOVE_BLIP( l_U120 );
    }
    if (DOES_BLIP_EXIST( l_U121 ))
    {
        REMOVE_BLIP( l_U121 );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U116[I] ))
        {
            REMOVE_BLIP( l_U116[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U115 ))
    {
        REMOVE_BLIP( l_U115 );
    }
    l_U108 = 0;
    return;
}

void sub_5824(unknown uParam0)
{
    REQUEST_MODEL( sub_5835( uParam0 ) );
    return;
}

int sub_5835(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1940( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6641(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3065(), uVar10 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar10 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar10 );
                    bVar11 = true;
                }
            }
            else
            {
                uVar10 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (LOCATE_CAR_3D( uVar10, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar10, uParam7 );
                SET_CAR_COORDINATES( uVar10, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
                sub_6903( uVar10 );
                sub_6981( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_7116( uVar10 );
        }
    }
    return;
}

void sub_6903(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_HELI( uVar3 )))
        {
            CLOSE_ALL_CAR_DOORS( uParam0 );
        }
    }
    return;
}

int sub_6981(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                if (SET_CAR_ON_GROUND_PROPERLY( uParam0 ))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_7116(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_7419(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5835( uParam0 ) );
}

void sub_7519()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_3065(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

int sub_7828(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -498054846;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {1311.40700000, 94.34690000, 33.77160000};
    fVar7 = 0.00000000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 40, 0 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    return 1;
}

void sub_8206(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        GET_CAR_MODEL( (uParam0^), ref iVar5 );
        if ((NOT (IS_THIS_MODEL_A_BOAT( iVar5 ))) AND (NOT (IS_THIS_MODEL_A_PLANE( iVar5 ))))
        {
            GET_CAR_COLOURS( (uParam0^), ref iVar3, ref iVar4 );
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar6 );
            if (DOES_VEHICLE_EXIST( uVar6 ))
            {
                if (NOT (IS_CAR_DEAD( uVar6 )))
                {
                    if (NOT (IS_CAR_A_MISSION_CAR( uVar6 )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3065(), uVar6 )))
                        {
                            GET_CAR_MODEL( uVar6, ref iVar9 );
                            if ((NOT (IS_THIS_MODEL_A_BOAT( iVar9 ))) AND (NOT (IS_THIS_MODEL_A_PLANE( iVar9 ))))
                            {
                                GET_CAR_COLOURS( uVar6, ref iVar7, ref iVar8 );
                                if (((iVar7 == iVar3) AND (iVar8 == iVar4)) AND (iVar9 == iVar5))
                                {
                                    DELETE_CAR( ref uVar6 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_8494(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5835( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_8544( uParam0, (uParam1^) );
    return;
}

void sub_8544(unknown uParam0, unknown uParam1)
{
    sub_8556( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_8556(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_8650( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_9194( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_8650(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
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

void sub_9194(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8650( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8650( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_8650( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8650( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8650( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8650( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8650( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_8650( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_10221()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_10390(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((NOT IS_MINIGAME_IN_PROGRESS()) || (g_U9180))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U522 += fVar3 * 1000.00000000;
                l_U523 += fVar3 * 1000.00000000;
                l_U526 += fVar3 * 1000.00000000;
                sub_10514( uParam0 );
                if (l_U518)
                {
                    if (HAVE_ANIMS_LOADED( l_U543 ))
                    {
                        if (((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U545 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U546 ))))
                        {
                            sub_20486( uParam0, 0 );
                            l_U518 = 0;
                        }
                    }
                    else
                    {
                        sub_20486( uParam0, 0 );
                        l_U518 = 0;
                    }
                }
                switch (l_U531)
                {
                    case 0:
                    if (NOT (sub_20595( uParam0 )))
                    {
                        l_U523 = 0.00000000;
                    }
                    if (l_U515)
                    {
                        sub_21782( uParam0 );
                    }
                    if (l_U523 > 10000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U543 )))
                        {
                            REQUEST_ANIMS( l_U543 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U543 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_20486( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U544, l_U543, 8.00000000, -1, 3328 );
                                l_U518 = 1;
                                l_U522 = 0.00000000;
                                l_U531 = 1;
                            }
                            else
                            {
                                sub_21782( uParam0 );
                                l_U522 = 0.00000000;
                                l_U531 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U543 ))
                    {
                        REMOVE_ANIMS( l_U543 );
                    }
                    if (HAS_MODEL_LOADED( -785338897 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -785338897 );
                    }
                    break;
                    case 1:
                    if (sub_20606( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U543 )))
                        {
                            REQUEST_ANIMS( l_U543 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (DOES_OBJECT_EXIST( l_U540 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U543 ))
                            {
                                if ((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_22563( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))))
                                {
                                    if (l_U522 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_20486( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U545, l_U543, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U546, l_U543, 8.00000000, -1, 3328 );
                                        }
                                        l_U518 = 1;
                                        l_U522 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U516)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U543 ))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 ))
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U543, l_U544, ref fVar3 );
                                            if (fVar3 > l_U525)
                                            {
                                                l_U532 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U540, l_U553, l_U556, 1065353216 );
                                                l_U516 = 1;
                                            }
                                        }
                                        else
                                        {
                                            l_U532 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U540, l_U553, l_U556, 1065353216 );
                                            l_U516 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                    if (DOES_VEHICLE_EXIST( uVar4 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( uVar4 )))
                                        {
                                            if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                            {
                                                if (NOT (sub_23069( uParam0 )))
                                                {
                                                    l_U532 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U540, l_U553, l_U556, 1065353216 );
                                                    l_U516 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_10753( uParam0 )) || (sub_23069( uParam0 )))
                            {
                                sub_10626( ref l_U532 );
                                l_U516 = 0;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U543 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U543, l_U544, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U540 )))
                                    {
                                        if (fVar3 > l_U524)
                                        {
                                            sub_21782( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_21782( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_21782( uParam0 );
                        }
                        if (sub_22563( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U531 = 0;
                        l_U523 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_20642( uParam0, 0 );
                if (l_U520)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_20642( uParam0, 1 );
            if (l_U520)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_20642( uParam0, 0 );
        if (l_U520)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U540 ))
        {
            if (HAVE_ANIMS_LOADED( l_U543 ))
            {
                if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U545 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U546 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_10514(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (IS_PLAYER_PLAYING( sub_2995() )))
    {
        switch (l_U533)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_10626( ref l_U535[I] );
            }
            if (DOES_OBJECT_EXIST( l_U541 ))
            {
                DELETE_OBJECT( ref l_U541 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_10753( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U574 );
                    if (DOES_VEHICLE_EXIST( l_U574 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U574 )))
                        {
                            if (NOT (sub_10935( l_U574 )))
                            {
                                l_U533 = 1;
                                l_U526 = 0.00000000;
                            }
                            else
                            {
                                l_U526 = 0.00000000;
                            }
                        }
                        else
                        {
                            l_U526 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U526 = 0.00000000;
                    }
                }
                else
                {
                    l_U526 = 0.00000000;
                }
            }
            else
            {
                l_U526 = 0.00000000;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U540 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U574 );
                    if (DOES_VEHICLE_EXIST( l_U574 ))
                    {
                        if (sub_11121( l_U574 ))
                        {
                            l_U533 = 2;
                            l_U526 = 0.00000000;
                            l_U530 = 0.00000000;
                        }
                        else
                        {
                            l_U533 = 4;
                            l_U526 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U533 = 0;
                        l_U526 = 0.00000000;
                    }
                }
                else
                {
                    l_U533 = 0;
                    l_U526 = 0.00000000;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U540 ))
            {
                if (DOES_VEHICLE_EXIST( l_U574 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U574 )))
                    {
                        if (NOT (sub_11121( l_U574 )))
                        {
                            l_U533 = 3;
                            l_U526 = 0.00000000;
                            if (l_U530 < 0.10000000)
                            {
                                l_U530 = 0.10000000;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( uParam0, l_U574 )))
                        {
                            l_U533 = 0;
                            l_U526 = 0.00000000;
                            if (DOES_OBJECT_EXIST( l_U541 ))
                            {
                                DELETE_OBJECT( ref l_U541 );
                            }
                        }
                        if ((NOT (DOES_OBJECT_EXIST( l_U541 ))) AND (l_U521))
                        {
                            GET_CAR_COORDINATES( l_U574, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -735018886, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U541, 1 );
                            SET_OBJECT_COLLISION( l_U541, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U541, l_U574, 0, l_U568, 0.00000000, 0.00000000, 0.00000000 );
                        }
                        else
                        {
                            l_U530 = l_U526 / l_U527;
                            if (l_U530 > 1.00000000)
                            {
                                l_U530 = 1.00000000;
                            }
                            l_U534 = ROUND( 255.00000000 * l_U530 );
                            if (l_U521)
                            {
                                SET_OBJECT_ALPHA( l_U541, l_U534 );
                            }
                        }
                    }
                    else
                    {
                        l_U533 = 0;
                        l_U526 = 0.00000000;
                    }
                }
                else
                {
                    l_U533 = 0;
                    l_U526 = 0.00000000;
                }
            }
            else
            {
                l_U533 = 0;
                l_U526 = 0.00000000;
            }
            break;
            case 3:
            if (DOES_VEHICLE_EXIST( l_U574 ))
            {
                if (NOT (IS_CAR_DEAD( l_U574 )))
                {
                    if (NOT (sub_10638( l_U535[0] )))
                    {
                        if (sub_11176( l_U574, 0 ))
                        {
                            if (sub_12180( l_U574, 0, ref uVar4 ))
                            {
                                l_U535[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11176( l_U574, 0 )))
                    {
                        sub_10626( ref l_U535[0] );
                    }
                    if (NOT (sub_10638( l_U535[1] )))
                    {
                        if (sub_11176( l_U574, 1 ))
                        {
                            if (sub_12180( l_U574, 1, ref uVar4 ))
                            {
                                l_U535[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11176( l_U574, 1 )))
                    {
                        sub_10626( ref l_U535[1] );
                    }
                    if (NOT (sub_10638( l_U535[2] )))
                    {
                        if (sub_11176( l_U574, 2 ))
                        {
                            if (sub_12180( l_U574, 2, ref uVar4 ))
                            {
                                l_U535[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11176( l_U574, 2 )))
                    {
                        sub_10626( ref l_U535[2] );
                    }
                    if (NOT (sub_10638( l_U535[3] )))
                    {
                        if (sub_11176( l_U574, 3 ))
                        {
                            if (sub_12180( l_U574, 3, ref uVar4 ))
                            {
                                l_U535[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11176( l_U574, 3 )))
                    {
                        sub_10626( ref l_U535[3] );
                    }
                    l_U529 = l_U526 / (l_U528 * l_U530);
                    if (l_U529 > 1.00000000)
                    {
                        l_U529 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_10638( l_U535[I] ))
                        {
                            EVOLVE_PTFX( l_U535[I], "fade", l_U529 );
                        }
                    }
                    if (l_U521)
                    {
                        if (DOES_OBJECT_EXIST( l_U541 ))
                        {
                            fVar7 = 1.00000000 - l_U529;
                            l_U534 = ROUND( 255.00000000 * fVar7 );
                            SET_OBJECT_ALPHA( l_U541, l_U534 );
                        }
                    }
                    if (l_U526 > (l_U528 * l_U530))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            sub_10626( ref l_U535[I] );
                        }
                        l_U533 = 0;
                        l_U526 = 0.00000000;
                    }
                    if ((((NOT (sub_10638( l_U535[0] ))) AND (NOT (sub_10638( l_U535[1] )))) AND (NOT (sub_10638( l_U535[2] )))) AND (NOT (sub_10638( l_U535[3] ))))
                    {
                        l_U533 = 0;
                        l_U526 = 0.00000000;
                    }
                }
                else
                {
                    l_U533 = 0;
                    l_U526 = 0.00000000;
                }
            }
            else
            {
                l_U533 = 0;
                l_U526 = 0.00000000;
            }
            break;
            case 4:
            if (DOES_VEHICLE_EXIST( l_U574 ))
            {
                if (NOT (IS_CAR_DEAD( l_U574 )))
                {
                    if (l_U526 > 1000.00000000)
                    {
                        if (NOT (sub_10638( l_U535[0] )))
                        {
                            if (sub_11176( l_U574, 0 ))
                            {
                                if (sub_12180( l_U574, 0, ref uVar4 ))
                                {
                                    l_U535[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11176( l_U574, 0 )))
                        {
                            sub_10626( ref l_U535[0] );
                        }
                        if (NOT (sub_10638( l_U535[1] )))
                        {
                            if (sub_11176( l_U574, 1 ))
                            {
                                if (sub_12180( l_U574, 1, ref uVar4 ))
                                {
                                    l_U535[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11176( l_U574, 1 )))
                        {
                            sub_10626( ref l_U535[1] );
                        }
                        if (NOT (sub_10638( l_U535[2] )))
                        {
                            if (sub_11176( l_U574, 2 ))
                            {
                                if (sub_12180( l_U574, 2, ref uVar4 ))
                                {
                                    l_U535[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11176( l_U574, 2 )))
                        {
                            sub_10626( ref l_U535[2] );
                        }
                        if (NOT (sub_10638( l_U535[3] )))
                        {
                            if (sub_11176( l_U574, 3 ))
                            {
                                if (sub_12180( l_U574, 3, ref uVar4 ))
                                {
                                    l_U535[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U574, uVar4, l_U565._fU0, l_U565._fU4, l_U565._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11176( l_U574, 3 )))
                        {
                            sub_10626( ref l_U535[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_10638( l_U535[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U529 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_10638( l_U535[I] ))
                            {
                                EVOLVE_PTFX( l_U535[I], "fade", l_U529 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_10626( ref l_U535[I] );
                            }
                            l_U533 = 0;
                            l_U526 = 0.00000000;
                        }
                        else if ((((NOT (sub_10638( l_U535[0] ))) AND (NOT (sub_10638( l_U535[1] )))) AND (NOT (sub_10638( l_U535[2] )))) AND (NOT (sub_10638( l_U535[3] ))))
                        {
                            l_U533 = 1;
                        }
                    }
                }
                else
                {
                    l_U533 = 0;
                    l_U526 = 0.00000000;
                }
            }
            else
            {
                l_U533 = 0;
                l_U526 = 0.00000000;
            }
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if (l_U519)
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_12180( uVar3, I, ref uVar4 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            LINE( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8 + 1.50000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_10626(unknown uParam0)
{
    if (sub_10638( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_10638(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_10753(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_CAR( uVar4 )) || (IS_THIS_MODEL_A_HELI( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_10935(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_11121(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((((NOT (sub_11176( uParam0, 0 ))) AND (NOT (sub_11176( uParam0, 1 )))) AND (NOT (sub_11176( uParam0, 2 )))) AND (NOT (sub_11176( uParam0, 3 ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_11176(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        if ((NOT (IS_THIS_MODEL_A_BIKE( uVar5 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar5 ))))
        {
            if ((IS_CAR_DOOR_DAMAGED( uParam0, uParam1 )) || (IS_CAR_DOOR_FULLY_OPEN( uParam0, uParam1 )))
            {
                return 1;
            }
            else
            {
                GET_DOOR_ANGLE_RATIO( uParam0, uParam1, ref fVar4 );
                if (fVar4 > 0.10000000)
                {
                    return 1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar7 );
                    switch (uParam1)
                    {
                        case 0:
                        if (NOT (IS_VEH_WINDOW_INTACT( uParam0, 0 )))
                        {
                            return 1;
                        }
                        break;
                        case 1:
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 1 ))) AND (iVar7 >= 1))
                        {
                            return 1;
                        }
                        break;
                        case 2:
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 2 ))) AND (iVar7 >= 2))
                        {
                            return 1;
                        }
                        break;
                        case 3:
                        iVar6 = 3;
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 3 ))) AND (iVar7 >= 3))
                        {
                            return 1;
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12180(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_12228( uParam0, ref l_U559, ref l_U562 );
            switch (uParam1)
            {
                case 0:
                (iParam2^) = {l_U559._fU0, l_U559._fU4, l_U559._fU8};
                iParam2->_fU0 += l_U571._fU0;
                iParam2->_fU4 += l_U571._fU4;
                iParam2->_fU8 += l_U571._fU8;
                break;
                case 1:
                (iParam2^) = {l_U559._fU0 * -1.00000000, l_U559._fU4, l_U559._fU8};
                iParam2->_fU0 += l_U571._fU0 * -1.00000000;
                iParam2->_fU4 += l_U571._fU4;
                iParam2->_fU8 += l_U571._fU8;
                break;
                case 2:
                (iParam2^) = {l_U562._fU0, l_U562._fU4, l_U562._fU8};
                iParam2->_fU0 += l_U571._fU0;
                iParam2->_fU4 += l_U571._fU4;
                iParam2->_fU8 += l_U571._fU8;
                break;
                case 3:
                (iParam2^) = {l_U562._fU0 * -1.00000000, l_U562._fU4, l_U562._fU8};
                iParam2->_fU0 += l_U571._fU0 * -1.00000000;
                iParam2->_fU4 += l_U571._fU4;
                iParam2->_fU8 += l_U571._fU8;
                break;
            }
            return 1;
        }
    }
    return 0;
}

void sub_12228(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        switch (uVar5)
        {
            case 1264341792:
            (uParam1^) = {-0.60750000, -0.19750000, 0.61000000};
            (uParam2^) = {-0.61500000, -0.76750000, 0.61750000};
            break;
            case 1171614426:
            (uParam1^) = {-0.79500000, 0.83250000, 1.27500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1041692462:
            (uParam1^) = {-0.60750000, -0.68250000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2053223216:
            (uParam1^) = {-0.93500000, 1.85250000, 1.35500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 850991848:
            (uParam1^) = {-0.86000000, 2.01500000, 1.38000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -344943009:
            (uParam1^) = {-0.55500000, -0.26500000, 0.86500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1075851868:
            (uParam1^) = {-0.70250000, 0.24500000, 1.00750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1987130134:
            (uParam1^) = {-1.00500000, 0.82750000, 1.16250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -682211828:
            (uParam1^) = {-0.59250000, -0.05000000, 0.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1346687836:
            (uParam1^) = {-0.84750000, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -907477130:
            (uParam1^) = {-0.84750000, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -713569950:
            (uParam1^) = {1.18500000, 4.88500000, 1.47250000};
            (uParam2^) = {1.18250000, -1.84000000, 1.47300000};
            break;
            case 1884962369:
            (uParam1^) = {-0.65000000, 0.21250000, 0.86500000};
            (uParam2^) = {-0.62000000, -0.49250000, 0.91500000};
            break;
            case 2006918058:
            (uParam1^) = {-0.61250000, 0.11000000, 1.02500000};
            (uParam2^) = {-0.60500000, -0.66500000, 1.04250000};
            break;
            case -67282078:
            (uParam1^) = {-0.56750000, -0.14250000, 0.87750000};
            (uParam2^) = {-0.56000000, -0.86250000, 0.86500000};
            break;
            case -2030171296:
            (uParam1^) = {-0.58750000, 0.13750000, 0.88750000};
            (uParam2^) = {-0.56750000, -0.86000000, 0.92000000};
            break;
            case 1063483177:
            (uParam1^) = {-0.49000000, -0.25500000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 108773431:
            (uParam1^) = {-0.52000000, -0.47000000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 162883121:
            (uParam1^) = {-0.62500000, -0.15750000, 0.81500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 723973206:
            (uParam1^) = {-0.62500000, -0.17750000, 0.67250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1130810103:
            (uParam1^) = {-0.51750000, 0.03000000, 0.91500000};
            (uParam2^) = {-0.50300000, -0.61750000, 0.91500000};
            break;
            case -1971955454:
            (uParam1^) = {-0.62000000, -0.08500000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -685276541:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -1883002148:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -276900515:
            (uParam1^) = {-0.61250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.59250000, -0.72750000, 0.75250000};
            break;
            case -2119578145:
            (uParam1^) = {-0.59750000, -0.22500000, 0.83000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1127131465:
            (uParam1^) = {-0.57250000, 0.03250000, 0.72250000};
            (uParam2^) = {-0.57500000, -0.73250000, 0.68000000};
            break;
            case -1097828879:
            (uParam1^) = {-0.53000000, -0.41500000, 0.64250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 974744810:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1026055242:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1938952078:
            (uParam1^) = {-1.06250000, 3.41500000, 1.23750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1353720154:
            (uParam1^) = {-1.11250000, 1.71500000, 2.27000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627033353:
            (uParam1^) = {-0.52500000, -0.14500000, 0.64000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2016857647:
            (uParam1^) = {-0.50500000, -0.17000000, 0.77750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 675415136:
            (uParam1^) = {-0.62000000, 0.06500000, 1.03000000};
            (uParam2^) = {-0.62250000, -0.63000000, 1.03500000};
            break;
            case 884422927:
            (uParam1^) = {-0.57500000, 0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750000};
            break;
            case -341892653:
            (uParam1^) = {-0.57500000, -0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750000};
            break;
            case 486987393:
            (uParam1^) = {-0.63750000, -0.06500000, 1.01750000};
            (uParam2^) = {-0.62250000, -0.87500000, 1.02750000};
            break;
            case -1289722222:
            (uParam1^) = {-0.46000000, -0.06500000, 0.71500000};
            (uParam2^) = {-0.46750000, -0.66250000, 0.71750000};
            break;
            case 886934177:
            (uParam1^) = {-0.53500000, 0.00750000, 0.75000000};
            (uParam2^) = {-0.53250000, -0.67750000, 0.74000000};
            break;
            case 418536135:
            (uParam1^) = {-0.51750000, 0.05500000, 0.56750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1269098716:
            (uParam1^) = {-0.55750000, 0.17250000, 1.28750000};
            (uParam2^) = {-0.55000000, -0.48750000, 1.31000000};
            break;
            case -37030056:
            (uParam1^) = {-0.58500000, -0.13750000, 0.95750000};
            (uParam2^) = {-0.58750000, -0.77250000, 0.97250000};
            break;
            case -2124201592:
            (uParam1^) = {-0.67500000, -0.42750000, 0.67750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1304597482:
            (uParam1^) = {-0.62500000, -0.16500000, 0.81000000};
            (uParam2^) = {-0.62750000, -0.71750000, 0.80250000};
            break;
            case -1260881538:
            (uParam1^) = {-0.61000000, -0.02000000, 0.68250000};
            (uParam2^) = {-0.60000000, -0.58000000, 0.69000000};
            break;
            case -310465116:
            (uParam1^) = {-0.68750000, 0.18000000, 0.86500000};
            (uParam2^) = {-0.66300000, -0.51750000, 0.91000000};
            break;
            case 583100975:
            (uParam1^) = {-0.86750000, 0.89750000, 1.32000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 525509695:
            (uParam1^) = {-0.74500000, 0.38250000, 1.17750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 904750859:
            (uParam1^) = {-0.91250000, 2.66500000, 1.35250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 148777611:
            (uParam1^) = {-0.61250000, -0.18750000, 0.72000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1911513875:
            (uParam1^) = {-1.19250000, 1.06750000, 1.88500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1348744438:
            (uParam1^) = {-0.67250000, -0.08750000, 0.57000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 569305213:
            (uParam1^) = {-1.28750000, 3.05250000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -808457413:
            (uParam1^) = {-0.84000000, 0.36250000, 1.15250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -2077743597:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case -1590284256:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case 1830407356:
            (uParam1^) = {-0.71000000, -0.40500000, 0.88250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 131140572:
            (uParam1^) = {-0.69000000, -0.07000000, 0.80000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1376298265:
            (uParam1^) = {-0.56250000, -0.07000000, 0.76500000};
            (uParam2^) = {-0.56300000, -0.83500000, 0.75500000};
            break;
            case 2046537925:
            (uParam1^) = {-0.62500000, -0.15000000, 0.73500000};
            (uParam2^) = {-0.59300000, -0.71250000, 0.73750000};
            break;
            case -1627000575:
            (uParam1^) = {-0.63250000, 0.01750000, 0.71000000};
            (uParam2^) = {-0.60050000, -0.60750000, 0.71500000};
            break;
            case -350085182:
            (uParam1^) = {-0.82250000, 0.40250000, 1.19500000};
            (uParam2^) = {-0.82050000, -0.68250000, 1.19500000};
            break;
            case -119658072:
            (uParam1^) = {-0.86750000, 0.82750000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1883869285:
            (uParam1^) = {-0.55750000, 0.03750000, 0.79250000};
            (uParam2^) = {-0.53750000, -0.68000000, 0.81750000};
            break;
            case -1962071130:
            (uParam1^) = {-0.53250000, -0.05000000, 0.74250000};
            (uParam2^) = {-0.52000000, -0.58500000, 0.75000000};
            break;
            case -1150599089:
            (uParam1^) = {-0.63500000, -0.05000000, 0.78500000};
            (uParam2^) = {-0.63250000, -0.58500000, 0.79000000};
            break;
            case -1900572838:
            (uParam1^) = {-1.18000000, 1.07750000, 1.87500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1390084576:
            (uParam1^) = {-0.65500000, 0.09250000, 1.11250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 83136452:
            (uParam1^) = {-0.59750000, -0.21250000, 0.94250000};
            (uParam2^) = {-0.59800000, -0.84550000, 0.95050000};
            break;
            case -845979911:
            (uParam1^) = {-1.35000000, 3.69000000, 1.16500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627094268:
            (uParam1^) = {-0.74250000, 0.28500000, 0.74750000};
            (uParam2^) = {-0.74300000, -0.45700000, 0.77500000};
            break;
            case -1932515764:
            (uParam1^) = {-0.65500000, -0.08000000, 0.71250000};
            (uParam2^) = {-0.65050000, -0.73700000, 0.71000000};
            break;
            case -227741703:
            (uParam1^) = {-0.57000000, -0.37500000, 0.48750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -449022887:
            (uParam1^) = {-0.60750000, -0.27750000, 0.82500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1264386590:
            (uParam1^) = {-0.60750000, -0.27750000, 0.83250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1685021548:
            (uParam1^) = {-0.68000000, -0.25500000, 0.73000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -322343873:
            (uParam1^) = {-0.53500000, -0.12000000, 0.87000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1349725314:
            (uParam1^) = {-0.51750000, -0.19250000, 0.62750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1344573448:
            (uParam1^) = {-0.60250000, -0.00250000, 0.89750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -810318068:
            (uParam1^) = {-0.67250000, 0.64000000, 1.13250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1923400478:
            (uParam1^) = {-0.65250000, -0.17500000, 0.77500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1677715180:
            (uParam1^) = {-0.79750000, 1.25250000, 1.48000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1747439474:
            (uParam1^) = {-1.18000000, 1.00500000, 1.87250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1723137093:
            (uParam1^) = {-0.54000000, -0.12000000, 0.83500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1961627517:
            (uParam1^) = {-0.57750000, 1.12250000, 0.73750000};
            (uParam2^) = {-0.58250000, -2.04500000, 0.74250000};
            break;
            case 1821991593:
            (uParam1^) = {-0.61000000, -0.36250000, 0.62000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 970598228:
            (uParam1^) = {-0.49750000, -0.17000000, 0.91250000};
            (uParam2^) = {-0.50000000, -0.72250000, 0.91300000};
            break;
            case -295689028:
            (uParam1^) = {-0.49750000, -0.31000000, 0.91250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -956048545:
            (uParam1^) = {-0.62500000, -0.17000000, 0.72750000};
            (uParam2^) = {-0.62500000, -0.76750000, 0.72800000};
            break;
            case 1208856469:
            (uParam1^) = {-0.62500000, 0.02000000, 0.69750000};
            (uParam2^) = {-0.62500000, -0.64000000, 0.70300000};
            break;
            case 1917016601:
            (uParam1^) = {-1.20250000, 3.50500000, 1.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1896659641:
            (uParam1^) = {-0.56250000, -0.04000000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1534326199:
            (uParam1^) = {-0.50000000, -0.20500000, 0.78000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -825837129:
            (uParam1^) = {-0.59000000, -0.23000000, 0.52000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1758379524:
            (uParam1^) = {-0.62000000, -0.23750000, 0.51750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -583281407:
            (uParam1^) = {-0.45250000, -0.10750000, 0.76500000};
            (uParam2^) = {-0.45300000, -0.70050000, 0.77500000};
            break;
            case -498054846:
            (uParam1^) = {-0.68000000, -0.20500000, 0.93250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2006667053:
            (uParam1^) = {-0.71500000, -0.08250000, 0.65000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1937616578:
            (uParam1^) = {-0.60750000, -0.02500000, 0.91750000};
            (uParam2^) = {-0.60800000, -0.67250000, 0.91800000};
            break;
            case 1777363799:
            (uParam1^) = {-0.60750000, -0.17750000, 0.81250000};
            (uParam2^) = {-0.62800000, -0.86750000, 0.78050000};
            break;
            case -1099960214:
            (uParam1^) = {-0.93000000, 1.25000000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            default:
            (uParam1^) = {-0.48300000, -0.28500000, 0.62000000};
            (uParam2^) = {-0.48300000, -1.30000000, 0.62000000};
            break;
        }
    }
    return;
}

void sub_20486(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_20595(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_20606( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U523 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3065(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_20606(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U515)
    {
        return 1;
    }
    if (l_U517)
    {
        sub_20642( uParam0, 1 );
        l_U517 = 0;
        if (l_U520)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((((IS_PED_IN_COMBAT( uParam0 )) || (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))) || (IS_CHAR_SHOOTING( uParam0 ))) || (IS_CHAR_ARMED( uParam0, 7 )))
            {
                sub_20642( uParam0, 1 );
                if (l_U520)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_20642( uParam0, 0 );
                    if (l_U520)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_21222( uParam0 ))
            {
                sub_20642( uParam0, 0 );
                if (l_U520)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_20642( uParam0, 1 );
        if (l_U520)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_20642(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U540 ))
        {
            DELETE_OBJECT( ref l_U540 );
            l_U540 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U540 ))
    {
        if (IS_OBJECT_ATTACHED( l_U540 ))
        {
            DETACH_OBJECT( l_U540, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U540 );
        l_U540 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U543 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U544 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U545 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U543, l_U546 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U541 ))
    {
        DELETE_OBJECT( ref l_U541 );
    }
    l_U523 = 0.00000000;
    if (l_U516)
    {
        sub_10626( ref l_U532 );
        l_U516 = 0;
    }
    return;
}

int sub_21222(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_21286( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21286(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_21782(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U540 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -785338897, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U540, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U540, iVar6 );
            }
        }
        if (l_U515)
        {
            if (IS_OBJECT_ATTACHED( l_U540 ))
            {
                DETACH_OBJECT( l_U540, 1 );
            }
        }
        if (sub_21947( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U540 ))
            {
                DETACH_OBJECT( l_U540, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U540 )))
        {
            ATTACH_OBJECT_TO_PED( l_U540, uParam0, 1232, l_U547, l_U550, 0 );
            l_U542 = uParam0;
        }
        if (NOT (l_U531 == 1))
        {
            l_U531 = 1;
            l_U522 = 18000.00000000;
        }
    }
    return;
}

int sub_21947(int iParam0)
{
    if (iParam0 == l_U542)
    {
        return 1;
    }
    return 0;
}

int sub_22563(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23069(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23779()
{
    if ((((IS_MESSAGE_BEING_DISPLAYED()) || (sub_23801( l_U125 ))) || (sub_23976())) || (l_U107))
    {
        return 1;
    }
    return 0;
}

int sub_23801(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_23913( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_23913( "\n speech is not playing" );
    }
    return 0;
}

void sub_23913(unknown uParam0)
{
    return;
}

int sub_23976()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_24124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_24149( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_24149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_24207( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_24207(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_24229( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_24905( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_24229(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_23913( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_23913( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_23913( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_24905(int iParam0, int iParam1)
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

int sub_25135(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_25241()
{
    if ((sub_25250()) || (l_U106))
    {
        return 0;
    }
    if (((IS_WANTED_LEVEL_GREATER( sub_2995(), 0 )) AND (NOT l_U105)) AND (NOT (sub_25347( l_U131 ))))
    {
        return 0;
    }
    return 1;
}

int sub_25250()
{
    if (NOT (IS_CHAR_INJURED( l_U124 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U124 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25347(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        if (IS_THIS_PRINT_BEING_DISPLAYED( uParam0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25485(unknown uParam0)
{
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        if ((NOT (IS_CHAR_ON_ANY_BIKE( uParam0 ))) AND (NOT (sub_21222( uParam0 ))))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_CAR_HAVE_ROOF( uVar3 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_25947(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_26156(unknown uParam0)
{
    while (NOT (sub_26167( uParam0 )))
    {
        WAIT( 0 );
    }
    return;
}

int sub_26167(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int I;
    unknown uVar11;

    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        if (HAS_MODEL_LOADED( uParam0 ))
        {
            if (HAS_MODEL_LOADED( 8772846 ))
            {
                GET_CHAR_COORDINATES( sub_3065(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                for ( I = 1; I < 40; I++ )
                {
                    if (I > 0)
                    {
                        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar3._fU0, uVar3._fU4, uVar3._fU8, I, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar9 );
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar11, uVar6._fU0, uVar6._fU4, uVar6._fU8, 10.00000000 )))
                        {
                            CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 5.00000000, 1 );
                            if (sub_26381( uParam0, uVar6, uVar9, 1 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
            else
            {
                REQUEST_MODEL( 8772846 );
            }
        }
        else
        {
            REQUEST_MODEL( uParam0 );
        }
    }
    return 0;
}

int sub_26381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (HAS_MODEL_LOADED( uParam0 ))
    {
        if (HAS_MODEL_LOADED( 8772846 ))
        {
            CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref uVar8, 1 );
            SET_CAR_HEADING( uVar8, uParam4 );
            if (bParam5)
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, 2.00000000, 0.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                SET_CAR_HEADING( uVar8, uParam4 );
                SET_CAR_COORDINATES( uVar8, uVar10._fU0, uVar10._fU4, uVar10._fU8 );
            }
            SET_TAXI_LIGHTS( uVar8, 1 );
            SET_HAS_BEEN_OWNED_BY_PLAYER( uVar8, 1 );
            CREATE_CHAR_INSIDE_CAR( uVar8, 25, 8772846, ref uVar9 );
            SET_CAR_FORWARD_SPEED( uVar8, 5.00000000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( uParam0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref uVar9 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar8 );
            return 1;
        }
        else
        {
            REQUEST_MODEL( 8772846 );
        }
    }
    else
    {
        REQUEST_MODEL( uParam0 );
    }
    return 0;
}

void sub_26770(int iParam0, unknown uParam1, boolean bParam2)
{
    boolean bVar5;

    bVar5 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_3065() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3065(), 0 );
    if (sub_3565())
    {
        bVar5 = true;
    }
    sub_7519();
    if (bVar5)
    {
        if (((iParam0 > 0) AND (uParam1)) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_26906();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_3546();
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT bParam2)
        {
            DO_SCREEN_FADE_IN( iParam0 );
        }
        else
        {
            DO_SCREEN_FADE_IN_UNHACKED( iParam0 );
        }
    }
    DISPLAY_RADAR( 1 );
    return;
}

void sub_26906()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar2 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if (IS_THIS_MODEL_A_CAR( uVar3 ))
                {
                    SHUT_CAR_DOOR( uVar2, 0 );
                    SHUT_CAR_DOOR( uVar2, 1 );
                    SHUT_CAR_DOOR( uVar2, 2 );
                    SHUT_CAR_DOOR( uVar2, 3 );
                }
            }
        }
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            GET_CAR_MODEL( uVar2, ref uVar3 );
            if (IS_THIS_MODEL_A_CAR( uVar3 ))
            {
                SHUT_CAR_DOOR( uVar2, 0 );
                SHUT_CAR_DOOR( uVar2, 1 );
                SHUT_CAR_DOOR( uVar2, 2 );
                SHUT_CAR_DOOR( uVar2, 3 );
            }
        }
    }
    return;
}

void sub_27452(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    return sub_27506( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12, uParam13 );
}

int sub_27506(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    unknown uVar21;
    int iVar22;
    int I;
    unknown[3] uVar24;

    array(ref uVar24, 3);
    uVar24[0] = uParam7;
    uVar24[1] = uParam8;
    uVar24[2] = uParam9;
    l_U124 = uParam7;
    if (IS_SCREEN_FADED_IN())
    {
        if (sub_27606( uVar24[0], uVar24[1], uVar24[2], uParam11, uParam12, uParam13, uParam14, l_U123, uParam16, 0, 0, 0 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
            {
                if (l_U104)
                {
                    sub_28558( uParam15 );
                    l_U104 = 0;
                }
                if ((uParam17) AND (IS_WANTED_LEVEL_GREATER( sub_2995(), 0 )))
                {
                    if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
                    {
                        REMOVE_BLIP( l_U121 );
                        REMOVE_BLIP( l_U120 );
                        sub_28558( uParam10 );
                    }
                    if (((NOT sub_23779()) AND (NOT sub_25250())) AND (NOT l_U105))
                    {
                        sub_28726( uParam18, 0 );
                        l_U131 = uParam18;
                        l_U105 = 1;
                        l_U106 = 0;
                        if (NOT (IS_CHAR_INJURED( uVar24[0] )))
                        {
                            SAY_AMBIENT_SPEECH( uVar24[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U105)
                {
                    sub_28558( uParam18 );
                    l_U105 = 0;
                    l_U106 = 1;
                }
                if (l_U106)
                {
                    if (NOT sub_23779())
                    {
                        if (NOT (IS_CHAR_INJURED( uVar24[0] )))
                        {
                            SAY_AMBIENT_SPEECH( uVar24[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U106 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U120 )))
                {
                    if (NOT sub_23779())
                    {
                        if (DOES_BLIP_EXIST( l_U121 ))
                        {
                            l_U120 = l_U121;
                        }
                        else
                        {
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U120 );
                            SET_ROUTE( l_U120, 1 );
                        }
                        l_U121 = nil;
                        if (NOT l_U108)
                        {
                            sub_28726( uParam10, 0 );
                            l_U108 = 1;
                        }
                        else
                        {
                            sub_28726( uParam10, 1 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U121 )))
                    {
                        ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                        SET_ROUTE( l_U121, 1 );
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3065(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar21 );
                    iVar22 = 1;
                    for ( I = 0; I < 3; I++ )
                    {
                        if (DOES_CHAR_EXIST( uVar24[I] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( uVar24[I], uVar21 )))
                            {
                                iVar22 = 0;
                            }
                        }
                    }
                    if ((iVar22) AND (sub_29889( 1, 1 )))
                    {
                        sub_28558( uParam10 );
                        sub_28558( uParam15 );
                        sub_5520();
                        return 1;
                    }
                }
            }
            else if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
            {
                REMOVE_BLIP( l_U121 );
                REMOVE_BLIP( l_U120 );
                sub_28558( uParam10 );
            }
            if (NOT sub_23779())
            {
                if (NOT l_U104)
                {
                    sub_28726( uParam15, 0 );
                    l_U104 = 1;
                }
            }
        }
        else if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
        {
            REMOVE_BLIP( l_U121 );
            REMOVE_BLIP( l_U120 );
            sub_28558( uParam10 );
            sub_28558( uParam15 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2995() );
            sub_30449( ref uVar21 );
            if (NOT (DOES_VEHICLE_EXIST( uVar21 )))
            {
                REQUEST_MODEL( 1264341792 );
                while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar21, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), uVar21 );
                sub_7116( uVar21 );
            }
            else if (IS_VEH_DRIVEABLE( uVar21 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), uVar21 );
            }
            sub_30997( uParam0, uParam1, uParam2 );
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CHAR_EXIST( uVar24[I] ))
                {
                    if (NOT (IS_CHAR_INJURED( uVar24[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( uVar24[I] );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( uVar24[I], uVar21, I );
                    }
                }
            }
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_31239( uParam0, uParam1, uParam2 );
    return 0;
}

int sub_27606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    boolean bVar17;
    int iVar18;
    boolean bVar19;
    int[3] iVar20;
    unknown[3] uVar24;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    array(ref uVar24, 3);
    uVar24[0] = uParam0;
    uVar24[1] = uParam1;
    uVar24[2] = uParam2;
    l_U124 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    bVar17 = true;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( uVar24[I] ))
        {
            if (NOT (IS_CHAR_INJURED( uVar24[I] )))
            {
                iVar16++;
                if ((NOT (IS_GROUP_MEMBER( uVar24[I], sub_10221() ))) AND (NOT (sub_27813( uVar24[I], uParam9 ))))
                {
                    if (sub_27914( uVar24[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( uVar24[I], sub_10221() )))
                        {
                            CLEAR_CHAR_TASKS( uVar24[I] );
                            SET_GROUP_MEMBER( sub_10221(), uVar24[I] );
                        }
                    }
                    else if (NOT sub_23779())
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U116[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( uVar24[I], ref l_U116[I] );
                            SET_BLIP_AS_FRIENDLY( l_U116[I], 1 );
                            if (bParam8)
                            {
                                SET_ROUTE( l_U116[I], 1 );
                            }
                            bVar19 = true;
                        }
                    }
                    iVar20[I] = 1;
                    iVar15++;;
                    bVar17 = false;
                }
                else if (DOES_BLIP_EXIST( l_U116[I] ))
                {
                    if (((sub_28322( uVar24[I] )) || (sub_27813( uVar24[I], uParam9 ))) || (uParam11))
                    {
                        REMOVE_BLIP( l_U116[I] );
                        sub_28558( uVar28[I] );
                        iVar18 = 1;
                    }
                    else
                    {
                        bVar17 = false;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                REMOVE_BLIP( l_U116[I] );
                sub_28558( uVar28[I] );
                iVar18 = 1;
            }
        }
    }
    if (NOT sub_23779())
    {
        if (bVar19)
        {
            if ((iVar15 == iVar16) AND (iVar16 > 1))
            {
                sub_28726( uParam6, 0 );
            }
            else
            {
                for ( I = 0; I < 3; I++ )
                {
                    if (iVar20[I])
                    {
                        sub_28726( uVar28[I], 0 );
                    }
                }
            }
            bVar19 = false;
        }
    }
    if ((iVar18) AND (NOT bVar17))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                sub_28726( uVar28[I], 0 );
            }
        }
    }
    if (bVar17)
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                REMOVE_BLIP( l_U116[I] );
            }
            sub_28558( uVar28[I] );
        }
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3065() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3065(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( uVar24[I] )))
                {
                    SET_CHAR_COORDINATES( uVar24[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_27813(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_27914(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_3065(), uVar5 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3065(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (bParam2)
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3065() ))
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_28322(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3065() ))
    {
        if (sub_28355( sub_3065(), uParam0 ))
        {
            return 1;
        }
    }
    else if (IS_GROUP_MEMBER( uParam0, sub_10221() ))
    {
        return 1;
    }
    return 0;
}

int sub_28355(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_28558(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_28726(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        PRINT_NOW( uParam0, 7500, 1 );
    }
    else
    {
        PRINT_NOW( uParam0, 3000, 1 );
    }
    l_U107 = 1;
    return;
}

int sub_29889(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3065()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3065() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2995() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2995() )))
    {
        return 0;
    }
    return 1;
}

void sub_30449(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3065(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3065(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_30569( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_30569(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_30997(unknown uParam0, unknown uParam1, float fParam2)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3065(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3065(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3065(), uParam0, uParam1, fParam2 );
    return;
}

void sub_31239(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_31264( uParam0, uParam1, uParam2, l_U122, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3065(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U122, l_U122, l_U122, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U122 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U122 );
            }
        }
    }
    return;
}

int sub_31264(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_31281( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3065(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_31281(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_31616(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_10221() )))
        {
            if (NOT (IS_PED_IN_COMBAT( uParam0 )))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar3 );
                if (iVar3 == 7)
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    OPEN_SEQUENCE_TASK( ref uVar10 );
                    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    if (GET_SAFE_POSITION_FOR_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, 1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 ))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2, -2, 1.00000000 );
                    }
                    if (NOT (sub_31826( uParam0, sub_3065(), 45.00000000 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3065() );
                    }
                    TASK_LOOK_AT_CHAR( 0, sub_3065(), 2000, 0 );
                    CLOSE_SEQUENCE_TASK( uVar10 );
                    TASK_PERFORM_SEQUENCE( uParam0, uVar10 );
                    CLEAR_SEQUENCE_TASK( uVar10 );
                }
            }
        }
    }
    return;
}

int sub_31826(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    vector vVar14;
    vector vVar17;
    float fVar20;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar11.x, ref vVar11.y, ref vVar11.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.00000000, 0.00000000, ref vVar14.x, ref vVar14.y, ref vVar14.z );
            GET_CHAR_COORDINATES( uParam1, ref vVar17.x, ref vVar17.y, ref vVar17.z );
            uVar5 = {vVar14 - vVar11};
            uVar8 = {vVar17 - vVar11};
            GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar20 );
            if (fVar20 < fParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_32105()
{
    if (NOT l_U101)
    {
        if ((sub_32125()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            if ((ProtectedGet(l_U99) < 99) AND (ProtectedGet(l_U99) > 0))
            {
                sub_32261( 0 );
                l_U102 = 1;
                ProtectedSet(l_U99, 99);
                l_U101 = 1;
            }
        }
    }
    else if (NOT sub_32125())
    {
        l_U101 = 0;
    }
    return;
}

int sub_32125()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_32261(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_32470(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector vVar9;
    vector vVar12;
    vector vVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    float fVar24;
    float fVar25;
    unknown uVar26;

    if (l_U100 > 0)
    {
        if (DOES_CAM_EXIST( (uParam0^) ))
        {
            GET_CAM_ROT( (uParam0^), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            vVar15 = {0.00000000, 1.00000000, 0.00000000};
            vVar15 = {sub_32562( vVar15, 0.00000000, 0.00000000, uVar6._fU8 )};
            if (NOT (IS_CHAR_DEAD( uParam1 )))
            {
                GET_CAM_POS( (uParam0^), ref vVar9.x, ref vVar9.y, ref vVar9.z );
                GET_CHAR_COORDINATES( uParam1, ref vVar12.x, ref vVar12.y, ref vVar12.z );
                uVar18 = {vVar12 - vVar9};
                uVar18._fU8 = 0.00000000;
                uVar21 = {sub_32962( uVar18, vVar15 )};
                uVar26 = VMAG( uVar21 );
                fVar24 = uVar26 - uParam2;
                if (fVar24 < 0.10000000)
                {
                    fVar24 = 0.10000000;
                }
                fVar25 = uVar26 + uParam3;
                if (fVar25 < fVar24)
                {
                    fVar25 = fVar24;
                }
                SET_CAM_NEAR_DOF( (uParam0^), fVar24 );
                SET_CAM_FAR_DOF( (uParam0^), fVar25 );
            }
        }
    }
    return;
}

void sub_32562(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

vector sub_32962(unknown uParam0, unknown uParam1, unknown uParam2, vector vParam3)
{
    return (((uParam0._fU0 * vParam3.x) + (uParam0._fU4 * vParam3.y)) + (uParam0._fU8 * vParam3.z)) * vParam3;
}

void sub_33179(boolean bParam0, boolean bParam1)
{
    sub_33188();
    if (bParam1)
    {
        sub_25947( ref l_U125, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_2995(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3065() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3065(), 1 );
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_2995(), 0, 0, 0 );
    }
    sub_33382();
    return;
}

void sub_33188()
{
    if (NOT l_U103)
    {
        sub_33212( ref l_U100 );
        l_U103 = 1;
    }
    return;
}

void sub_33212(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_33382()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        GET_CHAR_PROP_INDEX( sub_3065(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_3065(), 0 );
        }
    }
    return;
}

void sub_33860(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_33881( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_33881(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_24207( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_34861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    int iVar13;

    if (IS_SCREEN_FADED_IN())
    {
        if ((uParam9) AND (IS_WANTED_LEVEL_GREATER( sub_2995(), 0 )))
        {
            if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
            {
                REMOVE_BLIP( l_U121 );
                REMOVE_BLIP( l_U120 );
                sub_28558( uParam7 );
            }
            if ((NOT sub_23779()) AND (NOT l_U105))
            {
                sub_28726( uParam10, 0 );
                l_U131 = uParam10;
                l_U105 = 1;
            }
        }
        else if (l_U105)
        {
            sub_28558( uParam10 );
            l_U105 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U120 )))
        {
            if (NOT sub_23779())
            {
                if (DOES_BLIP_EXIST( l_U121 ))
                {
                    l_U120 = l_U121;
                }
                else
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U120 );
                    SET_ROUTE( l_U120, 1 );
                }
                l_U121 = nil;
                if (NOT l_U108)
                {
                    sub_28726( uParam7, 0 );
                    l_U108 = 1;
                }
                else
                {
                    sub_28726( uParam7, 1 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U121 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                SET_ROUTE( l_U121, 1 );
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3065(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3065() ))
            {
                if (sub_29889( 1, 1 ))
                {
                    sub_28558( uParam7 );
                    sub_28558( uParam8 );
                    sub_5520();
                    return 1;
                }
            }
            else if (NOT sub_23779())
            {
                sub_28726( uParam8, 0 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2995() );
            sub_30449( ref iVar13 );
            if (iVar13 == nil)
            {
                REQUEST_MODEL( 1264341792 );
                while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref iVar13, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), iVar13 );
                sub_7116( iVar13 );
            }
            else if (IS_VEH_DRIVEABLE( iVar13 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), iVar13 );
            }
            sub_30997( uParam0, uParam1, uParam2 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_31239( uParam0, uParam1, uParam2 );
    return 0;
}

int sub_35926()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_36643(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5, unknown uParam6)
{
    CREATE_CHAR( 26, iParam4, uParam0, uParam1, uParam2, uParam6, 1 );
    SET_CHAR_HEADING( (uParam6^), uParam3 );
    GIVE_WEAPON_TO_CHAR( (uParam6^), uParam5, 30000, 0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam6^) );
    SET_CHAR_DECISION_MAKER( (uParam6^), l_U606 );
    SET_CHAR_WILL_USE_COVER( (uParam6^), 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam6^), 1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam6^), 23 );
    SET_CHAR_RELATIONSHIP( (uParam6^), 5, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( (uParam6^), 1, 0 );
    SET_PED_DIES_WHEN_INJURED( (uParam6^), 1 );
    SET_CHAR_IS_TARGET_PRIORITY( (uParam6^), 1 );
    if (iParam4 == -1500397869)
    {
        SET_AMBIENT_VOICE_NAME( (uParam6^), "M_Y_GJAM_LO_01_FULL_01" );
    }
    else
    {
        SET_AMBIENT_VOICE_NAME( (uParam6^), "M_Y_GJAM_LO_02_FULL_01" );
    }
    SET_CHAR_MAX_HEALTH( (uParam6^), 150 );
    SET_CHAR_HEALTH( (uParam6^), 150 );
    SET_CHAR_ACCURACY( (uParam6^), 15 );
    SET_CHAR_AS_ENEMY( (uParam6^), 1 );
    return;
}

void sub_37212(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_37272( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, uParam4, 1, 0, 0 );
}

int sub_37272(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_23913( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_23913( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2995() )))
    {
        sub_23913( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3065() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3065() ))))
    {
        sub_23913( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_23913( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_37787()) AND (NOT bParam11))
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
                sub_23913( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_37787()) AND (NOT bParam11))
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
    sub_39159( uParam0, ref g_U91._fU176 );
    sub_40540( ref g_U91._fU160 );
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
        sub_4244( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_37787()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_37844())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_37844()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2995() )))
    {
        sub_23913( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_23913( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_23913( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_23913( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2995() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3065() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3065(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_23913( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3065() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_23913( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_23913( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2995() )))
    {
        sub_23913( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_39159(int iParam0, unknown uParam1)
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

void sub_40540(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_41156(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3065(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_23913( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_42199(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_CAM_EXIST( l_U114 )))
    {
        if (DOES_CAM_EXIST( (uParam0^) ))
        {
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 0 );
        }
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            SET_CAM_ACTIVE( (uParam1^), 1 );
            SET_CAM_PROPAGATE( (uParam1^), 0 );
        }
        CREATE_CAM( 3, ref l_U114 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U114, 1, 1, 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U114, (uParam0^), (uParam1^), uParam2, 0 );
        SET_CAM_ACTIVE( l_U114, 1 );
        SET_CAM_PROPAGATE( l_U114, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U114 )))
    {
        DESTROY_CAM( l_U114 );
        SET_CAM_ACTIVE( (uParam1^), 1 );
        SET_CAM_PROPAGATE( (uParam1^), 1 );
        return 1;
    }
    return 0;
}

void sub_42639(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1000) AND (g_U91._fU0 != 1001))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_43188(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;

    CLEAR_PRINTS();
    CLEAR_HELP();
    if (DOES_CAM_EXIST( uParam1 ))
    {
        uVar4 = sub_43226( ref uParam1 );
        uVar5 = sub_43402( ref uParam1 );
    }
    sub_7519();
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3065(), 0 );
    if (sub_3565())
    {
        bVar6 = true;
    }
    if (bVar6)
    {
        if ((iParam0 > 0) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_26906();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_3546();
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( iParam0 );
    }
    DISPLAY_RADAR( 1 );
    SET_GAME_CAM_HEADING( uVar4 );
    SET_GAME_CAM_PITCH( uVar5 );
    return;
}

float sub_43226(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;

    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        GET_CHAR_HEADING( sub_3065(), ref uVar12 );
        GET_CHAR_COORDINATES( sub_3065(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    else
    {
        return 0.00000000;
    }
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        GET_CAM_POS( (uParam0^), ref vVar9.x, ref vVar9.y, ref vVar9.z );
    }
    else
    {
        return 0.00000000;
    }
    uVar3 = {vVar9 - vVar6};
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0, uVar3._fU4, ref uVar13 );
    return (uVar13 - uVar12) + 180.00000000;
}

float sub_43402(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    float fVar12;

    if (IS_PLAYER_PLAYING( sub_2995() ))
    {
        GET_CHAR_COORDINATES( sub_3065(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    else
    {
        return 0.00000000;
    }
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        GET_CAM_POS( (uParam0^), ref vVar9.x, ref vVar9.y, ref vVar9.z );
    }
    else
    {
        return 0.00000000;
    }
    uVar3 = {vVar9 - vVar6};
    fVar12 = vVar9.z - vVar6.z;
    return (ASIN( fVar12 / (VMAG( uVar3 )) )) * -1.00000000;
}

void sub_47919(unknown uParam0)
{
    if (NOT (COMPARE_STRING( uParam0, "" )))
    {
        if (NOT sub_23779())
        {
            sub_32261( 0 );
        }
        else
        {
            sub_32261( 1 );
        }
        if (NOT l_U109)
        {
            sub_28726( uParam0, 0 );
            l_U109 = 1;
        }
    }
    return;
}

void sub_48382(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = nil;
    return sub_27606( uParam0, 0, 0, uParam1, uParam1, uParam1, uParam1, l_U123, uParam2, uVar7, uParam3, uParam4 );
}

void sub_49951(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    return sub_50002( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12 );
}

int sub_50002(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown[3] uVar22;
    int iVar26;

    array(ref uVar22, 3);
    uVar22[0] = uParam7;
    uVar22[1] = uParam8;
    uVar22[2] = uParam9;
    l_U124 = uParam7;
    if (IS_SCREEN_FADED_IN())
    {
        if (sub_27606( uVar22[0], uVar22[1], uVar22[2], uParam11, uParam12, uParam13, uParam14, l_U123, uParam15, 0, 0, 0 ))
        {
            if ((uParam16) AND (IS_WANTED_LEVEL_GREATER( sub_2995(), 0 )))
            {
                if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
                {
                    REMOVE_BLIP( l_U121 );
                    REMOVE_BLIP( l_U120 );
                    sub_28558( uParam10 );
                }
                if (((NOT sub_23779()) AND (NOT sub_25250())) AND (NOT l_U105))
                {
                    sub_28726( uParam17, 0 );
                    l_U131 = uParam17;
                    l_U105 = 1;
                    l_U106 = 0;
                    if (NOT (IS_CHAR_INJURED( uVar22[0] )))
                    {
                        SAY_AMBIENT_SPEECH( uVar22[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U105)
            {
                sub_28558( uParam17 );
                l_U105 = 0;
                l_U106 = 1;
            }
            if (l_U106)
            {
                if (NOT sub_23779())
                {
                    if (NOT (IS_CHAR_INJURED( uVar22[0] )))
                    {
                        SAY_AMBIENT_SPEECH( uVar22[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U106 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U120 )))
            {
                if (NOT sub_23779())
                {
                    if (DOES_BLIP_EXIST( l_U121 ))
                    {
                        l_U120 = l_U121;
                    }
                    else
                    {
                        ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U120 );
                        SET_ROUTE( l_U120, 1 );
                    }
                    l_U121 = nil;
                    if (NOT l_U108)
                    {
                        sub_28726( uParam10, 0 );
                        l_U108 = 1;
                    }
                    else
                    {
                        sub_28726( uParam10, 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U121 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                    SET_ROUTE( l_U121, 1 );
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3065(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( uVar22[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar22[I] )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uVar22[I], uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 )))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((iVar20) AND (sub_29889( 1, 1 )))
                {
                    sub_28558( uParam10 );
                    sub_5520();
                    return 1;
                }
            }
        }
        else if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
        {
            REMOVE_BLIP( l_U121 );
            REMOVE_BLIP( l_U120 );
            sub_28558( uParam10 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2995() );
            sub_30449( ref iVar26 );
            if (iVar26 == nil)
            {
                REQUEST_MODEL( 1264341792 );
                while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref iVar26, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), iVar26 );
                sub_7116( iVar26 );
            }
            else if (IS_VEH_DRIVEABLE( iVar26 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
                WARP_CHAR_INTO_CAR( sub_3065(), iVar26 );
            }
            sub_30997( uParam0, uParam1, uParam2 );
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CHAR_EXIST( uVar22[I] ))
                {
                    if (NOT (IS_CHAR_INJURED( uVar22[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( uVar22[I] );
                    }
                }
            }
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CHAR_EXIST( uVar22[I] ))
                {
                    if (NOT (IS_CHAR_INJURED( uVar22[I] )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( uVar22[I], iVar26, I );
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( iVar26 ))
            {
                sub_7116( iVar26 );
            }
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_31239( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_52478()
{
    if (IS_CHAR_IN_AREA_3D( sub_3065(), 1348.77500000, 514.13580000, 13.89380000, 1420.18000000, 550.36080000, 58.64380000, 0 ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2995(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
    }
    else
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2995(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
        SET_WANTED_MULTIPLIER( 0.30000000 );
    }
    return;
}

void sub_52624()
{
    if (IS_CHAR_IN_AREA_3D( sub_3065(), 1349.80000000, 521.89000000, 31.50000000, 1397.30000000, 550.36080000, 58.00000000, 0 ))
    {
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    }
    else
    {
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    }
    return;
}

void sub_54544()
{
    if (((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (NOT l_U588))
    {
        if (l_U615 > 10000.00000000)
        {
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_3065(), l_U662, 15.00000000, 15.00000000, 15.00000000, 0 ))
                {
                    if (sub_33860( "LJ1_FOLLOW", ref l_U125, 6, 1 ))
                    {
                        l_U615 = 0.00000000;
                        l_U588 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_55465()
{
    boolean bVar2;
    int I;

    if ((NOT (IS_CHAR_INJURED( l_U663[0] ))) || (NOT (IS_CHAR_INJURED( l_U663[1] ))))
    {
        if (sub_55517( sub_3065() ))
        {
            sub_55605( 1 );
        }
        else
        {
            sub_55605( 0 );
        }
    }
    else
    {
        sub_55605( 0 );
    }
    switch (l_U623[0])
    {
        case 0:
        if (HAS_MODEL_LOADED( 1609755055 ))
        {
            sub_55996( 1372.64900000, 525.25600000, 32.11020000, 299.28000000, 1609755055, 10, ref l_U663[0], ref l_U576[0] );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U663[0], 1372.64900000, 525.25600000, 33.11020000, 1.50000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[0], 0 );
            SET_CHAR_WILL_USE_COVER( l_U663[0], 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U663[0], "Room_LngeBen2" );
            l_U623[0]++;
        }
        else
        {
            REQUEST_MODEL( 1609755055 );
        }
        break;
        case 1:
        if (l_U603)
        {
            if (NOT (IS_CHAR_INJURED( l_U663[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U663[0], 91, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_COMBAT( l_U663[0], sub_3065() );
                }
                if (l_U635 > 0)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U663[0] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[0], 1 );
                    l_U623[0]++;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U663[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U663[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U663[0], 36, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SHOOT_AT_COORD( l_U663[0], 1377.12000000, 527.03000000, 33.50000000, 5000, 5 );
                }
            }
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U663[0], sub_3065(), 0 )) || (IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[0], 0 );
                TASK_COMBAT( l_U663[0], sub_3065() );
                l_U623[0]++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U663[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U663[0], 91, ref l_U669 );
            if (l_U669 == 7)
            {
                TASK_COMBAT( l_U663[0], sub_3065() );
            }
        }
        break;
    }
    switch (l_U623[1])
    {
        case 0:
        if (HAS_MODEL_LOADED( -330497431 ))
        {
            sub_55996( 1371.83900000, 529.36570000, 36.35960000, 0.00000000, -330497431, 7, ref l_U663[1], ref l_U576[1] );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U663[1], 1376.45500000, 531.47640000, 34.33640000, 2.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U663[1], "Room_HallBen2" );
            SET_CAN_TARGET_CHAR_WITHOUT_LOS( l_U663[1], 1 );
            l_U623[1]++;
        }
        else
        {
            REQUEST_MODEL( -330497431 );
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
        {
            if (l_U582)
            {
                OPEN_SEQUENCE_TASK( ref l_U668 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 1372.50800000, 531.53990000, 37.35940000 );
                TASK_EXTEND_ROUTE( 1376.45500000, 531.47640000, 34.33640000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                CLOSE_SEQUENCE_TASK( l_U668 );
                TASK_PERFORM_SEQUENCE( l_U663[1], l_U668 );
                CLEAR_SEQUENCE_TASK( l_U668 );
                l_U623[1]++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U663[1] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U663[1], 29, ref l_U669 );
            if (l_U669 == 7)
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[1], 0 );
                TASK_COMBAT( l_U663[1], sub_3065() );
                l_U623[1]++;
            }
        }
        break;
    }
    switch (l_U623[2])
    {
        case 0:
        if (HAS_MODEL_LOADED( 1609755055 ))
        {
            sub_55996( 1370.99000000, 525.04820000, 32.10990000, 270.00000000, 1609755055, 7, ref l_U663[2], ref l_U576[2] );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U663[2], "Room_LngeBen2" );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[2], 1 );
            TASK_SEEK_COVER_FROM_POS( l_U663[2], 1375.76000000, 524.55980000, 33.10990000, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U663[2], 0 );
            SET_CHAR_NEVER_TARGETTED( l_U663[2], 1 );
            l_U623[2]++;
        }
        else
        {
            REQUEST_MODEL( 1609755055 );
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U663[2] )))
        {
            bVar2 = false;
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U663[2], sub_3065(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2995(), l_U663[2] ))) || (IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 )))
            {
                bVar2 = true;
            }
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                if (IS_CHAR_IN_AREA_3D( l_U662, 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 ))
                {
                    bVar2 = true;
                }
            }
            if (bVar2)
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[2], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U663[2], 1370.99000000, 526.04820000, 33.10990000, 2.00000000 );
                TASK_COMBAT( l_U663[2], sub_3065() );
                SET_CHAR_NEVER_TARGETTED( l_U663[2], 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U663[2], 1 );
                l_U623[2]++;
            }
            else if (NOT (IS_CHAR_INJURED( l_U663[3] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U663[2], 93, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SEEK_COVER_FROM_POS( l_U663[2], 1375.76000000, 524.55980000, 33.10990000, 0 );
                }
            }
        }
        break;
    }
    switch (l_U623[3])
    {
        case 0:
        if (HAS_MODEL_LOADED( -330497431 ))
        {
            sub_55996( 1366.89800000, 529.60630000, 32.11100000, 226.00000000, -330497431, 7, ref l_U663[3], ref l_U576[3] );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U663[3], "Room_KitchBen2" );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[3], 1 );
            TASK_SEEK_COVER_FROM_POS( l_U663[3], 1370.63400000, 528.39470000, 33.11090000, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U663[3], 0 );
            SET_CHAR_NEVER_TARGETTED( l_U663[3], 1 );
            l_U623[3]++;
        }
        else
        {
            REQUEST_MODEL( -330497431 );
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U663[3] )))
        {
            bVar2 = false;
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U663[3], sub_3065(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2995(), l_U663[3] ))) || (IS_CHAR_IN_AREA_3D( sub_3065(), 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 )))
            {
                bVar2 = true;
            }
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                if (IS_CHAR_IN_AREA_3D( l_U662, 1363.57500000, 522.92870000, 31.11020000, 1382.12500000, 528.00370000, 35.11020000, 0 ))
                {
                    bVar2 = true;
                }
            }
            if (bVar2)
            {
                SET_CHAR_NEVER_TARGETTED( l_U663[3], 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U663[3], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663[3], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U663[3], 1367.63400000, 527.39470000, 33.11090000, 2.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U668 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1368.10900000, 527.97210000, 32.11010000, 3, 10000 );
                TASK_COMBAT( 0, sub_3065() );
                CLOSE_SEQUENCE_TASK( l_U668 );
                TASK_PERFORM_SEQUENCE( l_U663[3], l_U668 );
                CLEAR_SEQUENCE_TASK( l_U668 );
                l_U623[3]++;
            }
            else if (NOT (IS_CHAR_INJURED( l_U663[3] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U663[3], 93, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SEEK_COVER_FROM_POS( l_U663[3], 1370.63400000, 528.39470000, 33.11090000, 0 );
                }
            }
        }
        break;
    }
    l_U642 = 0;
    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U663[I] )))
        {
            l_U642++;
        }
    }
    return;
}

int sub_55517(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, 1362.63900000, 522.76810000, 31.73410000, 1382.68900000, 532.36810000, 42.63420000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_55605(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        if (NOT l_U706)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U663[I] )))
                {
                    SET_CHAR_ACCURACY( l_U663[I], 100 );
                    SET_CHAR_SHOOT_RATE( l_U663[I], 100 );
                    CLEAR_CHAR_TASKS( l_U663[I] );
                    TASK_COMBAT( l_U663[I], sub_3065() );
                }
            }
            l_U706 = 1;
        }
    }
    else if (l_U706)
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U663[I] )))
            {
                SET_CHAR_ACCURACY( l_U663[I], 75 );
                SET_CHAR_SHOOT_RATE( l_U663[I], 40 );
            }
        }
        l_U706 = 0;
    }
    return;
}

void sub_55996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CREATE_CHAR( 26, uParam4, uParam0, uParam1, uParam2, uParam6, 1 );
    SET_CHAR_HEADING( (uParam6^), uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam6^) );
    GIVE_WEAPON_TO_CHAR( (uParam6^), uParam5, 30000, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( (uParam6^), 1, 0 );
    SET_CHAR_DECISION_MAKER( (uParam6^), l_U606 );
    SET_COMBAT_DECISION_MAKER( (uParam6^), l_U608 );
    SET_CHAR_WILL_USE_COVER( (uParam6^), 1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam6^), 23 );
    SET_CHAR_RELATIONSHIP( (uParam6^), 5, 0 );
    SET_CHAR_RELATIONSHIP( (uParam6^), 5, 24 );
    SET_CHAR_WILL_MOVE_WHEN_INJURED( (uParam6^), 0 );
    SET_PED_DIES_WHEN_INJURED( (uParam6^), 1 );
    SET_CHAR_IS_TARGET_PRIORITY( (uParam6^), 1 );
    SET_CHAR_AS_ENEMY( (uParam6^), 1 );
    SET_CHAR_ACCURACY( (uParam6^), 75 );
    SET_CHAR_SHOOT_RATE( (uParam6^), 40 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam6^), 1 );
    ADD_BLIP_FOR_CHAR( (uParam6^), uParam7 );
    l_U640++;
    return;
}

void sub_58831()
{
    if (l_U598)
    {
        if (NOT (l_U604 == nil))
        {
            REMOVE_COVER_POINT( l_U604 );
        }
        ADD_COVER_POINT( l_U693._fU0, l_U693._fU4, l_U693._fU8, 0, l_U620, 3, 0, ref l_U604 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3065() );
        TASK_SEEK_COVER_TO_COVER_POINT( sub_3065(), l_U604, 1376.45500000, 531.47640000, 34.33640000, -1 );
        if (NOT (l_U605 == nil))
        {
            REMOVE_COVER_POINT( l_U605 );
        }
        ADD_COVER_POINT( l_U696._fU0, l_U696._fU4, l_U696._fU8, 1, l_U621, 3, 0, ref l_U605 );
        if (NOT (IS_CHAR_INJURED( l_U662 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U662 );
            TASK_SEEK_COVER_TO_COVER_POINT( l_U662, l_U605, 1376.45500000, 531.47640000, 34.33640000, -1 );
        }
        l_U598 = 0;
    }
    return;
}

void sub_60213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar6 );
    if (DOES_VEHICLE_EXIST( uVar6 ))
    {
        if (NOT (IS_CAR_DEAD( uVar6 )))
        {
            GET_CAR_COORDINATES( uVar6, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_CAR_HEADING( uVar6, ref uVar10 );
            sub_6641( uParam0, uParam3, uVar7, uVar10 );
        }
    }
    return;
}

int sub_61900()
{
    if ((((DOES_CHAR_EXIST( l_U663[0] )) AND (DOES_CHAR_EXIST( l_U663[1] ))) AND (DOES_CHAR_EXIST( l_U663[2] ))) AND (DOES_CHAR_EXIST( l_U663[3] )))
    {
        return 1;
    }
    return 0;
}

void sub_64389()
{
    if (((NOT sub_23779()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (NOT l_U588))
    {
        if (l_U614 > 10000.00000000)
        {
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_3065(), l_U662, 15.00000000, 15.00000000, 15.00000000, 0 ))
                {
                    if (sub_33860( "LJ1_KILL", ref l_U125, 6, 1 ))
                    {
                        l_U614 = 0.00000000;
                        l_U588 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_64574(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (sub_64619( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_64619(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_64661( uParam0, 1362.84200000, 522.94400000, 31.34000000, 1382.39200000, 528.01900000, 35.11500000 )) || (sub_64661( uParam0, 1362.84200000, 522.99400000, 31.34000000, 1368.96700000, 532.36900000, 35.11500000 )))
    {
        return 1;
    }
    return 0;
}

int sub_64661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_65631()
{
    CREATE_CAM( 14, ref l_U700[0] );
    SET_CAM_POS( l_U700[0], 1384.84500000, 531.29750000, 33.78900000 );
    SET_CAM_ROT( l_U700[0], -4.63240000, 0.00000000, 124.47840000 );
    SET_CAM_FOV( l_U700[0], 55.00000000 );
    SET_CAM_ACTIVE( l_U700[0], 1 );
    CREATE_CAM( 14, ref l_U700[1] );
    SET_CAM_POS( l_U700[1], 1384.84500000, 529.37250000, 33.78900000 );
    SET_CAM_ROT( l_U700[1], -4.63240000, 0.00000000, 124.47840000 );
    SET_CAM_FOV( l_U700[1], 55.00000000 );
    SET_CAM_ACTIVE( l_U700[1], 1 );
    CREATE_CAM( 14, ref l_U700[2] );
    SET_CAM_POS( l_U700[2], 1384.54500000, 526.32250000, 33.78900000 );
    SET_CAM_ROT( l_U700[2], -4.63240000, 0.00000000, 123.30340000 );
    SET_CAM_FOV( l_U700[2], 55.00000000 );
    SET_CAM_ACTIVE( l_U700[2], 1 );
    CREATE_CAM( 14, ref l_U700[3] );
    SET_CAM_POS( l_U700[3], 1383.67000000, 524.69750000, 33.63900000 );
    SET_CAM_ROT( l_U700[3], -4.63240000, 0.00000000, 79.40340000 );
    SET_CAM_FOV( l_U700[3], 55.00000000 );
    SET_CAM_ACTIVE( l_U700[3], 1 );
    CREATE_CAM( 25, ref l_U699 );
    SET_CAM_SPLINE_DURATION( l_U699, 1000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U699, 0 );
    ADD_CAM_SPLINE_NODE( l_U699, l_U700[0] );
    ADD_CAM_SPLINE_NODE( l_U699, l_U700[1] );
    ADD_CAM_SPLINE_NODE( l_U699, l_U700[2] );
    ADD_CAM_SPLINE_NODE( l_U699, l_U700[3] );
    SET_CAM_ACTIVE( l_U699, 1 );
    SET_CAM_PROPAGATE( l_U699, 1 );
    return;
}

void sub_72048()
{
    WAIT( 2000 );
    sub_72067();
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    CLEAR_WANTED_LEVEL( sub_2995() );
    sub_3249();
    return;
}

void sub_72067()
{
    sub_72076();
    return;
}

void sub_72076()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_72094();
    sub_72153( iVar2, iVar3, iVar4 );
    return;
}

void sub_72094()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U509[I] = 4;
    }
    return;
}

void sub_72153(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_72184( iVar5, uParam0, uParam1, uParam2, "Friend_4" );
    return;
}

void sub_72184(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_72280( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_72280( ref cVar9 );
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
            sub_72280( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_72280( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_72280( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_72280( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_72857( iParam0, iVar7 );;;
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
                sub_73254( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_73254( 0, 4 );
            }
        }
    }
    if (NOT (sub_73343( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2995(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2995() );
    }
    sub_2084();
    bVar27 = true;
    uVar28 = sub_72857( iParam0, iVar7 );
    uVar29 = sub_1541( iParam0 );
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
                sub_82719( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_83149();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_83234( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_83291( iParam0 );
                sub_83330( 0 );
                sub_1982( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_83438();
        }
    }
    if (bParam2)
    {
        sub_83149();
        sub_83526();
        sub_83330( 0 );
    }
    if (bParam3)
    {
        sub_83149();
        sub_83566();
        sub_83330( 0 );
        sub_1982( uVar29, 0 );
    }
    sub_1428();
    return;
}

void sub_72280(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_72857(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1940( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_73254(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_73343(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_73551( uParam1 );
        break;
        case 1:
        bVar8 = sub_75629( uParam1 );
        break;
        case 2:
        bVar8 = sub_75855( uParam1 );
        break;
        case 3:
        bVar8 = sub_76005( uParam1 );
        break;
        case 4:
        bVar8 = sub_76283( uParam1 );
        break;
        case 5:
        bVar8 = sub_76586( uParam1 );
        break;
        case 6:
        bVar8 = sub_76785( uParam1 );
        break;
        case 7:
        bVar8 = sub_77011( uParam1 );
        break;
        case 8:
        bVar8 = sub_77246( uParam1 );
        break;
        case 9:
        bVar8 = sub_77621( uParam1 );
        break;
        case 10:
        bVar8 = sub_77868( uParam1 );
        break;
        case 11:
        bVar8 = sub_78007( uParam1 );
        break;
        case 12:
        bVar8 = sub_78306( uParam1 );
        break;
        case 13:
        bVar8 = sub_78534( uParam1 );
        break;
        case 14:
        bVar8 = sub_78821( uParam1 );
        break;
        case 15:
        bVar8 = sub_79103( uParam1 );
        break;
        case 16:
        bVar8 = sub_79385( uParam1 );
        break;
        case 17:
        bVar8 = sub_79586( uParam1 );
        break;
        case 18:
        bVar8 = sub_79659( uParam1 );
        break;
        case 19:
        bVar8 = sub_79873( uParam1 );
        break;
        case 20:
        bVar8 = sub_80126( uParam1 );
        break;
        case 21:
        bVar8 = sub_80373( uParam1 );
        break;
        case 22:
        bVar8 = sub_80574( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_75234( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_72857( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_80897( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_73551(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_73830( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_73830( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_73830( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_73830( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_73830( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_73830( iVar3, 0, 3, 1, 0, 0 );
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
        sub_73830( iVar3, 0, sub_75112(), sub_75378(), 0, 0 );
        break;
        default:
        sub_75537( "Friend 1", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Friend 1", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_73830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_73841( uParam1 );
    sub_74015( uParam0, 0, uParam2 );
    sub_74015( uParam0, 1, uParam3 );
    sub_74015( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_72094();
    return;
}

void sub_73841(unknown uParam0)
{
    ADD_SCORE( sub_2995(), uParam0 );
    sub_73866( uParam0 );
    return;
}

void sub_73866(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1940( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_74015(unknown uParam0, int iParam1, int iParam2)
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
        sub_74172( uParam0 );
    }
    return;
}

void sub_74172(unknown uParam0)
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

int sub_75112()
{
    switch (l_U509[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_75234( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_75234(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_75378()
{
    switch (l_U509[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_75234( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_75537(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_75629(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 2", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 2", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75855(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_75537( "Girl 3", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Girl 3", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76005(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_73830( iVar3, 0, sub_75112(), sub_75378(), 0, 0 );
        break;
        default:
        sub_75537( "Friend 4", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Friend 4", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 5", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 5", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76586(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 7", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 7", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76785(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 7b", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 7b", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77011(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_73830( iVar3, 0, sub_75112(), sub_75378(), 0, 0 );
        break;
        default:
        sub_75537( "Friend 8", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Friend 8", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77246(unknown uParam0)
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
        sub_73830( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_73830( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_73830( iVar3, 0, sub_75112(), sub_75378(), 0, 0 );
        break;
        default:
        sub_75537( "Friend 9", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Friend 9", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77621(unknown uParam0)
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
        sub_73830( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_73830( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_73830( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_75537( "Contact 10", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_75537( "Contact 10", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77868(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_75537( "Girl 11", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Girl 11", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78007(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_75537( "Contact 12", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 12", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78306(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 13", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 13", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78534(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_73830( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_73830( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_73830( iVar3, 0, sub_75112(), sub_75378(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_75537( "Friend 15", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Friend 15", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78821(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 16", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 16", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79103(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_73830( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_75537( "Contact 18", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 18", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79385(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 19", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 19", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79586(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_75537( "Girl 20", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_75537( "Contact 21", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 21", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_73830( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_75537( "Contact 22", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 22", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80126(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_73830( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_73830( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_73830( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_75537( "Contact 24", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 24", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80373(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_73830( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_73830( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_73830( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_75537( "Contact 25", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_75537( "Contact 25", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80574(unknown uParam0)
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
        sub_73830( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_75537( "Girl 26", 1 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_75537( "Girl 26", 0 );
        sub_73830( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_80897(int iParam0, int iParam1)
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
    if (sub_80945( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_81676( iParam1 );
    }
    return;
}

int sub_80945(int iParam0, int iParam1)
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
            sub_81085( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_81085(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_81267( 0 );
    return;
}

void sub_81267(boolean bParam0)
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
        sub_81522();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_81522()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_81676(int iParam0)
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
        sub_82009( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_82009( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_82009( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_82009( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_82009( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_82009( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_82009( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_82009( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_82009( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_82009( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_82009( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_82009( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_82009( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_82009( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_82009( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_82009( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_82009( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_82009( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_82009( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_82009(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_82719(unknown uParam0, unknown uParam1)
{
    sub_82738( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_82738(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_83149()
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

int sub_83234(int iParam0, int iParam1)
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

void sub_83291(unknown uParam0)
{
    sub_1327();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_83330(unknown uParam0)
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

void sub_83438()
{
    sub_83447();
    return;
}

void sub_83447()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_83526()
{
    sub_83447();
    return;
}

void sub_83566()
{
    sub_83447();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_83759(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_37272( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_83935(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_84180()
{
    if (l_U101)
    {
        if ((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            l_U101 = 0;
        }
    }
    if ((NOT l_U110) || (l_U107))
    {
        l_U107 = 0;
        WAIT( 0 );
    }
    else
    {
        l_U110 = 0;
    }
    return;
}
