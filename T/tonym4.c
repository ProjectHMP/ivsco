void main()
{
    int I;
    unknown uVar3;
    int iVar4;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 350;
    l_U253 = 1.00000000;
    l_U254 = 20.00000000;
    l_U255 = 0.00000000;
    l_U256 = 0.50000000;
    l_U257 = 0;
    l_U262 = 1;
    l_U264 = 0.20000000;
    l_U269 = 0;
    l_U270 = 28;
    l_U310 = 0;
    l_U311 = 0;
    l_U312 = 0;
    l_U313 = {-477.53300000, 156.73000000, 6.55090000};
    l_U316 = {-481.89720000, 147.04190000, 6.55070000};
    l_U319 = {-480.67240000, 165.78080000, 10.61200000};
    l_U322 = {-477.60400000, 142.40070000, 6.55290000};
    l_U325 = {-468.55550000, 140.33990000, 8.85910000};
    l_U328 = 129.90300000;
    l_U329 = 104.42500000;
    l_U330 = 184.52100000;
    l_U331 = 90.00000000;
    l_U332 = 45.32310000;
    l_U341 = {-460.70340000, 149.11790000, 8.74160000};
    l_U345 = {108.50630000, -238.45420000, 13.71230000};
    l_U349 = 0;
    l_U350 = 0;
    l_U351 = 0;
    l_U352 = 1;
    l_U353 = 0;
    l_U354 = 0;
    l_U355 = 0;
    l_U356 = 0;
    l_U357 = 0;
    l_U358 = 0;
    l_U359 = 0;
    l_U360 = 0;
    l_U361 = 0;
    l_U362 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U367 = 8000;
    l_U405 = 1;
    l_U407 = 1;
    l_U409 = {-460.67510000, 152.90150000, 8.74310000};
    l_U412 = 183.67400000;
    l_U416 = {0.00000000, 0.30000000, 0.00000000};
    l_U419 = 40.00000000;
    l_U420 = 2000;
    l_U421 = 4.00000000;
    l_U424 = -45.00000000;
    l_U425 = 45.00000000;
    l_U426 = -89.00000000;
    l_U427 = 89.00000000;
    l_U429 = 50.00000000;
    l_U430 = {0.00000000, 0.00000000, 0.70000000};
    l_U450 = -1413227307;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 1;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U558 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 0;
    l_U563 = 0;
    l_U565 = 0;
    sub_811();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U368)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3424( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3567( "CLBPRC4", 0 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA4" )))
                        {
                            PRINT_HELP_FOREVER( "LA4" );
                        }
                        sub_3742();
                        SETTIMERA( 0 );
                        REQUEST_MODEL( 884422927 );
                        REQUEST_MODEL( -909201658 );
                        REQUEST_MODEL( l_U450 );
                        REQUEST_MODEL( 824245375 );
                        REQUEST_MODEL( 1376298265 );
                        REQUEST_MODEL( 1938952078 );
                        REQUEST_MODEL( -297585214 );
                        REQUEST_MODEL( 314506937 );
                        REQUEST_MODEL( -11396610 );
                        REQUEST_ANIMS( "misstonym4" );
                        sub_3567( "E2Tm4AU", 6 );
                        sub_5004( "E2Tm4AU" );
                        sub_5123( 0, sub_4156(), "LUIS", 0 );
                        g_U8781 = 0;
                        sub_5276( 28, 0 );
                        l_U368++;
                    }
                }
                break;
                case 1:
                sub_3742();
                if (((((((((((REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\PROC_PAPARAZZI" )) AND (HAS_MODEL_LOADED( 884422927 ))) AND (HAS_MODEL_LOADED( -909201658 ))) AND (HAS_MODEL_LOADED( l_U450 ))) AND (HAS_MODEL_LOADED( 824245375 ))) AND (HAS_MODEL_LOADED( 1376298265 ))) AND (HAS_MODEL_LOADED( -297585214 ))) AND (HAS_MODEL_LOADED( 314506937 ))) AND (HAS_MODEL_LOADED( -11396610 ))) AND (HAVE_ANIMS_LOADED( "misstonym4" ))) AND (HAS_MODEL_LOADED( 1938952078 )))
                {
                    l_U368++;
                }
                break;
                case 2:
                sub_3742();
                if (TIMERA() > 4000)
                {
                    sub_5652();
                    CLEAR_HELP();
                    l_U368++;
                }
                break;
                case 3:
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4156(), 0 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65346, 615, -10, 65391, 620, 100, 0 );
                SET_WANTED_MULTIPLIER( 0.50000000 );
                SET_WIDESCREEN_BORDERS( 1 );
                sub_6134( sub_4156() );
                sub_7216( 1 );
                OPEN_SEQUENCE_TASK( ref l_U333 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym4", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym4", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U333 );
                TASK_PERFORM_SEQUENCE( sub_4156(), l_U333 );
                CLEAR_SEQUENCE_TASK( l_U333 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5123( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7532( "E2Tm4_TODO", ref l_U568, 7, 0 );
                    }
                }
                l_U368++;
                break;
                case 4:
                if ((NOT (sub_8516( l_U568 ))) || (sub_8679()))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3424( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_4156() );
                    if (sub_8516( l_U568 ))
                    {
                        sub_8864( ref l_U568, 0 );
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    sub_8996();
                    sub_7216( 0 );
                    SET_PLAYER_CONTROL( sub_955(), 1 );
                    sub_9164();
                    sub_9739();
                    ADD_BLIP_FOR_CHAR( l_U271, ref l_U272 );
                    SET_BLIP_AS_FRIENDLY( l_U272, 1 );
                    sub_10247( l_U272 );
                    if (NOT (IS_CHAR_INJURED( l_U282[0] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U282[0], "look_around", "MISSTONYM4", 8.00000000, 1, 0, 0, 0, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U282[1] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U282[1], "Look_At_Watch", "MISSTONYM4", 8.00000000, 1, 0, 0, 0, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U271 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U333 );
                        TASK_LOOK_AT_CHAR( 0, sub_4156(), -2, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "female_chair_chat", "MISSTONYM4", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U333 );
                        TASK_PERFORM_SEQUENCE( l_U271, l_U333 );
                        CLEAR_SEQUENCE_TASK( l_U333 );
                    }
                    l_U368++;
                }
                break;
                case 5:
                l_U368 = 0;
                SET_PLAYER_CONTROL( sub_955(), 1 );
                PRINT( "CP4_13", 7500, 0 );
                l_U269 = 4;
                break;
            }
            break;
            case 4:
            sub_10643();
            sub_10956();
            sub_11820();
            if ((DOES_CHAR_EXIST( l_U271 )) AND (NOT (IS_CHAR_DEAD( l_U271 ))))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_955(), 0 )))
                {
                    if ((sub_11011( sub_4156(), l_U271, 1 )) < 3)
                    {
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_13", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_THIS_PRINT( "CP4_13" );
                        }
                        if (NOT l_U519)
                        {
                            sub_13254( ref l_U527, "E2Tm4_POP1", "E2Tm4_POP2" );
                            sub_13601( ref l_U527, ref l_U568, 7, 1 );
                            SETTIMERA( 0 );
                            l_U519 = 1;
                        }
                        if (NOT l_U522)
                        {
                            sub_13696();
                            l_U522 = 1;
                        }
                        if (DOES_BLIP_EXIST( l_U272 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
                        }
                    }
                }
            }
            if (l_U519)
            {
                if (TIMERA() > 8000)
                {
                    if (NOT l_U520)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U271 )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U271 );
                        }
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_4156(), "luis_check_earpiece", "misstonym4", 8.00000000, 0, 0, 0, 0, 0 );
                        if (g_U30199 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                            {
                                sub_5123( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_16214( ref l_U536, "E2Tm4_POP3", "E2Tm4_TRUCK", "E2Tm4_POP4" );
                                sub_13601( ref l_U536, ref l_U568, 7, 1 );
                            }
                        }
                        sub_16290();
                        l_U520 = 1;
                        l_U269 = 5;
                    }
                }
            }
            break;
            case 5:
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U276 )))
                {
                    ADD_BLIP_FOR_CAR( l_U275, ref l_U276 );
                    sub_10247( l_U276 );
                    SET_BLIP_AS_FRIENDLY( l_U276, 1 );
                    SET_ROUTE( l_U276, 1 );
                }
            }
            SETTIMERA( 0 );
            l_U269 = 6;
            break;
            case 6:
            sub_11820();
            if (NOT (sub_16500( 0 )))
            {
                if (NOT l_U358)
                {
                    PRINT( "CP4_04", 7500, 0 );
                    l_U358 = 1;
                }
            }
            sub_10643();
            sub_16776();
            if (sub_17010())
            {
                l_U269 = 16;
            }
            for ( l_U365 = 0; l_U365 <= 2; l_U365++ )
            {
                if (DOES_VEHICLE_EXIST( l_U451[l_U365] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U451[l_U365] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_4156(), l_U451[l_U365] ))
                        {
                            if (NOT l_U558)
                            {
                                sub_7532( "E2Tm4_POP5", ref l_U568, 7, 1 );
                                l_U558 = 1;
                            }
                            for ( I = 0; I <= 8; I++ )
                            {
                                if (DOES_CHAR_EXIST( l_U440[I] ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U440[I] )))
                                    {
                                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[I] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U440[I], "SUPRISED", 1, 1, 2 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT IS_INTERIOR_SCENE())
            {
                if (NOT l_U524)
                {
                    if (TIMERA() > 5000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U440[1] )))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[1] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U440[1], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                                l_U524 = 1;
                            }
                        }
                    }
                }
                if (NOT l_U525)
                {
                    if (TIMERA() > 7500)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U440[3] )))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[3] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U440[3], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                                l_U525 = 1;
                            }
                        }
                    }
                }
                if (NOT l_U526)
                {
                    if (TIMERA() > 10000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U440[4] )))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[4] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U440[4], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                                l_U526 = 1;
                            }
                        }
                    }
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U277 );
                if (DOES_VEHICLE_EXIST( l_U277 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U277 ))
                    {
                        if (IS_CAR_MODEL( l_U277, 1938952078 ))
                        {
                            if (l_U277 != l_U275)
                            {
                                sub_17916();
                            }
                            l_U275 = l_U277;
                            l_U269 = 7;
                        }
                    }
                }
            }
            break;
            case 7:
            if (DOES_BLIP_EXIST( l_U276 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
            }
            SWITCH_ROADS_OFF( 65074, 97, -10, 65087, 197, 10 );
            l_U269 = 8;
            break;
            case 8:
            sub_10643();
            sub_16776();
            sub_18058();
            sub_11820();
            if (sub_17010())
            {
                l_U269 = 16;
            }
            if (DOES_VEHICLE_EXIST( l_U275 ))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    if (sub_18321( l_U275, -453.93120000, 154.34930000, 8.81870000, 50, 50, 2.50000000, 0, "CP4_02", "CP4_19", 1, "CP4_10" ))
                    {
                        for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
                        {
                            if (NOT (IS_CHAR_DEAD( l_U440[l_U365] )))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U455[l_U365] )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U440[l_U365], ref l_U455[l_U365] );
                                    sub_10247( l_U455[l_U365] );
                                    CHANGE_BLIP_SCALE( l_U455[l_U365], 0.50000000 );
                                }
                            }
                        }
                        l_U300[0] = 0;
                        l_U300[1] = 0;
                        l_U300[2] = 0;
                        l_U300[3] = 0;
                        l_U300[4] = 0;
                        l_U300[5] = 0;
                        l_U300[6] = 0;
                        l_U300[7] = 0;
                        l_U300[8] = 0;
                        SETTIMERA( 0 );
                        l_U269 = 9;
                    }
                }
            }
            break;
            case 9:
            sub_10643();
            sub_24709();
            sub_11820();
            sub_16776();
            sub_18058();
            sub_25218();
            if (sub_17010())
            {
                l_U269 = 16;
            }
            if (NOT l_U524)
            {
                if (TIMERA() > 3000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U440[0] )))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U440[0], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                            l_U524 = 1;
                        }
                    }
                }
            }
            if (NOT l_U525)
            {
                if (TIMERA() > 5500)
                {
                    if (NOT (IS_CHAR_INJURED( l_U440[2] )))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[2] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U440[2], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                            l_U525 = 1;
                        }
                    }
                }
            }
            if (NOT l_U526)
            {
                if (TIMERA() > 8000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U440[5] )))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U440[5] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U440[5], "PAPARAZZI_TAUNT_POPPY", 1, 1, 2 );
                            l_U526 = 1;
                        }
                    }
                }
            }
            if (l_U564 < 1)
            {
                sub_25844();
                l_U357 = 1;
            }
            if (l_U564 > 0)
            {
                if (NOT l_U359)
                {
                    PRINT( "CP4_20", 7500, 0 );
                    l_U359 = 1;
                }
                else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_20", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    if (NOT l_U361)
                    {
                        PRINT_HELP( "CP4_15" );
                        l_U361 = 1;
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U277 ))
            {
                if (IS_VEH_DRIVEABLE( l_U277 ))
                {
                    if ((IS_CAR_SIREN_ON( l_U277 )) || (l_U564 < 9))
                    {
                        for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
                        {
                            if (DOES_CHAR_EXIST( l_U440[l_U365] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U440[l_U365] )))
                                {
                                    if (NOT l_U300[l_U365])
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U333 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4156() );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "handsup", "misstonym4", 8.00000000, 1, 0, 0, 0, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U333 );
                                        TASK_PERFORM_SEQUENCE( l_U440[l_U365], l_U333 );
                                        CLEAR_SEQUENCE_TASK( l_U333 );
                                        SAY_AMBIENT_SPEECH( l_U440[l_U365], "SURPRISED", 1, 1, 2 );
                                        l_U300[l_U365] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (l_U357)
            {
                if (DOES_BLIP_EXIST( l_U276 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
                }
                l_U269 = 11;
            }
            break;
            case 11:
            sub_10643();
            sub_26494();
            sub_11820();
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_955(), 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U271 )))
                {
                    if (NOT l_U311)
                    {
                        SET_CHAR_COORDINATES( l_U271, -472.76680000, 154.59440000, 8.85890000 );
                        SET_CHAR_HEADING( l_U271, 268.02210000 );
                        CLEAR_ROOM_FOR_CHAR( l_U271 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U271, "E2_MaisonRoomsteps1" );
                        SET_CHAR_COLLISION( l_U271, 1 );
                        for ( l_U365 = 0; l_U365 <= 1; l_U365++ )
                        {
                            if (DOES_CHAR_EXIST( l_U282[l_U365] ))
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282[l_U365] );
                            }
                        }
                        l_U311 = 1;
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U272 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U271, ref l_U272 );
                        SET_BLIP_AS_FRIENDLY( l_U272, 1 );
                        sub_10247( l_U272 );
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4156(), -472.76680000, 154.59440000, 8.85890000, 20, 20, 5, 0 ))
                {
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_13", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_THIS_PRINT( "CP4_13" );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U271 )))
                    {
                        TASK_GO_TO_CHAR( l_U271, sub_4156(), 120000, 3 );
                    }
                    PRINT( "CP4_14", 7500, 0 );
                    l_U269 = 12;
                }
                else if (NOT l_U310)
                {
                    PRINT( "CP4_13", 7500, 0 );
                    l_U310 = 1;
                }
            }
            break;
            case 12:
            sub_10643();
            sub_10956();
            sub_11820();
            if (NOT l_U362)
            {
                if (DOES_CHAR_EXIST( l_U271 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U271 )))
                    {
                        if (NOT (sub_12124( l_U271, 1, 0 )))
                        {
                            if (g_U30199 != -1)
                            {
                                if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
                                    {
                                        if ((sub_11011( g_U29971[g_U30199]._fU12, sub_4156(), 1 )) < 20)
                                        {
                                            if (NOT (sub_16500( 0 )))
                                            {
                                                sub_5123( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                                sub_7532( "E2Tm4_SRTD", ref l_U568, 7, 1 );
                                                l_U362 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_955(), 0 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U271 )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U272 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U271, ref l_U272 );
                        sub_10247( l_U272 );
                        SET_BLIP_AS_FRIENDLY( l_U272, 1 );
                    }
                    if ((sub_11011( sub_4156(), l_U271, 1 )) < 8)
                    {
                        if (DOES_BLIP_EXIST( l_U272 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
                        }
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_14", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_THIS_PRINT( "CP4_14" );
                        }
                        if (NOT (sub_8516( l_U568 )))
                        {
                            sub_7532( "E2Tm4_POP7", ref l_U568, 6, 1 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U271 )))
                        {
                            if (NOT (IS_PED_IN_GROUP( l_U271 )))
                            {
                                SET_GROUP_MEMBER( sub_27672(), l_U271 );
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_4156(), ref uVar3 );
                            }
                            if (DOES_VEHICLE_EXIST( uVar3 ))
                            {
                                if (IS_VEH_DRIVEABLE( uVar3 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U271 )))
                                    {
                                        if (IS_CHAR_IN_CAR( sub_4156(), uVar3 ))
                                        {
                                            TASK_ENTER_CAR_AS_PASSENGER( l_U271, uVar3, 120000, 0 );
                                        }
                                    }
                                }
                            }
                        }
                        l_U269 = 14;
                    }
                }
                if (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_10", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_THIS_PRINT( "CP4_10" );
                }
            }
            else if (NOT l_U518)
            {
                PRINT_NOW( "CP4_10", 7500, 0 );
                l_U518 = 1;
            }
            if (DOES_BLIP_EXIST( l_U272 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
            }
            break;
            case 14:
            sub_10643();
            sub_10956();
            sub_11820();
            if (NOT l_U559)
            {
                if (DOES_VEHICLE_EXIST( uVar3 ))
                {
                    if (IS_VEH_DRIVEABLE( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U271 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_4156(), uVar3 )))
                            {
                                CLEAR_CHAR_TASKS( l_U271 );
                                l_U559 = 1;
                            }
                            else if (IS_CAR_MODEL( uVar3, 1938952078 ))
                            {
                                if (IS_CHAR_IN_CAR( l_U271, uVar3 ))
                                {
                                    if (sub_28132( l_U271, sub_4156(), 0 ))
                                    {
                                        if (NOT (sub_8516( l_U568 )))
                                        {
                                            if (NOT l_U560)
                                            {
                                                sub_7532( "E2Tm4_POP9", ref l_U568, 7, 1 );
                                                l_U560 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U561)
            {
                sub_7532( "E2Tm4_POP8", ref l_U568, 7, 1 );
                SETTIMERA( 0 );
                l_U561 = 1;
            }
            if (NOT (sub_16500( 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U271 )))
                {
                    if (sub_28132( l_U271, sub_4156(), 0 ))
                    {
                        if (l_U561)
                        {
                            if (TIMERA() > 20000)
                            {
                                if (NOT l_U562)
                                {
                                    if (g_U43687 == 0)
                                    {
                                        sub_13254( ref l_U549, "E2Tm4_POP10", "E2Tm4_POP11" );
                                        sub_13601( ref l_U549, ref l_U568, 7, 1 );
                                    }
                                    else if (g_U43687 == 1)
                                    {
                                        sub_13254( ref l_U549, "E2Tm4_POP12", "E2Tm4_POP13" );
                                        sub_13601( ref l_U549, ref l_U568, 7, 1 );
                                    }
                                    else if (g_U43687 > 1)
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
                                        if (iVar4 == 0)
                                        {
                                            sub_13254( ref l_U549, "E2Tm4_POP10", "E2Tm4_POP11" );
                                            sub_13601( ref l_U549, ref l_U568, 7, 1 );
                                        }
                                        else if (iVar4 == 1)
                                        {
                                            sub_13254( ref l_U549, "E2Tm4_POP12", "E2Tm4_POP13" );
                                            sub_13601( ref l_U549, ref l_U568, 7, 1 );
                                        }
                                    };;;
                                    l_U562 = 1;
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_8864( ref l_U568, 1 );
                    }
                }
            }
            if (sub_28978( l_U345._fU0, l_U345._fU4, l_U345._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U271, "CP4_12", "CP4_05", "CP4_03", 0, 1, "CP4_10" ))
            {
                SET_PLAYER_CONTROL( sub_955(), 0 );
                l_U269 = 15;
            }
            break;
            case 15:
            sub_35995();
            sub_37989( 28, "E2Tm4_SORTD", "E2Tm4AU", 0 );
            sub_38677();
            break;
            case 16:
            if (NOT l_U563)
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                CLEAR_PRINTS();
                sub_11173();
                sub_11323();
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
                        {
                            if ((sub_11011( g_U29971[g_U30199]._fU12, sub_4156(), 1 )) < 20)
                            {
                                sub_5123( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_7532( "E2Tm4_HURT", ref l_U568, 7, 1 );
                            }
                        }
                    }
                }
                l_U563 = 1;
            }
            else if (NOT l_U523)
            {
                if (NOT (sub_16500( 0 )))
                {
                    PRINT( "CP4_09", 7000, 0 );
                    sub_11785();
                }
            }
            break;
            case 17:
            if (NOT l_U523)
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                CLEAR_PRINTS();
                sub_11173();
                sub_11323();
                if (DOES_CHAR_EXIST( l_U271 ))
                {
                    if (IS_CHAR_INJURED( l_U271 ))
                    {
                        for ( l_U365 = 0; l_U365 <= 1; l_U365++ )
                        {
                            if (DOES_CHAR_EXIST( l_U282[l_U365] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U282[l_U365] )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U282[l_U365], sub_4156(), 150, 120000 );
                                }
                            }
                        }
                        PRINT( "CP4_07", 7500, 0 );
                        l_U523 = 1;
                    }
                    else
                    {
                        TASK_SMART_FLEE_CHAR( l_U271, sub_4156(), 150, 120000 );
                        PRINT( "CP4_11", 7500, 0 );
                        l_U523 = 1;
                    }
                }
            }
            else if (NOT (sub_16500( 0 )))
            {
                sub_37989( 28, "E2Tm4_PHURT", "E2Tm4AU", 0 );
                sub_11785();
            }
            break;
            case 18:
            if (NOT l_U523)
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                CLEAR_PRINTS();
                sub_11173();
                sub_11323();
                PRINT( "CP4_16", 7500, 0 );
                if (DOES_VEHICLE_EXIST( l_U275 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U275 )))
                    {
                        SET_CAR_ENGINE_ON( l_U275, 0, 1 );
                        SET_ENGINE_HEALTH( l_U275, -1 );
                    }
                }
                l_U523 = 1;
            }
            else if (NOT (sub_16500( 0 )))
            {
                sub_40956();
                sub_37989( 28, l_U289, "E2Tm4AU", 0 );
                sub_11785();
            }
            break;
        }
    }
    return;
}

void sub_811()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_832();
        sub_2752();
    }
    return;
}

void sub_832()
{
    int iVar2;

    iVar2 = 0;
    sub_846( iVar2 );
    sub_1790();
    return;
}

void sub_846(unknown uParam0)
{
    if (g_U819)
    {
        sub_865();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_955(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_1028( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1560( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1695();
    return;
}

void sub_865()
{
    sub_874();
    return;
}

void sub_874()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_955()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1028(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_1039( uParam1 );
    sub_1234( uParam0, 0, uParam2 );
    sub_1234( uParam0, 1, uParam3 );
    sub_1234( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1427();
    return;
}

void sub_1039(unknown uParam0)
{
    ADD_SCORE( sub_955(), uParam0 );
    sub_1064( uParam0 );
    return;
}

void sub_1064(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1175( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1175(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1234(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_1427()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1560(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1695()
{
    sub_1704();
    return;
}

void sub_1704()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1790()
{
    int iVar2;

    iVar2 = 0;
    sub_1802();
    return;
}

void sub_1802()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1826();
    sub_2450();
    sub_2486( iVar2, 0 );
    sub_2569();
    sub_2608();
    g_U30097[1] = 0;
    return;
}

void sub_1826()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_1864( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_1864( 1, g_U575[I] )) != 0)
            {
                sub_2150( I );
            }
        }
    }
    if (NOT sub_2316())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_1864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2150(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2235( g_U575 - 1 );
    return;
}

void sub_2235(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2316()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1864( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2450()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2486(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2569()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2608()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2630();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2630()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2752()
{
    g_U30180 = 0;
    g_U8781 = 1;
    if (DOES_BLIP_EXIST( l_U272 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
    }
    if (DOES_BLIP_EXIST( l_U348 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U348 );
    }
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        if (DOES_BLIP_EXIST( l_U455[l_U365] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U455[l_U365] );
        }
        if (DOES_CHAR_EXIST( l_U440[l_U365] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U440[l_U365] );
        }
    }
    if (DOES_CHAR_EXIST( l_U271 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U271 );
    }
    if (DOES_CHAR_EXIST( l_U282[0] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282[0] );
    }
    if (DOES_CHAR_EXIST( l_U282[1] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282[1] );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( 65346, 600, 0, 65396, 640, 50 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    g_U43687++;
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3424(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_3567(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3603())
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

int sub_3603()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3742()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3752( 1 );
    if (DOES_CAM_EXIST( l_U413 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if ((iVar6 > 28) || (iVar6 < 65508))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U421;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U423 += fVar2;
            if (l_U423 < l_U424)
            {
                l_U423 = l_U424;
            }
            if (l_U423 > l_U425)
            {
                l_U423 = l_U425;
            }
        }
        if ((iVar5 > 28) || (iVar5 < 65508))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U421;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U422 += fVar2;
            if (l_U422 < l_U426)
            {
                l_U422 = l_U426;
            }
            if (l_U422 > l_U427)
            {
                l_U422 = l_U427;
            }
        }
        sub_4216( sub_4156(), ref l_U413, l_U423, 0.00000000, l_U422 );
        SET_CAM_FOV( l_U413, l_U429 );
        SET_CAM_ATTACH_OFFSET( l_U413, l_U430._fU0, l_U430._fU4, l_U430._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U438 ))
    {
        sub_4409();
    }
    BEGIN_CAM_COMMANDS( ref l_U439 );
    if (DOES_CAM_EXIST( l_U413 ))
    {
        DESTROY_CAM( l_U413 );
    }
    CREATE_CAM( 14, ref l_U413 );
    ATTACH_CAM_TO_PED( l_U413, sub_4156() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U413, 1 );
    SET_CAM_NEAR_CLIP( l_U413, 0.01000000 );
    l_U422 = 0.00000000;
    l_U423 = -9.00000000;
    sub_4216( sub_4156(), ref l_U413, l_U423, 0.00000000, l_U422 );
    SET_CAM_FOV( l_U413, l_U429 );
    SET_CAM_ATTACH_OFFSET( l_U413, l_U430._fU0, l_U430._fU4, l_U430._fU8 );
    SET_CAM_ACTIVE( l_U413, 1 );
    SET_CAM_PROPAGATE( l_U413, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        FREEZE_CHAR_POSITION( sub_4156(), 1 );
        SET_CHAR_VISIBLE( sub_4156(), 0 );
    }
    return;
}

void sub_3752(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_4156()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4216(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CHAR_HEADING( uParam0, ref uVar7 );
            vVar8.x = 0.00000000;
            vVar8.y = 0.00000000;
            vVar8.z = uVar7;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_4409()
{
    for ( l_U365 = 0; l_U365 < l_U433; l_U365++ )
    {
        if (DOES_CAM_EXIST( l_U433[l_U365] ))
        {
            DESTROY_CAM( l_U433[l_U365] );
        }
    }
    if (DOES_CAM_EXIST( l_U438 ))
    {
        DESTROY_CAM( l_U438 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U439 );
    }
    return;
}

void sub_5004(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_5021();
    return;
}

void sub_5021()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_5123(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5203( "\n PED NUMBER ", uParam0 );
    sub_5243( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5203(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5243(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5276(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_5652()
{
    sub_3752( 0 );
    sub_4409();
    if (DOES_CAM_EXIST( l_U414 ))
    {
        DESTROY_CAM( l_U414 );
    }
    if (DOES_CAM_EXIST( l_U415 ))
    {
        DESTROY_CAM( l_U415 );
    }
    if (DOES_CAM_EXIST( l_U413 ))
    {
        DESTROY_CAM( l_U413 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_955() ))
        {
            FREEZE_CHAR_POSITION( sub_4156(), 0 );
            SET_CHAR_VISIBLE( sub_4156(), 1 );
            if (DOES_CHAR_EXIST( l_U271 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U271 )))
                {
                    sub_5856( sub_4156(), l_U271 );
                }
            }
            SET_CAM_BEHIND_PED( sub_4156() );
        }
        END_CAM_COMMANDS( ref l_U439 );
    }
    return;
}

void sub_5856(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_6134(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U433[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U433[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U433[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[0], uParam0 );
        POINT_CAM_AT_PED( l_U433[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U433[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U433[0], 1 );
    }
    SET_CAM_FOV( l_U433[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U433[0], 1 );
    CREATE_CAM( 14, ref l_U433[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U433[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U433[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[1], uParam0 );
        POINT_CAM_AT_PED( l_U433[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U433[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U433[1], 1 );
    }
    SET_CAM_FOV( l_U433[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U433[1], 1 );
    CREATE_CAM( 14, ref l_U433[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U433[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U433[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[2], uParam0 );
        POINT_CAM_AT_PED( l_U433[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U433[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U433[2], 1 );
    }
    SET_CAM_FOV( l_U433[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U433[2], 1 );
    CREATE_CAM( 14, ref l_U433[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U433[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U433[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U433[3], uParam0 );
        POINT_CAM_AT_PED( l_U433[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U433[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U433[3], 1 );
    }
    SET_CAM_FOV( l_U433[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U433[3], 1 );
    CREATE_CAM( 25, ref l_U438 );
    SET_CAM_SPLINE_DURATION( l_U438, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U438, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U438, 0 );
    ADD_CAM_SPLINE_NODE( l_U438, l_U433[0] );
    ADD_CAM_SPLINE_NODE( l_U438, l_U433[1] );
    ADD_CAM_SPLINE_NODE( l_U438, l_U433[2] );
    ADD_CAM_SPLINE_NODE( l_U438, l_U433[3] );
    SET_CAM_ACTIVE( l_U438, 1 );
    SET_CAM_PROPAGATE( l_U438, 1 );
    return;
}

void sub_7216(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_7532(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7553( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_7553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7607( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7607(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7629( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_8317( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7629(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7706( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_7706( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_7706( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_7706(unknown uParam0)
{
    return;
}

void sub_8317(int iParam0, int iParam1)
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

int sub_8516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7706( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7706( "\n speech is not playing" );
    }
    return 0;
}

int sub_8679()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8864(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_8996()
{
    for ( l_U365 = 0; l_U365 < l_U433; l_U365++ )
    {
        if (DOES_CAM_EXIST( l_U433[l_U365] ))
        {
            DESTROY_CAM( l_U433[l_U365] );
        }
    }
    if (DOES_CAM_EXIST( l_U438 ))
    {
        DESTROY_CAM( l_U438 );
    }
    SET_CAM_BEHIND_PED( sub_4156() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_9164()
{
    vector vVar2;
    float fVar5;

    vVar2 = {-481.85000000, 159.50000000, 10.55000000};
    fVar5 = 331.74690000;
    sub_9205( vVar2, 4, 1 );
    CREATE_CHAR( 26, 824245375, vVar2.x, vVar2.y, vVar2.z, ref l_U271, 1 );
    SET_CHAR_HEADING( l_U271, fVar5 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U271, "E2_MaisonRoomtop" );
    SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U271, 1 );
    SET_CHAR_COLLISION( l_U271, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U271, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U271, 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U271, 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U271, 7, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U271, 2, 0, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U271, 1 );
    sub_5123( 2, l_U271, "POPPY", 0 );
    SET_AMBIENT_VOICE_NAME( l_U271, "POPPY" );
    l_U521 = 1;
    return;
}

void sub_9205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_9258( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3, uParam4 );
    return;
}

void sub_9258(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    g_U30158[uParam6] = 1;
    if (uParam0._fU0 < uParam3._fU0)
    {
        g_U30251._fU0 = uParam0._fU0;
        g_U30254._fU0 = uParam3._fU0;
    }
    else
    {
        g_U30251._fU0 = uParam3._fU0;
        g_U30254._fU0 = uParam0._fU0;
    }
    if (uParam0._fU4 < uParam3._fU4)
    {
        g_U30251._fU4 = uParam0._fU4;
        g_U30254._fU4 = uParam3._fU4;
    }
    else
    {
        g_U30251._fU4 = uParam3._fU4;
        g_U30254._fU4 = uParam0._fU4;
    }
    if (uParam0._fU8 < uParam3._fU8)
    {
        g_U30251._fU8 = uParam0._fU8;
        g_U30254._fU8 = uParam3._fU8;
    }
    else
    {
        g_U30251._fU8 = uParam3._fU8;
        g_U30254._fU8 = uParam0._fU8;
    }
    g_U30230[uParam6] = GET_ID_OF_THIS_THREAD();
    return;
}

void sub_9739()
{
    CREATE_CHAR( 26, -297585214, -480.62630000, 161.08920000, 10.61850000, ref l_U282[0], 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U282[0], "E2_MaisonRoomtop" );
    SET_CHAR_HEADING( l_U282[0], 141.17170000 );
    CREATE_CHAR( 26, -297585214, -481.04900000, 159.60710000, 10.61870000, ref l_U282[1], 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U282[1], "E2_MaisonRoomtop" );
    SET_CHAR_HEADING( l_U282[1], 356.15910000 );
    for ( l_U365 = 0; l_U365 <= 1; l_U365++ )
    {
        SET_CHAR_RELATIONSHIP_GROUP( l_U282[l_U365], 23 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U282[l_U365], 1 );
        SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U282[l_U365], 1 );
    }
    SET_CHAR_COMPONENT_VARIATION( l_U282[0], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[0], 7, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[0], 2, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[0], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[1], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[1], 7, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[1], 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[1], 2, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U282[1], 3, 0, 1 );
    return;
}

void sub_10247(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_10643()
{
    if (DOES_CHAR_EXIST( l_U271 ))
    {
        if (IS_CHAR_INJURED( l_U271 ))
        {
            sub_10687( 0 );
            sub_8864( ref l_U568, 0 );
            l_U269 = 17;
        }
    }
    for ( l_U365 = 0; l_U365 <= 1; l_U365++ )
    {
        if (DOES_CHAR_EXIST( l_U282[l_U365] ))
        {
            if (IS_CHAR_INJURED( l_U282[l_U365] ))
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                l_U269 = 17;
            }
        }
    }
    return;
}

void sub_10687(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 1) AND (g_U8865 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_10956()
{
    if (DOES_CHAR_EXIST( l_U271 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U271 )))
        {
            if ((sub_11011( sub_4156(), l_U271, 1 )) > 150)
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                CLEAR_PRINTS();
                sub_11173();
                sub_11323();
                PRINT_NOW( "CP4_06", 7000, 0 );
                sub_11785();
            }
        }
    }
    return;
}

void sub_11011(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_11024( uParam0, uParam2 ), sub_11024( uParam1, uParam2 ) );
}

void sub_11024(unknown uParam0, boolean bParam1)
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

void sub_11173()
{
    if (DOES_BLIP_EXIST( l_U272 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
    }
    if (DOES_BLIP_EXIST( l_U276 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
    }
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        if (DOES_BLIP_EXIST( l_U455[l_U365] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U455[l_U365] );
        }
    }
    return;
}

void sub_11323()
{
    int I;

    sub_11332();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U229 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
    }
    l_U235 = nil;
    l_U209 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        l_U210[I] = 0;
        l_U225[I] = 0;
    }
    l_U205 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U208 = 0;
    l_U207 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U241 = 0;
    for ( I = 0; I < l_U243; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_4156(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4156(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_11332()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_11785()
{
    sub_832();
    sub_2752();
    return;
}

void sub_11820()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_4156(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_10687( 0 );
                    sub_8864( ref l_U568, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP4_23", 7000, 0 );
                    sub_11785();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_4156(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_10687( 0 );
                    sub_8864( ref l_U568, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP4_23", 7000, 0 );
                    sub_11785();
                }
            }
        }
    }
    if ((sub_12124( sub_4156(), 1, 1 )) || (sub_12124( sub_4156(), 2, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_4156() ))
        {
            sub_10687( 0 );
            sub_8864( ref l_U568, 0 );
            CLEAR_PRINTS();
            PRINT( "CP4_23", 7000, 0 );
            sub_11785();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_4156(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_10687( 0 );
                    sub_8864( ref l_U568, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP4_23", 7000, 0 );
                    sub_11785();
                }
            }
        }
    }
    return;
}

int sub_12124(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12152( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_12152(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_4156(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_13254(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_13305( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_13305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_13601(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13622( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_13622(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7607( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_13696()
{
    l_U465[0] = {-461.13330000, 161.69340000, 8.71930000};
    l_U502[0] = 6.19120000;
    l_U465[1] = {-450.85340000, 153.17110000, 8.70080000};
    l_U502[1] = 7.08170000;
    l_U465[2] = {-465.41270000, 167.80490000, 8.86880000};
    l_U502[2] = 152.72690000;
    l_U465[3] = {-447.75340000, 159.30160000, 8.84440000};
    l_U502[3] = 82.35020000;
    l_U465[4] = {-447.89600000, 160.59050000, 8.86250000};
    l_U502[4] = 166.19890000;
    l_U465[5] = {-464.67520000, 141.40550000, 8.85730000};
    l_U502[5] = 312.08960000;
    l_U465[6] = {-464.70350000, 142.46140000, 8.85820000};
    l_U502[6] = 157.99210000;
    l_U465[7] = {-463.47550000, 165.31200000, 8.85890000};
    l_U502[7] = 200.97440000;
    l_U465[8] = {-464.63940000, 164.19640000, 8.85890000};
    l_U502[8] = 330.80660000;
    l_U465[9] = {-462.88220000, 164.35210000, 8.85890000};
    l_U502[9] = 98.19410000;
    l_U465[10] = {-449.02950000, 153.30560000, 8.80120000};
    l_U502[10] = 94.62280000;
    l_U465[11] = {-448.85860000, 154.00840000, 8.79240000};
    l_U502[11] = 123.12950000;
    CREATE_CAR( -909201658, l_U465[0]._fU0, l_U465[0]._fU4, l_U465[0]._fU8, ref l_U451[0], 1 );
    CHANGE_CAR_COLOUR( l_U451[0], 68, 1 );
    SET_CAR_HEADING( l_U451[0], l_U502[0] );
    CREATE_CAR( -909201658, l_U465[1]._fU0, l_U465[1]._fU4, l_U465[1]._fU8, ref l_U451[1], 1 );
    CHANGE_CAR_COLOUR( l_U451[1], 68, 1 );
    SET_CAR_HEADING( l_U451[1], l_U502[1] );
    CREATE_CAR( 884422927, l_U465[2]._fU0, l_U465[2]._fU4, l_U465[2]._fU8, ref l_U451[2], 1 );
    CHANGE_CAR_COLOUR( l_U451[2], 68, 0 );
    SET_CAR_HEADING( l_U451[2], l_U502[2] );
    TURN_OFF_VEHICLE_EXTRA( l_U451[2], 1, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U451[2], 2, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U451[2], 3, 1 );
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        CREATE_CHAR( 26, l_U450, l_U465[l_U365 + 3]._fU0, l_U465[l_U365 + 3]._fU4, l_U465[l_U365 + 3]._fU8, ref l_U440[l_U365], 1 );
        SET_CHAR_HEADING( l_U440[l_U365], l_U502[l_U365 + 3] );
    }
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U440[l_U365], 2 );
        SET_CHAR_HEALTH( l_U440[l_U365], 200 );
        SET_CHAR_MAX_HEALTH( l_U440[l_U365], 200 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U440[l_U365], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U440[l_U365], 1 );
        ENABLE_PED_HELMET( l_U440[l_U365], 0 );
        CREATE_OBJECT( -199526871, l_U465[l_U365]._fU0 + 1, l_U465[l_U365]._fU4 + 1, l_U465[l_U365]._fU8 + 1, ref l_U290[l_U365], 1 );
        if (NOT (IS_CHAR_DEAD( l_U440[l_U365] )))
        {
            ATTACH_OBJECT_TO_PED( l_U290[l_U365], l_U440[l_U365], 1219, 0.20000000, 0.06520000, 0, 9, 11, 0, 0 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U440[l_U365], 1 );
    }
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U440[3] );
    SET_CHAR_COMPONENT_VARIATION( l_U440[0], 0, 2, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[0], 2, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[1], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[1], 1, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[1], 2, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[2], 0, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[2], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U440[2], 2, 0, 1 );
    if (NOT (IS_CHAR_INJURED( l_U440[0] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U440[1] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[1] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[1], 1, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[0], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[0] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[0], 0, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[1], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U440[2] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U440[3] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[3] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[3], 1, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[2], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[2] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[2], 0, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[3], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U440[4] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U440[5] )))
        {
            TASK_CHAT_WITH_CHAR( l_U440[4], l_U440[5], 1, 1 );
            TASK_CHAT_WITH_CHAR( l_U440[5], l_U440[4], 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U440[6] )))
        {
            TASK_LOOK_AT_CHAR( l_U440[6], l_U440[4], -2, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U440[7] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U440[8] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[8] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[8], 1, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[7], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
            OPEN_SEQUENCE_TASK( ref l_U333 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U440[7] );
            TASK_CHAT_WITH_CHAR( 0, l_U440[7], 0, 1 );
            CLOSE_SEQUENCE_TASK( l_U333 );
            TASK_PERFORM_SEQUENCE( l_U440[8], l_U333 );
            CLEAR_SEQUENCE_TASK( l_U333 );
        }
    }
    return;
}

void sub_16214(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_13305( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

void sub_16290()
{
    CREATE_CAR( 1938952078, -271.15970000, 1524.35800000, 19.26480000, ref l_U275, 1 );
    SET_CAR_HEADING( l_U275, 270.58800000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U275 );
    return;
}

int sub_16500(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_16516()) AND (NOT bParam0)) || ((sub_16570()) AND (bParam0)))) || (sub_16599())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_16658()))
    {
        return 1;
    }
    return 0;
}

int sub_16516()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_16570()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_16599()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_16658()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U239;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_16776()
{
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (((((NOT (IS_VEH_DRIVEABLE( l_U275 ))) || (CHECK_STUCK_TIMER( l_U275, 3, 60000 ))) || (CHECK_STUCK_TIMER( l_U275, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U275, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U275, 0, 5000 )))
        {
            CLEAR_PRINTS();
            sub_10687( 0 );
            sub_8864( ref l_U568, 0 );
            l_U269 = 18;
        }
    }
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (NOT (IS_CAR_DEAD( l_U275 )))
        {
            if (IS_CAR_ON_FIRE( l_U275 ))
            {
                CLEAR_PRINTS();
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                l_U269 = 18;
            }
        }
    }
    return;
}

int sub_17010()
{
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        if (DOES_CHAR_EXIST( l_U440[l_U365] ))
        {
            if ((IS_CHAR_INJURED( l_U440[l_U365] )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U440[l_U365], sub_4156(), 0 )))
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U440[l_U365], 59 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_17916()
{
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
    }
    return;
}

void sub_18058()
{
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (IS_VEH_DRIVEABLE( l_U275 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4156(), l_U275, 150, 150, 150, 0 )))
            {
                sub_10687( 0 );
                sub_8864( ref l_U568, 0 );
                CLEAR_PRINTS();
                sub_11173();
                sub_11323();
                PRINT_NOW( "CP4_18", 7000, 0 );
                sub_11785();
            }
        }
    }
    return;
}

int sub_18321(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    sub_18330();
    sub_19210();
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if ((uParam10) AND (IS_WANTED_LEVEL_GREATER( sub_955(), 0 )))
            {
                if ((DOES_BLIP_EXIST( l_U234 )) || (DOES_BLIP_EXIST( l_U229 )))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
                    sub_19447( uParam8 );
                }
                if ((NOT (sub_16500( 0 ))) AND (NOT l_U203))
                {
                    sub_19511( uParam11, 0 );
                    l_U247 = uParam11;
                    l_U203 = 1;
                }
            }
            else if (l_U203)
            {
                sub_19447( uParam11 );
                l_U203 = 0;
            }
            if (NOT (DOES_BLIP_EXIST( l_U234 )))
            {
                ADD_BLIP_FOR_COORD( uParam1, uParam2, uParam3 - 1.00000000, ref l_U234 );
                sub_19682( l_U234 );
                if (l_U222)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                }
            }
            if (NOT (sub_16500( 0 )))
            {
                if (NOT l_U205)
                {
                    sub_19511( uParam8, 0 );
                    l_U205 = 1;
                }
            }
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_4156(), uParam0 ))
                {
                    l_U218 = 1;
                    if (DOES_BLIP_EXIST( l_U229 ))
                    {
                        sub_19447( uParam9 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
                    }
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4156(), uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7 )) AND (sub_19922()))
                    {
                        sub_19447( uParam8 );
                        sub_19447( uParam9 );
                        sub_19447( uParam11 );
                        sub_11323();
                        return 1;
                    }
                }
                else if (NOT (IS_CHAR_IN_CAR( sub_4156(), uParam0 )))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_19447( uParam8 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U229 )))
                    {
                        ADD_BLIP_FOR_CAR( uParam0, ref l_U229 );
                        CHANGE_BLIP_DISPLAY( l_U229, 2 );
                        SET_BLIP_AS_FRIENDLY( l_U229, 1 );
                        if (l_U218)
                        {
                            if (NOT l_U208)
                            {
                                sub_19511( uParam9, 0 );
                                l_U208 = 1;
                                sub_19682( l_U229 );
                            }
                        }
                    }
                }
            }
        }
        else
        {
            sub_11323();
        }
        sub_20636( uParam1, uParam2, uParam3, 0, uParam0 );
    }
    sub_24096( uParam1, uParam2, uParam3 );
    return 0;
}

void sub_18330()
{
    if (NOT l_U216)
    {
        l_U251 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U203 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U204 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U205 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U206 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U207 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U210[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U210[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U210[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U215 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U236, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U237, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U238, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U248._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U248._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U248._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U217 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U218 );
        END_WIDGET_GROUP();
        l_U216 = 1;
    }
    return;
}

void sub_19210()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4156(), 0 );
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 0 );
            }
        }
    }
    return;
}

void sub_19447(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_19511(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U239 );
    return;
}

void sub_19682(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U235 ))
        {
            SET_ROUTE( l_U235, 0 );
        }
        l_U235 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_19922()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_4156() )) || (IS_CHAR_IN_ANY_HELI( sub_4156() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_19999( sub_4156() ))
        {
            if ((sub_20077( 1, iVar2 )) || (l_U215))
            {
                return 1;
            }
        }
    }
    else if ((sub_20077( 1, iVar2 )) || (l_U215))
    {
        return 1;
    }
    return 0;
}

int sub_19999(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_20077(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4156()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_955() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_955() )))
    {
        return 0;
    }
    return 1;
}

void sub_20636(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[1] uVar7;

    array(ref uVar7, 1);
    sub_20659( uParam0, uParam1, uParam2, uParam3, uParam4 );
    return;
}

void sub_20659(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_18330();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_4156() )))
    {
        GET_CHAR_HEADING( sub_4156(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_955() );
            sub_20870( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_21291( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_4156() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4156(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U243[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U243[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4156() );
                    WARP_CHAR_INTO_CAR( sub_4156(), uParam4 );
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                            }
                        }
                    }
                }
                sub_21291( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4156() );
                    WARP_CHAR_INTO_CAR( sub_4156(), uVar8 );
                    sub_22198( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4156() );
                        WARP_CHAR_INTO_CAR( sub_4156(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_22818( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_20870(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_4156(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_20990( (uParam0^) );
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

void sub_20990(unknown uParam0)
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

void sub_21291(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_4156(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_4156(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_4156(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_4156(), uParam3 );
    return;
}

void sub_22198(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_22818(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_4156() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_23198( sub_4156(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_23198( sub_4156(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_23198( sub_4156(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_23747( 0 );
        sub_23747( 1 );
        sub_23747( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U202 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U202;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_23198(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_23209( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12124( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_23209(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_23747(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_24096(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_24121( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4156(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U236, l_U236, l_U236, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
            }
        }
    }
    return;
}

int sub_24121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_24138( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4156(), uParam0, uParam1, uParam4, uParam4, 0 )))
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

int sub_24138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_24709()
{
    int iVar2;

    l_U564 = 9;
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        if (DOES_CHAR_EXIST( l_U440[l_U365] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U440[l_U365], 59 ))
            {
                l_U564--;
                if (DOES_BLIP_EXIST( l_U455[l_U365] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U455[l_U365] );
                    if (NOT (IS_CHAR_DEAD( l_U440[l_U365] )))
                    {
                        CLEAR_CHAR_TASKS( l_U440[l_U365] );
                    }
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
                    if (iVar2 == 0)
                    {
                        SAY_AMBIENT_SPEECH( l_U440[l_U365], "SURPRISED", 1, 1, 2 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U440[l_U365], "DODGE", 1, 1, 2 );
                    }
                    if (NOT (sub_8516( l_U568 )))
                    {
                        sub_7532( "E2Tm4_POP6", ref l_U568, 6, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U290[l_U365] ))
                    {
                        DETACH_OBJECT( l_U290[l_U365], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U440[l_U365] )))
                    {
                        TASK_SMART_FLEE_CHAR( l_U440[l_U365], sub_4156(), 200, 120000 );
                        SET_CHAR_KEEP_TASK( l_U440[l_U365], 1 );
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U440[l_U365] );
                }
            }
        }
        else
        {
            l_U564--;
        }
    }
    return;
}

void sub_25218()
{
    if (DOES_VEHICLE_EXIST( l_U277 ))
    {
        if (IS_VEH_DRIVEABLE( l_U277 ))
        {
            if (IS_CHAR_IN_CAR( sub_4156(), l_U277 ))
            {
                if (DOES_BLIP_EXIST( l_U276 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
                }
                if (IS_THIS_PRINT_BEING_DISPLAYED( "CP4_19", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_THIS_PRINT( "CP4_19" );
                }
            }
            else if (NOT l_U360)
            {
                PRINT( "CP4_19", 7500, 0 );
                l_U360 = 1;
            }
            if (NOT (DOES_BLIP_EXIST( l_U276 )))
            {
                ADD_BLIP_FOR_CAR( l_U275, ref l_U276 );
                SET_BLIP_AS_FRIENDLY( l_U276, 1 );
                sub_10247( l_U276 );
            }
        }
    }
    return;
}

void sub_25844()
{
    for ( l_U365 = 0; l_U365 <= 8; l_U365++ )
    {
        if (DOES_CHAR_EXIST( l_U440[l_U365] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U440[l_U365] )))
            {
                CLEAR_CHAR_TASKS( l_U440[l_U365] );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U440[l_U365] );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U450 );
    return;
}

void sub_26494()
{
    if (NOT (IS_CHAR_DEAD( l_U271 )))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_955(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U272 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U272 );
            }
            if (NOT l_U356)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_NOW( "CP4_10", 7500, 0 );
                    l_U356 = 1;
                }
            }
        }
        else
        {
            CLEAR_THIS_PRINT( "CP4_10" );
            l_U356 = 0;
        }
    }
    return;
}

void sub_27672()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_28132(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_28162( ref uVar5, uParam2 );
}

int sub_28162(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_28187( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_28187( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_28187(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_28978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    return sub_29033( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12, uParam13, 0 );
}

int sub_29033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    unknown uVar22;
    int iVar23;
    int I;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_29081();
    sub_18330();
    sub_19210();
    if (sub_29425( l_U243[0], l_U243[1], l_U243[2], uParam11, uParam12, uParam13, uParam14, l_U237, uParam16, 0, 0, 0 ))
    {
        sub_19447( uParam11 );
        sub_19447( uParam12 );
        sub_19447( uParam13 );
        sub_19447( uParam14 );
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_34889())
            {
                l_U207 = 1;
                l_U218 = 1;
                sub_19447( uParam15 );
                sub_19447( uParam19 );
                if ((uParam17) AND (IS_WANTED_LEVEL_GREATER( sub_955(), 0 )))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_19447( uParam10 );
                    }
                    if (((NOT (sub_16500( 0 ))) AND (NOT sub_35051())) AND (NOT l_U203))
                    {
                        sub_19511( uParam18, 0 );
                        l_U247 = uParam18;
                        l_U203 = 1;
                        l_U204 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U203)
                {
                    sub_19447( uParam18 );
                    l_U203 = 0;
                    l_U204 = 1;
                }
                if (l_U204)
                {
                    if (NOT (sub_16500( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U204 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U234 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                    sub_19682( l_U234 );
                    if (l_U222)
                    {
                        SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                    }
                }
                if (NOT (sub_16500( 0 )))
                {
                    if (NOT l_U205)
                    {
                        sub_19511( uParam10, 0 );
                        l_U205 = 1;
                    }
                }
                if (l_U223)
                {
                    iParam6 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4156(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, iParam6 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref uVar22 );
                    iVar23 = 1;
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U243[I], uVar22 )))
                            {
                                iVar23 = 0;
                            }
                        }
                    }
                    if ((iVar23) AND (sub_19922()))
                    {
                        sub_19447( uParam10 );
                        sub_19447( uParam15 );
                        sub_19447( uParam11 );
                        sub_19447( uParam12 );
                        sub_19447( uParam13 );
                        sub_19447( uParam14 );
                        sub_19447( uParam18 );
                        sub_19447( uParam19 );
                        sub_11323();
                        return 1;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_19447( uParam10 );
            }
            if (NOT (sub_16500( 0 )))
            {
                if (NOT l_U207)
                {
                    sub_19511( uParam15, 0 );
                    l_U207 = 1;
                }
                else if (l_U218)
                {
                    if (NOT (IS_STRING_NULL( uParam19 )))
                    {
                        if (NOT l_U208)
                        {
                            sub_19511( uParam19, 0 );
                            l_U208 = 1;
                        }
                    }
                    else if (NOT l_U208)
                    {
                        sub_19511( uParam15, 0 );
                        l_U208 = 1;
                    }
                }
            }
        }
    }
    else if (l_U203)
    {
        l_U203 = 0;
    }
    sub_19447( uParam10 );
    sub_19447( uParam15 );
    sub_19447( uParam19 );
    sub_19447( uParam18 );
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    sub_20659( uParam0, uParam1, uParam2, 0, 0 );
    sub_24096( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_29081()
{
    int I;

    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] )) AND (sub_29174( l_U243[I] ))) AND (sub_16516()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_4156() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() )) AND (sub_29174( sub_4156() ))) AND (sub_16516()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_4156(), 1 );
            }
        }
    }
    return;
}

int sub_29174(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U19._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_29425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U243[0] = uParam0;
    l_U243[1] = uParam1;
    l_U243[2] = uParam2;
    l_U242 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_29596()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U223)
            {
                sub_19511( "MORE_SEATS", 0 );
                l_U223 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U223 = 0;
        sub_19447( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U243[I], sub_27672() ))
                        {
                            if ((NOT sub_29596()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() )))
                            {
                                if (NOT (sub_30136( l_U243[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U243[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4156(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U243[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U243[I], sub_27672() ))
                {
                    if (sub_30697())
                    {
                        if (l_U225[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], -1 );
                            l_U225[I] = 0;
                        }
                    }
                    else if (NOT l_U225[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], 2 );
                        l_U225[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() ))) AND (NOT (sub_30879( l_U243[I], iParam9 )))) AND (NOT (sub_30975( l_U243[I], iParam9 ))))
                {
                    if (sub_31088( l_U243[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U243[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_27672(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U230[I] )))
                        {
                            GET_GAME_TIMER( ref l_U240 );
                            ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                            CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                            if (bParam8)
                            {
                                sub_19682( l_U230[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U230[I] ))
                {
                    if (((sub_31857( l_U243[I] )) || (sub_30879( l_U243[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U230[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_19447( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_19682( l_U230[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U243[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U220))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], iParam9 )))
                                {
                                    if (NOT (sub_31857( l_U243[I] )))
                                    {
                                        if (sub_19999( l_U243[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U243[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U243[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4156(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_4156(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U243[I], sub_27672() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 1 );
                                if (l_U219)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U243[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_4156(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                                CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() )))
                        {
                            if (sub_31088( l_U243[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U243[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                SET_GROUP_MEMBER( sub_27672(), l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_4156(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_27672() )))
                        {
                            SET_GROUP_MEMBER( sub_27672(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U243[I], sub_27672() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_19447( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_16500( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        if ((sub_30136( l_U243[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U243[I], sub_4156(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U240) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U241 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U241 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U209) AND (NOT (l_U241 == iVar15)))
                        {
                            sub_19511( uParam6, 0 );
                            l_U209 = 1;
                            l_U241 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U210[I]) AND (NOT (l_U241 == iVar15)))
                                {
                                    sub_19511( uVar28[I], 0 );
                                    l_U210[I] = 1;
                                    l_U241 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U241 = 0;
            }
        }
    }
    l_U219 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_19447( uVar28[I] );
            }
        }
        sub_19447( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_4156() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4156(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                {
                    SET_CHAR_COORDINATES( l_U243[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_29596()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref uVar2 );
        if (sub_29637( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_29637(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_CHAR_EXIST( l_U243[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

int sub_30136(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_955() ))
    {
        GET_CAR_CHAR_IS_USING( sub_4156(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4156(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
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

int sub_30697()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_4156(), ref uVar2 );
    if (sub_29637( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_30879(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_30975(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_27672() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31088(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4156(), uVar5 ))
                    {
                        if (sub_29596())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4156(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4156(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_30697())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_4156(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
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

int sub_31857(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4156() ))
        {
            if (sub_31905( sub_4156(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_27672(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_27672() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_27672(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_31905(unknown uParam0, unknown uParam1)
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

int sub_34889()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref uVar2 );
        if (sub_29637( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_35051()
{
    if (NOT (IS_CHAR_INJURED( l_U242 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U242 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_35995()
{
    unknown[5] uVar2;
    vector[5] vVar8;
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
    float[5] fVar24;

    sub_10687( 0 );
    CLEAR_WANTED_LEVEL( sub_955() );
    CLEAR_AREA( 108.50630000, -238.45420000, 13.71230000, 100, 1 );
    SWITCH_ROADS_OFF( 80, 65296, -10, 130, 65316, 50 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U399 );
    if (IS_CHAR_IN_ANY_CAR( sub_4156() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4156(), ref l_U273 );
    }
    if (NOT l_U400)
    {
        sub_36154();
    }
    array(ref uVar2, 5);
    array(ref vVar8, 5);
    vVar8[0] = {112.66080000, -244.95370000, 32.22590000};
    vVar8[1] = {113.49360000, -245.04180000, 32.22590000};
    vVar8[2] = {99.42180000, -249.81170000, 50.86670000};
    vVar8[3] = {98.83510000, -249.86160000, 50.86670000};
    vVar8[4] = {114.11990000, -250.28620000, 50.86670000};
    array(ref fVar24, 5);
    fVar24[0] = 332.49590000;
    fVar24[1] = 10.47000000;
    fVar24[2] = 14.23260000;
    fVar24[3] = 341.10450000;
    fVar24[4] = 291.73980000;
    for ( l_U365 = 0; l_U365 <= 2; l_U365++ )
    {
        CREATE_CHAR( 26, 314506937, vVar8[l_U365]._fU0, vVar8[l_U365]._fU4, vVar8[l_U365]._fU8, ref uVar2[l_U365], 1 );
    }
    SET_CHAR_COMPONENT_VARIATION( uVar2[0], 7, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( uVar2[0], 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( uVar2[0], 2, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( uVar2[1], 7, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( uVar2[1], 1, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( uVar2[1], 2, 0, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[2] );
    for ( l_U365 = 3; l_U365 <= 4; l_U365++ )
    {
        CREATE_CHAR( 26, -11396610, vVar8[l_U365]._fU0, vVar8[l_U365]._fU4, vVar8[l_U365]._fU8, ref uVar2[l_U365], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[l_U365] );
    }
    for ( l_U365 = 0; l_U365 <= 4; l_U365++ )
    {
        SET_CHAR_HEADING( uVar2[l_U365], fVar24[l_U365] );
    }
    if (NOT (IS_CHAR_DEAD( l_U271 )))
    {
        if (IS_PED_IN_GROUP( l_U271 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U271 );
        }
    }
    if (NOT (IS_CHAR_INJURED( uVar2[0] )))
    {
        if (NOT (IS_CHAR_INJURED( uVar2[1] )))
        {
            TASK_CHAT_WITH_CHAR( uVar2[0], uVar2[1], 1, 1 );
            TASK_CHAT_WITH_CHAR( uVar2[1], uVar2[0], 0, 1 );
        }
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U402, 108.71400000, -227.93520000, 14.01775000 );
    SET_CAM_ROT( l_U402, 8.81946800, -0.00000000, 178.08080000 );
    SET_CAM_FOV( l_U402, 45.00000000 );
    SET_CAM_POS( l_U403, 108.71400000, -227.93520000, 14.01775000 );
    SET_CAM_ROT( l_U403, 56.37493000, -0.00000000, 178.08080000 );
    SET_CAM_FOV( l_U403, 45.00000000 );
    SET_CAM_ACTIVE( l_U404, 1 );
    SET_CAM_PROPAGATE( l_U404, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U404, l_U402, l_U403, 8500, 0 );
    SETTIMERA( 0 );
    while (l_U517 == 1)
    {
        switch (l_U567)
        {
            case 0:
            sub_7532( "E2Tm4_POP14", ref l_U568, 7, 1 );
            if (NOT (IS_CAR_DEAD( l_U273 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U333 );
                TASK_LEAVE_CAR( 0, l_U273 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 109.52140000, -243.98870000, 13.79720000, 2, 30000, 1 );
                CLOSE_SEQUENCE_TASK( l_U333 );
                if (NOT (IS_CHAR_INJURED( l_U271 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U271, l_U333 );
                }
                CLEAR_SEQUENCE_TASK( l_U333 );
            }
            l_U567++;
            break;
            case 1:
            if (TIMERA() > 9000)
            {
                l_U567++;
            }
            break;
            case 2:
            SET_CAM_ACTIVE( l_U404, 0 );
            SET_CAM_PROPAGATE( l_U404, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DELETE_CHAR( ref l_U271 );
            l_U517 = 0;
            break;
        }
        if (sub_37538())
        {
            l_U517 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            INCREMENT_INT_STAT( 372, 1 );
            SET_CAM_ACTIVE( l_U404, 0 );
            SET_CAM_PROPAGATE( l_U404, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DELETE_CHAR( ref l_U271 );
        }
        WAIT( 0 );
    }
    END_CAM_COMMANDS( ref l_U399 );
    ENABLE_SCENE_STREAMING( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    for ( l_U365 = 0; l_U365 <= 4; l_U365++ )
    {
        if (DOES_CHAR_EXIST( uVar2[l_U365] ))
        {
            DELETE_CHAR( ref uVar2[l_U365] );
        }
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_955(), 1 );
    return;
}

void sub_36154()
{
    if (NOT (DOES_CAM_EXIST( l_U401 )))
    {
        CREATE_CAM( 14, ref l_U401 );
    }
    if (NOT (DOES_CAM_EXIST( l_U403 )))
    {
        CREATE_CAM( 14, ref l_U403 );
    }
    if (NOT (DOES_CAM_EXIST( l_U402 )))
    {
        CREATE_CAM( 14, ref l_U402 );
    }
    if (NOT (DOES_CAM_EXIST( l_U404 )))
    {
        CREATE_CAM( 3, ref l_U404 );
    }
    l_U400 = 1;
    return;
}

int sub_37538()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_37989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_38033( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_38033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_38677()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43678 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_38742( 0 );
        sub_39389();
        g_U43683 = 1;
    }
    sub_39551( 3 );
    sub_39821();
    sub_2752();
    return;
}

void sub_38742(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 1;
    switch (uParam0)
    {
        case 0:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 1)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U43026[iVar3]._fU0)
    {
        iVar4 = g_U43026[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_38854( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_38854(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_39024( 0 );
    return;
}

void sub_39024(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_39269();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_39269()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_39389()
{
    g_U15811[38] = 1;
    sub_39418( 2, 10000, 60000 );
    return;
}

void sub_39418(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_39433( uParam0, uParam1, uParam2 );
    return;
}

void sub_39433(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_39551(unknown uParam0)
{
    if (NOT g_U42941[uParam0])
    {
        g_U42941[uParam0] = 1;
        sub_7706( "\n ----------------------------------------------------------------" );
        sub_5203( "\n  Following block of Celeb Stories has been unlocked CELEB_BLOCK_", uParam0 );
        sub_7706( "\n ----------------------------------------------------------------" );
    }
    return;
}

void sub_39821()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_1028( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_955() );
    sub_39868();
    sub_39952();
    sub_40040( 0 );
    sub_1790();
    return;
}

void sub_39868()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_39952()
{
    sub_39961();
    return;
}

void sub_39961()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_40040(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_40091( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_40091(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_40956()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U288 );
    if (l_U288 == 0)
    {
        l_U289 = "E2Tm4_CMGEN6";
    }
    if (l_U288 == 1)
    {
        l_U289 = "E2Tm4_CMGEN7";
    }
    if (l_U288 == 2)
    {
        l_U289 = "E2Tm4_CMGEN8";
    }
    if (l_U288 == 3)
    {
        l_U289 = "E2Tm4_CMGEN9";
    }
    if (l_U288 == 4)
    {
        l_U289 = "E2Tm4_CMGEN0";
    }
    return;
}