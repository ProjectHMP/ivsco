void main()
{
    int I;
    int iVar3;
    unknown uVar4;
    boolean bVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;
    int iVar11;

    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U122 = 10.00000000;
    l_U123 = 10.00000000;
    l_U132 = 0;
    l_U133 = 0;
    l_U134 = 0;
    l_U135 = 0;
    l_U136 = 0;
    l_U137 = 1;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 1;
    l_U142 = 0;
    l_U143 = 0;
    l_U144 = 0;
    l_U145 = 0;
    l_U146 = 0;
    l_U147 = 0;
    l_U148 = 0;
    l_U149 = 0;
    l_U150 = 0;
    l_U151 = 1;
    l_U152 = 0;
    l_U153 = 0;
    l_U154 = 0;
    l_U155 = 0;
    l_U156 = 0;
    l_U157 = 0;
    l_U158 = 0;
    l_U159 = 1;
    l_U160 = 1;
    l_U161 = 0;
    l_U162 = 0;
    l_U163 = 0;
    l_U164 = 0;
    l_U165 = 0;
    l_U166 = 0;
    l_U167 = 0;
    l_U359 = 90.00000000;
    l_U360 = 5.00000000;
    l_U361 = 25.00000000;
    l_U362 = 15.00000000;
    l_U363 = 2.00000000;
    l_U364 = 4.00000000;
    l_U365 = 0.50000000;
    l_U366 = 120.00000000;
    l_U367 = 0.00000000;
    l_U368 = 0.00000000;
    l_U370 = 1.00000000;
    l_U371 = 0.00000000;
    l_U372 = 1.00000000;
    l_U373 = 10.00000000;
    l_U374 = 30.00000000;
    l_U376 = 1.00000000;
    l_U378 = 1.00000000;
    l_U379 = 5.00000000;
    l_U380 = 1.00000000;
    l_U381 = 1.00000000;
    l_U386 = 0.30000000;
    l_U387 = 0.50000000;
    l_U388 = 50.00000000;
    l_U444 = 0;
    l_U445 = 0;
    l_U446 = 0;
    l_U447 = 0;
    l_U448 = 1;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = -1;
    l_U454 = 0;
    l_U455 = 0;
    l_U456 = 0;
    l_U457 = 0;
    l_U458 = 0;
    l_U459 = 0;
    l_U460 = 0;
    l_U655 = 0;
    l_U656 = 0;
    l_U664 = 0;
    l_U665 = 1;
    l_U666 = 3;
    l_U668 = 0;
    l_U685 = -1;
    l_U689 = 0;
    l_U690 = 1;
    l_U691 = 1;
    l_U699 = 150.00000000;
    l_U789 = 0;
    l_U790 = 150.00000000;
    l_U840 = 0;
    l_U1043 = 0;
    l_U1044 = 0;
    l_U1045 = 0;
    l_U1046 = 0;
    l_U1050 = 0;
    l_U1051 = 0;
    l_U1052 = 0;
    l_U1053 = 0;
    l_U1054 = 0;
    l_U1055 = 0;
    l_U1056 = 0;
    l_U1057 = 0;
    l_U1058 = 0;
    l_U1059 = 0;
    l_U1060 = 0;
    l_U1061 = 0;
    l_U1062 = 0;
    l_U1063 = 0;
    l_U1069 = 0;
    l_U1078 = 7.00000000;
    l_U1079 = 30.00000000;
    l_U1080 = 52.01920000;
    l_U1081 = 27.00000000;
    l_U1082 = 137.47320000;
    l_U1230 = {-249.85120000, 949.58190000, 2.59000000};
    l_U1233 = {-246.64000000, 946.80000000, 2.72850000};
    l_U1236 = {-248.58230000, 950.53800000, 2.16630000};
    l_U1239 = {-234.24980000, 952.85960000, 10.01290000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_975();
        sub_3085();
    }
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "BERNIE1", 0 );
    sub_4129( "BC1AUD" );
    LOAD_ADDITIONAL_TEXT( "BC1AUD", 6 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    FORCE_WEATHER( 1 );
    PROCESS_MISSION_DELETION_LIST();
    sub_4274();
    l_U1114 = sub_4747( "BC1AUD", "BC1_BANT1" );
    l_U1115 = sub_4747( "BC1AUD", "BC1_BANT2" );
    l_U1116 = sub_4747( "BC1AUD", "BC1_BANT3" );
    l_U1117 = sub_4747( "BC1AUD", "BC1_BANT4" );
    l_U1118 = sub_4747( "BC1AUD", "BC1_PASS" );
    l_U1119 = sub_4747( "BC1AUD", "BC1_FAIL" );
    FORCE_WEATHER_NOW( 1 );
    while (NOT (IS_CHAR_INJURED( sub_3164() )))
    {
        sub_5143();
        switch (l_U98)
        {
            case 0:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (g_U9893._fU24)
                {
                    SET_PLAYER_CONTROL( sub_3094(), 0 );
                    START_CUTSCENE_NOW( "BC_1" );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                else
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 1:
                if (HAS_CUTSCENE_LOADED())
                {
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    CLEAR_NAMED_CUTSCENE( "BC_1" );
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                sub_5616( 1, 1 );
                break;
            }
            break;
            case 1:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                SET_RELATIONSHIP( 5, 0, 23 );
                SET_RELATIONSHIP( 5, 23, 24 );
                SET_RELATIONSHIP( 5, 24, 23 );
                # -sub_C1FFC0-0xc214c8( 2, ref l_U1070 );
                # -sub_C1FFC0-0xc214c8( 3, ref l_U1071 );
                LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1072 );
                LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1073 );
                LOAD_COMBAT_DECISION_MAKER( 1, ref l_U1074 );
                SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U1072, 0 );
                SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U1073, 0 );
                sub_6049( 18 );
                REQUEST_MODEL( 1063483177 );
                REQUEST_MODEL( 223726252 );
                GET_WEAPONTYPE_MODEL( 1, ref l_U1121[0] );
                REQUEST_MODEL( l_U1121[0] );
                REQUEST_CAR_RECORDING( 1200 );
                REQUEST_ANIMS( "MISSBERNIE1" );
                REQUEST_ANIMS( "MISSPASS" );
                LOAD_ALL_OBJECTS_NOW();
                while ((((((((NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\BC1_PARK_PERVERT" ))) || (NOT (sub_6905( 18 )))) || (NOT (HAS_MODEL_LOADED( 1063483177 )))) || (NOT (HAS_MODEL_LOADED( 223726252 )))) || (NOT (HAS_MODEL_LOADED( l_U1121[0] )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1200 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSBERNIE1" )))) || (NOT (HAVE_ANIMS_LOADED( "MISSPASS" ))))
                {
                    WAIT( 0 );
                }
                l_U1059 = 1;
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3164(), 0 );
                CLEAR_AREA_OF_CHARS( -537.58090000, 821.66880000, 8.53510000, 30.00000000 );
                SET_CHAR_COORDINATES( sub_3164(), -537.58090000, 821.66880000, 8.53510000 );
                SET_CHAR_HEADING( sub_3164(), 90.00000000 );
                SET_CAM_BEHIND_PED( sub_3164() );
                CLEAR_AREA( -542.62560000, 792.26970000, 7.41380000, 5.00000000, 1 );
                CREATE_CAR( 1063483177, -542.62560000, 792.26970000, 7.41380000, ref l_U1134, 1 );
                CHANGE_CAR_COLOUR( l_U1134, 3, 3 );
                SET_CAR_HEADING( l_U1134, 0.00000000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1063483177 );
                sub_7307( -540.11380000, 822.76970000, 8.57230000, 5.00000000, -542.69530000, 821.79870000, 8.50000000, 0.00000000 );
                sub_7841( 18, ref l_U1124, -540.11380000, 822.76970000, 8.57230000, 263.55250000 );
                SET_CHAR_HEADING( l_U1124, 263.55250000 );
                SET_COMBAT_DECISION_MAKER( l_U1124, l_U1072 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1124, 0 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U1124, 0 );
                SET_GROUP_MEMBER( sub_9551(), l_U1124 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1124, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U1124, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1124, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U1124, 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1124, 2, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1124, 3, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1124, 7, 1, 0 );
                sub_9719( 1, l_U1124, "BERNIE", 0 );
                SET_AMBIENT_VOICE_NAME( l_U1124, "BERNIE" );
                sub_9719( 0, sub_3164(), "NIKO", 0 );
                SET_WANTED_MULTIPLIER( 0.50000000 );
                POPULATE_NOW();
                sub_9928( -956048545 );
                sub_10542( 1000, 1, 0 );
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (IS_SCREEN_FADED_IN())
                {
                    SET_PLAYER_CONTROL( sub_3094(), 1 );
                    sub_11170( "BC1_EXIT", ref l_U125, 6, 1 );
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U1105 );
                    l_U1101 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (sub_12236( -352.50300000, 769.27600000, 15.93800000, 2.50000000, 2.50000000, 2.50000000, 1, l_U1124, "BC1_M01", "BC1_M02", 0, 1, "BC1_M13" ))
                {
                    SET_PLAYER_CONTROL( sub_3094(), 0 );
                    sub_5616( 2, 1 );
                }
                else
                {
                    sub_16660( l_U1124 );
                    if ((NOT (IS_CHAR_INJURED( l_U1124 ))) AND (NOT (IS_CHAR_INJURED( sub_3164() ))))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, sub_3164(), 5.00000000, 5.00000000, 5.00000000, 0 )) AND (sub_17204()))
                        {
                            if (NOT sub_12941())
                            {
                                if (l_U1101 == 0)
                                {
                                    switch (g_U64936)
                                    {
                                        case 0:
                                        if (l_U1100 < l_U1114)
                                        {
                                            if (sub_17438( "BC1_BANT1", l_U1100, 1, ref l_U125, 6, 1 ))
                                            {
                                                l_U1100++;
                                            }
                                        }
                                        else
                                        {
                                            g_U64936++;
                                            l_U1100 = 0;
                                            l_U1101++;
                                        }
                                        break;
                                        case 1:
                                        if (l_U1100 < l_U1115)
                                        {
                                            if (sub_17438( "BC1_BANT2", l_U1100, 1, ref l_U125, 6, 1 ))
                                            {
                                                l_U1100++;
                                            }
                                        }
                                        else
                                        {
                                            g_U64936++;
                                            l_U1100 = 0;
                                            l_U1101++;
                                        }
                                        break;
                                        default:
                                        if (sub_17719( sub_3164(), l_U1124 ))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U1124, "LISTEN_TO_RADIO", 0, 0, 0 );
                                            g_U64936++;
                                            if (g_U64936 >= 5)
                                            {
                                                g_U64936 = 0;
                                            }
                                            l_U1100 = 0;
                                            l_U1101++;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }
            break;
            case 2:
            sub_17934();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_18342( 1, 1 );
                if (NOT (DOES_CAM_EXIST( l_U111 )))
                {
                    CREATE_CAM( 14, ref l_U111 );
                }
                SET_CAM_POS( l_U111, -354.02380000, 744.33700000, 16.53403000 );
                SET_CAM_ROT( l_U111, -1.32555200, 0.00000000, -7.94290300 );
                SET_CAM_FOV( l_U111, 20.10006000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CLEAR_AREA( -347.32820000, 769.61350000, 13.62080000, 10.00000000, 1 );
                OPEN_SEQUENCE_TASK( ref l_U1132 );
                if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -348.05660000, 768.80000000, 13.71190000, 2, 999999, 1.00000000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -344.58910000, 768.80000000, 14.65400000, 2, 5000 );
                TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1132 );
                TASK_PERFORM_SEQUENCE( sub_3164(), l_U1132 );
                CLEAR_SEQUENCE_TASK( l_U1132 );
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    UNLOCK_RAGDOLL( l_U1124, 0 );
                    REMOVE_CHAR_FROM_GROUP( l_U1124 );
                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                    if (IS_CHAR_IN_ANY_CAR( l_U1124 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -348.05660000, 770.40000000, 14.71200000, 2, 999999, 1.00000000 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, -342.80790000, 770.40000000, 14.53060000, 2, 5000 );
                    TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1132 );
                    TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                    CLEAR_SEQUENCE_TASK( l_U1132 );
                }
                sub_19278( ref l_U111, sub_3164(), 5.00000000, 3.00000000 );
                BLOCK_CHAR_GESTURE_ANIMS( sub_3164(), 1 );
                BLOCK_CHAR_VISEME_ANIMS( sub_3164(), 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3164(), 1 );
                SETTIMERA( 0 );
                l_U1098 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 )))) AND (TIMERA() > 6000))
                {
                    CLEAR_AREA( -343.48040000, 770.48250000, 13.58330000, 5.00000000, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_CHAR_COORDINATES( l_U1124, -343.48040000, 770.48250000, 13.58330000 );
                        SET_CHAR_HEADING( l_U1124, 300.00000000 );
                        TASK_PLAY_ANIM( l_U1124, "WARMUP", "MISSBERNIE1", 8.00000000, 0, 0, 0, 1, -1 );
                    }
                    SET_CHAR_COORDINATES( sub_3164(), -344.46240000, 769.00410000, 13.65740000 );
                    SET_CHAR_HEADING( sub_3164(), 329.74840000 );
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3164(), l_U1124, 10000, 0 );
                    }
                    SET_CAM_POS( l_U111, -341.20410000, 771.25370000, 13.72210000 );
                    SET_CAM_ROT( l_U111, 21.85968000, -0.00000000, 112.71750000 );
                    SET_CAM_FOV( l_U111, 37.80002000 );
                    sub_19278( ref l_U111, l_U1124, 6.00000000, 6.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                CLEAR_AREA( -332.97480000, 769.68400000, 12.60500000, 5.00000000, 1 );
                bVar5 = false;
                if (TIMERA() > 20000)
                {
                    bVar5 = true;
                }
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U1124, "MISSBERNIE1", "WARMUP" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U1124, "MISSBERNIE1", "WARMUP", ref fVar6 );
                        if (fVar6 > 0.60000000)
                        {
                            bVar5 = true;
                        }
                    }
                }
                if (NOT l_U1058)
                {
                    if (TIMERA() > 5000)
                    {
                        TASK_CLEAR_LOOK_AT( sub_3164() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_3164(), "CROSSARMNLOOKAWAY", "MISSBERNIE1", 8.00000000, 0, 0, 0, 0, -1 );
                        l_U1058 = 1;
                    }
                }
                if (bVar5)
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    SETTIMERA( 0 );
                }
                break;
                case 3:
                CLEAR_AREA( -332.97480000, 769.68400000, 12.60500000, 5.00000000, 1 );
                if (sub_11170( "BC1_PARK", ref l_U125, 6, 1 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U1124, "MISSBERNIE1", "WARMUP" ))
                        {
                            SET_CHAR_ANIM_SPEED( l_U1124, "MISSBERNIE1", "WARMUP", 0.75000000 );
                        }
                    }
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                CLEAR_AREA( -332.97480000, 769.68400000, 12.60500000, 5.00000000, 1 );
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 ))))
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
                    SET_CHAR_COORDINATES( sub_3164(), -344.58910000, 768.80000000, 13.66320000 );
                    SET_CHAR_HEADING( sub_3164(), 270.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                        SET_CHAR_COORDINATES( l_U1124, -342.80790000, 770.40000000, 13.53060000 );
                        SET_CHAR_HEADING( l_U1124, 270.00000000 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1134 ))
                    {
                        CLOSE_ALL_CAR_DOORS( l_U1134 );
                    }
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    UNLOCK_RAGDOLL( l_U1124, 1 );
                }
                CLEAR_CHAR_TASKS( sub_3164() );
                SET_CHAR_HEADING( sub_3164(), 270.00000000 );
                TASK_CLEAR_LOOK_AT( sub_3164() );
                BLOCK_CHAR_GESTURE_ANIMS( sub_3164(), 0 );
                BLOCK_CHAR_VISEME_ANIMS( sub_3164(), 0 );
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3164(), 0 );
                SET_PLAYER_CONTROL( sub_3094(), 1 );
                sub_10542( 0, 1, 0 );
                sub_5616( 4, 1 );
                break;
            }
            break;
            case 4:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                l_U1111 = GET_INT_STAT( 257 );
                l_U1112 = 0;
                STORE_WANTED_LEVEL( sub_3094(), ref l_U1113 );
                if (IS_VEH_DRIVEABLE( l_U1134 ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U1134 );
                }
                l_U1142[0] = {-325.62590000, 770.09000000, 11.93100000};
                l_U1142[1] = {-319.29200000, 775.61340000, 11.28850000};
                l_U1142[2] = {-305.64030000, 783.77780000, 10.07390000};
                l_U1142[3] = {-297.84850000, 788.69810000, 9.79590000};
                l_U1142[4] = {-290.10810000, 797.47180000, 9.68840000};
                l_U1142[5] = {-282.85000000, 803.77120000, 7.11730000};
                l_U1142[6] = {-276.20210000, 808.08480000, 6.17990000};
                l_U1142[7] = {-274.30100000, 814.49930000, 6.15890000};
                l_U1142[8] = {-271.39810000, 816.97810000, 6.15910000};
                l_U1142[9] = {-266.24150000, 820.22860000, 6.15910000};
                l_U1142[10] = {-265.36670000, 821.81260000, 6.15900000};
                l_U1142[11] = {-265.91610000, 824.94750000, 6.15910000};
                l_U1142[12] = {-267.53530000, 830.86650000, 6.15900000};
                l_U1142[13] = {-267.08170000, 832.93430000, 6.15900000};
                l_U1142[14] = {-265.88010000, 837.17080000, 6.15910000};
                l_U1142[15] = {-265.68270000, 845.79390000, 6.15910000};
                l_U1142[16] = {-267.13460000, 856.99100000, 6.15900000};
                l_U1142[17] = {-267.11390000, 861.37450000, 6.15910000};
                l_U1142[18] = {-269.93680000, 869.13350000, 6.09110000};
                l_U1142[19] = {-269.51100000, 878.31440000, 6.17850000};
                l_U1142[20] = {-265.87690000, 884.88150000, 6.50060000};
                l_U1142[21] = {-259.70710000, 891.76560000, 7.23920000};
                l_U1142[22] = {-254.73140000, 901.87160000, 8.10910000};
                l_U1142[23] = {-250.44890000, 914.42820000, 7.18680000};
                l_U1142[24] = {-247.23880000, 925.74760000, 4.10000000};
                l_U1142[25] = {-243.65170000, 935.49850000, 4.10000000};
                l_U1142[26] = {-244.05840000, 939.53080000, 4.10000000};
                l_U1142[27] = {-251.62870000, 955.79400000, 3.80000000};
                l_U1098 = 0;
                l_U1099 = 0;
                l_U1102 = 0;
                l_U1103 = 0;
                l_U1104 = 0;
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    CLEAR_CHAR_TASKS( l_U1124 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1124, 1 );
                    ADD_BLIP_FOR_CHAR( l_U1124, ref l_U1048 );
                    SET_BLIP_AS_FRIENDLY( l_U1048, 1 );
                    sub_13762( "BC1_M03", 0 );
                }
                if (DOES_VEHICLE_EXIST( l_U1134 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1134 );
                }
                SET_WANTED_MULTIPLIER( 1.00000000 );
                sub_4274();
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref iVar10 );
                if (iVar10 == 1)
                {
                    if (SECUROM_SPOT_CHECK1() == 0)
                    {
                        sub_22284();
                    }
                }
                else if (iVar10 == 2)
                {
                    if (SECUROM_SPOT_CHECK2() == 0)
                    {
                        sub_22284();
                    }
                }
                else if (iVar10 == 3)
                {
                    if (SECUROM_SPOT_CHECK3() == 0)
                    {
                        sub_22284();
                    }
                }
                else if (SECUROM_SPOT_CHECK4() == 0)
                {
                    sub_22284();
                };;;;
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    switch (l_U1093)
                    {
                        case 0:
                        sub_22462( 3 );
                        if (TIMERA() > 5000)
                        {
                            if (sub_22873( sub_3164(), l_U1124 ))
                            {
                                if ((sub_23143( sub_3164(), l_U1124 )) > 1.00000000)
                                {
                                    l_U1063 = 1;
                                    l_U1077 = 15000.00000000;
                                    sub_23294( 3 );
                                    break;
                                }
                            }
                            if (NOT sub_12941())
                            {
                                if ((sub_23143( sub_3164(), l_U1124 )) < l_U1078)
                                {
                                    l_U1084 = 0.00000000;
                                    l_U1077 = 10000.00000000;
                                    sub_23294( 4 );
                                    break;
                                }
                            }
                            if (NOT sub_12941())
                            {
                                if (NOT (sub_22873( sub_3164(), l_U1124 )))
                                {
                                    if ((sub_23143( sub_3164(), l_U1124 )) > l_U1079)
                                    {
                                        l_U1077 = 15000.00000000;
                                        sub_23294( 3 );
                                        break;
                                    }
                                }
                            }
                        }
                        if (NOT sub_12941())
                        {
                            if (NOT (sub_22873( sub_3164(), l_U1124 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 40.00000000, 40.00000000, 5.00000000, 0 ))
                                {
                                    bVar5 = false;
                                    if (((sub_23143( sub_3164(), l_U1124 )) > (((l_U1079 - l_U1078) * 0.50000000) + l_U1078)) AND (l_U1090 > 10000.00000000))
                                    {
                                        bVar5 = true;
                                    }
                                    if (((sub_23143( sub_3164(), l_U1124 )) > l_U1078) AND (l_U1090 > 20000.00000000))
                                    {
                                        bVar5 = true;
                                    }
                                    if (bVar5)
                                    {
                                        if (sub_11170( "BC1_FOLLOW", ref l_U125, 6, 1 ))
                                        {
                                            l_U1090 = 0.00000000;
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT sub_12941())
                        {
                            if (l_U1091 > 10000.00000000)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1124, 0.00000000, 3.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                    GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( uVar7._fU0, uVar7._fU4, uVar7._fU8, 3.00000000, 3.00000000, 3.00000000, ref iVar3 );
                                    if (DOES_CHAR_EXIST( iVar3 ))
                                    {
                                        if (NOT (iVar3 == sub_3164()))
                                        {
                                            if (NOT (iVar3 == l_U1124))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U1124, "GENERIC_HI", 1, 1, 0 );
                                                l_U1091 = 0.00000000;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U1124, 29, ref l_U1131 );
                        if (l_U1131 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1132 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U1142[l_U1092]._fU0, l_U1142[l_U1092]._fU4, l_U1142[l_U1092]._fU8 );
                            TASK_PLAY_ANIM( 0, "WARMUP", "MISSBERNIE1", 8.00000000, 1, 1, 1, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U1132 );
                            TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                            CLEAR_SEQUENCE_TASK( l_U1132 );
                        }
                        if ((l_U1077 > 20000.00000000) AND (NOT sub_12941()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1124 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 100.00000000, 100.00000000, 0 ))
                                {
                                    if (l_U1063)
                                    {
                                        l_U1104++;
                                        l_U1063 = 0;
                                    }
                                    else
                                    {
                                        l_U1103++;
                                    }
                                    if ((l_U1104 < 3) AND (l_U1103 < 3))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 40.00000000, 40.00000000, 0 ))
                                        {
                                            sub_11170( "BC1_FRONT", ref l_U125, 6, 1 );
                                        }
                                    }
                                    l_U1077 = 0.00000000;
                                }
                            }
                        }
                        if (NOT (sub_22873( sub_3164(), l_U1124 )))
                        {
                            if (((sub_23143( sub_3164(), l_U1124 )) > 1.00000000) AND ((sub_23143( sub_3164(), l_U1124 )) < (l_U1079 * 0.50000000)))
                            {
                                SETTIMERA( 0 );
                                sub_23294( 0 );
                            }
                        }
                        break;
                        case 4:
                        if ((sub_23143( sub_3164(), l_U1124 )) < (l_U1078 * 1.10000000))
                        {
                            sub_22462( 3 );
                        }
                        if ((l_U1077 > 10000.00000000) AND (NOT sub_12941()))
                        {
                            if (sub_11170( "BC1_2CLOSE", ref l_U125, 6, 1 ))
                            {
                                l_U1102++;
                                l_U1077 = 0.00000000;
                            }
                        }
                        if ((((sub_23143( sub_3164(), l_U1124 )) > (l_U1078 * 1.10000000)) || (l_U1084 > 10000.00000000)) || (sub_22873( sub_3164(), l_U1124 )))
                        {
                            sub_23294( 0 );
                        }
                        break;
                    }
                    if ((IS_CHAR_IN_AREA_3D( l_U1124, -255.66720000, 942.10090000, 1.76600000, -241.56470000, 961.33090000, 6.22140000, 0 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                    {
                        if (sub_14954( 1, 1 ))
                        {
                            SET_PLAYER_CONTROL( sub_3094(), 0 );
                            SETTIMERB( 0 );
                            if (DOES_BLIP_EXIST( l_U1048 ))
                            {
                                REMOVE_BLIP( l_U1048 );
                            }
                            sub_5616( 5, 1 );
                            break;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        if (sub_14954( 1, 1 ))
                        {
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 300.00000000, 300.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1124 ))))
                            {
                                DELETE_CHAR( ref l_U1124 );
                                sub_24809();
                                sub_24894( "BC1_F04" );
                                sub_5616( 8, 0 );
                                break;
                            }
                        }
                    }
                    if ((l_U1103 >= 3) || (l_U1104 >= 3))
                    {
                        if (sub_14954( 1, 1 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1124 )))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 100.00000000, 100.00000000, 0 )) || (IS_CHAR_ON_SCREEN( l_U1124 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 40.00000000, 40.00000000, 0 ))
                                        {
                                            sub_17438( "BC1_2CLOSEF", 2, 1, ref l_U125, 6, 1 );
                                        }
                                        if (l_U1103 >= 3)
                                        {
                                            l_U1133 = "BC1_F08";
                                        }
                                        else
                                        {
                                            l_U1133 = "BC1_F06";
                                        }
                                        sub_5616( 10, 0 );
                                        break;
                                    }
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U1124 );
                                    sub_24809();
                                    sub_24894( "BC1_F04" );
                                    sub_5616( 8, 0 );
                                    break;
                                }
                            }
                        }
                    }
                    if (l_U1102 >= 4)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (sub_14954( 1, 1 ))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    if (sub_11170( "BC1_2CLOSEF", ref l_U125, 6, 1 ))
                                    {
                                        l_U1133 = "BC1_F07";
                                        sub_5616( 10, 0 );
                                        break;
                                    }
                                }
                                else if (sub_11170( "BC1_2CLSEF2", ref l_U125, 6, 1 ))
                                {
                                    l_U1133 = "BC1_F07";
                                    sub_5616( 10, 0 );
                                    break;
                                }
                            }
                        }
                    }
                    if ((sub_25461( sub_3164() )) AND (IS_CHAR_IN_ANY_CAR( sub_3164() )))
                    {
                        if (NOT l_U1061)
                        {
                            sub_13762( "BC1_M12", 0 );
                            l_U1061 = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if ((sub_14954( 1, 1 )) AND (l_U1087 > 10000.00000000))
                            {
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 150.00000000, 150.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1124 ))))
                                {
                                    DELETE_CHAR( ref l_U1124 );
                                    sub_24809();
                                    sub_24894( "BC1_F06" );
                                    sub_5616( 8, 0 );
                                    break;
                                }
                                else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 40.00000000, 40.00000000, 0 ))
                                {
                                    sub_17438( "BC1_2CLOSEF", 2, 1, ref l_U125, 6, 1 );
                                }
                                l_U1133 = "BC1_F06";
                                sub_5616( 10, 0 );
                                break;;
                            }
                        }
                    }
                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "BC1_M12", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                    if (l_U1061)
                    {
                        l_U1061 = 0;
                    }
                    l_U1087 = 0.00000000;;
                    iVar11 = GET_INT_STAT( 257 );
                    if (sub_25461( sub_3164() ))
                    {
                        if (NOT (iVar11 == l_U1111))
                        {
                            l_U1112++;
                        }
                    }
                    l_U1111 = iVar11;
                    if (sub_14954( 1, 1 ))
                    {
                        if (l_U1112 > 1)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1124 )))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 100.00000000, 100.00000000, 0 )) || (IS_CHAR_ON_SCREEN( l_U1124 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 40.00000000, 40.00000000, 0 ))
                                        {
                                            sub_17438( "BC1_2CLOSEF", 2, 1, ref l_U125, 6, 1 );
                                        }
                                    }
                                    l_U1133 = "BC1_F09";
                                    sub_5616( 10, 0 );
                                    break;
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U1124 );
                                    sub_24809();
                                    sub_24894( "BC1_F04" );
                                    sub_5616( 8, 0 );
                                    break;
                                }
                            }
                        }
                    }
                    if (IS_WANTED_LEVEL_GREATER( sub_3094(), 0 ))
                    {
                        if (sub_14954( 1, 1 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1124 )))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 100.00000000, 100.00000000, 0 )) || (IS_CHAR_ON_SCREEN( l_U1124 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 40.00000000, 40.00000000, 0 ))
                                        {
                                            sub_17438( "BC1_2CLOSEF", 2, 1, ref l_U125, 6, 1 );
                                        }
                                    }
                                    l_U1133 = "BC1_F10";
                                    sub_5616( 10, 0 );
                                    break;
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U1124 );
                                    sub_24809();
                                    sub_24894( "BC1_F04" );
                                    sub_5616( 8, 0 );
                                    break;
                                }
                            }
                        }
                    }
                }
                break;
            }
            break;
            case 5:
            if (TIMERB() > 2000)
            {
                if (((((HAVE_ANIMS_LOADED( "move_m@roman_inj" )) AND (HAVE_ANIMS_LOADED( "move_m@generic" ))) AND (HAS_MODEL_LOADED( -292713088 ))) AND (HAS_MODEL_LOADED( -1775659292 ))) AND (HAS_MODEL_LOADED( -1842748181 )))
                {
                    sub_17934();
                }
            }
            switch (ProtectedGet(l_U99))
            {
                case 0:
                REQUEST_ANIMS( "move_m@roman_inj" );
                REQUEST_ANIMS( "move_m@generic" );
                REQUEST_ANIMS( "gestures@niko" );
                REQUEST_MODEL( -292713088 );
                REQUEST_MODEL( -1775659292 );
                REQUEST_MODEL( -1842748181 );
                sub_18342( 1, 1 );
                CREATE_CHAR( 26, 223726252, -247.28200000, 951.63800000, 2.71610000, ref l_U1125, 1 );
                SET_CHAR_HEADING( l_U1125, 46.97300000 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1125 );
                SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U1125, 1, 0 );
                SET_CHAR_DECISION_MAKER( l_U1125, l_U1070 );
                SET_COMBAT_DECISION_MAKER( l_U1125, l_U1073 );
                SET_CHAR_WILL_USE_COVER( l_U1125, 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1125, 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U1125, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1125, 1 );
                SET_CHAR_MAX_HEALTH( l_U1125, 300 );
                SET_CHAR_HEALTH( l_U1125, 300 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1125, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U1125, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U1125, 1 );
                GIVE_WEAPON_TO_CHAR( l_U1125, 1, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U1125, 1, 1 );
                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U1125, 1 );
                SET_CHAR_AS_ENEMY( l_U1125, 1 );
                ENABLE_PED_HELMET( l_U1125, 0 );
                UNLOCK_RAGDOLL( l_U1125, 0 );
                TASK_PLAY_ANIM( l_U1125, "ATTACKER_WAIT", "MISSBERNIE1", 1000.00000000, 1, 0, 0, 0, -1 );
                sub_9719( 2, l_U1125, "PERVERT_M", 0 );
                SET_AMBIENT_VOICE_NAME( l_U1125, "PERVERT_M" );
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                    SET_CHAR_COORDINATES( l_U1124, -242.31250000, 934.72710000, 2.40020000 );
                    SET_CHAR_HEADING( l_U1124, 20.00000000 );
                    TASK_PLAY_ANIM( l_U1124, "RUN", "MISSBERNIE1", 1000.00000000, 1, 1, 1, 0, -1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1124, 1 );
                }
                CLEAR_AREA( -247.28200000, 951.63800000, 0.00000000, 100.00000000, 1 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
                SET_CHAR_COORDINATES( sub_3164(), -248.62770000, 924.21730000, 4.36460000 );
                SET_CHAR_HEADING( sub_3164(), 23.00000000 );
                if (NOT (DOES_CAM_EXIST( l_U111 )))
                {
                    CREATE_CAM( 14, ref l_U111 );
                }
                SET_CAM_POS( l_U111, -240.72060000, 934.22280000, 3.74475600 );
                SET_CAM_ROT( l_U111, 2.20317000, 0.00000000, 30.78475000 );
                SET_CAM_FOV( l_U111, 24.40000000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                sub_19278( ref l_U111, l_U1124, 99.90000000, 10.00000000 );
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    TASK_LOOK_AT_CHAR( sub_3164(), l_U1125, -2, 0 );
                }
                CLEAR_AREA_OF_COPS( -242.31250000, 934.72710000, 2.40020000, 30 );
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (TIMERA() > 2000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                    {
                        SET_CHAR_COORDINATES( l_U1125, -247.28200000, 951.63800000, 2.71610000 );
                        SET_CHAR_HEADING( l_U1125, 46.90000000 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1125, "ATTACKER_WAIT", "MISSBERNIE1", 9999.00000000, 1, 1, 1, 0, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_CHAR_COORDINATES( l_U1124, -242.80700000, 937.11300000, 2.62610000 );
                        SET_CHAR_HEADING( l_U1124, 23.00000000 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1124, "RUN", "MISSBERNIE1", 9999.00000000, 1, 1, 1, 0, -1 );
                    }
                    SET_CAM_POS( l_U111, -248.54090000, 954.39930000, 4.09946300 );
                    SET_CAM_ROT( l_U111, -2.69403700, -0.00000000, -162.95020000 );
                    SET_CAM_FOV( l_U111, 24.40000000 );
                    sub_19278( ref l_U111, l_U1125, 99.90000000, 5.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (TIMERA() > 1000)
                {
                    if (sub_17438( "BC1_ATTACK", 0, 1, ref l_U125, 7, 1 ))
                    {
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 3:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                    {
                        SET_CHAR_COORDINATES( l_U1125, -247.28200000, 951.63800000, 2.71610000 );
                        SET_CHAR_HEADING( l_U1125, 7.22300000 );
                        TASK_PLAY_ANIM( l_U1125, "ATTACKER_BEATTHENRUN", "MISSBERNIE1", 1000.00000000, 0, 0, 0, 0, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_CHAR_COORDINATES( l_U1124, l_U1233._fU0, l_U1233._fU4, l_U1233._fU8 );
                        SET_CHAR_HEADING( l_U1124, l_U1081 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1124, "RUN", "MISSBERNIE1", 9999.00000000, 1, 1, 1, 0, -1 );
                    }
                    SET_CAM_POS( l_U111, -254.76250000, 953.75130000, 3.19023200 );
                    SET_CAM_ROT( l_U111, 7.32986200, 0.00000000, -110.70060000 );
                    SET_CAM_FOV( l_U111, 52.00000000 );
                    sub_19278( ref l_U111, l_U1125, 99.90000000, 5.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", ref fVar6 );
                        if (fVar6 > 0.20000000)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1124 )))
                            {
                                sub_17438( "BC1_ATTACK", 1, 1, ref l_U125, 6, 1 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1124, "VICTIM_HIT", "MISSBERNIE1", 4.00000000, 0, 1, 1, 0, -1 );
                                SETTIMERA( 0 );
                                SET_CHAR_COORDINATES( sub_3164(), -243.71120000, 939.69400000, 2.77720000 );
                                SET_CHAR_HEADING( sub_3164(), 44.44940000 );
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                    }
                }
                break;
                case 5:
                if (TIMERA() > 1500)
                {
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_CHAR_COORDINATES( l_U1124, -248.63750000, 950.14140000, 2.57810000 );
                        SET_CHAR_HEADING( l_U1124, 44.44940000 );
                        if (IS_CHAR_PLAYING_ANIM( l_U1124, "MISSBERNIE1", "VICTIM_HIT" ))
                        {
                            SET_CHAR_ANIM_SPEED( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.80000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.25000000 );
                        }
                    }
                    SET_CAM_POS( l_U111, -247.20870000, 949.58640000, 2.93477900 );
                    SET_CAM_ROT( l_U111, 7.99814700, 0.00000000, 48.23783000 );
                    sub_19278( ref l_U111, l_U1125, 3.00000000, 3.00000000 );
                    TASK_GO_STRAIGHT_TO_COORD( sub_3164(), -249.63000000, 951.21000000, 2.80000000, 2, -2 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 6:
                if ((TIMERA() > 1000) AND (NOT sub_12941()))
                {
                    if (sub_17438( "BC1_ATTACK", 2, 1, ref l_U125, 6, 1 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1125 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", ref l_U1088 );
                                SET_CHAR_ANIM_SPEED( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 0.00000000 );
                                CLEAR_CHAR_TASKS( l_U1125 );
                                SET_CHAR_COORDINATES( l_U1125, -249.22830000, 952.02000000, 2.71610000 );
                                SET_CHAR_HEADING( l_U1125, 215.98210000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1125, sub_3164() );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U1124, "MISSBERNIE1", "VICTIM_HIT" ))
                            {
                                SET_CHAR_VISIBLE( l_U1124, 0 );
                                SET_CHAR_ANIM_SPEED( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.00000000 );
                                SET_CHAR_ANIM_CURRENT_TIME( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.25000000 );
                            }
                        }
                        SET_CAM_POS( l_U111, -251.83050000, 953.72630000, 3.47515300 );
                        SET_CAM_ROT( l_U111, 1.82947100, 0.00000000, -148.93980000 );
                        SET_CAM_FOV( l_U111, 13.30000000 );
                        sub_19278( ref l_U111, sub_3164(), 3.00000000, 3.00000000 );
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 7:
                sub_19278( ref l_U111, sub_3164(), 3.00000000, 3.00000000 );
                if (TIMERA() > 1000)
                {
                    if (NOT sub_12941())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1125 )))
                        {
                            if (sub_17438( "BC1_ATTACK", 3, 1, ref l_U125, 6, 1 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                {
                                    if (IS_CHAR_PLAYING_ANIM( l_U1124, "MISSBERNIE1", "VICTIM_HIT" ))
                                    {
                                        SET_CHAR_VISIBLE( l_U1124, 1 );
                                        SET_CHAR_ANIM_SPEED( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.20000000 );
                                        SET_CHAR_ANIM_CURRENT_TIME( l_U1124, "MISSBERNIE1", "VICTIM_HIT", 0.40000000 );
                                    }
                                }
                                SET_CHAR_COORDINATES( sub_3164(), -243.71000000, 939.69000000, 2.77720000 );
                                SET_CHAR_HEADING( sub_3164(), 44.44940000 );
                                SET_CAM_POS( l_U111, -241.07320000, 935.73930000, 4.33141700 );
                                SET_CAM_ROT( l_U111, -1.74213000, 0.00000000, 27.61130000 );
                                SET_CAM_FOV( l_U111, 15.70000000 );
                                SETTIMERA( 0 );
                                sub_19278( ref l_U111, l_U1125, 3.00000000, 3.00000000 );
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                    }
                }
                break;
                case 8:
                if (TIMERA() > 1000)
                {
                    if (NOT sub_12941())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1125 )))
                        {
                            if (sub_17438( "BC1_ATTACK", 4, 1, ref l_U125, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                    }
                }
                break;
                case 9:
                if (TIMERA() > 300)
                {
                    SET_CAM_POS( l_U111, -244.57410000, 944.50470000, 4.13654900 );
                    SET_CAM_ROT( l_U111, -0.83437200, -0.00000000, -174.36670000 );
                    SET_CAM_FOV( l_U111, 15.60007000 );
                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                    {
                        SET_CHAR_COORDINATES( l_U1125, -247.28200000, 951.63800000, 2.71610000 );
                        SET_CHAR_HEADING( l_U1125, 7.22300000 );
                        TASK_PLAY_ANIM( l_U1125, "ATTACKER_BEATTHENRUN", "MISSBERNIE1", 9999.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                        TASK_PLAY_ANIM( l_U1124, "inj_rside_idle", "MISSBERNIE1", 9999.00000000, 1, 0, 0, 0, -1 );
                    }
                    sub_19278( ref l_U111, sub_3164(), 3.00000000, 3.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 10:
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN" ))
                    {
                        SET_CHAR_ANIM_SPEED( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 0.00000000 );
                        SET_CHAR_ANIM_CURRENT_TIME( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 0.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                    TASK_PLAY_ANIM( l_U1124, "inj_rside_idle", "MISSBERNIE1", 9999.00000000, 1, 0, 0, 0, -1 );
                }
                if (TIMERA() > 1000)
                {
                    if (NOT sub_12941())
                    {
                        if (sub_17438( "BC1_ATTACK", 5, 1, ref l_U125, 6, 1 ))
                        {
                            SETTIMERA( 0 );
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                }
                break;
                case 11:
                if ((NOT sub_12941()) AND (TIMERA() > 1000))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN" ))
                        {
                            SET_CHAR_ANIM_SPEED( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 1.00000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 0.73333330 );
                        }
                    }
                    SET_CAM_POS( l_U111, -256.23370000, 964.34280000, 3.55943600 );
                    SET_CAM_ROT( l_U111, 1.11368300, -0.00000000, -151.56290000 );
                    SET_CAM_FOV( l_U111, 15.70000000 );
                    sub_19278( ref l_U111, l_U1125, 5.00000000, 15.00000000 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                else if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN" ))
                    {
                        SET_CHAR_ANIM_SPEED( l_U1125, "MISSBERNIE1", "ATTACKER_BEATTHENRUN", 0.00000000 );
                    }
                }
                break;
                case 12:
                if (TIMERA() > 1500)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    UNLOCK_RAGDOLL( l_U1125, 1 );
                }
                TASK_CLEAR_LOOK_AT( sub_3164() );
                REMOVE_ANIMS( "gestures@niko" );
                sub_5616( 6, 1 );
                break;
            }
            break;
            case 11: break;
            case 14: break;
            case 6:
            sub_31576( ref l_U1125 );
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_32282();
                SWITCH_ROADS_OFF( -376.21950000, 938.21280000, 6.87970000, -350.41950000, 1115.33800000, 27.40480000 );
                SWITCH_ROADS_OFF( -358.35280000, 912.85160000, -1.51510000, -57.75280000, 959.87660000, 26.83490000 );
                sub_33352();
                SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                l_U1097 = 0;
                l_U1227 = {-238.21880000, 953.45660000, 10.66720000};
                REQUEST_ANIMS( "move_m@roman_inj" );
                REQUEST_ANIMS( "move_m@generic" );
                REQUEST_MODEL( -292713088 );
                REQUEST_MODEL( -1775659292 );
                REQUEST_MODEL( -1842748181 );
                while (((((NOT (HAVE_ANIMS_LOADED( "move_m@roman_inj" ))) || (NOT (HAVE_ANIMS_LOADED( "move_m@generic" )))) || (NOT (HAS_MODEL_LOADED( -292713088 )))) || (NOT (HAS_MODEL_LOADED( -1775659292 )))) || (NOT (HAS_MODEL_LOADED( -1842748181 ))))
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    SET_CHAR_VISIBLE( l_U1124, 1 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U1124, "move_m@roman_inj" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1124, 1 );
                    SET_CHAR_COORDINATES( l_U1124, l_U1230._fU0, l_U1230._fU4, l_U1230._fU8 );
                    SET_CHAR_HEADING( l_U1124, l_U1080 );
                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                    TASK_PLAY_ANIM( 0, "inj_rside_idle", "MISSBERNIE1", 9999.00000000, 1, 1, 1, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U1132 );
                    TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                    CLEAR_SEQUENCE_TASK( l_U1132 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1125 );
                    SET_CHAR_COORDINATES( l_U1125, -252.22820000, 956.71770000, 2.41760000 );
                    SET_CHAR_HEADING( l_U1125, 289.27010000 );
                    ADD_BLIP_FOR_CHAR( l_U1125, ref l_U1047 );
                }
                CLEAR_AREA_OF_CARS( l_U1239._fU0, l_U1239._fU4, l_U1239._fU8, 100.00000000 );
                CREATE_CAR( -1842748181, l_U1239._fU0, l_U1239._fU4, l_U1239._fU8, ref l_U1135[0], 1 );
                SET_CAR_HEADING( l_U1135[0], 264.94700000 );
                SET_NEEDS_TO_BE_HOTWIRED( l_U1135[0], 0 );
                CREATE_CAR( -1842748181, -231.57120000, 953.01970000, 9.67800000, ref l_U1135[1], 1 );
                SET_CAR_HEADING( l_U1135[1], 256.42190000 );
                SET_NEEDS_TO_BE_HOTWIRED( l_U1135[1], 0 );
                CREATE_CAR( -1842748181, -215.20580000, 943.42770000, 9.82660000, ref l_U1135[2], 1 );
                SET_CAR_HEADING( l_U1135[2], 337.67560000 );
                SET_NEEDS_TO_BE_HOTWIRED( l_U1135[2], 0 );
                CREATE_CAR( -1842748181, -217.19870000, 943.34050000, 9.82830000, ref l_U1135[3], 1 );
                SET_CAR_HEADING( l_U1135[3], 326.06560000 );
                SET_NEEDS_TO_BE_HOTWIRED( l_U1135[3], 0 );
                CREATE_CHAR( 4, -1775659292, -231.14970000, 954.09620000, 10.02360000, ref l_U1126[0], 1 );
                SET_CHAR_HEADING( l_U1126[0], 128.22590000 );
                CREATE_CHAR( 5, -292713088, -232.39870000, 954.05860000, 10.03280000, ref l_U1126[1], 1 );
                SET_CHAR_HEADING( l_U1126[1], 285.51320000 );
                CREATE_CHAR( 4, -1775659292, -217.54470000, 941.49070000, 10.84940000, ref l_U1126[2], 1 );
                SET_CHAR_HEADING( l_U1126[2], 273.94820000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1126[2], 1 );
                CREATE_CHAR( 5, -292713088, -216.56780000, 941.05070000, 10.84810000, ref l_U1126[3], 1 );
                SET_CHAR_HEADING( l_U1126[3], 77.30220000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1775659292 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -292713088 );
                TASK_CHAT_WITH_CHAR( l_U1126[0], l_U1126[1], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U1126[1], l_U1126[0], 0, 1 );
                TASK_CHAT_WITH_CHAR( l_U1126[2], l_U1126[3], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U1126[3], l_U1126[2], 0, 1 );
                SET_CHAR_DECISION_MAKER( l_U1126[1], l_U1071 );
                SET_COMBAT_DECISION_MAKER( l_U1126[1], l_U1074 );
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                    TASK_PLAY_ANIM( 0, "run", "move_m@generic", 9999.00000000, 0, 1, 1, 0, -1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, l_U1227._fU0, l_U1227._fU4, l_U1227._fU8, 4, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1132 );
                    TASK_PERFORM_SEQUENCE( l_U1125, l_U1132 );
                    CLEAR_SEQUENCE_TASK( l_U1132 );
                }
                SET_CHAR_COORDINATES( sub_3164(), -243.71120000, 939.69400000, 2.77720000 );
                SET_CHAR_HEADING( sub_3164(), 44.44940000 );
                SET_PLAYER_CONTROL( sub_3094(), 1 );
                SETTIMERA( 0 );
                l_U1089 = -10000.00000000;
                l_U1098 = 0;
                l_U1099 = 0;
                l_U1096 = 0;
                l_U1100 = 0;
                l_U1093 = 0;
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_10542( 0, 1, 0 );
                }
                else
                {
                    sub_10542( 500, 1, 0 );
                }
                sub_13762( "BC1_M04", 0 );
                SET_WANTED_MULTIPLIER( 0.30000000 );
                sub_35462( 2 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                for ( I = 0; I < 4; I++ )
                {
                    if (NOT l_U1064[I])
                    {
                        if (sub_7647( l_U1135[I] ))
                        {
                            l_U1064[I] = 1;
                        }
                    }
                }
                if (l_U1049)
                {
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_ANIM_GROUP_FOR_CHAR( l_U1124, "move_m@roman_inj" );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1124, 1 );
                        SET_CHAR_COORDINATES( l_U1124, l_U1230._fU0, l_U1230._fU4, l_U1230._fU8 );
                        SET_CHAR_HEADING( l_U1124, l_U1080 );
                        OPEN_SEQUENCE_TASK( ref l_U1132 );
                        TASK_PLAY_ANIM( 0, "inj_rside_idle", "MISSBERNIE1", 9999.00000000, 1, 1, 1, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1132 );
                        TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                        CLEAR_SEQUENCE_TASK( l_U1132 );
                    }
                    l_U1049 = 0;
                }
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    switch (l_U1093)
                    {
                        case 0:
                        if ((NOT sub_12941()) AND (l_U1077 > 10000.00000000))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 2.00000000, 2.00000000, 2.00000000, 0 ))
                            {
                                if (sub_11170( "BC1_BPAIN", ref l_U125, 6, 1 ))
                                {
                                    l_U1077 = 0.00000000;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_ON_SCREEN( l_U1124 )))
                        {
                            if (NOT (sub_16295( -304.53970000, 916.03060000, 13.38010000, 5.00000000, 1120403456 )))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 40.00000000, 40.00000000, 40.00000000, 0 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                                    SET_CHAR_COORDINATES( l_U1124, -304.53970000, 916.03060000, 13.38010000 );
                                    SET_CHAR_HEADING( l_U1124, 173.00000000 );
                                    l_U1093++;
                                }
                            }
                        }
                        break;
                        case 1:
                        bVar5 = false;
                        if (NOT (IS_CHAR_INJURED( l_U1125 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, l_U1125, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                bVar5 = true;
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_3094() ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, sub_3164(), 35.00000000, 35.00000000, 35.00000000, 0 ))
                            {
                                bVar5 = true;
                            }
                        }
                        if (bVar5)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1132 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -309.41240000, 914.49800000, 13.10020000, 3, -1, 2.00000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3164() );
                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "wave", "misspass", 4.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U1132 );
                            TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                            CLEAR_SEQUENCE_TASK( l_U1132 );
                            if (NOT (IS_CHAR_INJURED( l_U1125 )))
                            {
                                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1125, 1 );
                            }
                            sub_18435( ref l_U125, 0 );
                            CLEAR_PRINTS();
                            l_U1062 = 0;
                            l_U1093++;
                        }
                        break;
                        case 2:
                        if (DOES_BLIP_EXIST( l_U1047 ))
                        {
                            REMOVE_BLIP( l_U1047 );
                        }
                        if (sub_36547( l_U1124, "BC1_M07", 0, 0, 1 ))
                        {
                            if (NOT sub_12941())
                            {
                                if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar4 );
                                    if (IS_VEH_DRIVEABLE( uVar4 ))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U1124, uVar4 )))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, sub_3164(), 15.00000000, 15.00000000, 15.00000000, 0 ))
                                            {
                                                if (sub_11170( "BC1_SCOOT", ref l_U125, 6, 1 ))
                                                {
                                                    l_U1077 = 0.00000000;
                                                    l_U1069 = 0;
                                                    l_U1093++;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, sub_3164(), 15.00000000, 15.00000000, 15.00000000, 0 ))
                                {
                                    l_U1069 = 0;
                                    l_U1093++;
                                }
                            }
                        }
                        break;
                        case 3:
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            bVar5 = true;
                            if (bVar5)
                            {
                                l_U1051 = 1;
                                if (DOES_BLIP_EXIST( l_U1048 ))
                                {
                                    REMOVE_BLIP( l_U1048 );
                                }
                                if (NOT l_U1057)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                                    {
                                        GET_CHAR_HEALTH( l_U1125, ref I );
                                        if (I > 200)
                                        {
                                            SET_CHAR_MAX_HEALTH( l_U1125, 200 );
                                            SET_CHAR_HEALTH( l_U1125, 200 );
                                        }
                                    }
                                    l_U1057 = 1;
                                }
                                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                                {
                                    if (NOT (DOES_BLIP_EXIST( l_U1047 )))
                                    {
                                        ADD_BLIP_FOR_CHAR( l_U1125, ref l_U1047 );
                                        l_U1069 = 0;
                                    }
                                    if (NOT l_U1069)
                                    {
                                        if (NOT sub_12941())
                                        {
                                            sub_13762( "BC1_M04", 0 );
                                            l_U1069 = 1;
                                        }
                                    }
                                }
                                if ((l_U1085 > 20000.00000000) AND (l_U1069))
                                {
                                    if (NOT sub_12941())
                                    {
                                        if (sub_37135( l_U1124, sub_3164() ))
                                        {
                                            switch (l_U1105)
                                            {
                                                case 0:
                                                if (l_U1098 < l_U1116)
                                                {
                                                    if (sub_17438( "BC1_BANT3", l_U1098, 1, ref l_U125, 6, 1 ))
                                                    {
                                                        l_U1098++;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U1105++;
                                                    l_U1098 = 0;
                                                    l_U1085 = 0.00000000;
                                                }
                                                break;
                                                case 1:
                                                if (l_U1098 < l_U1117)
                                                {
                                                    if (sub_17438( "BC1_BANT4", l_U1098, 1, ref l_U125, 6, 1 ))
                                                    {
                                                        l_U1098++;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U1105++;
                                                    l_U1098 = 0;
                                                    l_U1085 = 0.00000000;
                                                }
                                                break;
                                            }
                                        }
                                    }
                                }
                                if (((((IS_GROUP_MEMBER( l_U1124, sub_9551() )) AND (NOT sub_12941())) AND (l_U1077 > 10000.00000000)) AND (sub_14954( 1, 1 ))) AND (l_U1069))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                                    {
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 100.00000000, 100.00000000, 50.00000000, 0 )))
                                        {
                                            if (sub_11170( "BC1_ESCAPE", ref l_U125, 6, 1 ))
                                            {
                                                l_U1077 = 0.00000000;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U1051 = 0;
                                if (NOT (DOES_BLIP_EXIST( l_U1048 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U1124, ref l_U1048 );
                                    SET_BLIP_AS_FRIENDLY( l_U1048, 1 );
                                }
                                if (DOES_BLIP_EXIST( l_U1047 ))
                                {
                                    REMOVE_BLIP( l_U1047 );
                                }
                            }
                        }
                        break;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1125 )))
                    {
                        if (IS_GROUP_MEMBER( l_U1124, sub_9551() ))
                        {
                            if (NOT l_U1060)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1125 )))
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3164() )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                        {
                                            if (sub_11170( "BC1_NGO", ref l_U125, 6, 1 ))
                                            {
                                                l_U1060 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                            else if (IS_CHAR_IN_ANY_CAR( l_U1125 ))
                            {
                                l_U1060 = 0;
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    switch (l_U1094)
                    {
                        case 2:
                        switch (l_U1095)
                        {
                            case 0:
                            GET_SCRIPT_TASK_STATUS( l_U1125, 29, ref l_U1131 );
                            if (l_U1131 == 7)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1125, l_U1227._fU0, l_U1227._fU4, l_U1227._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, l_U1227._fU0, l_U1227._fU4, l_U1227._fU8, 4, -1, 1.00000000 );
                                    CLOSE_SEQUENCE_TASK( l_U1132 );
                                    TASK_PERFORM_SEQUENCE( l_U1125, l_U1132 );
                                    CLEAR_SEQUENCE_TASK( l_U1132 );
                                }
                            }
                            MODIFY_CHAR_MOVE_STATE( l_U1125, 4 );
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U1125, l_U1227._fU0, l_U1227._fU4, l_U1227._fU8, 0.70000000, 0.70000000, 2.00000000, 0 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U1135[0] ))
                                {
                                    if (LOCATE_CAR_3D( l_U1135[0], l_U1239._fU0, l_U1239._fU4, l_U1239._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR( l_U1125, l_U1135[0] );
                                        l_U1076 = 1000.00000000;
                                        sub_38348( ref l_U1135[0], 1200, l_U1076, 1, 0, 0 );
                                        l_U1095++;
                                        SETTIMERA( 0 );
                                        break;
                                    }
                                }
                                sub_35462( 4 );
                            }
                            break;
                            case 1:
                            bVar5 = false;
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 4.00000000, 4.00000000, 1.00000000, 0 ))
                            {
                                bVar5 = true;
                            }
                            if (TIMERA() > 5000)
                            {
                                bVar5 = true;
                            }
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1125, sub_3164(), 0 ))
                            {
                                bVar5 = true;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_3094(), l_U1125 ))
                            {
                                bVar5 = true;
                            }
                            if (bVar5)
                            {
                                sub_35462( 3 );
                            }
                            break;
                        }
                        break;
                        case 3:
                        switch (l_U1095)
                        {
                            case 0:
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U1125 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U1135[0] ))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( l_U1125, l_U1135[0] ))
                                    {
                                        l_U1054 = 1;
                                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1135[0] )))
                                        {
                                            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                                            sub_35462( 4 );
                                        }
                                        else
                                        {
                                            SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U1125, 1 );
                                            l_U1076 = FIND_TIME_POSITION_IN_RECORDING( l_U1135[0] );
                                            if (l_U1076 < 20000)
                                            {
                                                sub_39073( l_U1135[0], sub_3164(), ref l_U1075, 0.90000000, 5.00000000, 20.00000000, 150.00000000, 1.50000000, 1065353216, 1060320051, 1 );
                                            }
                                            else
                                            {
                                                sub_39073( l_U1135[0], sub_3164(), ref l_U1075, 1.10000000, 5.00000000, 20.00000000, 100.00000000, 1.50000000, 1065353216, 1060320051, 1 );
                                            }
                                            SET_PLAYBACK_SPEED( l_U1135[0], l_U1075 );
                                            sub_42209( l_U1135[0], l_U1075 );
                                        }
                                    }
                                    else
                                    {
                                        sub_35462( 4 );
                                    }
                                }
                                else
                                {
                                    sub_35462( 4 );
                                }
                            }
                            else
                            {
                                sub_35462( 4 );
                            }
                            break;
                            default:
                        }
                        break;
                        case 4:
                        switch (l_U1095)
                        {
                            case 0:
                            if (NOT (IS_CAR_DEAD( l_U1135[0] )))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1135[0] ))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1135[0] );
                                }
                            }
                            sub_57369( 0 );
                            SWITCH_ROADS_BACK_TO_ORIGINAL( -376.21950000, 938.21280000, 6.87970000, -350.41950000, 1115.33800000, 27.40480000 );
                            l_U1095++;
                            break;
                            case 1:
                            if (l_U1086 < 180000.00000000)
                            {
                                if (IS_CHAR_SITTING_IN_ANY_CAR( l_U1125 ))
                                {
                                    SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U1125, 0 );
                                    SET_DRIVE_TASK_CRUISE_SPEED( l_U1125, 40.00000000 );
                                }
                                GET_SCRIPT_TASK_STATUS( l_U1125, 48, ref l_U1131 );
                                if (l_U1131 == 7)
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U1125, 58, ref l_U1131 );
                                    if (l_U1131 == 7)
                                    {
                                        TASK_FLEE_CHAR_ANY_MEANS( l_U1125, sub_3164(), 250.00000000, 999999, 0, 0, 0, 30.00000000 );
                                    }
                                    else if (IS_CHAR_IN_ANY_CAR( l_U1125 ))
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1125, ref uVar4 );
                                        if (CHECK_STUCK_TIMER( uVar4, 3, 3000 ))
                                        {
                                            l_U1095++;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U1095++;
                            }
                            break;
                            case 2:
                            GET_SCRIPT_TASK_STATUS( l_U1125, 29, ref l_U1131 );
                            if (l_U1131 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U1132 );
                                if (IS_CHAR_IN_ANY_CAR( l_U1125 ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                TASK_SMART_FLEE_CHAR( 0, sub_3164(), 999.90000000, -1 );
                                CLOSE_SEQUENCE_TASK( l_U1132 );
                                TASK_PERFORM_SEQUENCE( l_U1125, l_U1132 );
                                CLEAR_SEQUENCE_TASK( l_U1132 );
                            }
                            MODIFY_CHAR_MOVE_STATE( l_U1125, 4 );
                            break;
                        }
                        break;
                    }
                    if (l_U1054)
                    {
                        if (NOT l_U1052)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1126[0] )))
                            {
                                TASK_GOTO_CHAR_OFFSET( l_U1126[0], l_U1125, 999999, 2.00000000, 180.00000000 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U1126[1] )))
                            {
                                TASK_SMART_FLEE_CHAR( l_U1126[1], l_U1125, 999.00000000, 9999 );
                            }
                            l_U1052 = 1;
                        }
                        else
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (DOES_CHAR_EXIST( l_U1126[I] ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1126[I] )))
                                    {
                                        if (I == 0)
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U1126[0], 43, ref l_U1131 );
                                            if (l_U1131 == 7)
                                            {
                                                TASK_GOTO_CHAR_OFFSET( l_U1126[0], l_U1125, 999999, 2.00000000, 180.00000000 );
                                            }
                                        }
                                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1126[I], 40.00000000, 40.00000000, 40.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1126[I] ))))
                                        {
                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[I] );
                                            l_U1126[I] = nil;
                                        }
                                    }
                                    else
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[I] );
                                        l_U1126[I] = nil;
                                    }
                                }
                            }
                        }
                    }
                    if (l_U1055)
                    {
                        if (NOT l_U1053)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1126[2] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U1126[2], "JACKED_ON_STREET", 1, 1, 0 );
                                TASK_COMBAT( l_U1126[2], sub_3164() );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U1126[3] )))
                            {
                                TASK_SMART_FLEE_CHAR( l_U1126[3], sub_3164(), 999.00000000, 9999 );
                            }
                            l_U1053 = 1;
                        }
                        else if (DOES_CHAR_EXIST( l_U1126[2] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1126[2] )))
                            {
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1126[2], 40.00000000, 40.00000000, 40.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1126[2] ))))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[2] );
                                    l_U1126[2] = nil;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[2] );
                                l_U1126[2] = nil;
                            }
                        }
                        if (DOES_CHAR_EXIST( l_U1126[3] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1126[3] )))
                            {
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1126[3], 40.00000000, 40.00000000, 40.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1126[3] ))))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[3] );
                                    l_U1126[3] = nil;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1126[3] );
                                l_U1126[3] = nil;
                            }
                        }
                    }
                    else if (NOT (IS_CAR_DEAD( l_U1135[2] )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( sub_3164(), l_U1135[2] ))
                        {
                            l_U1055 = 1;
                        }
                    }
                    if (NOT (IS_CAR_DEAD( l_U1135[3] )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( sub_3164(), l_U1135[3] ))
                        {
                            l_U1055 = 1;
                        }
                    }
                }
                l_U1050 = 0;
                if (NOT (IS_CHAR_INJURED( l_U1125 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U1125 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1125, ref l_U1140 );
                        if (IS_VEH_DRIVEABLE( l_U1140 ))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1140 ))
                            {
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 125.00000000, 125.00000000, 125.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1125 ))))
                                {
                                    l_U1050 = 1;
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 300.00000000, 300.00000000, 300.00000000, 0 )))
                                {
                                    l_U1050 = 1;
                                }
                            }
                            else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 200.00000000, 200.00000000, 200.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1125 ))))
                            {
                                l_U1050 = 1;
                            }
                            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 300.00000000, 300.00000000, 300.00000000, 0 )))
                            {
                                l_U1050 = 1;
                            };;;
                        }
                    }
                    else if (sub_25461( l_U1125 ))
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 100.00000000, 100.00000000, 100.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1125 ))))
                        {
                            l_U1050 = 1;
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 300.00000000, 300.00000000, 300.00000000, 0 )))
                        {
                            l_U1050 = 1;
                        }
                    }
                    else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 200.00000000, 200.00000000, 200.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U1125 ))))
                    {
                        l_U1050 = 1;
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1125, 300.00000000, 300.00000000, 300.00000000, 0 )))
                    {
                        l_U1050 = 1;
                    };;;;
                }
                if ((NOT sub_12941()) AND (l_U1089 > 15000.00000000))
                {
                    if (NOT l_U1051)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1125 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1125, sub_3164(), 10.00000000, 10.00000000, 0 ))
                            {
                                if (l_U1106 < 5)
                                {
                                    if (sub_11170( "BC1_CHASE1", ref l_U125, 6, 1 ))
                                    {
                                        l_U1106++;
                                        l_U1089 = 0.00000000;
                                    }
                                }
                                else if (l_U1107 < 6)
                                {
                                    if (sub_11170( "BC1_CHASE2", ref l_U125, 6, 1 ))
                                    {
                                        l_U1107++;
                                        l_U1089 = 0.00000000;
                                    }
                                }
                            }
                        }
                    }
                    else if ((NOT (IS_CHAR_INJURED( l_U1124 ))) AND (NOT (IS_CHAR_INJURED( l_U1125 ))))
                    {
                        if ((IS_CHAR_IN_AREA_3D( l_U1124, -298.91180000, 722.85930000, -1.94510000, -272.01180000, 767.53430000, 17.75490000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 20.00000000, 20.00000000, 0 )))
                        {
                            sub_11170( "BC1_CAFE", ref l_U125, 6, 1 );
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1125, sub_3164(), 20.00000000, 20.00000000, 0 ))
                        {
                            if ((IS_GROUP_MEMBER( l_U1124, sub_9551() )) || (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U1124, sub_3164(), 20.00000000, 20.00000000, 0 )))
                            {
                                if (NOT (IS_CHAR_ON_FOOT( l_U1124 )))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                    switch (I)
                                    {
                                        case 0:
                                        if (l_U1108 < 5)
                                        {
                                            if (sub_11170( "BC1_BOTH", ref l_U125, 6, 1 ))
                                            {
                                                l_U1108++;
                                                l_U1089 = 0.00000000;
                                            }
                                        }
                                        break;
                                        case 1:
                                        if (l_U1109 < 5)
                                        {
                                            if (sub_11170( "BC1_BCHASE", ref l_U125, 6, 1 ))
                                            {
                                                l_U1109++;
                                                l_U1089 = 0.00000000;
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (l_U1110 < 10)
                                        {
                                            if (sub_11170( "BC1_BCHASE2", ref l_U125, 6, 1 ))
                                            {
                                                l_U1110++;
                                                l_U1089 = 0.00000000;
                                            }
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((l_U1083 > 5000.00000000) AND (sub_14954( 1, 1 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U1135[0] ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U1135[0] )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1135[0] ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1135[0] );
                            }
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1135[0] );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U1125 ))
                    {
                        DELETE_CHAR( ref l_U1125 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        bVar5 = false;
                        if (l_U1093 > 1)
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 30.00000000, 30.00000000, 3.00000000, 0 )) || (sub_61054( l_U1124 )))
                            {
                                bVar5 = true;
                            }
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), l_U1124, 30.00000000, 30.00000000, 3.00000000, 0 ))
                        {
                            bVar5 = true;
                        }
                        if (bVar5)
                        {
                            if (sub_17438( "BC1_FAIL", 0, 1, ref l_U125, 6, 1 ))
                            {
                                l_U1133 = "BC1_F03";
                                sub_5616( 10, 0 );
                            }
                        }
                        else
                        {
                            DELETE_CHAR( ref l_U1124 );
                            sub_24809();
                            sub_24894( "BC1_F03" );
                            sub_5616( 9, 0 );
                        }
                    }
                }
                break;
            }
            if (l_U98 == 6)
            {
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    if (DOES_CHAR_EXIST( l_U1125 ))
                    {
                        DELETE_CHAR( ref l_U1125 );
                    }
                }
                bVar5 = false;
                if (DOES_CHAR_EXIST( l_U1125 ))
                {
                    if (IS_CHAR_INJURED( l_U1125 ))
                    {
                        bVar5 = true;
                    }
                }
                else
                {
                    bVar5 = true;
                }
                if (bVar5)
                {
                    if (DOES_BLIP_EXIST( l_U1047 ))
                    {
                        REMOVE_BLIP( l_U1047 );
                    }
                    if (DOES_BLIP_EXIST( l_U1048 ))
                    {
                        REMOVE_BLIP( l_U1048 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1135[0] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1135[0] ))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1135[0] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        SET_ANIM_GROUP_FOR_CHAR( l_U1124, "move_m@bernie" );
                        REMOVE_ANIMS( "move_m@roman_inj" );
                    }
                    sub_5616( 12, 1 );
                }
            }
            if (NOT (l_U98 == 6))
            {
                sub_3435();
                sub_57369( 0 );
            }
            break;
            case 12:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    CLEAR_CHAR_TASKS( l_U1124 );
                }
                SET_WANTED_MULTIPLIER( 1.00000000 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (sub_36547( l_U1124, "BC1_M07", 0, 0, 0 ))
                {
                    l_U1100 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (l_U1100 < 2)
                {
                    if (NOT sub_12941())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1124, sub_3164(), 10.00000000, 10.00000000, 10.00000000, 0 ))
                            {
                                if (sub_17438( "BC1_PANIC", l_U1100, 1, ref l_U125, 6, 1 ))
                                {
                                    l_U1100++;
                                }
                            }
                        }
                    }
                }
                if (sub_12236( 11.22700000, -650.86600000, 16.05800000, 2.50000000, 2.50000000, 2.50000000, 1, l_U1124, "BC1_M10", "BC1_M11", 0, 0, 0 ))
                {
                    sub_5616( 13, 1 );
                }
                else
                {
                    sub_16660( l_U1124 );
                }
                break;
            }
            break;
            case 10:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_24809();
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U1124, sub_3164() );
                }
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 ))))
                {
                    if (NOT (COMPARE_STRING( l_U1133, "" )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U1124 )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_GOTO_CHAR_OFFSET( l_U1124, sub_3164(), 99999, 2.00000000, 0.00000000 );
                            }
                        }
                        sub_13762( l_U1133, 0 );
                        l_U1133 = "";
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                    else
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 2:
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 ))))
                {
                    if (DOES_CHAR_EXIST( l_U1124 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            sub_24809();
                            sub_24894( l_U1133 );
                            sub_5616( 7, 0 );
                        }
                    }
                    else
                    {
                        sub_3085();
                    }
                }
                break;
            }
            break;
            case 13:
            sub_19278( ref l_U111, l_U1124, 3.00000000, 5.00000000 );
            sub_17934();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_24809();
                REQUEST_ANIMS( "gestures@niko" );
                REQUEST_ANIMS( "move_m@bernie" );
                if (NOT (IS_CHAR_DEAD( l_U1124 )))
                {
                    SET_CHAR_PROOFS( l_U1124, 1, 1, 1, 1, 1 );
                }
                while (NOT (HAVE_ANIMS_LOADED( "move_m@bernie" )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    SET_ANIM_GROUP_FOR_CHAR( l_U1124, "move_m@bernie" );
                    REMOVE_ANIMS( "move_m@roman_inj" );
                }
                if (sub_14954( 1, 1 ))
                {
                    if (DOES_CHAR_EXIST( l_U1124 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                SET_PLAYER_CONTROL( sub_3094(), 0 );
                                sub_18342( 1, 1 );
                                REMOVE_CHAR_FROM_GROUP( l_U1124 );
                                CREATE_CAM( 14, ref l_U111 );
                                SET_CAM_POS( l_U111, 30.40126000, -650.66190000, 16.41762000 );
                                SET_CAM_ROT( l_U111, -1.91658100, 0.00000000, 101.31500000 );
                                SET_CAM_FOV( l_U111, 21.00000000 );
                                SET_CAM_ACTIVE( l_U111, 1 );
                                SET_CAM_PROPAGATE( l_U111, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                {
                                    if (IS_CHAR_ON_ANY_BIKE( l_U1124 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U1132 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 11.48000000, -653.84140000, 14.76950000, 2, 10000, 2.50000000 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3164() );
                                        TASK_LOOK_AT_CHAR( 0, sub_3164(), -2, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U1132 );
                                        TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                                        CLEAR_SEQUENCE_TASK( l_U1132 );
                                        TASK_LOOK_AT_CHAR( sub_3164(), l_U1124, -2, 0 );
                                    }
                                    else
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U1132 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 11.48000000, -653.84140000, 14.76950000, 2, 10000, 2.50000000 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3164() );
                                        TASK_LOOK_AT_CHAR( 0, sub_3164(), -2, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U1132 );
                                        TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                                        CLEAR_SEQUENCE_TASK( l_U1132 );
                                        OPEN_SEQUENCE_TASK( ref l_U1132 );
                                        TASK_LOOK_AT_CHAR( 0, l_U1124, -2, 0 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1124 );
                                        CLOSE_SEQUENCE_TASK( l_U1132 );
                                        TASK_PERFORM_SEQUENCE( sub_3164(), l_U1132 );
                                        CLEAR_SEQUENCE_TASK( l_U1132 );
                                    }
                                }
                                SETTIMERA( 0 );
                                l_U1098 = 0;
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                        else
                        {
                            sub_3085();
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( sub_3164() )))
                    {
                        GET_CHAR_COORDINATES( sub_3164(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    }
                    sub_7841( 18, ref l_U1124, uVar7._fU0, uVar7._fU4, uVar7._fU8 + 20.00000000, 0.00000000 );
                    sub_9719( 1, l_U1124, "BERNIE", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U1124, "BERNIE" );;
                }
                break;
                case 1:
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 ))))
                {
                    if (l_U1098 < l_U1118)
                    {
                        if (sub_17438( "BC1_PASS", l_U1098, 1, ref l_U125, 6, 1 ))
                        {
                            l_U1098++;
                        }
                    }
                    else
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U1124 );
                    TASK_CLEAR_LOOK_AT( sub_3164() );
                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                    if (IS_CHAR_IN_ANY_CAR( l_U1124 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 10.72620000, -667.53580000, 14.86650000, 2, 10000, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1132 );
                    TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                    CLEAR_SEQUENCE_TASK( l_U1132 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U1124, 29, ref l_U1131 );
                    if ((((NOT (IS_CHAR_ON_SCREEN( l_U1124 ))) || (TIMERA() > 7000)) || (l_U1131 == 7)) || (IS_CHAR_IN_AREA_3D( l_U1124, 7.78940000, -666.69600000, 13.76950000, 13.91440000, -659.67100000, 16.76950000, 0 )))
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        SETTIMERA( 0 );
                    }
                }
                break;
                case 4:
                if (TIMERA() > 500)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    sub_10542( 0, 1, 0 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_10542( 0, 1, 0 );
                }
                if (DOES_CHAR_EXIST( l_U1124 ))
                {
                    DELETE_CHAR( ref l_U1124 );
                }
                REMOVE_ANIMS( "gestures@niko" );
                if (IS_PLAYER_PLAYING( sub_3094() ))
                {
                    TASK_CLEAR_LOOK_AT( sub_3164() );
                    CLEAR_CHAR_TASKS( sub_3164() );
                    SET_PLAYER_CONTROL( sub_3094(), 1 );
                    SET_CAM_BEHIND_PED( sub_3164() );
                }
                sub_64017();
                break;
            }
            break;
            case 7:
            sub_19278( ref l_U111, l_U1124, 3.00000000, 5.00000000 );
            sub_17934();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_24809();
                if (NOT (IS_CHAR_DEAD( l_U1124 )))
                {
                    SET_CHAR_PROOFS( l_U1124, 1, 1, 1, 1, 1 );
                }
                if ((sub_14954( 1, 1 )) AND (IS_SCREEN_FADED_IN()))
                {
                    if (DOES_CHAR_EXIST( l_U1124 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1124 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                sub_18342( 1, 0 );
                                SET_PLAYER_CONTROL( sub_3094(), 0 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                DO_SCREEN_FADE_OUT( 1000 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U1124 );
                                }
                                sub_3717();
                                sub_18342( 1, 1 );
                                l_U1141 = nil;
                                if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref l_U1141 );
                                }
                                if (NOT (DOES_VEHICLE_EXIST( l_U1141 )))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_3164(), ref l_U1141 );
                                }
                                if (NOT (DOES_VEHICLE_EXIST( l_U1141 )))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U1134 ))
                                    {
                                        l_U1141 = l_U1134;
                                    }
                                }
                                if (NOT (IS_VEH_DRIVEABLE( l_U1141 )))
                                {
                                    l_U1141 = nil;
                                }
                                if (NOT (sub_76150( l_U1141 )))
                                {
                                    l_U1141 = nil;
                                }
                                if (NOT (DOES_VEHICLE_EXIST( l_U1141 )))
                                {
                                    REQUEST_MODEL( -1842748181 );
                                    while (NOT (HAS_MODEL_LOADED( -1842748181 )))
                                    {
                                        WAIT( 0 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( sub_3164() )))
                                    {
                                        GET_CHAR_COORDINATES( sub_3164(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                    }
                                    CREATE_CAR( -1842748181, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref l_U1141, 1 );
                                }
                                if (NOT (IS_CHAR_INJURED( sub_3164() )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1124 );
                                }
                                sub_15514( l_U1141 );
                                if (IS_VEH_DRIVEABLE( l_U1141 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_3164() )))
                                    {
                                        WARP_CHAR_INTO_CAR( sub_3164(), l_U1141 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1124, l_U1141, 0 );
                                    }
                                }
                                if (IS_VEH_DRIVEABLE( l_U1141 ))
                                {
                                    SET_CAR_HEADING( l_U1141, 350.00000000 );
                                    SET_CAR_COORDINATES( l_U1141, -545.42840000, 811.55250000, 8.73620000 );
                                    SET_CAR_ENGINE_ON( l_U1141, 1, 1 );
                                }
                                sub_76617();
                                l_U1056 = 0;
                                while (NOT l_U1056)
                                {
                                    if (sub_7647( l_U1141 ))
                                    {
                                        l_U1056 = 1;
                                    }
                                    else
                                    {
                                        WAIT( 0 );
                                    }
                                }
                                CLEAR_AREA( -545.42840000, 811.55250000, 8.73620000, 50.00000000, 1 );
                                LOAD_ALL_OBJECTS_NOW();
                                CREATE_CAM( 14, ref l_U111 );
                                SET_CAM_POS( l_U111, -541.03850000, 808.99570000, 11.27137000 );
                                SET_CAM_ROT( l_U111, -3.44173500, -0.00000000, 7.53378200 );
                                SET_CAM_FOV( l_U111, 30.30004000 );
                                SET_CAM_ACTIVE( l_U111, 1 );
                                SET_CAM_PROPAGATE( l_U111, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                if (IS_VEH_DRIVEABLE( l_U1141 ))
                                {
                                    SET_CAR_ENGINE_ON( l_U1141, 1, 1 );
                                    SET_CAR_FORWARD_SPEED( l_U1141, 5.00000000 );
                                    TASK_CAR_DRIVE_TO_COORD( sub_3164(), 0, -541.89150000, 822.33980000, 8.98260000, 5.00000000, 0, 0, 3, 2, 10 );
                                }
                                sub_77022( l_U111 );
                                DO_SCREEN_FADE_IN( 1000 );
                                while (NOT IS_SCREEN_FADED_IN())
                                {
                                    WAIT( 0 );
                                }
                                SETTIMERA( 0 );
                                l_U1098 = 0;
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                        else
                        {
                            sub_3085();
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( sub_3164() )))
                    {
                        GET_CHAR_COORDINATES( sub_3164(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    }
                    sub_7841( 18, ref l_U1124, uVar7._fU0, uVar7._fU4, uVar7._fU8 + 20.00000000, 0.00000000 );
                    sub_9719( 1, l_U1124, "BERNIE", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U1124, "BERNIE" );;
                }
                break;
                case 1:
                bVar5 = false;
                GET_SCRIPT_TASK_STATUS( sub_3164(), 15, ref l_U1131 );
                if (l_U1131 == 7)
                {
                    bVar5 = true;
                }
                if (TIMERA() > 5000)
                {
                    bVar5 = true;
                }
                if (bVar5)
                {
                    if (NOT (IS_CHAR_INJURED( sub_3164() )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1141 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_3164(), l_U1141, 6, 99999999 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1124 )))
                    {
                        if (IS_CHAR_ON_ANY_BIKE( l_U1124 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1132 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -538.80220000, 821.86600000, 8.55420000, 2, 10000, 2.50000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3164() );
                            TASK_LOOK_AT_CHAR( 0, sub_3164(), -2, 0 );
                            CLOSE_SEQUENCE_TASK( l_U1132 );
                            TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                            CLEAR_SEQUENCE_TASK( l_U1132 );
                            TASK_LOOK_AT_CHAR( sub_3164(), l_U1124, -2, 0 );
                        }
                    }
                    l_U1098 = 1;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_12963( l_U125 ))))
                {
                    if (l_U1098 < l_U1119)
                    {
                        if (sub_17438( "BC1_FAIL", l_U1098, 1, ref l_U125, 6, 1 ))
                        {
                            l_U1098++;
                        }
                    }
                    else
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1132 );
                    if (IS_CHAR_IN_ANY_CAR( l_U1124 ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -535.43480000, 820.86690000, 9.94910000, 2, 10000, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1132 );
                    TASK_PERFORM_SEQUENCE( l_U1124, l_U1132 );
                    CLEAR_SEQUENCE_TASK( l_U1132 );
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( l_U1124 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U1124, 29, ref l_U1131 );
                    if (((NOT (IS_CHAR_ON_SCREEN( l_U1124 ))) || (TIMERA() > 20000)) || (l_U1131 == 7))
                    {
                        ProtectedSet(l_U99, 99);
                    }
                }
                break;
                case 99:
                if (l_U102)
                {
                    if (IS_VEH_DRIVEABLE( l_U1141 ))
                    {
                        SET_CAR_HEADING( l_U1141, 343.99910000 );
                        SET_CAR_COORDINATES( l_U1141, -541.89150000, 822.33260000, 8.98200000 );
                        sub_7647( l_U1141 );
                    }
                    sub_10542( 0, 1, 0 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_10542( 0, 1, 0 );
                }
                if (DOES_CHAR_EXIST( l_U1124 ))
                {
                    DELETE_CHAR( ref l_U1124 );
                }
                if (IS_PLAYER_PLAYING( sub_3094() ))
                {
                    TASK_CLEAR_LOOK_AT( sub_3164() );
                    CLEAR_CHAR_TASKS( sub_3164() );
                    SET_PLAYER_CONTROL( sub_3094(), 1 );
                }
                sub_3085();
                break;
            }
            break;
            case 8:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_24809();
                    if (sub_78219( 18, "BC1_CALLF", "BC1AUD" ))
                    {
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 1:
                if (sub_82094( 0 ))
                {
                    sub_3085();
                }
                break;
            }
            break;
            case 9:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_24809();
                    if (sub_78219( 18, "BC1_GONE", "BC1AUD" ))
                    {
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 1:
                if (sub_82094( 0 ))
                {
                    sub_3085();
                }
                break;
            }
            break;
        }
        if (DOES_CHAR_EXIST( l_U1124 ))
        {
            if (IS_CHAR_INJURED( l_U1124 ))
            {
                sub_82544( 18, l_U1124, 18 );
                sub_24809();
                sub_24894( "BC1_F01" );
                sub_3085();
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            sub_24809();
            sub_24894( "" );
            sub_3085();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_64017();
        }
        sub_82670();
    }
    sub_3426();
    return;
}

void sub_975()
{
    sub_984();
    return;
}

void sub_984()
{
    int iVar2;

    iVar2 = 18;
    sub_998( iVar2 );
    sub_2174( iVar2 );
    return;
}

void sub_998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1042();
        sub_1203();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1311();
            sub_1350();
        }
    }
    sub_1426();
    sub_1527();
    uVar5 = sub_1640( uParam0 );
    sub_2081( uVar5, 0 );
    return;
}

void sub_1042()
{
    sub_1056( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1156();
    }
    return;
}

void sub_1056(int iParam0)
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

void sub_1156()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1203()
{
    sub_1212();
    return;
}

void sub_1212()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1311()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1350()
{
    sub_1359();
    return;
}

void sub_1359()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1426()
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

void sub_1527()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1549();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1549()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1640(unknown uParam0)
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
    sub_2039( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2039(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2081(int iParam0, boolean bParam1)
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

void sub_2174(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2183();
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
        sub_2958();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2183()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2221( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2221( 1, g_U569[I] )) != 0)
            {
                sub_2507( I );
            }
        }
    }
    if (NOT sub_2673())
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

int sub_2221(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2507(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2592( g_U569 - 1 );
    return;
}

void sub_2592(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2673()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2221( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2958()
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

void sub_3085()
{
    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_3094(), 150 );
            SAY_AMBIENT_SPEECH( sub_3164(), "MISSION_FAIL_RAGE", 1, 1, 0 );
        }
    }
    for ( l_U1120 = 0; l_U1120 < 4; l_U1120++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1135[l_U1120] ))
        {
            ADD_CAR_TO_MISSION_DELETION_LIST( l_U1135[l_U1120] );
        }
    }
    sub_3313();
    sub_3426();
    return;
}

void sub_3094()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3164()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3313()
{
    sub_3322();
    return;
}

void sub_3322()
{
    int iVar2;

    iVar2 = 18;
    sub_3336( iVar2 );
    sub_2174( iVar2 );
    return;
}

void sub_3336(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3094(), 150 );
    CLEAR_HELP();
    sub_998( uParam0 );
    return;
}

void sub_3426()
{
    sub_3435();
    SWITCH_ROADS_BACK_TO_ORIGINAL( -376.21950000, 938.21280000, 6.87970000, -350.41950000, 1115.33800000, 27.40480000 );
    RELEASE_WEATHER();
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        SET_PLAYER_CONTROL( sub_3094(), 1 );
    }
    sub_3698();
    if (l_U1059)
    {
        MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    CLEAR_NAMED_CUTSCENE( "BC_1" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3435()
{
    if (l_U1046)
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
    l_U1044 = 0;
    l_U1043 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3698()
{
    if (l_U103)
    {
        sub_3717();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_3985( ref l_U100 );
        l_U103 = 0;
    }
    return;
}

void sub_3717()
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

void sub_3985(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_4129(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4146();
    return;
}

void sub_4146()
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

void sub_4274()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    for ( I = 0; I < 28; I++ )
    {
        iVar3 = I + 1;
        if (iVar3 < 28)
        {
            if (l_U1142[I]._fU0 < l_U1142[iVar3]._fU0)
            {
                uVar4._fU0 = l_U1142[I]._fU0;
                uVar7._fU0 = l_U1142[iVar3]._fU0;
            }
            else
            {
                uVar4._fU0 = l_U1142[iVar3]._fU0;
                uVar7._fU0 = l_U1142[I]._fU0;
            }
            if (l_U1142[I]._fU4 < l_U1142[iVar3]._fU4)
            {
                uVar4._fU4 = l_U1142[I]._fU4;
                uVar7._fU4 = l_U1142[iVar3]._fU4;
            }
            else
            {
                uVar4._fU4 = l_U1142[iVar3]._fU4;
                uVar7._fU4 = l_U1142[I]._fU4;
            }
            if (l_U1142[I]._fU8 < l_U1142[iVar3]._fU8)
            {
                uVar4._fU8 = l_U1142[I]._fU8;
                uVar7._fU8 = l_U1142[iVar3]._fU8;
            }
            else
            {
                uVar4._fU8 = l_U1142[iVar3]._fU8;
                uVar7._fU8 = l_U1142[I]._fU8;
            }
            uVar4._fU0 += -3.00000000;
            uVar4._fU4 += -3.00000000;
            uVar4._fU8 += -3.00000000;
            uVar7._fU0 += 3.00000000;
            uVar7._fU4 += 3.00000000;
            uVar7._fU8 += 3.00000000;
            SWITCH_PED_PATHS_OFF( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8 );
        }
    }
    return;
}

void sub_4747(unknown uParam0, unknown uParam1)
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
    sub_4805( ref uVar5, uParam1, Result + 1, -1, -1 );
    ConcatString(ref uVar5, "A", 16);
    while (DOES_TEXT_LABEL_EXIST( ref uVar5 ))
    {
        Result++;
        sub_4805( ref uVar5, uParam1, Result + 1, -1, -1 );
        ConcatString(ref uVar5, "A", 16);
    }
    return Result;
}

void sub_4805(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_5143()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1077 += fVar2;
    l_U1084 += fVar2;
    l_U1085 += fVar2;
    l_U1089 += fVar2;
    l_U1086 += fVar2;
    l_U1087 += fVar2;
    l_U1090 += fVar2;
    l_U1091 += fVar2;
    if (l_U1050)
    {
        l_U1083 += fVar2;
    }
    else
    {
        l_U1083 = 0.00000000;
    }
    return;
}

void sub_5616(int iParam0, boolean bParam1)
{
    l_U110 = 0;
    if (NOT (l_U98 == iParam0))
    {
        sub_5645();
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

void sub_5645()
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

void sub_6049(unknown uParam0)
{
    REQUEST_MODEL( sub_6060( uParam0 ) );
    return;
}

int sub_6060(unknown uParam0)
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
    sub_2039( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6905(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6060( uParam0 ) );
}

void sub_7307(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3164(), uVar10 )))
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
                sub_7569( uVar10 );
                sub_7647( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_7782( uVar10 );
        }
    }
    return;
}

void sub_7569(unknown uParam0)
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

int sub_7647(unknown uParam0)
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

void sub_7782(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_7841(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_6060( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_7891( uParam0, (uParam1^) );
    return;
}

void sub_7891(unknown uParam0, unknown uParam1)
{
    sub_7903( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7903(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7997( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_8541( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7997(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_8541(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7997( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7997( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7997( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7997( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7997( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7997( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7997( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7997( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_9551()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_9719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_9799( "\n PED NUMBER ", uParam0 );
    sub_9839( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_9799(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9839(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9928(unknown uParam0)
{
    while (NOT (sub_9939( uParam0 )))
    {
        WAIT( 0 );
    }
    return;
}

int sub_9939(unknown uParam0)
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

    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        if (HAS_MODEL_LOADED( uParam0 ))
        {
            if (HAS_MODEL_LOADED( 8772846 ))
            {
                GET_CHAR_COORDINATES( sub_3164(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                for ( I = 1; I < 40; I++ )
                {
                    if (I > 0)
                    {
                        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar3._fU0, uVar3._fU4, uVar3._fU8, I, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar9 );
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar11, uVar6._fU0, uVar6._fU4, uVar6._fU8, 10.00000000 )))
                        {
                            CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 5.00000000, 1 );
                            if (sub_10153( uParam0, uVar6, uVar9, 1 ))
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

int sub_10153(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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

void sub_10542(int iParam0, unknown uParam1, boolean bParam2)
{
    boolean bVar5;

    bVar5 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_3164() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3164(), 0 );
    if (sub_3717())
    {
        bVar5 = true;
    }
    sub_10630();
    if (bVar5)
    {
        if (((iParam0 > 0) AND (uParam1)) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_10767();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_3698();
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

void sub_10630()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_3164(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_10767()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar2 );
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

void sub_11170(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11191( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_11191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11245( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11245(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11267( iParam1 )))
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
    sub_11955( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11267(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11344( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11344( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11344( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11344(unknown uParam0)
{
    return;
}

void sub_11955(int iParam0, int iParam1)
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

void sub_12236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    return sub_12287( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12 );
}

int sub_12287(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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
        if (sub_12387( uVar22[0], uVar22[1], uVar22[2], uParam11, uParam12, uParam13, uParam14, l_U123, uParam15, 0, 0, 0 ))
        {
            if ((uParam16) AND (IS_WANTED_LEVEL_GREATER( sub_3094(), 0 )))
            {
                if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
                {
                    REMOVE_BLIP( l_U121 );
                    REMOVE_BLIP( l_U120 );
                    sub_13594( uParam10 );
                }
                if (((NOT sub_12941()) AND (NOT sub_14331())) AND (NOT l_U105))
                {
                    sub_13762( uParam17, 0 );
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
                sub_13594( uParam17 );
                l_U105 = 0;
                l_U106 = 1;
            }
            if (l_U106)
            {
                if (NOT sub_12941())
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
                if (NOT sub_12941())
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
                        sub_13762( uParam10, 0 );
                        l_U108 = 1;
                    }
                    else
                    {
                        sub_13762( uParam10, 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U121 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                    SET_ROUTE( l_U121, 1 );
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3164(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
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
                if ((iVar20) AND (sub_14954( 1, 1 )))
                {
                    sub_13594( uParam10 );
                    sub_5645();
                    return 1;
                }
            }
        }
        else if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
        {
            REMOVE_BLIP( l_U121 );
            REMOVE_BLIP( l_U120 );
            sub_13594( uParam10 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_3094() );
            sub_15394( ref iVar26 );
            if (iVar26 == nil)
            {
                REQUEST_MODEL( 1264341792 );
                while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref iVar26, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
                WARP_CHAR_INTO_CAR( sub_3164(), iVar26 );
                sub_7782( iVar26 );
            }
            else if (IS_VEH_DRIVEABLE( iVar26 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
                WARP_CHAR_INTO_CAR( sub_3164(), iVar26 );
            }
            sub_15937( uParam0, uParam1, uParam2 );
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
                sub_7782( iVar26 );
            }
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_16270( uParam0, uParam1, uParam2 );
    return 0;
}

int sub_12387(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, unknown uParam11)
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
                if ((NOT (IS_GROUP_MEMBER( uVar24[I], sub_9551() ))) AND (NOT (sub_12594( uVar24[I], uParam9 ))))
                {
                    if (sub_12695( uVar24[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( uVar24[I], sub_9551() )))
                        {
                            CLEAR_CHAR_TASKS( uVar24[I] );
                            SET_GROUP_MEMBER( sub_9551(), uVar24[I] );
                        }
                    }
                    else if (NOT sub_12941())
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
                    if (((sub_13358( uVar24[I] )) || (sub_12594( uVar24[I], uParam9 ))) || (uParam11))
                    {
                        REMOVE_BLIP( l_U116[I] );
                        sub_13594( uVar28[I] );
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
                sub_13594( uVar28[I] );
                iVar18 = 1;
            }
        }
    }
    if (NOT sub_12941())
    {
        if (bVar19)
        {
            if ((iVar15 == iVar16) AND (iVar16 > 1))
            {
                sub_13762( uParam6, 0 );
            }
            else
            {
                for ( I = 0; I < 3; I++ )
                {
                    if (iVar20[I])
                    {
                        sub_13762( uVar28[I], 0 );
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
                sub_13762( uVar28[I], 0 );
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
            sub_13594( uVar28[I] );
        }
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3164() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3164(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( uVar24[I] )))
                {
                    SET_CHAR_COORDINATES( uVar24[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_12594(unknown uParam0, unknown uParam1)
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

int sub_12695(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_3164(), uVar5 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3164(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (bParam2)
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3164() ))
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

int sub_12941()
{
    if ((((IS_MESSAGE_BEING_DISPLAYED()) || (sub_12963( l_U125 ))) || (sub_13126())) || (l_U107))
    {
        return 1;
    }
    return 0;
}

int sub_12963(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11344( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11344( "\n speech is not playing" );
    }
    return 0;
}

int sub_13126()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_13358(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3164() ))
    {
        if (sub_13391( sub_3164(), uParam0 ))
        {
            return 1;
        }
    }
    else if (IS_GROUP_MEMBER( uParam0, sub_9551() ))
    {
        return 1;
    }
    return 0;
}

int sub_13391(unknown uParam0, unknown uParam1)
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

void sub_13594(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_13762(unknown uParam0, boolean bParam1)
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

int sub_14331()
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

int sub_14954(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3164()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3164() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3094() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3094() )))
    {
        return 0;
    }
    return 1;
}

void sub_15394(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3164(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_15514( (uParam0^) );
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

void sub_15514(unknown uParam0)
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

void sub_15937(unknown uParam0, unknown uParam1, float fParam2)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3164(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3164(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3164(), uParam0, uParam1, fParam2 );
    return;
}

void sub_16270(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_16295( uParam0, uParam1, uParam2, l_U122, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3164(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
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

int sub_16295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_16312( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3164(), uParam0, uParam1, uParam4, uParam4, 0 )))
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

int sub_16312(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_16660(unknown uParam0)
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
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_9551() )))
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
                    if (NOT (sub_16870( uParam0, sub_3164(), 45.00000000 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3164() );
                    }
                    TASK_LOOK_AT_CHAR( 0, sub_3164(), 2000, 0 );
                    CLOSE_SEQUENCE_TASK( uVar10 );
                    TASK_PERFORM_SEQUENCE( uParam0, uVar10 );
                    CLEAR_SEQUENCE_TASK( uVar10 );
                }
            }
        }
    }
    return;
}

int sub_16870(unknown uParam0, unknown uParam1, float fParam2)
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

int sub_17204()
{
    if ((sub_14331()) || (l_U106))
    {
        return 0;
    }
    if (((IS_WANTED_LEVEL_GREATER( sub_3094(), 0 )) AND (NOT l_U105)) AND (NOT (sub_17258( l_U131 ))))
    {
        return 0;
    }
    return 1;
}

int sub_17258(unknown uParam0)
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

void sub_17438(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_17463( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_17463(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_11245( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_17719(unknown uParam0, unknown uParam1)
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

void sub_17934()
{
    if (NOT l_U101)
    {
        if ((sub_17954()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            if ((ProtectedGet(l_U99) < 99) AND (ProtectedGet(l_U99) > 0))
            {
                sub_18090( 0 );
                l_U102 = 1;
                ProtectedSet(l_U99, 99);
                l_U101 = 1;
            }
        }
    }
    else if (NOT sub_17954())
    {
        l_U101 = 0;
    }
    return;
}

int sub_17954()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18090(unknown uParam0)
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

void sub_18342(boolean bParam0, boolean bParam1)
{
    sub_18351();
    if (bParam1)
    {
        sub_18435( ref l_U125, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_3094(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3164() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3164() );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3164(), 1 );
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_3094(), 0, 0, 0 );
    }
    sub_18664();
    return;
}

void sub_18351()
{
    if (NOT l_U103)
    {
        sub_18375( ref l_U100 );
        l_U103 = 1;
    }
    return;
}

void sub_18375(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_18435(int iParam0, unknown uParam1)
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

void sub_18664()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        GET_CHAR_PROP_INDEX( sub_3164(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_3164(), 0 );
        }
    }
    return;
}

void sub_19278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
            vVar15 = {sub_19370( vVar15, 0.00000000, 0.00000000, uVar6._fU8 )};
            if (NOT (IS_CHAR_DEAD( uParam1 )))
            {
                GET_CAM_POS( (uParam0^), ref vVar9.x, ref vVar9.y, ref vVar9.z );
                GET_CHAR_COORDINATES( uParam1, ref vVar12.x, ref vVar12.y, ref vVar12.z );
                uVar18 = {vVar12 - vVar9};
                uVar18._fU8 = 0.00000000;
                uVar21 = {sub_19770( uVar18, vVar15 )};
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

void sub_19370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

vector sub_19770(unknown uParam0, unknown uParam1, unknown uParam2, vector vParam3)
{
    return (((uParam0._fU0 * vParam3.x) + (uParam0._fU4 * vParam3.y)) + (uParam0._fU8 * vParam3.z)) * vParam3;
}

void sub_22284()
{
    l_U1078 = 30;
    l_U1079 = 7;
    return;
}

void sub_22462(unknown uParam0)
{
    if (l_U1092 < 28)
    {
        GET_SCRIPT_TASK_STATUS( l_U1124, 27, ref l_U1131 );
        if (l_U1131 == 7)
        {
            if (NOT (l_U1092 == 28))
            {
                if (NOT (l_U1092 == 27))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U1124, l_U1142[l_U1092]._fU0, l_U1142[l_U1092]._fU4, l_U1142[l_U1092]._fU8, uParam0, -2, 1.00000000 );
                }
                else
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1124, l_U1142[l_U1092]._fU0, l_U1142[l_U1092]._fU4, l_U1142[l_U1092]._fU8, uParam0, -2, 1.00000000 );
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_2D( l_U1124, l_U1142[l_U1092]._fU0, l_U1142[l_U1092]._fU4, 2.00000000, 2.00000000, 0 ))
        {
            l_U1092++;
            if (l_U1092 < 28)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U1124, l_U1142[l_U1092]._fU0, l_U1142[l_U1092]._fU4, l_U1142[l_U1092]._fU8, uParam0, -2, 1.00000000 );
            }
            else
            {
                l_U1092 = 27;
            }
        }
    }
    MODIFY_CHAR_MOVE_STATE( l_U1124, uParam0 );
    return;
}

int sub_22873(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_23046( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_23046(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_23143(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    vVar4.z = 0.00000000;
    vVar7.z = 0.00000000;
    uVar10 = {vVar7 - vVar4};
    return VMAG( uVar10 );
}

void sub_23294(int iParam0)
{
    if (NOT (l_U1093 == iParam0))
    {
        l_U1093 = iParam0;
        l_U1096 = 0;
    }
    return;
}

void sub_24809()
{
    if (DOES_BLIP_EXIST( l_U1047 ))
    {
        REMOVE_BLIP( l_U1047 );
    }
    if (DOES_BLIP_EXIST( l_U1048 ))
    {
        REMOVE_BLIP( l_U1048 );
    }
    return;
}

void sub_24894(unknown uParam0)
{
    if (NOT (COMPARE_STRING( uParam0, "" )))
    {
        if (NOT sub_12941())
        {
            sub_18090( 0 );
        }
        else
        {
            sub_18090( 1 );
        }
        if (NOT l_U109)
        {
            sub_13762( uParam0, 0 );
            l_U109 = 1;
        }
    }
    return;
}

int sub_25461(unknown uParam0)
{
    if (IS_CHAR_IN_AREA_3D( uParam0, -345.70500000, 633.34500000, 0.00000000, -67.27500000, 1149.64100000, 25.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_31576(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U1046)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U1044) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U1045 + 500))
        {
            l_U1044 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3164() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_31744())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U1046)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U1045 );
            l_U1044 = 1;
            l_U1043 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1043) AND (NOT l_U1044))
        {
            if (l_U1046)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U1043 = 1;
        }
    }
    else if (l_U1043)
    {
        if (l_U1046)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U1043 = 0;
    };;;
    return;
}

int sub_31744()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_32282()
{
    l_U494[0] = {-197.80280000, 950.92660000, 10.46230000};
    l_U190[0] = -0.01360000;
    l_U201[0] = 0.01130000;
    l_U212[0] = 0.70120000;
    l_U223[0] = 0.71270000;
    l_U389[0] = 1370;
    l_U234[0] = 1000.00000000;
    l_U461[0] = -956048545;
    l_U494[1] = {-199.72880000, 944.89230000, 10.79710000};
    l_U190[1] = -0.02130000;
    l_U201[1] = -0.01550000;
    l_U212[1] = 0.72570000;
    l_U223[1] = -0.68750000;
    l_U389[1] = 1372;
    l_U234[1] = 2000.00000000;
    l_U461[1] = -713569950;
    l_U494[2] = {-162.60020000, 944.76280000, 11.20360000};
    l_U190[2] = -0.00530000;
    l_U201[2] = 0.01430000;
    l_U212[2] = 0.61150000;
    l_U223[2] = 0.79110000;
    l_U389[2] = 1373;
    l_U234[2] = 2000.00000000;
    l_U461[2] = 1269098716;
    l_U494[3] = {-134.03240000, 937.39690000, 10.96780000};
    l_U190[3] = 0.00240000;
    l_U201[3] = 0.01790000;
    l_U212[3] = 0.62500000;
    l_U223[3] = 0.78040000;
    l_U389[3] = 1374;
    l_U234[3] = 4000.00000000;
    l_U461[3] = -956048545;
    l_U556[0] = {-332.41100000, 931.06290000, 14.22160000};
    l_U249[0] = 0.01470000;
    l_U260[0] = 0.01180000;
    l_U271[0] = -0.70290000;
    l_U282[0] = 0.71110000;
    l_U411[0] = 1375;
    l_U293[0] = 158000.00000000;
    l_U304[0] = 1.00000000;
    l_U483[0] = 1208856469;
    l_U556[1] = {-265.68910000, 939.73100000, 11.86070000};
    l_U249[1] = 0.01610000;
    l_U260[1] = 0.04310000;
    l_U271[1] = 0.79480000;
    l_U282[1] = 0.60510000;
    l_U411[1] = 1376;
    l_U293[1] = 158000.00000000;
    l_U304[1] = 1.00000000;
    l_U483[1] = 1269098716;
    l_U556[2] = {-353.44340000, 931.02920000, 14.74720000};
    l_U249[2] = -0.00500000;
    l_U260[2] = -0.00900000;
    l_U271[2] = 0.71180000;
    l_U282[2] = -0.70230000;
    l_U411[2] = 1377;
    l_U293[2] = 160000.00000000;
    l_U304[2] = 1.00000000;
    l_U483[2] = -713569950;
    l_U556[3] = {-252.61600000, 944.42230000, 11.45130000};
    l_U249[3] = -0.00410000;
    l_U260[3] = 0.02660000;
    l_U271[3] = 0.81010000;
    l_U282[3] = 0.58560000;
    l_U411[3] = 1378;
    l_U293[3] = 160000.00000000;
    l_U304[3] = 1.00000000;
    l_U483[3] = -713569950;
    return;
}

void sub_33352()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    for ( I = 0; I < 28; I++ )
    {
        iVar3 = I + 1;
        if (iVar3 < 28)
        {
            if (l_U1142[I]._fU0 < l_U1142[iVar3]._fU0)
            {
                uVar4._fU0 = l_U1142[I]._fU0;
                uVar7._fU0 = l_U1142[iVar3]._fU0;
            }
            else
            {
                uVar4._fU0 = l_U1142[iVar3]._fU0;
                uVar7._fU0 = l_U1142[I]._fU0;
            }
            if (l_U1142[I]._fU4 < l_U1142[iVar3]._fU4)
            {
                uVar4._fU4 = l_U1142[I]._fU4;
                uVar7._fU4 = l_U1142[iVar3]._fU4;
            }
            else
            {
                uVar4._fU4 = l_U1142[iVar3]._fU4;
                uVar7._fU4 = l_U1142[I]._fU4;
            }
            if (l_U1142[I]._fU8 < l_U1142[iVar3]._fU8)
            {
                uVar4._fU8 = l_U1142[I]._fU8;
                uVar7._fU8 = l_U1142[iVar3]._fU8;
            }
            else
            {
                uVar4._fU8 = l_U1142[iVar3]._fU8;
                uVar7._fU8 = l_U1142[I]._fU8;
            }
            uVar4._fU0 += -3.00000000;
            uVar4._fU4 += -3.00000000;
            uVar4._fU8 += -3.00000000;
            uVar7._fU0 += 3.00000000;
            uVar7._fU4 += 3.00000000;
            uVar7._fU8 += 3.00000000;
            SWITCH_PED_PATHS_ON( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8 );
        }
    }
    return;
}

void sub_35462(int iParam0)
{
    if (NOT (l_U1094 == iParam0))
    {
        l_U1086 = 0.00000000;
        l_U1094 = iParam0;
        l_U1095 = 0;
    }
    return;
}

void sub_36547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = nil;
    return sub_12387( uParam0, 0, 0, uParam1, uParam1, uParam1, uParam1, l_U123, uParam2, uVar7, uParam3, uParam4 );
}

int sub_37135(unknown uParam0, unknown uParam1)
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

int sub_38348(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 > 0) AND (iParam1 < 3000))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_39073(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U164 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U164 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U381;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_40411( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_40738( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_41074( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_41207( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U165 = 1;
            }
            else if (l_U165)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U165 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U386 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U387 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_CAR( uVar23 )) || (IS_THIS_MODEL_A_BIKE( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U379 - l_U380;
                                fVar14 += l_U380;
                                l_U378 = fVar14;
                                if (l_U378 < l_U380)
                                {
                                    l_U378 = l_U380;
                                }
                                if (l_U378 > l_U379)
                                {
                                    l_U378 = l_U379;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3094(), l_U378 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_40411(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_40738(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_23046( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_41074(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10._fU8 = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_41207(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13._fU0 );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13._fU4 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_42209(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U657 += fVar5;
    l_U658 += fVar5;
    l_U659 += fVar5;
    l_U377 = fParam1;
    if (NOT l_U154)
    {
        if (l_U153)
        {
            sub_42303();
            l_U163 = 0;
            if (IS_PLAYER_PLAYING( sub_3094() ))
            {
                GET_CHAR_COORDINATES( sub_3164(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U154 = 1;
        }
    }
    else if (NOT l_U153)
    {
        sub_42589();
        l_U163 = 1;
        l_U154 = 0;
    }
    if (l_U153)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U144)
    {
        if (l_U135)
        {
            l_U372 = 0.00000000;
        }
        else
        {
            l_U372 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3094() ))
                {
                    if (sub_40738( sub_3164(), uParam0 ))
                    {
                        l_U152 = 1;
                    }
                    else
                    {
                        l_U152 = 0;
                    }
                }
                l_U369 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U453 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U370) * l_U372 );
                if (l_U139)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U151)
                {
                    if (l_U375 > 1000.00000000)
                    {
                        sub_43028( uParam0, l_U369 );
                        sub_43633( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U369;
                            fVar5 += 4000.00000000;
                            sub_43859( uParam0, fVar5, l_U374 );
                        }
                        l_U375 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U375 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((l_U369 == 0) || (IS_SCREEN_FADED_OUT()))
        {
            iVar10 = 1;
        }
        if ((iVar10) AND (NOT l_U166))
        {
            if (NOT l_U132)
            {
                sub_44491( uParam0, (fParam1 * l_U370) * l_U372 );
                sub_50086( ref uParam0 );
                sub_50646( ref uParam0 );
            }
            if (l_U137)
            {
                sub_51153( uParam0 );
            }
            if (NOT l_U132)
            {
                sub_52293( uParam0, (fParam1 * l_U370) * l_U372 );
            }
        }
        if (l_U146)
        {
            if (IS_PLAYER_PLAYING( sub_3094() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref l_U651 );
                    GET_CAR_COORDINATES( l_U651, ref l_U587._fU0, ref l_U587._fU4, ref l_U587._fU8 );
                    GET_VEHICLE_QUATERNION( l_U651, ref l_U245, ref l_U246, ref l_U247, ref l_U248 );
                }
            }
            l_U146 = 0;
        }
        if (l_U145)
        {
            if (DOES_VEHICLE_EXIST( l_U651 ))
            {
                sub_45332( l_U652 );
                l_U652 = l_U651;
            }
            if (IS_VEH_DRIVEABLE( l_U652 ))
            {
                SET_CAR_COORDINATES( l_U652, l_U587._fU0, l_U587._fU4, l_U587._fU8 );
                SET_VEHICLE_QUATERNION( l_U652, l_U245, l_U246, l_U247, l_U248 );
            }
            l_U368 = l_U371;
            l_U132 = 1;
            l_U145 = 0;
        }
        if (l_U132)
        {
            while (NOT (sub_56225( ref uParam0, l_U368 )))
            {
                WAIT( 0 );
            }
            l_U135 = 1;
        }
    }
    return;
}

void sub_42303()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_42589()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_42612();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_42612()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_43028(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_43077();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U388 * -1.00000000, l_U388 * -1.00000000, l_U388 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U388, l_U388, l_U388))};
    l_U599 = {vVar6};
    l_U602 = {vVar9};
    SWITCH_ROADS_OFF( l_U593._fU0, l_U593._fU4, l_U593._fU8, l_U596._fU0, l_U596._fU4, l_U596._fU8 );
    SWITCH_ROADS_OFF( l_U599._fU0, l_U599._fU4, l_U599._fU8, l_U602._fU0, l_U602._fU4, l_U602._fU8 );
    return;
}

void sub_43077()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U599._fU0, l_U599._fU4, l_U599._fU8, l_U602._fU0, l_U602._fU4, l_U602._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U593._fU0, l_U593._fU4, l_U593._fU8, l_U596._fU0, l_U596._fU4, l_U596._fU8 );
    return;
}

void sub_43633(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U154)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3094() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_3164(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_43859(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_43988( vVar6, fVar15 );
        }
    }
    return;
}

void sub_43988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U154)
    {
        if (NOT (sub_44018( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3094() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_44018(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U154)
        {
            if (NOT l_U132)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3094() ))
                    {
                        GET_CHAR_COORDINATES( sub_3164(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_44491(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U455 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 10; I++ )
        {
            if (I < l_U454)
            {
                I = l_U454;
            }
            if (l_U400[I] == 0)
            {
                if (((l_U389[I] > 0) AND (l_U389[I] < 3000)) AND (NOT (l_U461[I] == 0)))
                {
                    if (NOT l_U132)
                    {
                        if (l_U369 > (l_U234[I] - (7000.00000000 * uParam1)))
                        {
                            l_U460++;
                            l_U400[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U369 - l_U234[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_44763( l_U389[I] )))
                            {
                                l_U460++;
                                l_U400[I]++;
                            }
                            else
                            {
                                sub_44889( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_44889( I, 1090519040 );
                }
            }
            if (l_U400[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U389[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U389[I] );
                }
                else if (l_U461[I] == sub_45611())
                {
                    if (HAS_MODEL_LOADED( sub_45639() ))
                    {
                        l_U400[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_45639() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U400[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_45754() ))
                {
                    l_U400[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_45754() );
                };;;;
            }
            if (l_U400[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U461[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U605[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_45754() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_45754() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_44018( l_U494[I], 5.00000000, 1120403456 ))) AND (NOT (sub_45997( l_U494[I] ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U158)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U151)
                                {
                                    sub_43988( l_U494[I], l_U374 );
                                }
                                CREATE_CAR( l_U461[I], l_U494[I]._fU0, l_U494[I]._fU4, l_U494[I]._fU8, ref l_U605[I], 1 );
                                if (l_U461[I] == sub_45611())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U605[I], 6, sub_45639(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45639() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U605[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U605[I], 4, sub_45754(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45754() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U605[I], l_U190[I], l_U201[I], l_U212[I], l_U223[I] );
                                FREEZE_CAR_POSITION( l_U605[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U605[I], 1 );
                                SET_CAR_COLLISION( l_U605[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U461[I] );
                                sub_46521( l_U605[I] );
                                GET_INTERIOR_FROM_CAR( l_U605[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U605[I] );
                                }
                                l_U460--;
                                l_U400[I]++;
                            }
                            else if (l_U369 > l_U234[I])
                            {
                                l_U460--;
                                sub_44889( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U461[I] );
                }
            }
            if (l_U400[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U389[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U389[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U605[I] ))
                {
                    if (l_U369 > l_U234[I])
                    {
                        if (8 > l_U444)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U369 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U369 - l_U234[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U389[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U389[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U605[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U389[I], fVar14, ref uVar11 );
                                    if ((NOT (sub_44018( uVar8, 5.00000000, 1120403456 ))) AND (sub_44018( uVar11, 5.00000000, 1120403456 )))
                                    {
                                        sub_44889( I, 1090519040 );
                                    }
                                    else if (sub_38348( ref l_U605[I], l_U389[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U605[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U605[I], uParam1 );
                                        sub_47163( ref l_U605[I] );
                                        l_U444++;
                                        l_U400[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_44889( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_44889( I, 1090519040 );
                        }
                    }
                    else if ((l_U152) AND (NOT l_U167))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_44889( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_44889( I, 1090519040 );
                }
            }
            if (l_U400[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U605[I] ))
                {
                    SET_CAR_COLLISION( l_U605[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U605[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U605[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3094() ))
                                {
                                    if ((((IS_CHAR_TOUCHING_VEHICLE( sub_3164(), l_U605[I] )) AND (NOT l_U138)) AND (NOT l_U135)) AND (NOT l_U147))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar7 );
                                            if (NOT (sub_48021( l_U605[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_48183( uVar7, l_U605[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_48414( l_U605[I] );
                                                l_U400[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_48183( l_U605[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U605[I], uParam1 );
                                    }
                                    else if ((sub_48541( uParam0, l_U605[I] )) AND (NOT l_U147))
                                    {
                                        sub_48414( l_U605[I] );
                                        l_U400[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U605[I], uParam1 );
                                    }
                                    if (l_U140)
                                    {
                                        # -NULL-0xbfc99f( l_U605[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U605[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                        }
                    }
                    else
                    {
                        l_U400[I]++;
                    }
                }
                else
                {
                    l_U400[I]++;
                }
            }
            if (l_U400[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U605[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U605[I] )))
                    {
                        l_U400[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U605[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U605[I], uParam1 );
                                if (l_U140)
                                {
                                    # -NULL-0xbfc99f( l_U605[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U605[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U389[I] ))
                        {
                            if (l_U369 > (l_U234[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U389[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                        }
                    }
                }
                else
                {
                    l_U400[I]++;
                }
            }
            if (l_U400[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U605[I] )))
                {
                    GET_CAR_SPEED( l_U605[I], ref uVar15 );
                }
                sub_49654( ref l_U605[I] );
                l_U444--;
                sub_44889( I, uVar15 );
            }
            l_U455++;
        }
    }
    else
    {
        sub_49813();
    }
    return;
}

void sub_44763(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_44889(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U461[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U461[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U605[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U605[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U605[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U605[iParam0] ))
    {
        sub_45059( l_U605[iParam0] );
        SET_CAR_COLLISION( l_U605[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U605[iParam0], 0 );
    }
    if (NOT l_U136)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_45298( uVar5 );
        }
        sub_45332( l_U605[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U605[iParam0] ))
    {
        DELETE_CAR( ref l_U605[iParam0] );
    }
    if (iParam0 >= l_U454)
    {
        for ( I = 0; I < 10; I++ )
        {
            if (NOT (l_U400[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 9)
                    {
                        l_U454 = iParam0 + 1;
                    }
                }
                I = 10;
            }
        }
    }
    l_U400[iParam0] = 99;
    return;
}

void sub_45059(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_3164()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_45298(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_45332(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_45611()
{
    return 2046537925;
}

int sub_45639()
{
    return -183203150;
}

int sub_45754()
{
    return -2139064254;
}

int sub_45997(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U168[I] ))
        {
            if (LOCATE_CAR_3D( l_U168[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_46521(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

void sub_47163(unknown uParam0)
{
    int iVar3;

    if (l_U148)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_47197();
            if (NOT (iVar3 == -1))
            {
                l_U168[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U168[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U168[iVar3], ref l_U177[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_47197()
{
    int Result;

    for ( Result = 0; Result < 8; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U168[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_48021(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_23046( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_48183(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_23046( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_48414(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_45059( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_48541(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_48554( uParam0, uParam1 );
    fVar5 = sub_48778( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_48554(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_48778(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_49654(unknown uParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (l_U168[I] == (uParam0^))
        {
            l_U168[I] = nil;
            if (DOES_BLIP_EXIST( l_U177[I] ))
            {
                REMOVE_BLIP( l_U177[I] );
            }
            return;
        }
    }
    return;
}

void sub_49813()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U605[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U605[I] )))
            {
                SET_CAR_COLLISION( l_U605[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U605[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U605[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                }
            }
            sub_45059( l_U605[I] );
            sub_45332( l_U605[I] );
        }
        l_U400[I] = 0;
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U461[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U461[I] );
        }
    }
    l_U454 = 0;
    l_U444 = 0;
    return;
}

void sub_50086(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U454 - 5;
    iVar5 = iVar4 + 15;
    if (l_U657 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3094() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar6 );
            }
            for ( I = 0; I < 10; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U605[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U605[I] ))
                    {
                        if ((sub_50253( l_U605[I], (uParam0^) )) || (sub_50253( l_U605[I], uVar6 )))
                        {
                            SOUND_CAR_HORN( l_U605[I], 3000 );
                            l_U657 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 10;
                }
            }
        }
    }
    return;
}

int sub_50253(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if ((DOES_VEHICLE_EXIST( uParam0 )) AND (DOES_VEHICLE_EXIST( uParam1 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_48021( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if (((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_50646(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U454 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        switch (l_U655)
        {
            case 0:
            if (l_U658 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar6 );
                }
                for ( I = 0; I < 10; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U605[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U605[I] ))
                        {
                            if ((sub_50253( l_U605[I], (uParam0^) )) || (sub_50253( l_U605[I], uVar6 )))
                            {
                                l_U654 = l_U605[I];
                                l_U658 = 0.00000000;
                                I = 10;
                                l_U655++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 10;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U654 ))
            {
                if (l_U658 < 1000.00000000)
                {
                    if (l_U659 > 100.00000000)
                    {
                        if (NOT l_U656)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U654, 2.00000000 );
                            l_U656 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U654, 1.00000000 );
                            l_U656 = 0;
                        }
                        l_U659 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U654, 1.00000000 );
                    l_U655 = 0;
                    l_U658 = 0.00000000;
                    l_U656 = 0;
                }
            }
            else
            {
                l_U655 = 0;
                l_U658 = 0.00000000;
                l_U656 = 0;
            }
            break;
        }
    }
    return;
}

void sub_51153(unknown uParam0)
{
    int I;
    int iVar4;

    l_U457 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 10; I++ )
        {
            if (I < l_U456)
            {
                I = l_U456;
            }
            if (l_U433[I] == 0)
            {
                if (NOT (l_U472[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U525[I]._fU0, l_U525[I]._fU4, l_U366, l_U366, 0 ))
                    {
                        l_U458++;
                        l_U433[I]++;
                    }
                }
                else
                {
                    sub_51333( I );
                }
            }
            if (l_U433[I] == 1)
            {
                if (3 > l_U447)
                {
                    if (HAS_MODEL_LOADED( l_U472[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U625[I] )))
                        {
                            if (((NOT (sub_44018( l_U525[I], 5.00000000, 1120403456 ))) || (l_U132)) || (l_U158))
                            {
                                if (l_U151)
                                {
                                    sub_43988( l_U525[I], l_U374 );
                                }
                                CREATE_CAR( l_U472[I], l_U525[I]._fU0, l_U525[I]._fU4, l_U525[I]._fU8, ref l_U625[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U625[I], l_U315[I], l_U326[I], l_U337[I], l_U348[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U472[I] );
                                if (IS_CAR_MODEL( l_U625[I], sub_45611() ))
                                {
                                    SWITCH_CAR_SIREN( l_U625[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U625[I], sub_51770() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U625[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U625[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U625[I] );
                                }
                                l_U458--;
                                l_U447++;
                                l_U433[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U472[I] );
                    }
                }
            }
            if (l_U433[I] == 2)
            {
                if (NOT (sub_48183( l_U625[I], uParam0 )))
                {
                    if (NOT l_U136)
                    {
                        sub_45332( l_U625[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U625[I] );
                    }
                    l_U447--;
                    sub_51333( I );
                }
            }
            l_U457++;
            if (l_U457 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_52076();
    }
    return;
}

void sub_51333(int iParam0)
{
    int I;

    if (iParam0 >= l_U456)
    {
        for ( I = 0; I < 10; I++ )
        {
            if (NOT (l_U433[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 9)
                    {
                        l_U456 = iParam0 + 1;
                    }
                }
                I = 10;
            }
        }
    }
    l_U433[iParam0] = 99;
    return;
}

int sub_51770()
{
    return 1264341792;
}

void sub_52076()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U625[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U625[I] )))
            {
                SET_CAR_COLLISION( l_U625[I], 1 );
            }
            sub_45332( l_U625[I] );
        }
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U472[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U472[I] );
        }
    }
    l_U456 = 0;
    l_U447 = 0;
    return;
}

void sub_52293(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 10; I++ )
        {
            if (((l_U411[I] > 0) AND (l_U411[I] < 3000)) AND (NOT (l_U483[I] == 0)))
            {
                if (l_U422[I] == 0)
                {
                    if (NOT l_U132)
                    {
                        if (l_U369 > (l_U293[I] - (7000.00000000 * uParam1)))
                        {
                            l_U422[I]++;
                            l_U459++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U369 - l_U293[I];
                        fVar13 *= l_U304[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_44763( l_U411[I] )))
                            {
                                l_U422[I]++;
                                l_U459++;
                            }
                            else
                            {
                                l_U422[I] = 99;
                            }
                        }
                    }
                }
                if (l_U422[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U411[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U411[I] );
                    }
                    else if (l_U483[I] == sub_45611())
                    {
                        if (HAS_MODEL_LOADED( sub_45639() ))
                        {
                            l_U422[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_45639() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U422[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_45754() ))
                    {
                        l_U422[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_45754() );
                    };;;;
                }
                if (l_U422[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U483[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U636[I] )))
                        {
                            bVar15 = false;
                            if (l_U483[I] == sub_45611())
                            {
                                if (HAS_MODEL_LOADED( sub_45639() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_45639() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_45754() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_45754() );
                            };;;
                            if (bVar15)
                            {
                                if ((NOT (sub_44018( l_U556[I], 5.00000000, 1120403456 ))) || (l_U158))
                                {
                                    CREATE_CAR( l_U483[I], l_U556[I]._fU0, l_U556[I]._fU4, l_U556[I]._fU8, ref l_U636[I], 1 );
                                    if (l_U483[I] == sub_45611())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U636[I], 6, sub_45639(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45639() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U636[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U636[I], 26, sub_45754(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45754() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_45298( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U636[I], l_U249[I], l_U260[I], l_U271[I], l_U282[I] );
                                    FREEZE_CAR_POSITION( l_U636[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U483[I] );
                                    sub_46521( l_U636[I] );
                                    GET_INTERIOR_FROM_CAR( l_U636[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U636[I] );
                                    }
                                    l_U422[I]++;
                                    l_U459--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U483[I] );
                    }
                }
                if (l_U422[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U411[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U411[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U636[I] ))
                    {
                        if (l_U369 > l_U293[I])
                        {
                            if (4 > l_U446)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U369 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U369 - l_U293[I];
                                fVar13 *= l_U304[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U411[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U411[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U636[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U411[I], fVar13, ref uVar10 );
                                        if (((NOT (sub_44018( uVar7, 5.00000000, 1120403456 ))) AND (sub_44018( uVar10, 5.00000000, 1120403456 ))) AND (NOT l_U158))
                                        {
                                            l_U446++;
                                            l_U422[I]++;
                                        }
                                        else if (sub_38348( ref l_U636[I], l_U411[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U636[I], uParam1 * l_U304[I] );
                                            if (IS_VEH_DRIVEABLE( l_U636[I] ))
                                            {
                                                if (l_U483[I] == sub_45611())
                                                {
                                                    SWITCH_CAR_SIREN( l_U636[I], 1 );
                                                }
                                            }
                                            if (l_U149)
                                            {
                                                # -NULL-0xbfc99f( l_U636[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U636[I], 0 );
                                            }
                                            l_U446++;
                                            l_U422[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U446++;
                                        l_U422[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U446++;
                                l_U422[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U446++;
                        l_U422[I]++;
                    }
                }
                if (l_U422[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U636[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U636[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U636[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3094() ))
                                    {
                                        if (((IS_CHAR_TOUCHING_VEHICLE( sub_3164(), l_U636[I] )) AND (NOT l_U138)) AND (NOT l_U135))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_3164() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar6 );
                                                if (NOT (sub_54449( l_U636[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_48183( uVar6, l_U636[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_54734( uVar6, l_U636[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_48414( l_U636[I] );
                                                    l_U422[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U636[I], uParam1 * l_U304[I] );
                                            if (l_U149)
                                            {
                                                # -NULL-0xbfc99f( l_U636[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U636[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                            }
                        }
                        else
                        {
                            l_U422[I]++;
                        }
                    }
                    else
                    {
                        l_U422[I]++;
                    }
                }
                if (l_U422[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U636[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U636[I] )))
                        {
                            l_U422[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U636[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U636[I], uParam1 * l_U304[I] );
                                    if (l_U149)
                                    {
                                        # -NULL-0xbfc99f( l_U636[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U636[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U411[I] ))
                            {
                                if (l_U369 > (l_U293[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U411[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U422[I]++;
                    }
                }
                if (l_U422[I] == 6)
                {
                    if (NOT (l_U636[I] == l_U653))
                    {
                        if (IS_VEH_DRIVEABLE( l_U636[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U636[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U636[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U136)
                        {
                            sub_45332( l_U636[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U636[I] ))
                        {
                            DELETE_CAR( ref l_U636[I] );
                        }
                    }
                    l_U446--;
                    l_U422[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_55713();
    }
    return;
}

int sub_54449(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_23046( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_54734(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) > fParam2) || ((uVar5 - uVar6) < (fParam2 * -1.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_55713()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U636[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U636[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U636[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                }
            }
            sub_45059( l_U636[I] );
            sub_45332( l_U636[I] );
        }
        l_U422[I] = 0;
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U483[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U483[I] );
        }
    }
    return;
}

int sub_56225(unknown uParam0, unknown uParam1)
{
    if (NOT l_U161)
    {
        l_U132 = 1;
        sub_56251();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U453 == -1))
            {
                while (NOT (sub_38348( uParam0, l_U453, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U143)
                {
                    l_U135 = 1;
                    l_U372 = 0.00000000;
                    l_U454 = 0;
                    l_U456 = 0;
                    l_U444 = 0;
                    l_U446 = 0;
                    l_U447 = 0;
                    l_U458 = 0;
                    l_U459 = 0;
                    l_U460 = 0;
                }
            }
        }
        l_U161 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U370) * l_U372 );
            sub_38348( uParam0, l_U453, uParam1, 1, 0, 0 );
        }
    }
    l_U369 = uParam1;
    sub_52293( (uParam0^), (1.00000000 * l_U370) * l_U372 );
    sub_44491( (uParam0^), (1.00000000 * l_U370) * l_U372 );
    if (((l_U458 == 0) AND (l_U459 == 0)) AND (l_U460 == 0))
    {
        l_U135 = 0;
        l_U132 = 0;
        l_U161 = 0;
        return 1;
    }
    return 0;
}

void sub_56251()
{
    sub_56260();
    sub_56472();
    sub_56616();
    return;
}

void sub_56260()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U605[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U605[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U605[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U605[I] );
                }
            }
            DELETE_CAR( ref l_U605[I] );
        }
        l_U400[I] = 0;
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U461[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U461[I] );
        }
    }
    l_U454 = 0;
    l_U444 = 0;
    return;
}

void sub_56472()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U625[I] ))
        {
            DELETE_CAR( ref l_U625[I] );
        }
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U472[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U472[I] );
        }
    }
    l_U456 = 0;
    l_U447 = 0;
    return;
}

void sub_56616()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U636[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U636[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U636[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U636[I] );
                }
            }
            DELETE_CAR( ref l_U636[I] );
        }
        l_U422[I] = 0;
    }
    for ( I = 0; I < 10; I++ )
    {
        if (NOT (l_U483[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U483[I] );
        }
    }
    return;
}

void sub_57369(boolean bParam0)
{
    l_U164 = 0;
    sub_42589();
    l_U163 = 1;
    sub_43077();
    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3094(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3094(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45754() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_51770() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45611() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_45639() );
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam0))
    {
        sub_49813();
        sub_52076();
        sub_55713();
    }
    else
    {
        sub_56251();
        sub_57545();
    }
    return;
}

void sub_57545()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        l_U605[I] = nil;
        l_U494[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U190[I] = 0.00000000;
        l_U201[I] = 0.00000000;
        l_U212[I] = 0.00000000;
        l_U223[I] = 0.00000000;
        l_U389[I] = 0;
        l_U234[I] = 0.00000000;
        l_U400[I] = 0;
        l_U461[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        l_U616[I] = nil;
    }
    l_U452 = 0;
    l_U444 = 0;
    l_U445 = 0;
    for ( I = 0; I < 10; I++ )
    {
        l_U625[I] = nil;
        l_U525[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U315[I] = 0.00000000;
        l_U326[I] = 0.00000000;
        l_U337[I] = 0.00000000;
        l_U348[I] = 0.00000000;
        l_U433[I] = 0;
        l_U472[I] = 0;
    }
    for ( I = 0; I < 3; I++ )
    {
        l_U647[I] = nil;
    }
    l_U451 = 0;
    l_U447 = 0;
    for ( I = 0; I < 10; I++ )
    {
        l_U636[I] = nil;
        l_U556[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U249[I] = 0.00000000;
        l_U260[I] = 0.00000000;
        l_U271[I] = 0.00000000;
        l_U282[I] = 0.00000000;
        l_U411[I] = 0;
        l_U293[I] = 0.00000000;
        l_U422[I] = 0;
        l_U483[I] = 0;
    }
    l_U446 = 0;
    l_U454 = 0;
    l_U458 = 0;
    l_U459 = 0;
    l_U460 = 0;
    return;
}

int sub_61054(unknown uParam0)
{
    if (IS_CHAR_ON_SCREEN( uParam0 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3164(), uParam0, 200.00000000, 200.00000000, 0 ))
        {
            return 1;
        }
    }
    return 1;
}

void sub_64017()
{
    PRINTSTRING( "BERNIE 1 - MISSION PASSED \n" );
    sub_64063();
    CLEAR_WANTED_LEVEL( sub_3094() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_3426();
    return;
}

void sub_64063()
{
    sub_64072();
    return;
}

void sub_64072()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_64090();
    sub_64149( iVar2, iVar3, iVar4 );
    return;
}

void sub_64090()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1037[I] = 4;
    }
    return;
}

void sub_64149(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 18;
    sub_64182( iVar5, uParam0, uParam1, uParam2, "Contact_21" );
    return;
}

void sub_64182(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_64278( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_64278( ref cVar9 );
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
            sub_64278( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_64278( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_64278( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_64278( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_64855( iParam0, iVar7 );;;
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
                sub_65252( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_65252( 0, 4 );
            }
        }
    }
    if (NOT (sub_65341( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3094(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3094() );
    }
    sub_2183();
    bVar27 = true;
    uVar28 = sub_64855( iParam0, iVar7 );
    uVar29 = sub_1640( iParam0 );
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
                sub_74717( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_75147();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_75232( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_75289( iParam0 );
                sub_75328( 0 );
                sub_2081( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_75436();
        }
    }
    if (bParam2)
    {
        sub_75147();
        sub_75524();
        sub_75328( 0 );
    }
    if (bParam3)
    {
        sub_75147();
        sub_75564();
        sub_75328( 0 );
        sub_2081( uVar29, 0 );
    }
    sub_1527();
    return;
}

void sub_64278(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_64855(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2039( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_65252(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_65341(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_65549( uParam1 );
        break;
        case 1:
        bVar8 = sub_67627( uParam1 );
        break;
        case 2:
        bVar8 = sub_67853( uParam1 );
        break;
        case 3:
        bVar8 = sub_68003( uParam1 );
        break;
        case 4:
        bVar8 = sub_68281( uParam1 );
        break;
        case 5:
        bVar8 = sub_68584( uParam1 );
        break;
        case 6:
        bVar8 = sub_68783( uParam1 );
        break;
        case 7:
        bVar8 = sub_69009( uParam1 );
        break;
        case 8:
        bVar8 = sub_69244( uParam1 );
        break;
        case 9:
        bVar8 = sub_69619( uParam1 );
        break;
        case 10:
        bVar8 = sub_69866( uParam1 );
        break;
        case 11:
        bVar8 = sub_70005( uParam1 );
        break;
        case 12:
        bVar8 = sub_70304( uParam1 );
        break;
        case 13:
        bVar8 = sub_70532( uParam1 );
        break;
        case 14:
        bVar8 = sub_70819( uParam1 );
        break;
        case 15:
        bVar8 = sub_71101( uParam1 );
        break;
        case 16:
        bVar8 = sub_71383( uParam1 );
        break;
        case 17:
        bVar8 = sub_71584( uParam1 );
        break;
        case 18:
        bVar8 = sub_71657( uParam1 );
        break;
        case 19:
        bVar8 = sub_71871( uParam1 );
        break;
        case 20:
        bVar8 = sub_72124( uParam1 );
        break;
        case 21:
        bVar8 = sub_72371( uParam1 );
        break;
        case 22:
        bVar8 = sub_72572( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_67232( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_64855( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_72895( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_65549(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_65828( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_65828( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_65828( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_65828( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_65828( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_65828( iVar3, 0, 3, 1, 0, 0 );
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
        sub_65828( iVar3, 0, sub_67110(), sub_67376(), 0, 0 );
        break;
        default:
        sub_67535( "Friend 1", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Friend 1", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_65828(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_65839( uParam1 );
    sub_66013( uParam0, 0, uParam2 );
    sub_66013( uParam0, 1, uParam3 );
    sub_66013( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_64090();
    return;
}

void sub_65839(unknown uParam0)
{
    ADD_SCORE( sub_3094(), uParam0 );
    sub_65864( uParam0 );
    return;
}

void sub_65864(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2039( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_66013(unknown uParam0, int iParam1, int iParam2)
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
        sub_66170( uParam0 );
    }
    return;
}

void sub_66170(unknown uParam0)
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

int sub_67110()
{
    switch (l_U1037[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_67232( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_67232(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_67376()
{
    switch (l_U1037[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_67232( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_67535(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_67627(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 2", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 2", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67853(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_67535( "Girl 3", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Girl 3", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68003(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_65828( iVar3, 0, sub_67110(), sub_67376(), 0, 0 );
        break;
        default:
        sub_67535( "Friend 4", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Friend 4", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68281(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 5", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 5", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68584(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 7", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 7", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68783(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 7b", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 7b", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69009(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_65828( iVar3, 0, sub_67110(), sub_67376(), 0, 0 );
        break;
        default:
        sub_67535( "Friend 8", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Friend 8", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69244(unknown uParam0)
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
        sub_65828( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_65828( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_65828( iVar3, 0, sub_67110(), sub_67376(), 0, 0 );
        break;
        default:
        sub_67535( "Friend 9", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Friend 9", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69619(unknown uParam0)
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
        sub_65828( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_65828( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_65828( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_67535( "Contact 10", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_67535( "Contact 10", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69866(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_67535( "Girl 11", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Girl 11", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70005(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_67535( "Contact 12", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 12", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70304(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 13", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 13", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_65828( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_65828( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_65828( iVar3, 0, sub_67110(), sub_67376(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_67535( "Friend 15", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Friend 15", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70819(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 16", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 16", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71101(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65828( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_67535( "Contact 18", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 18", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71383(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 19", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 19", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71584(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_67535( "Girl 20", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71657(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_67535( "Contact 21", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 21", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71871(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65828( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_67535( "Contact 22", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 22", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72124(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_65828( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65828( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65828( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_67535( "Contact 24", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 24", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65828( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65828( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65828( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_67535( "Contact 25", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_67535( "Contact 25", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72572(unknown uParam0)
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
        sub_65828( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_67535( "Girl 26", 1 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_67535( "Girl 26", 0 );
        sub_65828( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_72895(int iParam0, int iParam1)
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
    if (sub_72943( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_73674( iParam1 );
    }
    return;
}

int sub_72943(int iParam0, int iParam1)
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
            sub_73083( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_73083(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_73265( 0 );
    return;
}

void sub_73265(boolean bParam0)
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
        sub_73520();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_73520()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_73674(int iParam0)
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
        sub_74007( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_74007( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_74007( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_74007( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_74007( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_74007( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_74007( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_74007( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_74007( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_74007( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_74007( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_74007( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_74007( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_74007( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_74007( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_74007( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_74007( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_74007( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_74007( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_74007(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_74717(unknown uParam0, unknown uParam1)
{
    sub_74736( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_74736(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_75147()
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

int sub_75232(int iParam0, int iParam1)
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

void sub_75289(unknown uParam0)
{
    sub_1426();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_75328(unknown uParam0)
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

void sub_75436()
{
    sub_75445();
    return;
}

void sub_75445()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_75524()
{
    sub_75445();
    return;
}

void sub_75564()
{
    sub_75445();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

int sub_76150(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((NOT (IS_THIS_MODEL_A_BOAT( uVar3 ))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar3 ))))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
            if (iVar4 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_76617()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_3094() ))
    {
        CLEAR_ROOM_FOR_CHAR( sub_3164() );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3164(), ref uVar2 );
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            CLEAR_ROOM_FOR_CAR( uVar2 );
        }
        WAIT( 0 );
    }
    return;
}

void sub_77022(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_CAM_EXIST( uParam0 ))
    {
        GET_CAM_POS( uParam0, ref uVar3, ref uVar4, ref uVar5 );
        LOAD_SCENE( uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_78219(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_78277( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_78277(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_11344( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_11344( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3094() )))
    {
        sub_11344( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3164() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3164() ))))
    {
        sub_11344( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_11344( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_78792()) AND (NOT bParam11))
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
                sub_11344( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_78792()) AND (NOT bParam11))
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
    sub_80164( uParam0, ref g_U91._fU176 );
    sub_81545( ref g_U91._fU160 );
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
        sub_9839( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_78792()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_78849())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_78849()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3094() )))
    {
        sub_11344( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_11344( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_11344( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_11344( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3094() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3164() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3164(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_11344( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3164() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_11344( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_11344( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3094() )))
    {
        sub_11344( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_80164(int iParam0, unknown uParam1)
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

void sub_81545(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_82094(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3164(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_11344( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_82544(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_82670()
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
