void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;

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
    l_U487 = 0;
    l_U488 = 999999.90000000;
    l_U489 = 0.00000000;
    l_U490 = 0.26000000;
    l_U491 = 0.65000000;
    l_U493 = 5000.00000000;
    l_U494 = 5000.00000000;
    l_U496 = 0.00000000;
    l_U498 = 0;
    l_U509 = "amb@smoking_spliff";
    l_U510 = "create_spliff";
    l_U511 = "partial_smoke";
    l_U512 = "partial_smoke_car";
    l_U513 = {0.13700000, 0.03100000, 0.03500000};
    l_U516 = {2.21400000, -0.12100000, 0.00000000};
    l_U519 = {0.00000000, 0.00000000, 0.13600000};
    l_U522 = {0.00000000, 0.00000000, 0.00000000};
    l_U525 = {-0.48300000, -0.28500000, 0.62000000};
    l_U528 = {-0.48300000, -1.30000000, 0.62000000};
    l_U531 = {0.00000000, 0.00000000, 90.00000000};
    l_U534 = {0.00000000, -0.28500000, 0.50000000};
    l_U537 = {0.00000000, 0.00000000, 0.00000000};
    l_U642 = 0;
    l_U643 = 0;
    l_U649 = 0.00000000;
    l_U673 = 0;
    l_U653[0] = {1303.53600000, 63.93870000, 32.69440000};
    l_U653[1] = {1306.50000000, 63.64040000, 32.79000000};
    l_U653[2] = {1305.91600000, 68.27980000, 33.26740000};
    sub_551( "R6AUD" );
    LOAD_ADDITIONAL_TEXT( "R6AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "ROMAN6", 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_709();
        sub_2819();
    }
    SET_MISSION_FLAG( 1 );
    while (true)
    {
        WAIT( 0 );
        if (NOT (IS_PLAYER_PLAYING( sub_2926() )))
        {
            sub_3462();
        }
        if (l_U575)
        {
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (NOT l_U636)
                {
                    sub_4390( l_U547 );
                }
                if ((IS_PED_JACKING( sub_2844() )) || ((IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_2844() )) AND (NOT (sub_17766( l_U541 )))))
                {
                    if (NOT l_U620)
                    {
                        if (IS_GROUP_MEMBER( l_U547, sub_17964() ))
                        {
                            SAY_AMBIENT_SPEECH( l_U547, "NIKO_STEALS_VEHICLE", 1, 1, 0 );
                            l_U620 = 1;
                        }
                    }
                }
                else
                {
                    l_U620 = 0;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U547 )))
            {
                if (IS_CHAR_INJURED( l_U547 ))
                {
                    SET_CHAR_HEALTH( l_U547, 0 );
                    l_U644 = 1;
                    sub_3462();
                }
            }
            else
            {
                l_U644 = 1;
                sub_3462();
            }
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (IS_CHAR_ON_FIRE( l_U547 ))
                {
                    SET_CHAR_HEALTH( l_U547, 0 );
                }
            }
        }
        if (l_U592)
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
            {
                if (NOT l_U613)
                {
                    l_U612 = 0;
                    l_U613 = 1;
                }
                if (l_U581)
                {
                    if (IS_GROUP_MEMBER( l_U547, sub_17964() ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U558 )))
                        {
                            ADD_BLIP_FOR_COORD( 1482.95600000, 50.51060000, 24.42910000, ref l_U558 );
                            SET_ROUTE( l_U558, 1 );
                            PRINT( "ROM6_02", 7500, 1 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if ((IS_CHAR_IN_ANY_CAR( l_U547 )) AND (l_U642 > 1))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U557 )))
                        {
                            ADD_BLIP_FOR_COORD( 1311.59700000, 93.31990000, 34.12100000, ref l_U557 );
                            SET_ROUTE( l_U557, 1 );
                            PRINT_NOW( "ROM6_11", 7500, 1 );
                            SETTIMERA( 0 );
                        }
                    }
                }
            }
            else if (NOT l_U612)
            {
                if (sub_17766( l_U541 ))
                {
                    sub_18526( ref l_U541 );
                }
                PRINT_NOW( "ROM6_24", 7500, 1 );
                l_U613 = 0;
                l_U612 = 1;
            }
            if (DOES_BLIP_EXIST( l_U557 ))
            {
                REMOVE_BLIP( l_U557 );
            }
            if (DOES_BLIP_EXIST( l_U558 ))
            {
                REMOVE_BLIP( l_U558 );
            }
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                {
                    if (DOES_BLIP_EXIST( l_U557 ))
                    {
                        if (sub_17766( l_U541 ))
                        {
                            sub_18526( ref l_U541 );
                        }
                        REMOVE_BLIP( l_U557 );
                        if (NOT (DOES_BLIP_EXIST( l_U556 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
                            SET_BLIP_AS_FRIENDLY( l_U556, 1 );
                            PRINT_NOW( "ROM6_21", 7500, 1 );
                        }
                        else if (NOT l_U615)
                        {
                            PRINT_NOW( "ROM6_21", 7500, 1 );
                            l_U615 = 1;
                        }
                    }
                    else if (sub_17766( l_U541 ))
                    {
                        sub_18526( ref l_U541 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U556 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
                        SET_BLIP_AS_FRIENDLY( l_U556, 1 );
                        PRINT_NOW( "ROM6_21", 7500, 1 );
                    }
                    else if (NOT l_U615)
                    {
                        PRINT_NOW( "ROM6_21", 7500, 1 );
                        l_U615 = 1;
                    };;;
                    if (DOES_BLIP_EXIST( l_U558 ))
                    {
                        if (sub_17766( l_U541 ))
                        {
                            sub_18526( ref l_U541 );
                        }
                        REMOVE_BLIP( l_U558 );
                        if (NOT (DOES_BLIP_EXIST( l_U556 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
                            SET_BLIP_AS_FRIENDLY( l_U556, 1 );
                            PRINT_NOW( "ROM6_21", 7500, 1 );
                        }
                        else if (NOT l_U615)
                        {
                            PRINT_NOW( "ROM6_21", 7500, 1 );
                            l_U615 = 1;
                        }
                    }
                    else if (sub_17766( l_U541 ))
                    {
                        sub_18526( ref l_U541 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U556 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
                        SET_BLIP_AS_FRIENDLY( l_U556, 1 );
                        PRINT_NOW( "ROM6_21", 7500, 1 );
                    }
                    else if (NOT l_U615)
                    {
                        PRINT_NOW( "ROM6_21", 7500, 1 );
                        l_U615 = 1;
                    };;;
                }
                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), l_U547, 12.00000000, 12.00000000, 0 ))
                {
                    if (l_U616)
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U547 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 0 );
                            l_U616 = 0;
                        }
                    }
                    if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                    {
                        if (DOES_BLIP_EXIST( l_U556 ))
                        {
                            REMOVE_BLIP( l_U556 );
                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                            if (IS_CHAR_IN_ANY_CAR( sub_2844() ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 1 );
                                l_U616 = 1;
                            }
                            l_U615 = 0;
                        }
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
                        {
                            if (l_U581)
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U558 )))
                                {
                                    ADD_BLIP_FOR_COORD( 1482.95600000, 50.51060000, 24.42910000, ref l_U558 );
                                    SET_ROUTE( l_U558, 1 );
                                    PRINT_NOW( "ROM6_02", 7500, 1 );
                                    WAIT( 3000 );
                                    if (g_U64763 == 1)
                                    {
                                        sub_20044( "R6_BANT2V1", ref l_U541, 6, 1 );
                                    }
                                    else if (g_U64763 == 2)
                                    {
                                        sub_20044( "R6_BANT2V2", ref l_U541, 6, 1 );
                                    }
                                    else if (g_U64763 > 2)
                                    {
                                        l_U626 = 1;
                                        SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                                    };;;
                                }
                            }
                            else if ((l_U642 > 1) AND (NOT (sub_17766( l_U541 ))))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U557 )))
                                {
                                    ADD_BLIP_FOR_COORD( 1311.59700000, 93.31990000, 34.12100000, ref l_U557 );
                                    SET_ROUTE( l_U557, 1 );
                                    PRINT_NOW( "ROM6_11", 7500, 1 );
                                    SETTIMERA( 0 );
                                    WAIT( 3000 );
                                    if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2844() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2844() ))))
                                    {
                                        if (NOT l_U590)
                                        {
                                            sub_21301( "R6_NOCAR", ref l_U541, 7, 1 );
                                            l_U590 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        switch (l_U673)
        {
            case 0:
            if (g_U9893._fU24)
            {
                START_CUTSCENE_NOW( "rom6_a" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
            }
            while (NOT (sub_21604( ref l_U554 )))
            {
                WAIT( 0 );
            }
            l_U673 = 1;
            break;
            case 1:
            if (g_U9893._fU24)
            {
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_NAMED_CUTSCENE( "rom6_a" );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            REQUEST_ANIMS( "missroman6" );
            while (NOT (HAVE_ANIMS_LOADED( "missroman6" )))
            {
                WAIT( 0 );
            }
            LOAD_SCENE( 812.33600000, -260.37920000, 14.33790000 );
            SUPPRESS_CAR_MODEL( -1932515764 );
            sub_22299( "Roman6" );
            l_U673 = 2;
            break;
            case 2:
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 1, 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 1, 1, 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CHAR_COORDINATES( sub_2844(), 812.33600000, -260.37920000, 14.33790000 );
            SET_CHAR_HEADING( sub_2844(), 12.99900000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            # -sub_C1FFC0-0xc214c8( 1, ref l_U566 );
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U565 );
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U568 );
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U569 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U565, 50 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U568, 40 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U569, 20 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U565, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U568, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U569, 2 );
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U567 );
            while (NOT (sub_22767( 3, ref l_U547, 977.79000000, -79.82000000, 23.10180000, 110.45270000 )))
            {
                WAIT( 0 );
            }
            TASK_PLAY_ANIM( l_U547, "idle_01", "missroman6", 8.00000000, 1, 0, 0, 0, -2 );
            SET_CHAR_DECISION_MAKER( l_U547, l_U566 );
            SET_COMBAT_DECISION_MAKER( l_U547, l_U569 );
            SET_PED_DIES_WHEN_INJURED( l_U547, 1 );
            sub_25319( 0, sub_2844(), "Niko", 0 );
            sub_25319( 1, l_U547, "jacob", 0 );
            SET_CHAR_NEVER_TARGETTED( l_U547, 1 );
            SET_CHAR_RELATIONSHIP( l_U547, 1, 0 );
            SET_GROUP_CHAR_DECISION_MAKER( l_U547, l_U567 );
            GIVE_WEAPON_TO_CHAR( l_U547, 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U547, 0, 0 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U547, 0 );
            SET_CHAR_HEALTH( l_U547, 400 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U547, 1 );
            sub_15782( l_U547 );
            l_U575 = 1;
            ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
            sub_25661( ref l_U556, 970.73930000, -87.76640000, 23.01030000, 1.04110000 );
            SET_ROUTE( l_U556, 1 );
            ADD_SCENARIO_BLOCKING_AREA( 1308.73700000 - 10, 86.97600000 - 10, 34.14970000 - 10, 1308.73700000 + 10, 86.97600000 + 10, 34.14970000 + 10 );
            SET_BLIP_AS_FRIENDLY( l_U556, 1 );
            if (IS_SCREEN_FADED_OUT())
            {
                LOAD_SCENE( 812.33600000, -260.37920000, 14.33790000 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
            }
            PRINT_NOW( "ROM6_01", 7500, 1 );
            l_U673 = 3;
            break;
            case 3:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U556 )))
                {
                    PRINT_NOW( "ROM6_01", 7500, 1 );
                    ADD_BLIP_FOR_CHAR( l_U547, ref l_U556 );
                    SET_ROUTE( l_U556, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U556, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if ((LOCATE_CHAR_IN_CAR_CHAR_2D( sub_2844(), l_U547, 15.00000000, 15.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_2844() ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                            if (((IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )) || (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 ))) || (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                            {
                                if (NOT l_U618)
                                {
                                    l_U488 = 20000.00000000;
                                    PRINT_HELP_FOREVER( "ROM6_23" );
                                    l_U618 = 1;
                                }
                            }
                        }
                        if (IS_PLAYER_PRESSING_HORN( sub_2926() ))
                        {
                            if (NOT l_U639)
                            {
                                l_U636 = 1;
                                CLEAR_CHAR_TASKS( l_U547 );
                                l_U639 = 1;
                            }
                        }
                        if (l_U636)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U547, 80, ref iVar2 );
                            if ((NOT (iVar2 == 1)) AND (iVar2 == 7))
                            {
                                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2844(), 0 );
                                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() ))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                                    if (((IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )) || (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 ))) || (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                                    {
                                        CLEAR_PRINTS();
                                        CLEAR_HELP();
                                        GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                                        if ((NOT (IS_CHAR_INJURED( l_U547 ))) AND (IS_VEH_DRIVEABLE( l_U554 )))
                                        {
                                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U554, -0.50000000, 6.00000000, 0.00000000, ref uVar3, ref uVar4, ref uVar5 );
                                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U554, 0.50000000, 6.00000000, 0.00000000, ref uVar6, ref uVar7, ref uVar8 );
                                            GET_CHAR_COORDINATES( l_U547, ref uVar9, ref uVar10, ref uVar11 );
                                            GET_DISTANCE_BETWEEN_COORDS_3D( uVar9, uVar10, uVar11, uVar3, uVar4, uVar5, ref fVar12 );
                                            GET_DISTANCE_BETWEEN_COORDS_3D( uVar9, uVar10, uVar11, uVar6, uVar7, uVar8, ref fVar13 );
                                            if (fVar13 < fVar12)
                                            {
                                                if (IS_CAR_MODEL( l_U554, -1932515764 ))
                                                {
                                                    if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                                    {
                                                        CLEAR_CHAR_TASKS( l_U547 );
                                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 ))
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( l_U547, l_U554, -2, 2 );
                                                        }
                                                        SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                                        TASK_LOOK_AT_CHAR( sub_2844(), l_U547, 6000, 0 );
                                                        SETTIMERA( 0 );
                                                        REMOVE_BLIP( l_U556 );
                                                        l_U636 = 0;
                                                        l_U590 = 0;
                                                        l_U673 = 4;
                                                    }
                                                }
                                                else if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                                {
                                                    CLEAR_CHAR_TASKS( l_U547 );
                                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 ))
                                                    {
                                                        TASK_ENTER_CAR_AS_PASSENGER( l_U547, l_U554, -2, 0 );
                                                    }
                                                    SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                                    TASK_LOOK_AT_CHAR( sub_2844(), l_U547, 6000, 0 );
                                                    SETTIMERA( 0 );
                                                    REMOVE_BLIP( l_U556 );
                                                    l_U636 = 0;
                                                    l_U590 = 0;
                                                    l_U673 = 4;
                                                }
                                            }
                                            else if (fVar12 < fVar13)
                                            {
                                                if (IS_CAR_MODEL( l_U554, -1932515764 ))
                                                {
                                                    if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                                    {
                                                        CLEAR_CHAR_TASKS( l_U547 );
                                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 ))
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( l_U547, l_U554, -2, 1 );
                                                        }
                                                        SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                                        TASK_LOOK_AT_CHAR( sub_2844(), l_U547, 6000, 0 );
                                                        SETTIMERA( 0 );
                                                        REMOVE_BLIP( l_U556 );
                                                        l_U636 = 0;
                                                        l_U590 = 0;
                                                        l_U673 = 4;
                                                    }
                                                }
                                                else if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                                {
                                                    CLEAR_CHAR_TASKS( l_U547 );
                                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 ))
                                                    {
                                                        TASK_ENTER_CAR_AS_PASSENGER( l_U547, l_U554, -2, 0 );
                                                    }
                                                    SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                                    TASK_LOOK_AT_CHAR( sub_2844(), l_U547, 6000, 0 );
                                                    SETTIMERA( 0 );
                                                    REMOVE_BLIP( l_U556 );
                                                    l_U636 = 0;
                                                    l_U590 = 0;
                                                    l_U673 = 4;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U618)
                    {
                        CLEAR_HELP();
                        l_U618 = 0;
                    }
                    if (NOT l_U590)
                    {
                        if (LOCATE_CHAR_ON_FOOT_2D( sub_2844(), 976.95840000, -74.58850000, 7.00000000, 7.00000000, 0 ))
                        {
                            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2844() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2844() ))))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U547 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U547, sub_2844() );
                                    sub_21301( "R6_NOCAR", ref l_U541, 6, 1 );
                                    l_U590 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U556 ))
            {
                PRINT_NOW( "ROM6_24", 7500, 1 );
                REMOVE_BLIP( l_U556 );
            }
            break;
            case 4:
            if (NOT l_U592)
            {
                if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                {
                    if (NOT l_U631)
                    {
                        PRINT_NOW( "ROM6_21", 7500, 1 );
                        l_U631 = 1;
                    }
                    if (NOT l_U632)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), l_U547, 12.00000000, 12.00000000, 0 ))
                        {
                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                            l_U632 = 1;
                        }
                    }
                }
                else if (l_U632)
                {
                    l_U631 = 0;
                    l_U632 = 0;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1303.11700000, 76.89810000, 100.00000000, 100.00000000, 0 ))
            {
                REQUEST_MODEL( 1609755055 );
                REQUEST_MODEL( -1500397869 );
                if ((l_U609) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_2844(), 1312.30400000, 88.57610000, 37.94310000 - 1.60000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U547, 1312.30400000, 88.57610000, 35.94310000 - 0.80000000, 2.50000000, 2.50000000, 2.50000000, 0 ))))
                {
                    l_U673 = 5;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
                {
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() )))
                    {
                        if (NOT l_U638)
                        {
                            if (sub_17766( l_U541 ))
                            {
                                sub_18526( ref l_U541 );
                                SAY_AMBIENT_SPEECH( l_U547, "GET_IN_CAR", 1, 0, 0 );
                                l_U611 = 1;
                                l_U638 = 1;
                            }
                        }
                    }
                    else if (((l_U611) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U547 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() )))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                        {
                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                        }
                        REMOVE_BLIP( l_U556 );
                        if (NOT (DOES_BLIP_EXIST( l_U557 )))
                        {
                            ADD_BLIP_FOR_COORD( 1311.59700000, 93.31990000, 34.12100000, ref l_U557 );
                            SET_ROUTE( l_U557, 1 );
                        }
                        SETTIMERA( 0 );
                        WAIT( 3000 );
                        if (l_U634)
                        {
                            if (g_U64762 == 1)
                            {
                                sub_20044( "R6_BANT1V1", ref l_U541, 6, 1 );
                            }
                            else if (g_U64762 == 2)
                            {
                                sub_20044( "R6_BANT1V2", ref l_U541, 6, 1 );
                            }
                            else if (g_U64762 > 2)
                            {
                                l_U626 = 1;
                                SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                            };;;
                        }
                        else if (g_U64762 == 0)
                        {
                            sub_21301( "R6_BANT1V1", ref l_U541, 6, 1 );
                            g_U64762++;
                            l_U642 = 3;
                        }
                        else if (g_U64762 == 1)
                        {
                            sub_21301( "R6_BANT1V2", ref l_U541, 6, 1 );
                            g_U64762++;
                            l_U642 = 3;
                        }
                        else if (g_U64762 > 1)
                        {
                            l_U626 = 1;
                            SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                            l_U642 = 3;
                        };;;;
                        l_U638 = 0;
                        l_U590 = 0;
                        l_U611 = 0;
                    }
                    switch (l_U642)
                    {
                        case 0:
                        if (NOT (IS_CHAR_INJURED( l_U547 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U547 ))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U557 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                        {
                                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                        }
                                    }
                                    ADD_BLIP_FOR_COORD( 1311.59700000, 93.31990000, 34.12100000, ref l_U557 );
                                    SET_ROUTE( l_U557, 1 );
                                }
                                SETTIMERA( 0 );
                                sub_28733( "R6_CAR1", 0, 1, ref l_U541, 6, 1 );
                                l_U592 = 1;
                                l_U642++;
                            }
                            else if (NOT l_U628[0])
                            {
                                if (TIMERA() >= 5000)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                                        {
                                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                                        }
                                    }
                                    l_U592 = 1;
                                    l_U628[0] = 1;
                                }
                            }
                            if (NOT l_U628[1])
                            {
                                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() )))
                                {
                                    CLEAR_CHAR_TASKS( l_U547 );
                                    l_U628[1] = 1;
                                }
                            }
                        }
                        break;
                        case 1:
                        if ((NOT (sub_17766( l_U541 ))) AND (TIMERA() >= 1000))
                        {
                            PRINT_NOW( "ROM6_11", 7500, 1 );
                            SETTIMERA( 0 );
                            l_U642++;
                        }
                        break;
                        case 2:
                        if (((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_17766( l_U541 )))) AND (TIMERA() >= 1000))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() ))
                            {
                                SETTIMERA( 0 );
                                if (g_U64762 == 0)
                                {
                                    sub_21301( "R6_BANT1V1", ref l_U541, 6, 1 );
                                    g_U64762++;
                                    l_U642++;
                                }
                                else if (g_U64762 == 1)
                                {
                                    sub_21301( "R6_BANT1V2", ref l_U541, 6, 1 );
                                    g_U64762++;
                                    l_U642++;
                                }
                                else if (g_U64762 > 1)
                                {
                                    l_U626 = 1;
                                    SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                                    l_U642++;
                                };;;
                                l_U634 = 1;
                            }
                            else if (NOT l_U638)
                            {
                                if (sub_17766( l_U541 ))
                                {
                                    sub_18526( ref l_U541 );
                                    SAY_AMBIENT_SPEECH( l_U547, "GET_IN_CAR", 1, 0, 0 );
                                    l_U611 = 1;
                                    l_U638 = 1;
                                }
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() ))
                        {
                            if (l_U638)
                            {
                                if (((sub_29497( l_U541 )) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (TIMERA() >= 1000))
                                {
                                    if (g_U64762 == 1)
                                    {
                                        sub_20044( "R6_BANT1V1", ref l_U541, 6, 1 );
                                    }
                                    else if (g_U64762 == 2)
                                    {
                                        sub_20044( "R6_BANT1V2", ref l_U541, 6, 1 );
                                    }
                                    else if (g_U64762 > 2)
                                    {
                                        l_U626 = 1;
                                        SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                                    };;;
                                }
                                l_U638 = 0;
                            }
                        }
                        else if (NOT l_U638)
                        {
                            if (sub_17766( l_U541 ))
                            {
                                sub_18526( ref l_U541 );
                                SAY_AMBIENT_SPEECH( l_U547, "GET_IN_CAR", 1, 0, 0 );
                                l_U611 = 1;
                                l_U638 = 1;
                            }
                        }
                        if ((sub_29779( l_U541 )) == 6)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U547 )))
                            {
                                if (IS_CHAR_ON_ANY_BIKE( sub_2844() ))
                                {
                                    TASK_PLAY_ANIM( sub_2844(), "bike_take_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    TASK_PLAY_ANIM( l_U547, "bike_give_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                }
                                else if (IS_CHAR_IN_ANY_CAR( l_U547 ))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    }
                                    else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    }
                                    else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    };;;
                                }
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2844(), 7 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2844(), 7, 150, 0 );
                            }
                            else
                            {
                                ADD_AMMO_TO_CHAR( sub_2844(), 7, 150 );
                            }
                            SET_CURRENT_CHAR_WEAPON( sub_2844(), 0, 0 );
                            PRINT_HELP( "ROM6_19" );
                            l_U609 = 1;
                            l_U642 = 99;
                        }
                        else if (l_U626)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U547 )))
                            {
                                if (IS_CHAR_ON_ANY_BIKE( sub_2844() ))
                                {
                                    TASK_PLAY_ANIM( sub_2844(), "bike_take_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    TASK_PLAY_ANIM( l_U547, "bike_give_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                }
                                else if (IS_CHAR_IN_ANY_CAR( l_U547 ))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    }
                                    else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    }
                                    else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 )))
                                    {
                                        TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( l_U547, "car_give_gun_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    };;;
                                }
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2844(), 7 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2844(), 7, 150, 0 );
                            }
                            else
                            {
                                ADD_AMMO_TO_CHAR( sub_2844(), 7, 150 );
                            }
                            SET_CURRENT_CHAR_WEAPON( sub_2844(), 0, 0 );
                            PRINT_HELP( "ROM6_19" );
                            l_U609 = 1;
                            l_U642 = 99;
                        }
                        break;
                    }
                }
            }
            break;
            case 5:
            if (NOT l_U609)
            {
                if ((sub_29779( l_U541 )) == 6)
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (IS_CHAR_ON_ANY_BIKE( sub_2844() ))
                        {
                            TASK_PLAY_ANIM( sub_2844(), "bike_take_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( l_U547, "bike_give_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                        }
                        else if (IS_CHAR_IN_ANY_CAR( l_U547 ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            }
                            else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            }
                            else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            };;;
                        }
                    }
                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_2844(), 7 )))
                    {
                        GIVE_WEAPON_TO_CHAR( sub_2844(), 7, 150, 0 );
                    }
                    else
                    {
                        ADD_AMMO_TO_CHAR( sub_2844(), 7, 150 );
                    }
                    SET_CURRENT_CHAR_WEAPON( sub_2844(), 0, 0 );
                    PRINT_HELP( "ROM6_19" );
                    l_U609 = 1;
                }
                else if (l_U626)
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (IS_CHAR_ON_ANY_BIKE( sub_2844() ))
                        {
                            TASK_PLAY_ANIM( sub_2844(), "bike_take_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( l_U547, "bike_give_gun", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                        }
                        else if (IS_CHAR_IN_ANY_CAR( l_U547 ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_side", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            }
                            else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 2 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_back", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            }
                            else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 1 )))
                            {
                                TASK_PLAY_ANIM( sub_2844(), "car_take_gun_back_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( l_U547, "car_give_gun_l", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                            };;;
                        }
                    }
                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_2844(), 7 )))
                    {
                        GIVE_WEAPON_TO_CHAR( sub_2844(), 7, 150, 0 );
                    }
                    else
                    {
                        ADD_AMMO_TO_CHAR( sub_2844(), 7, 150 );
                    }
                    SET_CURRENT_CHAR_WEAPON( sub_2844(), 0, 0 );
                    PRINT_HELP( "ROM6_19" );
                    l_U609 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (IS_GROUP_MEMBER( l_U547, sub_17964() ))
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2844(), 1312.30400000, 88.57610000, 37.94310000 - 1.60000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U547, 1312.30400000, 88.57610000, 35.94310000 - 0.80000000, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            SET_ALL_RANDOM_PEDS_FLEE( sub_2926(), 1 );
                            REMOVE_BLIP( l_U556 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 0 );
                            SET_CREATE_RANDOM_COPS( 0 );
                            REMOVE_BLIP( l_U557 );
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2844(), 7 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2844(), 7, 150, 0 );
                            }
                            else if (NOT l_U609)
                            {
                                ADD_AMMO_TO_CHAR( sub_2844(), 7, 150 );
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_2844() ))
                            {
                                sub_32905();
                                SET_CURRENT_CHAR_WEAPON( sub_2844(), 0, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U547 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U547 );
                                OPEN_SEQUENCE_TASK( ref l_U570 );
                                TASK_SWAP_WEAPON( 0, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1305.18000000, 63.93570000, 33.73170000, 2, 43000, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1306.16100000, 55.87050000, 33.72440000, 2, 25000, 0 );
                                TASK_TURN_CHAR_TO_FACE_COORD( 0, 1307.87900000, 75.31970000, 35.15260000 );
                                CLOSE_SEQUENCE_TASK( l_U570 );
                                TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                                CLEAR_SEQUENCE_TASK( l_U570 );
                            }
                            sub_2978( 1 );
                            ADD_BLIP_FOR_COORD( 1303.11700000, 76.89810000, 38.84750000, ref l_U559 );
                            SET_ROUTE( l_U559, 1 );
                            SETTIMERA( 0 );
                            l_U601 = 0;
                            l_U600 = 1;
                            l_U592 = 0;
                            l_U673 = 6;
                        }
                    }
                }
            }
            break;
            case 6:
            if (NOT l_U607)
            {
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U547, 1306.16100000, 55.87050000, 34.30000000, 2.50000000, 2.50000000, 4.50000000, 0 ))
                    {
                        SETTIMERB( 0 );
                        l_U607 = 1;
                    }
                }
            }
            if (NOT l_U584[0])
            {
                if (NOT (sub_17766( l_U541 )))
                {
                    sub_21301( "R6_ARR", ref l_U541, 7, 1 );
                    l_U584[0] = 1;
                }
            }
            else if (NOT l_U584[1])
            {
                if (NOT (sub_17766( l_U541 )))
                {
                    PRINT( "ROM6_10", 7500, 1 );
                    l_U584[1] = 1;
                }
            }
            if (NOT l_U571[0])
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2844() )))
                {
                    FLASH_WEAPON_ICON( 1 );
                    sub_33592( "ROM6_", 13, 7500 );
                    SETTIMERA( 0 );
                    l_U571[0] = 1;
                }
            }
            else if (NOT l_U576[0])
            {
                if (TIMERA() >= 5000)
                {
                    FLASH_WEAPON_ICON( 0 );
                    l_U576[0] = 1;
                }
            }
            GET_CURRENT_CHAR_WEAPON( sub_2844(), ref l_U672 );
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
            {
                if (NOT l_U600)
                {
                    if (DOES_BLIP_EXIST( l_U559 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U559, 4 );
                    }
                    if ((NOT (sub_17766( l_U541 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                    {
                        sub_20044( "R6_ARR", ref l_U541, 6, 1 );
                    }
                    PRINT( "ROM6_10", 7500, 1 );
                    l_U600 = 1;
                    l_U601 = 0;
                }
                if (NOT l_U599)
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_2844(), 1303.11700000, 76.89810000, 39.40700000, 1.60000000, 1.60000000, 1.60000000, 1 ))
                    {
                        CLEAR_THIS_PRINT( "ROM6_10" );
                        CHANGE_BLIP_DISPLAY( l_U559, 0 );
                        DISABLE_POLICE_SCANNER();
                        SET_WANTED_MULTIPLIER( 0.00000000 );
                        l_U599 = 1;
                    }
                }
                else if (LOCATE_CHAR_ON_FOOT_3D( sub_2844(), 1303.11700000, 76.89810000, 38.84750000, 1.60000000, 1.60000000, 1.60000000, 0 ))
                {
                    if (l_U571[0])
                    {
                        if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() >= 10000))
                        {
                            if (NOT l_U571[1])
                            {
                                GET_CURRENT_CHAR_WEAPON( sub_2844(), ref l_U672 );
                                if (l_U672 == 7)
                                {
                                    PRINT_HELP( "ROM6_22" );
                                    SETTIMERA( 0 );
                                    l_U571[1] = 1;
                                    l_U571[2] = 1;
                                }
                                else
                                {
                                    PRINT_HELP( "ROM6_17" );
                                    SETTIMERA( 0 );
                                    l_U571[1] = 1;
                                }
                            }
                        }
                        if (((l_U571[1]) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (TIMERA() >= 1000))
                        {
                            if (NOT l_U571[2])
                            {
                                PRINT_HELP( "ROM6_22" );
                                SETTIMERA( 0 );
                                l_U571[2] = 1;
                            }
                        }
                    }
                }
                else
                {
                    CHANGE_BLIP_DISPLAY( l_U559, 4 );
                    PRINT( "ROM6_10", 7500, 1 );
                    ENABLE_POLICE_SCANNER();
                    SET_WANTED_MULTIPLIER( 1.00000000 );
                    l_U599 = 0;
                }
                if ((((HAS_MODEL_LOADED( -1500397869 )) AND (HAS_MODEL_LOADED( 1609755055 ))) AND (l_U571[2])) AND (TIMERA() >= 8500))
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_2844(), 1303.11700000, 76.89810000, 38.84750000, 1.60000000, 1.60000000, 1.60000000, 0 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U547 )))
                            {
                                l_U571[2] = 1;
                                if ((l_U607) AND (TIMERB() >= 3500))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        CREATE_CHAR( 26, 1609755055, 1307.74000000, 77.58920000, 34.00000000, ref l_U548[0], 1 );
                                        SET_CHAR_IS_TARGET_PRIORITY( l_U548[0], 1 );
                                        SET_CHAR_HEALTH( l_U548[0], 250 );
                                        sub_25319( 2, l_U548[0], "thug_1", 0 );
                                        SET_CHAR_HEADING( l_U548[0], 202.28460000 );
                                        SET_CHAR_DECISION_MAKER( l_U548[0], l_U566 );
                                        SET_COMBAT_DECISION_MAKER( l_U548[0], l_U568 );
                                        GIVE_WEAPON_TO_CHAR( l_U548[0], 7, 30000, 0 );
                                        SET_CURRENT_CHAR_WEAPON( l_U548[0], 0, 0 );
                                        SET_CHAR_RELATIONSHIP_GROUP( l_U548[0], 4 );
                                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U548[0], 1 );
                                        SET_PED_DIES_WHEN_INJURED( l_U548[0], 1 );
                                        SET_CHAR_AS_ENEMY( l_U548[0], 1 );
                                        OPEN_SEQUENCE_TASK( ref l_U570 );
                                        TASK_STAND_STILL( 0, 100 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U653[0]._fU0, l_U653[0]._fU4, l_U653[0]._fU8, 2, -2, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U570 );
                                        TASK_PERFORM_SEQUENCE( l_U548[0], l_U570 );
                                        CLEAR_SEQUENCE_TASK( l_U570 );
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[0], 1 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        CREATE_CHAR( 26, -1500397869, 1307.83900000, 79.03600000, 34.00000000, ref l_U548[1], 1 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[1], 0, 0, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[1], 1, 0, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[1], 7, 0, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[1], 2, 0, 0 );
                                        SET_CHAR_IS_TARGET_PRIORITY( l_U548[1], 1 );
                                        SET_CHAR_HEALTH( l_U548[1], 250 );
                                        SET_CHAR_HEADING( l_U548[1], 202.28460000 );
                                        SET_CHAR_DECISION_MAKER( l_U548[1], l_U566 );
                                        SET_COMBAT_DECISION_MAKER( l_U548[1], l_U568 );
                                        GIVE_WEAPON_TO_CHAR( l_U548[1], 7, 30000, 0 );
                                        SET_CURRENT_CHAR_WEAPON( l_U548[1], 0, 0 );
                                        SET_CHAR_RELATIONSHIP_GROUP( l_U548[1], 4 );
                                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U548[1], 1 );
                                        SET_PED_DIES_WHEN_INJURED( l_U548[1], 1 );
                                        SET_CHAR_AS_ENEMY( l_U548[1], 1 );
                                        OPEN_SEQUENCE_TASK( ref l_U570 );
                                        TASK_STAND_STILL( 0, 300 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U653[1]._fU0, l_U653[1]._fU4, l_U653[1]._fU8, 2, -2, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U570 );
                                        TASK_PERFORM_SEQUENCE( l_U548[1], l_U570 );
                                        CLEAR_SEQUENCE_TASK( l_U570 );
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[1], 1 );
                                        TASK_LOOK_AT_CHAR( l_U547, l_U548[1], 25000, 0 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        CREATE_CHAR( 26, -1500397869, 1307.84900000, 80.45790000, 34.00000000, ref l_U548[2], 1 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[2], 0, 0, 1 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[2], 1, 0, 1 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[2], 7, 1, 1 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U548[2], 2, 0, 1 );
                                        SET_CHAR_IS_TARGET_PRIORITY( l_U548[2], 1 );
                                        SET_CHAR_HEALTH( l_U548[2], 250 );
                                        SET_CHAR_HEADING( l_U548[2], 202.28460000 );
                                        SET_CHAR_DECISION_MAKER( l_U548[2], l_U566 );
                                        SET_COMBAT_DECISION_MAKER( l_U548[2], l_U565 );
                                        GIVE_WEAPON_TO_CHAR( l_U548[2], 7, 30000, 0 );
                                        SET_CHAR_RELATIONSHIP_GROUP( l_U548[2], 4 );
                                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U548[2], 1 );
                                        SET_PED_DIES_WHEN_INJURED( l_U548[2], 1 );
                                        SET_CHAR_AS_ENEMY( l_U548[2], 1 );
                                        OPEN_SEQUENCE_TASK( ref l_U570 );
                                        TASK_STAND_STILL( 0, 700 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U653[2]._fU0, l_U653[2]._fU4, l_U653[2]._fU8, 2, -2, 0.50000000 );
                                        TASK_SWAP_WEAPON( 0, 1 );
                                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1311.15700000, 65.36650000, 32.89460000, 3, 0, 1.00000000, l_U547, 1 );
                                        TASK_AIM_GUN_AT_CHAR( 0, l_U547, 2000 );
                                        TASK_COMBAT( 0, l_U547 );
                                        CLOSE_SEQUENCE_TASK( l_U570 );
                                        TASK_PERFORM_SEQUENCE( l_U548[2], l_U570 );
                                        CLEAR_SEQUENCE_TASK( l_U570 );
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[2], 1 );
                                    }
                                    WAIT( 500 );
                                    if (IS_VEH_DRIVEABLE( l_U554 ))
                                    {
                                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U554 );
                                    }
                                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U554 );
                                    if (IS_VEH_DRIVEABLE( l_U554 ))
                                    {
                                        SET_CAR_AS_MISSION_CAR( l_U554 );
                                    }
                                    SET_WANTED_MULTIPLIER( 0.00000000 );
                                    SET_CHAR_INVINCIBLE( l_U547, 1 );
                                    SET_CHAR_COORDINATES( sub_2844(), 1303.37400000, 76.54890000, 37.84730000 );
                                    SET_CHAR_HEADING( sub_2844(), 196.61100000 );
                                    TASK_TOGGLE_DUCK( sub_2844(), 1 );
                                    if (IS_VEH_DRIVEABLE( l_U554 ))
                                    {
                                        if (LOCATE_CAR_2D( l_U554, 1303.11700000, 76.89810000, 25.00000000, 25.00000000, 0 ))
                                        {
                                            SET_CAR_COORDINATES( l_U554, 1312.16100000, 91.98270000, 34.20400000 );
                                            SET_CAR_HEADING( l_U554, 183.21390000 );
                                            CLOSE_ALL_CAR_DOORS( l_U554 );
                                            SET_CAR_ON_GROUND_PROPERLY( l_U554 );
                                        }
                                    }
                                    SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 0, 0, 1 );
                                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U547 );
                                        SET_CHAR_COORDINATES( l_U547, 1306.16100000, 55.87050000, 32.72420000 );
                                        SET_CHAR_HEADING( l_U547, 351.19600000 );
                                    }
                                    CLEAR_AREA_OF_COPS( 1303.11700000, 76.89810000, 38.84750000, 100 );
                                    CLEAR_AREA_OF_CARS( 1303.11700000, 76.89810000, 38.84750000, 50 );
                                    CLEAR_AREA_OF_CHARS( 1303.11700000, 76.89810000, 38.84750000, 50 );
                                    CLEAR_AREA( 1303.11700000, 76.89810000, 38.84750000, 50, 1 );
                                    CLEAR_HELP();
                                    CLEAR_PRINTS();
                                    sub_36765( 1 );
                                    if (NOT l_U582)
                                    {
                                        REMOVE_BLIP( l_U559 );
                                        l_U582 = 1;
                                    }
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    DISPLAY_RADAR( 0 );
                                    DISPLAY_HUD( 0 );
                                    BEGIN_CAM_COMMANDS( ref l_U645 );
                                    l_U597 = 1;
                                    CREATE_CAM( 14, ref l_U669 );
                                    CREATE_CAM( 14, ref l_U670 );
                                    CREATE_CAM( 3, ref l_U671 );
                                    SET_CAM_POS( l_U669, 1305.71200000, 54.35478000, 36.82082000 );
                                    SET_CAM_ROT( l_U669, 4.01470300, -0.00000000, -6.20167500 );
                                    SET_CAM_FOV( l_U669, 27.90004000 );
                                    SET_CAM_NEAR_DOF( l_U669, 4.00000000 );
                                    SET_CAM_FAR_DOF( l_U669, 19.00000000 );
                                    SET_CAM_POS( l_U670, 1305.72700000, 54.53935000, 34.17640000 );
                                    SET_CAM_ROT( l_U670, 4.01470300, -0.00000000, -6.20167500 );
                                    SET_CAM_FOV( l_U670, 27.90004000 );
                                    SET_CAM_NEAR_DOF( l_U670, 4.00000000 );
                                    SET_CAM_FAR_DOF( l_U670, 25.00000000 );
                                    SET_CAM_ACTIVE( l_U669, 1 );
                                    SET_CAM_PROPAGATE( l_U669, 1 );
                                    SET_CAM_ACTIVE( l_U670, 1 );
                                    SET_CAM_PROPAGATE( l_U670, 1 );
                                    SET_CAM_ACTIVE( l_U671, 1 );
                                    SET_CAM_PROPAGATE( l_U671, 1 );
                                    SET_CAM_INTERP_STYLE_CORE( l_U671, l_U669, l_U670, 5500, 0 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    SETTIMERA( 0 );
                                    l_U601 = 0;
                                    l_U673 = 7;
                                }
                                else if (NOT l_U583)
                                {
                                    PRINT( "ROM6_03", 7500, 1 );
                                    l_U583 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT l_U601)
            {
                if (DOES_BLIP_EXIST( l_U559 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U559, 0 );
                }
                if (sub_17766( l_U541 ))
                {
                    sub_18526( ref l_U541 );
                }
                CLEAR_PRINTS();
                if (DOES_BLIP_EXIST( l_U557 ))
                {
                    REMOVE_BLIP( l_U557 );
                }
                PRINT_NOW( "ROM6_24", 7500, 1 );
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "7" );
                PRINTNL();
                PRINTNL();
                l_U601 = 1;
                l_U600 = 0;
            }
            break;
            case 7:
            if (NOT l_U598)
            {
                if ((TIMERA() >= 3000) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                {
                    sub_28733( "R6_MEET1", 0, 1, ref l_U541, 6, 1 );
                    SETTIMERA( 0 );
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U547, 7, 0 );
                    }
                    l_U673 = 8;
                }
            }
            sub_37658();
            break;
            case 8:
            sub_37658();
            switch (l_U643)
            {
                case 0:
                if ((NOT (sub_17766( l_U541 ))) || (l_U598))
                {
                    sub_28733( "R6_MEET1", 1, 1, ref l_U541, 6, 1 );
                    PRINTSTRING( "should have changed" );
                    SET_CAM_POS( l_U669, 1301.90100000, 76.25934000, 39.39548000 );
                    SET_CAM_ROT( l_U669, -42.39488000, 0.00000100, -127.32120000 );
                    SET_CAM_FOV( l_U669, 62.70000000 );
                    SET_CAM_NEAR_DOF( l_U669, 0.50000000 );
                    SET_CAM_FAR_DOF( l_U669, 20.00000000 );
                    SET_CAM_ACTIVE( l_U671, 0 );
                    SET_CAM_PROPAGATE( l_U671, 0 );
                    SET_CAM_ACTIVE( l_U670, 0 );
                    SET_CAM_PROPAGATE( l_U670, 0 );
                    SET_CAM_ACTIVE( l_U669, 1 );
                    SET_CAM_PROPAGATE( l_U669, 1 );
                    SETTIMERA( 0 );
                    l_U643 = 1;
                }
                break;
                case 1:
                if ((TIMERA() >= 3000) || (l_U598))
                {
                    SET_CAM_POS( l_U669, 1305.84700000, 53.78482000, 33.16053000 );
                    SET_CAM_ROT( l_U669, 10.65303000, 0.00000000, 6.75012400 );
                    SET_CAM_FOV( l_U669, 56.69997000 );
                    SET_CAM_ACTIVE( l_U670, 0 );
                    SET_CAM_PROPAGATE( l_U670, 0 );
                    SET_CAM_ACTIVE( l_U671, 0 );
                    SET_CAM_PROPAGATE( l_U671, 0 );
                    SETTIMERA( 0 );
                    l_U643 = 2;
                }
                break;
                case 2:
                if ((NOT (sub_17766( l_U541 ))) || (l_U598))
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U548[0] );
                            SET_CURRENT_CHAR_WEAPON( l_U548[0], 7, 0 );
                            OPEN_SEQUENCE_TASK( ref l_U570 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1303.15800000, 63.97090000, 32.69510000, 3, 0, 1.00000000, l_U547, 1 );
                            TASK_AIM_GUN_AT_CHAR( 0, l_U547, 2000 );
                            TASK_COMBAT( 0, l_U547 );
                            CLOSE_SEQUENCE_TASK( l_U570 );
                            TASK_PERFORM_SEQUENCE( l_U548[0], l_U570 );
                            CLEAR_SEQUENCE_TASK( l_U570 );
                        }
                    }
                    WAIT( 100 );
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U548[1] );
                            SET_CURRENT_CHAR_WEAPON( l_U548[1], 7, 0 );
                            OPEN_SEQUENCE_TASK( ref l_U570 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1308.10600000, 65.64020000, 32.72420000, 3, 0, 1.00000000, l_U547, 1 );
                            TASK_AIM_GUN_AT_CHAR( 0, l_U547, 2000 );
                            TASK_COMBAT( 0, l_U547 );
                            CLOSE_SEQUENCE_TASK( l_U570 );
                            TASK_PERFORM_SEQUENCE( l_U548[1], l_U570 );
                            CLEAR_SEQUENCE_TASK( l_U570 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U643 = 3;
                }
                break;
                case 3:
                if ((TIMERA() >= 0) || (l_U598))
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( l_U547, 1 );
                            SET_CHAR_RELATIONSHIP( l_U547, 1, 0 );
                            SET_CHAR_RELATIONSHIP( l_U547, 5, 4 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U570 );
                            TASK_LOOK_AT_CHAR( 0, l_U548[1], 3000, 0 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1304.12800000, 56.82670000, 32.72510000, 3, 0.20000000, 0.10000000, l_U548[1], 0 );
                            TASK_COMBAT( 0, l_U548[1] );
                            CLOSE_SEQUENCE_TASK( l_U570 );
                            TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                            CLEAR_SEQUENCE_TASK( l_U570 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U643 = 4;
                }
                break;
                case 4:
                if ((TIMERA() >= 1500) || (l_U598))
                {
                    if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[0], 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[1], 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U548[2] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[2], 0 );
                    }
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 1, 0, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U645 );
                    l_U597 = 0;
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_CAM_BEHIND_PED( sub_2844() );
                    if (IS_SCREEN_FADED_OUT())
                    {
                        LOAD_SCENE( 1303.37400000, 76.54890000, 37.84730000 );
                        DO_SCREEN_FADE_IN( 1000 );
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    for ( l_U646 = 0; l_U646 <= 2; l_U646++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U548[l_U646] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U548[l_U646], ref l_U560[l_U646] );
                        }
                    }
                    SETTIMERA( 0 );
                    if (((NOT (IS_CHAR_INJURED( l_U548[0] ))) AND (NOT (IS_CHAR_INJURED( l_U548[1] )))) AND (NOT (IS_CHAR_INJURED( l_U548[2] ))))
                    {
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[0], 1303.15800000, 63.97090000, 32.69510000, 3.00000000 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[1], 1308.10600000, 65.64020000, 32.72420000, 3.00000000 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[2], 1311.15700000, 65.36650000, 32.89460000, 3.00000000 );
                    }
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U673 = 9;
                }
                break;
            }
            break;
            case 9:
            if (NOT l_U641)
            {
                SETTIMERB( 0 );
                l_U641 = 1;
            }
            sub_40499();
            GET_AMMO_IN_CHAR_WEAPON( sub_2844(), 7, ref l_U647 );
            if (l_U647 < 1)
            {
                if (NOT l_U617)
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        SET_CHAR_HEALTH( l_U547, 150 );
                    }
                    SETTIMERB( 0 );
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U547 );
                    l_U617 = 1;
                }
                else if (TIMERB() >= 10000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547, l_U548[0], 0 ))
                            {
                                SET_CHAR_HEALTH( l_U547, 0 );
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U547, ref l_U663._fU0, ref l_U663._fU4, ref l_U663._fU8 );
                                if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[0], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[0], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[1], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[1], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547, l_U548[1], 0 ))
                            {
                                SET_CHAR_HEALTH( l_U547, 0 );
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U547, ref l_U663._fU0, ref l_U663._fU4, ref l_U663._fU8 );
                                if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[0], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[0], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[1], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[1], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U548[2] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547, l_U548[2], 0 ))
                            {
                                SET_CHAR_HEALTH( l_U547, 0 );
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U547, ref l_U663._fU0, ref l_U663._fU4, ref l_U663._fU8 );
                                if (NOT (IS_CHAR_INJURED( l_U548[2] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[2], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[2], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U548[2] )))
                                {
                                    GET_CURRENT_CHAR_WEAPON( l_U548[2], ref l_U672 );
                                    if (l_U672 == 7)
                                    {
                                        FIRE_PED_WEAPON( l_U548[2], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                        SET_CHAR_HEALTH( l_U547, 0 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U587[0])
            {
                if (NOT (sub_17766( l_U541 )))
                {
                    sub_21301( "R6_MEET2", ref l_U541, 6, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U548[2] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[2], 0 );
                        SET_CHAR_RELATIONSHIP( l_U548[2], 5, 0 );
                        TASK_COMBAT( l_U548[2], sub_2844() );
                    }
                    l_U587[0] = 1;
                }
            }
            if (NOT l_U587[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 0 );
                    SET_CHAR_INVINCIBLE( l_U547, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U548[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[1], 0 );
                    SET_CHAR_RELATIONSHIP( l_U548[1], 5, 2 );
                }
                if (NOT (IS_CHAR_INJURED( l_U548[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[0], 0 );
                    SET_CHAR_RELATIONSHIP( l_U548[0], 5, 0 );
                }
                l_U636 = 1;
                l_U587[1] = 1;
            }
            for ( l_U646 = 0; l_U646 <= 2; l_U646++ )
            {
                if (IS_CHAR_INJURED( l_U548[l_U646] ))
                {
                    REMOVE_BLIP( l_U560[l_U646] );
                }
            }
            if (((IS_CHAR_INJURED( l_U548[0] )) AND (IS_CHAR_INJURED( l_U548[1] ))) AND (IS_CHAR_INJURED( l_U548[2] )))
            {
                sub_2978( 1 );
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    CLEAR_CHAR_TASKS( l_U547 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1609755055 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548[0] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548[1] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548[2] );
                l_U673 = 10;
            }
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), l_U547, 50, 50, 0 )))
                {
                    DAMAGE_CHAR( l_U547, 400, 1 );
                }
            }
            break;
            case 10:
            sub_40499();
            if (NOT l_U635)
            {
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), l_U547, 50, 50, 0 )))
                    {
                        DAMAGE_CHAR( l_U547, 400, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), l_U547, 40, 40, 0 )))
                    {
                        if (NOT l_U637)
                        {
                            PRINT_NOW( "ROM6_30", 7500, 1 );
                            l_U637 = 1;
                        }
                    }
                    else
                    {
                        l_U637 = 0;
                    }
                }
            }
            if (NOT l_U608)
            {
                if (TIMERB() >= 22500)
                {
                    l_U608 = 1;
                }
            }
            else if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() >= 500)) AND (sub_43436( 1, 1 )))
            {
                if (NOT l_U580)
                {
                    if (HAS_MODEL_LOADED( -1500397869 ))
                    {
                        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U565, 1 );
                        l_U635 = 1;
                        sub_2978( 0 );
                        sub_36765( 1 );
                        SET_CHAR_PROOFS( sub_2844(), 1, 0, 0, 0, 0 );
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 0, 0.00000000 );
                        CREATE_CHAR( 26, -1500397869, 1314.48600000, 70.36360000, 40.93000000, ref l_U548[3], 1 );
                        TASK_TOGGLE_DUCK( l_U548[3], 0 );
                        SET_CHAR_WILL_USE_COVER( l_U548[3], 0 );
                        SET_PED_DIES_WHEN_INJURED( l_U548[3], 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[3], 1 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U548[3], 0 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U548[3], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U548[3], 1 );
                        SET_CHAR_AS_ENEMY( l_U548[3], 1 );
                        SET_CHAR_HEADING( l_U548[3], 102.36820000 );
                        SET_CHAR_HEALTH( l_U548[3], 300 );
                        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U565, 1 );
                        SET_CHAR_DECISION_MAKER( l_U548[3], l_U566 );
                        SET_COMBAT_DECISION_MAKER( l_U548[3], l_U565 );
                        SET_CHAR_RELATIONSHIP( l_U548[3], 5, 0 );
                        GIVE_WEAPON_TO_CHAR( l_U548[3], 7, 30000, 1 );
                        SET_CHAR_COMPONENT_VARIATION( l_U548[3], 0, 1, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U548[3], 1, 1, 2 );
                        SET_CHAR_COMPONENT_VARIATION( l_U548[3], 7, 2, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U548[3], 2, 0, 2 );
                        OPEN_SEQUENCE_TASK( ref l_U570 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1311.37400000, 71.28250000, 40.28610000, 3, 5000 );
                        TASK_SHOOT_AT_COORD( 0, 1304.30700000, 75.95112000, 38.29570000, 6000, 2 );
                        TASK_COMBAT( 0, sub_2844() );
                        CLOSE_SEQUENCE_TASK( l_U570 );
                        TASK_PERFORM_SEQUENCE( l_U548[3], l_U570 );
                        CLEAR_SEQUENCE_TASK( l_U570 );
                        sub_21301( "R6_ABOVE", ref l_U541, 6, 1 );
                        SET_WIDESCREEN_BORDERS( 1 );
                        DISPLAY_RADAR( 0 );
                        DISPLAY_HUD( 0 );
                        if (((((((((NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1316.86600000, 83.71210000, 6.00000000, 6.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1315.07200000, 80.35860000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1312.98500000, 75.58780000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1310.41500000, 73.21090000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1309.17600000, 68.43610000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1308.76000000, 64.84910000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1306.74700000, 61.84950000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1306.87100000, 57.02140000, 6.00000000, 6.00000000, 0 )))) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1303.37400000, 76.54890000, 10.00000000, 10.00000000, 0 )))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U645 );
                            l_U597 = 1;
                            CREATE_CAM( 14, ref l_U669 );
                            CREATE_CAM( 14, ref l_U670 );
                            CREATE_CAM( 3, ref l_U671 );
                            SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 0, 0, 1 );
                            SET_CAM_POS( l_U669, 1307.74000000, 72.74310000, 39.75975000 );
                            SET_CAM_ROT( l_U669, 17.95188000, -0.00000000, -112.10470000 );
                            SET_CAM_FOV( l_U669, 57.29997000 );
                            SET_CAM_ACTIVE( l_U669, 1 );
                            SET_CAM_PROPAGATE( l_U669, 1 );
                            SET_CAM_ACTIVE( l_U670, 0 );
                            SET_CAM_PROPAGATE( l_U670, 0 );
                            SET_CAM_ACTIVE( l_U671, 0 );
                            SET_CAM_PROPAGATE( l_U671, 0 );
                            SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 900 );
                            SET_CAM_MOTION_BLUR( l_U671, 0.10000000 );
                            SET_CAM_MOTION_BLUR( l_U669, 0.10000000 );
                            SET_CAM_MOTION_BLUR( l_U670, 0.10000000 );
                        }
                        else
                        {
                            BEGIN_CAM_COMMANDS( ref l_U645 );
                            l_U597 = 1;
                            CREATE_CAM( 14, ref l_U669 );
                            SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 0, 0, 1 );
                            SET_CAM_POS( l_U669, 1307.74000000, 72.74310000, 39.75975000 );
                            SET_CAM_ROT( l_U669, 17.95188000, -0.00000000, -112.10470000 );
                            SET_CAM_FOV( l_U669, 57.29997000 );
                            SET_CAM_ACTIVE( l_U669, 1 );
                            SET_CAM_PROPAGATE( l_U669, 1 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U548[3], ref l_U560[3] );
                            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U565, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U547 )))
                        {
                            TASK_COMBAT( l_U547, l_U548[3] );
                            GET_CHAR_COORDINATES( l_U547, ref l_U663._fU0, ref l_U663._fU4, ref l_U663._fU8 );
                            SET_CHAR_COORDINATES( l_U547, l_U663._fU0, l_U663._fU4, l_U663._fU8 - 1 );
                        }
                        SETTIMERA( 0 );
                        l_U580 = 1;
                    }
                }
            }
            if (l_U580)
            {
                if (NOT l_U621)
                {
                    GET_FRAME_TIME( ref l_U648 );
                    l_U649 -= l_U648;
                    PRINTSTRING( "OPENING" );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 1, l_U649 );
                    if (l_U649 <= -1.00000000)
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 0, 0.00000000 );
                        l_U621 = 1;
                    }
                }
                if (NOT l_U576[1])
                {
                    if (TIMERA() >= 3000)
                    {
                        SET_CAM_ACTIVE( l_U669, 0 );
                        SET_CAM_PROPAGATE( l_U669, 0 );
                        SET_CAM_ACTIVE( l_U670, 0 );
                        SET_CAM_PROPAGATE( l_U670, 0 );
                        SET_CAM_ACTIVE( l_U671, 0 );
                        SET_CAM_PROPAGATE( l_U671, 0 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                        {
                            TASK_TOGGLE_DUCK( l_U548[3], 0 );
                            SAY_AMBIENT_SPEECH( l_U548[3], "MOVE_IN", 1, 1, 2 );
                            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U565, 35 );
                        }
                        SET_CHAR_PROOFS( sub_2844(), 0, 0, 0, 0, 0 );
                        if (((((((((NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1316.86600000, 83.71210000, 6.00000000, 6.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1315.07200000, 80.35860000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1312.98500000, 75.58780000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1310.41500000, 73.21090000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1309.17600000, 68.43610000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1308.76000000, 64.84910000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1306.74700000, 61.84950000, 6.00000000, 6.00000000, 0 )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1306.87100000, 57.02140000, 6.00000000, 6.00000000, 0 )))) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_2844(), 1303.37400000, 76.54890000, 10.00000000, 10.00000000, 0 )))
                        {
                            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1000 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DISPLAY_RADAR( 1 );
                        DISPLAY_HUD( 1 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        END_CAM_COMMANDS( ref l_U645 );
                        l_U597 = 0;
                        l_U635 = 0;
                        SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 1, 0, 1 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        DISPLAY_RADAR( 1 );
                        DISPLAY_HUD( 1 );
                        PRINT_HELP( "ROM6_09" );
                        if (DOES_BLIP_EXIST( l_U560[3] ))
                        {
                            FLASH_BLIP( l_U560[3], 1 );
                        }
                        SET_CAM_MOTION_BLUR( l_U671, 0.00000000 );
                        SET_CAM_MOTION_BLUR( l_U669, 0.00000000 );
                        SET_CAM_MOTION_BLUR( l_U670, 0.00000000 );
                        SET_PLAYER_INVINCIBLE( sub_2926(), 0 );
                        if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548[3], 0 );
                        }
                        SETTIMERA( 0 );
                        l_U576[1] = 1;
                    }
                }
                else if (NOT l_U633)
                {
                    if (TIMERA() >= 2000)
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 1, 0.00000000 );
                        l_U633 = 1;
                    }
                }
                GET_AMMO_IN_CHAR_WEAPON( sub_2844(), 7, ref l_U647 );
                if (l_U647 < 1)
                {
                    if (NOT l_U617)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U547 )))
                        {
                            SET_CHAR_HEALTH( l_U547, 150 );
                        }
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U547 );
                        SETTIMERA( 0 );
                        l_U617 = 1;
                    }
                    else if (TIMERA() >= 60000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U547 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                            {
                                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547, l_U548[3], 0 ))
                                {
                                    SET_CHAR_HEALTH( l_U547, 0 );
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( l_U547, ref l_U663._fU0, ref l_U663._fU4, ref l_U663._fU8 );
                                    if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                                    {
                                        GET_CURRENT_CHAR_WEAPON( l_U548[3], ref l_U672 );
                                        if (l_U672 == 7)
                                        {
                                            FIRE_PED_WEAPON( l_U548[3], l_U663._fU0, l_U663._fU4, l_U663._fU8 );
                                            SET_CHAR_HEALTH( l_U547, 0 );
                                            SETTIMERA( 0 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_CHAR_INJURED( l_U548[3] ))
                {
                    REMOVE_BLIP( l_U560[3] );
                }
            }
            if (NOT l_U614)
            {
                if (NOT (IS_CHAR_INJURED( l_U548[3] )))
                {
                    GET_CHAR_COORDINATES( l_U548[3], ref l_U650._fU0, ref l_U650._fU4, ref l_U650._fU8 );
                    if (l_U650._fU8 < 36.30000000)
                    {
                        SWITCH_PED_TO_RAGDOLL( l_U548[3], 0, 0, 1, 1, 1, 0 );
                        SET_CHAR_HEALTH( l_U548[3], 0 );
                        REMOVE_BLIP( l_U560[3] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1500397869 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548[3] );
                        SETTIMERA( 0 );
                        l_U614 = 1;
                    }
                }
            }
            if (NOT l_U581)
            {
                if (l_U580)
                {
                    if (TIMERA() > 2000)
                    {
                        if (IS_CHAR_FATALLY_INJURED( l_U548[3] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U547 )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 1 );
                                PRINT_HELP( "ROM6_25" );
                                sub_21301( "R6_BACK", ref l_U541, 6, 1 );
                                if (NOT (DOES_BLIP_EXIST( l_U558 )))
                                {
                                    ADD_BLIP_FOR_COORD( 1482.95600000, 50.51060000, 24.42910000, ref l_U558 );
                                    SET_ROUTE( l_U558, 1 );
                                }
                                PRINTNL();
                                PRINTSTRING( "GO!" );
                                PRINTNL();
                                OPEN_SEQUENCE_TASK( ref l_U570 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1306.10900000, 72.30070000, 34.12180000, 4, 10000, 2.00000000 );
                                TASK_LOOK_AT_CHAR( 0, sub_2844(), 3000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U570 );
                                TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                                CLEAR_SEQUENCE_TASK( l_U570 );
                                SET_CREATE_RANDOM_COPS( 1 );
                                SETTIMERA( 0 );
                                l_U581 = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT l_U602[0])
            {
                if (NOT (sub_17766( l_U541 )))
                {
                    PRINT_NOW( "ROM6_02", 7500, 1 );
                    SETTIMERA( 0 );
                    l_U602[0] = 1;
                }
            }
            GET_CHAR_COORDINATES( sub_2844(), ref l_U666._fU0, ref l_U666._fU4, ref l_U666._fU8 );
            if (l_U666._fU8 < 36.82940000)
            {
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U554 ))
                    {
                        CLEAR_CHAR_TASKS( l_U547 );
                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U554, 0 ))
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U547, l_U554, -1, 0 );
                        }
                        if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                        {
                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                        }
                    }
                    else
                    {
                        TASK_GO_TO_CHAR( l_U547, sub_2844(), 5000, 1.00000000 );
                        if (NOT (IS_GROUP_MEMBER( l_U547, sub_17964() )))
                        {
                            SET_GROUP_MEMBER( sub_17964(), l_U547 );
                        }
                    }
                }
                l_U617 = 0;
                SET_WANTED_MULTIPLIER( 1.00000000 );
                ENABLE_POLICE_SCANNER();
                REQUEST_MODEL( -881358690 );
                l_U592 = 1;
                if (NOT (IS_CHAR_INJURED( l_U547 )))
                {
                    TASK_SWAP_WEAPON( l_U547, 0 );
                }
                sub_47633( 1293.39800000, 111.84410000, 36.10740000, 1 );
                l_U673 = 11;
            }
            break;
            case 11:
            if (NOT l_U633)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1314, 71.00000000, 42, 1, 0.00000000 );
                l_U633 = 1;
            }
            if (IS_GROUP_MEMBER( l_U547, sub_17964() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2926(), 0 )))
                {
                    if (NOT l_U605)
                    {
                        if (HAS_MODEL_LOADED( -881358690 ))
                        {
                            l_U636 = 0;
                            CREATE_CHAR( 26, -881358690, 1476.69600000, 56.39520000, 23.97720000, ref l_U553, 1 );
                            SET_CHAR_HEADING( l_U553, 281.53450000 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U553, 1 );
                            l_U605 = 1;
                        }
                    }
                    if (NOT l_U602[0])
                    {
                        if (NOT (sub_17766( l_U541 )))
                        {
                            PRINT_NOW( "ROM6_02", 7500, 1 );
                            SETTIMERA( 0 );
                            l_U602[0] = 1;
                        }
                    }
                    if (((NOT l_U602[1]) AND (l_U605)) AND (l_U602[0]))
                    {
                        if (((NOT (sub_17766( l_U541 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (TIMERA() >= 7500))
                        {
                            if (g_U64763 == 0)
                            {
                                sub_21301( "R6_BANT2V1", ref l_U541, 6, 1 );
                                g_U64763++;
                            }
                            else if (g_U64763 == 1)
                            {
                                sub_21301( "R6_BANT2V2", ref l_U541, 6, 1 );
                                g_U64763++;
                            }
                            else if (g_U64763 > 1)
                            {
                                l_U626 = 1;
                                SAY_AMBIENT_SPEECH( l_U547, "Listen_to_radio", 1, 0, 0 );
                            };;;
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547, 0 );
                            l_U602[1] = 1;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U547 )))
                    {
                        if ((LOCATE_CHAR_IN_CAR_3D( sub_2844(), 1482.95600000, 50.51060000, 26.22600000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (LOCATE_CHAR_IN_CAR_3D( l_U547, 1482.95600000, 50.51060000, 24.42910000, 4.00000000, 4.00000000, 4.00000000, 0 )))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U555 );
                            if (IS_VEH_DRIVEABLE( l_U555 ))
                            {
                                if (sub_43436( 1, 1 ))
                                {
                                    sub_32905();
                                    CLEAR_AREA_OF_CARS( 1478.66000000, 54.12360000, 23.94550000, 5.00000000 );
                                    GET_CAR_CHAR_IS_USING( sub_2844(), ref l_U554 );
                                    sub_2978( 1 );
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    REMOVE_BLIP( l_U558 );
                                    SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 0, 1, 1 );
                                    CLEAR_PRINTS();
                                    sub_21301( "R6_END", ref l_U541, 6, 1 );
                                    SETTIMERA( 0 );
                                    l_U592 = 0;
                                    l_U591 = 1;
                                    l_U575 = 0;
                                    SWITCH_ROADS_OFF( 1482.95600000 - 40, 50.51060000 - 40, 26.22600000 - 40, 1482.95600000 + 40, 50.51060000 + 40, 26.22600000 + 40 );
                                    SWITCH_MAD_DRIVERS( 0 );
                                    ALLOW_EMERGENCY_SERVICES( 0 );
                                    l_U673 = 12;
                                }
                            }
                        }
                        else if ((LOCATE_CHAR_ON_FOOT_3D( sub_2844(), 1482.95600000, 50.51060000, 24.42910000, 4.00000000, 4.00000000, 4.00000000, 0 )) AND (LOCATE_CHAR_ON_FOOT_3D( l_U547, 1482.95600000, 50.51060000, 24.42910000, 4.00000000, 4.00000000, 4.00000000, 0 )))
                        {
                            if ((sub_43436( 1, 1 )) AND (NOT (IS_CHAR_ON_FIRE( l_U547 ))))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2844() );
                                FREEZE_CHAR_POSITION( sub_2844(), 1 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 0, 1, 1 );
                                CLEAR_AREA_OF_CARS( 1478.66000000, 54.12360000, 23.94550000, 5.00000000 );
                                sub_2978( 1 );
                                CLEAR_PRINTS();
                                sub_21301( "R6_END", ref l_U541, 6, 1 );
                                SETTIMERA( 0 );
                                REMOVE_BLIP( l_U558 );
                                SETTIMERA( 0 );
                                l_U591 = 0;
                                l_U575 = 0;
                                l_U592 = 0;
                                SWITCH_ROADS_OFF( 1482.95600000 - 40, 50.51060000 - 40, 26.22600000 - 40, 1482.95600000 + 40, 50.51060000 + 40, 26.22600000 + 40 );
                                SWITCH_MAD_DRIVERS( 0 );
                                ALLOW_EMERGENCY_SERVICES( 0 );
                                l_U673 = 12;
                            }
                        }
                    }
                }
            }
            break;
            case 12:
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (TIMERA() > 0)
                {
                    if (IS_GROUP_MEMBER( l_U547, sub_17964() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U547 );
                    }
                    if (l_U591)
                    {
                        if (IS_VEH_DRIVEABLE( l_U554 ))
                        {
                            SET_CAR_HEADING( l_U554, 170.58540000 );
                            SET_CAR_COORDINATES( l_U554, 1482.95200000, 53.07580000, 23.83510000 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            DISPLAY_RADAR( 0 );
                            DISPLAY_HUD( 0 );
                            BEGIN_CAM_COMMANDS( ref l_U645 );
                            l_U597 = 1;
                            CREATE_CAM( 14, ref l_U669 );
                            CREATE_CAM( 14, ref l_U670 );
                            CREATE_CAM( 3, ref l_U671 );
                            SET_CAM_POS( l_U669, 1483.95700000, 42.55004000, 25.75653000 );
                            SET_CAM_ROT( l_U669, 0.11059400, 0.00000000, 7.16610700 );
                            SET_CAM_NEAR_DOF( l_U669, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U669, 26.00000000 );
                            SET_CAM_FOV( l_U669, 50.99998000 );
                            SET_CAM_POS( l_U670, 1483.87300000, 43.22474000, 25.75783000 );
                            SET_CAM_ROT( l_U670, 0.11059400, 0.00000000, 7.16610700 );
                            SET_CAM_NEAR_DOF( l_U670, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U670, 26.00000000 );
                            SET_CAM_FOV( l_U670, 50.99998000 );
                            SET_CAM_ACTIVE( l_U669, 1 );
                            SET_CAM_PROPAGATE( l_U669, 1 );
                            SET_CAM_ACTIVE( l_U670, 1 );
                            SET_CAM_PROPAGATE( l_U670, 1 );
                            SET_CAM_ACTIVE( l_U671, 1 );
                            SET_CAM_PROPAGATE( l_U671, 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U671, l_U669, l_U670, 6000, 0 );
                            CLEAR_CHAR_TASKS( l_U547 );
                            if (IS_CHAR_INJURED( l_U553 ))
                            {
                                DELETE_CHAR( ref l_U553 );
                                CREATE_CHAR( 26, -881358690, 1476.69600000, 56.39520000, 23.97720000, ref l_U553, 1 );
                                SET_CHAR_HEADING( l_U553, 281.53450000 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U553, 1 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U553 )))
                            {
                                if (IS_CAR_MODEL( l_U554, -1932515764 ))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U570 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2844() );
                                    TASK_PLAY_ANIM( 0, "wave_in_car", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    TASK_STAND_STILL( 0, 200 );
                                    TASK_LOOK_AT_CHAR( 0, l_U553, 5000, 0 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1475.44400000, 54.52030000, 24.16810000, 2, -1, 0 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, 1469.76200000, 55.13100000, 24.19320000, 2, 5000 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, 1469.70400000, 59.34480000, 24.19320000, 2, 5000 );
                                    CLOSE_SEQUENCE_TASK( l_U570 );
                                    TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                                    CLEAR_SEQUENCE_TASK( l_U570 );
                                }
                                else
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U570 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2844() );
                                    TASK_PLAY_ANIM( 0, "partial_bye_r", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                                    TASK_STAND_STILL( 0, 200 );
                                    TASK_LOOK_AT_CHAR( 0, l_U553, 5000, 0 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1475.44400000, 54.52030000, 24.16810000, 2, -1, 0 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, 1469.76200000, 55.13100000, 24.19320000, 2, 5000 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, 1469.70400000, 59.34480000, 24.19320000, 2, 5000 );
                                    CLOSE_SEQUENCE_TASK( l_U570 );
                                    TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                                    CLEAR_SEQUENCE_TASK( l_U570 );
                                }
                            }
                            CLEAR_AREA_OF_CARS( 1482.95200000, 53.07580000, 23.83510000, 8.00000000 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        }
                    }
                    else if (IS_CHAR_INJURED( l_U553 ))
                    {
                        DELETE_CHAR( ref l_U553 );
                        CREATE_CHAR( 26, -881358690, 1476.69600000, 56.39520000, 23.97720000, ref l_U553, 1 );
                        SET_CHAR_HEADING( l_U553, 281.53450000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U553, 1 );
                    }
                    SET_WIDESCREEN_BORDERS( 1 );
                    DISPLAY_RADAR( 0 );
                    DISPLAY_HUD( 0 );
                    BEGIN_CAM_COMMANDS( ref l_U645 );
                    l_U597 = 1;
                    CREATE_CAM( 14, ref l_U669 );
                    CREATE_CAM( 14, ref l_U670 );
                    CREATE_CAM( 3, ref l_U671 );
                    SET_CAM_POS( l_U669, 1490.73600000, 47.61646000, 29.82118000 );
                    SET_CAM_ROT( l_U669, -26.58922000, 0.00000100, 47.11024000 );
                    SET_CAM_FOV( l_U669, 62.09996000 );
                    SET_CAM_NEAR_DOF( l_U669, 8.00000000 );
                    SET_CAM_FAR_DOF( l_U669, 25.00000000 );
                    SET_CAM_POS( l_U670, 1490.73600000, 47.61646000, 29.82118000 );
                    SET_CAM_ROT( l_U670, -26.58922000, 0.00000100, 47.11024000 );
                    SET_CAM_FOV( l_U670, 43.20000000 );
                    SET_CAM_NEAR_DOF( l_U670, 8.00000000 );
                    SET_CAM_FAR_DOF( l_U670, 25.00000000 );
                    SET_CAM_ACTIVE( l_U669, 1 );
                    SET_CAM_PROPAGATE( l_U669, 1 );
                    SET_CAM_ACTIVE( l_U670, 1 );
                    SET_CAM_PROPAGATE( l_U670, 1 );
                    SET_CAM_ACTIVE( l_U671, 1 );
                    SET_CAM_PROPAGATE( l_U671, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U671, l_U669, l_U670, 6000, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U547 );
                    SET_CHAR_COORDINATES( l_U547, 1482.96100000, 55.26680000, 23.81110000 );
                    SET_CHAR_HEADING( l_U547, 173.33480000 );
                    SET_CHAR_COORDINATES( sub_2844(), 1483.11400000, 53.79390000, 23.81990000 );
                    SET_CHAR_HEADING( sub_2844(), 353.33480000 );
                    TASK_LOOK_AT_CHAR( sub_2844(), l_U547, 8000, 0 );
                    if ((NOT (IS_CHAR_INJURED( l_U547 ))) AND (NOT (IS_CHAR_INJURED( l_U553 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U570 );
                        TASK_LOOK_AT_CHAR( 0, sub_2844(), 3000, 0 );
                        TASK_STAND_STILL( 0, 3000 );
                        TASK_PLAY_ANIM( 0, "partial_bye_r", "missroman6", 1000.00000000, 0, 0, 0, 0, 0 );
                        TASK_LOOK_AT_CHAR( 0, l_U553, 5000, 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1475.44400000, 54.52030000, 24.16810000, 2, -1, 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1469.76200000, 55.13100000, 24.19320000, 2, 5000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1469.70400000, 59.34480000, 24.19320000, 2, 5000 );
                        CLOSE_SEQUENCE_TASK( l_U570 );
                        TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                        CLEAR_SEQUENCE_TASK( l_U570 );
                    }
                    CLEAR_AREA_OF_CARS( 1482.95200000, 53.07580000, 23.83510000, 8.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );;
                    if (NOT (IS_CHAR_INJURED( l_U553 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U570 );
                        TASK_LOOK_AT_CHAR( 0, l_U547, 6000, 0 );
                        TASK_STAND_STILL( 0, 6500 );
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_a", "missroman6", 1000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U570 );
                        TASK_PERFORM_SEQUENCE( l_U553, l_U570 );
                        CLEAR_SEQUENCE_TASK( l_U570 );
                    }
                    SETTIMERA( 0 );
                    l_U673 = 13;
                }
            }
            break;
            case 13:
            if (TIMERA() >= 1000)
            {
                l_U673 = 14;
            }
            break;
            case 14:
            sub_51278();
            if (NOT (IS_CHAR_INJURED( l_U547 )))
            {
                if (NOT l_U610)
                {
                    if ((NOT (sub_17766( l_U541 ))) AND (TIMERA() >= 7000))
                    {
                        sub_21301( "R6_GREET", ref l_U541, 6, 1 );
                        l_U610 = 1;
                    }
                }
                else if (NOT (sub_17766( l_U541 )))
                {
                    if (IS_CHAR_INJURED( l_U553 ))
                    {
                        DELETE_CHAR( ref l_U553 );
                        CREATE_CHAR( 26, -881358690, 1476.69600000, 56.39520000, 23.97720000, ref l_U553, 1 );
                        SET_CHAR_HEADING( l_U553, 281.53450000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U553, 1 );
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    FREEZE_CHAR_POSITION( sub_2844(), 0 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 1, 0, 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    END_CAM_COMMANDS( ref l_U645 );
                    l_U597 = 0;
                    DELETE_CHAR( ref l_U547 );
                    DESTROY_ALL_CAMS();
                    if (NOT (IS_CHAR_INJURED( l_U553 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U570 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1475.44400000, 54.52030000, 24.16810000, 2, -1, 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1469.76200000, 55.13100000, 24.19320000, 2, 5000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1469.70400000, 59.34480000, 24.19320000, 2, 5000 );
                        CLOSE_SEQUENCE_TASK( l_U570 );
                        TASK_PERFORM_SEQUENCE( l_U553, l_U570 );
                        CLEAR_SEQUENCE_TASK( l_U570 );
                        SET_CHAR_KEEP_TASK( l_U553, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U553 );
                        SETTIMERA( 0 );
                        l_U673 = 15;
                    }
                }
            }
            break;
            case 15:
            sub_52219( 3 );
            sub_52353();
            break;
        }
    }
    return;
}

void sub_551(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_570();
    return;
}

void sub_570()
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

void sub_709()
{
    sub_718();
    return;
}

void sub_718()
{
    int iVar2;

    iVar2 = 0;
    sub_732( iVar2 );
    sub_1908( iVar2 );
    return;
}

void sub_732(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_776();
        sub_937();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1045();
            sub_1084();
        }
    }
    sub_1160();
    sub_1261();
    uVar5 = sub_1374( uParam0 );
    sub_1815( uVar5, 0 );
    return;
}

void sub_776()
{
    sub_790( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_890();
    }
    return;
}

void sub_790(int iParam0)
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

void sub_890()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_937()
{
    sub_946();
    return;
}

void sub_946()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1045()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1084()
{
    sub_1093();
    return;
}

void sub_1093()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1160()
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

void sub_1261()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1283();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1283()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1374(unknown uParam0)
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
    sub_1773( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1773(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1815(int iParam0, boolean bParam1)
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

void sub_1908(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1917();
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
        sub_2692();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1917()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1955( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1955( 1, g_U569[I] )) != 0)
            {
                sub_2241( I );
            }
        }
    }
    if (NOT sub_2407())
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

int sub_1955(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2241(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2326( g_U569 - 1 );
    return;
}

void sub_2326(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2407()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1955( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2692()
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

void sub_2819()
{
    SWITCH_MAD_DRIVERS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    if (NOT (IS_CHAR_DEAD( sub_2844() )))
    {
        FREEZE_CHAR_POSITION( sub_2844(), 0 );
    }
    SET_CREATE_RANDOM_COPS( 1 );
    ENABLE_POLICE_SCANNER();
    SET_ALL_RANDOM_PEDS_FLEE( sub_2926(), 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_2978( 0 );
    sub_3118();
    SWITCH_ROADS_ON( 1482.95600000 - 40, 50.51060000 - 40, 26.22600000 - 40, 1482.95600000 + 40, 50.51060000 + 40, 26.22600000 + 40 );
    for ( l_U646 = 0; l_U646 <= 3; l_U646++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U548[l_U646] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548[l_U646] );
        }
    }
    if (IS_VEH_DRIVEABLE( l_U554 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_2844() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_2844() )))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U554 );
            }
        }
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (l_U597)
    {
        END_CAM_COMMANDS( ref l_U645 );
    }
    l_U597 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2844()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2926()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2978(unknown uParam0)
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

void sub_3118()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_3462()
{
    switch (l_U644)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "ROM6_18", 7500, 1 );
        sub_3567( 0, "R6_CFAIL", "R6AUD", 0 );
        break;
    }
    sub_4158();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2926(), 150 );
        SAY_AMBIENT_SPEECH( sub_2844(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_2819();
    return;
}

void sub_3567(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_3611( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_3611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_4158()
{
    sub_4167();
    return;
}

void sub_4167()
{
    int iVar2;

    iVar2 = 0;
    sub_4181( iVar2 );
    sub_1908( iVar2 );
    return;
}

void sub_4181(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2926(), 150 );
    CLEAR_HELP();
    sub_732( uParam0 );
    return;
}

void sub_4390(unknown uParam0)
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
                l_U488 += fVar3 * 1000.00000000;
                l_U489 += fVar3 * 1000.00000000;
                l_U492 += fVar3 * 1000.00000000;
                sub_4514( uParam0 );
                if (l_U484)
                {
                    if (HAVE_ANIMS_LOADED( l_U509 ))
                    {
                        if (((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U511 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U512 ))))
                        {
                            sub_14486( uParam0, 0 );
                            l_U484 = 0;
                        }
                    }
                    else
                    {
                        sub_14486( uParam0, 0 );
                        l_U484 = 0;
                    }
                }
                switch (l_U497)
                {
                    case 0:
                    if (NOT (sub_14595( uParam0 )))
                    {
                        l_U489 = 0.00000000;
                    }
                    if (l_U481)
                    {
                        sub_15782( uParam0 );
                    }
                    if (l_U489 > 10000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U509 )))
                        {
                            REQUEST_ANIMS( l_U509 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U509 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_14486( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U510, l_U509, 8.00000000, -1, 3328 );
                                l_U484 = 1;
                                l_U488 = 0.00000000;
                                l_U497 = 1;
                            }
                            else
                            {
                                sub_15782( uParam0 );
                                l_U488 = 0.00000000;
                                l_U497 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U509 ))
                    {
                        REMOVE_ANIMS( l_U509 );
                    }
                    if (HAS_MODEL_LOADED( -785338897 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -785338897 );
                    }
                    break;
                    case 1:
                    if (sub_14606( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U509 )))
                        {
                            REQUEST_ANIMS( l_U509 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (DOES_OBJECT_EXIST( l_U506 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U509 ))
                            {
                                if ((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_16563( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))))
                                {
                                    if (l_U488 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_14486( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U511, l_U509, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U512, l_U509, 8.00000000, -1, 3328 );
                                        }
                                        l_U484 = 1;
                                        l_U488 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U482)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U509 ))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 ))
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U509, l_U510, ref fVar3 );
                                            if (fVar3 > l_U491)
                                            {
                                                l_U498 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U506, l_U519, l_U522, 1065353216 );
                                                l_U482 = 1;
                                            }
                                        }
                                        else
                                        {
                                            l_U498 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U506, l_U519, l_U522, 1065353216 );
                                            l_U482 = 1;
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
                                                if (NOT (sub_17069( uParam0 )))
                                                {
                                                    l_U498 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U506, l_U519, l_U522, 1065353216 );
                                                    l_U482 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_4753( uParam0 )) || (sub_17069( uParam0 )))
                            {
                                sub_4626( ref l_U498 );
                                l_U482 = 0;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U509 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U509, l_U510, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U506 )))
                                    {
                                        if (fVar3 > l_U490)
                                        {
                                            sub_15782( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_15782( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_15782( uParam0 );
                        }
                        if (sub_16563( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U497 = 0;
                        l_U489 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_14642( uParam0, 0 );
                if (l_U486)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_14642( uParam0, 1 );
            if (l_U486)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_14642( uParam0, 0 );
        if (l_U486)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U506 ))
        {
            if (HAVE_ANIMS_LOADED( l_U509 ))
            {
                if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U511 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U512 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_4514(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (IS_PLAYER_PLAYING( sub_2926() )))
    {
        switch (l_U499)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_4626( ref l_U501[I] );
            }
            if (DOES_OBJECT_EXIST( l_U507 ))
            {
                DELETE_OBJECT( ref l_U507 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_4753( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U540 );
                    if (DOES_VEHICLE_EXIST( l_U540 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U540 )))
                        {
                            if (NOT (sub_4935( l_U540 )))
                            {
                                l_U499 = 1;
                                l_U492 = 0.00000000;
                            }
                            else
                            {
                                l_U492 = 0.00000000;
                            }
                        }
                        else
                        {
                            l_U492 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U492 = 0.00000000;
                    }
                }
                else
                {
                    l_U492 = 0.00000000;
                }
            }
            else
            {
                l_U492 = 0.00000000;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U506 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U540 );
                    if (DOES_VEHICLE_EXIST( l_U540 ))
                    {
                        if (sub_5121( l_U540 ))
                        {
                            l_U499 = 2;
                            l_U492 = 0.00000000;
                            l_U496 = 0.00000000;
                        }
                        else
                        {
                            l_U499 = 4;
                            l_U492 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U499 = 0;
                        l_U492 = 0.00000000;
                    }
                }
                else
                {
                    l_U499 = 0;
                    l_U492 = 0.00000000;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U506 ))
            {
                if (DOES_VEHICLE_EXIST( l_U540 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U540 )))
                    {
                        if (NOT (sub_5121( l_U540 )))
                        {
                            l_U499 = 3;
                            l_U492 = 0.00000000;
                            if (l_U496 < 0.10000000)
                            {
                                l_U496 = 0.10000000;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( uParam0, l_U540 )))
                        {
                            l_U499 = 0;
                            l_U492 = 0.00000000;
                            if (DOES_OBJECT_EXIST( l_U507 ))
                            {
                                DELETE_OBJECT( ref l_U507 );
                            }
                        }
                        if ((NOT (DOES_OBJECT_EXIST( l_U507 ))) AND (l_U487))
                        {
                            GET_CAR_COORDINATES( l_U540, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -735018886, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U507, 1 );
                            SET_OBJECT_COLLISION( l_U507, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U507, l_U540, 0, l_U534, 0.00000000, 0.00000000, 0.00000000 );
                        }
                        else
                        {
                            l_U496 = l_U492 / l_U493;
                            if (l_U496 > 1.00000000)
                            {
                                l_U496 = 1.00000000;
                            }
                            l_U500 = ROUND( 255.00000000 * l_U496 );
                            if (l_U487)
                            {
                                SET_OBJECT_ALPHA( l_U507, l_U500 );
                            }
                        }
                    }
                    else
                    {
                        l_U499 = 0;
                        l_U492 = 0.00000000;
                    }
                }
                else
                {
                    l_U499 = 0;
                    l_U492 = 0.00000000;
                }
            }
            else
            {
                l_U499 = 0;
                l_U492 = 0.00000000;
            }
            break;
            case 3:
            if (DOES_VEHICLE_EXIST( l_U540 ))
            {
                if (NOT (IS_CAR_DEAD( l_U540 )))
                {
                    if (NOT (sub_4638( l_U501[0] )))
                    {
                        if (sub_5176( l_U540, 0 ))
                        {
                            if (sub_6180( l_U540, 0, ref uVar4 ))
                            {
                                l_U501[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_5176( l_U540, 0 )))
                    {
                        sub_4626( ref l_U501[0] );
                    }
                    if (NOT (sub_4638( l_U501[1] )))
                    {
                        if (sub_5176( l_U540, 1 ))
                        {
                            if (sub_6180( l_U540, 1, ref uVar4 ))
                            {
                                l_U501[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_5176( l_U540, 1 )))
                    {
                        sub_4626( ref l_U501[1] );
                    }
                    if (NOT (sub_4638( l_U501[2] )))
                    {
                        if (sub_5176( l_U540, 2 ))
                        {
                            if (sub_6180( l_U540, 2, ref uVar4 ))
                            {
                                l_U501[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_5176( l_U540, 2 )))
                    {
                        sub_4626( ref l_U501[2] );
                    }
                    if (NOT (sub_4638( l_U501[3] )))
                    {
                        if (sub_5176( l_U540, 3 ))
                        {
                            if (sub_6180( l_U540, 3, ref uVar4 ))
                            {
                                l_U501[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_5176( l_U540, 3 )))
                    {
                        sub_4626( ref l_U501[3] );
                    }
                    l_U495 = l_U492 / (l_U494 * l_U496);
                    if (l_U495 > 1.00000000)
                    {
                        l_U495 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_4638( l_U501[I] ))
                        {
                            EVOLVE_PTFX( l_U501[I], "fade", l_U495 );
                        }
                    }
                    if (l_U487)
                    {
                        if (DOES_OBJECT_EXIST( l_U507 ))
                        {
                            fVar7 = 1.00000000 - l_U495;
                            l_U500 = ROUND( 255.00000000 * fVar7 );
                            SET_OBJECT_ALPHA( l_U507, l_U500 );
                        }
                    }
                    if (l_U492 > (l_U494 * l_U496))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            sub_4626( ref l_U501[I] );
                        }
                        l_U499 = 0;
                        l_U492 = 0.00000000;
                    }
                    if ((((NOT (sub_4638( l_U501[0] ))) AND (NOT (sub_4638( l_U501[1] )))) AND (NOT (sub_4638( l_U501[2] )))) AND (NOT (sub_4638( l_U501[3] ))))
                    {
                        l_U499 = 0;
                        l_U492 = 0.00000000;
                    }
                }
                else
                {
                    l_U499 = 0;
                    l_U492 = 0.00000000;
                }
            }
            else
            {
                l_U499 = 0;
                l_U492 = 0.00000000;
            }
            break;
            case 4:
            if (DOES_VEHICLE_EXIST( l_U540 ))
            {
                if (NOT (IS_CAR_DEAD( l_U540 )))
                {
                    if (l_U492 > 1000.00000000)
                    {
                        if (NOT (sub_4638( l_U501[0] )))
                        {
                            if (sub_5176( l_U540, 0 ))
                            {
                                if (sub_6180( l_U540, 0, ref uVar4 ))
                                {
                                    l_U501[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_5176( l_U540, 0 )))
                        {
                            sub_4626( ref l_U501[0] );
                        }
                        if (NOT (sub_4638( l_U501[1] )))
                        {
                            if (sub_5176( l_U540, 1 ))
                            {
                                if (sub_6180( l_U540, 1, ref uVar4 ))
                                {
                                    l_U501[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_5176( l_U540, 1 )))
                        {
                            sub_4626( ref l_U501[1] );
                        }
                        if (NOT (sub_4638( l_U501[2] )))
                        {
                            if (sub_5176( l_U540, 2 ))
                            {
                                if (sub_6180( l_U540, 2, ref uVar4 ))
                                {
                                    l_U501[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_5176( l_U540, 2 )))
                        {
                            sub_4626( ref l_U501[2] );
                        }
                        if (NOT (sub_4638( l_U501[3] )))
                        {
                            if (sub_5176( l_U540, 3 ))
                            {
                                if (sub_6180( l_U540, 3, ref uVar4 ))
                                {
                                    l_U501[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_5176( l_U540, 3 )))
                        {
                            sub_4626( ref l_U501[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_4638( l_U501[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U495 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_4638( l_U501[I] ))
                            {
                                EVOLVE_PTFX( l_U501[I], "fade", l_U495 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_4626( ref l_U501[I] );
                            }
                            l_U499 = 0;
                            l_U492 = 0.00000000;
                        }
                        else if ((((NOT (sub_4638( l_U501[0] ))) AND (NOT (sub_4638( l_U501[1] )))) AND (NOT (sub_4638( l_U501[2] )))) AND (NOT (sub_4638( l_U501[3] ))))
                        {
                            l_U499 = 1;
                        }
                    }
                }
                else
                {
                    l_U499 = 0;
                    l_U492 = 0.00000000;
                }
            }
            else
            {
                l_U499 = 0;
                l_U492 = 0.00000000;
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
                if (l_U485)
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_6180( uVar3, I, ref uVar4 ))
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

void sub_4626(unknown uParam0)
{
    if (sub_4638( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_4638(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_4753(unknown uParam0)
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

int sub_4935(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_5121(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((((NOT (sub_5176( uParam0, 0 ))) AND (NOT (sub_5176( uParam0, 1 )))) AND (NOT (sub_5176( uParam0, 2 )))) AND (NOT (sub_5176( uParam0, 3 ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_5176(unknown uParam0, unknown uParam1)
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

int sub_6180(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_6228( uParam0, ref l_U525, ref l_U528 );
            switch (uParam1)
            {
                case 0:
                (iParam2^) = {l_U525._fU0, l_U525._fU4, l_U525._fU8};
                iParam2->_fU0 += l_U537._fU0;
                iParam2->_fU4 += l_U537._fU4;
                iParam2->_fU8 += l_U537._fU8;
                break;
                case 1:
                (iParam2^) = {l_U525._fU0 * -1.00000000, l_U525._fU4, l_U525._fU8};
                iParam2->_fU0 += l_U537._fU0 * -1.00000000;
                iParam2->_fU4 += l_U537._fU4;
                iParam2->_fU8 += l_U537._fU8;
                break;
                case 2:
                (iParam2^) = {l_U528._fU0, l_U528._fU4, l_U528._fU8};
                iParam2->_fU0 += l_U537._fU0;
                iParam2->_fU4 += l_U537._fU4;
                iParam2->_fU8 += l_U537._fU8;
                break;
                case 3:
                (iParam2^) = {l_U528._fU0 * -1.00000000, l_U528._fU4, l_U528._fU8};
                iParam2->_fU0 += l_U537._fU0 * -1.00000000;
                iParam2->_fU4 += l_U537._fU4;
                iParam2->_fU8 += l_U537._fU8;
                break;
            }
            return 1;
        }
    }
    return 0;
}

void sub_6228(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_14486(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_14595(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_14606( uParam0 )))
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
        l_U489 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_2926() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2844(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_14606(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U481)
    {
        return 1;
    }
    if (l_U483)
    {
        sub_14642( uParam0, 1 );
        l_U483 = 0;
        if (l_U486)
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
                sub_14642( uParam0, 1 );
                if (l_U486)
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
                    sub_14642( uParam0, 0 );
                    if (l_U486)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_15222( uParam0 ))
            {
                sub_14642( uParam0, 0 );
                if (l_U486)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_14642( uParam0, 1 );
        if (l_U486)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_14642(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U506 ))
        {
            DELETE_OBJECT( ref l_U506 );
            l_U506 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U506 ))
    {
        if (IS_OBJECT_ATTACHED( l_U506 ))
        {
            DETACH_OBJECT( l_U506, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U506 );
        l_U506 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U509 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U511 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U512 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U507 ))
    {
        DELETE_OBJECT( ref l_U507 );
    }
    l_U489 = 0.00000000;
    if (l_U482)
    {
        sub_4626( ref l_U498 );
        l_U482 = 0;
    }
    return;
}

int sub_15222(int iParam0)
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
                if (sub_15286( uVar3 ))
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

int sub_15286(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_15782(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U506 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -785338897, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U506, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U506, iVar6 );
            }
        }
        if (l_U481)
        {
            if (IS_OBJECT_ATTACHED( l_U506 ))
            {
                DETACH_OBJECT( l_U506, 1 );
            }
        }
        if (sub_15947( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U506 ))
            {
                DETACH_OBJECT( l_U506, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U506 )))
        {
            ATTACH_OBJECT_TO_PED( l_U506, uParam0, 1232, l_U513, l_U516, 0 );
            l_U508 = uParam0;
        }
        if (NOT (l_U497 == 1))
        {
            l_U497 = 1;
            l_U488 = 18000.00000000;
        }
    }
    return;
}

int sub_15947(int iParam0)
{
    if (iParam0 == l_U508)
    {
        return 1;
    }
    return 0;
}

int sub_16563(unknown uParam0)
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

int sub_17069(unknown uParam0)
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

int sub_17766(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_17878( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_17878( "\n speech is not playing" );
    }
    return 0;
}

void sub_17878(unknown uParam0)
{
    return;
}

void sub_17964()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_18526(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_17878( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_17878( "\n CONVERSATION PAUSED AT LINE " );
            sub_18682( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_17878( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_17878( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_17878( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_18682(unknown uParam0)
{
    return;
}

void sub_20044(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20067( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_20067(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_20131( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_20131(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20153( iParam1 )))
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
    sub_20833( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_20153(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_17878( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_17878( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_17878( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_20833(int iParam0, int iParam1)
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

void sub_21301(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21324( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_21324(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20131( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21604(unknown uParam0)
{
    int iVar3;
    int iVar4;
    vector vVar5;
    float fVar8;

    if (g_U9943[1]._fU0)
    {
        return sub_21630( uParam0 );
    }
    iVar3 = -1932515764;
    iVar4 = -464206860;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar5 = {808.86000000, -265.03120000, 14.53780000};
    fVar8 = 343.59120000;
    CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar5.x, vVar5.y, vVar5.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
    SET_CAR_HEADING( (uParam0^), fVar8 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    return 1;
}

int sub_21630(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -1932515764;
    if (g_U9943[2]._fU0)
    {
        iVar3 = 2006918058;
    }
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {589.28430000, 1430.80900000, 10.00540000};
    fVar7 = 1.95590000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    if (iVar3 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( (uParam0^), 2 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 0.00000000 );
    }
    else
    {
        CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
        SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    }
    return 1;
}

void sub_22299(unknown uParam0)
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

int sub_22767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_22778( uParam0 ))
    {
        sub_23498( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_25154( uParam0 );
    return 0;
}

void sub_22778(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_22789( uParam0 ) );
}

int sub_22789(unknown uParam0)
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
    sub_1773( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_23498(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_22789( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_23548( uParam0, (uParam1^) );
    return;
}

void sub_23548(unknown uParam0, unknown uParam1)
{
    sub_23560( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_23560(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_23654( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_24198( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_23654(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_24198(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_23654( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_23654( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_23654( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_23654( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_23654( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_23654( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_23654( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_23654( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_25154(unknown uParam0)
{
    REQUEST_MODEL( sub_22789( uParam0 ) );
    return;
}

void sub_25319(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_25403( "\n PED NUMBER ", uParam0 );
    sub_25443( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_25403(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_25443(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_25661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_28733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_28760( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_28760(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_20131( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_29497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_29779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_17766( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_32905()
{
    unknown uVar2;
    float fVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_2844() )) || (IS_CHAR_ON_ANY_BIKE( sub_2844() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2844(), ref uVar2 );
        SET_PLAYER_CONTROL( sub_2926(), 0 );
        GET_CAR_SPEED( uVar2, ref fVar3 );
        while (fVar3 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_SPEED( uVar2, ref fVar3 );
            }
        }
        SET_PLAYER_CONTROL( sub_2926(), 1 );
    }
    return;
}

void sub_33592(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_33612( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_33612(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_33654( I );
            sub_33771( uParam5, I );
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

void sub_33654(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_33706( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_33706(unknown uParam0)
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

void sub_33771(int iParam0, unknown uParam1)
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

void sub_36765(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_33654( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_37658()
{
    if ((sub_37667()) AND (IS_SCREEN_FADED_IN()))
    {
        sub_2978( 0 );
        CLEAR_PRINTS();
        if (sub_17766( l_U541 ))
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U547 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U548[0] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U548[0] );
                SET_CHAR_COORDINATES( l_U548[0], 1303.15800000, 63.97090000, 32.69510000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[0], 1303.15800000, 63.97090000, 32.69510000, 3.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U548[0], l_U547 );
                OPEN_SEQUENCE_TASK( ref l_U570 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U547, 1000 );
                TASK_COMBAT( 0, l_U547 );
                CLOSE_SEQUENCE_TASK( l_U570 );
                TASK_PERFORM_SEQUENCE( l_U548[0], l_U570 );
                CLEAR_SEQUENCE_TASK( l_U570 );
                SET_CHAR_RELATIONSHIP( l_U548[0], 5, 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U547, 1 );
                SET_CHAR_RELATIONSHIP( l_U547, 1, 0 );
                SET_CHAR_RELATIONSHIP( l_U547, 5, 4 );
                SET_CHAR_COORDINATES( l_U547, 1303.70500000, 57.31790000, 32.72440000 );
                SET_CHAR_HEADING( l_U547, 31.77740000 );
                OPEN_SEQUENCE_TASK( ref l_U570 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U548[0], 1000 );
                TASK_COMBAT( 0, l_U548[0] );
                CLOSE_SEQUENCE_TASK( l_U570 );
                TASK_PERFORM_SEQUENCE( l_U547, l_U570 );
                CLEAR_SEQUENCE_TASK( l_U570 );
            }
            if (NOT (IS_CHAR_INJURED( l_U548[1] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U548[1] );
                SET_CHAR_COORDINATES( l_U548[1], 1308.10600000, 65.64020000, 32.72420000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[1], 1308.10600000, 65.64020000, 32.72420000, 3.00000000 );
                SET_CHAR_RELATIONSHIP( l_U548[1], 5, 1 );
                OPEN_SEQUENCE_TASK( ref l_U570 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U547, 1000 );
                TASK_COMBAT( 0, l_U547 );
                CLOSE_SEQUENCE_TASK( l_U570 );
                TASK_PERFORM_SEQUENCE( l_U548[1], l_U570 );
                CLEAR_SEQUENCE_TASK( l_U570 );
            }
            if (NOT (IS_CHAR_INJURED( l_U548[2] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U548[2] );
                SET_CHAR_COORDINATES( l_U548[2], 1311.15700000, 65.36650000, 32.89460000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U548[2], 1311.15700000, 65.36650000, 32.89460000, 3.00000000 );
                SET_CHAR_RELATIONSHIP( l_U548[2], 5, 1 );
                OPEN_SEQUENCE_TASK( ref l_U570 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U547, 1000 );
                TASK_COMBAT( 0, l_U547 );
                CLOSE_SEQUENCE_TASK( l_U570 );
                TASK_PERFORM_SEQUENCE( l_U548[2], l_U570 );
                CLEAR_SEQUENCE_TASK( l_U570 );
            }
        }
        l_U598 = 1;
        l_U673 = 8;
        l_U643 = 3;
    }
    return;
}

int sub_37667()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_40499()
{
    if (NOT l_U608)
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_2844(), 7, ref l_U647 );
        if (l_U647 > 0)
        {
            if ((IS_AUTO_AIMING_ON()) || (NOT IS_USING_CONTROLLER()))
            {
                if (NOT l_U640)
                {
                    sub_33592( "ROM6_", 4, 7500 );
                    SETTIMERA( 0 );
                    l_U640 = 1;
                }
            }
            else if (USING_STANDARD_CONTROLS())
            {
                if (# -NULL-0xc238b5( 4 ))
                {
                    PRINT_HELP( "ROM6_31" );
                }
                else
                {
                    PRINT_HELP( "ROM6_7" );
                }
                SETTIMERA( 0 );
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "SIXAXIS6" );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                l_U608 = 1;
            }
            else if (# -NULL-0xc238b5( 4 ))
            {
                PRINT_HELP( "ROM6_32" );
                SETTIMERA( 0 );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "SIXAXIS5" );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                l_U608 = 1;
            };;;
        }
        else
        {
            SETTIMERA( 0 );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "SIXAXIS4" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            l_U608 = 1;
        }
        if (NOT l_U622[0])
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_5" ))
            {
                l_U625 = 1;
                l_U622[0] = 1;
            }
        }
        if (NOT l_U622[1])
        {
            if (l_U625)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_5" )))
                {
                    if (USING_STANDARD_CONTROLS())
                    {
                        if (# -NULL-0xc238b5( 4 ))
                        {
                            PRINT_HELP( "ROM6_31" );
                            SETTIMERA( 0 );
                            l_U622[1] = 1;
                        }
                        else
                        {
                            PRINT_HELP( "ROM6_7" );
                            SETTIMERA( 0 );
                            l_U622[1] = 1;
                        }
                    }
                    else if (# -NULL-0xc238b5( 4 ))
                    {
                        PRINT_HELP( "ROM6_32" );
                    }
                    SETTIMERA( 0 );
                    l_U622[1] = 1;;
                }
            }
        }
        if (USING_STANDARD_CONTROLS())
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_7" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_31" )))
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_7" )) AND (TIMERA() >= 5500))
                {
                    CLEAR_HELP();
                }
                SETTIMERA( 0 );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "SIXAXIS1" );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                l_U608 = 1;
            }
        }
        else if (# -NULL-0xc238b5( 4 ))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROM6_32" ))
            {
                SETTIMERA( 0 );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "SIXAXIS2" );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                l_U608 = 1;
            }
        }
        else
        {
            SETTIMERA( 0 );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "SIXAXIS3" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            l_U608 = 1;
        }
    }
    return;
}

int sub_43436(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2844() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2844(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2844() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2844(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2844()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2844() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2844() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2926() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2926() )))
    {
        return 0;
    }
    return 1;
}

void sub_47633(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_51278()
{
    if (sub_37667())
    {
        sub_2978( 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        SET_WIDESCREEN_BORDERS( 0 );
        FREEZE_CHAR_POSITION( sub_2844(), 0 );
        SET_PLAYER_CONTROL_ADVANCED( sub_2926(), 1, 0, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        END_CAM_COMMANDS( ref l_U645 );
        l_U597 = 0;
        DELETE_CHAR( ref l_U547 );
        DESTROY_ALL_CAMS();
        if (NOT (IS_CHAR_INJURED( l_U553 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U570 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1475.44400000, 54.52030000, 24.16810000, 2, -1, 0 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1469.76200000, 55.13100000, 24.19320000, 2, 5000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1469.70400000, 59.34480000, 24.19320000, 2, 5000 );
            CLOSE_SEQUENCE_TASK( l_U570 );
            TASK_PERFORM_SEQUENCE( l_U553, l_U570 );
            CLEAR_SEQUENCE_TASK( l_U570 );
            SET_CHAR_KEEP_TASK( l_U553, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U553 );
            SETTIMERA( 0 );
        }
        LOAD_SCENE( 1476.69600000, 56.39520000, 23.97720000 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        l_U673 = 15;
    }
    return;
}

void sub_52219(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_52353()
{
    sub_52362();
    sub_63950( 6 );
    UNLOCK_MISSION_NEWS_STORY( 6 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    l_U575 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    CLEAR_WANTED_LEVEL( sub_2926() );
    sub_3567( 0, "R6_CPASS", "R6AUD", 0 );
    sub_2819();
    return;
}

void sub_52362()
{
    sub_52371();
    return;
}

void sub_52371()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_52389();
    sub_52448( iVar2, iVar3, iVar4 );
    return;
}

void sub_52389()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_52448(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_52479( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_52479(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_52575( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_52575( ref cVar9 );
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
            sub_52575( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_52575( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_52575( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_52575( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_53152( iParam0, iVar7 );;;
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
                sub_53549( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_53549( 0, 4 );
            }
        }
    }
    if (NOT (sub_53638( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2926(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2926() );
    }
    sub_1917();
    bVar27 = true;
    uVar28 = sub_53152( iParam0, iVar7 );
    uVar29 = sub_1374( iParam0 );
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
                sub_63014( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_63444();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_63529( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_63586( iParam0 );
                sub_63625( 0 );
                sub_1815( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_63733();
        }
    }
    if (bParam2)
    {
        sub_63444();
        sub_63821();
        sub_63625( 0 );
    }
    if (bParam3)
    {
        sub_63444();
        sub_63861();
        sub_63625( 0 );
        sub_1815( uVar29, 0 );
    }
    sub_1261();
    return;
}

void sub_52575(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_53152(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1773( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_53549(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_53638(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_53846( uParam1 );
        break;
        case 1:
        bVar8 = sub_55924( uParam1 );
        break;
        case 2:
        bVar8 = sub_56150( uParam1 );
        break;
        case 3:
        bVar8 = sub_56300( uParam1 );
        break;
        case 4:
        bVar8 = sub_56578( uParam1 );
        break;
        case 5:
        bVar8 = sub_56881( uParam1 );
        break;
        case 6:
        bVar8 = sub_57080( uParam1 );
        break;
        case 7:
        bVar8 = sub_57306( uParam1 );
        break;
        case 8:
        bVar8 = sub_57541( uParam1 );
        break;
        case 9:
        bVar8 = sub_57916( uParam1 );
        break;
        case 10:
        bVar8 = sub_58163( uParam1 );
        break;
        case 11:
        bVar8 = sub_58302( uParam1 );
        break;
        case 12:
        bVar8 = sub_58601( uParam1 );
        break;
        case 13:
        bVar8 = sub_58829( uParam1 );
        break;
        case 14:
        bVar8 = sub_59116( uParam1 );
        break;
        case 15:
        bVar8 = sub_59398( uParam1 );
        break;
        case 16:
        bVar8 = sub_59680( uParam1 );
        break;
        case 17:
        bVar8 = sub_59881( uParam1 );
        break;
        case 18:
        bVar8 = sub_59954( uParam1 );
        break;
        case 19:
        bVar8 = sub_60168( uParam1 );
        break;
        case 20:
        bVar8 = sub_60421( uParam1 );
        break;
        case 21:
        bVar8 = sub_60668( uParam1 );
        break;
        case 22:
        bVar8 = sub_60869( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_55529( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_53152( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_61192( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_53846(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_54125( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_54125( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_54125( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_54125( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_54125( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_54125( iVar3, 0, 3, 1, 0, 0 );
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
        sub_54125( iVar3, 0, sub_55407(), sub_55673(), 0, 0 );
        break;
        default:
        sub_55832( "Friend 1", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Friend 1", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_54125(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_54136( uParam1 );
    sub_54310( uParam0, 0, uParam2 );
    sub_54310( uParam0, 1, uParam3 );
    sub_54310( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_52389();
    return;
}

void sub_54136(unknown uParam0)
{
    ADD_SCORE( sub_2926(), uParam0 );
    sub_54161( uParam0 );
    return;
}

void sub_54161(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1773( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_54310(unknown uParam0, int iParam1, int iParam2)
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
        sub_54467( uParam0 );
    }
    return;
}

void sub_54467(unknown uParam0)
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

int sub_55407()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_55529( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_55529(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_55673()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_55529( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_55832(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_55924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 2", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 2", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56150(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_55832( "Girl 3", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Girl 3", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56300(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_54125( iVar3, 0, sub_55407(), sub_55673(), 0, 0 );
        break;
        default:
        sub_55832( "Friend 4", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Friend 4", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 5", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 5", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56881(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 7", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 7", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57080(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 7b", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 7b", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57306(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_54125( iVar3, 0, sub_55407(), sub_55673(), 0, 0 );
        break;
        default:
        sub_55832( "Friend 8", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Friend 8", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57541(unknown uParam0)
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
        sub_54125( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_54125( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_54125( iVar3, 0, sub_55407(), sub_55673(), 0, 0 );
        break;
        default:
        sub_55832( "Friend 9", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Friend 9", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57916(unknown uParam0)
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
        sub_54125( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_54125( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_54125( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_55832( "Contact 10", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55832( "Contact 10", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58163(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_55832( "Girl 11", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Girl 11", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58302(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_55832( "Contact 12", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 12", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58601(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 13", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 13", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_54125( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_54125( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_54125( iVar3, 0, sub_55407(), sub_55673(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_55832( "Friend 15", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Friend 15", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59116(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 16", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 16", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59398(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54125( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_55832( "Contact 18", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 18", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59680(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 19", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 19", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59881(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_55832( "Girl 20", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59954(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_55832( "Contact 21", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 21", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60168(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54125( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_55832( "Contact 22", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 22", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60421(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_54125( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54125( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54125( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_55832( "Contact 24", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 24", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60668(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54125( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54125( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54125( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_55832( "Contact 25", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55832( "Contact 25", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60869(unknown uParam0)
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
        sub_54125( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_55832( "Girl 26", 1 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55832( "Girl 26", 0 );
        sub_54125( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_61192(int iParam0, int iParam1)
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
    if (sub_61240( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_61971( iParam1 );
    }
    return;
}

int sub_61240(int iParam0, int iParam1)
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
            sub_61380( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_61380(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_61562( 0 );
    return;
}

void sub_61562(boolean bParam0)
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
        sub_61817();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_61817()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_61971(int iParam0)
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
        sub_62304( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_62304( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_62304( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_62304( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_62304( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_62304( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_62304( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_62304( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_62304( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_62304( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_62304( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_62304( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_62304( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_62304( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_62304( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_62304( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_62304( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_62304( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_62304( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_62304(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_63014(unknown uParam0, unknown uParam1)
{
    sub_63033( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_63033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_63444()
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

int sub_63529(int iParam0, int iParam1)
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

void sub_63586(unknown uParam0)
{
    sub_1160();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_63625(unknown uParam0)
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

void sub_63733()
{
    sub_63742();
    return;
}

void sub_63742()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_63821()
{
    sub_63742();
    return;
}

void sub_63861()
{
    sub_63742();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_63950(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_64037( iParam0 ))
    {
        sub_65087( iParam0 );
    }
    return;
}

int sub_64037(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_64094( ref uVar3, 1, 0, 0 );
    sub_64706( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_17878( "\n ----------------------------------------------------------------" );
    sub_25403( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_17878( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_64094(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_64147( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_64279( iParam0 + 0 );
    }
    return;
}

void sub_64147(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_64279( iParam0 + 0 );
    }
    return;
}

void sub_64279(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_64310( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_64310(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_64706(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_65087(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_65298( 20, 6, 16383, 16383, ref uVar4 );
        sub_65974( ref uVar4, 7 );
        sub_66005( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_65298( 20, 7, 9, 16383, ref uVar4 );
        sub_65974( ref uVar4, 7 );
        sub_66005( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_65298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_65322( uParam0, 0, iParam4 + 0 );
    sub_65322( uParam1, 1, iParam4 + 0 );
    sub_65322( uParam2, 2, iParam4 + 0 );
    sub_65322( uParam3, 3, iParam4 + 0 );
    sub_65322( 0, 4, iParam4 + 0 );
    sub_65322( 1, 5, iParam4 + 0 );
    sub_65322( 65535, 6, iParam4 + 0 );
    sub_65322( 0, 12, iParam4 + 0 );
    sub_65322( 0, 11, iParam4 + 0 );
    sub_65322( 0, 14, iParam4 + 0 );
    sub_65322( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_65322( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_65322( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_65322(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_65974(int iParam0, unknown uParam1)
{
    sub_65322( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_66005(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_66045())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_66732( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_66531( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_66045()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_66079( 5, g_U968[I] )) == 7)
        {
            sub_66531( I );
            return 1;
        }
    }
    return 0;
}

int sub_66079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_66531(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_66604( 39 );
    return;
}

void sub_66604(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_66732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_66793( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_66793(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}